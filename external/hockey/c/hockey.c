/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/hockey.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5d91fdbf6ac0 ---------A   00002 PRINT TAB(33);"HOCKEY"
    0x5d91fdbf7e70 ---------A   00004 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5d91fdbf7ff0 ---------A   00006 PRINT:PRINT:PRINT
    0x5d91fdbf5920 ---------A   00010 REM ROBERT PUOPOLO ALG. 1 140 MCCOWAN 6/7/73 HOCKEY
    0x5d91fdbf5fc0 ---------A   00030 LET X=1
    0x5d91fdbf6450 ---------A   00040 PRINT:PRINT:PRINT
    0x5d91fdbf5610 ---------A T 00050 PRINT "WOULD YOU LIKE THE INSTRUCTIONS";:INPUT C$
    0x5d91fdbf8100 ---------A   00055 PRINT
    0x5d91fdbf55b0 ---------A   00060 IF C$="NO" THEN 90
    0x5d91fdbfd860 ---------A   00065 IF C$="YES" THEN 80
    0x5d91fdbfd980 ---------A   00070 PRINT "ANSWER YES OR NO!!":GOTO 50 
    0x5d91fdbfda00 ---------A T 00080 GOTO 1720
    0x5d91fdbfea00 ---------A T 00090 DIM A$(7),B$(7),H(20),T(5),T1(5),T2(5),T3(5)
    0x5d91fdbfeef0 ---------A   00100 PRINT "ENTER THE TWO TEAMS";:INPUT A$(7),B$(7) 
    0x5d91fdbfefa0 ---------A   00105 PRINT
    0x5d91fdbff2e0 ---------A   00110 PRINT "ENTER THE NUMBER OF MINUTES IN A GAME";:INPUT T6
    0x5d91fdbff340 ---------A   00115 PRINT
    0x5d91fdbff610 ---------A   00120 IF T6<1 THEN 110:PRINT 
    0x5d91fdbffa20 ---------A   00130 PRINT "WOULD THE " A$(7) " COACH ENTER HIS TEAM" 
    0x5d91fdbffac0 ---------A   00135 PRINT
    0x5d91fdc00460 ---------A   00140 FOR I=1 TO 6:PRINT "PLAYER"I;:INPUT A$(I):NEXT I:PRINT 
    0x5d91fdc00870 ---------A   00150 PRINT "WOULD THE " B$(7) " COACH DO THE SAME"
    0x5d91fdc00910 ---------A   00155 PRINT
    0x5d91fdc011f0 ---------A   00160 FOR T=1 TO 6:PRINT "PLAYER"T;:INPUT B$(T):NEXT T:PRINT 
    0x5d91fdc01550 ---------A   00170 PRINT "INPUT THE REFEREE FOR THIS GAME";:INPUT R$  
    0x5d91fdc019e0 ---------A   00180 PRINT:PRINT TAB(10);A$(7) " STARTING LINEUP" 
    0x5d91fdc01fe0 ---------A   00190 FOR T=1 TO 6:PRINT A$(T):NEXT T  
    0x5d91fdc024d0 ---------A   00200 PRINT:PRINT TAB(10);B$(7)" STARTING LINEUP"
    0x5d91fdc02b50 ---------A   00210 FOR T=1 TO 6:PRINT B$(T):NEXT T:PRINT
    0x5d91fdc02cf0 ---------A   00220 PRINT "WE'RE READY FOR TONIGHTS OPENING FACE-OFF."
    0x5d91fdc03380 ---------A   00230 PRINT R$ " WILL DROP THE PUCK BETWEEN " A$(2) " AND " B$(2)
    0x5d91fdc03990 ---------A   00240 FOR L=1 TO T6:IF L=1 THEN 260
    0x5d91fdc03b10 ---------A   00250 PRINT "AND WE'RE READY FOR THE FACE-OFF" 
    0x5d91fdc046a0 ---------A T 00260 C=INT(2*RND(X))+1:ON C GOTO 270,280
    0x5d91fdc04a20 ---------A T 00270 PRINT A$(7) " HAS CONTROL OF THE PUCK":GOTO 290
    0x5d91fdc04d40 ---------A T 00280 PRINT B$(7) " HAS CONTROL." 
    0x5d91fdc05810 ---------A T 00290 PRINT "PASS";:INPUT P:FOR N=1 TO 3:H(N)=0:NEXT N 
    0x5d91fdc05a70 ---------A   00300 IF P<0 THEN 290
    0x5d91fdc05cd0 ---------A   00305 IF P>3 THEN 290
    0x5d91fdc061e0 ---------A T 00310 FOR J=1 TO (P+2) 
    0x5d91fdc068d0 ---------A   00320 H(J)=INT(5*RND(X))+1 
    0x5d91fdc07020 ---------A   00330 NEXT J:IF H(J-1)=H(J-2) THEN 310
    0x5d91fdc07390 ---------A   00331 IF P+2<3 THEN 350
    0x5d91fdc079e0 ---------A   00335 IF H(J-1)=H(J-3) THEN 310
    0x5d91fdc08020 ---------A   00340 IF H(J-2)=H(J-3) THEN 310
    0x5d91fdc08280 ---------A T 00350 IF P=0 THEN 360
    0x5d91fdc08310 ---------A   00355 GOTO 490
    0x5d91fdc08770 ---------A T 00360 INPUT "SHOT";S:IF S<1 THEN 360
    0x5d91fdc089d0 ---------A   00365 IF S>4 THEN 360
    0x5d91fdc08cd0 ---------A   00370 ON C GOTO 380,480
    0x5d91fdc09b20 ---------A T 00380 PRINT A$(H(J-1));:G=H(J-1):G1=0:G2=0 
    0x5d91fdc09f90 ---------A T 00390 ON S GOTO 400,420,440,460
    0x5d91fdc0a100 ---------A T 00400 PRINT " LET'S A BOOMER GO FROM THE RED LINE!!" 
    0x5d91fdc0a440 ---------A   00410 Z=10:GOTO 890
    0x5d91fdc0a5b0 ---------A T 00420 PRINT " FLIPS A WRISTSHOT DOWN THE ICE"
    0x5d91fdc0a710 ---------A T 00440 PRINT " BACKHANDS ONE IN ON THE GOALTENDER" 
    0x5d91fdc0a980 ---------A   00450 Z=25:GOTO 890
    0x5d91fdc0aad0 ---------A T 00460 PRINT " SNAPS A LONG FLIP SHOT"
    0x5d91fdc0ad50 ---------A   00470 Z=17:GOTO 890
    0x5d91fdc0b990 ---------A T 00480 PRINT B$(H(J-1));:G1=0:G2=0:G=H(J-1):GOTO 390
    0x5d91fdc0bc60 ---------A T 00490 ON C GOTO 500,640
    0x5d91fdc0c020 ---------A T 00500 ON P GOTO 510,540,570
    0x5d91fdc0ca00 ---------A T 00510 PRINT A$(H(J-2)) " LEADS " A$(H(J-1)) " WITH A PERFECT PASS." 
    0x5d91fdc0cf30 ---------A   00520 PRINT A$(H(J-1)) " CUTTING IN!!!"
    0x5d91fdc0dc50 ---------A   00530 G=H(J-1):G1=H(J-2):G2=0:Z1=3:GOTO 770
    0x5d91fdc0e960 ---------A T 00540 PRINT A$(H(J-2)) " GIVES TO A STREAKING " A$(H(J-1))
    0x5d91fdc0f310 ---------A   00550 PRINT A$(H(J-3)) " COMES DOWN ON " B$(5) " AND " B$(4)
    0x5d91fdc10160 ---------A   00560 G=H(J-3):G1=H(J-1):G2=H(J-2):Z1=2:GOTO 770
    0x5d91fdc102d0 ---------A T 00570 PRINT "OH MY GOD!! A ' 4 ON 2 ' SITUATION"
    0x5d91fdc10bc0 ---------A   00580 PRINT A$(H(J-3)) " LEADS " A$(H(J-2))
    0x5d91fdc11100 ---------A   00590 PRINT A$(H(J-2)) " IS WHEEELING THROUGH CENTER."
    0x5d91fdc119e0 ---------A   00600 PRINT A$(H(J-2)) " GIVES AND GOES WITH " A$(H(J-1))
    0x5d91fdc11b50 ---------A   00610 PRINT "PRETTY PASSING!"
    0x5d91fdc12440 ---------A   00620 PRINT A$(H(J-1)) " DROPS IT TO " A$(H(J-4))
    0x5d91fdc13280 ---------A   00630 G=H(J-4):G1=J(J-1):G2=H(J-2):Z1=1:GOTO 770
    0x5d91fdc13630 ---------A T 00640 ON P GOTO 650,670,720
    0x5d91fdc14030 ---------A T 00650 PRINT B$(H(J-1)) " HITS " B$(H(J-2)) " FLYING DOWN THE LEFT SIDE" 
    0x5d91fdc14c70 ---------A   00660 G=H(J-2):G1=H(J-1):G2=0:Z1=3:GOTO 770
    0x5d91fdc14dd0 ---------A T 00670 PRINT "IT'S A ' 3 ON 2 '!"
    0x5d91fdc154c0 ---------A   00680 PRINT "ONLY " A$(4) " AND " A$(5) " ARE BACK."
    0x5d91fdc15db0 ---------A   00690 PRINT B$(H(J-2)) " GIVES OFF TO " B$(H(J-1))
    0x5d91fdc166a0 ---------A   00700 PRINT B$(H(J-1)) " DROPS TO " B$(H(J-3))
    0x5d91fdc174f0 ---------A   00710 G=H(J-3):G1=H(J-1):G2=H(J-2):Z1=2:GOTO 770 
    0x5d91fdc17670 ---------A T 00720 PRINT " A ' 3 ON 2 ' WITH A ' TRAILER '!" 
    0x5d91fdc18080 ---------A   00730 PRINT B$(H(J-4)) " GIVES TO " B$(H(J-2)) " WHO SHUFFLES IT OFF TO" 
    0x5d91fdc185c0 ---------A   00740 PRINT B$(H(J-1)) " WHO FIRES A WING TO WING PASS TO "
    0x5d91fdc18b20 ---------A   00750 PRINT B$(H(J-3)) " AS HE CUTS IN ALONE!!"    
    0x5d91fdc19980 ---------A   00760 G=H(J-3):G1=H(J-1):G2=H(J-2):Z1=1:GOTO 770 
    0x5d91fdc1a090 ---------A T 00770 PRINT "SHOT";:INPUT S:IF S>4 THEN 770:IF S<1 THEN 770
    0x5d91fdc1a390 ---------A   00780 ON C GOTO 790,880
    0x5d91fdc1aa30 ---------A T 00790 PRINT A$(G);:ON S GOTO 800,820,840,860 
    0x5d91fdc1abb0 ---------A T 00800 PRINT " LET'S A BIG SLAP SHOT GO!!"  
    0x5d91fdc1b150 ---------A   00810 Z=4:Z=Z+Z1:GOTO 890
    0x5d91fdc1b2a0 ---------A T 00820 PRINT " RIPS A WRIST SHOT OFF" 
    0x5d91fdc1b840 ---------A   00830 Z=2:Z=Z+Z1:GOTO 890
    0x5d91fdc1b980 ---------A T 00840 PRINT " GETS A BACKHAND OFF" 
    0x5d91fdc1bf20 ---------A   00850 Z=3:Z=Z+Z1:GOTO 890
    0x5d91fdc1c090 ---------A T 00860 PRINT " SNAPS OFF A SNAP SHOT"   
    0x5d91fdc1c640 ---------A   00870 Z=2:Z=Z+Z1:GOTO 890
    0x5d91fdc1ccd0 ---------A T 00880 PRINT B$(G);:ON S GOTO 800,820,840,860 
    0x5d91fdc1d270 ---------A T 00890 PRINT "AREA";:INPUT A:IF A<1 THEN 890
    0x5d91fdc1d4d0 ---------A   00895 IF A>4 THEN 890
    0x5d91fdc1d7b0 ---------A   00900 ON C GOTO 910,920
    0x5d91fdc1dbf0 ---------A T 00910 S2=S2+1:GOTO 930 
    0x5d91fdc1dff0 ---------A T 00920 S3=S3+1
    0x5d91fdc1e900 ---------A T 00930 A1=INT(4*RND(X))+1:IF A<>A1 THEN 1200
    0x5d91fdc1efd0 ---------A T 00940 H(20)=INT(100*RND(X))+1
    0x5d91fdc1f6e0 ---------A   00950 IF INT(H(20)/Z)=H(20)/Z THEN 1160
    0x5d91fdc1f9e0 ---------A   00960 ON C GOTO 970,980
    0x5d91fdc201e0 ---------A T 00970 PRINT "GOAL " A$(7):H(9)=H(9)+1:GOTO 990 
    0x5d91fdc20990 ---------A T 00980 PRINT "SCORE " B$(7):H(8)=H(8)+1   
    0x5d91fdc210d0 ---------A T 00990 FOR B1=1 TO 25:PRINT CHR$(7);:NEXT B1:PRINT
    0x5d91fdc21630 ---------A   01000 PRINT "SCORE: ";:IF H(8)>H(9) THEN 1020
    0x5d91fdc22000 ---------A   01010 PRINT A$(7)":";H(9),B$(7)":";H(8):GOTO 1030
    0x5d91fdc22970 ---------A T 01020 PRINT B$(7)":";H(8),A$(7)":";H(9)  
    0x5d91fdc22c60 ---------A T 01030 ON C GOTO 1040,1100
    0x5d91fdc231c0 ---------A T 01040 PRINT "GOAL SCORED BY: " A$(G):IF G1=0 THEN 1070
    0x5d91fdc23450 ---------A   01050 IF G2=0 THEN 1080
    0x5d91fdc23ad0 ---------A   01060 PRINT " ASSISTED BY: " A$(G1) " AND " A$(G2):GOTO 1090 
    0x5d91fdc23c70 ---------A T 01070 PRINT " UNASSISTED.":GOTO 1090
    0x5d91fdc23fc0 ---------A T 01080 PRINT " ASSISTED BY: " A$(G1)
    0x5d91fdc24eb0 ---------A T 01090 T(G)=T(G)+1:T1(G1)=T1(G1)+1:T1(G2)=T1(G2)+1:GOTO 1540
    0x5d91fdc251f0 ---------A T 01100 PRINT "GOAL SCORED BY: " B$(G);
    0x5d91fdc25440 ---------A   01110 IF G1=0 THEN 1130
    0x5d91fdc256d0 ---------A   01115 IF G2=0 THEN 1140
    0x5d91fdc25d50 ---------A   01120 PRINT " ASSISTED BY: " B$(G1) " AND " B$(G2):GOTO 1150 
    0x5d91fdc25f00 ---------A T 01130 PRINT " UNASSISTED":GOTO 1150
    0x5d91fdc262a0 ---------A T 01140 PRINT " ASSISTED BY: " B$(G1):GOTO 1150
    0x5d91fdc27190 ---------A T 01150 T2(G)=T2(G)+1:T3(G1)=T3(G1)+1:T3(G2)=T3(G2)+1:GOTO 1540
    0x5d91fdc28570 ---------A T 01160 A2=INT(100*RND(X))+1:IF INT(A2/4)=A2/4 THEN 1170
    0x5d91fdc28600 ---------A   01165 GOTO 1200
    0x5d91fdc288e0 ---------A T 01170 ON C GOTO 1180,1190
    0x5d91fdc28d60 ---------A T 01180 PRINT "SAVE " B$(6) " --  REBOUND":GOTO 940
    0x5d91fdc291c0 ---------A T 01190 PRINT "SAVE " A$(6) " --  FOLLOW UP":GOTO 940
    0x5d91fdc29870 ---------A T 01200 S1=INT(6*RND(X))+1 
    0x5d91fdc29b60 ---------A   01210 ON C GOTO 1220,1380
    0x5d91fdc2a150 ---------A T 01220 ON S1 GOTO 1230,1260,1290,1300,1330,1350 
    0x5d91fdc2a480 ---------A T 01230 PRINT "KICK SAVE AND A BEAUTY BY " B$(6)
    0x5d91fdc2a790 ---------A   01240 PRINT "CLEARED OUT BY " B$(3)
    0x5d91fdc2a820 ---------A   01250 GOTO 260 
    0x5d91fdc2ab50 ---------A T 01260 PRINT "WHAT A SPECTACULAR GLOVE SAVE BY " B$(6)
    0x5d91fdc2af70 ---------A   01270 PRINT "AND " B$(6) " GOLFS IT INTO THE CROWD"
    0x5d91fdc2b010 ---------A   01280 GOTO 1540
    0x5d91fdc2b390 ---------A T 01290 PRINT "SKATE SAVE ON A LOW STEAMER BY " B$(6):GOTO 260 
    0x5d91fdc2b7b0 ---------A T 01300 PRINT "PAD SAVE BY " B$(6) " OFF THE STICK" 
    0x5d91fdc2bea0 ---------A   01310 PRINT "OF "A$(G) " AND " B$(6) " COVERS UP"
    0x5d91fdc2bf30 ---------A   01320 GOTO 1540
    0x5d91fdc2c240 ---------A T 01330 PRINT "WHISTLES ONE OVER THE HEAD OF " B$(6) 
    0x5d91fdc2c2d0 ---------A   01340 GOTO 260 
    0x5d91fdc2c610 ---------A T 01350 PRINT B$(6) " MAKES A FACE SAVE!! AND HE IS HURT"
    0x5d91fdc2ca20 ---------A   01360 PRINT "THE DEFENSEMAN " B$(5) " COVERS UP FOR HIM" 
    0x5d91fdc2cab0 ---------A   01370 GOTO 1540
    0x5d91fdc2d080 ---------A T 01380 ON S1 GOTO 1390,1410,1440,1470,1490,1520 
    0x5d91fdc2d3b0 ---------A T 01390 PRINT "STICK SAVE BY " A$(6) 
    0x5d91fdc2d740 ---------A   01400 PRINT "AND CLEARED OUT BY " A$(4):GOTO 260 
    0x5d91fdc2dba0 ---------A T 01410 PRINT "OH MY GOD!! " B$(G) " RATTLES ONE OFF THE POST" 
    0x5d91fdc2e2b0 ---------A   01420 PRINT "TO THE RIGHT OF " A$(6) " AND " A$(6) " COVERS "; 
    0x5d91fdc2e460 ---------A   01430 PRINT "ON THE LOOSE PUCK!":GOTO 1540 
    0x5d91fdc2e790 ---------A T 01440 PRINT "SKATE SAVE BY " A$(6)
    0x5d91fdc2eac0 ---------A   01450 PRINT A$(6) " WHACKS THE LOOSE PUCK INTO THE STANDS" 
    0x5d91fdc2eb60 ---------A   01460 GOTO 1540
    0x5d91fdc2ef70 ---------A T 01470 PRINT "STICK SAVE BY " A$(6) " AND HE CLEARS IT OUT HIMSELF" 
    0x5d91fdc2eff0 ---------A   01480 GOTO 260 
    0x5d91fdc2f320 ---------A T 01490 PRINT "KICKED OUT BY " A$(6) 
    0x5d91fdc2f4b0 ---------A   01500 PRINT "AND IT REBOUNDS ALL THE WAY TO CENTER ICE"  
    0x5d91fdc2f540 ---------A   01510 GOTO 260 
    0x5d91fdc2f940 ---------A T 01520 PRINT "GLOVE SAVE " A$(6) " AND HE HANGS ON" 
    0x5d91fdc2f9f0 ---------A   01530 GOTO 1540
    0x5d91fdc30250 ---------A T 01540 NEXT L:FOR N=1 TO 30:PRINT CHR$(7);:NEXT N:PRINT "THAT'S THE SIREN"
    0x5d91fdc30540 ---------A   01550 PRINT:PRINT TAB(15);"FINAL SCORE:"
    0x5d91fdc30950 ---------A   01560 IF H(8)>H(9) THEN 1580
    0x5d91fdc31310 ---------A   01570 PRINT A$(7)":";H(9),B$(7)":";H(8):GOTO 1590
    0x5d91fdc31c70 ---------A T 01580 PRINT B$(7)":";H(8),A$(7)":";H(9)
    0x5d91fdc31fb0 ---------A T 01590 PRINT: PRINT TAB(10);"SCORING SUMMARY":PRINT
    0x5d91fdc32330 ---------A   01600 PRINT TAB(25);A$(7)
    0x5d91fdc32a70 ---------A   01610 PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"
    0x5d91fdc331b0 ---------A   01620 PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
    0x5d91fdc33e20 ---------A   01630 FOR I=1 TO 5:PRINT TAB(5);A$(I);TAB(21);T(I);TAB(36);T1(I) 
    0x5d91fdc33fc0 ---------A   01640 NEXT I:PRINT 
    0x5d91fdc34340 ---------A   01650 PRINT TAB(25);B$(7)
    0x5d91fdc34aa0 ---------A   01660 PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"  
    0x5d91fdc351e0 ---------A   01670 PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
    0x5d91fdc35e50 ---------A   01680 FOR T=1 TO 5:PRINT TAB(5);B$(T);TAB(21);T2(T);TAB(36);T3(T)
    0x5d91fdc36010 ---------A   01690 NEXT T:PRINT 
    0x5d91fdc36940 ---------A   01700 PRINT "SHOTS ON NET":PRINT A$(7)":";S2:PRINT B$(7)":";S3 
    0x5d91fdc36990 ---------A   01710 END
    0x5d91fdc36b80 ---------A T 01720 PRINT: PRINT "THIS IS A SIMULATED HOCKEY GAME."
    0x5d91fdc36d00 ---------A   01730 PRINT "QUESTION     RESPONSE"
    0x5d91fdc36e90 ---------A   01740 PRINT "PASS         TYPE IN THE NUMBER OF PASSES YOU WOULD"
    0x5d91fdc37030 ---------A   01750 PRINT "             LIKE TO MAKE, FROM 0 TO 3."
    0x5d91fdc371d0 ---------A   01760 PRINT "SHOT         TYPE THE NUMBER CORRESPONDING TO THE SHOT"
    0x5d91fdc37360 ---------A   01770 PRINT "             YOU WANT TO MAKE.  ENTER:"
    0x5d91fdc374e0 ---------A   01780 PRINT "             1 FOR A SLAPSHOT"
    0x5d91fdc37660 ---------A   01790 PRINT "             2 FOR A WRISTSHOT"
    0x5d91fdc377e0 ---------A   01800 PRINT "             3 FOR A BACKHAND"
    0x5d91fdc37970 ---------A   01810 PRINT "             4 FOR A SNAP SHOT"
    0x5d91fdc37b10 ---------A   01820 PRINT "AREA         TYPE IN THE NUMBER CORRESPONDING TO"
    0x5d91fdc37ca0 ---------A   01830 PRINT "             THE AREA YOU ARE AIMING AT.  ENTER:"
    0x5d91fdc37e30 ---------A   01840 PRINT "             1 FOR UPPER LEFT HAND CORNER"
    0x5d91fdc37fc0 ---------A   01850 PRINT "             2 FOR UPPER RIGHT HAND CORNER"
    0x5d91fdc38150 ---------A   01860 PRINT "             3 FOR LOWER LEFT HAND CORNER"
    0x5d91fdc382c0 ---------A   01870 PRINT "             4 FOR LOWER RIGHT HAND CORNER"
    0x5d91fdc38360 ---------A   01880 PRINT
    0x5d91fdc38510 ---------A   01890 PRINT "AT THE START OF THE GAME, YOU WILL BE ASKED FOR THE NAMES"
    0x5d91fdc386b0 ---------A   01900 PRINT "OF YOUR PLAYERS.  THEY ARE ENTERED IN THE ORDER: "
    0x5d91fdc38850 ---------A   01910 PRINT "LEFT WING, CENTER, RIGHT WING, LEFT DEFENSE,"
    0x5d91fdc389f0 ---------A   01920 PRINT "RIGHT DEFENSE, GOALKEEPER.  ANY OTHER INPUT REQUIRED WILL"
    0x5d91fdc38b50 ---------A   01930 PRINT "HAVE EXPLANATORY INSTRUCTIONS."
    0x5d91fdc38bc0 ---------A   01940 GOTO 90
    0x5d91fdc38c00 ---------A   01950 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00050      00070T
     00080      00065T
     00090      00060T, 01940T
     00260      00240T, 01250T, 01290T, 01340T, 01400T, 01480T, 01510T
     00270      00260T
     00280      00260T
     00290      00270T, 00300T, 00305T
     00310      00330T, 00335T, 00340T
     00350      00331T
     00360      00350T, 00360T, 00365T
     00380      00370T
     00390      00480T
     00400      00390T
     00420      00390T
     00440      00390T
     00460      00390T
     00480      00370T
     00490      00355T
     00500      00490T
     00510      00500T
     00540      00500T
     00570      00500T
     00640      00490T
     00650      00640T
     00670      00640T
     00720      00640T
     00770      00530T, 00560T, 00630T, 00660T, 00710T, 00760T, 00770T
     00790      00780T
     00800      00790T, 00880T
     00820      00790T, 00880T
     00840      00790T, 00880T
     00860      00790T, 00880T
     00880      00780T
     00890      00410T, 00450T, 00470T, 00810T, 00830T, 00850T, 00870T, 00890T, 
                00895T
     00910      00900T
     00920      00900T
     00930      00910T
     00940      01180T, 01190T
     00970      00960T
     00980      00960T
     00990      00970T
     01020      01000T
     01030      01010T
     01040      01030T
     01070      01040T
     01080      01050T
     01090      01060T, 01070T
     01100      01030T
     01130      01110T
     01140      01115T
     01150      01120T, 01130T, 01140T
     01160      00950T
     01170      01160T
     01180      01170T
     01190      01170T
     01200      00930T, 01165T
     01220      01210T
     01230      01220T
     01260      01220T
     01290      01220T
     01300      01220T
     01330      01220T
     01350      01220T
     01380      01210T
     01390      01380T
     01410      01380T
     01440      01380T
     01470      01380T
     01490      01380T
     01520      01380T
     01540      01090T, 01150T, 01280T, 01320T, 01370T, 01430T, 01460T, 01530T
     01580      01560T
     01590      01570T
     01720      00080T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5d91fdbf6ac0 (00002)   0x000000000000 (00000)   0x5d91fdc38c00 (01950)   0x5d91fdc38c00 (01950)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03100 - 10000    6910 

 */



