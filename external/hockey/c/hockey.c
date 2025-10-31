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
    0x61196346e6d0 ---------A   00002  PRINT TAB(33);"HOCKEY"
    0x61196346e670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x611963470aa0 ---------A   00006  PRINT:PRINT:PRINT
    0x61196346fb80 ---------A   00010  REM ROBERT PUOPOLO ALG. 1 140 MCCOWAN 6/7/73 HOCKEY
    0x611963470f30 ---------A   00030  LET X=1
    0x6119634706a0 ---------A   00040  PRINT:PRINT:PRINT
    0x6119634711a0 ---------A T 00050  PRINT "WOULD YOU LIKE THE INSTRUCTIONS";:INPUT C$
    0x611963471220 ---------A   00055  PRINT
    0x61196346f7e0 ---------A   00060  IF C$="NO" THEN 90
    0x6119634769e0 ---------A   00065  IF C$="YES" THEN 80
    0x611963470e70 ---------A   00070  PRINT "ANSWER YES OR NO!!":GOTO 50 
    0x611963470ff0 ---------A T 00080  GOTO 1720
    0x6119634710b0 ---------A T 00090  DIM A$(7),B$(7),H(20),T(5),T1(5),T2(5),T3(5)
    0x6119634780c0 ---------A   00100  PRINT "ENTER THE TWO TEAMS";:INPUT A$(7),B$(7) 
    0x611963478170 ---------A   00105  PRINT
    0x6119634784d0 ---------A   00110  PRINT "ENTER THE NUMBER OF MINUTES IN A GAME";:INPUT T6
    0x611963478530 ---------A   00115  PRINT
    0x611963478810 ---------A   00120  IF T6<1 THEN 110:PRINT 
    0x611963478c30 ---------A   00130  PRINT "WOULD THE " A$(7) " COACH ENTER HIS TEAM" 
    0x611963478ce0 ---------A   00135  PRINT
    0x6119634796b0 ---------A   00140  FOR I=1 TO 6:PRINT "PLAYER"I;:INPUT A$(I):NEXT I:PRINT 
    0x611963479ad0 ---------A   00150  PRINT "WOULD THE " B$(7) " COACH DO THE SAME"
    0x611963479b80 ---------A   00155  PRINT
    0x61196347a490 ---------A   00160  FOR T=1 TO 6:PRINT "PLAYER"T;:INPUT B$(T):NEXT T:PRINT 
    0x61196347a810 ---------A   00170  PRINT "INPUT THE REFEREE FOR THIS GAME";:INPUT R$  
    0x61196347acb0 ---------A   00180  PRINT:PRINT TAB(10);A$(7) " STARTING LINEUP" 
    0x61196347b2d0 ---------A   00190  FOR T=1 TO 6:PRINT A$(T):NEXT T  
    0x61196347b7e0 ---------A   00200  PRINT:PRINT TAB(10);B$(7)" STARTING LINEUP"
    0x61196347be90 ---------A   00210  FOR T=1 TO 6:PRINT B$(T):NEXT T:PRINT
    0x61196347c040 ---------A   00220  PRINT "WE'RE READY FOR TONIGHTS OPENING FACE-OFF."
    0x61196347c6e0 ---------A   00230  PRINT R$ " WILL DROP THE PUCK BETWEEN " A$(2) " AND " B$(2)
    0x61196347cd00 ---------A   00240  FOR L=1 TO T6:IF L=1 THEN 260
    0x61196347ce80 ---------A   00250  PRINT "AND WE'RE READY FOR THE FACE-OFF" 
    0x61196347da20 ---------A T 00260  C=INT(2*RND(X))+1:ON C GOTO 270,280
    0x61196347ddc0 ---------A T 00270  PRINT A$(7) " HAS CONTROL OF THE PUCK":GOTO 290
    0x61196347e0f0 ---------A T 00280  PRINT B$(7) " HAS CONTROL." 
    0x61196347ebe0 ---------A T 00290  PRINT "PASS";:INPUT P:FOR N=1 TO 3:H(N)=0:NEXT N 
    0x61196347ee50 ---------A   00300  IF P<0 THEN 290
    0x61196347f0b0 ---------A   00305  IF P>3 THEN 290
    0x61196347f5c0 ---------A T 00310  FOR J=1 TO (P+2) 
    0x61196347fcb0 ---------A   00320  H(J)=INT(5*RND(X))+1 
    0x611963480410 ---------A   00330  NEXT J:IF H(J-1)=H(J-2) THEN 310
    0x611963480780 ---------A   00331  IF P+2<3 THEN 350
    0x611963480dd0 ---------A   00335  IF H(J-1)=H(J-3) THEN 310
    0x611963481410 ---------A   00340  IF H(J-2)=H(J-3) THEN 310
    0x611963481670 ---------A T 00350  IF P=0 THEN 360
    0x611963481700 ---------A   00355  GOTO 490
    0x611963481b70 ---------A T 00360  INPUT "SHOT";S:IF S<1 THEN 360
    0x611963481dd0 ---------A   00365  IF S>4 THEN 360
    0x6119634820d0 ---------A   00370  ON C GOTO 380,480
    0x611963482f40 ---------A T 00380  PRINT A$(H(J-1));:G=H(J-1):G1=0:G2=0 
    0x6119634833b0 ---------A T 00390  ON S GOTO 400,420,440,460
    0x611963483530 ---------A T 00400  PRINT " LET'S A BOOMER GO FROM THE RED LINE!!" 
    0x611963483880 ---------A   00410  Z=10:GOTO 890
    0x611963483a00 ---------A T 00420  PRINT " FLIPS A WRISTSHOT DOWN THE ICE"
    0x611963483b70 ---------A T 00440  PRINT " BACKHANDS ONE IN ON THE GOALTENDER" 
    0x611963483df0 ---------A   00450  Z=25:GOTO 890
    0x611963483f50 ---------A T 00460  PRINT " SNAPS A LONG FLIP SHOT"
    0x6119634841e0 ---------A   00470  Z=17:GOTO 890
    0x611963484e40 ---------A T 00480  PRINT B$(H(J-1));:G1=0:G2=0:G=H(J-1):GOTO 390
    0x611963485120 ---------A T 00490  ON C GOTO 500,640
    0x6119634854f0 ---------A T 00500  ON P GOTO 510,540,570
    0x611963485ee0 ---------A T 00510  PRINT A$(H(J-2)) " LEADS " A$(H(J-1)) " WITH A PERFECT PASS." 
    0x611963486420 ---------A   00520  PRINT A$(H(J-1)) " CUTTING IN!!!"
    0x611963487150 ---------A   00530  G=H(J-1):G1=H(J-2):G2=0:Z1=3:GOTO 770
    0x611963487e70 ---------A T 00540  PRINT A$(H(J-2)) " GIVES TO A STREAKING " A$(H(J-1))
    0x611963488830 ---------A   00550  PRINT A$(H(J-3)) " COMES DOWN ON " B$(5) " AND " B$(4)
    0x611963489690 ---------A   00560  G=H(J-3):G1=H(J-1):G2=H(J-2):Z1=2:GOTO 770
    0x611963489810 ---------A T 00570  PRINT "OH MY GOD!! A ' 4 ON 2 ' SITUATION"
    0x61196348a110 ---------A   00580  PRINT A$(H(J-3)) " LEADS " A$(H(J-2))
    0x61196348a660 ---------A   00590  PRINT A$(H(J-2)) " IS WHEEELING THROUGH CENTER."
    0x61196348af50 ---------A   00600  PRINT A$(H(J-2)) " GIVES AND GOES WITH " A$(H(J-1))
    0x61196348b0d0 ---------A   00610  PRINT "PRETTY PASSING!"
    0x61196348b9d0 ---------A   00620  PRINT A$(H(J-1)) " DROPS IT TO " A$(H(J-4))
    0x61196348c820 ---------A   00630  G=H(J-4):G1=J(J-1):G2=H(J-2):Z1=1:GOTO 770
    0x61196348cbe0 ---------A T 00640  ON P GOTO 650,670,720
    0x61196348d5f0 ---------A T 00650  PRINT B$(H(J-1)) " HITS " B$(H(J-2)) " FLYING DOWN THE LEFT SIDE" 
    0x61196348e240 ---------A   00660  G=H(J-2):G1=H(J-1):G2=0:Z1=3:GOTO 770
    0x61196348e3b0 ---------A T 00670  PRINT "IT'S A ' 3 ON 2 '!"
    0x61196348eab0 ---------A   00680  PRINT "ONLY " A$(4) " AND " A$(5) " ARE BACK."
    0x61196348f3b0 ---------A   00690  PRINT B$(H(J-2)) " GIVES OFF TO " B$(H(J-1))
    0x61196348fcb0 ---------A   00700  PRINT B$(H(J-1)) " DROPS TO " B$(H(J-3))
    0x611963490b10 ---------A   00710  G=H(J-3):G1=H(J-1):G2=H(J-2):Z1=2:GOTO 770 
    0x611963490ca0 ---------A T 00720  PRINT " A ' 3 ON 2 ' WITH A ' TRAILER '!" 
    0x6119634916c0 ---------A   00730  PRINT B$(H(J-4)) " GIVES TO " B$(H(J-2)) " WHO SHUFFLES IT OFF TO" 
    0x611963491c10 ---------A   00740  PRINT B$(H(J-1)) " WHO FIRES A WING TO WING PASS TO "
    0x611963492180 ---------A   00750  PRINT B$(H(J-3)) " AS HE CUTS IN ALONE!!"    
    0x611963492ff0 ---------A   00760  G=H(J-3):G1=H(J-1):G2=H(J-2):Z1=1:GOTO 770 
    0x611963493720 ---------A T 00770  PRINT "SHOT";:INPUT S:IF S>4 THEN 770:IF S<1 THEN 770
    0x611963493a20 ---------A   00780  ON C GOTO 790,880
    0x6119634940e0 ---------A T 00790  PRINT A$(G);:ON S GOTO 800,820,840,860 
    0x611963494270 ---------A T 00800  PRINT " LET'S A BIG SLAP SHOT GO!!"  
    0x611963494820 ---------A   00810  Z=4:Z=Z+Z1:GOTO 890
    0x611963494980 ---------A T 00820  PRINT " RIPS A WRIST SHOT OFF" 
    0x611963494f30 ---------A   00830  Z=2:Z=Z+Z1:GOTO 890
    0x611963495080 ---------A T 00840  PRINT " GETS A BACKHAND OFF" 
    0x611963495630 ---------A   00850  Z=3:Z=Z+Z1:GOTO 890
    0x6119634957b0 ---------A T 00860  PRINT " SNAPS OFF A SNAP SHOT"   
    0x611963495d70 ---------A   00870  Z=2:Z=Z+Z1:GOTO 890
    0x611963496420 ---------A T 00880  PRINT B$(G);:ON S GOTO 800,820,840,860 
    0x6119634969e0 ---------A T 00890  PRINT "AREA";:INPUT A:IF A<1 THEN 890
    0x611963496c40 ---------A   00895  IF A>4 THEN 890
    0x611963496f20 ---------A   00900  ON C GOTO 910,920
    0x611963497370 ---------A T 00910  S2=S2+1:GOTO 930 
    0x611963497780 ---------A T 00920  S3=S3+1
    0x611963498090 ---------A T 00930  A1=INT(4*RND(X))+1:IF A<>A1 THEN 1200
    0x611963498760 ---------A T 00940  H(20)=INT(100*RND(X))+1
    0x611963498e70 ---------A   00950  IF INT(H(20)/Z)=H(20)/Z THEN 1160
    0x611963499170 ---------A   00960  ON C GOTO 970,980
    0x611963499990 ---------A T 00970  PRINT "GOAL " A$(7):H(9)=H(9)+1:GOTO 990 
    0x61196349a160 ---------A T 00980  PRINT "SCORE " B$(7):H(8)=H(8)+1   
    0x61196349a8c0 ---------A T 00990  FOR B1=1 TO 25:PRINT CHR$(7);:NEXT B1:PRINT
    0x61196349ae40 ---------A   01000  PRINT "SCORE: ";:IF H(8)>H(9) THEN 1020
    0x61196349b820 ---------A   01010  PRINT A$(7)":";H(9),B$(7)":";H(8):GOTO 1030
    0x61196349c1a0 ---------A T 01020  PRINT B$(7)":";H(8),A$(7)":";H(9)  
    0x61196349c4a0 ---------A T 01030  ON C GOTO 1040,1100
    0x61196349ca20 ---------A T 01040  PRINT "GOAL SCORED BY: " A$(G):IF G1=0 THEN 1070
    0x61196349ccb0 ---------A   01050  IF G2=0 THEN 1080
    0x61196349d340 ---------A   01060  PRINT " ASSISTED BY: " A$(G1) " AND " A$(G2):GOTO 1090 
    0x61196349d500 ---------A T 01070  PRINT " UNASSISTED.":GOTO 1090
    0x61196349d860 ---------A T 01080  PRINT " ASSISTED BY: " A$(G1)
    0x61196349e760 ---------A T 01090  T(G)=T(G)+1:T1(G1)=T1(G1)+1:T1(G2)=T1(G2)+1:GOTO 1540
    0x61196349eab0 ---------A T 01100  PRINT "GOAL SCORED BY: " B$(G);
    0x61196349ed10 ---------A   01110  IF G1=0 THEN 1130
    0x61196349efa0 ---------A   01115  IF G2=0 THEN 1140
    0x61196349f630 ---------A   01120  PRINT " ASSISTED BY: " B$(G1) " AND " B$(G2):GOTO 1150 
    0x61196349f800 ---------A T 01130  PRINT " UNASSISTED":GOTO 1150
    0x61196349fbc0 ---------A T 01140  PRINT " ASSISTED BY: " B$(G1):GOTO 1150
    0x6119634a0ac0 ---------A T 01150  T2(G)=T2(G)+1:T3(G1)=T3(G1)+1:T3(G2)=T3(G2)+1:GOTO 1540
    0x6119634a1eb0 ---------A T 01160  A2=INT(100*RND(X))+1:IF INT(A2/4)=A2/4 THEN 1170
    0x6119634a1f40 ---------A   01165  GOTO 1200
    0x6119634a2230 ---------A T 01170  ON C GOTO 1180,1190
    0x6119634a26d0 ---------A T 01180  PRINT "SAVE " B$(6) " --  REBOUND":GOTO 940
    0x6119634a2b50 ---------A T 01190  PRINT "SAVE " A$(6) " --  FOLLOW UP":GOTO 940
    0x6119634a3210 ---------A T 01200  S1=INT(6*RND(X))+1 
    0x6119634a3500 ---------A   01210  ON C GOTO 1220,1380
    0x6119634a3b00 ---------A T 01220  ON S1 GOTO 1230,1260,1290,1300,1330,1350 
    0x6119634a3e40 ---------A T 01230  PRINT "KICK SAVE AND A BEAUTY BY " B$(6)
    0x6119634a4160 ---------A   01240  PRINT "CLEARED OUT BY " B$(3)
    0x6119634a4200 ---------A   01250  GOTO 260 
    0x6119634a4540 ---------A T 01260  PRINT "WHAT A SPECTACULAR GLOVE SAVE BY " B$(6)
    0x6119634a4970 ---------A   01270  PRINT "AND " B$(6) " GOLFS IT INTO THE CROWD"
    0x6119634a4a20 ---------A   01280  GOTO 1540
    0x6119634a4dc0 ---------A T 01290  PRINT "SKATE SAVE ON A LOW STEAMER BY " B$(6):GOTO 260 
    0x6119634a51f0 ---------A T 01300  PRINT "PAD SAVE BY " B$(6) " OFF THE STICK" 
    0x6119634a58f0 ---------A   01310  PRINT "OF "A$(G) " AND " B$(6) " COVERS UP"
    0x6119634a5990 ---------A   01320  GOTO 1540
    0x6119634a5cb0 ---------A T 01330  PRINT "WHISTLES ONE OVER THE HEAD OF " B$(6) 
    0x6119634a5d50 ---------A   01340  GOTO 260 
    0x6119634a60a0 ---------A T 01350  PRINT B$(6) " MAKES A FACE SAVE!! AND HE IS HURT"
    0x6119634a64c0 ---------A   01360  PRINT "THE DEFENSEMAN " B$(5) " COVERS UP FOR HIM" 
    0x6119634a6560 ---------A   01370  GOTO 1540
    0x6119634a6b40 ---------A T 01380  ON S1 GOTO 1390,1410,1440,1470,1490,1520 
    0x6119634a6e80 ---------A T 01390  PRINT "STICK SAVE BY " A$(6) 
    0x6119634a7230 ---------A   01400  PRINT "AND CLEARED OUT BY " A$(4):GOTO 260 
    0x6119634a76a0 ---------A T 01410  PRINT "OH MY GOD!! " B$(G) " RATTLES ONE OFF THE POST" 
    0x6119634a7dc0 ---------A   01420  PRINT "TO THE RIGHT OF " A$(6) " AND " A$(6) " COVERS "; 
    0x6119634a7f90 ---------A   01430  PRINT "ON THE LOOSE PUCK!":GOTO 1540 
    0x6119634a82d0 ---------A T 01440  PRINT "SKATE SAVE BY " A$(6)
    0x6119634a8610 ---------A   01450  PRINT A$(6) " WHACKS THE LOOSE PUCK INTO THE STANDS" 
    0x6119634a86c0 ---------A   01460  GOTO 1540
    0x6119634a8ae0 ---------A T 01470  PRINT "STICK SAVE BY " A$(6) " AND HE CLEARS IT OUT HIMSELF" 
    0x6119634a8b70 ---------A   01480  GOTO 260 
    0x6119634a8eb0 ---------A T 01490  PRINT "KICKED OUT BY " A$(6) 
    0x6119634a9050 ---------A   01500  PRINT "AND IT REBOUNDS ALL THE WAY TO CENTER ICE"  
    0x6119634a90f0 ---------A   01510  GOTO 260 
    0x6119634a9500 ---------A T 01520  PRINT "GLOVE SAVE " A$(6) " AND HE HANGS ON" 
    0x6119634a95c0 ---------A   01530  GOTO 1540
    0x6119634a9e60 ---------A T 01540  NEXT L:FOR N=1 TO 30:PRINT CHR$(7);:NEXT N:PRINT "THAT'S THE SIREN"
    0x6119634aa170 ---------A   01550  PRINT:PRINT TAB(15);"FINAL SCORE:"
    0x6119634aa590 ---------A   01560  IF H(8)>H(9) THEN 1580
    0x6119634aaf60 ---------A   01570  PRINT A$(7)":";H(9),B$(7)":";H(8):GOTO 1590
    0x6119634ab8d0 ---------A T 01580  PRINT B$(7)":";H(8),A$(7)":";H(9)
    0x6119634abc40 ---------A T 01590  PRINT: PRINT TAB(10);"SCORING SUMMARY":PRINT
    0x6119634abfd0 ---------A   01600  PRINT TAB(25);A$(7)
    0x6119634ac720 ---------A   01610  PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"
    0x6119634ace70 ---------A   01620  PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
    0x6119634adaf0 ---------A   01630  FOR I=1 TO 5:PRINT TAB(5);A$(I);TAB(21);T(I);TAB(36);T1(I) 
    0x6119634adcb0 ---------A   01640  NEXT I:PRINT 
    0x6119634ae040 ---------A   01650  PRINT TAB(25);B$(7)
    0x6119634ae7b0 ---------A   01660  PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"  
    0x6119634aef00 ---------A   01670  PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
    0x6119634afb80 ---------A   01680  FOR T=1 TO 5:PRINT TAB(5);B$(T);TAB(21);T2(T);TAB(36);T3(T)
    0x6119634afd60 ---------A   01690  NEXT T:PRINT 
    0x6119634b06c0 ---------A   01700  PRINT "SHOTS ON NET":PRINT A$(7)":";S2:PRINT B$(7)":";S3 
    0x6119634b0720 ---------A   01710  END
    0x6119634b0920 ---------A T 01720  PRINT: PRINT "THIS IS A SIMULATED HOCKEY GAME."
    0x6119634b0ab0 ---------A   01730  PRINT "QUESTION     RESPONSE"
    0x6119634b0c50 ---------A   01740  PRINT "PASS         TYPE IN THE NUMBER OF PASSES YOU WOULD"
    0x6119634b0e00 ---------A   01750  PRINT "             LIKE TO MAKE, FROM 0 TO 3."
    0x6119634b0fb0 ---------A   01760  PRINT "SHOT         TYPE THE NUMBER CORRESPONDING TO THE SHOT"
    0x6119634b1150 ---------A   01770  PRINT "             YOU WANT TO MAKE.  ENTER:"
    0x6119634b12e0 ---------A   01780  PRINT "             1 FOR A SLAPSHOT"
    0x6119634b1470 ---------A   01790  PRINT "             2 FOR A WRISTSHOT"
    0x6119634b1600 ---------A   01800  PRINT "             3 FOR A BACKHAND"
    0x6119634b17a0 ---------A   01810  PRINT "             4 FOR A SNAP SHOT"
    0x6119634b1950 ---------A   01820  PRINT "AREA         TYPE IN THE NUMBER CORRESPONDING TO"
    0x6119634b1af0 ---------A   01830  PRINT "             THE AREA YOU ARE AIMING AT.  ENTER:"
    0x6119634b1c90 ---------A   01840  PRINT "             1 FOR UPPER LEFT HAND CORNER"
    0x6119634b1e30 ---------A   01850  PRINT "             2 FOR UPPER RIGHT HAND CORNER"
    0x6119634b1fd0 ---------A   01860  PRINT "             3 FOR LOWER LEFT HAND CORNER"
    0x6119634b2150 ---------A   01870  PRINT "             4 FOR LOWER RIGHT HAND CORNER"
    0x6119634b2200 ---------A   01880  PRINT
    0x6119634b23c0 ---------A   01890  PRINT "AT THE START OF THE GAME, YOU WILL BE ASKED FOR THE NAMES"
    0x6119634b2570 ---------A   01900  PRINT "OF YOUR PLAYERS.  THEY ARE ENTERED IN THE ORDER: "
    0x6119634b2720 ---------A   01910  PRINT "LEFT WING, CENTER, RIGHT WING, LEFT DEFENSE,"
    0x6119634b28d0 ---------A   01920  PRINT "RIGHT DEFENSE, GOALKEEPER.  ANY OTHER INPUT REQUIRED WILL"
    0x6119634b2a40 ---------A   01930  PRINT "HAVE EXPLANATORY INSTRUCTIONS."
    0x6119634b2ac0 ---------A   01940  GOTO 90
    0x6119634b2b10 ---------A   01950  END
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
   A) 0x61196346e6d0 (00002)   0x61196346e6d0 (00002)   0x6119634b2b10 (01950)   0x6119634b2b10 (01950)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/hockey.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x61196346e6d0 ---------A   00002  PRINT TAB(33);"HOCKEY"
    0x61196346e670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x61196345f2b0 ----------   00006  PRINT
    0x61196346e9e0 ----------        a PRINT
    0x611963470aa0 ---------A        b PRINT
    0x61196346fb80 ---------A   00010  REM ROBERT PUOPOLO ALG. 1 140 MCCOWAN 6/7/73 HOCKEY
    0x611963470f30 ---------A   00030  LET X=1
    0x61196346ee80 ----------   00040  PRINT
    0x61196346f480 ----------        a PRINT
    0x6119634706a0 ---------A        b PRINT
    0x611963470700 ---------- T 00050  PRINT "WOULD YOU LIKE THE INSTRUCTIONS";
    0x6119634711a0 ---------A T      a INPUT C$
    0x611963471220 ---------A   00055  PRINT
    0x61196346f7e0 ---------A   00060  IF C$="NO" THEN 90
    0x6119634769e0 ---------A   00065  IF C$="YES" THEN 80
    0x611963476b00 ----------   00070  PRINT "ANSWER YES OR NO!!"
    0x611963470e70 ---------A        a GOTO 50 
    0x611963470ff0 ---------A T 00080  GOTO 1720
    0x6119634710b0 ---------A T 00090  DIM A$(7),B$(7),H(20),T(5),T1(5),T2(5),T3(5)
    0x611963477d00 ----------   00100  PRINT "ENTER THE TWO TEAMS";
    0x6119634780c0 ---------A        a INPUT A$(7),B$(7) 
    0x611963478170 ---------A   00105  PRINT
    0x6119634782b0 ----------   00110  PRINT "ENTER THE NUMBER OF MINUTES IN A GAME";
    0x6119634784d0 ---------A        a INPUT T6
    0x611963478530 ---------A   00115  PRINT
    0x611963478770 ----------   00120  IF T6<1 THEN 110
    0x611963478810 ---------A        a PRINT 
    0x611963478c30 ---------A   00130  PRINT "WOULD THE " A$(7) " COACH ENTER HIS TEAM" 
    0x611963478ce0 ---------A   00135  PRINT
    0x611963479060 ----------   00140  FOR I=1 TO 6
    0x6119634792c0 ----------        a PRINT "PLAYER"I;
    0x6119634794e0 ----------        b INPUT A$(I)
    0x611963479620 ----------        c NEXT I
    0x6119634796b0 ---------A        d PRINT 
    0x611963479ad0 ---------A   00150  PRINT "WOULD THE " B$(7) " COACH DO THE SAME"
    0x611963479b80 ---------A   00155  PRINT
    0x611963479e40 ----------   00160  FOR T=1 TO 6
    0x61196347a0a0 ----------        a PRINT "PLAYER"T;
    0x61196347a2c0 ----------        b INPUT B$(T)
    0x61196347a400 ----------        c NEXT T
    0x61196347a490 ---------A        d PRINT 
    0x61196347a5d0 ----------   00170  PRINT "INPUT THE REFEREE FOR THIS GAME";
    0x61196347a810 ---------A        a INPUT R$  
    0x61196347a870 ----------   00180  PRINT
    0x61196347acb0 ---------A        a PRINT TAB(10);A$(7) " STARTING LINEUP" 
    0x61196347af70 ----------   00190  FOR T=1 TO 6
    0x61196347b190 ----------        a PRINT A$(T)
    0x61196347b2d0 ---------A        b NEXT T  
    0x61196347b360 ----------   00200  PRINT
    0x61196347b7e0 ---------A        a PRINT TAB(10);B$(7)" STARTING LINEUP"
    0x61196347baa0 ----------   00210  FOR T=1 TO 6
    0x61196347bcc0 ----------        a PRINT B$(T)
    0x61196347be00 ----------        b NEXT T
    0x61196347be90 ---------A        c PRINT
    0x61196347c040 ---------A   00220  PRINT "WE'RE READY FOR TONIGHTS OPENING FACE-OFF."
    0x61196347c6e0 ---------A   00230  PRINT R$ " WILL DROP THE PUCK BETWEEN " A$(2) " AND " B$(2)
    0x61196347ca80 ----------   00240  FOR L=1 TO T6
    0x61196347cd00 ---------A        a IF L=1 THEN 260
    0x61196347ce80 ---------A   00250  PRINT "AND WE'RE READY FOR THE FACE-OFF" 
    0x61196347d730 ---------- T 00260  C=INT(2*RND(X))+1
    0x61196347da20 ---------A T      a ON C GOTO 270,280
    0x61196347dd30 ---------- T 00270  PRINT A$(7) " HAS CONTROL OF THE PUCK"
    0x61196347ddc0 ---------A T      a GOTO 290
    0x61196347e0f0 ---------A T 00280  PRINT B$(7) " HAS CONTROL." 
    0x61196347e250 ---------- T 00290  PRINT "PASS";
    0x61196347e450 ---------- T      a INPUT P
    0x61196347e7d0 ---------- T      b FOR N=1 TO 3
    0x61196347eab0 ---------- T      c H(N)=0
    0x61196347ebe0 ---------A T      d NEXT N 
    0x61196347ee50 ---------A   00300  IF P<0 THEN 290
    0x61196347f0b0 ---------A   00305  IF P>3 THEN 290
    0x61196347f5c0 ---------A T 00310  FOR J=1 TO (P+2) 
    0x61196347fcb0 ---------A   00320  H(J)=INT(5*RND(X))+1 
    0x61196347fde0 ----------   00330  NEXT J
    0x611963480410 ---------A        a IF H(J-1)=H(J-2) THEN 310
    0x611963480780 ---------A   00331  IF P+2<3 THEN 350
    0x611963480dd0 ---------A   00335  IF H(J-1)=H(J-3) THEN 310
    0x611963481410 ---------A   00340  IF H(J-2)=H(J-3) THEN 310
    0x611963481670 ---------A T 00350  IF P=0 THEN 360
    0x611963481700 ---------A   00355  GOTO 490
    0x611963481910 ---------- T 00360  INPUT "SHOT";S
    0x611963481b70 ---------A T      a IF S<1 THEN 360
    0x611963481dd0 ---------A   00365  IF S>4 THEN 360
    0x6119634820d0 ---------A   00370  ON C GOTO 380,480
    0x6119634824f0 ---------- T 00380  PRINT A$(H(J-1));
    0x6119634829b0 ---------- T      a G=H(J-1)
    0x611963482c60 ---------- T      b G1=0
    0x611963482f40 ---------A T      c G2=0 
    0x6119634833b0 ---------A T 00390  ON S GOTO 400,420,440,460
    0x611963483530 ---------A T 00400  PRINT " LET'S A BOOMER GO FROM THE RED LINE!!" 
    0x6119634837f0 ----------   00410  Z=10
    0x611963483880 ---------A        a GOTO 890
    0x611963483a00 ---------A T 00420  PRINT " FLIPS A WRISTSHOT DOWN THE ICE"
    0x611963483b70 ---------A T 00440  PRINT " BACKHANDS ONE IN ON THE GOALTENDER" 
    0x611963483d70 ----------   00450  Z=25
    0x611963483df0 ---------A        a GOTO 890
    0x611963483f50 ---------A T 00460  PRINT " SNAPS A LONG FLIP SHOT"
    0x611963484150 ----------   00470  Z=17
    0x6119634841e0 ---------A        a GOTO 890
    0x6119634845f0 ---------- T 00480  PRINT B$(H(J-1));
    0x6119634847f0 ---------- T      a G1=0
    0x6119634849e0 ---------- T      b G2=0
    0x611963484dd0 ---------- T      c G=H(J-1)
    0x611963484e40 ---------A T      d GOTO 390
    0x611963485120 ---------A T 00490  ON C GOTO 500,640
    0x6119634854f0 ---------A T 00500  ON P GOTO 510,540,570
    0x611963485ee0 ---------A T 00510  PRINT A$(H(J-2)) " LEADS " A$(H(J-1)) " WITH A PERFECT PASS." 
    0x611963486420 ---------A   00520  PRINT A$(H(J-1)) " CUTTING IN!!!"
    0x611963486820 ----------   00530  G=H(J-1)
    0x611963486c10 ----------        a G1=H(J-2)
    0x611963486e00 ----------        b G2=0
    0x6119634870b0 ----------        c Z1=3
    0x611963487150 ---------A        d GOTO 770
    0x611963487e70 ---------A T 00540  PRINT A$(H(J-2)) " GIVES TO A STREAKING " A$(H(J-1))
    0x611963488830 ---------A   00550  PRINT A$(H(J-3)) " COMES DOWN ON " B$(5) " AND " B$(4)
    0x611963488c30 ----------   00560  G=H(J-3)
    0x611963489020 ----------        a G1=H(J-1)
    0x611963489410 ----------        b G2=H(J-2)
    0x611963489600 ----------        c Z1=2
    0x611963489690 ---------A        d GOTO 770
    0x611963489810 ---------A T 00570  PRINT "OH MY GOD!! A ' 4 ON 2 ' SITUATION"
    0x61196348a110 ---------A   00580  PRINT A$(H(J-3)) " LEADS " A$(H(J-2))
    0x61196348a660 ---------A   00590  PRINT A$(H(J-2)) " IS WHEEELING THROUGH CENTER."
    0x61196348af50 ---------A   00600  PRINT A$(H(J-2)) " GIVES AND GOES WITH " A$(H(J-1))
    0x61196348b0d0 ---------A   00610  PRINT "PRETTY PASSING!"
    0x61196348b9d0 ---------A   00620  PRINT A$(H(J-1)) " DROPS IT TO " A$(H(J-4))
    0x61196348bdd0 ----------   00630  G=H(J-4)
    0x61196348c1c0 ----------        a G1=J(J-1)
    0x61196348c5b0 ----------        b G2=H(J-2)
    0x61196348c7a0 ----------        c Z1=1
    0x61196348c820 ---------A        d GOTO 770
    0x61196348cbe0 ---------A T 00640  ON P GOTO 650,670,720
    0x61196348d5f0 ---------A T 00650  PRINT B$(H(J-1)) " HITS " B$(H(J-2)) " FLYING DOWN THE LEFT SIDE" 
    0x61196348d9f0 ----------   00660  G=H(J-2)
    0x61196348dde0 ----------        a G1=H(J-1)
    0x61196348dfd0 ----------        b G2=0
    0x61196348e1c0 ----------        c Z1=3
    0x61196348e240 ---------A        d GOTO 770
    0x61196348e3b0 ---------A T 00670  PRINT "IT'S A ' 3 ON 2 '!"
    0x61196348eab0 ---------A   00680  PRINT "ONLY " A$(4) " AND " A$(5) " ARE BACK."
    0x61196348f3b0 ---------A   00690  PRINT B$(H(J-2)) " GIVES OFF TO " B$(H(J-1))
    0x61196348fcb0 ---------A   00700  PRINT B$(H(J-1)) " DROPS TO " B$(H(J-3))
    0x6119634900b0 ----------   00710  G=H(J-3)
    0x6119634904a0 ----------        a G1=H(J-1)
    0x611963490890 ----------        b G2=H(J-2)
    0x611963490a80 ----------        c Z1=2
    0x611963490b10 ---------A        d GOTO 770 
    0x611963490ca0 ---------A T 00720  PRINT " A ' 3 ON 2 ' WITH A ' TRAILER '!" 
    0x6119634916c0 ---------A   00730  PRINT B$(H(J-4)) " GIVES TO " B$(H(J-2)) " WHO SHUFFLES IT OFF TO" 
    0x611963491c10 ---------A   00740  PRINT B$(H(J-1)) " WHO FIRES A WING TO WING PASS TO "
    0x611963492180 ---------A   00750  PRINT B$(H(J-3)) " AS HE CUTS IN ALONE!!"    
    0x611963492580 ----------   00760  G=H(J-3)
    0x611963492970 ----------        a G1=H(J-1)
    0x611963492d60 ----------        b G2=H(J-2)
    0x611963492f50 ----------        c Z1=1
    0x611963492ff0 ---------A        d GOTO 770 
    0x611963493140 ---------- T 00770  PRINT "SHOT";
    0x611963493280 ---------- T      a INPUT S
    0x6119634934c0 ---------- T      b IF S>4 THEN 770
    0x611963493720 ---------A T      c IF S<1 THEN 770
    0x611963493a20 ---------A   00780  ON C GOTO 790,880
    0x611963493c60 ---------- T 00790  PRINT A$(G);
    0x6119634940e0 ---------A T      a ON S GOTO 800,820,840,860 
    0x611963494270 ---------A T 00800  PRINT " LET'S A BIG SLAP SHOT GO!!"  
    0x611963494470 ----------   00810  Z=4
    0x6119634947a0 ----------        a Z=Z+Z1
    0x611963494820 ---------A        b GOTO 890
    0x611963494980 ---------A T 00820  PRINT " RIPS A WRIST SHOT OFF" 
    0x611963494b80 ----------   00830  Z=2
    0x611963494eb0 ----------        a Z=Z+Z1
    0x611963494f30 ---------A        b GOTO 890
    0x611963495080 ---------A T 00840  PRINT " GETS A BACKHAND OFF" 
    0x611963495280 ----------   00850  Z=3
    0x6119634955b0 ----------        a Z=Z+Z1
    0x611963495630 ---------A        b GOTO 890
    0x6119634957b0 ---------A T 00860  PRINT " SNAPS OFF A SNAP SHOT"   
    0x6119634959b0 ----------   00870  Z=2
    0x611963495ce0 ----------        a Z=Z+Z1
    0x611963495d70 ---------A        b GOTO 890
    0x611963495fa0 ---------- T 00880  PRINT B$(G);
    0x611963496420 ---------A T      a ON S GOTO 800,820,840,860 
    0x611963496580 ---------- T 00890  PRINT "AREA";
    0x611963496780 ---------- T      a INPUT A
    0x6119634969e0 ---------A T      b IF A<1 THEN 890
    0x611963496c40 ---------A   00895  IF A>4 THEN 890
    0x611963496f20 ---------A   00900  ON C GOTO 910,920
    0x611963497300 ---------- T 00910  S2=S2+1
    0x611963497370 ---------A T      a GOTO 930 
    0x611963497780 ---------A T 00920  S3=S3+1
    0x611963497e10 ---------- T 00930  A1=INT(4*RND(X))+1
    0x611963498090 ---------A T      a IF A<>A1 THEN 1200
    0x611963498760 ---------A T 00940  H(20)=INT(100*RND(X))+1
    0x611963498e70 ---------A   00950  IF INT(H(20)/Z)=H(20)/Z THEN 1160
    0x611963499170 ---------A   00960  ON C GOTO 970,980
    0x611963499470 ---------- T 00970  PRINT "GOAL " A$(7)
    0x611963499910 ---------- T      a H(9)=H(9)+1
    0x611963499990 ---------A T      b GOTO 990 
    0x611963499c80 ---------- T 00980  PRINT "SCORE " B$(7)
    0x61196349a160 ---------A T      a H(8)=H(8)+1   
    0x61196349a4d0 ---------- T 00990  FOR B1=1 TO 25
    0x61196349a6f0 ---------- T      a PRINT CHR$(7);
    0x61196349a830 ---------- T      b NEXT B1
    0x61196349a8c0 ---------A T      c PRINT
    0x61196349aa20 ----------   01000  PRINT "SCORE: ";
    0x61196349ae40 ---------A        a IF H(8)>H(9) THEN 1020
    0x61196349b780 ----------   01010  PRINT A$(7)":";H(9),B$(7)":";H(8)
    0x61196349b820 ---------A        a GOTO 1030
    0x61196349c1a0 ---------A T 01020  PRINT B$(7)":";H(8),A$(7)":";H(9)  
    0x61196349c4a0 ---------A T 01030  ON C GOTO 1040,1100
    0x61196349c7c0 ---------- T 01040  PRINT "GOAL SCORED BY: " A$(G)
    0x61196349ca20 ---------A T      a IF G1=0 THEN 1070
    0x61196349ccb0 ---------A   01050  IF G2=0 THEN 1080
    0x61196349d2b0 ----------   01060  PRINT " ASSISTED BY: " A$(G1) " AND " A$(G2)
    0x61196349d340 ---------A        a GOTO 1090 
    0x61196349d470 ---------- T 01070  PRINT " UNASSISTED."
    0x61196349d500 ---------A T      a GOTO 1090
    0x61196349d860 ---------A T 01080  PRINT " ASSISTED BY: " A$(G1)
    0x61196349dd40 ---------- T 01090  T(G)=T(G)+1
    0x61196349e210 ---------- T      a T1(G1)=T1(G1)+1
    0x61196349e6e0 ---------- T      b T1(G2)=T1(G2)+1
    0x61196349e760 ---------A T      c GOTO 1540
    0x61196349eab0 ---------A T 01100  PRINT "GOAL SCORED BY: " B$(G);
    0x61196349ed10 ---------A   01110  IF G1=0 THEN 1130
    0x61196349efa0 ---------A   01115  IF G2=0 THEN 1140
    0x61196349f5a0 ----------   01120  PRINT " ASSISTED BY: " B$(G1) " AND " B$(G2)
    0x61196349f630 ---------A        a GOTO 1150 
    0x61196349f760 ---------- T 01130  PRINT " UNASSISTED"
    0x61196349f800 ---------A T      a GOTO 1150
    0x61196349fb10 ---------- T 01140  PRINT " ASSISTED BY: " B$(G1)
    0x61196349fbc0 ---------A T      a GOTO 1150
    0x6119634a0090 ---------- T 01150  T2(G)=T2(G)+1
    0x6119634a0560 ---------- T      a T3(G1)=T3(G1)+1
    0x6119634a0a30 ---------- T      b T3(G2)=T3(G2)+1
    0x6119634a0ac0 ---------A T      c GOTO 1540
    0x6119634a1960 ---------- T 01160  A2=INT(100*RND(X))+1
    0x6119634a1eb0 ---------A T      a IF INT(A2/4)=A2/4 THEN 1170
    0x6119634a1f40 ---------A   01165  GOTO 1200
    0x6119634a2230 ---------A T 01170  ON C GOTO 1180,1190
    0x6119634a2630 ---------- T 01180  PRINT "SAVE " B$(6) " --  REBOUND"
    0x6119634a26d0 ---------A T      a GOTO 940
    0x6119634a2ac0 ---------- T 01190  PRINT "SAVE " A$(6) " --  FOLLOW UP"
    0x6119634a2b50 ---------A T      a GOTO 940
    0x6119634a3210 ---------A T 01200  S1=INT(6*RND(X))+1 
    0x6119634a3500 ---------A   01210  ON C GOTO 1220,1380
    0x6119634a3b00 ---------A T 01220  ON S1 GOTO 1230,1260,1290,1300,1330,1350 
    0x6119634a3e40 ---------A T 01230  PRINT "KICK SAVE AND A BEAUTY BY " B$(6)
    0x6119634a4160 ---------A   01240  PRINT "CLEARED OUT BY " B$(3)
    0x6119634a4200 ---------A   01250  GOTO 260 
    0x6119634a4540 ---------A T 01260  PRINT "WHAT A SPECTACULAR GLOVE SAVE BY " B$(6)
    0x6119634a4970 ---------A   01270  PRINT "AND " B$(6) " GOLFS IT INTO THE CROWD"
    0x6119634a4a20 ---------A   01280  GOTO 1540
    0x6119634a4d20 ---------- T 01290  PRINT "SKATE SAVE ON A LOW STEAMER BY " B$(6)
    0x6119634a4dc0 ---------A T      a GOTO 260 
    0x6119634a51f0 ---------A T 01300  PRINT "PAD SAVE BY " B$(6) " OFF THE STICK" 
    0x6119634a58f0 ---------A   01310  PRINT "OF "A$(G) " AND " B$(6) " COVERS UP"
    0x6119634a5990 ---------A   01320  GOTO 1540
    0x6119634a5cb0 ---------A T 01330  PRINT "WHISTLES ONE OVER THE HEAD OF " B$(6) 
    0x6119634a5d50 ---------A   01340  GOTO 260 
    0x6119634a60a0 ---------A T 01350  PRINT B$(6) " MAKES A FACE SAVE!! AND HE IS HURT"
    0x6119634a64c0 ---------A   01360  PRINT "THE DEFENSEMAN " B$(5) " COVERS UP FOR HIM" 
    0x6119634a6560 ---------A   01370  GOTO 1540
    0x6119634a6b40 ---------A T 01380  ON S1 GOTO 1390,1410,1440,1470,1490,1520 
    0x6119634a6e80 ---------A T 01390  PRINT "STICK SAVE BY " A$(6) 
    0x6119634a7180 ----------   01400  PRINT "AND CLEARED OUT BY " A$(4)
    0x6119634a7230 ---------A        a GOTO 260 
    0x6119634a76a0 ---------A T 01410  PRINT "OH MY GOD!! " B$(G) " RATTLES ONE OFF THE POST" 
    0x6119634a7dc0 ---------A   01420  PRINT "TO THE RIGHT OF " A$(6) " AND " A$(6) " COVERS "; 
    0x6119634a7f00 ----------   01430  PRINT "ON THE LOOSE PUCK!"
    0x6119634a7f90 ---------A        a GOTO 1540 
    0x6119634a82d0 ---------A T 01440  PRINT "SKATE SAVE BY " A$(6)
    0x6119634a8610 ---------A   01450  PRINT A$(6) " WHACKS THE LOOSE PUCK INTO THE STANDS" 
    0x6119634a86c0 ---------A   01460  GOTO 1540
    0x6119634a8ae0 ---------A T 01470  PRINT "STICK SAVE BY " A$(6) " AND HE CLEARS IT OUT HIMSELF" 
    0x6119634a8b70 ---------A   01480  GOTO 260 
    0x6119634a8eb0 ---------A T 01490  PRINT "KICKED OUT BY " A$(6) 
    0x6119634a9050 ---------A   01500  PRINT "AND IT REBOUNDS ALL THE WAY TO CENTER ICE"  
    0x6119634a90f0 ---------A   01510  GOTO 260 
    0x6119634a9500 ---------A T 01520  PRINT "GLOVE SAVE " A$(6) " AND HE HANGS ON" 
    0x6119634a95c0 ---------A   01530  GOTO 1540
    0x6119634a96f0 ---------- T 01540  NEXT L
    0x6119634a99a0 ---------- T      a FOR N=1 TO 30
    0x6119634a9bc0 ---------- T      b PRINT CHR$(7);
    0x6119634a9d00 ---------- T      c NEXT N
    0x6119634a9e60 ---------A T      d PRINT "THAT'S THE SIREN"
    0x6119634a9ec0 ----------   01550  PRINT
    0x6119634aa170 ---------A        a PRINT TAB(15);"FINAL SCORE:"
    0x6119634aa590 ---------A   01560  IF H(8)>H(9) THEN 1580
    0x6119634aaed0 ----------   01570  PRINT A$(7)":";H(9),B$(7)":";H(8)
    0x6119634aaf60 ---------A        a GOTO 1590
    0x6119634ab8d0 ---------A T 01580  PRINT B$(7)":";H(8),A$(7)":";H(9)
    0x6119634ab930 ---------- T 01590  PRINT
    0x6119634abbb0 ---------- T      a PRINT TAB(10);"SCORING SUMMARY"
    0x6119634abc40 ---------A T      b PRINT
    0x6119634abfd0 ---------A   01600  PRINT TAB(25);A$(7)
    0x6119634ac720 ---------A   01610  PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"
    0x6119634ace70 ---------A   01620  PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
    0x6119634ad130 ----------   01630  FOR I=1 TO 5
    0x6119634adaf0 ---------A        a PRINT TAB(5);A$(I);TAB(21);T(I);TAB(36);T1(I) 
    0x6119634adc30 ----------   01640  NEXT I
    0x6119634adcb0 ---------A        a PRINT 
    0x6119634ae040 ---------A   01650  PRINT TAB(25);B$(7)
    0x6119634ae7b0 ---------A   01660  PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"  
    0x6119634aef00 ---------A   01670  PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
    0x6119634af1c0 ----------   01680  FOR T=1 TO 5
    0x6119634afb80 ---------A        a PRINT TAB(5);B$(T);TAB(21);T2(T);TAB(36);T3(T)
    0x6119634afcc0 ----------   01690  NEXT T
    0x6119634afd60 ---------A        a PRINT 
    0x6119634afea0 ----------   01700  PRINT "SHOTS ON NET"
    0x6119634b02a0 ----------        a PRINT A$(7)":";S2
    0x6119634b06c0 ---------A        b PRINT B$(7)":";S3 
    0x6119634b0720 ---------A   01710  END
    0x6119634b07a0 ---------- T 01720  PRINT
    0x6119634b0920 ---------A T      a PRINT "THIS IS A SIMULATED HOCKEY GAME."
    0x6119634b0ab0 ---------A   01730  PRINT "QUESTION     RESPONSE"
    0x6119634b0c50 ---------A   01740  PRINT "PASS         TYPE IN THE NUMBER OF PASSES YOU WOULD"
    0x6119634b0e00 ---------A   01750  PRINT "             LIKE TO MAKE, FROM 0 TO 3."
    0x6119634b0fb0 ---------A   01760  PRINT "SHOT         TYPE THE NUMBER CORRESPONDING TO THE SHOT"
    0x6119634b1150 ---------A   01770  PRINT "             YOU WANT TO MAKE.  ENTER:"
    0x6119634b12e0 ---------A   01780  PRINT "             1 FOR A SLAPSHOT"
    0x6119634b1470 ---------A   01790  PRINT "             2 FOR A WRISTSHOT"
    0x6119634b1600 ---------A   01800  PRINT "             3 FOR A BACKHAND"
    0x6119634b17a0 ---------A   01810  PRINT "             4 FOR A SNAP SHOT"
    0x6119634b1950 ---------A   01820  PRINT "AREA         TYPE IN THE NUMBER CORRESPONDING TO"
    0x6119634b1af0 ---------A   01830  PRINT "             THE AREA YOU ARE AIMING AT.  ENTER:"
    0x6119634b1c90 ---------A   01840  PRINT "             1 FOR UPPER LEFT HAND CORNER"
    0x6119634b1e30 ---------A   01850  PRINT "             2 FOR UPPER RIGHT HAND CORNER"
    0x6119634b1fd0 ---------A   01860  PRINT "             3 FOR LOWER LEFT HAND CORNER"
    0x6119634b2150 ---------A   01870  PRINT "             4 FOR LOWER RIGHT HAND CORNER"
    0x6119634b2200 ---------A   01880  PRINT
    0x6119634b23c0 ---------A   01890  PRINT "AT THE START OF THE GAME, YOU WILL BE ASKED FOR THE NAMES"
    0x6119634b2570 ---------A   01900  PRINT "OF YOUR PLAYERS.  THEY ARE ENTERED IN THE ORDER: "
    0x6119634b2720 ---------A   01910  PRINT "LEFT WING, CENTER, RIGHT WING, LEFT DEFENSE,"
    0x6119634b28d0 ---------A   01920  PRINT "RIGHT DEFENSE, GOALKEEPER.  ANY OTHER INPUT REQUIRED WILL"
    0x6119634b2a40 ---------A   01930  PRINT "HAVE EXPLANATORY INSTRUCTIONS."
    0x6119634b2ac0 ---------A   01940  GOTO 90
    0x6119634b2b10 ---------A   01950  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/hockey.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x61196346e6d0 ---------A   01000  PRINT TAB(33);"HOCKEY"
    0x61196346e670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x61196345f2b0 ---------- T 01020  PRINT
    0x61196346e9e0 ---------- T 01030  PRINT
    0x611963470aa0 ---------A T 01040  PRINT
    0x61196346fb80 ---------A   01050  REM ROBERT PUOPOLO ALG. 1 140 MCCOWAN 6/7/73 HOCKEY
    0x611963470f30 ---------A   01060  LET X=1
    0x61196346ee80 ---------- T 01070  PRINT
    0x61196346f480 ---------- T 01080  PRINT
    0x6119634706a0 ---------A T 01090  PRINT
    0x611963470700 ---------- T 01100  PRINT "WOULD YOU LIKE THE INSTRUCTIONS";
    0x6119634711a0 ---------A   01110  INPUT C$
    0x611963471220 ---------A   01120  PRINT
    0x61196346f7e0 ---------A T 01130  IF C$="NO" THEN 1180
    0x6119634769e0 ---------A T 01140  IF C$="YES" THEN 1170
    0x611963476b00 ---------- T 01150  PRINT "ANSWER YES OR NO!!"
    0x611963470e70 ---------A T 01160  GOTO 1110 
    0x611963470ff0 ---------A T 01170  GOTO 4120
    0x6119634710b0 ---------A T 01180  DIM A$(7),B$(7),H(20),T(5),T1(5),T2(5),T3(5)
    0x611963477d00 ---------- T 01190  PRINT "ENTER THE TWO TEAMS";
    0x6119634780c0 ---------A T 01200  INPUT A$(7),B$(7) 
    0x611963478170 ---------A   01210  PRINT
    0x6119634782b0 ---------- T 01220  PRINT "ENTER THE NUMBER OF MINUTES IN A GAME";
    0x6119634784d0 ---------A T 01230  INPUT T6
    0x611963478530 ---------A   01240  PRINT
    0x611963478770 ----------   01250  IF T6<1 THEN 1230
    0x611963478810 ---------A T 01260  PRINT 
    0x611963478c30 ---------A   01270  PRINT "WOULD THE " A$(7) " COACH ENTER HIS TEAM" 
    0x611963478ce0 ---------A   01280  PRINT
    0x611963479060 ---------- T 01290  FOR I=1 TO 6
    0x6119634792c0 ---------- T 01300  PRINT "PLAYER"I;
    0x6119634794e0 ----------   01310  INPUT A$(I)
    0x611963479620 ----------   01320  NEXT I
    0x6119634796b0 ---------A T 01330  PRINT 
    0x611963479ad0 ---------A   01340  PRINT "WOULD THE " B$(7) " COACH DO THE SAME"
    0x611963479b80 ---------A T 01350  PRINT
    0x611963479e40 ----------   01360  FOR T=1 TO 6
    0x61196347a0a0 ----------   01370  PRINT "PLAYER"T;
    0x61196347a2c0 ---------- T 01380  INPUT B$(T)
    0x61196347a400 ---------- T 01390  NEXT T
    0x61196347a490 ---------A   01400  PRINT 
    0x61196347a5d0 ---------- T 01410  PRINT "INPUT THE REFEREE FOR THIS GAME";
    0x61196347a810 ---------A   01420  INPUT R$  
    0x61196347a870 ----------   01430  PRINT
    0x61196347acb0 ---------A T 01440  PRINT TAB(10);A$(7) " STARTING LINEUP" 
    0x61196347af70 ----------   01450  FOR T=1 TO 6
    0x61196347b190 ----------   01460  PRINT A$(T)
    0x61196347b2d0 ---------A T 01470  NEXT T  
    0x61196347b360 ----------   01480  PRINT
    0x61196347b7e0 ---------A T 01490  PRINT TAB(10);B$(7)" STARTING LINEUP"
    0x61196347baa0 ----------   01500  FOR T=1 TO 6
    0x61196347bcc0 ----------   01510  PRINT B$(T)
    0x61196347be00 ---------- T 01520  NEXT T
    0x61196347be90 ---------A   01530  PRINT
    0x61196347c040 ---------A T 01540  PRINT "WE'RE READY FOR TONIGHTS OPENING FACE-OFF."
    0x61196347c6e0 ---------A   01550  PRINT R$ " WILL DROP THE PUCK BETWEEN " A$(2) " AND " B$(2)
    0x61196347ca80 ----------   01560  FOR L=1 TO T6
    0x61196347cd00 ---------A   01570  IF L=1 THEN 1600
    0x61196347ce80 ---------A T 01580  PRINT "AND WE'RE READY FOR THE FACE-OFF" 
    0x61196347d730 ---------- T 01590  C=INT(2*RND(X))+1
    0x61196347da20 ---------A   01600  ON C GOTO 1620,1630
    0x61196347dd30 ----------   01610  PRINT A$(7) " HAS CONTROL OF THE PUCK"
    0x61196347ddc0 ---------A   01620  GOTO 1680
    0x61196347e0f0 ---------A   01630  PRINT B$(7) " HAS CONTROL." 
    0x61196347e250 ----------   01640  PRINT "PASS";
    0x61196347e450 ----------   01650  INPUT P
    0x61196347e7d0 ----------   01660  FOR N=1 TO 3
    0x61196347eab0 ----------   01670  H(N)=0
    0x61196347ebe0 ---------A   01680  NEXT N 
    0x61196347ee50 ---------A   01690  IF P<0 THEN 1680
    0x61196347f0b0 ---------A   01700  IF P>3 THEN 1680
    0x61196347f5c0 ---------A   01710  FOR J=1 TO (P+2) 
    0x61196347fcb0 ---------A T 01720  H(J)=INT(5*RND(X))+1 
    0x61196347fde0 ----------   01730  NEXT J
    0x611963480410 ---------A   01740  IF H(J-1)=H(J-2) THEN 1710
    0x611963480780 ---------A   01750  IF P+2<3 THEN 1780
    0x611963480dd0 ---------A   01760  IF H(J-1)=H(J-3) THEN 1710
    0x611963481410 ---------A   01770  IF H(J-2)=H(J-3) THEN 1710
    0x611963481670 ---------A   01780  IF P=0 THEN 1810
    0x611963481700 ---------A   01790  GOTO 2040
    0x611963481910 ----------   01800  INPUT "SHOT";S
    0x611963481b70 ---------A   01810  IF S<1 THEN 1810
    0x611963481dd0 ---------A   01820  IF S>4 THEN 1810
    0x6119634820d0 ---------A   01830  ON C GOTO 1870,2030
    0x6119634824f0 ----------   01840  PRINT A$(H(J-1));
    0x6119634829b0 ----------   01850  G=H(J-1)
    0x611963482c60 ----------   01860  G1=0
    0x611963482f40 ---------A   01870  G2=0 
    0x6119634833b0 ---------A   01880  ON S GOTO 1890,1920,1930,1960
    0x611963483530 ---------A   01890  PRINT " LET'S A BOOMER GO FROM THE RED LINE!!" 
    0x6119634837f0 ----------   01900  Z=10
    0x611963483880 ---------A   01910  GOTO 2830
    0x611963483a00 ---------A   01920  PRINT " FLIPS A WRISTSHOT DOWN THE ICE"
    0x611963483b70 ---------A   01930  PRINT " BACKHANDS ONE IN ON THE GOALTENDER" 
    0x611963483d70 ----------   01940  Z=25
    0x611963483df0 ---------A   01950  GOTO 2830
    0x611963483f50 ---------A   01960  PRINT " SNAPS A LONG FLIP SHOT"
    0x611963484150 ----------   01970  Z=17
    0x6119634841e0 ---------A   01980  GOTO 2830
    0x6119634845f0 ----------   01990  PRINT B$(H(J-1));
    0x6119634847f0 ----------   02000  G1=0
    0x6119634849e0 ----------   02010  G2=0
    0x611963484dd0 ----------   02020  G=H(J-1)
    0x611963484e40 ---------A   02030  GOTO 1880
    0x611963485120 ---------A   02040  ON C GOTO 2050,2310
    0x6119634854f0 ---------A   02050  ON P GOTO 2060,2130,2200
    0x611963485ee0 ---------A   02060  PRINT A$(H(J-2)) " LEADS " A$(H(J-1)) " WITH A PERFECT PASS." 
    0x611963486420 ---------A   02070  PRINT A$(H(J-1)) " CUTTING IN!!!"
    0x611963486820 ----------   02080  G=H(J-1)
    0x611963486c10 ----------   02090  G1=H(J-2)
    0x611963486e00 ----------   02100  G2=0
    0x6119634870b0 ----------   02110  Z1=3
    0x611963487150 ---------A   02120  GOTO 2590
    0x611963487e70 ---------A   02130  PRINT A$(H(J-2)) " GIVES TO A STREAKING " A$(H(J-1))
    0x611963488830 ---------A   02140  PRINT A$(H(J-3)) " COMES DOWN ON " B$(5) " AND " B$(4)
    0x611963488c30 ----------   02150  G=H(J-3)
    0x611963489020 ----------   02160  G1=H(J-1)
    0x611963489410 ----------   02170  G2=H(J-2)
    0x611963489600 ----------   02180  Z1=2
    0x611963489690 ---------A   02190  GOTO 2590
    0x611963489810 ---------A   02200  PRINT "OH MY GOD!! A ' 4 ON 2 ' SITUATION"
    0x61196348a110 ---------A   02210  PRINT A$(H(J-3)) " LEADS " A$(H(J-2))
    0x61196348a660 ---------A   02220  PRINT A$(H(J-2)) " IS WHEEELING THROUGH CENTER."
    0x61196348af50 ---------A   02230  PRINT A$(H(J-2)) " GIVES AND GOES WITH " A$(H(J-1))
    0x61196348b0d0 ---------A   02240  PRINT "PRETTY PASSING!"
    0x61196348b9d0 ---------A   02250  PRINT A$(H(J-1)) " DROPS IT TO " A$(H(J-4))
    0x61196348bdd0 ----------   02260  G=H(J-4)
    0x61196348c1c0 ----------   02270  G1=J(J-1)
    0x61196348c5b0 ----------   02280  G2=H(J-2)
    0x61196348c7a0 ----------   02290  Z1=1
    0x61196348c820 ---------A   02300  GOTO 2590
    0x61196348cbe0 ---------A   02310  ON P GOTO 2320,2380,2470
    0x61196348d5f0 ---------A   02320  PRINT B$(H(J-1)) " HITS " B$(H(J-2)) " FLYING DOWN THE LEFT SIDE" 
    0x61196348d9f0 ----------   02330  G=H(J-2)
    0x61196348dde0 ----------   02340  G1=H(J-1)
    0x61196348dfd0 ----------   02350  G2=0
    0x61196348e1c0 ----------   02360  Z1=3
    0x61196348e240 ---------A   02370  GOTO 2590
    0x61196348e3b0 ---------A   02380  PRINT "IT'S A ' 3 ON 2 '!"
    0x61196348eab0 ---------A   02390  PRINT "ONLY " A$(4) " AND " A$(5) " ARE BACK."
    0x61196348f3b0 ---------A   02400  PRINT B$(H(J-2)) " GIVES OFF TO " B$(H(J-1))
    0x61196348fcb0 ---------A   02410  PRINT B$(H(J-1)) " DROPS TO " B$(H(J-3))
    0x6119634900b0 ----------   02420  G=H(J-3)
    0x6119634904a0 ----------   02430  G1=H(J-1)
    0x611963490890 ----------   02440  G2=H(J-2)
    0x611963490a80 ----------   02450  Z1=2
    0x611963490b10 ---------A   02460  GOTO 2590 
    0x611963490ca0 ---------A   02470  PRINT " A ' 3 ON 2 ' WITH A ' TRAILER '!" 
    0x6119634916c0 ---------A   02480  PRINT B$(H(J-4)) " GIVES TO " B$(H(J-2)) " WHO SHUFFLES IT OFF TO" 
    0x611963491c10 ---------A   02490  PRINT B$(H(J-1)) " WHO FIRES A WING TO WING PASS TO "
    0x611963492180 ---------A   02500  PRINT B$(H(J-3)) " AS HE CUTS IN ALONE!!"    
    0x611963492580 ----------   02510  G=H(J-3)
    0x611963492970 ----------   02520  G1=H(J-1)
    0x611963492d60 ----------   02530  G2=H(J-2)
    0x611963492f50 ----------   02540  Z1=1
    0x611963492ff0 ---------A   02550  GOTO 2590 
    0x611963493140 ----------   02560  PRINT "SHOT";
    0x611963493280 ----------   02570  INPUT S
    0x6119634934c0 ----------   02580  IF S>4 THEN 2580
    0x611963493720 ---------A   02590  IF S<1 THEN 2590
    0x611963493a20 ---------A   02600  ON C GOTO 2620,2800
    0x611963493c60 ----------   02610  PRINT A$(G);
    0x6119634940e0 ---------A   02620  ON S GOTO 2630,2670,2710,2750 
    0x611963494270 ---------A   02630  PRINT " LET'S A BIG SLAP SHOT GO!!"  
    0x611963494470 ----------   02640  Z=4
    0x6119634947a0 ----------   02650  Z=Z+Z1
    0x611963494820 ---------A   02660  GOTO 2830
    0x611963494980 ---------A   02670  PRINT " RIPS A WRIST SHOT OFF" 
    0x611963494b80 ----------   02680  Z=2
    0x611963494eb0 ----------   02690  Z=Z+Z1
    0x611963494f30 ---------A   02700  GOTO 2830
    0x611963495080 ---------A   02710  PRINT " GETS A BACKHAND OFF" 
    0x611963495280 ----------   02720  Z=3
    0x6119634955b0 ----------   02730  Z=Z+Z1
    0x611963495630 ---------A   02740  GOTO 2830
    0x6119634957b0 ---------A   02750  PRINT " SNAPS OFF A SNAP SHOT"   
    0x6119634959b0 ----------   02760  Z=2
    0x611963495ce0 ----------   02770  Z=Z+Z1
    0x611963495d70 ---------A   02780  GOTO 2830
    0x611963495fa0 ----------   02790  PRINT B$(G);
    0x611963496420 ---------A   02800  ON S GOTO 2630,2670,2710,2750 
    0x611963496580 ----------   02810  PRINT "AREA";
    0x611963496780 ----------   02820  INPUT A
    0x6119634969e0 ---------A   02830  IF A<1 THEN 2830
    0x611963496c40 ---------A   02840  IF A>4 THEN 2830
    0x611963496f20 ---------A   02850  ON C GOTO 2870,2880
    0x611963497300 ----------   02860  S2=S2+1
    0x611963497370 ---------A   02870  GOTO 2900 
    0x611963497780 ---------A   02880  S3=S3+1
    0x611963497e10 ----------   02890  A1=INT(4*RND(X))+1
    0x611963498090 ---------A   02900  IF A<>A1 THEN 3420
    0x611963498760 ---------A   02910  H(20)=INT(100*RND(X))+1
    0x611963498e70 ---------A   02920  IF INT(H(20)/Z)=H(20)/Z THEN 3350
    0x611963499170 ---------A   02930  ON C GOTO 2960,2980
    0x611963499470 ----------   02940  PRINT "GOAL " A$(7)
    0x611963499910 ----------   02950  H(9)=H(9)+1
    0x611963499990 ---------A   02960  GOTO 3020 
    0x611963499c80 ----------   02970  PRINT "SCORE " B$(7)
    0x61196349a160 ---------A   02980  H(8)=H(8)+1   
    0x61196349a4d0 ----------   02990  FOR B1=1 TO 25
    0x61196349a6f0 ----------   03000  PRINT CHR$(7);
    0x61196349a830 ----------   03010  NEXT B1
    0x61196349a8c0 ---------A   03020  PRINT
    0x61196349aa20 ----------   03030  PRINT "SCORE: ";
    0x61196349ae40 ---------A   03040  IF H(8)>H(9) THEN 3070
    0x61196349b780 ----------   03050  PRINT A$(7)":";H(9),B$(7)":";H(8)
    0x61196349b820 ---------A   03060  GOTO 3080
    0x61196349c1a0 ---------A   03070  PRINT B$(7)":";H(8),A$(7)":";H(9)  
    0x61196349c4a0 ---------A   03080  ON C GOTO 3100,3210
    0x61196349c7c0 ----------   03090  PRINT "GOAL SCORED BY: " A$(G)
    0x61196349ca20 ---------A   03100  IF G1=0 THEN 3150
    0x61196349ccb0 ---------A   03110  IF G2=0 THEN 3160
    0x61196349d2b0 ----------   03120  PRINT " ASSISTED BY: " A$(G1) " AND " A$(G2)
    0x61196349d340 ---------A   03130  GOTO 3200 
    0x61196349d470 ----------   03140  PRINT " UNASSISTED."
    0x61196349d500 ---------A   03150  GOTO 3200
    0x61196349d860 ---------A   03160  PRINT " ASSISTED BY: " A$(G1)
    0x61196349dd40 ----------   03170  T(G)=T(G)+1
    0x61196349e210 ----------   03180  T1(G1)=T1(G1)+1
    0x61196349e6e0 ----------   03190  T1(G2)=T1(G2)+1
    0x61196349e760 ---------A   03200  GOTO 3830
    0x61196349eab0 ---------A   03210  PRINT "GOAL SCORED BY: " B$(G);
    0x61196349ed10 ---------A   03220  IF G1=0 THEN 3270
    0x61196349efa0 ---------A   03230  IF G2=0 THEN 3290
    0x61196349f5a0 ----------   03240  PRINT " ASSISTED BY: " B$(G1) " AND " B$(G2)
    0x61196349f630 ---------A   03250  GOTO 3330 
    0x61196349f760 ----------   03260  PRINT " UNASSISTED"
    0x61196349f800 ---------A   03270  GOTO 3330
    0x61196349fb10 ----------   03280  PRINT " ASSISTED BY: " B$(G1)
    0x61196349fbc0 ---------A   03290  GOTO 3330
    0x6119634a0090 ----------   03300  T2(G)=T2(G)+1
    0x6119634a0560 ----------   03310  T3(G1)=T3(G1)+1
    0x6119634a0a30 ----------   03320  T3(G2)=T3(G2)+1
    0x6119634a0ac0 ---------A   03330  GOTO 3830
    0x6119634a1960 ----------   03340  A2=INT(100*RND(X))+1
    0x6119634a1eb0 ---------A   03350  IF INT(A2/4)=A2/4 THEN 3370
    0x6119634a1f40 ---------A   03360  GOTO 3420
    0x6119634a2230 ---------A   03370  ON C GOTO 3390,3410
    0x6119634a2630 ----------   03380  PRINT "SAVE " B$(6) " --  REBOUND"
    0x6119634a26d0 ---------A   03390  GOTO 2910
    0x6119634a2ac0 ----------   03400  PRINT "SAVE " A$(6) " --  FOLLOW UP"
    0x6119634a2b50 ---------A   03410  GOTO 2910
    0x6119634a3210 ---------A   03420  S1=INT(6*RND(X))+1 
    0x6119634a3500 ---------A   03430  ON C GOTO 3440,3610
    0x6119634a3b00 ---------A   03440  ON S1 GOTO 3450,3480,3520,3530,3560,3580 
    0x6119634a3e40 ---------A   03450  PRINT "KICK SAVE AND A BEAUTY BY " B$(6)
    0x6119634a4160 ---------A   03460  PRINT "CLEARED OUT BY " B$(3)
    0x6119634a4200 ---------A   03470  GOTO 1600 
    0x6119634a4540 ---------A   03480  PRINT "WHAT A SPECTACULAR GLOVE SAVE BY " B$(6)
    0x6119634a4970 ---------A   03490  PRINT "AND " B$(6) " GOLFS IT INTO THE CROWD"
    0x6119634a4a20 ---------A   03500  GOTO 3830
    0x6119634a4d20 ----------   03510  PRINT "SKATE SAVE ON A LOW STEAMER BY " B$(6)
    0x6119634a4dc0 ---------A   03520  GOTO 1600 
    0x6119634a51f0 ---------A   03530  PRINT "PAD SAVE BY " B$(6) " OFF THE STICK" 
    0x6119634a58f0 ---------A   03540  PRINT "OF "A$(G) " AND " B$(6) " COVERS UP"
    0x6119634a5990 ---------A   03550  GOTO 3830
    0x6119634a5cb0 ---------A   03560  PRINT "WHISTLES ONE OVER THE HEAD OF " B$(6) 
    0x6119634a5d50 ---------A   03570  GOTO 1600 
    0x6119634a60a0 ---------A   03580  PRINT B$(6) " MAKES A FACE SAVE!! AND HE IS HURT"
    0x6119634a64c0 ---------A   03590  PRINT "THE DEFENSEMAN " B$(5) " COVERS UP FOR HIM" 
    0x6119634a6560 ---------A   03600  GOTO 3830
    0x6119634a6b40 ---------A   03610  ON S1 GOTO 3620,3650,3690,3720,3740,3770 
    0x6119634a6e80 ---------A   03620  PRINT "STICK SAVE BY " A$(6) 
    0x6119634a7180 ----------   03630  PRINT "AND CLEARED OUT BY " A$(4)
    0x6119634a7230 ---------A   03640  GOTO 1600 
    0x6119634a76a0 ---------A   03650  PRINT "OH MY GOD!! " B$(G) " RATTLES ONE OFF THE POST" 
    0x6119634a7dc0 ---------A   03660  PRINT "TO THE RIGHT OF " A$(6) " AND " A$(6) " COVERS "; 
    0x6119634a7f00 ----------   03670  PRINT "ON THE LOOSE PUCK!"
    0x6119634a7f90 ---------A   03680  GOTO 3830 
    0x6119634a82d0 ---------A   03690  PRINT "SKATE SAVE BY " A$(6)
    0x6119634a8610 ---------A   03700  PRINT A$(6) " WHACKS THE LOOSE PUCK INTO THE STANDS" 
    0x6119634a86c0 ---------A   03710  GOTO 3830
    0x6119634a8ae0 ---------A   03720  PRINT "STICK SAVE BY " A$(6) " AND HE CLEARS IT OUT HIMSELF" 
    0x6119634a8b70 ---------A   03730  GOTO 1600 
    0x6119634a8eb0 ---------A   03740  PRINT "KICKED OUT BY " A$(6) 
    0x6119634a9050 ---------A   03750  PRINT "AND IT REBOUNDS ALL THE WAY TO CENTER ICE"  
    0x6119634a90f0 ---------A   03760  GOTO 1600 
    0x6119634a9500 ---------A   03770  PRINT "GLOVE SAVE " A$(6) " AND HE HANGS ON" 
    0x6119634a95c0 ---------A   03780  GOTO 3830
    0x6119634a96f0 ----------   03790  NEXT L
    0x6119634a99a0 ----------   03800  FOR N=1 TO 30
    0x6119634a9bc0 ----------   03810  PRINT CHR$(7);
    0x6119634a9d00 ----------   03820  NEXT N
    0x6119634a9e60 ---------A   03830  PRINT "THAT'S THE SIREN"
    0x6119634a9ec0 ----------   03840  PRINT
    0x6119634aa170 ---------A   03850  PRINT TAB(15);"FINAL SCORE:"
    0x6119634aa590 ---------A   03860  IF H(8)>H(9) THEN 3890
    0x6119634aaed0 ----------   03870  PRINT A$(7)":";H(9),B$(7)":";H(8)
    0x6119634aaf60 ---------A   03880  GOTO 3920
    0x6119634ab8d0 ---------A   03890  PRINT B$(7)":";H(8),A$(7)":";H(9)
    0x6119634ab930 ----------   03900  PRINT
    0x6119634abbb0 ----------   03910  PRINT TAB(10);"SCORING SUMMARY"
    0x6119634abc40 ---------A   03920  PRINT
    0x6119634abfd0 ---------A   03930  PRINT TAB(25);A$(7)
    0x6119634ac720 ---------A   03940  PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"
    0x6119634ace70 ---------A   03950  PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
    0x6119634ad130 ----------   03960  FOR I=1 TO 5
    0x6119634adaf0 ---------A   03970  PRINT TAB(5);A$(I);TAB(21);T(I);TAB(36);T1(I) 
    0x6119634adc30 ----------   03980  NEXT I
    0x6119634adcb0 ---------A   03990  PRINT 
    0x6119634ae040 ---------A   04000  PRINT TAB(25);B$(7)
    0x6119634ae7b0 ---------A   04010  PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"  
    0x6119634aef00 ---------A   04020  PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
    0x6119634af1c0 ----------   04030  FOR T=1 TO 5
    0x6119634afb80 ---------A   04040  PRINT TAB(5);B$(T);TAB(21);T2(T);TAB(36);T3(T)
    0x6119634afcc0 ----------   04050  NEXT T
    0x6119634afd60 ---------A   04060  PRINT 
    0x6119634afea0 ----------   04070  PRINT "SHOTS ON NET"
    0x6119634b02a0 ----------   04080  PRINT A$(7)":";S2
    0x6119634b06c0 ---------A   04090  PRINT B$(7)":";S3 
    0x6119634b0720 ---------A   04100  END
    0x6119634b07a0 ----------   04110  PRINT
    0x6119634b0920 ---------A   04120  PRINT "THIS IS A SIMULATED HOCKEY GAME."
    0x6119634b0ab0 ---------A   04130  PRINT "QUESTION     RESPONSE"
    0x6119634b0c50 ---------A   04140  PRINT "PASS         TYPE IN THE NUMBER OF PASSES YOU WOULD"
    0x6119634b0e00 ---------A   04150  PRINT "             LIKE TO MAKE, FROM 0 TO 3."
    0x6119634b0fb0 ---------A   04160  PRINT "SHOT         TYPE THE NUMBER CORRESPONDING TO THE SHOT"
    0x6119634b1150 ---------A   04170  PRINT "             YOU WANT TO MAKE.  ENTER:"
    0x6119634b12e0 ---------A   04180  PRINT "             1 FOR A SLAPSHOT"
    0x6119634b1470 ---------A   04190  PRINT "             2 FOR A WRISTSHOT"
    0x6119634b1600 ---------A   04200  PRINT "             3 FOR A BACKHAND"
    0x6119634b17a0 ---------A   04210  PRINT "             4 FOR A SNAP SHOT"
    0x6119634b1950 ---------A   04220  PRINT "AREA         TYPE IN THE NUMBER CORRESPONDING TO"
    0x6119634b1af0 ---------A   04230  PRINT "             THE AREA YOU ARE AIMING AT.  ENTER:"
    0x6119634b1c90 ---------A   04240  PRINT "             1 FOR UPPER LEFT HAND CORNER"
    0x6119634b1e30 ---------A   04250  PRINT "             2 FOR UPPER RIGHT HAND CORNER"
    0x6119634b1fd0 ---------A   04260  PRINT "             3 FOR LOWER LEFT HAND CORNER"
    0x6119634b2150 ---------A   04270  PRINT "             4 FOR LOWER RIGHT HAND CORNER"
    0x6119634b2200 ---------A   04280  PRINT
    0x6119634b23c0 ---------A   04290  PRINT "AT THE START OF THE GAME, YOU WILL BE ASKED FOR THE NAMES"
    0x6119634b2570 ---------A   04300  PRINT "OF YOUR PLAYERS.  THEY ARE ENTERED IN THE ORDER: "
    0x6119634b2720 ---------A   04310  PRINT "LEFT WING, CENTER, RIGHT WING, LEFT DEFENSE,"
    0x6119634b28d0 ---------A   04320  PRINT "RIGHT DEFENSE, GOALKEEPER.  ANY OTHER INPUT REQUIRED WILL"
    0x6119634b2a40 ---------A   04330  PRINT "HAVE EXPLANATORY INSTRUCTIONS."
    0x6119634b2ac0 ---------A   04340  GOTO 1180
    0x6119634b2b10 ---------A   04350  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     04120 - 10000    5890 

 */



