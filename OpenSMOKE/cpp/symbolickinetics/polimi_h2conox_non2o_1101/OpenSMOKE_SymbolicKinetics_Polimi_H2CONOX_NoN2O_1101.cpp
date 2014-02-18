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

#include "symbolickinetics/polimi_h2conox_non2o_1101/OpenSMOKE_SymbolicKinetics_Polimi_H2CONOX_NoN2O_1101.h"

OpenSMOKE_SymbolicKinetics_Polimi_H2CONOX_NoN2O_1101::OpenSMOKE_SymbolicKinetics_Polimi_H2CONOX_NoN2O_1101()
{
	NC = 32;
	NR = 178;
	iAccurateJacobian = 1;
}

void OpenSMOKE_SymbolicKinetics_Polimi_H2CONOX_NoN2O_1101::SetAccurateJacobian()		
{
	iAccurateJacobian = 1;
}

void OpenSMOKE_SymbolicKinetics_Polimi_H2CONOX_NoN2O_1101::UnsetAccurateJacobian()	
{
	iAccurateJacobian = 0;
}

void OpenSMOKE_SymbolicKinetics_Polimi_H2CONOX_NoN2O_1101::assignKineticConstants(BzzVector &xxxk, BzzVector &xxxuK, BzzVector &xxxlogFcent, BzzVector &xxxkFallOff) 
{
	k1	= xxxk[1]; 
	k2	= xxxk[2]; 
	k3	= xxxk[3]; 
	k4	= xxxk[4]; 
	k5	= xxxk[5]; 
	k6	= xxxk[6]; 
	k7	= xxxk[7]; 
	k8	= xxxk[8]; 
	k9	= xxxk[9]; 
	k10	= xxxk[10]; 
	k11	= xxxk[11]; 
	k12	= xxxk[12]; 
	k13	= xxxk[13]; 
	k14	= xxxk[14]; 
	k15	= xxxk[15]; 
	k16	= xxxk[16]; 
	k17	= xxxk[17]; 
	k18	= xxxk[18]; 
	k19	= xxxk[19]; 
	k20	= xxxk[20]; 
	k21	= xxxk[21]; 
	k22	= xxxk[22]; 
	k23	= xxxk[23]; 
	k24	= xxxk[24]; 
	k25	= xxxk[25]; 
	k26	= xxxk[26]; 
	k27	= xxxk[27]; 
	k28	= xxxk[28]; 
	k29	= xxxk[29]; 
	k30	= xxxk[30]; 
	k31	= xxxk[31]; 
	k32	= xxxk[32]; 
	k33	= xxxk[33]; 
	k34	= xxxk[34]; 
	k35	= xxxk[35]; 
	k36	= xxxk[36]; 
	k37	= xxxk[37]; 
	k38	= xxxk[38]; 
	k39	= xxxk[39]; 
	k40	= xxxk[40]; 
	k41	= xxxk[41]; 
	k42	= xxxk[42]; 
	k43	= xxxk[43]; 
	k44	= xxxk[44]; 
	k45	= xxxk[45]; 
	k46	= xxxk[46]; 
	k47	= xxxk[47]; 
	k48	= xxxk[48]; 
	k49	= xxxk[49]; 
	k50	= xxxk[50]; 
	k51	= xxxk[51]; 
	k52	= xxxk[52]; 
	k53	= xxxk[53]; 
	k54	= xxxk[54]; 
	k55	= xxxk[55]; 
	k56	= xxxk[56]; 
	k57	= xxxk[57]; 
	k58	= xxxk[58]; 
	k59	= xxxk[59]; 
	k60	= xxxk[60]; 
	k61	= xxxk[61]; 
	k62	= xxxk[62]; 
	k63	= xxxk[63]; 
	k64	= xxxk[64]; 
	k65	= xxxk[65]; 
	k66	= xxxk[66]; 
	k67	= xxxk[67]; 
	k68	= xxxk[68]; 
	k69	= xxxk[69]; 
	k70	= xxxk[70]; 
	k71	= xxxk[71]; 
	k72	= xxxk[72]; 
	k73	= xxxk[73]; 
	k74	= xxxk[74]; 
	k75	= xxxk[75]; 
	k76	= xxxk[76]; 
	k77	= xxxk[77]; 
	k78	= xxxk[78]; 
	k79	= xxxk[79]; 
	k80	= xxxk[80]; 
	k81	= xxxk[81]; 
	k82	= xxxk[82]; 
	k83	= xxxk[83]; 
	k84	= xxxk[84]; 
	k85	= xxxk[85]; 
	k86	= xxxk[86]; 
	k87	= xxxk[87]; 
	k88	= xxxk[88]; 
	k89	= xxxk[89]; 
	k90	= xxxk[90]; 
	k91	= xxxk[91]; 
	k92	= xxxk[92]; 
	k93	= xxxk[93]; 
	k94	= xxxk[94]; 
	k95	= xxxk[95]; 
	k96	= xxxk[96]; 
	k97	= xxxk[97]; 
	k98	= xxxk[98]; 
	k99	= xxxk[99]; 
	k100	= xxxk[100]; 
	k101	= xxxk[101]; 
	k102	= xxxk[102]; 
	k103	= xxxk[103]; 
	k104	= xxxk[104]; 
	k105	= xxxk[105]; 
	k106	= xxxk[106]; 
	k107	= xxxk[107]; 
	k108	= xxxk[108]; 
	k109	= xxxk[109]; 
	k110	= xxxk[110]; 
	k111	= xxxk[111]; 
	k112	= xxxk[112]; 
	k113	= xxxk[113]; 
	k114	= xxxk[114]; 
	k115	= xxxk[115]; 
	k116	= xxxk[116]; 
	k117	= xxxk[117]; 
	k118	= xxxk[118]; 
	k119	= xxxk[119]; 
	k120	= xxxk[120]; 
	k121	= xxxk[121]; 
	k122	= xxxk[122]; 
	k123	= xxxk[123]; 
	k124	= xxxk[124]; 
	k125	= xxxk[125]; 
	k126	= xxxk[126]; 
	k127	= xxxk[127]; 
	k128	= xxxk[128]; 
	k129	= xxxk[129]; 
	k130	= xxxk[130]; 
	k131	= xxxk[131]; 
	k132	= xxxk[132]; 
	k133	= xxxk[133]; 
	k134	= xxxk[134]; 
	k135	= xxxk[135]; 
	k136	= xxxk[136]; 
	k137	= xxxk[137]; 
	k138	= xxxk[138]; 
	k139	= xxxk[139]; 
	k140	= xxxk[140]; 
	k141	= xxxk[141]; 
	k142	= xxxk[142]; 
	k143	= xxxk[143]; 
	k144	= xxxk[144]; 
	k145	= xxxk[145]; 
	k146	= xxxk[146]; 
	k147	= xxxk[147]; 
	k148	= xxxk[148]; 
	k149	= xxxk[149]; 
	k150	= xxxk[150]; 
	k151	= xxxk[151]; 
	k152	= xxxk[152]; 
	k153	= xxxk[153]; 
	k154	= xxxk[154]; 
	k155	= xxxk[155]; 
	k156	= xxxk[156]; 
	k157	= xxxk[157]; 
	k158	= xxxk[158]; 
	k159	= xxxk[159]; 
	k160	= xxxk[160]; 
	k161	= xxxk[161]; 
	k162	= xxxk[162]; 
	k163	= xxxk[163]; 
	k164	= xxxk[164]; 
	k165	= xxxk[165]; 
	k166	= xxxk[166]; 
	k167	= xxxk[167]; 
	k168	= xxxk[168]; 
	k169	= xxxk[169]; 
	k170	= xxxk[170]; 
	k171	= xxxk[171]; 
	k172	= xxxk[172]; 
	k173	= xxxk[173]; 
	k174	= xxxk[174]; 
	k175	= xxxk[175]; 
	k176	= xxxk[176]; 
	k177	= xxxk[177]; 
	k178	= xxxk[178]; 

	uK1	= xxxuK[1]; 
	uK2	= xxxuK[2]; 
	uK3	= xxxuK[3]; 
	uK4	= xxxuK[4]; 
	uK5	= xxxuK[5]; 
	uK6	= xxxuK[6]; 
	uK7	= xxxuK[7]; 
	uK8	= xxxuK[8]; 
	uK9	= xxxuK[9]; 
	uK10	= xxxuK[10]; 
	uK11	= xxxuK[11]; 
	uK12	= xxxuK[12]; 
	uK13	= xxxuK[13]; 
	uK14	= xxxuK[14]; 
	uK15	= xxxuK[15]; 
	uK16	= xxxuK[16]; 
	uK17	= xxxuK[17]; 
	uK18	= xxxuK[18]; 
	uK19	= xxxuK[19]; 
	uK20	= xxxuK[20]; 
	uK21	= xxxuK[21]; 
	uK22	= xxxuK[22]; 
	uK23	= xxxuK[23]; 
	uK24	= xxxuK[24]; 
	uK25	= xxxuK[25]; 
	uK26	= xxxuK[26]; 
	uK27	= xxxuK[27]; 
	uK28	= xxxuK[28]; 
	uK29	= xxxuK[29]; 
	uK30	= xxxuK[30]; 
	uK31	= xxxuK[31]; 
	uK32	= xxxuK[32]; 
	uK33	= xxxuK[33]; 
	uK34	= xxxuK[34]; 
	uK35	= xxxuK[35]; 
	uK36	= xxxuK[36]; 
	uK37	= xxxuK[37]; 
	uK38	= xxxuK[38]; 
	uK39	= xxxuK[39]; 
	uK40	= xxxuK[40]; 
	uK41	= xxxuK[41]; 
	uK42	= xxxuK[42]; 
	uK43	= xxxuK[43]; 
	uK44	= xxxuK[44]; 
	uK45	= xxxuK[45]; 
	uK46	= xxxuK[46]; 
	uK47	= xxxuK[47]; 
	uK48	= xxxuK[48]; 
	uK49	= xxxuK[49]; 
	uK50	= xxxuK[50]; 
	uK51	= xxxuK[51]; 
	uK52	= xxxuK[52]; 
	uK53	= xxxuK[53]; 
	uK54	= xxxuK[54]; 
	uK55	= xxxuK[55]; 
	uK56	= xxxuK[56]; 
	uK57	= xxxuK[57]; 
	uK58	= xxxuK[58]; 
	uK59	= xxxuK[59]; 
	uK60	= xxxuK[60]; 
	uK61	= xxxuK[61]; 
	uK62	= xxxuK[62]; 
	uK63	= xxxuK[63]; 
	uK64	= xxxuK[64]; 
	uK65	= xxxuK[65]; 
	uK66	= xxxuK[66]; 
	uK67	= xxxuK[67]; 
	uK68	= xxxuK[68]; 
	uK69	= xxxuK[69]; 
	uK70	= xxxuK[70]; 
	uK71	= xxxuK[71]; 
	uK72	= xxxuK[72]; 
	uK73	= xxxuK[73]; 
	uK74	= xxxuK[74]; 
	uK75	= xxxuK[75]; 
	uK76	= xxxuK[76]; 
	uK77	= xxxuK[77]; 
	uK78	= xxxuK[78]; 
	uK79	= xxxuK[79]; 
	uK80	= xxxuK[80]; 
	uK81	= xxxuK[81]; 
	uK82	= xxxuK[82]; 
	uK83	= xxxuK[83]; 
	uK84	= xxxuK[84]; 
	uK85	= xxxuK[85]; 
	uK86	= xxxuK[86]; 
	uK87	= xxxuK[87]; 
	uK88	= xxxuK[88]; 
	uK89	= xxxuK[89]; 
	uK90	= xxxuK[90]; 
	uK91	= xxxuK[91]; 
	uK92	= xxxuK[92]; 
	uK93	= xxxuK[93]; 
	uK94	= xxxuK[94]; 
	uK95	= xxxuK[95]; 
	uK96	= xxxuK[96]; 
	uK97	= xxxuK[97]; 
	uK98	= xxxuK[98]; 
	uK99	= xxxuK[99]; 
	uK100	= xxxuK[100]; 
	uK101	= xxxuK[101]; 
	uK102	= xxxuK[102]; 
	uK103	= xxxuK[103]; 
	uK104	= xxxuK[104]; 
	uK105	= xxxuK[105]; 
	uK106	= xxxuK[106]; 
	uK107	= xxxuK[107]; 
	uK108	= xxxuK[108]; 
	uK109	= xxxuK[109]; 
	uK110	= xxxuK[110]; 
	uK111	= xxxuK[111]; 
	uK112	= xxxuK[112]; 
	uK113	= xxxuK[113]; 
	uK114	= xxxuK[114]; 
	uK115	= xxxuK[115]; 
	uK116	= xxxuK[116]; 
	uK117	= xxxuK[117]; 
	uK118	= xxxuK[118]; 
	uK119	= xxxuK[119]; 
	uK120	= xxxuK[120]; 
	uK121	= xxxuK[121]; 
	uK122	= xxxuK[122]; 
	uK123	= xxxuK[123]; 
	uK124	= xxxuK[124]; 
	uK125	= xxxuK[125]; 
	uK126	= xxxuK[126]; 
	uK127	= xxxuK[127]; 
	uK128	= xxxuK[128]; 
	uK129	= xxxuK[129]; 
	uK130	= xxxuK[130]; 
	uK131	= xxxuK[131]; 
	uK132	= xxxuK[132]; 
	uK133	= xxxuK[133]; 
	uK134	= xxxuK[134]; 
	uK135	= xxxuK[135]; 
	uK136	= xxxuK[136]; 
	uK137	= xxxuK[137]; 
	uK138	= xxxuK[138]; 
	uK139	= xxxuK[139]; 
	uK140	= xxxuK[140]; 
	uK141	= xxxuK[141]; 
	uK142	= xxxuK[142]; 
	uK143	= xxxuK[143]; 
	uK144	= xxxuK[144]; 
	uK145	= xxxuK[145]; 
	uK146	= xxxuK[146]; 
	uK147	= xxxuK[147]; 
	uK148	= xxxuK[148]; 
	uK149	= xxxuK[149]; 
	uK150	= xxxuK[150]; 
	uK151	= xxxuK[151]; 
	uK152	= xxxuK[152]; 
	uK153	= xxxuK[153]; 
	uK154	= xxxuK[154]; 
	uK155	= xxxuK[155]; 
	uK156	= xxxuK[156]; 
	uK157	= xxxuK[157]; 
	uK158	= xxxuK[158]; 
	uK159	= xxxuK[159]; 
	uK160	= xxxuK[160]; 
	uK161	= xxxuK[161]; 
	uK162	= xxxuK[162]; 
	uK163	= xxxuK[163]; 
	uK164	= xxxuK[164]; 
	uK165	= xxxuK[165]; 
	uK166	= xxxuK[166]; 
	uK167	= xxxuK[167]; 
	uK168	= xxxuK[168]; 
	uK169	= xxxuK[169]; 
	uK170	= xxxuK[170]; 
	uK171	= xxxuK[171]; 
	uK172	= xxxuK[172]; 
	uK173	= xxxuK[173]; 
	uK174	= xxxuK[174]; 
	uK175	= xxxuK[175]; 
	uK176	= xxxuK[176]; 
	uK177	= xxxuK[177]; 
	uK178	= xxxuK[178]; 

	logFcent1	= xxxlogFcent[1]; 
	logFcent2	= xxxlogFcent[2]; 
	logFcent3	= xxxlogFcent[3]; 
	logFcent4	= xxxlogFcent[4]; 
	logFcent5	= xxxlogFcent[5]; 
	logFcent6	= xxxlogFcent[6]; 
	logFcent7	= xxxlogFcent[7]; 
	logFcent8	= xxxlogFcent[8]; 
	logFcent9	= xxxlogFcent[9]; 
	logFcent10	= xxxlogFcent[10]; 
	logFcent11	= xxxlogFcent[11]; 
	logFcent12	= xxxlogFcent[12]; 
	logFcent13	= xxxlogFcent[13]; 
	logFcent14	= xxxlogFcent[14]; 
	logFcent15	= xxxlogFcent[15]; 
	logFcent16	= xxxlogFcent[16]; 
	logFcent17	= xxxlogFcent[17]; 
	logFcent18	= xxxlogFcent[18]; 
	logFcent19	= xxxlogFcent[19]; 
	logFcent20	= xxxlogFcent[20]; 
	logFcent21	= xxxlogFcent[21]; 
	logFcent22	= xxxlogFcent[22]; 
	logFcent23	= xxxlogFcent[23]; 
	logFcent24	= xxxlogFcent[24]; 
	logFcent25	= xxxlogFcent[25]; 
	logFcent26	= xxxlogFcent[26]; 
	logFcent27	= xxxlogFcent[27]; 
	logFcent28	= xxxlogFcent[28]; 
	logFcent29	= xxxlogFcent[29]; 
	logFcent30	= xxxlogFcent[30]; 
	logFcent31	= xxxlogFcent[31]; 
	logFcent32	= xxxlogFcent[32]; 
	logFcent33	= xxxlogFcent[33]; 
	logFcent34	= xxxlogFcent[34]; 
	logFcent35	= xxxlogFcent[35]; 
	logFcent36	= xxxlogFcent[36]; 
	logFcent37	= xxxlogFcent[37]; 
	logFcent38	= xxxlogFcent[38]; 
	logFcent39	= xxxlogFcent[39]; 
	logFcent40	= xxxlogFcent[40]; 
	logFcent41	= xxxlogFcent[41]; 
	logFcent42	= xxxlogFcent[42]; 
	logFcent43	= xxxlogFcent[43]; 
	logFcent44	= xxxlogFcent[44]; 
	logFcent45	= xxxlogFcent[45]; 
	logFcent46	= xxxlogFcent[46]; 
	logFcent47	= xxxlogFcent[47]; 
	logFcent48	= xxxlogFcent[48]; 
	logFcent49	= xxxlogFcent[49]; 
	logFcent50	= xxxlogFcent[50]; 
	logFcent51	= xxxlogFcent[51]; 
	logFcent52	= xxxlogFcent[52]; 
	logFcent53	= xxxlogFcent[53]; 
	logFcent54	= xxxlogFcent[54]; 
	logFcent55	= xxxlogFcent[55]; 
	logFcent56	= xxxlogFcent[56]; 
	logFcent57	= xxxlogFcent[57]; 
	logFcent58	= xxxlogFcent[58]; 
	logFcent59	= xxxlogFcent[59]; 
	logFcent60	= xxxlogFcent[60]; 
	logFcent61	= xxxlogFcent[61]; 
	logFcent62	= xxxlogFcent[62]; 
	logFcent63	= xxxlogFcent[63]; 
	logFcent64	= xxxlogFcent[64]; 
	logFcent65	= xxxlogFcent[65]; 
	logFcent66	= xxxlogFcent[66]; 
	logFcent67	= xxxlogFcent[67]; 
	logFcent68	= xxxlogFcent[68]; 
	logFcent69	= xxxlogFcent[69]; 
	logFcent70	= xxxlogFcent[70]; 
	logFcent71	= xxxlogFcent[71]; 
	logFcent72	= xxxlogFcent[72]; 
	logFcent73	= xxxlogFcent[73]; 
	logFcent74	= xxxlogFcent[74]; 
	logFcent75	= xxxlogFcent[75]; 
	logFcent76	= xxxlogFcent[76]; 
	logFcent77	= xxxlogFcent[77]; 
	logFcent78	= xxxlogFcent[78]; 
	logFcent79	= xxxlogFcent[79]; 
	logFcent80	= xxxlogFcent[80]; 
	logFcent81	= xxxlogFcent[81]; 
	logFcent82	= xxxlogFcent[82]; 
	logFcent83	= xxxlogFcent[83]; 
	logFcent84	= xxxlogFcent[84]; 
	logFcent85	= xxxlogFcent[85]; 
	logFcent86	= xxxlogFcent[86]; 
	logFcent87	= xxxlogFcent[87]; 
	logFcent88	= xxxlogFcent[88]; 
	logFcent89	= xxxlogFcent[89]; 
	logFcent90	= xxxlogFcent[90]; 
	logFcent91	= xxxlogFcent[91]; 
	logFcent92	= xxxlogFcent[92]; 
	logFcent93	= xxxlogFcent[93]; 
	logFcent94	= xxxlogFcent[94]; 
	logFcent95	= xxxlogFcent[95]; 
	logFcent96	= xxxlogFcent[96]; 
	logFcent97	= xxxlogFcent[97]; 
	logFcent98	= xxxlogFcent[98]; 
	logFcent99	= xxxlogFcent[99]; 
	logFcent100	= xxxlogFcent[100]; 
	logFcent101	= xxxlogFcent[101]; 
	logFcent102	= xxxlogFcent[102]; 
	logFcent103	= xxxlogFcent[103]; 
	logFcent104	= xxxlogFcent[104]; 
	logFcent105	= xxxlogFcent[105]; 
	logFcent106	= xxxlogFcent[106]; 
	logFcent107	= xxxlogFcent[107]; 
	logFcent108	= xxxlogFcent[108]; 
	logFcent109	= xxxlogFcent[109]; 
	logFcent110	= xxxlogFcent[110]; 
	logFcent111	= xxxlogFcent[111]; 
	logFcent112	= xxxlogFcent[112]; 
	logFcent113	= xxxlogFcent[113]; 
	logFcent114	= xxxlogFcent[114]; 
	logFcent115	= xxxlogFcent[115]; 
	logFcent116	= xxxlogFcent[116]; 
	logFcent117	= xxxlogFcent[117]; 
	logFcent118	= xxxlogFcent[118]; 
	logFcent119	= xxxlogFcent[119]; 
	logFcent120	= xxxlogFcent[120]; 
	logFcent121	= xxxlogFcent[121]; 
	logFcent122	= xxxlogFcent[122]; 
	logFcent123	= xxxlogFcent[123]; 
	logFcent124	= xxxlogFcent[124]; 
	logFcent125	= xxxlogFcent[125]; 
	logFcent126	= xxxlogFcent[126]; 
	logFcent127	= xxxlogFcent[127]; 
	logFcent128	= xxxlogFcent[128]; 
	logFcent129	= xxxlogFcent[129]; 
	logFcent130	= xxxlogFcent[130]; 
	logFcent131	= xxxlogFcent[131]; 
	logFcent132	= xxxlogFcent[132]; 
	logFcent133	= xxxlogFcent[133]; 
	logFcent134	= xxxlogFcent[134]; 
	logFcent135	= xxxlogFcent[135]; 
	logFcent136	= xxxlogFcent[136]; 
	logFcent137	= xxxlogFcent[137]; 
	logFcent138	= xxxlogFcent[138]; 
	logFcent139	= xxxlogFcent[139]; 
	logFcent140	= xxxlogFcent[140]; 
	logFcent141	= xxxlogFcent[141]; 
	logFcent142	= xxxlogFcent[142]; 
	logFcent143	= xxxlogFcent[143]; 
	logFcent144	= xxxlogFcent[144]; 
	logFcent145	= xxxlogFcent[145]; 
	logFcent146	= xxxlogFcent[146]; 
	logFcent147	= xxxlogFcent[147]; 
	logFcent148	= xxxlogFcent[148]; 
	logFcent149	= xxxlogFcent[149]; 
	logFcent150	= xxxlogFcent[150]; 
	logFcent151	= xxxlogFcent[151]; 
	logFcent152	= xxxlogFcent[152]; 
	logFcent153	= xxxlogFcent[153]; 
	logFcent154	= xxxlogFcent[154]; 
	logFcent155	= xxxlogFcent[155]; 
	logFcent156	= xxxlogFcent[156]; 
	logFcent157	= xxxlogFcent[157]; 
	logFcent158	= xxxlogFcent[158]; 
	logFcent159	= xxxlogFcent[159]; 
	logFcent160	= xxxlogFcent[160]; 
	logFcent161	= xxxlogFcent[161]; 
	logFcent162	= xxxlogFcent[162]; 
	logFcent163	= xxxlogFcent[163]; 
	logFcent164	= xxxlogFcent[164]; 
	logFcent165	= xxxlogFcent[165]; 
	logFcent166	= xxxlogFcent[166]; 
	logFcent167	= xxxlogFcent[167]; 
	logFcent168	= xxxlogFcent[168]; 
	logFcent169	= xxxlogFcent[169]; 
	logFcent170	= xxxlogFcent[170]; 
	logFcent171	= xxxlogFcent[171]; 
	logFcent172	= xxxlogFcent[172]; 
	logFcent173	= xxxlogFcent[173]; 
	logFcent174	= xxxlogFcent[174]; 
	logFcent175	= xxxlogFcent[175]; 
	logFcent176	= xxxlogFcent[176]; 
	logFcent177	= xxxlogFcent[177]; 
	logFcent178	= xxxlogFcent[178]; 

	kFallOff1	= xxxkFallOff[1]; 
	kFallOff2	= xxxkFallOff[2]; 
	kFallOff3	= xxxkFallOff[3]; 
	kFallOff4	= xxxkFallOff[4]; 
	kFallOff5	= xxxkFallOff[5]; 
	kFallOff6	= xxxkFallOff[6]; 
	kFallOff7	= xxxkFallOff[7]; 
	kFallOff8	= xxxkFallOff[8]; 
	kFallOff9	= xxxkFallOff[9]; 
	kFallOff10	= xxxkFallOff[10]; 
	kFallOff11	= xxxkFallOff[11]; 
	kFallOff12	= xxxkFallOff[12]; 
	kFallOff13	= xxxkFallOff[13]; 
	kFallOff14	= xxxkFallOff[14]; 
	kFallOff15	= xxxkFallOff[15]; 
	kFallOff16	= xxxkFallOff[16]; 
	kFallOff17	= xxxkFallOff[17]; 
	kFallOff18	= xxxkFallOff[18]; 
	kFallOff19	= xxxkFallOff[19]; 
	kFallOff20	= xxxkFallOff[20]; 
	kFallOff21	= xxxkFallOff[21]; 
	kFallOff22	= xxxkFallOff[22]; 
	kFallOff23	= xxxkFallOff[23]; 
	kFallOff24	= xxxkFallOff[24]; 
	kFallOff25	= xxxkFallOff[25]; 
	kFallOff26	= xxxkFallOff[26]; 
	kFallOff27	= xxxkFallOff[27]; 
	kFallOff28	= xxxkFallOff[28]; 
	kFallOff29	= xxxkFallOff[29]; 
	kFallOff30	= xxxkFallOff[30]; 
	kFallOff31	= xxxkFallOff[31]; 
	kFallOff32	= xxxkFallOff[32]; 
	kFallOff33	= xxxkFallOff[33]; 
	kFallOff34	= xxxkFallOff[34]; 
	kFallOff35	= xxxkFallOff[35]; 
	kFallOff36	= xxxkFallOff[36]; 
	kFallOff37	= xxxkFallOff[37]; 
	kFallOff38	= xxxkFallOff[38]; 
	kFallOff39	= xxxkFallOff[39]; 
	kFallOff40	= xxxkFallOff[40]; 
	kFallOff41	= xxxkFallOff[41]; 
	kFallOff42	= xxxkFallOff[42]; 
	kFallOff43	= xxxkFallOff[43]; 
	kFallOff44	= xxxkFallOff[44]; 
	kFallOff45	= xxxkFallOff[45]; 
	kFallOff46	= xxxkFallOff[46]; 
	kFallOff47	= xxxkFallOff[47]; 
	kFallOff48	= xxxkFallOff[48]; 
	kFallOff49	= xxxkFallOff[49]; 
	kFallOff50	= xxxkFallOff[50]; 
	kFallOff51	= xxxkFallOff[51]; 
	kFallOff52	= xxxkFallOff[52]; 
	kFallOff53	= xxxkFallOff[53]; 
	kFallOff54	= xxxkFallOff[54]; 
	kFallOff55	= xxxkFallOff[55]; 
	kFallOff56	= xxxkFallOff[56]; 
	kFallOff57	= xxxkFallOff[57]; 
	kFallOff58	= xxxkFallOff[58]; 
	kFallOff59	= xxxkFallOff[59]; 
	kFallOff60	= xxxkFallOff[60]; 
	kFallOff61	= xxxkFallOff[61]; 
	kFallOff62	= xxxkFallOff[62]; 
	kFallOff63	= xxxkFallOff[63]; 
	kFallOff64	= xxxkFallOff[64]; 
	kFallOff65	= xxxkFallOff[65]; 
	kFallOff66	= xxxkFallOff[66]; 
	kFallOff67	= xxxkFallOff[67]; 
	kFallOff68	= xxxkFallOff[68]; 
	kFallOff69	= xxxkFallOff[69]; 
	kFallOff70	= xxxkFallOff[70]; 
	kFallOff71	= xxxkFallOff[71]; 
	kFallOff72	= xxxkFallOff[72]; 
	kFallOff73	= xxxkFallOff[73]; 
	kFallOff74	= xxxkFallOff[74]; 
	kFallOff75	= xxxkFallOff[75]; 
	kFallOff76	= xxxkFallOff[76]; 
	kFallOff77	= xxxkFallOff[77]; 
	kFallOff78	= xxxkFallOff[78]; 
	kFallOff79	= xxxkFallOff[79]; 
	kFallOff80	= xxxkFallOff[80]; 
	kFallOff81	= xxxkFallOff[81]; 
	kFallOff82	= xxxkFallOff[82]; 
	kFallOff83	= xxxkFallOff[83]; 
	kFallOff84	= xxxkFallOff[84]; 
	kFallOff85	= xxxkFallOff[85]; 
	kFallOff86	= xxxkFallOff[86]; 
	kFallOff87	= xxxkFallOff[87]; 
	kFallOff88	= xxxkFallOff[88]; 
	kFallOff89	= xxxkFallOff[89]; 
	kFallOff90	= xxxkFallOff[90]; 
	kFallOff91	= xxxkFallOff[91]; 
	kFallOff92	= xxxkFallOff[92]; 
	kFallOff93	= xxxkFallOff[93]; 
	kFallOff94	= xxxkFallOff[94]; 
	kFallOff95	= xxxkFallOff[95]; 
	kFallOff96	= xxxkFallOff[96]; 
	kFallOff97	= xxxkFallOff[97]; 
	kFallOff98	= xxxkFallOff[98]; 
	kFallOff99	= xxxkFallOff[99]; 
	kFallOff100	= xxxkFallOff[100]; 
	kFallOff101	= xxxkFallOff[101]; 
	kFallOff102	= xxxkFallOff[102]; 
	kFallOff103	= xxxkFallOff[103]; 
	kFallOff104	= xxxkFallOff[104]; 
	kFallOff105	= xxxkFallOff[105]; 
	kFallOff106	= xxxkFallOff[106]; 
	kFallOff107	= xxxkFallOff[107]; 
	kFallOff108	= xxxkFallOff[108]; 
	kFallOff109	= xxxkFallOff[109]; 
	kFallOff110	= xxxkFallOff[110]; 
	kFallOff111	= xxxkFallOff[111]; 
	kFallOff112	= xxxkFallOff[112]; 
	kFallOff113	= xxxkFallOff[113]; 
	kFallOff114	= xxxkFallOff[114]; 
	kFallOff115	= xxxkFallOff[115]; 
	kFallOff116	= xxxkFallOff[116]; 
	kFallOff117	= xxxkFallOff[117]; 
	kFallOff118	= xxxkFallOff[118]; 
	kFallOff119	= xxxkFallOff[119]; 
	kFallOff120	= xxxkFallOff[120]; 
	kFallOff121	= xxxkFallOff[121]; 
	kFallOff122	= xxxkFallOff[122]; 
	kFallOff123	= xxxkFallOff[123]; 
	kFallOff124	= xxxkFallOff[124]; 
	kFallOff125	= xxxkFallOff[125]; 
	kFallOff126	= xxxkFallOff[126]; 
	kFallOff127	= xxxkFallOff[127]; 
	kFallOff128	= xxxkFallOff[128]; 
	kFallOff129	= xxxkFallOff[129]; 
	kFallOff130	= xxxkFallOff[130]; 
	kFallOff131	= xxxkFallOff[131]; 
	kFallOff132	= xxxkFallOff[132]; 
	kFallOff133	= xxxkFallOff[133]; 
	kFallOff134	= xxxkFallOff[134]; 
	kFallOff135	= xxxkFallOff[135]; 
	kFallOff136	= xxxkFallOff[136]; 
	kFallOff137	= xxxkFallOff[137]; 
	kFallOff138	= xxxkFallOff[138]; 
	kFallOff139	= xxxkFallOff[139]; 
	kFallOff140	= xxxkFallOff[140]; 
	kFallOff141	= xxxkFallOff[141]; 
	kFallOff142	= xxxkFallOff[142]; 
	kFallOff143	= xxxkFallOff[143]; 
	kFallOff144	= xxxkFallOff[144]; 
	kFallOff145	= xxxkFallOff[145]; 
	kFallOff146	= xxxkFallOff[146]; 
	kFallOff147	= xxxkFallOff[147]; 
	kFallOff148	= xxxkFallOff[148]; 
	kFallOff149	= xxxkFallOff[149]; 
	kFallOff150	= xxxkFallOff[150]; 
	kFallOff151	= xxxkFallOff[151]; 
	kFallOff152	= xxxkFallOff[152]; 
	kFallOff153	= xxxkFallOff[153]; 
	kFallOff154	= xxxkFallOff[154]; 
	kFallOff155	= xxxkFallOff[155]; 
	kFallOff156	= xxxkFallOff[156]; 
	kFallOff157	= xxxkFallOff[157]; 
	kFallOff158	= xxxkFallOff[158]; 
	kFallOff159	= xxxkFallOff[159]; 
	kFallOff160	= xxxkFallOff[160]; 
	kFallOff161	= xxxkFallOff[161]; 
	kFallOff162	= xxxkFallOff[162]; 
	kFallOff163	= xxxkFallOff[163]; 
	kFallOff164	= xxxkFallOff[164]; 
	kFallOff165	= xxxkFallOff[165]; 
	kFallOff166	= xxxkFallOff[166]; 
	kFallOff167	= xxxkFallOff[167]; 
	kFallOff168	= xxxkFallOff[168]; 
	kFallOff169	= xxxkFallOff[169]; 
	kFallOff170	= xxxkFallOff[170]; 
	kFallOff171	= xxxkFallOff[171]; 
	kFallOff172	= xxxkFallOff[172]; 
	kFallOff173	= xxxkFallOff[173]; 
	kFallOff174	= xxxkFallOff[174]; 
	kFallOff175	= xxxkFallOff[175]; 
	kFallOff176	= xxxkFallOff[176]; 
	kFallOff177	= xxxkFallOff[177]; 
	kFallOff178	= xxxkFallOff[178]; 
}