/*
 *  Symbol Table Listing for 'basic/hockey.bas'
 *
    A                        Float       
    A$              Array    String          {0,6} 
    A1                       Float       
    A2                       Float       
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$              Array    String          {0,6} 
    B1                       Float       
    C                        Float       
    C$                       String      
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Float       
    G1                       Float       
    G2                       Float       
    H               Array    Float           {0,19} 
    HEX$            Function String          args=1, int    
    I                        Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Float       
    L                        Float       
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Float       
    OCT$            Function String          args=1, float  
    P                        Float       
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R$                       String      
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Float       
    S1                       Float       
    S2                       Float       
    S3                       Float       
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T               Array    Float           {0,4} 
    T1              Array    Float           {0,4} 
    T2              Array    Float           {0,4} 
    T3              Array    Float           {0,4} 
    T6                       Float       
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Float       
    Z                        Float       
    Z1                       Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/hockey.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5d91fdbf6ac0 ---------A   01000 PRINT TAB(33);"HOCKEY"
    0x5d91fdbf7e70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5d91fdbf7ff0 ---------A   01020 PRINT:PRINT:PRINT
    0x5d91fdbf5920 ---------A   01030 REM ROBERT PUOPOLO ALG. 1 140 MCCOWAN 6/7/73 HOCKEY
    0x5d91fdbf5fc0 ---------A   01040 LET X=1
    0x5d91fdbf6450 ---------A   01050 PRINT:PRINT:PRINT
    0x5d91fdbf5610 ---------A T 01060 PRINT "WOULD YOU LIKE THE INSTRUCTIONS";:INPUT C$
    0x5d91fdbf8100 ---------A   01070 PRINT
    0x5d91fdbf55b0 ---------A   01080 IF C$="NO" THEN 1120
    0x5d91fdbfd860 ---------A   01090 IF C$="YES" THEN 1110
    0x5d91fdbfd980 ---------A   01100 PRINT "ANSWER YES OR NO!!":GOTO 1060 
    0x5d91fdbfda00 ---------A T 01110 GOTO 2860
    0x5d91fdbfea00 ---------A T 01120 DIM A$(7),B$(7),H(20),T(5),T1(5),T2(5),T3(5)
    0x5d91fdbfeef0 ---------A   01130 PRINT "ENTER THE TWO TEAMS";:INPUT A$(7),B$(7) 
    0x5d91fdbfefa0 ---------A   01140 PRINT
    0x5d91fdbff2e0 ---------A   01150 PRINT "ENTER THE NUMBER OF MINUTES IN A GAME";:INPUT T6
    0x5d91fdbff340 ---------A   01160 PRINT
    0x5d91fdbff610 ---------A   01170 IF T6<1 THEN 110:PRINT 
    0x5d91fdbffa20 ---------A   01180 PRINT "WOULD THE " A$(7) " COACH ENTER HIS TEAM" 
    0x5d91fdbffac0 ---------A   01190 PRINT
    0x5d91fdc00460 ---------A   01200 FOR I=1 TO 6:PRINT "PLAYER"I;:INPUT A$(I):NEXT I:PRINT 
    0x5d91fdc00870 ---------A   01210 PRINT "WOULD THE " B$(7) " COACH DO THE SAME"
    0x5d91fdc00910 ---------A   01220 PRINT
    0x5d91fdc011f0 ---------A   01230 FOR T=1 TO 6:PRINT "PLAYER"T;:INPUT B$(T):NEXT T:PRINT 
    0x5d91fdc01550 ---------A   01240 PRINT "INPUT THE REFEREE FOR THIS GAME";:INPUT R$  
    0x5d91fdc019e0 ---------A   01250 PRINT:PRINT TAB(10);A$(7) " STARTING LINEUP" 
    0x5d91fdc01fe0 ---------A   01260 FOR T=1 TO 6:PRINT A$(T):NEXT T  
    0x5d91fdc024d0 ---------A   01270 PRINT:PRINT TAB(10);B$(7)" STARTING LINEUP"
    0x5d91fdc02b50 ---------A   01280 FOR T=1 TO 6:PRINT B$(T):NEXT T:PRINT
    0x5d91fdc02cf0 ---------A   01290 PRINT "WE'RE READY FOR TONIGHTS OPENING FACE-OFF."
    0x5d91fdc03380 ---------A   01300 PRINT R$ " WILL DROP THE PUCK BETWEEN " A$(2) " AND " B$(2)
    0x5d91fdc03990 ---------A   01310 FOR L=1 TO T6:IF L=1 THEN 1330
    0x5d91fdc03b10 ---------A   01320 PRINT "AND WE'RE READY FOR THE FACE-OFF" 
    0x5d91fdc046a0 ---------A T 01330 C=INT(2*RND(X))+1:ON C GOTO 1340,1350
    0x5d91fdc04a20 ---------A T 01340 PRINT A$(7) " HAS CONTROL OF THE PUCK":GOTO 1360
    0x5d91fdc04d40 ---------A T 01350 PRINT B$(7) " HAS CONTROL." 
    0x5d91fdc05810 ---------A T 01360 PRINT "PASS";:INPUT P:FOR N=1 TO 3:H(N)=0:NEXT N 
    0x5d91fdc05a70 ---------A   01370 IF P<0 THEN 1360
    0x5d91fdc05cd0 ---------A   01380 IF P>3 THEN 1360
    0x5d91fdc061e0 ---------A T 01390 FOR J=1 TO (P+2) 
    0x5d91fdc068d0 ---------A   01400 H(J)=INT(5*RND(X))+1 
    0x5d91fdc07020 ---------A   01410 NEXT J:IF H(J-1)=H(J-2) THEN 1390
    0x5d91fdc07390 ---------A   01420 IF P+2<3 THEN 1450
    0x5d91fdc079e0 ---------A   01430 IF H(J-1)=H(J-3) THEN 1390
    0x5d91fdc08020 ---------A   01440 IF H(J-2)=H(J-3) THEN 1390
    0x5d91fdc08280 ---------A T 01450 IF P=0 THEN 1470
    0x5d91fdc08310 ---------A   01460 GOTO 1600
    0x5d91fdc08770 ---------A T 01470 INPUT "SHOT";S:IF S<1 THEN 1470
    0x5d91fdc089d0 ---------A   01480 IF S>4 THEN 1470
    0x5d91fdc08cd0 ---------A   01490 ON C GOTO 1500,1590
    0x5d91fdc09b20 ---------A T 01500 PRINT A$(H(J-1));:G=H(J-1):G1=0:G2=0 
    0x5d91fdc09f90 ---------A T 01510 ON S GOTO 1520,1540,1550,1570
    0x5d91fdc0a100 ---------A T 01520 PRINT " LET'S A BOOMER GO FROM THE RED LINE!!" 
    0x5d91fdc0a440 ---------A   01530 Z=10:GOTO 2000
    0x5d91fdc0a5b0 ---------A T 01540 PRINT " FLIPS A WRISTSHOT DOWN THE ICE"
    0x5d91fdc0a710 ---------A T 01550 PRINT " BACKHANDS ONE IN ON THE GOALTENDER" 
    0x5d91fdc0a980 ---------A   01560 Z=25:GOTO 2000
    0x5d91fdc0aad0 ---------A T 01570 PRINT " SNAPS A LONG FLIP SHOT"
    0x5d91fdc0ad50 ---------A   01580 Z=17:GOTO 2000
    0x5d91fdc0b990 ---------A T 01590 PRINT B$(H(J-1));:G1=0:G2=0:G=H(J-1):GOTO 1510
    0x5d91fdc0bc60 ---------A T 01600 ON C GOTO 1610,1750
    0x5d91fdc0c020 ---------A T 01610 ON P GOTO 1620,1650,1680
    0x5d91fdc0ca00 ---------A T 01620 PRINT A$(H(J-2)) " LEADS " A$(H(J-1)) " WITH A PERFECT PASS." 
    0x5d91fdc0cf30 ---------A   01630 PRINT A$(H(J-1)) " CUTTING IN!!!"
    0x5d91fdc0dc50 ---------A   01640 G=H(J-1):G1=H(J-2):G2=0:Z1=3:GOTO 1880
    0x5d91fdc0e960 ---------A T 01650 PRINT A$(H(J-2)) " GIVES TO A STREAKING " A$(H(J-1))
    0x5d91fdc0f310 ---------A   01660 PRINT A$(H(J-3)) " COMES DOWN ON " B$(5) " AND " B$(4)
    0x5d91fdc10160 ---------A   01670 G=H(J-3):G1=H(J-1):G2=H(J-2):Z1=2:GOTO 1880
    0x5d91fdc102d0 ---------A T 01680 PRINT "OH MY GOD!! A ' 4 ON 2 ' SITUATION"
    0x5d91fdc10bc0 ---------A   01690 PRINT A$(H(J-3)) " LEADS " A$(H(J-2))
    0x5d91fdc11100 ---------A   01700 PRINT A$(H(J-2)) " IS WHEEELING THROUGH CENTER."
    0x5d91fdc119e0 ---------A   01710 PRINT A$(H(J-2)) " GIVES AND GOES WITH " A$(H(J-1))
    0x5d91fdc11b50 ---------A   01720 PRINT "PRETTY PASSING!"
    0x5d91fdc12440 ---------A   01730 PRINT A$(H(J-1)) " DROPS IT TO " A$(H(J-4))
    0x5d91fdc13280 ---------A   01740 G=H(J-4):G1=J(J-1):G2=H(J-2):Z1=1:GOTO 1880
    0x5d91fdc13630 ---------A T 01750 ON P GOTO 1760,1780,1830
    0x5d91fdc14030 ---------A T 01760 PRINT B$(H(J-1)) " HITS " B$(H(J-2)) " FLYING DOWN THE LEFT SIDE" 
    0x5d91fdc14c70 ---------A   01770 G=H(J-2):G1=H(J-1):G2=0:Z1=3:GOTO 1880
    0x5d91fdc14dd0 ---------A T 01780 PRINT "IT'S A ' 3 ON 2 '!"
    0x5d91fdc154c0 ---------A   01790 PRINT "ONLY " A$(4) " AND " A$(5) " ARE BACK."
    0x5d91fdc15db0 ---------A   01800 PRINT B$(H(J-2)) " GIVES OFF TO " B$(H(J-1))
    0x5d91fdc166a0 ---------A   01810 PRINT B$(H(J-1)) " DROPS TO " B$(H(J-3))
    0x5d91fdc174f0 ---------A   01820 G=H(J-3):G1=H(J-1):G2=H(J-2):Z1=2:GOTO 1880 
    0x5d91fdc17670 ---------A T 01830 PRINT " A ' 3 ON 2 ' WITH A ' TRAILER '!" 
    0x5d91fdc18080 ---------A   01840 PRINT B$(H(J-4)) " GIVES TO " B$(H(J-2)) " WHO SHUFFLES IT OFF TO" 
    0x5d91fdc185c0 ---------A   01850 PRINT B$(H(J-1)) " WHO FIRES A WING TO WING PASS TO "
    0x5d91fdc18b20 ---------A   01860 PRINT B$(H(J-3)) " AS HE CUTS IN ALONE!!"    
    0x5d91fdc19980 ---------A   01870 G=H(J-3):G1=H(J-1):G2=H(J-2):Z1=1:GOTO 1880 
    0x5d91fdc1a090 ---------A T 01880 PRINT "SHOT";:INPUT S:IF S>4 THEN 1880:IF S<1 THEN 1880
    0x5d91fdc1a390 ---------A   01890 ON C GOTO 1900,1990
    0x5d91fdc1aa30 ---------A T 01900 PRINT A$(G);:ON S GOTO 1910,1930,1950,1970 
    0x5d91fdc1abb0 ---------A T 01910 PRINT " LET'S A BIG SLAP SHOT GO!!"  
    0x5d91fdc1b150 ---------A   01920 Z=4:Z=Z+Z1:GOTO 2000
    0x5d91fdc1b2a0 ---------A T 01930 PRINT " RIPS A WRIST SHOT OFF" 
    0x5d91fdc1b840 ---------A   01940 Z=2:Z=Z+Z1:GOTO 2000
    0x5d91fdc1b980 ---------A T 01950 PRINT " GETS A BACKHAND OFF" 
    0x5d91fdc1bf20 ---------A   01960 Z=3:Z=Z+Z1:GOTO 2000
    0x5d91fdc1c090 ---------A T 01970 PRINT " SNAPS OFF A SNAP SHOT"   
    0x5d91fdc1c640 ---------A   01980 Z=2:Z=Z+Z1:GOTO 2000
    0x5d91fdc1ccd0 ---------A T 01990 PRINT B$(G);:ON S GOTO 1910,1930,1950,1970 
    0x5d91fdc1d270 ---------A T 02000 PRINT "AREA";:INPUT A:IF A<1 THEN 2000
    0x5d91fdc1d4d0 ---------A   02010 IF A>4 THEN 2000
    0x5d91fdc1d7b0 ---------A   02020 ON C GOTO 2030,2040
    0x5d91fdc1dbf0 ---------A T 02030 S2=S2+1:GOTO 2050 
    0x5d91fdc1dff0 ---------A T 02040 S3=S3+1
    0x5d91fdc1e900 ---------A T 02050 A1=INT(4*RND(X))+1:IF A<>A1 THEN 2340
    0x5d91fdc1efd0 ---------A T 02060 H(20)=INT(100*RND(X))+1
    0x5d91fdc1f6e0 ---------A   02070 IF INT(H(20)/Z)=H(20)/Z THEN 2290
    0x5d91fdc1f9e0 ---------A   02080 ON C GOTO 2090,2100
    0x5d91fdc201e0 ---------A T 02090 PRINT "GOAL " A$(7):H(9)=H(9)+1:GOTO 2110 
    0x5d91fdc20990 ---------A T 02100 PRINT "SCORE " B$(7):H(8)=H(8)+1   
    0x5d91fdc210d0 ---------A T 02110 FOR B1=1 TO 25:PRINT CHR$(7);:NEXT B1:PRINT
    0x5d91fdc21630 ---------A   02120 PRINT "SCORE: ";:IF H(8)>H(9) THEN 2140
    0x5d91fdc22000 ---------A   02130 PRINT A$(7)":";H(9),B$(7)":";H(8):GOTO 2150
    0x5d91fdc22970 ---------A T 02140 PRINT B$(7)":";H(8),A$(7)":";H(9)  
    0x5d91fdc22c60 ---------A T 02150 ON C GOTO 2160,2220
    0x5d91fdc231c0 ---------A T 02160 PRINT "GOAL SCORED BY: " A$(G):IF G1=0 THEN 2190
    0x5d91fdc23450 ---------A   02170 IF G2=0 THEN 2200
    0x5d91fdc23ad0 ---------A   02180 PRINT " ASSISTED BY: " A$(G1) " AND " A$(G2):GOTO 2210 
    0x5d91fdc23c70 ---------A T 02190 PRINT " UNASSISTED.":GOTO 2210
    0x5d91fdc23fc0 ---------A T 02200 PRINT " ASSISTED BY: " A$(G1)
    0x5d91fdc24eb0 ---------A T 02210 T(G)=T(G)+1:T1(G1)=T1(G1)+1:T1(G2)=T1(G2)+1:GOTO 2680
    0x5d91fdc251f0 ---------A T 02220 PRINT "GOAL SCORED BY: " B$(G);
    0x5d91fdc25440 ---------A   02230 IF G1=0 THEN 2260
    0x5d91fdc256d0 ---------A   02240 IF G2=0 THEN 2270
    0x5d91fdc25d50 ---------A   02250 PRINT " ASSISTED BY: " B$(G1) " AND " B$(G2):GOTO 2280 
    0x5d91fdc25f00 ---------A T 02260 PRINT " UNASSISTED":GOTO 2280
    0x5d91fdc262a0 ---------A T 02270 PRINT " ASSISTED BY: " B$(G1):GOTO 2280
    0x5d91fdc27190 ---------A T 02280 T2(G)=T2(G)+1:T3(G1)=T3(G1)+1:T3(G2)=T3(G2)+1:GOTO 2680
    0x5d91fdc28570 ---------A T 02290 A2=INT(100*RND(X))+1:IF INT(A2/4)=A2/4 THEN 2310
    0x5d91fdc28600 ---------A   02300 GOTO 2340
    0x5d91fdc288e0 ---------A T 02310 ON C GOTO 2320,2330
    0x5d91fdc28d60 ---------A T 02320 PRINT "SAVE " B$(6) " --  REBOUND":GOTO 2060
    0x5d91fdc291c0 ---------A T 02330 PRINT "SAVE " A$(6) " --  FOLLOW UP":GOTO 2060
    0x5d91fdc29870 ---------A T 02340 S1=INT(6*RND(X))+1 
    0x5d91fdc29b60 ---------A   02350 ON C GOTO 2360,2520
    0x5d91fdc2a150 ---------A T 02360 ON S1 GOTO 2370,2400,2430,2440,2470,2490 
    0x5d91fdc2a480 ---------A T 02370 PRINT "KICK SAVE AND A BEAUTY BY " B$(6)
    0x5d91fdc2a790 ---------A   02380 PRINT "CLEARED OUT BY " B$(3)
    0x5d91fdc2a820 ---------A   02390 GOTO 1330 
    0x5d91fdc2ab50 ---------A T 02400 PRINT "WHAT A SPECTACULAR GLOVE SAVE BY " B$(6)
    0x5d91fdc2af70 ---------A   02410 PRINT "AND " B$(6) " GOLFS IT INTO THE CROWD"
    0x5d91fdc2b010 ---------A   02420 GOTO 2680
    0x5d91fdc2b390 ---------A T 02430 PRINT "SKATE SAVE ON A LOW STEAMER BY " B$(6):GOTO 1330 
    0x5d91fdc2b7b0 ---------A T 02440 PRINT "PAD SAVE BY " B$(6) " OFF THE STICK" 
    0x5d91fdc2bea0 ---------A   02450 PRINT "OF "A$(G) " AND " B$(6) " COVERS UP"
    0x5d91fdc2bf30 ---------A   02460 GOTO 2680
    0x5d91fdc2c240 ---------A T 02470 PRINT "WHISTLES ONE OVER THE HEAD OF " B$(6) 
    0x5d91fdc2c2d0 ---------A   02480 GOTO 1330 
    0x5d91fdc2c610 ---------A T 02490 PRINT B$(6) " MAKES A FACE SAVE!! AND HE IS HURT"
    0x5d91fdc2ca20 ---------A   02500 PRINT "THE DEFENSEMAN " B$(5) " COVERS UP FOR HIM" 
    0x5d91fdc2cab0 ---------A   02510 GOTO 2680
    0x5d91fdc2d080 ---------A T 02520 ON S1 GOTO 2530,2550,2580,2610,2630,2660 
    0x5d91fdc2d3b0 ---------A T 02530 PRINT "STICK SAVE BY " A$(6) 
    0x5d91fdc2d740 ---------A   02540 PRINT "AND CLEARED OUT BY " A$(4):GOTO 1330 
    0x5d91fdc2dba0 ---------A T 02550 PRINT "OH MY GOD!! " B$(G) " RATTLES ONE OFF THE POST" 
    0x5d91fdc2e2b0 ---------A   02560 PRINT "TO THE RIGHT OF " A$(6) " AND " A$(6) " COVERS "; 
    0x5d91fdc2e460 ---------A   02570 PRINT "ON THE LOOSE PUCK!":GOTO 2680 
    0x5d91fdc2e790 ---------A T 02580 PRINT "SKATE SAVE BY " A$(6)
    0x5d91fdc2eac0 ---------A   02590 PRINT A$(6) " WHACKS THE LOOSE PUCK INTO THE STANDS" 
    0x5d91fdc2eb60 ---------A   02600 GOTO 2680
    0x5d91fdc2ef70 ---------A T 02610 PRINT "STICK SAVE BY " A$(6) " AND HE CLEARS IT OUT HIMSELF" 
    0x5d91fdc2eff0 ---------A   02620 GOTO 1330 
    0x5d91fdc2f320 ---------A T 02630 PRINT "KICKED OUT BY " A$(6) 
    0x5d91fdc2f4b0 ---------A   02640 PRINT "AND IT REBOUNDS ALL THE WAY TO CENTER ICE"  
    0x5d91fdc2f540 ---------A   02650 GOTO 1330 
    0x5d91fdc2f940 ---------A T 02660 PRINT "GLOVE SAVE " A$(6) " AND HE HANGS ON" 
    0x5d91fdc2f9f0 ---------A   02670 GOTO 2680
    0x5d91fdc30250 ---------A T 02680 NEXT L:FOR N=1 TO 30:PRINT CHR$(7);:NEXT N:PRINT "THAT'S THE SIREN"
    0x5d91fdc30540 ---------A   02690 PRINT:PRINT TAB(15);"FINAL SCORE:"
    0x5d91fdc30950 ---------A   02700 IF H(8)>H(9) THEN 2720
    0x5d91fdc31310 ---------A   02710 PRINT A$(7)":";H(9),B$(7)":";H(8):GOTO 2730
    0x5d91fdc31c70 ---------A T 02720 PRINT B$(7)":";H(8),A$(7)":";H(9)
    0x5d91fdc31fb0 ---------A T 02730 PRINT: PRINT TAB(10);"SCORING SUMMARY":PRINT
    0x5d91fdc32330 ---------A   02740 PRINT TAB(25);A$(7)
    0x5d91fdc32a70 ---------A   02750 PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"
    0x5d91fdc331b0 ---------A   02760 PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
    0x5d91fdc33e20 ---------A   02770 FOR I=1 TO 5:PRINT TAB(5);A$(I);TAB(21);T(I);TAB(36);T1(I) 
    0x5d91fdc33fc0 ---------A   02780 NEXT I:PRINT 
    0x5d91fdc34340 ---------A   02790 PRINT TAB(25);B$(7)
    0x5d91fdc34aa0 ---------A   02800 PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"  
    0x5d91fdc351e0 ---------A   02810 PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
    0x5d91fdc35e50 ---------A   02820 FOR T=1 TO 5:PRINT TAB(5);B$(T);TAB(21);T2(T);TAB(36);T3(T)
    0x5d91fdc36010 ---------A   02830 NEXT T:PRINT 
    0x5d91fdc36940 ---------A   02840 PRINT "SHOTS ON NET":PRINT A$(7)":";S2:PRINT B$(7)":";S3 
    0x5d91fdc36990 ---------A   02850 END
    0x5d91fdc36b80 ---------A T 02860 PRINT: PRINT "THIS IS A SIMULATED HOCKEY GAME."
    0x5d91fdc36d00 ---------A   02870 PRINT "QUESTION     RESPONSE"
    0x5d91fdc36e90 ---------A   02880 PRINT "PASS         TYPE IN THE NUMBER OF PASSES YOU WOULD"
    0x5d91fdc37030 ---------A   02890 PRINT "             LIKE TO MAKE, FROM 0 TO 3."
    0x5d91fdc371d0 ---------A   02900 PRINT "SHOT         TYPE THE NUMBER CORRESPONDING TO THE SHOT"
    0x5d91fdc37360 ---------A   02910 PRINT "             YOU WANT TO MAKE.  ENTER:"
    0x5d91fdc374e0 ---------A   02920 PRINT "             1 FOR A SLAPSHOT"
    0x5d91fdc37660 ---------A   02930 PRINT "             2 FOR A WRISTSHOT"
    0x5d91fdc377e0 ---------A   02940 PRINT "             3 FOR A BACKHAND"
    0x5d91fdc37970 ---------A   02950 PRINT "             4 FOR A SNAP SHOT"
    0x5d91fdc37b10 ---------A   02960 PRINT "AREA         TYPE IN THE NUMBER CORRESPONDING TO"
    0x5d91fdc37ca0 ---------A   02970 PRINT "             THE AREA YOU ARE AIMING AT.  ENTER:"
    0x5d91fdc37e30 ---------A   02980 PRINT "             1 FOR UPPER LEFT HAND CORNER"
    0x5d91fdc37fc0 ---------A   02990 PRINT "             2 FOR UPPER RIGHT HAND CORNER"
    0x5d91fdc38150 ---------A   03000 PRINT "             3 FOR LOWER LEFT HAND CORNER"
    0x5d91fdc382c0 ---------A   03010 PRINT "             4 FOR LOWER RIGHT HAND CORNER"
    0x5d91fdc38360 ---------A   03020 PRINT
    0x5d91fdc38510 ---------A   03030 PRINT "AT THE START OF THE GAME, YOU WILL BE ASKED FOR THE NAMES"
    0x5d91fdc386b0 ---------A   03040 PRINT "OF YOUR PLAYERS.  THEY ARE ENTERED IN THE ORDER: "
    0x5d91fdc38850 ---------A   03050 PRINT "LEFT WING, CENTER, RIGHT WING, LEFT DEFENSE,"
    0x5d91fdc389f0 ---------A   03060 PRINT "RIGHT DEFENSE, GOALKEEPER.  ANY OTHER INPUT REQUIRED WILL"
    0x5d91fdc38b50 ---------A   03070 PRINT "HAVE EXPLANATORY INSTRUCTIONS."
    0x5d91fdc38bc0 ---------A   03080 GOTO 1120
    0x5d91fdc38c00 ---------A   03090 END
 */

