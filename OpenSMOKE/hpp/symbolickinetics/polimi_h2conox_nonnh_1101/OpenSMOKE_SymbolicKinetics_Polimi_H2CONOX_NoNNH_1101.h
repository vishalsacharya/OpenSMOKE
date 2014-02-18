/***************************************************************************
 *   Copyright (C) 2003-2008 by                                            *
 *   Alberto Cuoci		                                                   *
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

#if !defined(OPENSMOKE_SYMBOLIC_KINETICS_POLIMI_H2CONOX_NONNH_1101)
#define OPENSMOKE_SYMBOLIC_KINETICS_POLIMI_H2CONOX_NONNH_1101

#include "BzzMath.hpp"
#include "symbolickinetics/OpenSMOKE_SymbolicKinetics.h"

class OpenSMOKE_SymbolicKinetics_Polimi_H2CONOX_NoNNH_1101 : public OpenSMOKE_SymbolicKinetics
{
public:
	
	OpenSMOKE_SymbolicKinetics_Polimi_H2CONOX_NoNNH_1101();

	virtual void assignKineticConstants(BzzVector &xxxk, BzzVector &xxxuK, BzzVector &xxxlogFcent, BzzVector &xxxkFallOff);
	virtual void giveReactionRates(double cTot, BzzVector &c, BzzVector &R);
	virtual void giveJacobian(BzzVector &c, BzzMatrix &J);
	virtual void SetAccurateJacobian();
	virtual void UnsetAccurateJacobian();

private:
 
 double k1, uK1, kFallOff1, logFcent1, r1;
 double k2, uK2, kFallOff2, logFcent2, r2;
 double k3, uK3, kFallOff3, logFcent3, r3;
 double k4, uK4, kFallOff4, logFcent4, r4;
 double k5, uK5, kFallOff5, logFcent5, r5;
 double k6, uK6, kFallOff6, logFcent6, r6;
 double k7, uK7, kFallOff7, logFcent7, r7;
 double k8, uK8, kFallOff8, logFcent8, r8;
 double k9, uK9, kFallOff9, logFcent9, r9;
 double k10, uK10, kFallOff10, logFcent10, r10;
 double k11, uK11, kFallOff11, logFcent11, r11;
 double k12, uK12, kFallOff12, logFcent12, r12;
 double k13, uK13, kFallOff13, logFcent13, r13;
 double k14, uK14, kFallOff14, logFcent14, r14;
 double k15, uK15, kFallOff15, logFcent15, r15;
 double k16, uK16, kFallOff16, logFcent16, r16;
 double k17, uK17, kFallOff17, logFcent17, r17;
 double k18, uK18, kFallOff18, logFcent18, r18;
 double k19, uK19, kFallOff19, logFcent19, r19;
 double k20, uK20, kFallOff20, logFcent20, r20;
 double k21, uK21, kFallOff21, logFcent21, r21;
 double k22, uK22, kFallOff22, logFcent22, r22;
 double k23, uK23, kFallOff23, logFcent23, r23;
 double k24, uK24, kFallOff24, logFcent24, r24;
 double k25, uK25, kFallOff25, logFcent25, r25;
 double k26, uK26, kFallOff26, logFcent26, r26;
 double k27, uK27, kFallOff27, logFcent27, r27;
 double k28, uK28, kFallOff28, logFcent28, r28;
 double k29, uK29, kFallOff29, logFcent29, r29;
 double k30, uK30, kFallOff30, logFcent30, r30;
 double k31, uK31, kFallOff31, logFcent31, r31;
 double k32, uK32, kFallOff32, logFcent32, r32;
 double k33, uK33, kFallOff33, logFcent33, r33;
 double k34, uK34, kFallOff34, logFcent34, r34;
 double k35, uK35, kFallOff35, logFcent35, r35;
 double k36, uK36, kFallOff36, logFcent36, r36;
 double k37, uK37, kFallOff37, logFcent37, r37;
 double k38, uK38, kFallOff38, logFcent38, r38;
 double k39, uK39, kFallOff39, logFcent39, r39;
 double k40, uK40, kFallOff40, logFcent40, r40;
 double k41, uK41, kFallOff41, logFcent41, r41;
 double k42, uK42, kFallOff42, logFcent42, r42;
 double k43, uK43, kFallOff43, logFcent43, r43;
 double k44, uK44, kFallOff44, logFcent44, r44;
 double k45, uK45, kFallOff45, logFcent45, r45;
 double k46, uK46, kFallOff46, logFcent46, r46;
 double k47, uK47, kFallOff47, logFcent47, r47;
 double k48, uK48, kFallOff48, logFcent48, r48;
 double k49, uK49, kFallOff49, logFcent49, r49;
 double k50, uK50, kFallOff50, logFcent50, r50;
 double k51, uK51, kFallOff51, logFcent51, r51;
 double k52, uK52, kFallOff52, logFcent52, r52;
 double k53, uK53, kFallOff53, logFcent53, r53;
 double k54, uK54, kFallOff54, logFcent54, r54;
 double k55, uK55, kFallOff55, logFcent55, r55;
 double k56, uK56, kFallOff56, logFcent56, r56;
 double k57, uK57, kFallOff57, logFcent57, r57;
 double k58, uK58, kFallOff58, logFcent58, r58;
 double k59, uK59, kFallOff59, logFcent59, r59;
 double k60, uK60, kFallOff60, logFcent60, r60;
 double k61, uK61, kFallOff61, logFcent61, r61;
 double k62, uK62, kFallOff62, logFcent62, r62;
 double k63, uK63, kFallOff63, logFcent63, r63;
 double k64, uK64, kFallOff64, logFcent64, r64;
 double k65, uK65, kFallOff65, logFcent65, r65;
 double k66, uK66, kFallOff66, logFcent66, r66;
 double k67, uK67, kFallOff67, logFcent67, r67;
 double k68, uK68, kFallOff68, logFcent68, r68;
 double k69, uK69, kFallOff69, logFcent69, r69;
 double k70, uK70, kFallOff70, logFcent70, r70;
 double k71, uK71, kFallOff71, logFcent71, r71;
 double k72, uK72, kFallOff72, logFcent72, r72;
 double k73, uK73, kFallOff73, logFcent73, r73;
 double k74, uK74, kFallOff74, logFcent74, r74;
 double k75, uK75, kFallOff75, logFcent75, r75;
 double k76, uK76, kFallOff76, logFcent76, r76;
 double k77, uK77, kFallOff77, logFcent77, r77;
 double k78, uK78, kFallOff78, logFcent78, r78;
 double k79, uK79, kFallOff79, logFcent79, r79;
 double k80, uK80, kFallOff80, logFcent80, r80;
 double k81, uK81, kFallOff81, logFcent81, r81;
 double k82, uK82, kFallOff82, logFcent82, r82;
 double k83, uK83, kFallOff83, logFcent83, r83;
 double k84, uK84, kFallOff84, logFcent84, r84;
 double k85, uK85, kFallOff85, logFcent85, r85;
 double k86, uK86, kFallOff86, logFcent86, r86;
 double k87, uK87, kFallOff87, logFcent87, r87;
 double k88, uK88, kFallOff88, logFcent88, r88;
 double k89, uK89, kFallOff89, logFcent89, r89;
 double k90, uK90, kFallOff90, logFcent90, r90;
 double k91, uK91, kFallOff91, logFcent91, r91;
 double k92, uK92, kFallOff92, logFcent92, r92;
 double k93, uK93, kFallOff93, logFcent93, r93;
 double k94, uK94, kFallOff94, logFcent94, r94;
 double k95, uK95, kFallOff95, logFcent95, r95;
 double k96, uK96, kFallOff96, logFcent96, r96;
 double k97, uK97, kFallOff97, logFcent97, r97;
 double k98, uK98, kFallOff98, logFcent98, r98;
 double k99, uK99, kFallOff99, logFcent99, r99;
 double k100, uK100, kFallOff100, logFcent100, r100;
 double k101, uK101, kFallOff101, logFcent101, r101;
 double k102, uK102, kFallOff102, logFcent102, r102;
 double k103, uK103, kFallOff103, logFcent103, r103;
 double k104, uK104, kFallOff104, logFcent104, r104;
 double k105, uK105, kFallOff105, logFcent105, r105;
 double k106, uK106, kFallOff106, logFcent106, r106;
 double k107, uK107, kFallOff107, logFcent107, r107;
 double k108, uK108, kFallOff108, logFcent108, r108;
 double k109, uK109, kFallOff109, logFcent109, r109;
 double k110, uK110, kFallOff110, logFcent110, r110;
 double k111, uK111, kFallOff111, logFcent111, r111;
 double k112, uK112, kFallOff112, logFcent112, r112;
 double k113, uK113, kFallOff113, logFcent113, r113;
 double k114, uK114, kFallOff114, logFcent114, r114;
 double k115, uK115, kFallOff115, logFcent115, r115;
 double k116, uK116, kFallOff116, logFcent116, r116;
 double k117, uK117, kFallOff117, logFcent117, r117;
 double k118, uK118, kFallOff118, logFcent118, r118;
 double k119, uK119, kFallOff119, logFcent119, r119;
 double k120, uK120, kFallOff120, logFcent120, r120;
 double k121, uK121, kFallOff121, logFcent121, r121;
 double k122, uK122, kFallOff122, logFcent122, r122;
 double k123, uK123, kFallOff123, logFcent123, r123;
 double k124, uK124, kFallOff124, logFcent124, r124;
 double k125, uK125, kFallOff125, logFcent125, r125;
 double k126, uK126, kFallOff126, logFcent126, r126;
 double k127, uK127, kFallOff127, logFcent127, r127;
 double k128, uK128, kFallOff128, logFcent128, r128;
 double k129, uK129, kFallOff129, logFcent129, r129;
 double k130, uK130, kFallOff130, logFcent130, r130;
 double k131, uK131, kFallOff131, logFcent131, r131;
 double k132, uK132, kFallOff132, logFcent132, r132;
 double k133, uK133, kFallOff133, logFcent133, r133;
 double k134, uK134, kFallOff134, logFcent134, r134;
 double k135, uK135, kFallOff135, logFcent135, r135;
 double k136, uK136, kFallOff136, logFcent136, r136;
 double k137, uK137, kFallOff137, logFcent137, r137;
 double k138, uK138, kFallOff138, logFcent138, r138;
 double k139, uK139, kFallOff139, logFcent139, r139;
 double k140, uK140, kFallOff140, logFcent140, r140;
 double k141, uK141, kFallOff141, logFcent141, r141;
 double k142, uK142, kFallOff142, logFcent142, r142;
 double k143, uK143, kFallOff143, logFcent143, r143;
 double k144, uK144, kFallOff144, logFcent144, r144;
 double k145, uK145, kFallOff145, logFcent145, r145;
 double k146, uK146, kFallOff146, logFcent146, r146;
 double k147, uK147, kFallOff147, logFcent147, r147;
 double k148, uK148, kFallOff148, logFcent148, r148;
 double k149, uK149, kFallOff149, logFcent149, r149;
 double k150, uK150, kFallOff150, logFcent150, r150;
 double k151, uK151, kFallOff151, logFcent151, r151;
 double k152, uK152, kFallOff152, logFcent152, r152;
 double k153, uK153, kFallOff153, logFcent153, r153;
 double k154, uK154, kFallOff154, logFcent154, r154;
 double k155, uK155, kFallOff155, logFcent155, r155;
 double k156, uK156, kFallOff156, logFcent156, r156;
 double k157, uK157, kFallOff157, logFcent157, r157;
 double k158, uK158, kFallOff158, logFcent158, r158;
 double k159, uK159, kFallOff159, logFcent159, r159;
 double k160, uK160, kFallOff160, logFcent160, r160;
 double k161, uK161, kFallOff161, logFcent161, r161;
 double k162, uK162, kFallOff162, logFcent162, r162;
 double k163, uK163, kFallOff163, logFcent163, r163;
 double k164, uK164, kFallOff164, logFcent164, r164;
 double k165, uK165, kFallOff165, logFcent165, r165;
 double k166, uK166, kFallOff166, logFcent166, r166;
 double k167, uK167, kFallOff167, logFcent167, r167;
 double k168, uK168, kFallOff168, logFcent168, r168;
 double k169, uK169, kFallOff169, logFcent169, r169;
 double k170, uK170, kFallOff170, logFcent170, r170;
 double k171, uK171, kFallOff171, logFcent171, r171;
 double k172, uK172, kFallOff172, logFcent172, r172;
 double k173, uK173, kFallOff173, logFcent173, r173;
 double k174, uK174, kFallOff174, logFcent174, r174;
 double k175, uK175, kFallOff175, logFcent175, r175;
 double k176, uK176, kFallOff176, logFcent176, r176;
 double k177, uK177, kFallOff177, logFcent177, r177;
 double k178, uK178, kFallOff178, logFcent178, r178;

 double coeffM3;
 double coeffM9;
 double coeffM10;
 double coeffM11;
 double coeffM14;
 double coeffM15;
 double coeffM18;
 double coeffM23;
 double coeffM32;
 double coeffM45;
 double coeffM68;
 double coeffM75;
 double coeffM93;
 double coeffM94;
 double coeffM106;
 double coeffM107;
 double coeffM109;
 double coeffM124;
 double coeffM142;
 double coeffM150;
 double coeffM161;

 double coeffFallOff3; 
 double wF3; 
 double CFO3; 
 double dCFOdM3; 
 double dwFdM3; 
 double sigma3; 
 double lnPr3; 
 double coeffFallOff14; 
 double wF14; 
 double CFO14; 
 double dCFOdM14; 
 double dwFdM14; 
 double sigma14; 
 double lnPr14; 
 double coeffFallOff18; 
 double wF18; 
 double CFO18; 
 double dCFOdM18; 
 double dwFdM18; 
 double sigma18; 
 double coeffFallOff45; 
 double wF45; 
 double CFO45; 
 double dCFOdM45; 
 double dwFdM45; 
 double sigma45; 
 double coeffFallOff107; 
 double wF107; 
 double CFO107; 
 double dCFOdM107; 
 double dwFdM107; 
 double sigma107; 
 double coeffFallOff161; 
 double wF161; 
 double CFO161; 
 double dCFOdM161; 
 double dwFdM161; 
 double sigma161; 
 double lnPr161; 

 double rFlat3; 
 double rFlat9; 
 double rFlat10; 
 double rFlat11; 
 double rFlat14; 
 double rFlat15; 
 double rFlat18; 
 double rFlat23; 
 double rFlat32; 
 double rFlat45; 
 double rFlat68; 
 double rFlat75; 
 double rFlat93; 
 double rFlat94; 
 double rFlat106; 
 double rFlat107; 
 double rFlat109; 
 double rFlat124; 
 double rFlat142; 
 double rFlat150; 
 double rFlat161; 

  double d1d6;
  double d1d22;
  double d1d24;
  double d1d27;
  double d2d13;
  double d2d22;
  double d2d24;
  double d2d27;
  double d3d1;
  double d3d2;
  double d3d3;
  double d3d4;
  double d3d5;
  double d3d6;
  double d3d7;
  double d3d8;
  double d3d9;
  double d3d10;
  double d3d11;
  double d3d12;
  double d3d13;
  double d3d14;
  double d3d15;
  double d3d16;
  double d3d17;
  double d3d18;
  double d3d19;
  double d3d20;
  double d3d21;
  double d3d22;
  double d3d23;
  double d3d24;
  double d3d25;
  double d3d26;
  double d3d27;
  double d3d28;
  double d3d29;
  double d3d30;
  double d3d31;
  double d3d32;
  double d4d6;
  double d4d24;
  double d4d28;
  double d5d6;
  double d5d15;
  double d5d27;
  double d5d28;
  double d6d24;
  double d6d27;
  double d6d28;
  double d7d6;
  double d7d22;
  double d7d27;
  double d7d28;
  double d8d15;
  double d8d22;
  double d8d27;
  double d9d1;
  double d9d2;
  double d9d3;
  double d9d4;
  double d9d5;
  double d9d6;
  double d9d7;
  double d9d8;
  double d9d9;
  double d9d10;
  double d9d11;
  double d9d12;
  double d9d13;
  double d9d14;
  double d9d15;
  double d9d16;
  double d9d17;
  double d9d18;
  double d9d19;
  double d9d20;
  double d9d21;
  double d9d22;
  double d9d23;
  double d9d24;
  double d9d25;
  double d9d26;
  double d9d27;
  double d9d28;
  double d9d29;
  double d9d30;
  double d9d31;
  double d9d32;
  double d10d1;
  double d10d2;
  double d10d3;
  double d10d4;
  double d10d5;
  double d10d6;
  double d10d7;
  double d10d8;
  double d10d9;
  double d10d10;
  double d10d11;
  double d10d12;
  double d10d13;
  double d10d14;
  double d10d15;
  double d10d16;
  double d10d17;
  double d10d18;
  double d10d19;
  double d10d20;
  double d10d21;
  double d10d22;
  double d10d23;
  double d10d24;
  double d10d25;
  double d10d26;
  double d10d27;
  double d10d28;
  double d10d29;
  double d10d30;
  double d10d31;
  double d10d32;
  double d11d1;
  double d11d2;
  double d11d3;
  double d11d4;
  double d11d5;
  double d11d6;
  double d11d7;
  double d11d8;
  double d11d9;
  double d11d10;
  double d11d11;
  double d11d12;
  double d11d13;
  double d11d14;
  double d11d15;
  double d11d16;
  double d11d17;
  double d11d18;
  double d11d19;
  double d11d20;
  double d11d21;
  double d11d22;
  double d11d23;
  double d11d24;
  double d11d25;
  double d11d26;
  double d11d27;
  double d11d28;
  double d11d29;
  double d11d30;
  double d11d31;
  double d11d32;
  double d12d6;
  double d12d13;
  double d12d24;
  double d12d28;
  double d13d6;
  double d13d16;
  double d13d28;
  double d14d1;
  double d14d2;
  double d14d3;
  double d14d4;
  double d14d5;
  double d14d6;
  double d14d7;
  double d14d8;
  double d14d9;
  double d14d10;
  double d14d11;
  double d14d12;
  double d14d13;
  double d14d14;
  double d14d15;
  double d14d16;
  double d14d17;
  double d14d18;
  double d14d19;
  double d14d20;
  double d14d21;
  double d14d22;
  double d14d23;
  double d14d24;
  double d14d25;
  double d14d26;
  double d14d27;
  double d14d28;
  double d14d29;
  double d14d30;
  double d14d31;
  double d14d32;
  double d15d1;
  double d15d2;
  double d15d3;
  double d15d4;
  double d15d5;
  double d15d6;
  double d15d7;
  double d15d8;
  double d15d9;
  double d15d10;
  double d15d11;
  double d15d12;
  double d15d13;
  double d15d14;
  double d15d15;
  double d15d16;
  double d15d17;
  double d15d18;
  double d15d19;
  double d15d20;
  double d15d21;
  double d15d22;
  double d15d23;
  double d15d24;
  double d15d25;
  double d15d26;
  double d15d27;
  double d15d28;
  double d15d29;
  double d15d30;
  double d15d31;
  double d15d32;
  double d16d6;
  double d16d19;
  double d16d20;
  double d16d22;
  double d17d6;
  double d17d19;
  double d17d28;
  double d17d32;
  double d18d1;
  double d18d2;
  double d18d3;
  double d18d4;
  double d18d5;
  double d18d6;
  double d18d7;
  double d18d8;
  double d18d9;
  double d18d10;
  double d18d11;
  double d18d12;
  double d18d13;
  double d18d14;
  double d18d15;
  double d18d16;
  double d18d17;
  double d18d18;
  double d18d19;
  double d18d20;
  double d18d21;
  double d18d22;
  double d18d23;
  double d18d24;
  double d18d25;
  double d18d26;
  double d18d27;
  double d18d28;
  double d18d29;
  double d18d30;
  double d18d31;
  double d18d32;
  double d19d19;
  double d19d20;
  double d19d24;
  double d19d27;
  double d20d19;
  double d20d20;
  double d20d24;
  double d20d27;
  double d21d19;
  double d21d20;
  double d21d27;
  double d21d28;
  double d22d13;
  double d22d15;
  double d22d19;
  double d22d20;
  double d23d1;
  double d23d2;
  double d23d3;
  double d23d4;
  double d23d5;
  double d23d6;
  double d23d7;
  double d23d8;
  double d23d9;
  double d23d10;
  double d23d11;
  double d23d12;
  double d23d13;
  double d23d14;
  double d23d15;
  double d23d16;
  double d23d17;
  double d23d18;
  double d23d19;
  double d23d20;
  double d23d21;
  double d23d22;
  double d23d23;
  double d23d24;
  double d23d25;
  double d23d26;
  double d23d27;
  double d23d28;
  double d23d29;
  double d23d30;
  double d23d31;
  double d23d32;
  double d24d20;
  double d24d22;
  double d24d24;
  double d24d32;
  double d25d13;
  double d25d19;
  double d25d24;
  double d25d32;
  double d26d15;
  double d26d19;
  double d26d27;
  double d26d32;
  double d27d16;
  double d27d19;
  double d27d28;
  double d27d32;
  double d28d28;
  double d28d32;
  double d29d13;
  double d29d15;
  double d29d24;
  double d29d27;
  double d30d15;
  double d30d16;
  double d30d24;
  double d30d27;
  double d31d13;
  double d31d16;
  double d31d24;
  double d31d28;
  double d32d1;
  double d32d2;
  double d32d3;
  double d32d4;
  double d32d5;
  double d32d6;
  double d32d7;
  double d32d8;
  double d32d9;
  double d32d10;
  double d32d11;
  double d32d12;
  double d32d13;
  double d32d14;
  double d32d15;
  double d32d16;
  double d32d17;
  double d32d18;
  double d32d19;
  double d32d20;
  double d32d21;
  double d32d22;
  double d32d23;
  double d32d24;
  double d32d25;
  double d32d26;
  double d32d27;
  double d32d28;
  double d32d29;
  double d32d30;
  double d32d31;
  double d32d32;
  double d33d13;
  double d33d24;
  double d33d25;
  double d33d29;
  double d34d8;
  double d34d22;
  double d34d24;
  double d34d29;
  double d35d22;
  double d35d25;
  double d35d27;
  double d35d29;
  double d36d4;
  double d36d13;
  double d36d22;
  double d36d29;
  double d37d6;
  double d37d8;
  double d37d27;
  double d37d29;
  double d38d15;
  double d38d25;
  double d38d27;
  double d38d29;
  double d39d27;
  double d39d28;
  double d39d29;
  double d39d30;
  double d40d6;
  double d40d22;
  double d40d29;
  double d40d30;
  double d41d3;
  double d41d21;
  double d41d24;
  double d41d29;
  double d42d14;
  double d42d24;
  double d42d25;
  double d42d29;
  double d43d13;
  double d43d14;
  double d43d29;
  double d44d17;
  double d44d25;
  double d44d29;
  double d45d1;
  double d45d2;
  double d45d3;
  double d45d4;
  double d45d5;
  double d45d6;
  double d45d7;
  double d45d8;
  double d45d9;
  double d45d10;
  double d45d11;
  double d45d12;
  double d45d13;
  double d45d14;
  double d45d15;
  double d45d16;
  double d45d17;
  double d45d18;
  double d45d19;
  double d45d20;
  double d45d21;
  double d45d22;
  double d45d23;
  double d45d24;
  double d45d25;
  double d45d26;
  double d45d27;
  double d45d28;
  double d45d29;
  double d45d30;
  double d45d31;
  double d45d32;
  double d46d4;
  double d46d26;
  double d46d27;
  double d46d29;
  double d47d3;
  double d47d4;
  double d47d15;
  double d47d29;
  double d48d5;
  double d48d7;
  double d48d15;
  double d48d29;
  double d49d4;
  double d49d7;
  double d49d29;
  double d49d30;
  double d50d13;
  double d50d21;
  double d50d24;
  double d50d25;
  double d51d4;
  double d51d22;
  double d51d24;
  double d51d25;
  double d52d8;
  double d52d24;
  double d52d25;
  double d52d27;
  double d53d15;
  double d53d21;
  double d53d25;
  double d53d27;
  double d54d4;
  double d54d13;
  double d54d25;
  double d54d27;
  double d55d6;
  double d55d8;
  double d55d22;
  double d55d25;
  double d56d4;
  double d56d6;
  double d56d25;
  double d56d27;
  double d57d3;
  double d57d24;
  double d57d25;
  double d58d3;
  double d58d21;
  double d58d24;
  double d58d25;
  double d59d3;
  double d59d4;
  double d59d25;
  double d59d27;
  double d60d5;
  double d60d7;
  double d60d25;
  double d60d27;
  double d61d4;
  double d61d21;
  double d61d24;
  double d61d27;
  double d62d4;
  double d62d6;
  double d62d21;
  double d62d22;
  double d63d3;
  double d63d4;
  double d63d21;
  double d63d22;
  double d64d13;
  double d64d18;
  double d64d24;
  double d64d31;
  double d65d14;
  double d65d15;
  double d65d18;
  double d65d22;
  double d66d15;
  double d66d18;
  double d66d27;
  double d66d31;
  double d67d17;
  double d67d18;
  double d67d29;
  double d67d31;
  double d68d1;
  double d68d2;
  double d68d3;
  double d68d4;
  double d68d5;
  double d68d6;
  double d68d7;
  double d68d8;
  double d68d9;
  double d68d10;
  double d68d11;
  double d68d12;
  double d68d13;
  double d68d14;
  double d68d15;
  double d68d16;
  double d68d17;
  double d68d18;
  double d68d19;
  double d68d20;
  double d68d21;
  double d68d22;
  double d68d23;
  double d68d24;
  double d68d25;
  double d68d26;
  double d68d27;
  double d68d28;
  double d68d29;
  double d68d30;
  double d68d31;
  double d68d32;
  double d69d24;
  double d69d29;
  double d69d31;
  double d70d14;
  double d70d22;
  double d70d27;
  double d70d31;
  double d71d8;
  double d71d22;
  double d71d29;
  double d71d31;
  double d72d14;
  double d72d15;
  double d72d27;
  double d72d31;
  double d73d8;
  double d73d17;
  double d73d27;
  double d73d31;
  double d74d14;
  double d74d25;
  double d74d29;
  double d74d31;
  double d75d1;
  double d75d2;
  double d75d3;
  double d75d4;
  double d75d5;
  double d75d6;
  double d75d7;
  double d75d8;
  double d75d9;
  double d75d10;
  double d75d11;
  double d75d12;
  double d75d13;
  double d75d14;
  double d75d15;
  double d75d16;
  double d75d17;
  double d75d18;
  double d75d19;
  double d75d20;
  double d75d21;
  double d75d22;
  double d75d23;
  double d75d24;
  double d75d25;
  double d75d26;
  double d75d27;
  double d75d28;
  double d75d29;
  double d75d30;
  double d75d31;
  double d75d32;
  double d76d13;
  double d76d14;
  double d76d24;
  double d76d26;
  double d77d4;
  double d77d14;
  double d77d22;
  double d77d29;
  double d78d14;
  double d78d22;
  double d78d26;
  double d78d27;
  double d79d14;
  double d79d15;
  double d79d26;
  double d79d27;
  double d80d4;
  double d80d5;
  double d80d14;
  double d80d29;
  double d81d14;
  double d81d25;
  double d81d26;
  double d81d29;
  double d82d14;
  double d82d17;
  double d82d26;
  double d82d29;
  double d83d26;
  double d84d3;
  double d84d13;
  double d84d24;
  double d84d26;
  double d85d5;
  double d85d22;
  double d85d24;
  double d85d26;
  double d86d4;
  double d86d22;
  double d86d25;
  double d86d26;
  double d87d3;
  double d87d15;
  double d87d26;
  double d87d27;
  double d88d3;
  double d88d6;
  double d88d26;
  double d88d28;
  double d89d3;
  double d89d6;
  double d89d24;
  double d89d26;
  double d90d3;
  double d90d25;
  double d90d26;
  double d90d29;
  double d91d3;
  double d91d17;
  double d91d26;
  double d91d29;
  double d92d3;
  double d92d4;
  double d92d8;
  double d92d26;
  double d93d1;
  double d93d2;
  double d93d3;
  double d93d4;
  double d93d5;
  double d93d6;
  double d93d7;
  double d93d8;
  double d93d9;
  double d93d10;
  double d93d11;
  double d93d12;
  double d93d13;
  double d93d14;
  double d93d15;
  double d93d16;
  double d93d17;
  double d93d18;
  double d93d19;
  double d93d20;
  double d93d21;
  double d93d22;
  double d93d23;
  double d93d24;
  double d93d25;
  double d93d26;
  double d93d27;
  double d93d28;
  double d93d29;
  double d93d30;
  double d93d31;
  double d93d32;
  double d94d1;
  double d94d2;
  double d94d3;
  double d94d4;
  double d94d5;
  double d94d6;
  double d94d7;
  double d94d8;
  double d94d9;
  double d94d10;
  double d94d11;
  double d94d12;
  double d94d13;
  double d94d14;
  double d94d15;
  double d94d16;
  double d94d17;
  double d94d18;
  double d94d19;
  double d94d20;
  double d94d21;
  double d94d22;
  double d94d23;
  double d94d24;
  double d94d25;
  double d94d26;
  double d94d27;
  double d94d28;
  double d94d29;
  double d94d30;
  double d94d31;
  double d94d32;
  double d95d5;
  double d95d9;
  double d95d13;
  double d95d24;
  double d96d9;
  double d96d24;
  double d96d26;
  double d96d27;
  double d97d5;
  double d97d9;
  double d97d22;
  double d97d27;
  double d98d6;
  double d98d9;
  double d98d22;
  double d98d26;
  double d99d5;
  double d99d9;
  double d99d15;
  double d99d27;
  double d100d9;
  double d100d26;
  double d100d27;
  double d100d28;
  double d101d4;
  double d101d5;
  double d101d8;
  double d101d9;
  double d102d4;
  double d102d7;
  double d102d9;
  double d102d26;
  double d103d7;
  double d103d9;
  double d103d23;
  double d103d26;
  double d104d5;
  double d104d7;
  double d104d9;
  double d104d10;
  double d105d4;
  double d105d7;
  double d105d27;
  double d105d28;
  double d106d1;
  double d106d2;
  double d106d3;
  double d106d4;
  double d106d5;
  double d106d6;
  double d106d7;
  double d106d8;
  double d106d9;
  double d106d10;
  double d106d11;
  double d106d12;
  double d106d13;
  double d106d14;
  double d106d15;
  double d106d16;
  double d106d17;
  double d106d18;
  double d106d19;
  double d106d20;
  double d106d21;
  double d106d22;
  double d106d23;
  double d106d24;
  double d106d25;
  double d106d26;
  double d106d27;
  double d106d28;
  double d106d29;
  double d106d30;
  double d106d31;
  double d106d32;
  double d107d1;
  double d107d2;
  double d107d3;
  double d107d4;
  double d107d5;
  double d107d6;
  double d107d7;
  double d107d8;
  double d107d9;
  double d107d10;
  double d107d11;
  double d107d12;
  double d107d13;
  double d107d14;
  double d107d15;
  double d107d16;
  double d107d17;
  double d107d18;
  double d107d19;
  double d107d20;
  double d107d21;
  double d107d22;
  double d107d23;
  double d107d24;
  double d107d25;
  double d107d26;
  double d107d27;
  double d107d28;
  double d107d29;
  double d107d30;
  double d107d31;
  double d107d32;
  double d108d4;
  double d108d8;
  double d108d19;
  double d108d32;
  double d109d1;
  double d109d2;
  double d109d3;
  double d109d4;
  double d109d5;
  double d109d6;
  double d109d7;
  double d109d8;
  double d109d9;
  double d109d10;
  double d109d11;
  double d109d12;
  double d109d13;
  double d109d14;
  double d109d15;
  double d109d16;
  double d109d17;
  double d109d18;
  double d109d19;
  double d109d20;
  double d109d21;
  double d109d22;
  double d109d23;
  double d109d24;
  double d109d25;
  double d109d26;
  double d109d27;
  double d109d28;
  double d109d29;
  double d109d30;
  double d109d31;
  double d109d32;
  double d110d4;
  double d110d8;
  double d110d13;
  double d110d24;
  double d111d4;
  double d111d8;
  double d111d22;
  double d111d27;
  double d112d4;
  double d112d8;
  double d112d15;
  double d112d27;
  double d113d4;
  double d113d6;
  double d113d8;
  double d113d28;
  double d114d4;
  double d114d8;
  double d114d17;
  double d114d29;
  double d115d4;
  double d115d5;
  double d115d8;
  double d115d27;
  double d116d4;
  double d116d7;
  double d116d8;
  double d116d10;
  double d117d5;
  double d117d8;
  double d117d15;
  double d118d7;
  double d118d10;
  double d118d13;
  double d118d24;
  double d119d7;
  double d119d10;
  double d119d22;
  double d119d27;
  double d120d7;
  double d120d10;
  double d120d15;
  double d120d27;
  double d121d7;
  double d121d10;
  double d121d25;
  double d121d29;
  double d122d7;
  double d122d10;
  double d122d17;
  double d122d29;
  double d123d4;
  double d123d7;
  double d123d10;
  double d123d15;
  double d124d1;
  double d124d2;
  double d124d3;
  double d124d4;
  double d124d5;
  double d124d6;
  double d124d7;
  double d124d8;
  double d124d9;
  double d124d10;
  double d124d11;
  double d124d12;
  double d124d13;
  double d124d14;
  double d124d15;
  double d124d16;
  double d124d17;
  double d124d18;
  double d124d19;
  double d124d20;
  double d124d21;
  double d124d22;
  double d124d23;
  double d124d24;
  double d124d25;
  double d124d26;
  double d124d27;
  double d124d28;
  double d124d29;
  double d124d30;
  double d124d31;
  double d124d32;
  double d125d8;
  double d125d13;
  double d125d24;
  double d125d30;
  double d126d24;
  double d126d27;
  double d126d29;
  double d126d30;
  double d127d8;
  double d127d22;
  double d127d27;
  double d127d30;
  double d128d8;
  double d128d15;
  double d128d27;
  double d128d30;
  double d129d4;
  double d129d8;
  double d129d30;
  double d130d8;
  double d130d17;
  double d130d29;
  double d130d30;
  double d131d7;
  double d131d8;
  double d131d10;
  double d131d30;
  double d132d7;
  double d132d23;
  double d132d24;
  double d132d27;
  double d133d6;
  double d133d7;
  double d133d22;
  double d133d23;
  double d134d7;
  double d134d23;
  double d134d27;
  double d134d28;
  double d135d6;
  double d135d7;
  double d135d23;
  double d135d27;
  double d135d28;
  double d136d4;
  double d136d6;
  double d136d7;
  double d136d23;
  double d137d4;
  double d137d6;
  double d137d23;
  double d138d6;
  double d138d7;
  double d138d23;
  double d139d4;
  double d139d7;
  double d139d20;
  double d139d24;
  double d139d32;
  double d140d4;
  double d140d7;
  double d140d24;
  double d140d27;
  double d141d4;
  double d141d6;
  double d141d7;
  double d141d22;
  double d142d1;
  double d142d2;
  double d142d3;
  double d142d4;
  double d142d5;
  double d142d6;
  double d142d7;
  double d142d8;
  double d142d9;
  double d142d10;
  double d142d11;
  double d142d12;
  double d142d13;
  double d142d14;
  double d142d15;
  double d142d16;
  double d142d17;
  double d142d18;
  double d142d19;
  double d142d20;
  double d142d21;
  double d142d22;
  double d142d23;
  double d142d24;
  double d142d25;
  double d142d26;
  double d142d27;
  double d142d28;
  double d142d29;
  double d142d30;
  double d142d31;
  double d142d32;
  double d143d6;
  double d143d7;
  double d143d10;
  double d143d28;
  double d144d4;
  double d144d6;
  double d144d7;
  double d145d4;
  double d145d7;
  double d145d23;
  double d146d4;
  double d146d7;
  double d146d23;
  double d147d4;
  double d147d7;
  double d147d19;
  double d147d20;
  double d148d7;
  double d148d10;
  double d148d19;
  double d148d32;
  double d149d4;
  double d149d19;
  double d149d20;
  double d149d21;
  double d150d1;
  double d150d2;
  double d150d3;
  double d150d4;
  double d150d5;
  double d150d6;
  double d150d7;
  double d150d8;
  double d150d9;
  double d150d10;
  double d150d11;
  double d150d12;
  double d150d13;
  double d150d14;
  double d150d15;
  double d150d16;
  double d150d17;
  double d150d18;
  double d150d19;
  double d150d20;
  double d150d21;
  double d150d22;
  double d150d23;
  double d150d24;
  double d150d25;
  double d150d26;
  double d150d27;
  double d150d28;
  double d150d29;
  double d150d30;
  double d150d31;
  double d150d32;
  double d151d3;
  double d151d5;
  double d151d24;
  double d151d27;
  double d152d3;
  double d152d5;
  double d152d24;
  double d152d27;
  double d153d4;
  double d153d5;
  double d153d24;
  double d153d25;
  double d154d4;
  double d154d5;
  double d154d22;
  double d155d3;
  double d155d5;
  double d155d6;
  double d155d22;
  double d156d3;
  double d156d5;
  double d156d27;
  double d156d28;
  double d157d7;
  double d157d11;
  double d157d13;
  double d157d24;
  double d158d7;
  double d158d11;
  double d158d22;
  double d158d27;
  double d159d7;
  double d159d11;
  double d159d15;
  double d159d27;
  double d160d10;
  double d160d11;
  double d161d1;
  double d161d2;
  double d161d3;
  double d161d4;
  double d161d5;
  double d161d6;
  double d161d7;
  double d161d8;
  double d161d9;
  double d161d10;
  double d161d11;
  double d161d12;
  double d161d13;
  double d161d14;
  double d161d15;
  double d161d16;
  double d161d17;
  double d161d18;
  double d161d19;
  double d161d20;
  double d161d21;
  double d161d22;
  double d161d23;
  double d161d24;
  double d161d25;
  double d161d26;
  double d161d27;
  double d161d28;
  double d161d29;
  double d161d30;
  double d161d31;
  double d161d32;
  double d162d12;
  double d162d15;
  double d162d23;
  double d162d27;
  double d163d13;
  double d163d24;
  double d164d13;
  double d164d29;
  double d165d15;
  double d165d27;
  double d166d15;
  double d166d28;
  double d167d15;
  double d167d29;
  double d168d7;
  double d168d16;
  double d169d16;
  double d169d27;
  double d170d16;
  double d170d22;
  double d171d16;
  double d171d28;
  double d172d16;
  double d172d29;
  double d173d6;
  double d173d17;
  double d174d17;
  double d174d24;
  double d175d17;
  double d175d27;
  double d176d17;
  double d176d22;
  double d177d17;
  double d177d28;
  double d178d17;
  double d178d29;


};

#endif // !defined(OPENSMOKE_SYMBOLIC_KINETICS_POLIMI_H2CONOX_NONNH_1101)





