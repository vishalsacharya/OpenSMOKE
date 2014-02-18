/***************************************************************************
 *   Copyright (C) 2006-2008 by Alberto Cuoci							   *
 *   alberto.cuoci@polimi.it                                               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include <sstream>
#include "basic/OpenSMOKE_Constants.h"
#include "idealreactors/pfr/OpenSMOKE_PFR_Geometry.h"
#include "basic/OpenSMOKE_Conversions.h"

const double OpenSMOKE_PFR_Geometry::pi_over_4  = Constants::pi / 4.;
const double OpenSMOKE_PFR_Geometry::_4_over_pi = 4. / Constants::pi;

void OpenSMOKE_PFR_Geometry::ErrorMessage(const string message)
{
    cout << endl;
    cout << "Class:  Plug Flow Reactor Geometry"		<< endl;
    cout << "Object: " << name_object					<< endl;
    cout << "Error:  " << message						<< endl;
    cout << "Press a key to continue... "				<< endl;
    getchar();
    exit(-1);
}

OpenSMOKE_PFR_Geometry::OpenSMOKE_PFR_Geometry()
{
    iKind		= 0;				// The diameter remains constant
	name_object	= "Default name";	// Object Name
}

void OpenSMOKE_PFR_Geometry::SetName(const string name)
{
	name_object	= name;				// Object Name
}

void OpenSMOKE_PFR_Geometry::Setup(const string fileName)
{
    int i;
    string label;
    string variable;
    string conversion_x;
    string conversion_y;
    BzzVector x_vector;
    BzzVector y_vector;

    ifstream fInput;
    openInputFileAndControl(fInput, fileName.c_str());

    fInput >> label;
	if (label != "#X")
		ErrorMessage("Only the following options are available: #X");

	fInput >> label;
    if (label != "SPACE")
        ErrorMessage("Only the following options are available: SPACE");

	fInput >> conversion_x;

	fInput >> label;
	if (label != "#Y")
		ErrorMessage("Only the following options are available: #X");

	fInput >> variable;
    if (variable != "DIAMETER" && variable != "AREA")
        ErrorMessage("Only the following options are available: DIAMETER || AREA");

	fInput >> conversion_y;

	fInput >> label;
	if (label != "#List")
		ErrorMessage("Expected #List key word");

    for(;;)
    {
        fInput >> label;
		if (label == "#END")  break;

        x_vector.Append( atof(label.c_str()) );
        
        fInput >> label;
        y_vector.Append( atof(label.c_str()) );
    }

	// Checking values
	if (x_vector[1] != 0.)	ErrorMessage("The abscissas must start from 0.0");
	if (y_vector[1] <= 0.)	ErrorMessage("The initial diameter must be larger than 0.0");

	// In case of linear profile
	
	if (x_vector.Size() == 2)
	{
		if (variable == "DIAMETER")
		{
			iKind = 1;

			x_vector *= OpenSMOKE_Conversions::conversion_length(1.0, conversion_x);
			y_vector *= OpenSMOKE_Conversions::conversion_length(1.0, conversion_y);

			D0 = y_vector[1];
			slope_diameter  =	(y_vector[2]-y_vector[1]) / x_vector[2];
		}
		else if (variable == "AREA")
		{
			iKind = 2;

			x_vector *= OpenSMOKE_Conversions::conversion_length(1.0, conversion_x);
			y_vector *= OpenSMOKE_Conversions::conversion_area(1.0, conversion_y);

			Area0 = y_vector[1];
			slope_area		=	(y_vector[2]-y_vector[1]) / x_vector[2];
		}
	}
	
    else 
	{
		if (variable == "DIAMETER")
		{
			iKind = 3;

			x_vector *= OpenSMOKE_Conversions::conversion_length(1.0, conversion_x);
			y_vector *= OpenSMOKE_Conversions::conversion_length(1.0, conversion_y);

			BzzVector z_vector(x_vector.Size());
			for(i=1;i<=x_vector.Size()-1;i++)
				z_vector[i] = (y_vector[i+1]-y_vector[i]) / (x_vector[i+1]-x_vector[i]);
			i = x_vector.Size();
			z_vector[i] = (y_vector[i]-y_vector[i-1]) /	(x_vector[i]-x_vector[i-1]);

			interpolation_diameter(x_vector, y_vector);
			interpolation_dDiameter(x_vector, z_vector);

		}
		else if (variable == "AREA")
		{
			iKind = 4;

			x_vector *= OpenSMOKE_Conversions::conversion_length(1.0, conversion_x);
			y_vector *= OpenSMOKE_Conversions::conversion_area(1.0, conversion_y);

			BzzVector z_vector(x_vector.Size());
			for(i=1;i<=x_vector.Size()-1;i++)
				z_vector[i] = (y_vector[i+1]-y_vector[i])/(x_vector[i+1]-x_vector[i]);
			i = x_vector.Size();
			z_vector[i] = (y_vector[i]-y_vector[i-1])/(x_vector[i]-x_vector[i-1]);
			
			interpolation_area(x_vector, y_vector);
			interpolation_dArea(x_vector, z_vector);
		}
	}
}

void OpenSMOKE_PFR_Geometry::Update(const double x, double &D, double &Area)
{
    double dArea;

    switch(iKind)
    {
        case 0:

        break;

        case 1:     // Linear diameter
            D = D0 + slope_diameter*x;
            Area = pi_over_4 * D*D;

        break;

        case 2:     // Linear area
            Area = Area0 + slope_area*x;
            D = sqrt(_4_over_pi * Area);

        break;

        case 3:    // Diameter points
            D				= interpolation_diameter(x);
            Area			= pi_over_4 * D*D;

        break;

        case 4:    // Area points
            Area			= interpolation_area(x);
            D				= sqrt(_4_over_pi * Area);
            dArea			= interpolation_dArea(x);
    }
}