//---------------------------------------------------------------------------
// $Header$ 
//
// NOTE: This program has been automatically tranlated by b2c
//
// $Log$ 
// 
//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//---------------------------------------------------------------------------
// Global data area.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
float  A_flt;                                     // Basic: A 
char*  A_str_arr[7];                              // Basic: A$ 
float  A1_flt;                                    // Basic: A1 
float  A2_flt;                                    // Basic: A2 
char*  B_str_arr[7];                              // Basic: B$ 
float  B1_flt;                                    // Basic: B1 
float  C_flt;                                     // Basic: C 
char*  C_str;                                     // Basic: C$ 
float  G_flt;                                     // Basic: G 
float  G1_flt;                                    // Basic: G1 
float  G2_flt;                                    // Basic: G2 
float  H_flt_arr[20];                             // Basic: H 
float  I_flt;                                     // Basic: I 
float  J_flt;                                     // Basic: J 
float  L_flt;                                     // Basic: L 
float  N_flt;                                     // Basic: N 
float  P_flt;                                     // Basic: P 
char*  R_str;                                     // Basic: R$ 
float  S_flt;                                     // Basic: S 
float  S1_flt;                                    // Basic: S1 
float  S2_flt;                                    // Basic: S2 
float  S3_flt;                                    // Basic: S3 
float  T_flt_arr[5];                              // Basic: T 
float  T1_flt_arr[5];                             // Basic: T1 
float  T2_flt_arr[5];                             // Basic: T2 
float  T3_flt_arr[5];                             // Basic: T3 
float  T6_flt;                                    // Basic: T6 
float  X_flt;                                     // Basic: X 
float  Z_flt;                                     // Basic: Z 
float  Z1_flt;                                    // Basic: Z1 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Common area load and store routines.
//---------------------------------------------------------------------------
// void  LoadCommonAreas(char* filename){
//     json_error_t error;
// 
//     // Read in the COMMON area save-file
//     json_t *root = json_load_file(filename, 0, &error);
//     if (!root) {
//         fprintf(stderr, "Error reading JSON file: %s\n",error.text);
//         return;
//     }
// 
//     // Get the number of variables read.
//     int count = json_array_size(root);
// 
//     // Read in each variable and store it...
//     for(int v=0;v<count;v++){
// 
//     }
// 
//     // Get rid of storage area
//     json_decref(root);
// };
// void  SaveCommonAreas(char* file){
// };
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
