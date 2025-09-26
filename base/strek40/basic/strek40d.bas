    1 REM NOTE: Basic language type forced to be:
    2 REM       trs2 - TRS-80 Level II BASIC tokenized file
   10 CLEAR150:DEFINTA,D-H,K-T:DIMS(8,8),G(8,8),Z(8,8),C(9,2),K(3,3),D$(8),B$(30),C$(3)
   20 Z$=STRING$(24," "):Y$="  ...................  ":X$=STRING$(14," "):W$=CHR$(30):V$="Enterprise":U$="Federation":C0$="## ,##"
   30 CLS:PRINTTAB(25);"Star Trek 4.0<ERROR>"TAB(23)"by Jake Commander<ERROR><ERROR>":INPUT"Do you want instructions ";A$:IFLEFT$(A$,1)="Y"GOSUB1180 
   40 FORX=0TO3:READC$(X):NEXT:FORY=1TO2:FORX=1TO9:READC(X,Y):NEXTX:NEXTY:FORX=0TO5:READA$(X):NEXT:FORX=1TO8:READD$(X):NEXT:FORX=1TO30:READB$(X):NEXT
   50 GOSUB1520 :GOSUB1750 :T=(RND(20)+19)*100+RND(100):T0=T+1:TT=32:GOSUB1700 :L=RND(8):M=RND(8):U=RND(8):V=RND(8):PRINT@640,"Await further orders."
   60 DATA"Docked","Green ","Yellow","Red   ",,1,1,1,,-1,-1,-1,,-1,-1,,1,1,1,,-1,-1,"   ","+++","   ","<+>"," . ",">!<","Warp Engines","S. R. Scanner","L. R. Sensors","Phaser Control"
   70 DATA "Photon Tubes","Shield Control","Damage Control","Computer"," ","Set Course","Short-Range"
   80 DATAVisual Scan,Long-Range,Sensor Scan,,Fire Phasers,Fire Photon,Torpedo,,Shield Control,Damage Control,Report
   90 DATACall On-board,Computer,,Finished,Computer,Guidance,Status,Report,Photon Torp-,edo Data,Course,Calculator,Guided-Photon,Torpedo,Cumulative Ga-,lactic Record
  100 FORJ=1TO8:FORI=1TO8:R=RND(100):IFR>98THENK=3ELSEIFR>95THENK=2ELSEIFR>80THENK=1ELSEK=0
  110 KT=KT+K:R=RND(100):IFR<97THENB=0ELSEB=1:BT=BT+1
  120 S=RND(8):G(I,J)=K*100+B*10+S:Z(I,J)=0:NEXTI:NEXTJ
  130 K7=KT:IFBT=0ORKT=0THEN100  ELSEPRINT@640,"You must destroy";KT;"klingons before stardate ";T+TT;",<ERROR>there are";BT;U$;" starbases in this galaxy."
  140 CL=0:B=0:S=0:K=0:S(U,V)=3:IFL<1ORL>8ORM<1ORM>8THEN230  
  150 X=G(L,M):K=INT(X/100):X=X-K*100:B=INT(X/10):S=X-B*10
  160 IFK=0THEN200  ELSEIFG>200THEN190  ELSEIFZ9=1ORZ7=1THEN180  
  170 PRINT"You have entered a combat area with your shields low.";W$;"<ERROR>This time they didn't shoot first.You have been warned....":Z9=1:GOTO190  
  180 PRINT"Combat area .. Condition RED --- shields are dangerously low."
  190 GOSUB1480 
  200 IFB<>0FORI=1TOB:GOSUB1170 :S(X,Y)=5:NEXT
  210 IFS<>0FORI=1TOS:GOSUB1170 :S(X,Y)=4:NEXT
  220 ST=4:GOSUB1600 
  230 PRINT@204,LLISTC0$;L;M;:PRINT@332,LLISTC0$;U;V;:PRINT@640,;:IFCL=1PRINT"Sensors detect klingons cloaking --- phasers necessary";W$
  240 IFD(2)<0O=0:A=2:GOTO300  ELSEO=1:Z=81:FORY=1TO8:FORX=1TO8:PRINT@X*3+Z,A$(S(X,Y));:NEXTX:Z=Z+64:NEXTY
  250 IFK<>0IFZ7=1IFRND(2)>1GOSUB890  ELSEELSEZ7=1
  260 A=0:GOSUB310  :PRINT@580,X$+CHR$(29)+"Command?";:M2=0
  270 H=0
  280 H=H+1:IFH=350THEN320  ELSEA$=INKEY$:IFA$=""THEN280  ELSEH=0:IFASC(A$)=13THENPRINT@640,CHR$(31)ELSEGOSUB310  :A=VAL(A$):PRINT@590,A;:IFA=0ORA>8THEN280  ELSEPRINT@494,B$(A*2-1);:PRINT@558,B$(A*2);:GOTO280  
  290 IFA<3ORD(A)>=0PRINT@576,"#################";:PRINT@640,;:ONA+1GOTO260  ,340  ,230  ,580  ,640  ,720  ,850  ,870  ,970  ,260  
  300 PRINTD$(A);" - inoperative";W$:IFA=4ANDCL=1THENPRINT"Illogical to remain here; klingons cloaking":GOTO260  ELSE260  
  310 PRINT@591," ";:PRINT@494,X$;:PRINT@558,X$;:RETURN
  320 GOSUB1700 :PRINT@640,;:GOSUB380  :IFK<>0IFRND(2)>1GOSUB890  :GOTO270  ELSE270  ELSEIFRND(10)<9THEN270  ELSEGOSUB1700 :IFL<1ORL>8ORM<1ORM>8THEN270  ELSEFORN=1TO8:FORQ=1TO8:X=INT(G(N,Q)/100):IFX=0NEXTQ:NEXTN
  330 G(N,Q)=G(N,Q)-X*100:G(L,M)=G(L,M)+X*100:K=X:PRINT"Klingons have just entered this quadrant";W$:GOSUB1480 :GOSUB1600 :GOTO230  
  340 PRINT@640,;:INPUT"Course (1-9) ";C:IFC=0THEN260  ELSEIFC<1ORC>9THEN340  ELSEPRINT@569,LLIST"#.#";C;:IFC=9C=1
  350 PRINT@640,;:INPUT"Warp factor (0-8) ";W:IFW=0THEN260  ELSEIFW<0ORW>8THEN350  
  360 IFD(1)<0ANDW>.2PRINTD$(1);" damaged; Max. speed is Warp 0.2":W=.25ELSEIFW<.9W=W*1.25
  370 GOSUB380  :GOTO440  
  380 IFST=0RETURNELSER=0:FORI=1TO8:IFD(I)>=0NEXTELSED(I)=D(I)+1:IFD(I)=0R=I:I=8:NEXTELSENEXT
  390 IFD(7)<0RETURNELSEPRINT@640,;:IFR<>0PRINTD$(R);" now functioning correctly";:GOTO430  
  400 IFRND(10)<9RETURNELSER=RND(8):ONRND(2)GOTO410  ,420  
  410 D(R)=D(R)-RND(5):IFD(R)<0PRINTD$(7);" report --- ";D$(R);" out";:GOTO430  ELSERETURN
  420 D(R)=D(R)+RND(5):PRINTD$(7);" report --- ";D$(R);" - reinforced";
  430 PRINTW$;:GOSUB1500 :GOTO1680 
  440 GOSUB890  :N=W*8:F=E/(5*(G/100+1)):IFN<=FTHENF=0ELSEN=F:F=1
  450 X=U:Y=V:S(X,Y)=0
  460 GOSUB530  :FORH=1TON:GOSUB540  :ONZGOTO470  ,480  ,550  
  470 NEXT:IFF=0THEN520  ELSEH=H-1:GOTO500  
  480 IFM2=1PRINT"Serious damage has occurred -- check ";D$(6):FORI=1TO8:D(I)=D(I)-RND(5)+1:NEXT
  490 PRINT"Navigational error -- ";:GOTO510  
  500 GOSUB1650 :PRINT"Energy depleted - ";
  510 X=X-X1:Y=Y-Y1:N=H-1:PRINTLLISTD$(1)+" shut down at sector"+C0$+W$;X;Y
  520 U=INT(X+.5):V=INT(Y+.5):S(U,V)=3:GOSUB1570 :IFW<1THEN230  ELSEGOSUB1700 :GOTO230  
  530 D=C:X1=C(D,1)+(C(D+1,1)-C(D,1))*(C-D):Y1=C(D,2)+(C(D+1,2)-C(D,2))*(C-D):RETURN
  540 X=X+X1:Y=Y+Y1:C=INT(X+.5):D=INT(Y+.5):IFC<1ORC>8ORD<1ORD>8Z=3:RETURNELSEIFS(C,D)<>0Z=2:RETURNELSEZ=1:RETURN
  550 FORJ=1TO8:FORI=1TO8:S(I,J)=0:NEXTI:NEXTJ:U=L*8+U+X1*N:V=M*8+V+Y1*N:L=U/8:M=V/8:U=INT(U-L*8+.5):V=INT(V-M*8+.5):IFU=0L=L-1:U=8
  560 IFV<=0M=M-1:V=8
  570 GOSUB1700 :GOSUB1570 :GOTO140  
  580 O=0:A=84:PRINT@A,Y$;:FORJ=M-1TOM+1:FORZ=1TO3:N(Z)=0:NEXT
  590 FORI=L-1TOL+1:IFI<1ORI>8ORJ<1ORJ>8THEN620  
  600 N(I-L+2)=G(I,J):IFD(8)<0THEN620  
  610 Z(I,J)=G(I,J)
  620 NEXT
  630 A=A+64:PRINT@A,LLIST"  : ### : ### : ### :   ";N(1);N(2);N(3);:A=A+64:PRINT@A,Y$;:NEXT:A=A+64:PRINT@A,Z$;:GOTO260  
  640 IFST=0PRINTC$(0);" - ";:GOTO300  ELSEIFK=0GOSUB1800 :GOTO260  
  650 GOSUB1680 :Z7=1:IFD(8)<0PRINTD$(8);" failure.Manually ";
  660 PRINT"locked on. Energy=";E;"... ";
  670 INPUT"Units to fire";F:IFF<=0THEN260  ELSEIFF>ETHEN650  
  680 E=E-F:GOSUB1580 :IFD(8)<0F=RND(F)
  690 R=640:FORI=1TO3:IFK(I,3)<0THEN710  
  700 H=F/K:J=.98:GOSUB1470 :K(I,3)=K(I,3)-H:PRINT" Klingon - "+W$;:IFK(I,3)<0X=K(I,1):Y=K(I,2):GOSUB1740 ELSEPRINTLLIST"at sector"+C0$+" (### left)";K(I,1);K(I,2);K(I,3):GOSUB1500 
  710 NEXT:GOSUB890  :GOTO260  
  720 IFP>0THEN730  ELSEPRINT"All photon torpedoes expended.":GOTO260  
  730 IFCL<>0GOSUB1810 :GOTO260  
  740 PRINT@640,B$(10);:INPUT" Course (1-9)";C:IFC=0THEN260  ELSEIFC<1ORC>9THEN740  ELSEIFC=9C=1
  750 Z7=1:GOSUB1710 :GOSUB530  :X=U-X1:Y=V-Y1:GOTO780  
  760 PRINT@Q,"+";:GOTO780  
  770 PRINT@Q," ";
  780 GOSUB540  :IFZ=3THEN830  ELSEIFY=INT(Y)ANDO=1THENGOSUB1780 :PRINT@Q,".";:ONS(C,D)+1GOTO770  ,790  ,770  ,760  ,810  ,820  ELSEONS(C,D)+1GOTO780  ,790  ,780  ,780  ,810  ,820  
  790 FORI=1TO3:IFC=K(I,1)ANDD=K(I,2)K(I,3)=-1:X=C:Y=D:R=640:GOSUB1740 
  800 NEXT:GOTO840  
  810 PRINT@640,LLISTB$(10)+" captured by star's gravity at sector "+C0$;X;Y:GOTO840  
  820 GOSUB1760 :PRINT@640,"*** Starbase destroyed *** ... Congratulations!!!":B=B-1:BT=BT-1:M2=1:X=C:Y=D:GOSUB1730 :PRINT@704,"Resulting explosion has blown you off course":C=RND(8):W=RND(8)/2:GOTO440  
  830 PRINT@660," - ";B$(10);" missed."
  840 GOSUB890  :GOTO230  
  850 IFST=0PRINTC$(0);" - ";:GOTO300  
  860 PRINT@640,;:INPUT"Total units on shields";X:IFX<0ORX>E+GTHEN860  ELSEE=E+G-X:G=X:GOSUB1580 :GOSUB1590 :PRINT@704,"Energy consumption is now";5*(G/100+1);" units per sector";W$;:GOTO260  
  870 R=0:PRINT@576," Next...Hit '['  ";
  880 A$=INKEY$:IFA$=""THEN880  ELSEIFASC(A$)=13THEN260  ELSEIFA$<>"["THEN880  ELSER=R+1:IFR>8THEN260  ELSEGOSUB1690 :GOTO880  
  890 IFK=0RETURNELSEIFST=0Z7=0:PRINT@768,"Star-base shields protect the ";V$;:RETURNELSER=640:FORI=1TO3:H=K(I,3):IFH<1NEXTELSEJ=1:GOSUB1470 :PRINTLLISTV$+" from sector"+C0$+W$;K(I,1);K(I,2):G=G-H:GOSUB1510 :NEXT
  900 GOTO1590 
  910 PRINT"The "V$;" is dead in space. You are at the klingons' mercy":FORZ=1TO6:GOSUB1500 :NEXT
  920 IFK=9THEN950  ELSEGOSUB910  :GOTO920  
  930 PRINT"It is stardate";T;W$:GOTO950  
  940 PRINT@768,"The "+V$+" was destroyed, the ";U$;" will be conquered"
  950 PRINT"There are still";KT;"klingon battle cruisers surviving.":END
  960 PRINT"The last klingon battle cruiser in the galaxy has been destroyed!!!<ERROR>The ";U$;" is saved!! Your efficiency rating =";K7/(T-T0)*1000:END
  970 CD=0
  980 A=0:GOSUB310  :PRINT@580,X$+CHR$(29)+"Option?";
  990 A$=INKEY$:IFA$=""THEN990  ELSEIFASC(A$)=13PRINT@576,:ONA+1GOTO260  ,1150 ,1010 ,1020 ,1030 ,1140 ,1000 ELSEGOSUB310  :A=VAL(A$):PRINT@590,A;:IFA>6A=0:GOTO990  ELSEF=A*2+17:PRINT@494,B$(F);:PRINT@558,B$(F+1);:GOTO990  
 1000 O=0:A=84:FORJ=1TO8:PRINT@A,;:FORI=1TO8:PRINTLLIST"###";Z(I,J);:NEXT:A=A+64:NEXT:GOTO980  
 1010 O=0:FORA=84TO532STEP64:PRINT@A,Y$;:NEXT:PRINT@84,"     Status Report:";:PRINT@212,"  Klingons left=";KT;:PRINT@276,"  Stardates left=";T0+TT-T;:PRINT@340,"  Starbases left=";BT;:GOTO980  
 1020 IFK=0GOSUB1800 :GOTO980  ELSECC=U:A=V:FORF=1TO3:IFK(F,3)<0THEN1130 ELSEW=K(F,1):X=K(F,2):GOTO1040 
 1030 INPUT"Start and end co-ordinates are (X,Y,X,Y)";CC,A,W,X
 1040 PRINT@704,;:X=X-A:A=CC-W:IFX<0THEN1080 ELSEIFA<0THEN1100 ELSEIFX>0THEN1050 ELSEIFA=0THEN1090 
 1050 CC=5
 1060 IFABS(A)<=ABS(X)THEN1070 ELSECC=CC+(((ABS(A)-ABS(X))+ABS(A))/ABS(A)):GOTO1120 
 1070 CC=CC+ABS(A)/ABS(X):GOTO1120 
 1080 IFA>0CC=7:GOTO1110 ELSEIFX=0THEN1100 
 1090 CC=1:GOTO1060 
 1100 CC=3
 1110 IFABS(A)>=ABS(X)CC=CC+ABS(X)/ABS(A)ELSECC=CC+(((ABS(X)-ABS(A))+ABS(X))/ABS(X))
 1120 PRINT@704,"Course =";CC;:CD=INT(SQR(X^2+A^2)):PRINT", distance =";CD:GOTO980  
 1130 NEXT:GOTO980  
 1140 IFD(5)<0THEN300  ELSEIFP<1ORCL=1THEN720  ELSEIFCD<>0THENC=CC:GOTO750  ELSE1160 
 1150 IFCD<>0C=CC:W=CD:GOTO360  
 1160 PRINT"No data available for guidance system":GOTO980  
 1170 X=RND(8):Y=RND(8):IFS(X,Y)<>0THEN1170 ELSERETURN
 1180 PRINT"<ERROR>You are the commander of the starship 'Enterprise'- your missionto destroy klignon battle cruisers menacing the Federation -<ERROR>   <ERROR>           'To boldly go where no man has gone before...'<ERROR>";
 1190 PRINT"<ERROR>You must do this within 32 stardates.";
 1200 PRINT"<ERROR><ERROR>The galaxy is represented as a 64 x 64 matrix made up from 8 <ERROR> 8 x 8 quadrants --- each containing 8  8 x 8 sectors.<ERROR><ERROR>The following objects are graphically represented ---";
 1210 PRINT"<ERROR><+> = the Enterprise.<ERROR>+++ = Klingon battle cruiser.<ERROR>>!< = Federation starbase.<ERROR> .  = Star."
 1220 GOSUB1450 
 1230 PRINT"<ERROR>Stars ( . ) ... These are obstacles. Klingons can hide behind <ERROR>them. If you bump into them, you may damage your ship.";
 1240 PRINT"<ERROR><ERROR>Starbases (>!<) ... Refuge and refuelling points. To dock with<ERROR>a base, you merely navigate to either side of it. Refuelling is<ERROR>done automatically - you may use a base any number of times.";
 1250 PRINT"<ERROR><ERROR>Klingons (+++) ... The enemy. They often shoot first and ask <ERROR>questions next. They are armed with phasers and deflectors";
 1260 PRINT"<ERROR>shields, but some are armed with cloaking devices which make<ERROR>them invisible and immune to photon torpedo attack.";
 1270 PRINT"<ERROR><ERROR>The Enterprise (<+>) ... That's you. A modern powerful warp-<ERROR>drive ship with all the latest devices, such as: scanners,<ERROR>phasers, photon torpedoes, deflector shields, and an on-board<ERROR>computer. These are described next.";
 1280 GOSUB1450 
 1290 PRINT"<ERROR>Command 1 ... Warp Engine Control. It is important to know the<ERROR>circular vector arrangement as shown. Integer and real values<ERROR>may be used, e.g. 1.5 is halfway between 1 and 2.";
 1300 PRINT"<ERROR><ERROR>1 warp factor      8    1    2        Vector of 9 is undefined<ERROR>moves exactly        .  .  .          but values may approach 9<ERROR>1 quadrant       7. .  ...  . .3<ERROR>.1 warp factor       .  .  .<ERROR>moves 1 sector     6    5    4";
 1310 PRINT"<ERROR><ERROR>To move from quadrant 5,5 to 6,5 you would use course 3,<ERROR>warp factor 1. Use warps less than 1 to move sector to sector.";
 1320 PRINT"<ERROR><ERROR>Command 2 .. Short Range Sensor Scan. Displays on the Enterprisescreen the immediate quadrant, showing positions of any objects<ERROR>in that galactic quadrant.";
 1330 GOSUB1450 
 1340 PRINT"<ERROR>Command 3 .. Long Range Sensor Scan.Shows conditions in space<ERROR>for 1 quadrant each side of the one you are in, which is shown<ERROR>in the center. The sacn is in the form 'xxx', where the units<ERROR>digit is the number of stars, the tens digit";
 1350 PRINT" is the number of<ERROR>starbases, the hundreds digit is the number of klingons.";
 1360 PRINT"<ERROR>Command 4 .. Phaser Control. This allows you to aim pure energyaat any klingons in the vicinity. Each phaser burst will deplete<ERROR>his shields and reduce his phaser capability - and your energy."
 1370 PRINT"<ERROR>Command 5 .. Photon torpedo control. Enables you to completely<ERROR>destroy a klingon with a single hit. Torpedo control is the samevector arrangement as already described.<ERROR><ERROR>":GOSUB1450 
 1380 PRINT"<ERROR>Command 6 .. Shield Control. Allows protection of the Enterpriseby placing ship's energy onto the deflectors - increases fuel<ERROR>consumtion though.";
 1390 PRINT"<ERROR>Command 7 ..  Damage Control Report. Shows state of repair of <ERROR>all devices.A state of less than zero means the device is<ERROR>temporarily damaged.";
 1400 PRINT"<ERROR>Command 8 .. On-board computer - contains following options:<ERROR>    Option 0. Finished with computer, return control to console.    Option 1. Computer guides you on the course from option 4<ERROR>    Option 2. Status report - shows how far";
 1410 PRINT" the mission has gone";
 1420 PRINT"    Option 3. Gives bearing of any klingons in the quadrant<ERROR>    Option 4. Shows vector needed to travel between co-ords.<ERROR>    Option 5. Guided photon torpedo on course from option 3.";
 1430 PRINT"<ERROR>    Option 6. Cumulative galactic record of all long range <ERROR>              sensor scans"
 1440 GOSUB1450 :RETURN
 1450 PRINT@990,"Press 'ENTER' to continue:";
 1460 A$=INKEY$:IFA$<>""THENCLS:RETURNELSE1460 
 1470 H=(H*2/SQR((K(I,1)-U)^2+(K(I,2)-V)^2))*(J*RND(0)+.2):R=R+64:PRINT@R,LLISTW$+"### unit hit on ";H;:RETURN
 1480 IFK<>3IFRND(10)>7CL=1
 1490 FORI=1TO3:K(I,3)=-1:NEXT:FORI=1TOK:GOSUB1170 :S(X,Y)=CL+1:K(I,1)=X:K(I,2)=Y:K(I,3)=200:NEXT:RETURN
 1500 FORZZ=1E3TO1.8E3:NEXT:RETURN
 1510 FORZZ=0TOH*.25:OUT236,4:ZZ=ZZ+.1:OUT236,0:ZZ=ZZ-.1:NEXT:RETURN
 1520 CLS:FORA=1TO28STEP27:Z=3:FORX=40TO87:SET(X,A):Z=Z+1:IFZ=6THENZ=0:SET(X,A-1):SET(X,A+1):NEXTELSENEXTX:NEXTA
 1530 FORA=38TO89STEP51:Z=2:FORX=1TO28:SET(A,X):Z=Z+1:IFZ<>3NEXTELSEZ=0:SET(A+1,X):SET(A-1,X):NEXTX:NEXTA
 1540 X=1:Z=25:GOSUB1550 :X=88:Z=19:GOSUB1550 :FORX=88TO126:SET(X,28):NEXT:GOTO1560 
 1550 FORX=XTOX+38:FORY=1TOZSTEP6:SET(X,Y):NEXTY:NEXTX:RETURN
 1560 PRINT@66,"Stardate";:PRINT@194,"Quadrant";:PRINT@245,"Energy";:PRINT@322,"Sector";:PRINT@373,"Shields";:PRINT@450,"Photon T.";:GOTO1680 
 1570 E=E-((N*5)*(G/100+1))
 1580 PRINT@238,LLIST"####";E;:GOSUB1600 
 1590 PRINT@366,LLIST"####";G;:GOSUB1680 :IFG<0THEN940  ELSERETURN
 1600 FORZX=U-1TOU+1:IFZX<1ORZX>8NEXT:GOTO1620 
 1610 IFS(ZX,V)=5THENZX=U+1:GOSUB1790 :NEXT:GOTO1660 ELSE NEXTZX
 1620 IFK=0THEN1640 
 1630 IFST<>3ST=3:GOTO1670 ELSE1660 
 1640 IFE>300ST=1:GOTO1660 ELSEIFE>5*(G/100+1)IFST<>2ST=2:GOTO1670 ELSE1660 
 1650 PRINT@640,;:IFG=0THEN910  ELSEPRINT"You have";E;"units of energy. Shields are taking";G;"units.":GOSUB1500 :IFD(6)<0PRINT"But, ";D$(6);" is out.Situation irrecoverable.":GOTO910  ELSE1630 
 1660 PRINT@110,C$(ST);:GOTO1680 
 1670 FORFL=1TO4:PRINT@110,C$(ST);:FORZZ=1TO50:NEXT:PRINT@110,"      ";:FORZZ=1TO50:NEXTZZ:NEXTFL:GOTO1660 
 1680 PRINT@640,;:RETURN
 1690 PRINT@576,X$;:PRINT@576,D$(R);:PRINT@590,D(R);:GOTO1680 
 1700 T=T+1:PRINT@77,T;:GOSUB1680 :IFT>T0+TTTHEN930  ELSERETURN
 1710 IFST=0P=10ELSEP=P-1
 1720 PRINT@462,P;:GOTO1680 
 1730 GOSUB1760 :S(X,Y)=0:G(L,M)=K*100+B*10+S:RETURN
 1740 K=K-1:GOSUB1730 :GOSUB1600 :PRINT@R+28,LLIST"klingon at"+C0$+" destroyed"+W$;X;Y:KT=KT-1:IFKT=0THEN960  ELSEGOSUB1500 :IFK=0CL=0:RETURNELSERETURN
 1750 ST=0:FORZ=1TO8:D(Z)=0:NEXT:E=5000:PRINT@237,E;:GOSUB1710 :G=0:GOTO1590 
 1760 IFO<>1RETURNELSEGOSUB1780 :FORZ=1TO30:PRINT@Q+RND(3)-2,CHR$(128+RND(62));:NEXT
 1770 PRINT@Q-1,"   ";:GOTO1680 
 1780 Q=18.5+X*3+64*Y:RETURN
 1790 IFST=0RETURNELSEPRINT@640,"Shields dropped for docking purposes";W$:GOSUB1750 :GOTO1670 
 1800 PRINT"Sensors detect no klingons in this quadrant":RETURN
 1810 PRINTD$(5);" will be of no use - ";B$(8);W$;:RETURN
