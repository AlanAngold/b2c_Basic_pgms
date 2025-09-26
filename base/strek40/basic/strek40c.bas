    1 REM NOTE: Basic language type forced to be:
    2 REM       trs2 - TRS-80 Level II BASIC tokenized file
   10 CLEAR150:DEFINTA,D-H,K-T:DIMS(8,8),G(8,8),Z(8,8),C(9,2),K(3,3),D$(8),B$(30),C$(3)
   35 Z$=STRING$(24," "):Y$="  ...................   ":X$=STRING$(14," "):W$=CHR$(30):V$="Enterprise":U$="Federation":CO$="## ,##"
  120 CLS:PRINT@20,"STARTREK VERSION 4.0":PRINT:PRINT:PRINT:PRINT:PRINT:PRINT:INPUT"Do you want instructions ";A$:IFA$="Y"THENGOSUB3460
  160 FORX=0TO3:READC$(X):NEXT:FORY=1TO2:FORX=1TO9:READC(X,Y):NEXTX,Y:FORX=0TO5:READA$(X):NEXT:FORX=1TO8:READD$(X):NEXT:FORX=1TO30:READB$(X):NEXT
  180 GOSUB5030:GOSUB5200:T=(RND(20)+19)*100+RND(100):T0=T+1:TT=32:GOSUB5170:L=RND(8):M=RND(8):U=RND(8):V=RND(8):PRINT@640,"Await further orders"
  260 DATA"DOCKED","GREEN ","YELLOW","RED  ",,1,1,1,,-1,-1,-1,,-1,-1,,1,1,1,,-1,-1,"   ","+K+","   ","<+>"," * ",">!<",Warp Engines,S.R.Sensors,L.R.Sensors,Phaser Control,Photon Tubes,Shield Control,Damage Control,Computer,,Set Course,Short Range,Visual Scan
  270 DATALong-Range,Sensor Scan,,Fire Phasers,Fire Photon,Torpedo,,Shield Control,Damage Control,Report,Call Onboard,Computer,,Finished,Computer,Guidance,Status,Report,Photon Torp-,edo Data,Course,Calculator,Guided-Photon,Torpedo,Cumulative Ga-,lactic Record
  290 FORJ=1TO8:FORI=1TO8:R=RND(100):IFR>98THENK=3ELSEIFR>95THENK=2ELSEIFR>80THENK=1ELSEK=0
  370 KT=KT+K:R=RND(100):IFR<97THENB=0ELSEB=1:BT=BT+1
  380 S=RND(8):G(I,J)=K*100+B*10+S:Z(I,J)=0:NEXTI,J
  420 K7=KT:IFBT=0ORKT=0THEN290ELSEPRINT@640," You must Destroy";KT;"Klingons within";TT;"stardates. <ERROR>There are";BT;U$;"  Starbases in this Galaxy."
  450 CL=0:K=0:B=0:S=0:S(U,V)=3:IFL<1ORL>8ORM<1ORM>8THEN760
  480 X=G(L,M):K=INT(X/100):X=X-K*100:B=INT(X/10):S=X-B*10
  490 IFK=0THEN700ELSEIFG>200THEN660ELSEIFZ9=1ORZ7=1THEN550
  500 PRINT" You have entered a Combat area with your shields low.";W$;"<ERROR> This time they didn't shoot first. You have been warned...":Z9=1:GOTO660
  550 PRINT" Combat Area .. Condition Red - Shields are dangerously low."
  660 GOSUB4900
  700 IFB<>0FORI=1TOB:GOSUB3350:S(X,Y)=5:NEXT
  710 IFS<>0FORI=1TOS:GOSUB3350:S(X,Y)=4:NEXT
  720 ST=4:GOSUB5120
  760 PRINT@204,LLISTCO$;L;M;:PRINT@332,LLISTCO$;U;V;:PRINT@640,;:IFCL=1PRINT" Sensors detect Klingons Cloaking - Phasers necessary";W$
  770 IFD(2)<0O=0:A=2:GOTO850ELSEO=1:Z=81:FORY=1TO8:FORX=1TO8:PRINT@X*3+Z,A$(S(X,Y));:NEXTX:Z=Z+64:NEXTY
  780 IFK<>0IFZ7=1IFRND(2)>1GOSUB2230ELSEELSEZ7=1
  830 A=0:GOSUB860:PRINT@580,X$+CHR$(29)+" Command ";:M2=0
  835 H=0
  840 H=H+1:IFH=350THEN870ELSEA$=INKEY$:IFA$=""THEN840ELSEH=0:IFASC(A$)=13THENPRINT@640,CHR$(31)ELSEGOSUB860:A=VAL(A$):PRINT@590,A;:IFA=0ORA>8THEN840ELSEPRINT@494,B$(A*2-1);:PRINT@558,B$(A*2);:GOTO840
  845 IFA<3ORD(A)>=0PRINT@576,"#################";:PRINT@640,;:ONA+1GOTO830,960,760,1460,1560,1740,2030,2090,2770,830
  850 PRINTD$(A);" - Inoperative";W$:IFA=4ANDCL=1PRINT" Illogical to remain here, Klingons cloaking":GOTO830ELSE830
  860 PRINT@591," ";:PRINT@494,X$;:PRINT@558,X$;:RETURN
  870 GOSUB5170:PRINT@640,;:GOSUB1100:IFK<>0IFRND(2)>1GOSUB2230:GOTO835ELSE835ELSEIFRND(10)<9THEN835ELSEGOSUB5170:IFL<1ORL>8ORM<1ORM>8THEN835ELSEFORN=1TO8:FORQ=1TO8:X=INT(G(N,Q)/100):IFX=0NEXTQ,N
  890 G(N,Q)=G(N,Q)-X*100:G(L,M)=G(L,M)+X*100:K=X:PRINT" Klingons have just entered this quadrant";W$:GOSUB4900:GOSUB5120:GOTO760
  960 PRINT@640,;:INPUT" Course(1-9) ";C:IFC=0THEN830ELSEIFC<1ORC>9THEN960ELSEPRINT@569,LLIST"#.#";C;:IFC=9C=1
  980 PRINT@640,;:INPUT" Warp Factor (0-8)";W:IFW=0THEN830ELSEIFW<0ORW>8THEN980
 1020 IFD(1)<0ANDW>.2PRINTD$(1);" Damaged, Max. Speed is Warp 0.2":W=.25ELSEIFW<.9W=W*1.25
 1040 GOSUB1100:GOTO1200
 1100 IFST=0RETURNELSER=0:FORI=1TO8:IFD(I)>=0NEXTELSED(I)=D(I)+1:IFD(I)=0R=I:I=8:NEXTELSENEXT
 1110 IFD(7)<0RETURNELSEPRINT@640,;:IFR<>0PRINTD$(R);" now functioning correctly";:GOTO1190
 1130 IFRND(10)<9RETURNELSER=RND(8):ONRND(2)GOTO1150,1180
 1150 D(R)=D(R)-RND(5):IFD(R)<0PRINTD$(7);" report - ";D$(R);" out";:GOTO1190ELSERETURN
 1180 D(R)=D(R)+RND(5):PRINTD$(7);" report -";D$(R);" - Reinforced";
 1190 PRINTW$;:GOSUB5000:GOTO5150
 1200 GOSUB2230:N=W*8:F=E/(5*(G/100+1)):IFN<=FTHENF=0ELSEN=F:F=1
 1210 X=U:Y=V:S(X,Y)=0
 1230 GOSUB1320:FORH=1TON:GOSUB1330:ONZGOTO1270,1275,1340
 1270 NEXT:IFF=0THEN1310ELSEH=H-1:GOTO1290
 1275 IFM2=1PRINT" Serious Damage has occurred - Check ";D$(6):FORI=1TO8:D(I)=D(I)-RND(5)+1:NEXT
 1280 PRINT" Navigational Error - ";:GOTO1300
 1290 GOSUB5128:PRINT" Energy Depleted - ";
 1300 X=X-X1:Y=Y-Y1:N=H-1:PRINTLLISTD$(1)+" shut down at sector"+CO$+W$;X;Y
 1310 U=INT(X+.5):V=INT(Y+.5):S(U,V)=3:GOSUB5095:IFW<1THEN760ELSEGOSUB5170:GOTO760
 1320 D=C:X1=C(D,1)+(C(D+1,1)-C(D,1))*(C-D):Y1=C(D,2)+(C(D+1,2)-C(D,2))*(C-D):RETURN
 1330 X=X+X1:Y=Y+Y1:C=INT(X+.5):D=INT(Y+.5):IFC<1ORC>8ORD<1ORD>8Z=3:RETURNELSEIFS(C,D)<>0Z=2:RETURNELSEZ=1:RETURN
 1340 FORJ=1TO8:FORI=1TO8:S(I,J)=0:NEXTI,J:U=L*8+U+X1*N:V=M*8+V+Y1*N:L=U/8:M=V/8:U=INT(U-L*8+.5):V=INT(V-M*8+.5):IFU=0L=L-1:U=8
 1350 IFV=0M=M-1:V=8
 1360 GOSUB5170:GOSUB5095:GOTO450
 1460 O=0:A=84:PRINT@A,Y$;:FORJ=M-1TOM+1:FORZ=1TO3:N(Z)=0:NEXT
 1480 FORI=L-1TOL+1:IFI<1ORI>8ORJ<1ORJ>8THEN1510
 1490 N(I-L+2)=G(I,J):IFD(8)<0THEN1510
 1500 Z(I,J)=G(I,J)
 1510 NEXT
 1520 A=A+64:PRINT@A,LLIST"  : ### : ### : ### :   ";N(1);N(2);N(3);:A=A+64:PRINT@A,Y$;:NEXT:A=A+64:PRINT@A,Z$;:GOTO830
 1560 IFST=0PRINTC$(0);" - ";:GOTO850ELSEIFK=0GOSUB5250:GOTO830
 1590 GOSUB5150:Z7=1:IFD(8)<0PRINTD$(8);" failure. Manually ";
 1610 PRINT" locked on. Energy = ";E;"... ";
 1620 INPUT" Units to fire";F:IFF<=0THEN830ELSEIFF>ETHEN1590
 1640 E=E-F:GOSUB5100:IFD(8)<0F=RND(F)
 1650 R=640:FORI=1TO3:IFK(I,3)<0THEN1710
 1670 H=F/K:J=.98:GOSUB4800:K(I,3)=K(I,3)-H:PRINT" Klingon - "+W$;:IFK(I,3)<0X=K(I,1):Y=K(I,2):GOSUB5195ELSEPRINTLLIST" at sector"+CO$+" (### left) ";K(I,1);K(I,2);K(I,3):GOSUB5000
 1710 NEXT:GOSUB2230:GOTO830
 1740 IFP>0THEN1760ELSEPRINT" All Photon Torpedoes expended.":GOTO830
 1760 IFCL<>0GOSUB5260:GOTO830
 1780 PRINT@640,B$(10);:INPUT" Course (1-9) ";C:IFC=0THEN830ELSEIFC<1ORC>9THEN1780ELSEIFC=9C=1
 1800 Z7=1:GOSUB5180:GOSUB1320:X=U-X1:Y=V-Y1:GOTO1830
 1810 PRINT@Q,"+";:GOTO1830
 1820 PRINT@Q," ";
 1830 GOSUB1330:IFZ=3THEN2020ELSEIFY=INT(Y)ANDO=1THENGOSUB5230:PRINT@Q,".";:ONS(C,D)+1GOTO1820,1900,1820,1810,1970,1990ELSEONS(C,D)+1GOTO1830,1900,1830,1830,1970,1990
 1900 FORI=1TO3:IFC=K(I,1)ANDD=K(I,2)K(I,3)=-1:X=C:Y=D:R=640:GOSUB5195
 1920 NEXT:GOTO2025
 1970 PRINT@640,LLISTB$(10)+" captured by star's gravity at sector "+CO$;X;Y:GOTO2025
 1990 GOSUB5210:PRINT@640,"***  Star Base destoryed  *** ... Congratulations!!":B=B-1:BT=BT-1:M2=1:X=C:Y=D:GOSUB5190:PRINT@704," Resulting explosion has blown you off course":C=RND(8):W=RND(8)/2:GOTO1200
 2020 PRINT@660," - ";B$(10);" Missed."
 2025 GOSUB2230:GOTO760
 2030 IFST=0PRINTC$(0);" - ";:GOTO850
 2040 PRINT@640,;:INPUT"Total units on shields";X:IFX<0ORX>E+GTHEN2040ELSEE=E+G-X:G=X:GOSUB5100:GOSUB5110:PRINT@704,"Energy consumption is now";5*(G/100+1);" Units per sector";W$;:GOTO830
 2090 R=0:PRINT@576," Next...hit `['  ";
 2100 A$=INKEY$:IFA$=""THEN2100ELSEIFASC(A$)=13THEN830ELSEIFA$<>"["THEN2100ELSER=R+1:IFR>8THEN830ELSEGOSUB5160:GOTO2100
 2230 IFK=0RETURNELSEIFST=0Z7=0:PRINT@768,"Star-base shields protect the ";V$;:RETURNELSER=640:FORI=1TO3:H=K(I,3):IFH<1NEXTELSEJ=1:GOSUB4800:PRINTLLISTV$+" From sector"+CO$+W$;K(I,1);K(I,2):G=G-H:GOSUB5010:NEXT
 2310 GOTO5110
 2330 PRINT"The "V$;" is dead in space. You are at the Klingons' mercy":FORZ=1TO6:GOSUB5000:NEXT
 2350 IFK=0THEN2390ELSEGOSUB2230:GOTO2350
 2360 PRINT"It is stardate ";T;W$:GOTO2390
 2380 PRINT@768,"The "+V$+" was destroyed, the ";U$;" will be conquered"
 2390 PRINT"There are still";KT;"Klingon battle-cruisers surviving.":GOTO6000
 2410 PRINT"<ERROR>The ";U$;" is saved !! Your effieciency rating =";K7/(T-T0)*1000:GOTO6000
 2770 CD=0
 2780 A=0:GOSUB860:PRINT@580,X$+CHR$(29)+"Option?";
 2790 A$=INKEY$:IFA$=""THEN2790ELSEIFASC(A$)=13PRINT@576,:ONA+1GOTO830,3320,2960,3060,3080,3300,2890ELSEGOSUB860:A=VAL(A$):PRINT@590,A;:IFA>6A=0:GOTO2790ELSEF=A*2+17:PRINT@494,B$(F);:PRINT@558,B$(F+1);:GOTO2790
 2890 O=0:A=84:FORJ=1TO8:PRINT@A,;:FORI=1TO8:PRINTLLIST"###";Z(I,J);:NEXT:A=A+64:NEXT:GOTO2780
 2960 O=0:FORA=84TO532STEP64:PRINT@A,Y$;:NEXT:PRINT@84,"     Status report:";:PRINT@212,"  Klingons  left=";KT;:PRINT@276,"  Stardates left=";T0+TT-T;:PRINT@340,"  Starbases left=";BT;:GOTO2780
 3060 IFK=0GOSUB5250:GOTO2780ELSECC=U:A=V:FORF=1TO3:IFK(F,3)<0THEN3290ELSEW=K(F,1):X=K(F,2):GOTO3110
 3080 INPUT"Start and end co-ordinates are (X,Y,X,Y)";CC,A,W,X
 3110 PRINT@704,;:X=X-A:A=CC-W:IFX<0THEN3200ELSEIFA<0THEN3230ELSEIFX>0THEN3140ELSEIFA=0THEN3210
 3140 CC=5
 3150 IFABS(A)<=ABS(X)THEN3180ELSECC=CC+(((ABS(A)-ABS(X))+ABS(A))/ABS(A)):GOTO3280
 3180 CC=CC+ABS(A)/ABS(X):GOTO3280
 3200 IFA>0CC=7:GOTO3240ELSEIFX=0THEN3230
 3210 CC=1:GOTO3150
 3230 CC=3
 3240 IFABS(A)>=ABS(X)CC=CC+ABS(X)/ABS(A)ELSECC=CC+(((ABS(X)-ABS(A))+ABS(X))/ABS(X))
 3280 PRINT@768,"Course =";CC;:CD=INT(SQR(X^2+A^2)):PRINT", Distance =";CD:GOTO2780
 3290 NEXT:GOTO2780
 3300 IFD(5)<0THEN850ELSEIFP<1ORCL=1THEN1740ELSEIFCD<>0THENC=CC:GOTO1800ELSE3330
 3320 IFCD<>0C=CC:W=CD:GOTO1020
 3330 PRINT"No data available for guidance system":GOTO2780
 3350 X=RND(8):Y=RND(8):IFS(X,Y)<>0THEN3350ELSERETURN
 3460 CLS:PRINT"<ERROR>You are the Commander of the starship `ENTERPRISE'.<ERROR> Your mission<ERROR>to destroy Klingon Battle-cruisers threatening the Federation -<ERROR><ERROR>         `To boldly go where no man has gone before'";
 3465 PRINT:PRINT:PRINT"<ERROR>         - You must do this within 32 Stardates -":GOSUB4790
 3470 PRINT"<ERROR><ERROR>The Galaxy is represented as a 64 by 64 matrix made up from<ERROR>8 by 8 quadrants - each containing 8 by 8 sectors.<ERROR><ERROR>The following objects are graphically shown:";
 3475 PRINT"<ERROR>     <+> = The Enterprise.<ERROR>     +K+ = The Klingons.  <ERROR>     >!< = Starbases.     <ERROR>      *  = A Star."
 3480 GOSUB4790
 3485 PRINT"<ERROR>Stars       *  These are obstacles. Klingons can hide behind<ERROR>               them. If you bump into them, you may damage<ERROR>               your ship.";
 3490 PRINT:PRINT
 3495 PRINT"<ERROR>Starbases  >!< Refuge and Refuelling points. To dock with a<ERROR>               base, you merely navigate to either side of it.<ERROR>               Refuelling is done automatically - You may use<ERROR>               a base any number of times.";
 3500 GOSUB4790
 3505 PRINT"<ERROR>Klingons   +K+ The enemy. They often shoot first and ask <ERROR>               questions later. They are armed with Phasers <ERROR>               and Deflector Shields, but some are armed ";
 3515 PRINT"<ERROR>               with Cloaking Devices which make them invisible<ERROR>               and immune to Photon Torpedo attack."
 3520 PRINT"<ERROR><ERROR>Enterprise <+> That's you. A modern powerful Warp-Drive<ERROR>               ship with all the latest devices, such as;<ERROR>               scanners,phasers,photon torpedoes,deflector<ERROR>               shields,and an on-board computer.";
 3525 GOSUB4790
 3530 PRINT"<ERROR>Command 1 .... Warp Engine control. It is important to know the                circular vector arrangement as shown. Integer <ERROR>               and real values may be used. e.g. 1.5 is halfway<ERROR>               between 1 and 2.";
 3540 PRINT"<ERROR><ERROR>1 Warp Factor        8    1    2       Vector of 9 is undefined moves exactly          .  .  .         but values may approach 91 quadrant,       7.  .  ...  .  .3   <ERROR>.1 Warp Factor         .  .  .    <ERROR>moves 1 sector       6    5    4";
 3545 PRINT"<ERROR><ERROR>To move from quadrant 5,5 to 6,5 you would use Course 3, Warp<ERROR>Factor 1. Use Warps less than 1 to move from sector to sector.";
 3547 GOSUB4790
 3550 PRINT"<ERROR><ERROR>Command 2 .... Short range sensor scan. Displays on the<ERROR>               Enterprise's screen the immediate quadrant,<ERROR>               showing positions of any objects in that<ERROR>               galactic quadrant.";
 3555 PRINT 
 3560 PRINT"<ERROR>Command 3 .... Long range sensor scan. Shows conditions in space               for 1 quadrant each side of the one you are in,<ERROR>               which is displayed in the centre. The scan is in<ERROR>               the form xxx , where the units digit is.";
 3570 PRINT" the<ERROR>               number of stars, the tens digit is the number of<ERROR>               starbases, the hundreds digit is the number of<ERROR>               klingons."
 3572 GOSUB4790
 3575 PRINT"<ERROR>Command 4 .... Phaser control. This allows you to aim pure<ERROR>               energy at any klingons in the vicinity.<ERROR>               Each phaser burst will deplete his shields and<ERROR>               reduce his phaser capability - and ";
 3577 PRINT"your energy."
 3580 PRINT"<ERROR>Command 5 .... Photon tordedo control. Enables you to<ERROR>               completely destroy a klingon with a single hit.<ERROR>               Torpedo course is the same vector arrangement as<ERROR>               already described.<ERROR><ERROR>":GOSUB4790
 3585 PRINT"<ERROR>Command 6 .... Shield control. Allows protection of the<ERROR>               Enterprise by placing ship's energy onto the<ERROR>               deflectors - increases fuel consumption though.";
 3590 PRINT:PRINT
 3595 PRINT"<ERROR>Command 7 .... Damage control report. Shows state of repair of<ERROR>               all devices. A state of less than zero means that               the device is temporarily damaged.";
 3600 GOSUB4790
 3605 PRINT"<ERROR><ERROR>Command 8 .... On-board computer - contains following options<ERROR><ERROR><ERROR>    Option 0 - Finished with computer, return to console<ERROR>    Option 1 - Computer guides you on the course from option 4<ERROR>    Option 2 - Status report - shows status of mission"
 3610 PRINT"    Option 3 - Gives bearing of klingons in the quad<ERROR>    Option 4 - Gives vector needed to travel between co-ords<ERROR>    Option 5 - Guides photon torpedo on course from option 3<ERROR>    Option 6 - Cumulative record of all long range sensor scans"
 3620 GOSUB4790:RETURN
 4790 PRINT@910," Press any key to continue"
 4795 A$=INKEY$:IFA$=""THEN4795ELSECLS:RETURN
 4800 H=(H*2/SQR((K(I,1)-U)^2+(K(I,2)-V)^2))*(J*RND(0)+.2):R=R+64:PRINT@R,LLISTW$+"### unit hit on ";H;:RETURN
 4900 IFK<>3IFRND(10)>7CL=1
 4910 FORI=1TO3:K(I,3)=-1:NEXT:FORI=1TOK:GOSUB3350:S(X,Y)=CL+1:K(I,1)=X:K(I,2)=Y:K(I,3)=200:NEXT:RETURN
 5000 FORZZ=1E3TO1.8E3:NEXT:RETURN
 5010 FORZZ=0TOH*.25:OUT236,4:ZZ=ZZ+.1:OUT236,0:ZZ=ZZ-.1:NEXT:RETURN
 5030 CLS:FORA=1TO28STEP27:Z=3:FORX=40TO87:SET(X,A):Z=Z+1:IFZ=6THENZ=0:SET(X,A-1):SET(X,A+1):NEXTELSENEXTX,A
 5040 FORA=38TO89STEP51:Z=2:FORX=1TO28:SET(A,X):Z=Z+1:IFZ<>3NEXTELSEZ=0:SET(A+1,X):SET(A-1,X):NEXTX,A
 5045 X=1:Z=25:GOSUB5050:X=88:Z=19:GOSUB5050:FORX=88TO126:SET(X,28):NEXT:GOTO5090
 5050 FORX=XTOX+38:FORY=1TOZSTEP6:SET(X,Y):NEXTY,X:RETURN
 5090 PRINT@66,"Stardate";:PRINT@194,"Quadrant";:PRINT@245,"Energy";:PRINT@322,"Sector";:PRINT@373,"Shields";:PRINT@450,"Photon T.";:GOTO5150
 5095 E=E-((N*5)*(G/100+1))
 5100 PRINT@238,LLIST"####";E;:GOSUB5120
 5110 PRINT@366,LLIST"####";G;:GOSUB5150:IFG<0THEN2380ELSERETURN
 5120 FORZ=U-1TOU+1:IFZ<1ORZ>8NEXTELSEIFS(Z,V)=5THENZ=U+1:GOSUB5240:NEXT:GOTO5130ELSENEXT
 5122 IFK=0THEN5126
 5124 IFST<>3ST=3:GOTO5140ELSE5130
 5126 IFE>300ST=1:GOTO5130ELSEIFE>5*(G/100+1)IFST<>2ST=2:GOTO5140ELSE5130
 5128 PRINT@640,;:IFG=0THEN2330ELSEPRINT"You have";E;"units of energy. Shields are taking";G;"units":GOSUB5000:IFD(6)<0PRINT"But, ";D$(6);" is out. Situation irrecoverable.":GOTO2330ELSE5124
 5130 PRINT@110,C$(ST);:GOTO5150
 5140 FORFL=1TO4:PRINT@110,C$(ST);:FORZZ=1TO50:NEXT:PRINT@110,"      ";:FORZZ=1TO50:NEXTZZ,FL:GOTO5130
 5150 PRINT@640,;:RETURN
 5160 PRINT@576,X$;:PRINT@576,D$(R);:PRINT@590,D(R);:GOTO5150
 5170 T=T+1:PRINT@77,T;:GOSUB5150:IFT>T0+TTTHEN2360ELSERETURN
 5180 IFST=0P=10ELSEP=P-1
 5185 PRINT@462,P;:GOTO5150
 5190 GOSUB5210:S(X,Y)=0:G(L,M)=K*100+B*10+S:RETURN
 5195 K=K-1:GOSUB5190:GOSUB5120:PRINT@R+28,LLIST"Klingon at"+CO$+" Destroyed"+W$;X;Y:KT=KT-1:IFKT=0THEN2410ELSEGOSUB5000:IFK=0CL=0:RETURNELSERETURN
 5200 ST=0:FORZ=1TO8:D(Z)=0:NEXT:E=5000:PRINT@237,E;:GOSUB5180:G=0:GOTO5110
 5210 IFO<>1RETURNELSEGOSUB5230:FORZ=1TO30:PRINT@Q+RND(3)-2,CHR$(128+RND(62));:NEXT
 5220 PRINT@Q-1,"    ";:GOTO5150
 5230 Q=18.5+X*3+64*Y:RETURN
 5240 IFST=0RETURNELSEPRINT@640,"Shields dropped for docking purposes";W$:GOSUB5200:GOTO5140
 5250 PRINT"Sensors detect no Klingons in this quadrant":RETURN
 5260 PRINTD$(5);" will be of no use - ";B$(8);W$;:RETURN
 6000 FORZZ=1TO3000:NEXT:CLS:PRINT:PRINT:PRINT"The Federation needs another starship commander":PRINT:INPUT"Do you wish to play again ";A$:IFA$="Y"THEN10ELSEEND