/*
 *  Symbol Table Listing for 'basic/hockey.bas'
 *
    A                        Integer     
    A$              Array    String          {0,6} 
    A1                       Integer     
    A2                       Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$              Array    String          {0,6} 
    B1                       Integer     
    C                        Integer     
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
    G                        Integer     
    G1                       Integer     
    G2                       Integer     
    H               Array    Integer         {0,19} 
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    L                        Integer     
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
    N                        Integer     
    OCT$            Function String          args=1, float  
    P                        Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R$                       String      
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Integer     
    S1                       Integer     
    S2                       Integer     
    S3                       Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T               Array    Integer         {0,4} 
    T1              Array    Integer         {0,4} 
    T2              Array    Integer         {0,4} 
    T3              Array    Integer         {0,4} 
    T6                       Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     
    Z                        Integer     
    Z1                       Integer     

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
    0x61196346e6d0 ---------A   01000  PRINT TAB(33);"HOCKEY"
    0x61196346e670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x61196345f2b0 ---------A   01020  PRINT
    0x61196346e9e0 ---------A   01030  PRINT
    0x611963470aa0 ---------A   01040  PRINT
    0x61196346fb80 ---------A   01050  REM ROBERT PUOPOLO ALG. 1 140 MCCOWAN 6/7/73 HOCKEY
    0x611963470f30 ---------A   01060  LET X=1
    0x61196346ee80 ---------A   01070  PRINT
    0x61196346f480 ---------A   01080  PRINT
    0x6119634706a0 ---------A   01090  PRINT
    0x611963470700 ---------A   01100  PRINT "WOULD YOU LIKE THE INSTRUCTIONS";
    0x6119634711a0 ---------A T 01110  INPUT C$
    0x611963471220 ---------A   01120  PRINT
    0x61196346f7e0 ---------A   01130  IF C$="NO" THEN 1180
    0x6119634769e0 ---------A   01140  IF C$="YES" THEN 1170
    0x611963476b00 ---------A   01150  PRINT "ANSWER YES OR NO!!"
    0x611963470e70 ---------A   01160  GOTO 1110 
    0x611963470ff0 ---------A T 01170  GOTO 3880
    0x6119634710b0 ---------A T 01180  DIM A$(7),B$(7),H(20),T(5),T1(5),T2(5),T3(5)
    0x611963477d00 ---------A   01190  PRINT "ENTER THE TWO TEAMS";
    0x6119634780c0 ---------A   01200  INPUT A$(7),B$(7) 
    0x611963478170 ---------A   01210  PRINT
    0x6119634782b0 ---------A   01220  PRINT "ENTER THE NUMBER OF MINUTES IN A GAME";
    0x6119634784d0 ---------A T 01230  INPUT T6
    0x611963478530 ---------A   01240  PRINT
    0x611963478770 ---------A   01250  IF T6<1 THEN 1230
    0x611963478810 ---------A   01260  PRINT 
    0x611963478c30 ---------A   01270  PRINT "WOULD THE " A$(7) " COACH ENTER HIS TEAM" 
    0x611963478ce0 ---------A   01280  PRINT
    0x611963479060 ---------A   01290  FOR I=1 TO 6
    0x6119634792c0 ---------A   01300  PRINT "PLAYER"I;
    0x6119634794e0 ---------A   01310  INPUT A$(I)
    0x611963479620 ---------A   01320  NEXT I
    0x6119634796b0 ---------A   01330  PRINT 
    0x611963479ad0 ---------A   01340  PRINT "WOULD THE " B$(7) " COACH DO THE SAME"
    0x611963479b80 ---------A   01350  PRINT
    0x611963479e40 ---------A   01360  FOR T=1 TO 6
    0x61196347a0a0 ---------A   01370  PRINT "PLAYER"T;
    0x61196347a2c0 ---------A   01380  INPUT B$(T)
    0x61196347a400 ---------A   01390  NEXT T
    0x61196347a490 ---------A   01400  PRINT 
    0x61196347a5d0 ---------A   01410  PRINT "INPUT THE REFEREE FOR THIS GAME";
    0x61196347a810 ---------A   01420  INPUT R$  
    0x61196347a870 ---------A   01430  PRINT
    0x61196347acb0 ---------A   01440  PRINT TAB(10);A$(7) " STARTING LINEUP" 
    0x61196347af70 ---------A   01450  FOR T=1 TO 6
    0x61196347b190 ---------A   01460  PRINT A$(T)
    0x61196347b2d0 ---------A   01470  NEXT T  
    0x61196347b360 ---------A   01480  PRINT
    0x61196347b7e0 ---------A   01490  PRINT TAB(10);B$(7)" STARTING LINEUP"
    0x61196347baa0 ---------A   01500  FOR T=1 TO 6
    0x61196347bcc0 ---------A   01510  PRINT B$(T)
    0x61196347be00 ---------A   01520  NEXT T
    0x61196347be90 ---------A   01530  PRINT
    0x61196347c040 ---------A   01540  PRINT "WE'RE READY FOR TONIGHTS OPENING FACE-OFF."
    0x61196347c6e0 ---------A   01550  PRINT R$ " WILL DROP THE PUCK BETWEEN " A$(2) " AND " B$(2)
    0x61196347ca80 ---------A   01560  FOR L=1 TO T6
    0x61196347cd00 ---------A   01570  IF L=1 THEN 1600
    0x61196347ce80 ---------A   01580  PRINT "AND WE'RE READY FOR THE FACE-OFF" 
    0x61196347d730 ---------A   01590  C=INT(2*RND(X))+1
    0x61196347da20 ---------A T 01600  ON C GOTO 1620,1630
    0x61196347dd30 ---------A   01610  PRINT A$(7) " HAS CONTROL OF THE PUCK"
    0x61196347ddc0 ---------A T 01620  GOTO 1680
    0x61196347e0f0 ---------A T 01630  PRINT B$(7) " HAS CONTROL." 
    0x61196347e250 ---------A   01640  PRINT "PASS";
    0x61196347e450 ---------A   01650  INPUT P
    0x61196347e7d0 ---------A   01660  FOR N=1 TO 3
    0x61196347eab0 ---------A   01670  H(N)=0
    0x61196347ebe0 ---------A T 01680  NEXT N 
    0x61196347ee50 ---------A   01690  IF P<0 THEN 1680
    0x61196347f0b0 ---------A   01700  IF P>3 THEN 1680
    0x61196347f5c0 ---------A T 01710  FOR J=1 TO (P+2) 
    0x61196347fcb0 ---------A   01720  H(J)=INT(5*RND(X))+1 
    0x61196347fde0 ---------A   01730  NEXT J
    0x611963480410 ---------A   01740  IF H(J-1)=H(J-2) THEN 1710
    0x611963480780 ---------A   01750  IF P+2<3 THEN 1780
    0x611963480dd0 ---------A   01760  IF H(J-1)=H(J-3) THEN 1710
    0x611963481410 ---------A   01770  IF H(J-2)=H(J-3) THEN 1710
    0x611963481670 ---------A T 01780  IF P=0 THEN 1800
    0x611963481700 ---------A   01790  GOTO 1990
    0x611963481b70 ---------A T 01800  IF S<1 THEN 1800
    0x611963481dd0 ---------A   01810  IF S>4 THEN 1800
    0x6119634820d0 ---------A   01820  ON C GOTO 1860,1980
    0x6119634824f0 ---------A   01830  PRINT A$(H(J-1));
    0x6119634829b0 ---------A   01840  G=H(J-1)
    0x611963482c60 ---------A   01850  G1=0
    0x611963482f40 ---------A T 01860  G2=0 
    0x6119634833b0 ---------A T 01870  ON S GOTO 1880,1910,1920,1950
    0x611963483530 ---------A T 01880  PRINT " LET'S A BOOMER GO FROM THE RED LINE!!" 
    0x6119634837f0 ---------A   01890  Z=10
    0x611963483880 ---------A   01900  GOTO 2740
    0x611963483a00 ---------A T 01910  PRINT " FLIPS A WRISTSHOT DOWN THE ICE"
    0x611963483b70 ---------A T 01920  PRINT " BACKHANDS ONE IN ON THE GOALTENDER" 
    0x611963483d70 ---------A   01930  Z=25
    0x611963483df0 ---------A   01940  GOTO 2740
    0x611963483f50 ---------A T 01950  PRINT " SNAPS A LONG FLIP SHOT"
    0x611963484150 ---------A   01960  Z=17
    0x6119634841e0 ---------A   01970  GOTO 2740
    0x611963484e40 ---------A T 01980  GOTO 1870
    0x611963485120 ---------A T 01990  ON C GOTO 2000,2260
    0x6119634854f0 ---------A T 02000  ON P GOTO 2010,2080,2150
    0x611963485ee0 ---------A T 02010  PRINT A$(H(J-2)) " LEADS " A$(H(J-1)) " WITH A PERFECT PASS." 
    0x611963486420 ---------A   02020  PRINT A$(H(J-1)) " CUTTING IN!!!"
    0x611963486820 ---------A   02030  G=H(J-1)
    0x611963486c10 ---------A   02040  G1=H(J-2)
    0x611963486e00 ---------A   02050  G2=0
    0x6119634870b0 ---------A   02060  Z1=3
    0x611963487150 ---------A   02070  GOTO 2510
    0x611963487e70 ---------A T 02080  PRINT A$(H(J-2)) " GIVES TO A STREAKING " A$(H(J-1))
    0x611963488830 ---------A   02090  PRINT A$(H(J-3)) " COMES DOWN ON " B$(5) " AND " B$(4)
    0x611963488c30 ---------A   02100  G=H(J-3)
    0x611963489020 ---------A   02110  G1=H(J-1)
    0x611963489410 ---------A   02120  G2=H(J-2)
    0x611963489600 ---------A   02130  Z1=2
    0x611963489690 ---------A   02140  GOTO 2510
    0x611963489810 ---------A T 02150  PRINT "OH MY GOD!! A ' 4 ON 2 ' SITUATION"
    0x61196348a110 ---------A   02160  PRINT A$(H(J-3)) " LEADS " A$(H(J-2))
    0x61196348a660 ---------A   02170  PRINT A$(H(J-2)) " IS WHEEELING THROUGH CENTER."
    0x61196348af50 ---------A   02180  PRINT A$(H(J-2)) " GIVES AND GOES WITH " A$(H(J-1))
    0x61196348b0d0 ---------A   02190  PRINT "PRETTY PASSING!"
    0x61196348b9d0 ---------A   02200  PRINT A$(H(J-1)) " DROPS IT TO " A$(H(J-4))
    0x61196348bdd0 ---------A   02210  G=H(J-4)
    0x61196348c1c0 ---------A   02220  G1=J(J-1)
    0x61196348c5b0 ---------A   02230  G2=H(J-2)
    0x61196348c7a0 ---------A   02240  Z1=1
    0x61196348c820 ---------A   02250  GOTO 2510
    0x61196348cbe0 ---------A T 02260  ON P GOTO 2270,2330,2420
    0x61196348d5f0 ---------A T 02270  PRINT B$(H(J-1)) " HITS " B$(H(J-2)) " FLYING DOWN THE LEFT SIDE" 
    0x61196348d9f0 ---------A   02280  G=H(J-2)
    0x61196348dde0 ---------A   02290  G1=H(J-1)
    0x61196348dfd0 ---------A   02300  G2=0
    0x61196348e1c0 ---------A   02310  Z1=3
    0x61196348e240 ---------A   02320  GOTO 2510
    0x61196348e3b0 ---------A T 02330  PRINT "IT'S A ' 3 ON 2 '!"
    0x61196348eab0 ---------A   02340  PRINT "ONLY " A$(4) " AND " A$(5) " ARE BACK."
    0x61196348f3b0 ---------A   02350  PRINT B$(H(J-2)) " GIVES OFF TO " B$(H(J-1))
    0x61196348fcb0 ---------A   02360  PRINT B$(H(J-1)) " DROPS TO " B$(H(J-3))
    0x6119634900b0 ---------A   02370  G=H(J-3)
    0x6119634904a0 ---------A   02380  G1=H(J-1)
    0x611963490890 ---------A   02390  G2=H(J-2)
    0x611963490a80 ---------A   02400  Z1=2
    0x611963490b10 ---------A   02410  GOTO 2510 
    0x611963490ca0 ---------A T 02420  PRINT " A ' 3 ON 2 ' WITH A ' TRAILER '!" 
    0x6119634916c0 ---------A   02430  PRINT B$(H(J-4)) " GIVES TO " B$(H(J-2)) " WHO SHUFFLES IT OFF TO" 
    0x611963491c10 ---------A   02440  PRINT B$(H(J-1)) " WHO FIRES A WING TO WING PASS TO "
    0x611963492180 ---------A   02450  PRINT B$(H(J-3)) " AS HE CUTS IN ALONE!!"    
    0x611963492580 ---------A   02460  G=H(J-3)
    0x611963492970 ---------A   02470  G1=H(J-1)
    0x611963492d60 ---------A   02480  G2=H(J-2)
    0x611963492f50 ---------A   02490  Z1=1
    0x611963492ff0 ---------A   02500  GOTO 2510 
    0x611963493720 ---------A T 02510  IF S<1 THEN 2510
    0x611963493a20 ---------A   02520  ON C GOTO 2540,2710
    0x611963493c60 ---------A   02530  PRINT A$(G);
    0x6119634940e0 ---------A T 02540  ON S GOTO 2550,2590,2630,2670 
    0x611963494270 ---------A T 02550  PRINT " LET'S A BIG SLAP SHOT GO!!"  
    0x611963494470 ---------A   02560  Z=4
    0x6119634947a0 ---------A   02570  Z=Z+Z1
    0x611963494820 ---------A   02580  GOTO 2740
    0x611963494980 ---------A T 02590  PRINT " RIPS A WRIST SHOT OFF" 
    0x611963494b80 ---------A   02600  Z=2
    0x611963494eb0 ---------A   02610  Z=Z+Z1
    0x611963494f30 ---------A   02620  GOTO 2740
    0x611963495080 ---------A T 02630  PRINT " GETS A BACKHAND OFF" 
    0x611963495280 ---------A   02640  Z=3
    0x6119634955b0 ---------A   02650  Z=Z+Z1
    0x611963495630 ---------A   02660  GOTO 2740
    0x6119634957b0 ---------A T 02670  PRINT " SNAPS OFF A SNAP SHOT"   
    0x6119634959b0 ---------A   02680  Z=2
    0x611963495ce0 ---------A   02690  Z=Z+Z1
    0x611963495d70 ---------A   02700  GOTO 2740
    0x611963496420 ---------A T 02710  ON S GOTO 2550,2590,2630,2670 
    0x611963496580 ---------A   02720  PRINT "AREA";
    0x611963496780 ---------A   02730  INPUT A
    0x6119634969e0 ---------A T 02740  IF A<1 THEN 2740
    0x611963496c40 ---------A   02750  IF A>4 THEN 2740
    0x611963496f20 ---------A   02760  ON C GOTO 2780,2790
    0x611963497300 ---------A   02770  S2=S2+1
    0x611963497370 ---------A T 02780  GOTO 2810 
    0x611963497780 ---------A T 02790  S3=S3+1
    0x611963497e10 ---------A   02800  A1=INT(4*RND(X))+1
    0x611963498090 ---------A T 02810  IF A<>A1 THEN 3240
    0x611963498760 ---------A T 02820  H(20)=INT(100*RND(X))+1
    0x611963498e70 ---------A   02830  IF INT(H(20)/Z)=H(20)/Z THEN 3180
    0x611963499170 ---------A   02840  ON C GOTO 2870,2880
    0x611963499470 ---------A   02850  PRINT "GOAL " A$(7)
    0x611963499910 ---------A   02860  H(9)=H(9)+1
    0x611963499990 ---------A T 02870  GOTO 2920 
    0x61196349a160 ---------A T 02880  H(8)=H(8)+1   
    0x61196349a4d0 ---------A   02890  FOR B1=1 TO 25
    0x61196349a6f0 ---------A   02900  PRINT CHR$(7);
    0x61196349a830 ---------A   02910  NEXT B1
    0x61196349a8c0 ---------A T 02920  PRINT
    0x61196349aa20 ---------A   02930  PRINT "SCORE: ";
    0x61196349ae40 ---------A   02940  IF H(8)>H(9) THEN 2970
    0x61196349b780 ---------A   02950  PRINT A$(7)":";H(9),B$(7)":";H(8)
    0x61196349b820 ---------A   02960  GOTO 2980
    0x61196349c1a0 ---------A T 02970  PRINT B$(7)":";H(8),A$(7)":";H(9)  
    0x61196349c4a0 ---------A T 02980  ON C GOTO 3000,3100
    0x61196349c7c0 ---------A   02990  PRINT "GOAL SCORED BY: " A$(G)
    0x61196349ca20 ---------A T 03000  IF G1=0 THEN 3040
    0x61196349ccb0 ---------A   03010  IF G2=0 THEN 3050
    0x61196349d2b0 ---------A   03020  PRINT " ASSISTED BY: " A$(G1) " AND " A$(G2)
    0x61196349d340 ---------A   03030  GOTO 3090 
    0x61196349d500 ---------A T 03040  GOTO 3090
    0x61196349d860 ---------A T 03050  PRINT " ASSISTED BY: " A$(G1)
    0x61196349dd40 ---------A   03060  T(G)=T(G)+1
    0x61196349e210 ---------A   03070  T1(G1)=T1(G1)+1
    0x61196349e6e0 ---------A   03080  T1(G2)=T1(G2)+1
    0x61196349e760 ---------A T 03090  GOTO 3600
    0x61196349eab0 ---------A T 03100  PRINT "GOAL SCORED BY: " B$(G);
    0x61196349ed10 ---------A   03110  IF G1=0 THEN 3150
    0x61196349efa0 ---------A   03120  IF G2=0 THEN 3160
    0x61196349f5a0 ---------A   03130  PRINT " ASSISTED BY: " B$(G1) " AND " B$(G2)
    0x61196349f630 ---------A   03140  GOTO 3170 
    0x61196349f800 ---------A T 03150  GOTO 3170
    0x61196349fbc0 ---------A T 03160  GOTO 3170
    0x6119634a0ac0 ---------A T 03170  GOTO 3600
    0x6119634a1eb0 ---------A T 03180  IF INT(A2/4)=A2/4 THEN 3200
    0x6119634a1f40 ---------A   03190  GOTO 3240
    0x6119634a2230 ---------A T 03200  ON C GOTO 3220,3230
    0x6119634a2630 ---------A   03210  PRINT "SAVE " B$(6) " --  REBOUND"
    0x6119634a26d0 ---------A T 03220  GOTO 2820
    0x6119634a2b50 ---------A T 03230  GOTO 2820
    0x6119634a3210 ---------A T 03240  S1=INT(6*RND(X))+1 
    0x6119634a3500 ---------A   03250  ON C GOTO 3260,3420
    0x6119634a3b00 ---------A T 03260  ON S1 GOTO 3270,3300,3330,3340,3370,3390 
    0x6119634a3e40 ---------A T 03270  PRINT "KICK SAVE AND A BEAUTY BY " B$(6)
    0x6119634a4160 ---------A   03280  PRINT "CLEARED OUT BY " B$(3)
    0x6119634a4200 ---------A   03290  GOTO 1600 
    0x6119634a4540 ---------A T 03300  PRINT "WHAT A SPECTACULAR GLOVE SAVE BY " B$(6)
    0x6119634a4970 ---------A   03310  PRINT "AND " B$(6) " GOLFS IT INTO THE CROWD"
    0x6119634a4a20 ---------A   03320  GOTO 3600
    0x6119634a4dc0 ---------A T 03330  GOTO 1600 
    0x6119634a51f0 ---------A T 03340  PRINT "PAD SAVE BY " B$(6) " OFF THE STICK" 
    0x6119634a58f0 ---------A   03350  PRINT "OF "A$(G) " AND " B$(6) " COVERS UP"
    0x6119634a5990 ---------A   03360  GOTO 3600
    0x6119634a5cb0 ---------A T 03370  PRINT "WHISTLES ONE OVER THE HEAD OF " B$(6) 
    0x6119634a5d50 ---------A   03380  GOTO 1600 
    0x6119634a60a0 ---------A T 03390  PRINT B$(6) " MAKES A FACE SAVE!! AND HE IS HURT"
    0x6119634a64c0 ---------A   03400  PRINT "THE DEFENSEMAN " B$(5) " COVERS UP FOR HIM" 
    0x6119634a6560 ---------A   03410  GOTO 3600
    0x6119634a6b40 ---------A T 03420  ON S1 GOTO 3430,3460,3500,3530,3550,3580 
    0x6119634a6e80 ---------A T 03430  PRINT "STICK SAVE BY " A$(6) 
    0x6119634a7180 ---------A   03440  PRINT "AND CLEARED OUT BY " A$(4)
    0x6119634a7230 ---------A   03450  GOTO 1600 
    0x6119634a76a0 ---------A T 03460  PRINT "OH MY GOD!! " B$(G) " RATTLES ONE OFF THE POST" 
    0x6119634a7dc0 ---------A   03470  PRINT "TO THE RIGHT OF " A$(6) " AND " A$(6) " COVERS "; 
    0x6119634a7f00 ---------A   03480  PRINT "ON THE LOOSE PUCK!"
    0x6119634a7f90 ---------A   03490  GOTO 3600 
    0x6119634a82d0 ---------A T 03500  PRINT "SKATE SAVE BY " A$(6)
    0x6119634a8610 ---------A   03510  PRINT A$(6) " WHACKS THE LOOSE PUCK INTO THE STANDS" 
    0x6119634a86c0 ---------A   03520  GOTO 3600
    0x6119634a8ae0 ---------A T 03530  PRINT "STICK SAVE BY " A$(6) " AND HE CLEARS IT OUT HIMSELF" 
    0x6119634a8b70 ---------A   03540  GOTO 1600 
    0x6119634a8eb0 ---------A T 03550  PRINT "KICKED OUT BY " A$(6) 
    0x6119634a9050 ---------A   03560  PRINT "AND IT REBOUNDS ALL THE WAY TO CENTER ICE"  
    0x6119634a90f0 ---------A   03570  GOTO 1600 
    0x6119634a9500 ---------A T 03580  PRINT "GLOVE SAVE " A$(6) " AND HE HANGS ON" 
    0x6119634a95c0 ---------A   03590  GOTO 3600
    0x6119634a9e60 ---------A T 03600  PRINT "THAT'S THE SIREN"
    0x6119634a9ec0 ---------A   03610  PRINT
    0x6119634aa170 ---------A   03620  PRINT TAB(15);"FINAL SCORE:"
    0x6119634aa590 ---------A   03630  IF H(8)>H(9) THEN 3660
    0x6119634aaed0 ---------A   03640  PRINT A$(7)":";H(9),B$(7)":";H(8)
    0x6119634aaf60 ---------A   03650  GOTO 3690
    0x6119634ab8d0 ---------A T 03660  PRINT B$(7)":";H(8),A$(7)":";H(9)
    0x6119634ab930 ---------A   03670  PRINT
    0x6119634abbb0 ---------A   03680  PRINT TAB(10);"SCORING SUMMARY"
    0x6119634abc40 ---------A T 03690  PRINT
    0x6119634abfd0 ---------A   03700  PRINT TAB(25);A$(7)
    0x6119634ac720 ---------A   03710  PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"
    0x6119634ace70 ---------A   03720  PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
    0x6119634ad130 ---------A   03730  FOR I=1 TO 5
    0x6119634adaf0 ---------A   03740  PRINT TAB(5);A$(I);TAB(21);T(I);TAB(36);T1(I) 
    0x6119634adc30 ---------A   03750  NEXT I
    0x6119634adcb0 ---------A   03760  PRINT 
    0x6119634ae040 ---------A   03770  PRINT TAB(25);B$(7)
    0x6119634ae7b0 ---------A   03780  PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"  
    0x6119634aef00 ---------A   03790  PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
    0x6119634af1c0 ---------A   03800  FOR T=1 TO 5
    0x6119634afb80 ---------A   03810  PRINT TAB(5);B$(T);TAB(21);T2(T);TAB(36);T3(T)
    0x6119634afcc0 ---------A   03820  NEXT T
    0x6119634afd60 ---------A   03830  PRINT 
    0x6119634afea0 ---------A   03840  PRINT "SHOTS ON NET"
    0x6119634b02a0 ---------A   03850  PRINT A$(7)":";S2
    0x6119634b06c0 ---------A   03860  PRINT B$(7)":";S3 
    0x6119634b0720 ---------A   03870  END
    0x6119634b0920 ---------A T 03880  PRINT "THIS IS A SIMULATED HOCKEY GAME."
    0x6119634b0ab0 ---------A   03890  PRINT "QUESTION     RESPONSE"
    0x6119634b0c50 ---------A   03900  PRINT "PASS         TYPE IN THE NUMBER OF PASSES YOU WOULD"
    0x6119634b0e00 ---------A   03910  PRINT "             LIKE TO MAKE, FROM 0 TO 3."
    0x6119634b0fb0 ---------A   03920  PRINT "SHOT         TYPE THE NUMBER CORRESPONDING TO THE SHOT"
    0x6119634b1150 ---------A   03930  PRINT "             YOU WANT TO MAKE.  ENTER:"
    0x6119634b12e0 ---------A   03940  PRINT "             1 FOR A SLAPSHOT"
    0x6119634b1470 ---------A   03950  PRINT "             2 FOR A WRISTSHOT"
    0x6119634b1600 ---------A   03960  PRINT "             3 FOR A BACKHAND"
    0x6119634b17a0 ---------A   03970  PRINT "             4 FOR A SNAP SHOT"
    0x6119634b1950 ---------A   03980  PRINT "AREA         TYPE IN THE NUMBER CORRESPONDING TO"
    0x6119634b1af0 ---------A   03990  PRINT "             THE AREA YOU ARE AIMING AT.  ENTER:"
    0x6119634b1c90 ---------A   04000  PRINT "             1 FOR UPPER LEFT HAND CORNER"
    0x6119634b1e30 ---------A   04010  PRINT "             2 FOR UPPER RIGHT HAND CORNER"
    0x6119634b1fd0 ---------A   04020  PRINT "             3 FOR LOWER LEFT HAND CORNER"
    0x6119634b2150 ---------A   04030  PRINT "             4 FOR LOWER RIGHT HAND CORNER"
    0x6119634b2200 ---------A   04040  PRINT
    0x6119634b23c0 ---------A   04050  PRINT "AT THE START OF THE GAME, YOU WILL BE ASKED FOR THE NAMES"
    0x6119634b2570 ---------A   04060  PRINT "OF YOUR PLAYERS.  THEY ARE ENTERED IN THE ORDER: "
    0x6119634b2720 ---------A   04070  PRINT "LEFT WING, CENTER, RIGHT WING, LEFT DEFENSE,"
    0x6119634b28d0 ---------A   04080  PRINT "RIGHT DEFENSE, GOALKEEPER.  ANY OTHER INPUT REQUIRED WILL"
    0x6119634b2a40 ---------A   04090  PRINT "HAVE EXPLANATORY INSTRUCTIONS."
    0x6119634b2ac0 ---------A   04100  GOTO 1180
    0x6119634b2b10 ---------A   04110  END
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
int    A_int;                                     // Basic: A 
char*  A_str_arr[7];                              // Basic: A$ 
int    A1_int;                                    // Basic: A1 
int    A2_int;                                    // Basic: A2 
char*  B_str_arr[7];                              // Basic: B$ 
int    B1_int;                                    // Basic: B1 
int    C_int;                                     // Basic: C 
char*  C_str;                                     // Basic: C$ 
int    G_int;                                     // Basic: G 
int    G1_int;                                    // Basic: G1 
int    G2_int;                                    // Basic: G2 
int    H_int_arr[20];                             // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    L_int;                                     // Basic: L 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
char*  R_str;                                     // Basic: R$ 
int    S_int;                                     // Basic: S 
int    S1_int;                                    // Basic: S1 
int    S2_int;                                    // Basic: S2 
int    S3_int;                                    // Basic: S3 
int    T_int_arr[5];                              // Basic: T 
int    T1_int_arr[5];                             // Basic: T1 
int    T2_int_arr[5];                             // Basic: T2 
int    T3_int_arr[5];                             // Basic: T3 
int    T6_int;                                    // Basic: T6 
int    X_int;                                     // Basic: X 
int    Z_int;                                     // Basic: Z 
int    Z1_int;                                    // Basic: Z1 
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
    // 01000 PRINT TAB(33);"HOCKEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"HOCKEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 REM ROBERT PUOPOLO ALG. 1 140 MCCOWAN 6/7/73 HOCKEY
    // 01060 LET X=1
    X_int = 1;
    // 01070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "WOULD YOU LIKE THE INSTRUCTIONS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WOULD YOU LIKE THE INSTRUCTIONS");fputs(buf,fh); };

  Lbl_01110:
    // 01110 INPUT C$
    // Start of Basic INPUT statement 01110
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&C_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01110
    // 01120 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01130 IF C$="NO" THEN 1180
    if(strcmp(C_str,"NO")==0)goto Lbl_01180;
    // 01140 IF C$="YES" THEN 1170
    if(strcmp(C_str,"YES")==0)goto Lbl_01170;
    // 01150 PRINT "ANSWER YES OR NO!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ANSWER YES OR NO!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 GOTO 1110 
    goto Lbl_01110;

  Lbl_01170:
    // 01170 GOTO 3880
    goto Lbl_03880;

  Lbl_01180:
    // 01180 DIM A$(7),B$(7),H(20),T(5),T1(5),T2(5),T3(5)
    // 01190 PRINT "ENTER THE TWO TEAMS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENTER THE TWO TEAMS");fputs(buf,fh); };
    // 01200 INPUT A$(7),B$(7) 
    // Start of Basic INPUT statement 01200
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str_arr[7],args,0)) ||
                (err += b2c_strtos(&B_str_arr[7],args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01200
    // 01210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT "ENTER THE NUMBER OF MINUTES IN A GAME";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENTER THE NUMBER OF MINUTES IN A GAME");fputs(buf,fh); };

  Lbl_01230:
    // 01230 INPUT T6
    // Start of Basic INPUT statement 01230
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&T6_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01230
    // 01240 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01250 IF T6<1 THEN 1230
    if(T6_int<1)goto Lbl_01230;
    // 01260 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT "WOULD THE " A$(7) " COACH ENTER HIS TEAM" 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WOULD THE "); strcat(buf,A_str_arr[7]);strcat(buf," COACH ENTER HIS TEAM");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01290 FOR I=1 TO 6
    for(I_int=1;I_int<=6;I_int++){
        // 01300 PRINT "PLAYER"I;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLAYER"); b2c_INT(buf,I_int);fputs(buf,fh); };
        // 01310 INPUT A$(I)
        // Start of Basic INPUT statement 01310
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtos(&A_str_arr[I_int],args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01310
        // 01320 NEXT I
        int dummy_1320=0; // Ignore this line.
    }; // End-For(I_int)
    // 01330 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT "WOULD THE " B$(7) " COACH DO THE SAME"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WOULD THE "); strcat(buf,B_str_arr[7]);strcat(buf," COACH DO THE SAME");strcat(buf,"\n");fputs(buf,fh); };
    // 01350 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01360 FOR T=1 TO 6
    for(T_int_arr[0]=1;T_int_arr[0]<=6;T_int_arr[0]++){
        // 01370 PRINT "PLAYER"T;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLAYER"); b2c_INT(buf,T_int_arr[0]);fputs(buf,fh); };
        // 01380 INPUT B$(T)
        // Start of Basic INPUT statement 01380
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtos(&B_str_arr[T_int_arr[0]],args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01380
        // 01390 NEXT T
        int dummy_1390=0; // Ignore this line.
    }; // End-For(T_int_arr[0])
    // 01400 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT "INPUT THE REFEREE FOR THIS GAME";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INPUT THE REFEREE FOR THIS GAME");fputs(buf,fh); };
    // 01420 INPUT R$  
    // Start of Basic INPUT statement 01420
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&R_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01420
    // 01430 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01440 PRINT TAB(10);A$(7) " STARTING LINEUP" 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,10); strcat(buf,A_str_arr[7]);strcat(buf," STARTING LINEUP");strcat(buf,"\n");fputs(buf,fh); };
    // 01450 FOR T=1 TO 6
    for(T_int_arr[0]=1;T_int_arr[0]<=6;T_int_arr[0]++){
        // 01460 PRINT A$(T)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[T_int_arr[0]]);strcat(buf,"\n");fputs(buf,fh); };
        // 01470 NEXT T  
        int dummy_1470=0; // Ignore this line.
    }; // End-For(T_int_arr[0])
    // 01480 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01490 PRINT TAB(10);B$(7)" STARTING LINEUP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,10); strcat(buf,B_str_arr[7]);strcat(buf," STARTING LINEUP");strcat(buf,"\n");fputs(buf,fh); };
    // 01500 FOR T=1 TO 6
    for(T_int_arr[0]=1;T_int_arr[0]<=6;T_int_arr[0]++){
        // 01510 PRINT B$(T)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,B_str_arr[T_int_arr[0]]);strcat(buf,"\n");fputs(buf,fh); };
        // 01520 NEXT T
        int dummy_1520=0; // Ignore this line.
    }; // End-For(T_int_arr[0])
    // 01530 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01540 PRINT "WE'RE READY FOR TONIGHTS OPENING FACE-OFF."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WE'RE READY FOR TONIGHTS OPENING FACE-OFF.");strcat(buf,"\n");fputs(buf,fh); };
    // 01550 PRINT R$ " WILL DROP THE PUCK BETWEEN " A$(2) " AND " B$(2)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,R_str);strcat(buf," WILL DROP THE PUCK BETWEEN "); strcat(buf,A_str_arr[2]);strcat(buf," AND "); strcat(buf,B_str_arr[2]);strcat(buf,"\n");fputs(buf,fh); };
    // 01560 FOR L=1 TO T6
    for(L_int=1;L_int<=T6_int;L_int++){
        // 01570 IF L=1 THEN 1600
        if(L_int==1)goto Lbl_01600;
        // 01580 PRINT "AND WE'RE READY FOR THE FACE-OFF" 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND WE'RE READY FOR THE FACE-OFF");strcat(buf,"\n");fputs(buf,fh); };
        // 01590 C=INT(2*RND(X))+1
        C_int = INT(2*RND(X_int))+1;

  Lbl_01600:
        // 01600 ON C GOTO 1620,1630
        switch((int)(C_int)){
            case 1: goto Lbl_01620;
            case 2: goto Lbl_01630;
            default: break; 
        };
        // 01610 PRINT A$(7) " HAS CONTROL OF THE PUCK"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[7]);strcat(buf," HAS CONTROL OF THE PUCK");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01620:
        // 01620 GOTO 1680
        goto Lbl_01680;

  Lbl_01630:
        // 01630 PRINT B$(7) " HAS CONTROL." 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,B_str_arr[7]);strcat(buf," HAS CONTROL.");strcat(buf,"\n");fputs(buf,fh); };
        // 01640 PRINT "PASS";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PASS");fputs(buf,fh); };
        // 01650 INPUT P
        // Start of Basic INPUT statement 01650
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&P_int,args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01650
        // 01660 FOR N=1 TO 3
        for(N_int=1;N_int<=3;N_int++){
            // 01670 H(N)=0
            H_int_arr[N_int] = 0;

  Lbl_01680:
            // 01680 NEXT N 
            int dummy_1680=0; // Ignore this line.
        }; // End-For(N_int)
        // 01690 IF P<0 THEN 1680
        if(P_int<0)goto Lbl_01680;
        // 01700 IF P>3 THEN 1680
        if(P_int>3)goto Lbl_01680;

  Lbl_01710:
        // 01710 FOR J=1 TO (P+2) 
        for(J_int=1;J_int<=(P_int+2);J_int++){
            // 01720 H(J)=INT(5*RND(X))+1 
            H_int_arr[J_int] = INT(5*RND(X_int))+1;
            // 01730 NEXT J
            int dummy_1730=0; // Ignore this line.
        }; // End-For(J_int)
        // 01740 IF H(J-1)=H(J-2) THEN 1710
        if(H_int_arr[J_int-1]==H_int_arr[J_int-2])goto Lbl_01710;
        // 01750 IF P+2<3 THEN 1780
        if(P_int+2<3)goto Lbl_01780;
        // 01760 IF H(J-1)=H(J-3) THEN 1710
        if(H_int_arr[J_int-1]==H_int_arr[J_int-3])goto Lbl_01710;
        // 01770 IF H(J-2)=H(J-3) THEN 1710
        if(H_int_arr[J_int-2]==H_int_arr[J_int-3])goto Lbl_01710;

  Lbl_01780:
        // 01780 IF P=0 THEN 1800
        if(P_int==0)goto Lbl_01800;
        // 01790 GOTO 1990
        goto Lbl_01990;

  Lbl_01800:
        // 01800 IF S<1 THEN 1800
        if(S_int<1)goto Lbl_01800;
        // 01810 IF S>4 THEN 1800
        if(S_int>4)goto Lbl_01800;
        // 01820 ON C GOTO 1860,1980
        switch((int)(C_int)){
            case 1: goto Lbl_01860;
            case 2: goto Lbl_01980;
            default: break; 
        };
        // 01830 PRINT A$(H(J-1));
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[H_int_arr[J_int-1]]);fputs(buf,fh); };
        // 01840 G=H(J-1)
        G_int = H_int_arr[J_int-1];
        // 01850 G1=0
        G1_int = 0;

  Lbl_01860:
        // 01860 G2=0 
        G2_int = 0;

  Lbl_01870:
        // 01870 ON S GOTO 1880,1910,1920,1950
        switch((int)(S_int)){
            case 1: goto Lbl_01880;
            case 2: goto Lbl_01910;
            case 3: goto Lbl_01920;
            case 4: goto Lbl_01950;
            default: break; 
        };

  Lbl_01880:
        // 01880 PRINT " LET'S A BOOMER GO FROM THE RED LINE!!" 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," LET'S A BOOMER GO FROM THE RED LINE!!");strcat(buf,"\n");fputs(buf,fh); };
        // 01890 Z=10
        Z_int = 10;
        // 01900 GOTO 2740
        goto Lbl_02740;

  Lbl_01910:
        // 01910 PRINT " FLIPS A WRISTSHOT DOWN THE ICE"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," FLIPS A WRISTSHOT DOWN THE ICE");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01920:
        // 01920 PRINT " BACKHANDS ONE IN ON THE GOALTENDER" 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," BACKHANDS ONE IN ON THE GOALTENDER");strcat(buf,"\n");fputs(buf,fh); };
        // 01930 Z=25
        Z_int = 25;
        // 01940 GOTO 2740
        goto Lbl_02740;

  Lbl_01950:
        // 01950 PRINT " SNAPS A LONG FLIP SHOT"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," SNAPS A LONG FLIP SHOT");strcat(buf,"\n");fputs(buf,fh); };
        // 01960 Z=17
        Z_int = 17;
        // 01970 GOTO 2740
        goto Lbl_02740;

  Lbl_01980:
        // 01980 GOTO 1870
        goto Lbl_01870;

  Lbl_01990:
        // 01990 ON C GOTO 2000,2260
        switch((int)(C_int)){
            case 1: goto Lbl_02000;
            case 2: goto Lbl_02260;
            default: break; 
        };

  Lbl_02000:
        // 02000 ON P GOTO 2010,2080,2150
        switch((int)(P_int)){
            case 1: goto Lbl_02010;
            case 2: goto Lbl_02080;
            case 3: goto Lbl_02150;
            default: break; 
        };

  Lbl_02010:
        // 02010 PRINT A$(H(J-2)) " LEADS " A$(H(J-1)) " WITH A PERFECT PASS." 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[H_int_arr[J_int-2]]);strcat(buf," LEADS "); strcat(buf,A_str_arr[H_int_arr[J_int-1]]);strcat(buf," WITH A PERFECT PASS.");strcat(buf,"\n");fputs(buf,fh); };
        // 02020 PRINT A$(H(J-1)) " CUTTING IN!!!"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[H_int_arr[J_int-1]]);strcat(buf," CUTTING IN!!!");strcat(buf,"\n");fputs(buf,fh); };
        // 02030 G=H(J-1)
        G_int = H_int_arr[J_int-1];
        // 02040 G1=H(J-2)
        G1_int = H_int_arr[J_int-2];
        // 02050 G2=0
        G2_int = 0;
        // 02060 Z1=3
        Z1_int = 3;
        // 02070 GOTO 2510
        goto Lbl_02510;

  Lbl_02080:
        // 02080 PRINT A$(H(J-2)) " GIVES TO A STREAKING " A$(H(J-1))
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[H_int_arr[J_int-2]]);strcat(buf," GIVES TO A STREAKING "); strcat(buf,A_str_arr[H_int_arr[J_int-1]]);strcat(buf,"\n");fputs(buf,fh); };
        // 02090 PRINT A$(H(J-3)) " COMES DOWN ON " B$(5) " AND " B$(4)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[H_int_arr[J_int-3]]);strcat(buf," COMES DOWN ON "); strcat(buf,B_str_arr[5]);strcat(buf," AND "); strcat(buf,B_str_arr[4]);strcat(buf,"\n");fputs(buf,fh); };
        // 02100 G=H(J-3)
        G_int = H_int_arr[J_int-3];
        // 02110 G1=H(J-1)
        G1_int = H_int_arr[J_int-1];
        // 02120 G2=H(J-2)
        G2_int = H_int_arr[J_int-2];
        // 02130 Z1=2
        Z1_int = 2;
        // 02140 GOTO 2510
        goto Lbl_02510;

  Lbl_02150:
        // 02150 PRINT "OH MY GOD!! A ' 4 ON 2 ' SITUATION"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OH MY GOD!! A ' 4 ON 2 ' SITUATION");strcat(buf,"\n");fputs(buf,fh); };
        // 02160 PRINT A$(H(J-3)) " LEADS " A$(H(J-2))
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[H_int_arr[J_int-3]]);strcat(buf," LEADS "); strcat(buf,A_str_arr[H_int_arr[J_int-2]]);strcat(buf,"\n");fputs(buf,fh); };
        // 02170 PRINT A$(H(J-2)) " IS WHEEELING THROUGH CENTER."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[H_int_arr[J_int-2]]);strcat(buf," IS WHEEELING THROUGH CENTER.");strcat(buf,"\n");fputs(buf,fh); };
        // 02180 PRINT A$(H(J-2)) " GIVES AND GOES WITH " A$(H(J-1))
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[H_int_arr[J_int-2]]);strcat(buf," GIVES AND GOES WITH "); strcat(buf,A_str_arr[H_int_arr[J_int-1]]);strcat(buf,"\n");fputs(buf,fh); };
        // 02190 PRINT "PRETTY PASSING!"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PRETTY PASSING!");strcat(buf,"\n");fputs(buf,fh); };
        // 02200 PRINT A$(H(J-1)) " DROPS IT TO " A$(H(J-4))
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[H_int_arr[J_int-1]]);strcat(buf," DROPS IT TO "); strcat(buf,A_str_arr[H_int_arr[J_int-4]]);strcat(buf,"\n");fputs(buf,fh); };
        // 02210 G=H(J-4)
        G_int = H_int_arr[J_int-4];
        // 02220 G1=J(J-1)
        G1_int = J_int;
        // 02230 G2=H(J-2)
        G2_int = H_int_arr[J_int-2];
        // 02240 Z1=1
        Z1_int = 1;
        // 02250 GOTO 2510
        goto Lbl_02510;

  Lbl_02260:
        // 02260 ON P GOTO 2270,2330,2420
        switch((int)(P_int)){
            case 1: goto Lbl_02270;
            case 2: goto Lbl_02330;
            case 3: goto Lbl_02420;
            default: break; 
        };

  Lbl_02270:
        // 02270 PRINT B$(H(J-1)) " HITS " B$(H(J-2)) " FLYING DOWN THE LEFT SIDE" 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,B_str_arr[H_int_arr[J_int-1]]);strcat(buf," HITS "); strcat(buf,B_str_arr[H_int_arr[J_int-2]]);strcat(buf," FLYING DOWN THE LEFT SIDE");strcat(buf,"\n");fputs(buf,fh); };
        // 02280 G=H(J-2)
        G_int = H_int_arr[J_int-2];
        // 02290 G1=H(J-1)
        G1_int = H_int_arr[J_int-1];
        // 02300 G2=0
        G2_int = 0;
        // 02310 Z1=3
        Z1_int = 3;
        // 02320 GOTO 2510
        goto Lbl_02510;

  Lbl_02330:
        // 02330 PRINT "IT'S A ' 3 ON 2 '!"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IT'S A ' 3 ON 2 '!");strcat(buf,"\n");fputs(buf,fh); };
        // 02340 PRINT "ONLY " A$(4) " AND " A$(5) " ARE BACK."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ONLY "); strcat(buf,A_str_arr[4]);strcat(buf," AND "); strcat(buf,A_str_arr[5]);strcat(buf," ARE BACK.");strcat(buf,"\n");fputs(buf,fh); };
        // 02350 PRINT B$(H(J-2)) " GIVES OFF TO " B$(H(J-1))
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,B_str_arr[H_int_arr[J_int-2]]);strcat(buf," GIVES OFF TO "); strcat(buf,B_str_arr[H_int_arr[J_int-1]]);strcat(buf,"\n");fputs(buf,fh); };
        // 02360 PRINT B$(H(J-1)) " DROPS TO " B$(H(J-3))
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,B_str_arr[H_int_arr[J_int-1]]);strcat(buf," DROPS TO "); strcat(buf,B_str_arr[H_int_arr[J_int-3]]);strcat(buf,"\n");fputs(buf,fh); };
        // 02370 G=H(J-3)
        G_int = H_int_arr[J_int-3];
        // 02380 G1=H(J-1)
        G1_int = H_int_arr[J_int-1];
        // 02390 G2=H(J-2)
        G2_int = H_int_arr[J_int-2];
        // 02400 Z1=2
        Z1_int = 2;
        // 02410 GOTO 2510 
        goto Lbl_02510;

  Lbl_02420:
        // 02420 PRINT " A ' 3 ON 2 ' WITH A ' TRAILER '!" 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," A ' 3 ON 2 ' WITH A ' TRAILER '!");strcat(buf,"\n");fputs(buf,fh); };
        // 02430 PRINT B$(H(J-4)) " GIVES TO " B$(H(J-2)) " WHO SHUFFLES IT OFF TO" 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,B_str_arr[H_int_arr[J_int-4]]);strcat(buf," GIVES TO "); strcat(buf,B_str_arr[H_int_arr[J_int-2]]);strcat(buf," WHO SHUFFLES IT OFF TO");strcat(buf,"\n");fputs(buf,fh); };
        // 02440 PRINT B$(H(J-1)) " WHO FIRES A WING TO WING PASS TO "
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,B_str_arr[H_int_arr[J_int-1]]);strcat(buf," WHO FIRES A WING TO WING PASS TO ");strcat(buf,"\n");fputs(buf,fh); };
        // 02450 PRINT B$(H(J-3)) " AS HE CUTS IN ALONE!!"    
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,B_str_arr[H_int_arr[J_int-3]]);strcat(buf," AS HE CUTS IN ALONE!!");fputs(buf,fh); };
        // 02460 G=H(J-3)
        G_int = H_int_arr[J_int-3];
        // 02470 G1=H(J-1)
        G1_int = H_int_arr[J_int-1];
        // 02480 G2=H(J-2)
        G2_int = H_int_arr[J_int-2];
        // 02490 Z1=1
        Z1_int = 1;
        // 02500 GOTO 2510 
        goto Lbl_02510;

  Lbl_02510:
        // 02510 IF S<1 THEN 2510
        if(S_int<1)goto Lbl_02510;
        // 02520 ON C GOTO 2540,2710
        switch((int)(C_int)){
            case 1: goto Lbl_02540;
            case 2: goto Lbl_02710;
            default: break; 
        };
        // 02530 PRINT A$(G);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[G_int]);fputs(buf,fh); };

  Lbl_02540:
        // 02540 ON S GOTO 2550,2590,2630,2670 
        switch((int)(S_int)){
            case 1: goto Lbl_02550;
            case 2: goto Lbl_02590;
            case 3: goto Lbl_02630;
            case 4: goto Lbl_02670;
            default: break; 
        };

  Lbl_02550:
        // 02550 PRINT " LET'S A BIG SLAP SHOT GO!!"  
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," LET'S A BIG SLAP SHOT GO!!");fputs(buf,fh); };
        // 02560 Z=4
        Z_int = 4;
        // 02570 Z=Z+Z1
        Z_int = Z_int+Z1_int;
        // 02580 GOTO 2740
        goto Lbl_02740;

  Lbl_02590:
        // 02590 PRINT " RIPS A WRIST SHOT OFF" 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," RIPS A WRIST SHOT OFF");strcat(buf,"\n");fputs(buf,fh); };
        // 02600 Z=2
        Z_int = 2;
        // 02610 Z=Z+Z1
        Z_int = Z_int+Z1_int;
        // 02620 GOTO 2740
        goto Lbl_02740;

  Lbl_02630:
        // 02630 PRINT " GETS A BACKHAND OFF" 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," GETS A BACKHAND OFF");strcat(buf,"\n");fputs(buf,fh); };
        // 02640 Z=3
        Z_int = 3;
        // 02650 Z=Z+Z1
        Z_int = Z_int+Z1_int;
        // 02660 GOTO 2740
        goto Lbl_02740;

  Lbl_02670:
        // 02670 PRINT " SNAPS OFF A SNAP SHOT"   
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," SNAPS OFF A SNAP SHOT");fputs(buf,fh); };
        // 02680 Z=2
        Z_int = 2;
        // 02690 Z=Z+Z1
        Z_int = Z_int+Z1_int;
        // 02700 GOTO 2740
        goto Lbl_02740;

  Lbl_02710:
        // 02710 ON S GOTO 2550,2590,2630,2670 
        switch((int)(S_int)){
            case 1: goto Lbl_02550;
            case 2: goto Lbl_02590;
            case 3: goto Lbl_02630;
            case 4: goto Lbl_02670;
            default: break; 
        };
        // 02720 PRINT "AREA";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AREA");fputs(buf,fh); };
        // 02730 INPUT A
        // Start of Basic INPUT statement 02730
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&A_int,args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 02730

  Lbl_02740:
        // 02740 IF A<1 THEN 2740
        if(A_int<1)goto Lbl_02740;
        // 02750 IF A>4 THEN 2740
        if(A_int>4)goto Lbl_02740;
        // 02760 ON C GOTO 2780,2790
        switch((int)(C_int)){
            case 1: goto Lbl_02780;
            case 2: goto Lbl_02790;
            default: break; 
        };
        // 02770 S2=S2+1
        S2_int = S2_int+1;

  Lbl_02780:
        // 02780 GOTO 2810 
        goto Lbl_02810;

  Lbl_02790:
        // 02790 S3=S3+1
        S3_int = S3_int+1;
        // 02800 A1=INT(4*RND(X))+1
        A1_int = INT(4*RND(X_int))+1;

  Lbl_02810:
        // 02810 IF A<>A1 THEN 3240
        if(A_int!=A1_int)goto Lbl_03240;

  Lbl_02820:
        // 02820 H(20)=INT(100*RND(X))+1
        H_int_arr[20] = INT(100*RND(X_int))+1;
        // 02830 IF INT(H(20)/Z)=H(20)/Z THEN 3180
        if(INT(H_int_arr[20]/Z_int)==H_int_arr[20]/Z_int)goto Lbl_03180;
        // 02840 ON C GOTO 2870,2880
        switch((int)(C_int)){
            case 1: goto Lbl_02870;
            case 2: goto Lbl_02880;
            default: break; 
        };
        // 02850 PRINT "GOAL " A$(7)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOAL "); strcat(buf,A_str_arr[7]);strcat(buf,"\n");fputs(buf,fh); };
        // 02860 H(9)=H(9)+1
        H_int_arr[9] = H_int_arr[9]+1;

  Lbl_02870:
        // 02870 GOTO 2920 
        goto Lbl_02920;

  Lbl_02880:
        // 02880 H(8)=H(8)+1   
        H_int_arr[8] = H_int_arr[8]+1;
        // 02890 FOR B1=1 TO 25
        for(B1_int=1;B1_int<=25;B1_int++){
            // 02900 PRINT CHR$(7);
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(7));fputs(buf,fh); };
            // 02910 NEXT B1
            int dummy_2910=0; // Ignore this line.
        }; // End-For(B1_int)

  Lbl_02920:
        // 02920 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 02930 PRINT "SCORE: ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SCORE: ");fputs(buf,fh); };
        // 02940 IF H(8)>H(9) THEN 2970
        if(H_int_arr[8]>H_int_arr[9])goto Lbl_02970;
        // 02950 PRINT A$(7)":";H(9),B$(7)":";H(8)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[7]);strcat(buf,":"); b2c_INT(buf,H_int_arr[9]); strcat(buf,B_str_arr[7]);strcat(buf,":"); b2c_INT(buf,H_int_arr[8]);strcat(buf,"\n");fputs(buf,fh); };
        // 02960 GOTO 2980
        goto Lbl_02980;

  Lbl_02970:
        // 02970 PRINT B$(7)":";H(8),A$(7)":";H(9)  
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,B_str_arr[7]);strcat(buf,":"); b2c_INT(buf,H_int_arr[8]); strcat(buf,A_str_arr[7]);strcat(buf,":"); b2c_INT(buf,H_int_arr[9]);fputs(buf,fh); };

  Lbl_02980:
        // 02980 ON C GOTO 3000,3100
        switch((int)(C_int)){
            case 1: goto Lbl_03000;
            case 2: goto Lbl_03100;
            default: break; 
        };
        // 02990 PRINT "GOAL SCORED BY: " A$(G)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOAL SCORED BY: "); strcat(buf,A_str_arr[G_int]);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03000:
        // 03000 IF G1=0 THEN 3040
        if(G1_int==0)goto Lbl_03040;
        // 03010 IF G2=0 THEN 3050
        if(G2_int==0)goto Lbl_03050;
        // 03020 PRINT " ASSISTED BY: " A$(G1) " AND " A$(G2)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ASSISTED BY: "); strcat(buf,A_str_arr[G1_int]);strcat(buf," AND "); strcat(buf,A_str_arr[G2_int]);strcat(buf,"\n");fputs(buf,fh); };
        // 03030 GOTO 3090 
        goto Lbl_03090;

  Lbl_03040:
        // 03040 GOTO 3090
        goto Lbl_03090;

  Lbl_03050:
        // 03050 PRINT " ASSISTED BY: " A$(G1)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ASSISTED BY: "); strcat(buf,A_str_arr[G1_int]);strcat(buf,"\n");fputs(buf,fh); };
        // 03060 T(G)=T(G)+1
        T_int_arr[G_int] = T_int_arr[G_int]+1;
        // 03070 T1(G1)=T1(G1)+1
        T1_int_arr[G1_int] = T1_int_arr[G1_int]+1;
        // 03080 T1(G2)=T1(G2)+1
        T1_int_arr[G2_int] = T1_int_arr[G2_int]+1;

  Lbl_03090:
        // 03090 GOTO 3600
        goto Lbl_03600;

  Lbl_03100:
        // 03100 PRINT "GOAL SCORED BY: " B$(G);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOAL SCORED BY: "); strcat(buf,B_str_arr[G_int]);fputs(buf,fh); };
        // 03110 IF G1=0 THEN 3150
        if(G1_int==0)goto Lbl_03150;
        // 03120 IF G2=0 THEN 3160
        if(G2_int==0)goto Lbl_03160;
        // 03130 PRINT " ASSISTED BY: " B$(G1) " AND " B$(G2)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," ASSISTED BY: "); strcat(buf,B_str_arr[G1_int]);strcat(buf," AND "); strcat(buf,B_str_arr[G2_int]);strcat(buf,"\n");fputs(buf,fh); };
        // 03140 GOTO 3170 
        goto Lbl_03170;

  Lbl_03150:
        // 03150 GOTO 3170
        goto Lbl_03170;

  Lbl_03160:
        // 03160 GOTO 3170
        goto Lbl_03170;

  Lbl_03170:
        // 03170 GOTO 3600
        goto Lbl_03600;

  Lbl_03180:
        // 03180 IF INT(A2/4)=A2/4 THEN 3200
        if(INT(A2_int/4)==A2_int/4)goto Lbl_03200;
        // 03190 GOTO 3240
        goto Lbl_03240;

  Lbl_03200:
        // 03200 ON C GOTO 3220,3230
        switch((int)(C_int)){
            case 1: goto Lbl_03220;
            case 2: goto Lbl_03230;
            default: break; 
        };
        // 03210 PRINT "SAVE " B$(6) " --  REBOUND"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SAVE "); strcat(buf,B_str_arr[6]);strcat(buf," --  REBOUND");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03220:
        // 03220 GOTO 2820
        goto Lbl_02820;

  Lbl_03230:
        // 03230 GOTO 2820
        goto Lbl_02820;

  Lbl_03240:
        // 03240 S1=INT(6*RND(X))+1 
        S1_int = INT(6*RND(X_int))+1;
        // 03250 ON C GOTO 3260,3420
        switch((int)(C_int)){
            case 1: goto Lbl_03260;
            case 2: goto Lbl_03420;
            default: break; 
        };

  Lbl_03260:
        // 03260 ON S1 GOTO 3270,3300,3330,3340,3370,3390 
        switch((int)(S1_int)){
            case 1: goto Lbl_03270;
            case 2: goto Lbl_03300;
            case 3: goto Lbl_03330;
            case 4: goto Lbl_03340;
            case 5: goto Lbl_03370;
            case 6: goto Lbl_03390;
            default: break; 
        };

  Lbl_03270:
        // 03270 PRINT "KICK SAVE AND A BEAUTY BY " B$(6)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"KICK SAVE AND A BEAUTY BY "); strcat(buf,B_str_arr[6]);strcat(buf,"\n");fputs(buf,fh); };
        // 03280 PRINT "CLEARED OUT BY " B$(3)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CLEARED OUT BY "); strcat(buf,B_str_arr[3]);strcat(buf,"\n");fputs(buf,fh); };
        // 03290 GOTO 1600 
        goto Lbl_01600;

  Lbl_03300:
        // 03300 PRINT "WHAT A SPECTACULAR GLOVE SAVE BY " B$(6)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT A SPECTACULAR GLOVE SAVE BY "); strcat(buf,B_str_arr[6]);strcat(buf,"\n");fputs(buf,fh); };
        // 03310 PRINT "AND " B$(6) " GOLFS IT INTO THE CROWD"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND "); strcat(buf,B_str_arr[6]);strcat(buf," GOLFS IT INTO THE CROWD");strcat(buf,"\n");fputs(buf,fh); };
        // 03320 GOTO 3600
        goto Lbl_03600;

  Lbl_03330:
        // 03330 GOTO 1600 
        goto Lbl_01600;

  Lbl_03340:
        // 03340 PRINT "PAD SAVE BY " B$(6) " OFF THE STICK" 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PAD SAVE BY "); strcat(buf,B_str_arr[6]);strcat(buf," OFF THE STICK");strcat(buf,"\n");fputs(buf,fh); };
        // 03350 PRINT "OF "A$(G) " AND " B$(6) " COVERS UP"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF "); strcat(buf,A_str_arr[G_int]);strcat(buf," AND "); strcat(buf,B_str_arr[6]);strcat(buf," COVERS UP");strcat(buf,"\n");fputs(buf,fh); };
        // 03360 GOTO 3600
        goto Lbl_03600;

  Lbl_03370:
        // 03370 PRINT "WHISTLES ONE OVER THE HEAD OF " B$(6) 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHISTLES ONE OVER THE HEAD OF "); strcat(buf,B_str_arr[6]);strcat(buf,"\n");fputs(buf,fh); };
        // 03380 GOTO 1600 
        goto Lbl_01600;

  Lbl_03390:
        // 03390 PRINT B$(6) " MAKES A FACE SAVE!! AND HE IS HURT"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,B_str_arr[6]);strcat(buf," MAKES A FACE SAVE!! AND HE IS HURT");strcat(buf,"\n");fputs(buf,fh); };
        // 03400 PRINT "THE DEFENSEMAN " B$(5) " COVERS UP FOR HIM" 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE DEFENSEMAN "); strcat(buf,B_str_arr[5]);strcat(buf," COVERS UP FOR HIM");strcat(buf,"\n");fputs(buf,fh); };
        // 03410 GOTO 3600
        goto Lbl_03600;

  Lbl_03420:
        // 03420 ON S1 GOTO 3430,3460,3500,3530,3550,3580 
        switch((int)(S1_int)){
            case 1: goto Lbl_03430;
            case 2: goto Lbl_03460;
            case 3: goto Lbl_03500;
            case 4: goto Lbl_03530;
            case 5: goto Lbl_03550;
            case 6: goto Lbl_03580;
            default: break; 
        };

  Lbl_03430:
        // 03430 PRINT "STICK SAVE BY " A$(6) 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"STICK SAVE BY "); strcat(buf,A_str_arr[6]);strcat(buf,"\n");fputs(buf,fh); };
        // 03440 PRINT "AND CLEARED OUT BY " A$(4)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND CLEARED OUT BY "); strcat(buf,A_str_arr[4]);strcat(buf,"\n");fputs(buf,fh); };
        // 03450 GOTO 1600 
        goto Lbl_01600;

  Lbl_03460:
        // 03460 PRINT "OH MY GOD!! " B$(G) " RATTLES ONE OFF THE POST" 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OH MY GOD!! "); strcat(buf,B_str_arr[G_int]);strcat(buf," RATTLES ONE OFF THE POST");strcat(buf,"\n");fputs(buf,fh); };
        // 03470 PRINT "TO THE RIGHT OF " A$(6) " AND " A$(6) " COVERS "; 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO THE RIGHT OF "); strcat(buf,A_str_arr[6]);strcat(buf," AND "); strcat(buf,A_str_arr[6]);strcat(buf," COVERS ");fputs(buf,fh); };
        // 03480 PRINT "ON THE LOOSE PUCK!"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ON THE LOOSE PUCK!");strcat(buf,"\n");fputs(buf,fh); };
        // 03490 GOTO 3600 
        goto Lbl_03600;

  Lbl_03500:
        // 03500 PRINT "SKATE SAVE BY " A$(6)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SKATE SAVE BY "); strcat(buf,A_str_arr[6]);strcat(buf,"\n");fputs(buf,fh); };
        // 03510 PRINT A$(6) " WHACKS THE LOOSE PUCK INTO THE STANDS" 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[6]);strcat(buf," WHACKS THE LOOSE PUCK INTO THE STANDS");strcat(buf,"\n");fputs(buf,fh); };
        // 03520 GOTO 3600
        goto Lbl_03600;

  Lbl_03530:
        // 03530 PRINT "STICK SAVE BY " A$(6) " AND HE CLEARS IT OUT HIMSELF" 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"STICK SAVE BY "); strcat(buf,A_str_arr[6]);strcat(buf," AND HE CLEARS IT OUT HIMSELF");strcat(buf,"\n");fputs(buf,fh); };
        // 03540 GOTO 1600 
        goto Lbl_01600;

  Lbl_03550:
        // 03550 PRINT "KICKED OUT BY " A$(6) 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"KICKED OUT BY "); strcat(buf,A_str_arr[6]);strcat(buf,"\n");fputs(buf,fh); };
        // 03560 PRINT "AND IT REBOUNDS ALL THE WAY TO CENTER ICE"  
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND IT REBOUNDS ALL THE WAY TO CENTER ICE");fputs(buf,fh); };
        // 03570 GOTO 1600 
        goto Lbl_01600;

  Lbl_03580:
        // 03580 PRINT "GLOVE SAVE " A$(6) " AND HE HANGS ON" 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GLOVE SAVE "); strcat(buf,A_str_arr[6]);strcat(buf," AND HE HANGS ON");strcat(buf,"\n");fputs(buf,fh); };
        // 03590 GOTO 3600
        goto Lbl_03600;

  Lbl_03600:
        // 03600 PRINT "THAT'S THE SIREN"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THAT'S THE SIREN");strcat(buf,"\n");fputs(buf,fh); };
        // 03610 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 03620 PRINT TAB(15);"FINAL SCORE:"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"FINAL SCORE:");strcat(buf,"\n");fputs(buf,fh); };
        // 03630 IF H(8)>H(9) THEN 3660
        if(H_int_arr[8]>H_int_arr[9])goto Lbl_03660;
        // 03640 PRINT A$(7)":";H(9),B$(7)":";H(8)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[7]);strcat(buf,":"); b2c_INT(buf,H_int_arr[9]); strcat(buf,B_str_arr[7]);strcat(buf,":"); b2c_INT(buf,H_int_arr[8]);strcat(buf,"\n");fputs(buf,fh); };
        // 03650 GOTO 3690
        goto Lbl_03690;

  Lbl_03660:
        // 03660 PRINT B$(7)":";H(8),A$(7)":";H(9)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,B_str_arr[7]);strcat(buf,":"); b2c_INT(buf,H_int_arr[8]); strcat(buf,A_str_arr[7]);strcat(buf,":"); b2c_INT(buf,H_int_arr[9]);strcat(buf,"\n");fputs(buf,fh); };
        // 03670 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 03680 PRINT TAB(10);"SCORING SUMMARY"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,10);strcat(buf,"SCORING SUMMARY");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_03690:
        // 03690 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 03700 PRINT TAB(25);A$(7)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,25); strcat(buf,A_str_arr[7]);strcat(buf,"\n");fputs(buf,fh); };
        // 03710 PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,5);strcat(buf,"NAME");b2c_TAB(buf,20);strcat(buf,"GOALS");b2c_TAB(buf,35);strcat(buf,"ASSISTS");strcat(buf,"\n");fputs(buf,fh); };
        // 03720 PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,5);strcat(buf,"----");b2c_TAB(buf,20);strcat(buf,"-----");b2c_TAB(buf,35);strcat(buf,"-------");strcat(buf,"\n");fputs(buf,fh); };
        // 03730 FOR I=1 TO 5
        for(I_int=1;I_int<=5;I_int++){
            // 03740 PRINT TAB(5);A$(I);TAB(21);T(I);TAB(36);T1(I) 
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,5); strcat(buf,A_str_arr[I_int]);b2c_TAB(buf,21); b2c_INT(buf,T_int_arr[I_int]);b2c_TAB(buf,36); b2c_INT(buf,T1_int_arr[I_int]);strcat(buf,"\n");fputs(buf,fh); };
            // 03750 NEXT I
            int dummy_3750=0; // Ignore this line.
        }; // End-For(I_int)
        // 03760 PRINT 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 03770 PRINT TAB(25);B$(7)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,25); strcat(buf,B_str_arr[7]);strcat(buf,"\n");fputs(buf,fh); };
        // 03780 PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"  
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,5);strcat(buf,"NAME");b2c_TAB(buf,20);strcat(buf,"GOALS");b2c_TAB(buf,35);strcat(buf,"ASSISTS");fputs(buf,fh); };
        // 03790 PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,5);strcat(buf,"----");b2c_TAB(buf,20);strcat(buf,"-----");b2c_TAB(buf,35);strcat(buf,"-------");strcat(buf,"\n");fputs(buf,fh); };
        // 03800 FOR T=1 TO 5
        for(T_int_arr[0]=1;T_int_arr[0]<=5;T_int_arr[0]++){
            // 03810 PRINT TAB(5);B$(T);TAB(21);T2(T);TAB(36);T3(T)
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,5); strcat(buf,B_str_arr[T_int_arr[0]]);b2c_TAB(buf,21); b2c_INT(buf,T2_int_arr[T_int_arr[0]]);b2c_TAB(buf,36); b2c_INT(buf,T3_int_arr[T_int_arr[0]]);strcat(buf,"\n");fputs(buf,fh); };
            // 03820 NEXT T
            int dummy_3820=0; // Ignore this line.
        }; // End-For(T_int_arr[0])
        // 03830 PRINT 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 03840 PRINT "SHOTS ON NET"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOTS ON NET");strcat(buf,"\n");fputs(buf,fh); };
        // 03850 PRINT A$(7)":";S2
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[7]);strcat(buf,":"); b2c_INT(buf,S2_int);strcat(buf,"\n");fputs(buf,fh); };
        // 03860 PRINT B$(7)":";S3 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,B_str_arr[7]);strcat(buf,":"); b2c_INT(buf,S3_int);strcat(buf,"\n");fputs(buf,fh); };
        // 03870 END

  Lbl_03880:
        // 03880 PRINT "THIS IS A SIMULATED HOCKEY GAME."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS A SIMULATED HOCKEY GAME.");strcat(buf,"\n");fputs(buf,fh); };
        // 03890 PRINT "QUESTION     RESPONSE"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"QUESTION     RESPONSE");strcat(buf,"\n");fputs(buf,fh); };
        // 03900 PRINT "PASS         TYPE IN THE NUMBER OF PASSES YOU WOULD"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PASS         TYPE IN THE NUMBER OF PASSES YOU WOULD");strcat(buf,"\n");fputs(buf,fh); };
        // 03910 PRINT "             LIKE TO MAKE, FROM 0 TO 3."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"             LIKE TO MAKE, FROM 0 TO 3.");strcat(buf,"\n");fputs(buf,fh); };
        // 03920 PRINT "SHOT         TYPE THE NUMBER CORRESPONDING TO THE SHOT"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOT         TYPE THE NUMBER CORRESPONDING TO THE SHOT");strcat(buf,"\n");fputs(buf,fh); };
        // 03930 PRINT "             YOU WANT TO MAKE.  ENTER:"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"             YOU WANT TO MAKE.  ENTER:");strcat(buf,"\n");fputs(buf,fh); };
        // 03940 PRINT "             1 FOR A SLAPSHOT"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"             1 FOR A SLAPSHOT");strcat(buf,"\n");fputs(buf,fh); };
        // 03950 PRINT "             2 FOR A WRISTSHOT"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"             2 FOR A WRISTSHOT");strcat(buf,"\n");fputs(buf,fh); };
        // 03960 PRINT "             3 FOR A BACKHAND"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"             3 FOR A BACKHAND");strcat(buf,"\n");fputs(buf,fh); };
        // 03970 PRINT "             4 FOR A SNAP SHOT"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"             4 FOR A SNAP SHOT");strcat(buf,"\n");fputs(buf,fh); };
        // 03980 PRINT "AREA         TYPE IN THE NUMBER CORRESPONDING TO"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AREA         TYPE IN THE NUMBER CORRESPONDING TO");strcat(buf,"\n");fputs(buf,fh); };
        // 03990 PRINT "             THE AREA YOU ARE AIMING AT.  ENTER:"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"             THE AREA YOU ARE AIMING AT.  ENTER:");strcat(buf,"\n");fputs(buf,fh); };
        // 04000 PRINT "             1 FOR UPPER LEFT HAND CORNER"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"             1 FOR UPPER LEFT HAND CORNER");strcat(buf,"\n");fputs(buf,fh); };
        // 04010 PRINT "             2 FOR UPPER RIGHT HAND CORNER"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"             2 FOR UPPER RIGHT HAND CORNER");strcat(buf,"\n");fputs(buf,fh); };
        // 04020 PRINT "             3 FOR LOWER LEFT HAND CORNER"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"             3 FOR LOWER LEFT HAND CORNER");strcat(buf,"\n");fputs(buf,fh); };
        // 04030 PRINT "             4 FOR LOWER RIGHT HAND CORNER"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"             4 FOR LOWER RIGHT HAND CORNER");strcat(buf,"\n");fputs(buf,fh); };
        // 04040 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 04050 PRINT "AT THE START OF THE GAME, YOU WILL BE ASKED FOR THE NAMES"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AT THE START OF THE GAME, YOU WILL BE ASKED FOR THE NAMES");strcat(buf,"\n");fputs(buf,fh); };
        // 04060 PRINT "OF YOUR PLAYERS.  THEY ARE ENTERED IN THE ORDER: "
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF YOUR PLAYERS.  THEY ARE ENTERED IN THE ORDER: ");strcat(buf,"\n");fputs(buf,fh); };
        // 04070 PRINT "LEFT WING, CENTER, RIGHT WING, LEFT DEFENSE,"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LEFT WING, CENTER, RIGHT WING, LEFT DEFENSE,");strcat(buf,"\n");fputs(buf,fh); };
        // 04080 PRINT "RIGHT DEFENSE, GOALKEEPER.  ANY OTHER INPUT REQUIRED WILL"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RIGHT DEFENSE, GOALKEEPER.  ANY OTHER INPUT REQUIRED WILL");strcat(buf,"\n");fputs(buf,fh); };
        // 04090 PRINT "HAVE EXPLANATORY INSTRUCTIONS."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAVE EXPLANATORY INSTRUCTIONS.");strcat(buf,"\n");fputs(buf,fh); };
        // 04100 GOTO 1180
        goto Lbl_01180;
        // 04110 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
