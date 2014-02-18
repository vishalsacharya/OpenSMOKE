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

#include "symbolickinetics/polimi_h2conox_1101/OpenSMOKE_SymbolicKinetics_Polimi_H2CONOX_1101.h"

void OpenSMOKE_SymbolicKinetics_Polimi_H2CONOX_1101::giveReactionRates(double cTot, BzzVector &c, BzzVector &R) 
{
	// ============================================================ 
	// ===== CORRECTION COEFFICIENTS FOR THIRD BODY REACTIONS ===== 
	// ============================================================ 
	coeffM3 =	   c[1]*-2.0E-1+c[13]*1.5+c[15]*1.7E1+c[19]*2.0E-1-c[2]*2.0E-1+c[20]*1.4+c[3]*2.6E-1-c[6]*1.0+cTot;
	coeffM9 =	   c[1]*-5.0E-1+c[13]*1.5+c[15]*1.1E1+c[19]*9.0E-1-c[2]*5.0E-1+c[20]*2.8+cTot;
	coeffM10 =	   c[1]*-8.0E-1+c[13]*1.5+c[15]*1.1E1+c[19]*9.0E-1-c[2]*8.0E-1+c[20]*2.8+cTot;
	coeffM11 =	   c[13]*1.0+c[15]*1.5E1+c[20]*9.0E-1+cTot;
	coeffM14 =	   c[1]*-3.0E-1+c[13]*1.0+c[15]*5.0+c[19]*5.0E-1-c[2]*3.0E-1+c[20]*1.0+cTot;
	coeffM15 =	   cTot;
	coeffM18 =	   c[13]*1.0+c[15]*1.1E1+c[19]*5.0E-1-c[2]*5.0E-1+c[20]*1.0+cTot;
	coeffM23 =	   c[13]*9.0E-1+c[15]*4.0+c[19]*9.0E-1+c[20]*2.0+cTot;
	coeffM32 =	   cTot;
	coeffM45 =	   c[15]*4.0+c[17]*9.0+c[3]*1.5+cTot;
	coeffM68 =	   cTot;
	coeffM75 =	   c[13]*1.0+c[15]*1.4E1+c[3]*1.0+c[6]*1.0+cTot;
	coeffM93 =	   cTot;
	coeffM94 =	   cTot;
	coeffM106 =	   c[15]*9.0+c[3]*7.0E-1+c[6]*5.0E-1+cTot;
	coeffM107 =	   cTot;
	coeffM109 =	   c[13]*2.5E-1+c[15]*3.1+cTot;
	coeffM124 =	   cTot;
	coeffM142 =	   cTot;
	coeffM150 =	   c[15]*1.1E1+c[19]*5.0E-1+c[20]*2.0+c[3]*7.0E-1+c[6]*4.0E-1+cTot;
	coeffM161 =	   c[15]*4.0+cTot;


	// ============================================================ 
	// ===== CORRECTION COEFFICIENTS FOR FALL OFF REACTIONS ======= 
	// ============================================================ 
	CFO3 =	   coeffM3/((coeffM3*k3)/kFallOff3+1.0);
	CFO14 =	   coeffM14/((coeffM14*k14)/kFallOff14+1.0);
	CFO18 =	   coeffM18/((coeffM18*k18)/kFallOff18+1.0);
	CFO45 =	   coeffM45/((coeffM45*k45)/kFallOff45+1.0);
	CFO107 =	   coeffM107/((coeffM107*k107)/kFallOff107+1.0);
	CFO161 =	   coeffM161/((coeffM161*k161)/kFallOff161+1.0);


	lnPr3 =	   log((coeffM3*k3)/kFallOff3);
	lnPr14 =	   log((coeffM14*k14)/kFallOff14);
	lnPr161 =	   log((coeffM161*k161)/kFallOff161);


	wF3 =	pow(10.0, logFcent3/(1.0+BzzPow2((0.434294481903*lnPr3-0.40-0.67*logFcent3)/(0.806-0.0608012274665*lnPr3-1.1762*logFcent3)))); 
	wF14 =	pow(10.0, logFcent14/(1.0+BzzPow2((0.434294481903*lnPr14-0.40-0.67*logFcent14)/(0.806-0.0608012274665*lnPr14-1.1762*logFcent14)))); 
	wF18 =	1.00; 
	wF45 =	1.00; 
	wF107 =	1.00; 
	wF161 =	pow(10.0, logFcent161/(1.0+BzzPow2((0.434294481903*lnPr161-0.40-0.67*logFcent161)/(0.806-0.0608012274665*lnPr161-1.1762*logFcent161)))); 


	coeffFallOff3 =	   CFO3*wF3;
	coeffFallOff14 =	   CFO14*wF14;
	coeffFallOff18 =	   CFO18*wF18;
	coeffFallOff45 =	   CFO45*wF45;
	coeffFallOff107 =	   CFO107*wF107;
	coeffFallOff161 =	   CFO161*wF161;


	// ============================================================ 
	// ===== REACTION RATES FOR THIRD BODY REACTIONS (Flat) ======= 
	// ============================================================ 
	rFlat3 =	   k3*(c[24]*c[6]-c[28]*uK3);
	rFlat9 =	   k9*(c[13]-(c[24]*c[24])*uK9);
	rFlat10 =	   k10*(c[6]-(c[22]*c[22])*uK10);
	rFlat11 =	   k11*(c[24]*c[27]-c[15]*uK11);
	rFlat14 =	   -k14*(c[16]*uK14-c[27]*c[27]);
	rFlat15 =	   k15*(c[22]*c[27]-c[28]*uK15);
	rFlat18 =	   k18*(c[19]*c[22]-c[20]*uK18);
	rFlat23 =	   k23*(c[32]-c[19]*c[24]*uK23);
	rFlat32 =	   k32*(c[17]-c[24]*c[29]*uK32);
	rFlat45 =	   -k45*(c[18]*uK45-c[29]*c[29]);
	rFlat68 =	   k68*(c[31]-c[14]*c[24]*uK68);
	rFlat75 =	   k75*(c[14]-c[24]*c[26]*uK75);
	rFlat93 =	   k93*(c[9]-c[24]*c[5]*uK93);
	rFlat94 =	   k94*(c[9]-c[27]*c[3]*uK94);
	rFlat106 =	   k106*(c[22]*c[4]-c[7]*uK106);
	rFlat107 =	   k107*(c[27]*c[4]-c[10]*uK107);
	rFlat109 =	   k109*(c[24]*c[4]-c[8]*uK109);
	rFlat124 =	   k124*(c[30]-c[24]*c[8]*uK124);
	rFlat142 =	   k142*(c[22]*c[7]-c[23]*uK142);
	rFlat150 =	   k150*(c[5]-c[22]*c[3]*uK150);
	rFlat161 =	   k161*(c[27]*c[7]-c[12]*uK161);


	// ============================================================ 
	// ===== REACTION RATES FOR EVERY REACTION ==================== 
	// ============================================================ 
	r1 =	   k1*(c[24]*c[6]-c[22]*c[27]*uK1);
	r2 =	   k2*(c[13]*c[22]-c[24]*c[27]*uK2);
	r3 =	   coeffFallOff3*rFlat3;
	r4 =	   k4*(c[24]*(c[6]*c[6])-c[28]*c[6]*uK4);
	r5 =	   k5*(c[27]*c[28]-c[15]*c[6]*uK5);
	r6 =	   k6*(c[24]*c[28]-(c[27]*c[27])*uK6);
	r7 =	   k7*(c[22]*c[28]-c[27]*c[6]*uK7);
	r8 =	   k8*(c[27]*c[27]-c[15]*c[22]*uK8);
	r9 =	   coeffM9*rFlat9;
	r10 =	   coeffM10*rFlat10;
	r11 =	   coeffM11*rFlat11;
	r12 =	   k12*(c[24]*c[28]-c[13]*c[6]*uK12);
	r13 =	   k13*(c[28]*c[28]-c[16]*c[6]*uK13);
	r14 =	   coeffFallOff14*rFlat14;
	r15 =	   coeffM15*rFlat15;
	r16 =	   k16*(c[19]*c[6]-c[20]*c[22]*uK16);
	r17 =	   k17*(c[32]*c[6]-c[19]*c[28]*uK17);
	r18 =	   coeffFallOff18*rFlat18;
	r19 =	   k19*(c[19]*c[27]-c[20]*c[24]*uK19);
	r20 =	   k20*(c[19]*c[27]-c[20]*c[24]*uK20);
	r21 =	   k21*(c[19]*c[28]-c[20]*c[27]*uK21);
	r22 =	   k22*(c[15]*c[19]-c[13]*c[20]*uK22);
	r23 =	   coeffM23*rFlat23;
	r24 =	   k24*(c[22]*c[32]-c[20]*c[24]*uK24);
	r25 =	   k25*(c[24]*c[32]-c[13]*c[19]*uK25);
	r26 =	   k26*(c[27]*c[32]-c[15]*c[19]*uK26);
	r27 =	   k27*(c[28]*c[32]-c[16]*c[19]*uK27);
	r28 =	   c[28]*c[32]*k28;
	r29 =	   k29*(c[15]*c[24]-c[13]*c[27]*uK29);
	r30 =	   k30*(c[16]*c[24]-c[15]*c[27]*uK30);
	r31 =	   k31*(c[16]*c[24]-c[13]*c[28]*uK31);
	r32 =	   coeffM32*rFlat32;
	r33 =	   k33*(c[24]*c[29]-c[13]*c[25]*uK33);
	r34 =	   k34*(c[22]*c[29]-c[24]*c[8]*uK34);
	r35 =	   k35*(c[22]*c[29]-c[25]*c[27]*uK35);
	r36 =	   k36*(c[22]*c[29]-c[13]*c[4]*uK36);
	r37 =	   k37*(c[29]*c[6]-c[27]*c[8]*uK37);
	r38 =	   k38*(c[27]*c[29]-c[15]*c[25]*uK38);
	r39 =	   k39*(c[28]*c[29]-c[27]*c[30]*uK39);
	r40 =	   k40*(c[22]*c[30]-c[29]*c[6]*uK40);
	r41 =	   k41*(c[21]*c[29]-(c[24]*c[24])*c[3]*uK41);
	r42 =	   k42*(c[25]*c[29]-c[14]*c[24]*uK42);
	r43 =	   k43*(c[29]*c[29]-c[13]*c[14]*uK43);
	r44 =	   k44*(c[29]*c[29]-c[17]*c[25]*uK44);
	r45 =	   coeffFallOff45*rFlat45;
	r46 =	   k46*(c[29]*c[4]-c[26]*c[27]*uK46);
	r47 =	   k47*(c[29]*c[4]-c[15]*c[3]*uK47);
	r48 =	   k48*(c[29]*c[7]-c[15]*c[5]*uK48);
	r49 =	   k49*(c[29]*c[7]-c[30]*c[4]*uK49);
	r50 =	   k50*(c[24]*c[25]-c[13]*c[21]*uK50);
	r51 =	   k51*(c[22]*c[25]-c[24]*c[4]*uK51);
	r52 =	   k52*(c[25]*c[27]-c[24]*c[8]*uK52);
	r53 =	   k53*(c[25]*c[27]-c[15]*c[21]*uK53);
	r54 =	   k54*(c[25]*c[27]-c[13]*c[4]*uK54);
	r55 =	   k55*(c[25]*c[6]-c[22]*c[8]*uK55);
	r56 =	   k56*(c[25]*c[6]-c[27]*c[4]*uK56);
	r57 =	   k57*(c[25]*c[25]-(c[24]*c[24])*c[3]*uK57);
	r58 =	   k58*(c[21]*c[25]-c[24]*c[3]*uK58);
	r59 =	   k59*(c[25]*c[4]-c[27]*c[3]*uK59);
	r60 =	   k60*(c[25]*c[7]-c[27]*c[5]*uK60);
	r61 =	   k61*(c[21]*c[27]-c[24]*c[4]*uK61);
	r62 =	   k62*(c[21]*c[6]-c[22]*c[4]*uK62);
	r63 =	   k63*(c[21]*c[4]-c[22]*c[3]*uK63);
	r64 =	   k64*(c[18]*c[24]-c[13]*c[31]*uK64);
	r65 =	   k65*(c[18]*c[22]-c[14]*c[15]*uK65);
	r66 =	   k66*(c[18]*c[27]-c[15]*c[31]*uK66);
	r67 =	   k67*(c[18]*c[29]-c[17]*c[31]*uK67);
	r68 =	   coeffM68*rFlat68;
	r69 =	   k69*(c[24]*c[31]-(c[29]*c[29])*uK69);
	r70 =	   k70*(c[22]*c[31]-c[14]*c[27]*uK70);
	r71 =	   k71*(c[22]*c[31]-c[29]*c[8]*uK71);
	r72 =	   k72*(c[27]*c[31]-c[14]*c[15]*uK72);
	r73 =	   k73*(c[27]*c[31]-c[17]*c[8]*uK73);
	r74 =	   k74*(c[25]*c[31]-c[14]*c[29]*uK74);
	r75 =	   coeffM75*rFlat75;
	r76 =	   k76*(c[14]*c[24]-c[13]*c[26]*uK76);
	r77 =	   k77*(c[14]*c[22]-c[29]*c[4]*uK77);
	r78 =	   k78*(c[14]*c[22]-c[26]*c[27]*uK78);
	r79 =	   k79*(c[14]*c[27]-c[15]*c[26]*uK79);
	r80 =	   k80*(c[14]*c[4]-c[29]*c[5]*uK80);
	r81 =	   k81*(c[14]*c[25]-c[26]*c[29]*uK81);
	r82 =	   k82*(c[14]*c[29]-c[17]*c[26]*uK82);
	r83 =	   k83*(c[26]-c[24]*c[3]*uK83);
	r84 =	   k84*(c[24]*c[26]-c[13]*c[3]*uK84);
	r85 =	   k85*(c[22]*c[26]-c[24]*c[5]*uK85);
	r86 =	   k86*(c[22]*c[26]-c[25]*c[4]*uK86);
	r87 =	   k87*(c[26]*c[27]-c[15]*c[3]*uK87);
	r88 =	   k88*(c[26]*c[6]-c[28]*c[3]*uK88);
	r89 =	   k89*(c[26]*c[6]-c[24]*c[3]*c[6]*uK89);
	r90 =	   k90*(c[25]*c[26]-c[29]*c[3]*uK90);
	r91 =	   k91*(c[26]*c[29]-c[17]*c[3]*uK91);
	r92 =	   k92*(c[26]*c[4]-c[3]*c[8]*uK92);
	r93 =	   coeffM93*rFlat93;
	r94 =	   coeffM94*rFlat94;
	r95 =	   k95*(c[24]*c[9]-c[13]*c[5]*uK95);
	r96 =	   k96*(c[24]*c[9]-c[26]*c[27]*uK96);
	r97 =	   k97*(c[22]*c[9]-c[27]*c[5]*uK97);
	r98 =	   k98*(c[22]*c[9]-c[26]*c[6]*uK98);
	r99 =	   k99*(c[27]*c[9]-c[15]*c[5]*uK99);
	r100 =	   k100*(c[27]*c[9]-c[26]*c[28]*uK100);
	r101 =	   k101*(c[4]*c[9]-c[5]*c[8]*uK101);
	r102 =	   k102*(c[4]*c[9]-c[26]*c[7]*uK102);
	r103 =	   k103*(c[7]*c[9]-c[23]*c[26]*uK103);
	r104 =	   k104*(c[7]*c[9]-c[10]*c[5]*uK104);
	r105 =	   k105*(c[28]*c[4]-c[27]*c[7]*uK105);
	r106 =	   coeffM106*rFlat106;
	r107 =	   coeffFallOff107*rFlat107;
	r108 =	   k108*(c[32]*c[4]-c[19]*c[8]*uK108);
	r109 =	   coeffM109*rFlat109;
	r110 =	   k110*(c[24]*c[8]-c[13]*c[4]*uK110);
	r111 =	   k111*(c[22]*c[8]-c[27]*c[4]*uK111);
	r112 =	   k112*(c[27]*c[8]-c[15]*c[4]*uK112);
	r113 =	   k113*(c[6]*c[8]-c[28]*c[4]*uK113);
	r114 =	   k114*(c[29]*c[8]-c[17]*c[4]*uK114);
	r115 =	   k115*(c[4]*c[8]-c[27]*c[5]*uK115);
	r116 =	   k116*(c[7]*c[8]-c[10]*c[4]*uK116);
	r117 =	   k117*(c[8]*c[8]-c[15]*c[5]*uK117);
	r118 =	   k118*(c[13]*c[7]-c[10]*c[24]*uK118);
	r119 =	   k119*(c[10]*c[22]-c[27]*c[7]*uK119);
	r120 =	   k120*(c[10]*c[27]-c[15]*c[7]*uK120);
	r121 =	   k121*(c[10]*c[25]-c[29]*c[7]*uK121);
	r122 =	   k122*(c[10]*c[29]-c[17]*c[7]*uK122);
	r123 =	   k123*(c[10]*c[10]-c[15]*c[4]*c[7]*uK123);
	r124 =	   coeffM124*rFlat124;
	r125 =	   k125*(c[24]*c[30]-c[13]*c[8]*uK125);
	r126 =	   k126*(c[24]*c[30]-c[27]*c[29]*uK126);
	r127 =	   k127*(c[22]*c[30]-c[27]*c[8]*uK127);
	r128 =	   k128*(c[27]*c[30]-c[15]*c[8]*uK128);
	r129 =	   k129*(c[30]*c[4]-(c[8]*c[8])*uK129);
	r130 =	   k130*(c[29]*c[30]-c[17]*c[8]*uK130);
	r131 =	   k131*(c[30]*c[7]-c[10]*c[8]*uK131);
	r132 =	   k132*(c[23]*c[24]-c[27]*c[7]*uK132);
	r133 =	   k133*(c[22]*c[23]-c[6]*c[7]*uK133);
	r134 =	   k134*(c[23]*c[27]-c[28]*c[7]*uK134);
	r135 =	   k135*(c[23]*c[28]-c[27]*c[6]*c[7]*uK135);
	r136 =	   k136*(c[23]*c[7]-c[4]*c[6]*c[7]*uK136);
	r137 =	   k137*(c[23]-c[4]*c[6]*uK137);
	r138 =	   k138*(c[23]*c[23]-c[6]*(c[7]*c[7])*uK138);
	r139 =	   k139*(c[32]*c[7]-c[20]*c[24]*c[4]*uK139);
	r140 =	   k140*(c[24]*c[7]-c[27]*c[4]*uK140);
	r141 =	   k141*(c[22]*c[7]-c[4]*c[6]*uK141);
	r142 =	   coeffM142*rFlat142;
	r143 =	   k143*(c[28]*c[7]-c[10]*c[6]*uK143);
	r144 =	   k144*(c[7]*c[7]-(c[4]*c[4])*c[6]*uK144);
	r145 =	   k145*(c[7]*c[7]-c[23]*c[4]*uK145);
	r146 =	   k146*(c[7]*c[7]-c[23]*c[4]*uK146);
	r147 =	   k147*(c[19]*c[7]-c[20]*c[4]*uK147);
	r148 =	   k148*(c[32]*c[7]-c[10]*c[19]*uK148);
	r149 =	   k149*(c[20]*c[21]-c[19]*c[4]*uK149);
	r150 =	   coeffM150*rFlat150;
	r151 =	   k151*(c[24]*c[5]-c[27]*c[3]*uK151);
	r152 =	   k152*(c[24]*c[5]-c[27]*c[3]*uK152);
	r153 =	   k153*(c[25]*c[4]-c[24]*c[5]*uK153);
	r154 =	   k154*(c[22]*c[5]-(c[4]*c[4])*uK154);
	r155 =	   k155*(c[22]*c[5]-c[3]*c[6]*uK155);
	r156 =	   k156*(c[27]*c[5]-c[28]*c[3]*uK156);
	r157 =	   k157*(c[11]*c[24]-c[13]*c[7]*uK157);
	r158 =	   k158*(c[11]*c[22]-c[27]*c[7]*uK158);
	r159 =	   k159*(c[11]*c[27]-c[15]*c[7]*uK159);
	r160 =	   k160*(c[11]-c[10]*uK160);
	r161 =	   coeffFallOff161*rFlat161;
	r162 =	   k162*(c[12]*c[27]-c[15]*c[23]*uK162);
	r163 =	   c[13]*c[24]*k163;
	r164 =	   c[13]*c[29]*k164;
	r165 =	   c[15]*c[27]*k165;
	r166 =	   c[15]*c[28]*k166;
	r167 =	   c[15]*c[29]*k167;
	r168 =	   c[16]*c[7]*k168;
	r169 =	   c[16]*c[27]*k169;
	r170 =	   c[16]*c[22]*k170;
	r171 =	   c[16]*c[28]*k171;
	r172 =	   c[16]*c[29]*k172;
	r173 =	   c[17]*c[6]*k173;
	r174 =	   c[17]*c[24]*k174;
	r175 =	   c[17]*c[27]*k175;
	r176 =	   c[17]*c[22]*k176;
	r177 =	   c[17]*c[28]*k177;
	r178 =	   c[17]*c[29]*k178;


	// ============================================================ 
	// ===== REACTION RATES FOR EVERY SPECIES ===================== 
	// ============================================================ 
	R[1] =	   0.0;
	R[2] =	   0.0;
	R[3] =	   r150+r151+r152+r155+r156+r41+r47+r57+r58+r59+r63+r83+r84+r87+r88+r89+r90+r91+r92+r94;
	R[4] =	   -r101-r102-r105-r106-r107-r108-r109+r110+r111+r112+r113+r114-r115+r116+r123-r129+r136+r137+r139+r140+r141+r144*2.0+r145+r146+r147+r149-r153+r154*2.0+r36-r46-r47+r49+r51+r54+r56-r59+r61+r62-r63+r77-r80+r86-r92;
	R[5] =	   r101+r104+r115+r117-r150-r151-r152+r153-r154-r155-r156+r48+r60+r80+r85+r93+r95+r97+r99;
	R[6] =	   -r1-r10-r113+r12+r13+r133+r135+r136+r137+r138+r141+r143+r144+r155-r16-r17-r173-r3-r37-r4+r40+r5-r55-r56-r62+r7-r88+r98;
	R[7] =	   r102-r103-r104+r105+r106-r116-r118+r119+r120+r121+r122+r123-r131+r132+r133+r134+r135+r138*2.0-r139-r140-r141-r142-r143-r144*2.0-r145*2.0-r146*2.0-r147-r148+r157+r158+r159-r161-r168-r48-r49-r60;
	R[8] =	   r101+r108+r109-r110-r111-r112-r113-r114-r115-r116-r117*2.0+r124+r125+r127+r128+r129*2.0+r130+r131+r34+r37+r52+r55+r71+r73+r92;
	R[9] =	   -r100-r101-r102-r103-r104-r93-r94-r95-r96-r97-r98-r99;
	R[10] =	   r104+r107+r116+r118-r119-r120-r121-r122-r123*2.0+r131+r143+r148+r160+r168;
	R[11] =	   -r157-r158-r159-r160;
	R[12] =	   r161-r162;
	R[13] =	   r110-r118+r12+r125+r157-r164+r174-r2+r22+r25+r29+r31+r33+r36+r43+r50+r54+r64+r76+r84-r9+r95;
	R[14] =	   r42+r43+r65+r68+r70+r72+r74-r75-r76-r77-r78-r79-r80-r81-r82;
	R[15] =	   r11+r112+r117+r120+r123+r128+r159+r162-r166-r167+r169+r175-r22+r26-r29+r30+r38+r47+r48+r5+r53+r65+r66+r72+r79+r8+r87+r99;
	R[16] =	   r13+r14+r166-r168-r169-r170-r172+r177+r27-r30-r31;
	R[17] =	   r114+r122+r130+r164+r167+r172-r173-r174-r175-r176-r177-r32+r44+r67+r73+r82+r91;
	R[18] =	   r45-r64-r65-r66-r67;
	R[19] =	   r108-r147+r148+r149-r16+r17-r18-r19-r20-r21-r22+r23+r25+r26+r27;
	R[20] =	   r139+r147-r149+r16+r18+r19+r20+r21+r22+r24+r28;
	R[21] =	   -r149-r41+r50+r53-r58-r61-r62-r63;
	R[22] =	   r1+r10*2.0-r106-r111-r119-r127-r133-r141-r142-r15+r150-r154-r155-r158+r16-r170-r176-r18-r2-r24-r34-r35-r36-r40-r51+r55+r62+r63-r65-r7-r70-r71-r77-r78+r8-r85-r86-r97-r98;
	R[23] =	   r103-r132-r133-r134-r135-r136-r137-r138*2.0+r142+r145+r146+r162;
	R[24] =	   -r1-r109-r11-r110+r118-r12+r124-r125-r126-r132+r139-r140-r151-r152+r153-r157+r164-r174+r19+r2+r20+r23+r24-r25+r28-r29-r3-r30-r31+r32-r33+r34-r4+r41*2.0+r42-r50+r51+r52+r57*2.0+r58-r6+r61-r64+r68-r69+r75-r76+r83-r84+r85+r89+r9*2.0+r93-r95-r96;
	R[25] =	   -r121-r153+r33+r35+r38-r42+r44-r50-r51-r52-r53-r54-r55-r56-r57*2.0-r58-r59-r60-r74-r81+r86-r90;
	R[26] =	   r100+r102+r103+r46+r75+r76+r78+r79+r81+r82-r83-r84-r85-r86-r87-r88-r89-r90-r91-r92+r96+r98;
	R[27] =	   r1-r100+r105-r107-r11+r111-r112+r115+r119-r120+r126+r127-r128+r132-r134+r135-r14*2.0+r140-r15+r151+r152-r156+r158-r159-r161-r162+r166+r167-r169+r170-r175+r176-r19+r2-r20+r21-r26+r28+r29+r30+r35+r37-r38+r39+r46-r5-r52-r53-r54+r56+r59+r6*2.0+r60-r61-r66+r7+r70-r72-r73+r78-r79-r8*2.0-r87+r94+r96+r97-r99;
	R[28] =	   r100-r105+r113-r12-r13*2.0+r134-r135-r143+r15+r156-r166+r168+r169+r17+r170+r172+r173-r177-r21-r27-r28+r3+r31-r39+r4-r5-r6-r7+r88;
	R[29] =	   -r114+r121-r122+r126-r130-r164-r167-r172+r173+r174+r175+r176+r177+r32-r33-r34-r35-r36-r37-r38-r39+r40-r41-r42-r43*2.0-r44*2.0-r45*2.0-r46-r47-r48-r49-r67+r69*2.0+r71+r74+r77+r80+r81-r82+r90-r91;
	R[30] =	   -r124-r125-r126-r127-r128-r129-r130-r131+r39-r40+r49;
	R[31] =	   r64+r66+r67-r68-r69-r70-r71-r72-r73-r74;
	R[32] =	   -r108-r139-r148-r17-r23-r24-r25-r26-r27-r28;
}