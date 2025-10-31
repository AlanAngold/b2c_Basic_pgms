/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/basketbl.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c8a3f7976d0 ---------A   00005  PRINT TAB(31);"BASKETBALL"
    0x5c8a3f797670 ---------A   00007  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c8a3f7977f0 ---------A   00008  PRINT:PRINT:PRINT
    0x5c8a3f799ae0 ---------A   00010  PRINT "THIS IS DARTMOUTH COLLEGE BASKETBALL.  YOU WILL BE DARTMOUTH"
    0x5c8a3f798080 ---------A   00020  PRINT " CAPTAIN AND PLAYMAKER.  CALL SHOTS AS FOLLOWS:  1. LONG"
    0x5c8a3f7984c0 ---------A   00030  PRINT " (30 FT.) JUMP SHOT; 2. SHORT (15 FT.) JUMP SHOT; 3. LAY"
    0x5c8a3f797be0 ---------A   00040  PRINT " UP; 4. SET SHOT."
    0x5c8a3f797c90 ---------A   00060  PRINT "BOTH TEAMS WILL USE THE SAME DEFENSE.  CALL DEFENSE AS"
    0x5c8a3f798730 ---------A   00070  PRINT "FOLLOWS:  6. PRESS; 6.5 MAN-TO MAN; 7. ZONE; 7.5 NONE."
    0x5c8a3f79f8a0 ---------A   00072  PRINT "TO CHANGE DEFENSE, JUST TYPE 0 AS YOUR NEXT SHOT."
    0x5c8a3f79fc40 ---------A   00076  INPUT "YOUR STARTING DEFENSE WILL BE";D:IF D<6 THEN 2010
    0x5c8a3f79fca0 ---------A   00079  PRINT
    0x5c8a3f79fe60 ---------A   00080  INPUT "CHOOSE YOUR OPPONENT";O$
    0x5c8a3f79ff80 ---------A T 00370  PRINT "CENTER JUMP"
    0x5c8a3f7a0360 ---------A   00390  IF RND(1)> 3/5 THEN 420
    0x5c8a3f7a0540 ---------A   00400  PRINT O$;" CONTROLS THE TAP."
    0x5c8a3f7a05a0 ---------A   00410  GOTO 3000
    0x5c8a3f7a06b0 ---------A T 00420  PRINT "DARTMOUTH CONTROLS THE TAP."
    0x5c8a3f7a0710 ---------A T 00425  PRINT
    0x5c8a3f7a0950 ---------A T 00430  INPUT "YOUR SHOT";Z
    0x5c8a3f7a0c10 ---------A   00440  P=0
    0x5c8a3f7a0f70 ---------A   00445  IF Z<>INT(Z) THEN 455
    0x5c8a3f7a13f0 ---------A   00446  IF Z<0 OR Z>4 THEN 455
    0x5c8a3f7a1490 ---------A   00447  GOTO 460
    0x5c8a3f7a1680 ---------A T 00455  PRINT "INCORRECT ANSWER.  RETYPE IT. ";:GOTO 430
    0x5c8a3f7a1990 ---------A T 00460  IF RND(1)<.5 THEN 1000
    0x5c8a3f7a1cb0 ---------A   00480  IF T<100 THEN 1000
    0x5c8a3f7a1d40 ---------A   00490  PRINT
    0x5c8a3f7a2230 ---------A   00491  IF S(1)<>S(0) THEN 510
    0x5c8a3f7a2480 ---------A   00492  PRINT:PRINT "   ***** END OF SECOND HALF *****":PRINT
    0x5c8a3f7a2610 ---------A   00493  PRINT "SCORE AT END OF REGULATION TIME:"
    0x5c8a3f7a2df0 ---------A   00494  PRINT "        DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c8a3f7a2e90 ---------A   00495  PRINT
    0x5c8a3f7a3210 ---------A   00496  PRINT "BEGIN TWO MINUTE OVERTIME PERIOD"
    0x5c8a3f7a3430 ---------A   00499  T=93
    0x5c8a3f7a34b0 ---------A   00500  GOTO 370
    0x5c8a3f7a3640 ---------A T 00510  PRINT "   ***** END OF GAME *****"
    0x5c8a3f7a3e30 ---------A   00515  PRINT "FINAL SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c8a3f7a3e90 ---------A   00520  STOP
    0x5c8a3f7a3f30 ---------B G 00600  PRINT
    0x5c8a3f7a40b0 ---------B   00610  PRINT "   *** TWO MINUTES LEFT IN THE GAME ***"
    0x5c8a3f7a4130 ---------B   00620  PRINT
    0x5c8a3f7a4190 ---------B   00630  RETURN
    0x5c8a3f7a4480 ---------A T 01000  ON Z GOTO 1040,1040
    0x5c8a3f7a4500 ---------A   01030  GOTO 1300
    0x5c8a3f7a4830 ---------A T 01040  T=T+1
    0x5c8a3f7a4a80 ---------A   01041  IF T=50 THEN 8000
    0x5c8a3f7a4ce0 ---------A   01042  IF T=92 THEN 1046
    0x5c8a3f7a4d60 ---------A   01043  GOTO 1050
    0x5c8a3f7a4dd0 ---------A T 01046  GOSUB 600
    0x5c8a3f7a4f30 ---------A T 01050  PRINT "JUMP SHOT"
    0x5c8a3f7a5480 ---------A   01060  IF RND(1)>.341*D/8 THEN 1090
    0x5c8a3f7a55e0 ---------A   01070  PRINT "SHOT IS GOOD."
    0x5c8a3f7a5660 ---------A   01075  GOSUB 7000
    0x5c8a3f7a56e0 ---------A   01085  GOTO 3000
    0x5c8a3f7a5c20 ---------A T 01090  IF RND(1)>.682*D/8 THEN 1200
    0x5c8a3f7a5d90 ---------A   01100  PRINT "SHOT IS OFF TARGET."
    0x5c8a3f7a62f0 ---------A   01105  IF D/6*RND(1)>.45 THEN 1130
    0x5c8a3f7a6460 ---------A   01110  PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c8a3f7a64f0 ---------A   01120  GOTO 1145
    0x5c8a3f7a6740 ---------A T 01130  PRINT "REBOUND TO ";O$
    0x5c8a3f7a67d0 ---------A   01140  GOTO 3000
    0x5c8a3f7a6ae0 ---------A T 01145  IF RND(1)>.4 THEN 1158
    0x5c8a3f7a6b60 ---------A   01150  GOTO 1300
    0x5c8a3f7a6dc0 ---------A T 01158  IF D=6 THEN 5100
    0x5c8a3f7a7360 ---------A T 01160  PRINT "BALL PASSED BACK TO YOU. ";
    0x5c8a3f7a73f0 ---------A   01170  GOTO 430
    0x5c8a3f7a7710 ----------   01180  IF RND(1)>.9 THEN 1190
    0x5c8a3f7a7880 ----------   01185  PRINT "PLAYER FOULED, TWO SHOTS."
    0x5c8a3f7a7900 ----------   01187  GOSUB 4000
    0x5c8a3f7a7990 ----------   01188  GOTO 3000
    0x5c8a3f7a7ce0 ---------- T 01190  PRINT "BALL STOLEN. ";O$;"'S BALL."
    0x5c8a3f7a7d70 ----------   01195  GOTO 3000
    0x5c8a3f7a82c0 ---------A T 01200  IF RND(1)>.782*D/8 THEN 1250
    0x5c8a3f7a8460 ---------A   01210  PRINT "SHOT IS BLOCKED.  BALL CONTROLLED BY ";
    0x5c8a3f7a8780 ---------A   01230  IF RND(1)>.5 THEN 1242
    0x5c8a3f7a88e0 ---------A   01235  PRINT "DARTMOUTH."
    0x5c8a3f7a8960 ---------A   01240  GOTO 430
    0x5c8a3f7a8bb0 ---------A T 01242  PRINT O$;"."
    0x5c8a3f7a8c40 ---------A   01245  GOTO 3000
    0x5c8a3f7a9190 ---------A T 01250  IF RND(1)>.843*D/8 THEN 1270
    0x5c8a3f7a9300 ---------A   01255  PRINT "SHOOTER IS FOULED.  TWO SHOTS."
    0x5c8a3f7a9380 ---------A   01260  GOSUB 4000
    0x5c8a3f7a9410 ---------A   01265  GOTO 3000
    0x5c8a3f7a9570 ---------A T 01270  PRINT "CHARGING FOUL.  DARTMOUTH LOSES BALL."
    0x5c8a3f7a95f0 ---------A   01280  GOTO 3000
    0x5c8a3f7a9920 ---------A T 01300  T=T+1
    0x5c8a3f7a9b70 ---------A   01301  IF T=50 THEN 8000
    0x5c8a3f7a9dd0 ---------A   01302  IF T=92 THEN 1304
    0x5c8a3f7a9e50 ---------A   01303  GOTO 1305
    0x5c8a3f7a9ec0 ---------A T 01304  GOSUB 600
    0x5c8a3f7aa110 ---------A T 01305  IF Z=0 THEN 2010
    0x5c8a3f7aa370 ---------A   01310  IF Z>3 THEN 1700
    0x5c8a3f7aa4e0 ---------A   01320  PRINT "LAY UP."
    0x5c8a3f7aaa30 ---------A T 01330  IF 7/D*RND(1)>.4 THEN 1360
    0x5c8a3f7aaba0 ---------A   01340  PRINT "SHOT IS GOOD.  TWO POINTS."
    0x5c8a3f7aac20 ---------A   01345  GOSUB 7000
    0x5c8a3f7aaca0 ---------A   01355  GOTO 3000
    0x5c8a3f7ab1e0 ---------A T 01360  IF 7/D*RND(1)>.7 THEN 1500
    0x5c8a3f7ab350 ---------A   01370  PRINT "SHOT IS OFF THE RIM."
    0x5c8a3f7ab780 ---------A   01380  IF RND(1)>2/3 THEN 1415
    0x5c8a3f7ab9f0 ---------A   01390  PRINT O$;" CONTROLS THE REBOUND."
    0x5c8a3f7aba90 ---------A   01400  GOTO 3000
    0x5c8a3f7abc00 ---------A T 01415  PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c8a3f7abf20 ---------A   01420  IF RND(1)>.4 THEN 1440
    0x5c8a3f7abfb0 ---------A   01430  GOTO 1300
    0x5c8a3f7ac130 ---------A T 01440  PRINT "BALL PASSED BACK TO YOU.";
    0x5c8a3f7ac1c0 ---------A   01450  GOTO 430
    0x5c8a3f7ac710 ---------A T 01500  IF 7/D*RND(1)>.875 THEN 1600
    0x5c8a3f7ac880 ---------A   01510  PRINT "SHOOTER FOULED.  TWO SHOTS."
    0x5c8a3f7ac900 ---------A   01520  GOSUB 4000
    0x5c8a3f7ac980 ---------A   01530  GOTO 3000
    0x5c8a3f7aced0 ---------A T 01600  IF 7/D*RND(1)>.925 THEN 1630
    0x5c8a3f7ad230 ---------A   01610  PRINT "SHOT BLOCKED. ";O$;"'S BALL."
    0x5c8a3f7ad2d0 ---------A   01620  GOTO 3000
    0x5c8a3f7ad440 ---------A T 01630  PRINT "CHARGING FOUL.  DARTMOUTH LOSES THE BALL."
    0x5c8a3f7ad4c0 ---------A   01640  GOTO 3000
    0x5c8a3f7ad610 ---------A T 01700  PRINT "SET SHOT."
    0x5c8a3f7ad6b0 ---------A   01710  GOTO 1330
    0x5c8a3f7ad830 ---------A T 02010  INPUT "YOUR NEW DEFENSIVE ALLIGNMENT IS";D
    0x5c8a3f7ada90 ---------A   02030  IF D<6 THEN 2010
    0x5c8a3f7adb10 ---------A   02040  GOTO 425
    0x5c8a3f7add20 ---------A T 03000  P=1
    0x5c8a3f7ae050 ---------A   03005  T=T+1
    0x5c8a3f7ae2a0 ---------A   03008  IF T=50 THEN 8000
    0x5c8a3f7ae320 ---------A   03012  GOTO 3018
    0x5c8a3f7ae390 ----------   03015  GOSUB 600
    0x5c8a3f7ae400 ---------A T 03018  PRINT
    0x5c8a3f7aeac0 ---------A   03020  Z1=10/4*RND(1)+1
    0x5c8a3f7af520 ---------A   03030  IF Z1>2 THEN 3500
    0x5c8a3f7af690 ---------A   03040  PRINT "JUMP SHOT."
    0x5c8a3f7afbe0 ---------A   03050  IF 8/D*RND(1)>.35 THEN 3100
    0x5c8a3f7afd40 ---------A   03060  PRINT "SHOT IS GOOD."
    0x5c8a3f7afdc0 ---------A   03080  GOSUB 6000
    0x5c8a3f7afe40 ---------A   03090  GOTO 425
    0x5c8a3f7b0380 ---------A T 03100  IF 8/D*RND(1)>.75 THEN 3200
    0x5c8a3f7b04f0 ---------A   03105  PRINT "SHOT IS OFF RIM."
    0x5c8a3f7b0a50 ---------A T 03110  IF D/6*RND(1)>.5 THEN 3150
    0x5c8a3f7b0bc0 ---------A   03120  PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c8a3f7b0c50 ---------A   03130  GOTO 425
    0x5c8a3f7b0eb0 ---------A T 03150  PRINT O$;" CONTROLS THE REBOUND."
    0x5c8a3f7b1120 ---------A   03160  IF D=6 THEN 5000
    0x5c8a3f7b1450 ---------A T 03165  IF RND(1)>.5 THEN 3175
    0x5c8a3f7b17b0 ---------A   03168  PRINT "PASS BACK TO ";O$;" GUARD."
    0x5c8a3f7b1830 ---------A   03170  GOTO 3000
    0x5c8a3f7b18b0 ---------A T 03175  GOTO 3500
    0x5c8a3f7b1df0 ---------A T 03200  IF 8/D*RND(1)>.9 THEN 3310
    0x5c8a3f7b1f60 ---------A   03210  PRINT "PLAYER FOULED.  TWO SHOTS."
    0x5c8a3f7b1fe0 ---------A   03220  GOSUB 4000
    0x5c8a3f7b2070 ---------A   03230  GOTO 425
    0x5c8a3f7b21d0 ---------A T 03310  PRINT "OFFENSIVE FOUL.  DARTMOUTH'S BALL."
    0x5c8a3f7b2250 ---------A   03320  GOTO 425
    0x5c8a3f7b24a0 ---------A T 03500  IF Z1>3 THEN 3800
    0x5c8a3f7b2610 ---------A   03510  PRINT "LAY UP."
    0x5c8a3f7b2b60 ---------A T 03520  IF 7/D*RND(1)>.413 THEN 3600
    0x5c8a3f7b2cc0 ---------A   03530  PRINT "SHOT IS GOOD."
    0x5c8a3f7b2d40 ---------A   03540  GOSUB 6000
    0x5c8a3f7b2dc0 ---------A   03550  GOTO 425
    0x5c8a3f7b2f10 ---------A T 03600  PRINT "SHOT IS MISSED."
    0x5c8a3f7b2f90 ---------A   03610  GOTO 3110
    0x5c8a3f7b30e0 ---------A T 03800  PRINT "SET SHOT."
    0x5c8a3f7b3160 ---------A   03810  GOTO 3520
    0x5c8a3f7b31d0 ---------C G 04000  REM FOUL SHOOTING
    0x5c8a3f7b3520 ---------C   04010  IF RND(1)>.49 THEN 4050
    0x5c8a3f7b3690 ---------C   04020  PRINT "SHOOTER MAKES BOTH SHOTS."
    0x5c8a3f7b3d90 ---------C   04030  S(1-P)=S(1-P)+2
    0x5c8a3f7b3e00 ---------C T 04040  GOSUB 6010
    0x5c8a3f7b3e50 ---------C   04041  RETURN
    0x5c8a3f7b41a0 ---------C T 04050  IF RND(1)>.75 THEN 4100
    0x5c8a3f7b4320 ---------C   04060  PRINT "SHOOTER MAKES ONE SHOT AND MISSES ONE."
    0x5c8a3f7b4a20 ---------C   04070  S(1-P)=S(1-P)+1
    0x5c8a3f7b4aa0 ---------C   04080  GOTO 4040
    0x5c8a3f7b4bf0 ---------C T 04100  PRINT "BOTH SHOTS MISSED."
    0x5c8a3f7b4c80 ---------C   04110  GOTO 4040
    0x5c8a3f7b4f90 ---------A T 05000  IF RND(1)>.75 THEN 5010
    0x5c8a3f7b5030 ---------A   05005  GOTO 3165
    0x5c8a3f7b51a0 ---------A T 05010  PRINT "BALL STOLEN.  EASY LAY UP FOR DARTMOUTH."
    0x5c8a3f7b5220 ---------A   05015  GOSUB 7000
    0x5c8a3f7b52a0 ---------A   05030  GOTO 3000
    0x5c8a3f7b55b0 ---------A T 05100  IF RND(1)>.6 THEN 5120
    0x5c8a3f7b5650 ---------A   05110  GOTO 1160
    0x5c8a3f7b59a0 ---------A T 05120  PRINT "PASS STOLEN BY ";O$;" EASY LAYUP."
    0x5c8a3f7b5a20 ---------A   05130  GOSUB 6000
    0x5c8a3f7b5a90 ---------A   05140  GOTO 425
    0x5c8a3f7b5f50 ---------D G 06000  S(0)=S(0)+2
    0x5c8a3f7b6520 ---------D G 06010  PRINT "SCORE: ";S(1);"TO";S(0)
    0x5c8a3f7b6580 ---------D   06020  RETURN
    0x5c8a3f7b6a40 ---------E G 07000  S(1)=S(1)+2
    0x5c8a3f7b6ab0 ---------E   07010  GOSUB 6010
    0x5c8a3f7b6b00 ---------E   07020  RETURN
    0x5c8a3f7b6d80 ---------A T 08000  PRINT:PRINT "   ***** END OF FIRST HALF *****":PRINT
    0x5c8a3f7b7560 ---------A   08010  PRINT "SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c8a3f7b75e0 ---------A   08015  PRINT
    0x5c8a3f7b7660 ---------A   08016  PRINT
    0x5c8a3f7b76e0 ---------A   08020  GOTO 370
    0x5c8a3f7b7730 ---------A   09999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00370      00500T, 08020T
     00420      00390T
     00425      02040T, 03090T, 03130T, 03230T, 03320T, 03550T, 05140T
     00430      00455T, 01170T, 01240T, 01450T
     00455      00445T, 00446T
     00460      00447T
     00510      00491T
     00600      01046G, 01304G, 03015G
     01000      00460T, 00480T
     01040      01000T, 01000T
     01046      01042T
     01050      01043T
     01090      01060T
     01130      01105T
     01145      01120T
     01158      01145T
     01160      05110T
     01190      01180T
     01200      01090T
     01242      01230T
     01250      01200T
     01270      01250T
     01300      01030T, 01150T, 01430T
     01304      01302T
     01305      01303T
     01330      01710T
     01360      01330T
     01415      01380T
     01440      01420T
     01500      01360T
     01600      01500T
     01630      01600T
     01700      01310T
     02010      00076T, 01305T, 02030T
     03000      00410T, 01085T, 01140T, 01188T, 01195T, 01245T, 01265T, 01280T, 
                01355T, 01400T, 01530T, 01620T, 01640T, 03170T, 05030T
     03018      03012T
     03100      03050T
     03110      03610T
     03150      03110T
     03165      05005T
     03175      03165T
     03200      03100T
     03310      03200T
     03500      03030T, 03175T
     03520      03810T
     03600      03520T
     03800      03500T
     04000      01187G, 01260G, 01520G, 03220G
     04040      04080T, 04110T
     04050      04010T
     04100      04050T
     05000      03160T
     05010      05000T
     05100      01158T
     05120      05100T
     06000      03080G, 03540G, 05130G
     06010      04040G, 07010G
     07000      01075G, 01345G, 05015G
     08000      01041T, 01301T, 03008T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5c8a3f7976d0 (00005)   0x5c8a3f7976d0 (00005)   0x5c8a3f7b7730 (09999)   0x5c8a3f7b7730 (09999)   
   B) 0x5c8a3f7a3f30 (00600)   0x5c8a3f7a3f30 (00600)   0x5c8a3f7a4190 (00630)   0x5c8a3f7a4190 (00630)   
   C) 0x5c8a3f7b31d0 (04000)   0x5c8a3f7b31d0 (04000)   0x5c8a3f7b3e50 (04041)   0x5c8a3f7b4c80 (04110)   
   D) 0x5c8a3f7b5f50 (06000)   0x5c8a3f7b5f50 (06000)   0x5c8a3f7b6580 (06020)   0x5c8a3f7b6580 (06020)   
   E) 0x5c8a3f7b6a40 (07000)   0x5c8a3f7b6a40 (07000)   0x5c8a3f7b6b00 (07020)   0x5c8a3f7b6b00 (07020)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/basketbl.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c8a3f7976d0 ---------A   00005  PRINT TAB(31);"BASKETBALL"
    0x5c8a3f797670 ---------A   00007  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c8a3f7882b0 ----------   00008  PRINT
    0x5c8a3f7979e0 ----------        a PRINT
    0x5c8a3f7977f0 ---------A        b PRINT
    0x5c8a3f799ae0 ---------A   00010  PRINT "THIS IS DARTMOUTH COLLEGE BASKETBALL.  YOU WILL BE DARTMOUTH"
    0x5c8a3f798080 ---------A   00020  PRINT " CAPTAIN AND PLAYMAKER.  CALL SHOTS AS FOLLOWS:  1. LONG"
    0x5c8a3f7984c0 ---------A   00030  PRINT " (30 FT.) JUMP SHOT; 2. SHORT (15 FT.) JUMP SHOT; 3. LAY"
    0x5c8a3f797be0 ---------A   00040  PRINT " UP; 4. SET SHOT."
    0x5c8a3f797c90 ---------A   00060  PRINT "BOTH TEAMS WILL USE THE SAME DEFENSE.  CALL DEFENSE AS"
    0x5c8a3f798730 ---------A   00070  PRINT "FOLLOWS:  6. PRESS; 6.5 MAN-TO MAN; 7. ZONE; 7.5 NONE."
    0x5c8a3f79f8a0 ---------A   00072  PRINT "TO CHANGE DEFENSE, JUST TYPE 0 AS YOUR NEXT SHOT."
    0x5c8a3f79fa20 ----------   00076  INPUT "YOUR STARTING DEFENSE WILL BE";D
    0x5c8a3f79fc40 ---------A        a IF D<6 THEN 2010
    0x5c8a3f79fca0 ---------A   00079  PRINT
    0x5c8a3f79fe60 ---------A   00080  INPUT "CHOOSE YOUR OPPONENT";O$
    0x5c8a3f79ff80 ---------A T 00370  PRINT "CENTER JUMP"
    0x5c8a3f7a0360 ---------A   00390  IF RND(1)> 3/5 THEN 420
    0x5c8a3f7a0540 ---------A   00400  PRINT O$;" CONTROLS THE TAP."
    0x5c8a3f7a05a0 ---------A   00410  GOTO 3000
    0x5c8a3f7a06b0 ---------A T 00420  PRINT "DARTMOUTH CONTROLS THE TAP."
    0x5c8a3f7a0710 ---------A T 00425  PRINT
    0x5c8a3f7a0950 ---------A T 00430  INPUT "YOUR SHOT";Z
    0x5c8a3f7a0c10 ---------A   00440  P=0
    0x5c8a3f7a0f70 ---------A   00445  IF Z<>INT(Z) THEN 455
    0x5c8a3f7a13f0 ---------A   00446  IF Z<0 OR Z>4 THEN 455
    0x5c8a3f7a1490 ---------A   00447  GOTO 460
    0x5c8a3f7a15f0 ---------- T 00455  PRINT "INCORRECT ANSWER.  RETYPE IT. ";
    0x5c8a3f7a1680 ---------A T      a GOTO 430
    0x5c8a3f7a1990 ---------A T 00460  IF RND(1)<.5 THEN 1000
    0x5c8a3f7a1cb0 ---------A   00480  IF T<100 THEN 1000
    0x5c8a3f7a1d40 ---------A   00490  PRINT
    0x5c8a3f7a2230 ---------A   00491  IF S(1)<>S(0) THEN 510
    0x5c8a3f7a2290 ----------   00492  PRINT
    0x5c8a3f7a23e0 ----------        a PRINT "   ***** END OF SECOND HALF *****"
    0x5c8a3f7a2480 ---------A        b PRINT
    0x5c8a3f7a2610 ---------A   00493  PRINT "SCORE AT END OF REGULATION TIME:"
    0x5c8a3f7a2df0 ---------A   00494  PRINT "        DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c8a3f7a2e90 ---------A   00495  PRINT
    0x5c8a3f7a3210 ---------A   00496  PRINT "BEGIN TWO MINUTE OVERTIME PERIOD"
    0x5c8a3f7a3430 ---------A   00499  T=93
    0x5c8a3f7a34b0 ---------A   00500  GOTO 370
    0x5c8a3f7a3640 ---------A T 00510  PRINT "   ***** END OF GAME *****"
    0x5c8a3f7a3e30 ---------A   00515  PRINT "FINAL SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c8a3f7a3e90 ---------A   00520  STOP
    0x5c8a3f7a3f30 ---------B G 00600  PRINT
    0x5c8a3f7a40b0 ---------B   00610  PRINT "   *** TWO MINUTES LEFT IN THE GAME ***"
    0x5c8a3f7a4130 ---------B   00620  PRINT
    0x5c8a3f7a4190 ---------B   00630  RETURN
    0x5c8a3f7a4480 ---------A T 01000  ON Z GOTO 1040,1040
    0x5c8a3f7a4500 ---------A   01030  GOTO 1300
    0x5c8a3f7a4830 ---------A T 01040  T=T+1
    0x5c8a3f7a4a80 ---------A   01041  IF T=50 THEN 8000
    0x5c8a3f7a4ce0 ---------A   01042  IF T=92 THEN 1046
    0x5c8a3f7a4d60 ---------A   01043  GOTO 1050
    0x5c8a3f7a4dd0 ---------A T 01046  GOSUB 600
    0x5c8a3f7a4f30 ---------A T 01050  PRINT "JUMP SHOT"
    0x5c8a3f7a5480 ---------A   01060  IF RND(1)>.341*D/8 THEN 1090
    0x5c8a3f7a55e0 ---------A   01070  PRINT "SHOT IS GOOD."
    0x5c8a3f7a5660 ---------A   01075  GOSUB 7000
    0x5c8a3f7a56e0 ---------A   01085  GOTO 3000
    0x5c8a3f7a5c20 ---------A T 01090  IF RND(1)>.682*D/8 THEN 1200
    0x5c8a3f7a5d90 ---------A   01100  PRINT "SHOT IS OFF TARGET."
    0x5c8a3f7a62f0 ---------A   01105  IF D/6*RND(1)>.45 THEN 1130
    0x5c8a3f7a6460 ---------A   01110  PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c8a3f7a64f0 ---------A   01120  GOTO 1145
    0x5c8a3f7a6740 ---------A T 01130  PRINT "REBOUND TO ";O$
    0x5c8a3f7a67d0 ---------A   01140  GOTO 3000
    0x5c8a3f7a6ae0 ---------A T 01145  IF RND(1)>.4 THEN 1158
    0x5c8a3f7a6b60 ---------A   01150  GOTO 1300
    0x5c8a3f7a6dc0 ---------A T 01158  IF D=6 THEN 5100
    0x5c8a3f7a7360 ---------A T 01160  PRINT "BALL PASSED BACK TO YOU. ";
    0x5c8a3f7a73f0 ---------A   01170  GOTO 430
    0x5c8a3f7a7710 ----------   01180  IF RND(1)>.9 THEN 1190
    0x5c8a3f7a7880 ----------   01185  PRINT "PLAYER FOULED, TWO SHOTS."
    0x5c8a3f7a7900 ----------   01187  GOSUB 4000
    0x5c8a3f7a7990 ----------   01188  GOTO 3000
    0x5c8a3f7a7ce0 ---------- T 01190  PRINT "BALL STOLEN. ";O$;"'S BALL."
    0x5c8a3f7a7d70 ----------   01195  GOTO 3000
    0x5c8a3f7a82c0 ---------A T 01200  IF RND(1)>.782*D/8 THEN 1250
    0x5c8a3f7a8460 ---------A   01210  PRINT "SHOT IS BLOCKED.  BALL CONTROLLED BY ";
    0x5c8a3f7a8780 ---------A   01230  IF RND(1)>.5 THEN 1242
    0x5c8a3f7a88e0 ---------A   01235  PRINT "DARTMOUTH."
    0x5c8a3f7a8960 ---------A   01240  GOTO 430
    0x5c8a3f7a8bb0 ---------A T 01242  PRINT O$;"."
    0x5c8a3f7a8c40 ---------A   01245  GOTO 3000
    0x5c8a3f7a9190 ---------A T 01250  IF RND(1)>.843*D/8 THEN 1270
    0x5c8a3f7a9300 ---------A   01255  PRINT "SHOOTER IS FOULED.  TWO SHOTS."
    0x5c8a3f7a9380 ---------A   01260  GOSUB 4000
    0x5c8a3f7a9410 ---------A   01265  GOTO 3000
    0x5c8a3f7a9570 ---------A T 01270  PRINT "CHARGING FOUL.  DARTMOUTH LOSES BALL."
    0x5c8a3f7a95f0 ---------A   01280  GOTO 3000
    0x5c8a3f7a9920 ---------A T 01300  T=T+1
    0x5c8a3f7a9b70 ---------A   01301  IF T=50 THEN 8000
    0x5c8a3f7a9dd0 ---------A   01302  IF T=92 THEN 1304
    0x5c8a3f7a9e50 ---------A   01303  GOTO 1305
    0x5c8a3f7a9ec0 ---------A T 01304  GOSUB 600
    0x5c8a3f7aa110 ---------A T 01305  IF Z=0 THEN 2010
    0x5c8a3f7aa370 ---------A   01310  IF Z>3 THEN 1700
    0x5c8a3f7aa4e0 ---------A   01320  PRINT "LAY UP."
    0x5c8a3f7aaa30 ---------A T 01330  IF 7/D*RND(1)>.4 THEN 1360
    0x5c8a3f7aaba0 ---------A   01340  PRINT "SHOT IS GOOD.  TWO POINTS."
    0x5c8a3f7aac20 ---------A   01345  GOSUB 7000
    0x5c8a3f7aaca0 ---------A   01355  GOTO 3000
    0x5c8a3f7ab1e0 ---------A T 01360  IF 7/D*RND(1)>.7 THEN 1500
    0x5c8a3f7ab350 ---------A   01370  PRINT "SHOT IS OFF THE RIM."
    0x5c8a3f7ab780 ---------A   01380  IF RND(1)>2/3 THEN 1415
    0x5c8a3f7ab9f0 ---------A   01390  PRINT O$;" CONTROLS THE REBOUND."
    0x5c8a3f7aba90 ---------A   01400  GOTO 3000
    0x5c8a3f7abc00 ---------A T 01415  PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c8a3f7abf20 ---------A   01420  IF RND(1)>.4 THEN 1440
    0x5c8a3f7abfb0 ---------A   01430  GOTO 1300
    0x5c8a3f7ac130 ---------A T 01440  PRINT "BALL PASSED BACK TO YOU.";
    0x5c8a3f7ac1c0 ---------A   01450  GOTO 430
    0x5c8a3f7ac710 ---------A T 01500  IF 7/D*RND(1)>.875 THEN 1600
    0x5c8a3f7ac880 ---------A   01510  PRINT "SHOOTER FOULED.  TWO SHOTS."
    0x5c8a3f7ac900 ---------A   01520  GOSUB 4000
    0x5c8a3f7ac980 ---------A   01530  GOTO 3000
    0x5c8a3f7aced0 ---------A T 01600  IF 7/D*RND(1)>.925 THEN 1630
    0x5c8a3f7ad230 ---------A   01610  PRINT "SHOT BLOCKED. ";O$;"'S BALL."
    0x5c8a3f7ad2d0 ---------A   01620  GOTO 3000
    0x5c8a3f7ad440 ---------A T 01630  PRINT "CHARGING FOUL.  DARTMOUTH LOSES THE BALL."
    0x5c8a3f7ad4c0 ---------A   01640  GOTO 3000
    0x5c8a3f7ad610 ---------A T 01700  PRINT "SET SHOT."
    0x5c8a3f7ad6b0 ---------A   01710  GOTO 1330
    0x5c8a3f7ad830 ---------A T 02010  INPUT "YOUR NEW DEFENSIVE ALLIGNMENT IS";D
    0x5c8a3f7ada90 ---------A   02030  IF D<6 THEN 2010
    0x5c8a3f7adb10 ---------A   02040  GOTO 425
    0x5c8a3f7add20 ---------A T 03000  P=1
    0x5c8a3f7ae050 ---------A   03005  T=T+1
    0x5c8a3f7ae2a0 ---------A   03008  IF T=50 THEN 8000
    0x5c8a3f7ae320 ---------A   03012  GOTO 3018
    0x5c8a3f7ae390 ----------   03015  GOSUB 600
    0x5c8a3f7ae400 ---------A T 03018  PRINT
    0x5c8a3f7aeac0 ---------A   03020  Z1=10/4*RND(1)+1
    0x5c8a3f7af520 ---------A   03030  IF Z1>2 THEN 3500
    0x5c8a3f7af690 ---------A   03040  PRINT "JUMP SHOT."
    0x5c8a3f7afbe0 ---------A   03050  IF 8/D*RND(1)>.35 THEN 3100
    0x5c8a3f7afd40 ---------A   03060  PRINT "SHOT IS GOOD."
    0x5c8a3f7afdc0 ---------A   03080  GOSUB 6000
    0x5c8a3f7afe40 ---------A   03090  GOTO 425
    0x5c8a3f7b0380 ---------A T 03100  IF 8/D*RND(1)>.75 THEN 3200
    0x5c8a3f7b04f0 ---------A   03105  PRINT "SHOT IS OFF RIM."
    0x5c8a3f7b0a50 ---------A T 03110  IF D/6*RND(1)>.5 THEN 3150
    0x5c8a3f7b0bc0 ---------A   03120  PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c8a3f7b0c50 ---------A   03130  GOTO 425
    0x5c8a3f7b0eb0 ---------A T 03150  PRINT O$;" CONTROLS THE REBOUND."
    0x5c8a3f7b1120 ---------A   03160  IF D=6 THEN 5000
    0x5c8a3f7b1450 ---------A T 03165  IF RND(1)>.5 THEN 3175
    0x5c8a3f7b17b0 ---------A   03168  PRINT "PASS BACK TO ";O$;" GUARD."
    0x5c8a3f7b1830 ---------A   03170  GOTO 3000
    0x5c8a3f7b18b0 ---------A T 03175  GOTO 3500
    0x5c8a3f7b1df0 ---------A T 03200  IF 8/D*RND(1)>.9 THEN 3310
    0x5c8a3f7b1f60 ---------A   03210  PRINT "PLAYER FOULED.  TWO SHOTS."
    0x5c8a3f7b1fe0 ---------A   03220  GOSUB 4000
    0x5c8a3f7b2070 ---------A   03230  GOTO 425
    0x5c8a3f7b21d0 ---------A T 03310  PRINT "OFFENSIVE FOUL.  DARTMOUTH'S BALL."
    0x5c8a3f7b2250 ---------A   03320  GOTO 425
    0x5c8a3f7b24a0 ---------A T 03500  IF Z1>3 THEN 3800
    0x5c8a3f7b2610 ---------A   03510  PRINT "LAY UP."
    0x5c8a3f7b2b60 ---------A T 03520  IF 7/D*RND(1)>.413 THEN 3600
    0x5c8a3f7b2cc0 ---------A   03530  PRINT "SHOT IS GOOD."
    0x5c8a3f7b2d40 ---------A   03540  GOSUB 6000
    0x5c8a3f7b2dc0 ---------A   03550  GOTO 425
    0x5c8a3f7b2f10 ---------A T 03600  PRINT "SHOT IS MISSED."
    0x5c8a3f7b2f90 ---------A   03610  GOTO 3110
    0x5c8a3f7b30e0 ---------A T 03800  PRINT "SET SHOT."
    0x5c8a3f7b3160 ---------A   03810  GOTO 3520
    0x5c8a3f7b31d0 ---------C G 04000  REM FOUL SHOOTING
    0x5c8a3f7b3520 ---------C   04010  IF RND(1)>.49 THEN 4050
    0x5c8a3f7b3690 ---------C   04020  PRINT "SHOOTER MAKES BOTH SHOTS."
    0x5c8a3f7b3d90 ---------C   04030  S(1-P)=S(1-P)+2
    0x5c8a3f7b3e00 ---------C T 04040  GOSUB 6010
    0x5c8a3f7b3e50 ---------C   04041  RETURN
    0x5c8a3f7b41a0 ---------C T 04050  IF RND(1)>.75 THEN 4100
    0x5c8a3f7b4320 ---------C   04060  PRINT "SHOOTER MAKES ONE SHOT AND MISSES ONE."
    0x5c8a3f7b4a20 ---------C   04070  S(1-P)=S(1-P)+1
    0x5c8a3f7b4aa0 ---------C   04080  GOTO 4040
    0x5c8a3f7b4bf0 ---------C T 04100  PRINT "BOTH SHOTS MISSED."
    0x5c8a3f7b4c80 ---------C   04110  GOTO 4040
    0x5c8a3f7b4f90 ---------A T 05000  IF RND(1)>.75 THEN 5010
    0x5c8a3f7b5030 ---------A   05005  GOTO 3165
    0x5c8a3f7b51a0 ---------A T 05010  PRINT "BALL STOLEN.  EASY LAY UP FOR DARTMOUTH."
    0x5c8a3f7b5220 ---------A   05015  GOSUB 7000
    0x5c8a3f7b52a0 ---------A   05030  GOTO 3000
    0x5c8a3f7b55b0 ---------A T 05100  IF RND(1)>.6 THEN 5120
    0x5c8a3f7b5650 ---------A   05110  GOTO 1160
    0x5c8a3f7b59a0 ---------A T 05120  PRINT "PASS STOLEN BY ";O$;" EASY LAYUP."
    0x5c8a3f7b5a20 ---------A   05130  GOSUB 6000
    0x5c8a3f7b5a90 ---------A   05140  GOTO 425
    0x5c8a3f7b5f50 ---------D G 06000  S(0)=S(0)+2
    0x5c8a3f7b6520 ---------D G 06010  PRINT "SCORE: ";S(1);"TO";S(0)
    0x5c8a3f7b6580 ---------D   06020  RETURN
    0x5c8a3f7b6a40 ---------E G 07000  S(1)=S(1)+2
    0x5c8a3f7b6ab0 ---------E   07010  GOSUB 6010
    0x5c8a3f7b6b00 ---------E   07020  RETURN
    0x5c8a3f7b6b90 ---------- T 08000  PRINT
    0x5c8a3f7b6ce0 ---------- T      a PRINT "   ***** END OF FIRST HALF *****"
    0x5c8a3f7b6d80 ---------A T      b PRINT
    0x5c8a3f7b7560 ---------A   08010  PRINT "SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c8a3f7b75e0 ---------A   08015  PRINT
    0x5c8a3f7b7660 ---------A   08016  PRINT
    0x5c8a3f7b76e0 ---------A   08020  GOTO 370
    0x5c8a3f7b7730 ---------A   09999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/basketbl.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c8a3f7976d0 ---------A T 01000  PRINT TAB(31);"BASKETBALL"
    0x5c8a3f797670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c8a3f7882b0 ----------   01020  PRINT
    0x5c8a3f7979e0 ----------   01030  PRINT
    0x5c8a3f7977f0 ---------A T 01040  PRINT
    0x5c8a3f799ae0 ---------A T 01050  PRINT "THIS IS DARTMOUTH COLLEGE BASKETBALL.  YOU WILL BE DARTMOUTH"
    0x5c8a3f798080 ---------A   01060  PRINT " CAPTAIN AND PLAYMAKER.  CALL SHOTS AS FOLLOWS:  1. LONG"
    0x5c8a3f7984c0 ---------A   01070  PRINT " (1070 FT.) JUMP SHOT; 2. SHORT (15 FT.) JUMP SHOT; 3. LAY"
    0x5c8a3f797be0 ---------A   01080  PRINT " UP; 4. SET SHOT."
    0x5c8a3f797c90 ---------A T 01090  PRINT "BOTH TEAMS WILL USE THE SAME DEFENSE.  CALL DEFENSE AS"
    0x5c8a3f798730 ---------A   01100  PRINT "FOLLOWS:  6. PRESS; 6.5 MAN-TO MAN; 7. ZONE; 7.5 NONE."
    0x5c8a3f79f8a0 ---------A   01110  PRINT "TO CHANGE DEFENSE, JUST TYPE 0 AS YOUR NEXT SHOT."
    0x5c8a3f79fa20 ----------   01120  INPUT "YOUR STARTING DEFENSE WILL BE";D
    0x5c8a3f79fc40 ---------A T 01130  IF D<6 THEN 2250
    0x5c8a3f79fca0 ---------A   01140  PRINT
    0x5c8a3f79fe60 ---------A   01150  INPUT "CHOOSE YOUR OPPONENT";O$
    0x5c8a3f79ff80 ---------A T 01160  PRINT "CENTER JUMP"
    0x5c8a3f7a0360 ---------A   01170  IF RND(1)> 3/5 THEN 1200
    0x5c8a3f7a0540 ---------A   01180  PRINT O$;" CONTROLS THE TAP."
    0x5c8a3f7a05a0 ---------A T 01190  GOTO 2280
    0x5c8a3f7a06b0 ---------A T 01200  PRINT "DARTMOUTH CONTROLS THE TAP."
    0x5c8a3f7a0710 ---------A   01210  PRINT
    0x5c8a3f7a0950 ---------A   01220  INPUT "YOUR SHOT";Z
    0x5c8a3f7a0c10 ---------A   01230  P=0
    0x5c8a3f7a0f70 ---------A   01240  IF Z<>INT(Z) THEN 1280
    0x5c8a3f7a13f0 ---------A T 01250  IF Z<0 OR Z>4 THEN 1280
    0x5c8a3f7a1490 ---------A   01260  GOTO 1290
    0x5c8a3f7a15f0 ---------- T 01270  PRINT "INCORRECT ANSWER.  RETYPE IT. ";
    0x5c8a3f7a1680 ---------A   01280  GOTO 1220
    0x5c8a3f7a1990 ---------A   01290  IF RND(1)<.5 THEN 1490
    0x5c8a3f7a1cb0 ---------A T 01300  IF T<100 THEN 1490
    0x5c8a3f7a1d40 ---------A   01310  PRINT
    0x5c8a3f7a2230 ---------A   01320  IF S(1)<>S(0) THEN 1420
    0x5c8a3f7a2290 ---------- T 01330  PRINT
    0x5c8a3f7a23e0 ----------   01340  PRINT "   ***** END OF SECOND HALF *****"
    0x5c8a3f7a2480 ---------A   01350  PRINT
    0x5c8a3f7a2610 ---------A T 01360  PRINT "SCORE AT END OF REGULATION TIME:"
    0x5c8a3f7a2df0 ---------A   01370  PRINT "        DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c8a3f7a2e90 ---------A   01380  PRINT
    0x5c8a3f7a3210 ---------A   01390  PRINT "BEGIN TWO MINUTE OVERTIME PERIOD"
    0x5c8a3f7a3430 ---------A   01400  T=93
    0x5c8a3f7a34b0 ---------A   01410  GOTO 1160
    0x5c8a3f7a3640 ---------A   01420  PRINT "   ***** END OF GAME *****"
    0x5c8a3f7a3e30 ---------A   01430  PRINT "FINAL SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c8a3f7a3e90 ---------A T 01440  STOP
    0x5c8a3f7a3f30 ---------B   01450  PRINT
    0x5c8a3f7a40b0 ---------B   01460  PRINT "   *** TWO MINUTES LEFT IN THE GAME ***"
    0x5c8a3f7a4130 ---------B   01470  PRINT
    0x5c8a3f7a4190 ---------B   01480  RETURN
    0x5c8a3f7a4480 ---------A   01490  ON Z GOTO 1510,1510
    0x5c8a3f7a4500 ---------A T 01500  GOTO 1920
    0x5c8a3f7a4830 ---------A   01510  T=T+1
    0x5c8a3f7a4a80 ---------A   01520  IF T=50 THEN 2980
    0x5c8a3f7a4ce0 ---------A   01530  IF T=92 THEN 1550
    0x5c8a3f7a4d60 ---------A   01540  GOTO 1560
    0x5c8a3f7a4dd0 ---------A   01550  GOSUB 1450
    0x5c8a3f7a4f30 ---------A   01560  PRINT "JUMP SHOT"
    0x5c8a3f7a5480 ---------A   01570  IF RND(1)>.341*D/8 THEN 1610
    0x5c8a3f7a55e0 ---------A   01580  PRINT "SHOT IS GOOD."
    0x5c8a3f7a5660 ---------A   01590  GOSUB 2930
    0x5c8a3f7a56e0 ---------A T 01600  GOTO 2280
    0x5c8a3f7a5c20 ---------A   01610  IF RND(1)>.682*D/8 THEN 1790
    0x5c8a3f7a5d90 ---------A   01620  PRINT "SHOT IS OFF TARGET."
    0x5c8a3f7a62f0 ---------A T 01630  IF D/6*RND(1)>.45 THEN 1660
    0x5c8a3f7a6460 ---------A   01640  PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c8a3f7a64f0 ---------A   01650  GOTO 1680
    0x5c8a3f7a6740 ---------A   01660  PRINT "REBOUND TO ";O$
    0x5c8a3f7a67d0 ---------A   01670  GOTO 2280
    0x5c8a3f7a6ae0 ---------A   01680  IF RND(1)>.4 THEN 1700
    0x5c8a3f7a6b60 ---------A   01690  GOTO 1920
    0x5c8a3f7a6dc0 ---------A T 01700  IF D=6 THEN 2850
    0x5c8a3f7a7360 ---------A   01710  PRINT "BALL PASSED BACK TO YOU. ";
    0x5c8a3f7a73f0 ---------A   01720  GOTO 1220
    0x5c8a3f7a7710 ----------   01730  IF RND(1)>.9 THEN 1770
    0x5c8a3f7a7880 ----------   01740  PRINT "PLAYER FOULED, TWO SHOTS."
    0x5c8a3f7a7900 ----------   01750  GOSUB 2680
    0x5c8a3f7a7990 ----------   01760  GOTO 2280
    0x5c8a3f7a7ce0 ----------   01770  PRINT "BALL STOLEN. ";O$;"'S BALL."
    0x5c8a3f7a7d70 ----------   01780  GOTO 2280
    0x5c8a3f7a82c0 ---------A   01790  IF RND(1)>.782*D/8 THEN 1860
    0x5c8a3f7a8460 ---------A   01800  PRINT "SHOT IS BLOCKED.  BALL CONTROLLED BY ";
    0x5c8a3f7a8780 ---------A   01810  IF RND(1)>.5 THEN 1840
    0x5c8a3f7a88e0 ---------A   01820  PRINT "DARTMOUTH."
    0x5c8a3f7a8960 ---------A   01830  GOTO 1220
    0x5c8a3f7a8bb0 ---------A   01840  PRINT O$;"."
    0x5c8a3f7a8c40 ---------A   01850  GOTO 2280
    0x5c8a3f7a9190 ---------A   01860  IF RND(1)>.843*D/8 THEN 1900
    0x5c8a3f7a9300 ---------A   01870  PRINT "SHOOTER IS FOULED.  TWO SHOTS."
    0x5c8a3f7a9380 ---------A   01880  GOSUB 2680
    0x5c8a3f7a9410 ---------A   01890  GOTO 2280
    0x5c8a3f7a9570 ---------A   01900  PRINT "CHARGING FOUL.  DARTMOUTH LOSES BALL."
    0x5c8a3f7a95f0 ---------A   01910  GOTO 2280
    0x5c8a3f7a9920 ---------A   01920  T=T+1
    0x5c8a3f7a9b70 ---------A   01930  IF T=50 THEN 2980
    0x5c8a3f7a9dd0 ---------A   01940  IF T=92 THEN 1960
    0x5c8a3f7a9e50 ---------A   01950  GOTO 1970
    0x5c8a3f7a9ec0 ---------A   01960  GOSUB 1450
    0x5c8a3f7aa110 ---------A   01970  IF Z=0 THEN 2250
    0x5c8a3f7aa370 ---------A   01980  IF Z>3 THEN 2230
    0x5c8a3f7aa4e0 ---------A   01990  PRINT "LAY UP."
    0x5c8a3f7aaa30 ---------A   02000  IF 7/D*RND(1)>.4 THEN 2040
    0x5c8a3f7aaba0 ---------A T 02010  PRINT "SHOT IS GOOD.  TWO POINTS."
    0x5c8a3f7aac20 ---------A   02020  GOSUB 2930
    0x5c8a3f7aaca0 ---------A   02030  GOTO 2280
    0x5c8a3f7ab1e0 ---------A   02040  IF 7/D*RND(1)>.7 THEN 2140
    0x5c8a3f7ab350 ---------A   02050  PRINT "SHOT IS OFF THE RIM."
    0x5c8a3f7ab780 ---------A   02060  IF RND(1)>2/3 THEN 2090
    0x5c8a3f7ab9f0 ---------A   02070  PRINT O$;" CONTROLS THE REBOUND."
    0x5c8a3f7aba90 ---------A   02080  GOTO 2280
    0x5c8a3f7abc00 ---------A   02090  PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c8a3f7abf20 ---------A   02100  IF RND(1)>.4 THEN 2120
    0x5c8a3f7abfb0 ---------A   02110  GOTO 1920
    0x5c8a3f7ac130 ---------A   02120  PRINT "BALL PASSED BACK TO YOU.";
    0x5c8a3f7ac1c0 ---------A   02130  GOTO 1220
    0x5c8a3f7ac710 ---------A   02140  IF 7/D*RND(1)>.875 THEN 2180
    0x5c8a3f7ac880 ---------A   02150  PRINT "SHOOTER FOULED.  TWO SHOTS."
    0x5c8a3f7ac900 ---------A   02160  GOSUB 2680
    0x5c8a3f7ac980 ---------A   02170  GOTO 2280
    0x5c8a3f7aced0 ---------A   02180  IF 7/D*RND(1)>.925 THEN 2210
    0x5c8a3f7ad230 ---------A   02190  PRINT "SHOT BLOCKED. ";O$;"'S BALL."
    0x5c8a3f7ad2d0 ---------A   02200  GOTO 2280
    0x5c8a3f7ad440 ---------A   02210  PRINT "CHARGING FOUL.  DARTMOUTH LOSES THE BALL."
    0x5c8a3f7ad4c0 ---------A   02220  GOTO 2280
    0x5c8a3f7ad610 ---------A   02230  PRINT "SET SHOT."
    0x5c8a3f7ad6b0 ---------A   02240  GOTO 2000
    0x5c8a3f7ad830 ---------A   02250  INPUT "YOUR NEW DEFENSIVE ALLIGNMENT IS";D
    0x5c8a3f7ada90 ---------A   02260  IF D<6 THEN 2250
    0x5c8a3f7adb10 ---------A   02270  GOTO 1210
    0x5c8a3f7add20 ---------A   02280  P=1
    0x5c8a3f7ae050 ---------A   02290  T=T+1
    0x5c8a3f7ae2a0 ---------A   02300  IF T=50 THEN 2980
    0x5c8a3f7ae320 ---------A   02310  GOTO 2330
    0x5c8a3f7ae390 ----------   02320  GOSUB 1450
    0x5c8a3f7ae400 ---------A   02330  PRINT
    0x5c8a3f7aeac0 ---------A   02340  Z1=10/4*RND(1)+1
    0x5c8a3f7af520 ---------A   02350  IF Z1>2 THEN 2580
    0x5c8a3f7af690 ---------A   02360  PRINT "JUMP SHOT."
    0x5c8a3f7afbe0 ---------A   02370  IF 8/D*RND(1)>.35 THEN 2410
    0x5c8a3f7afd40 ---------A   02380  PRINT "SHOT IS GOOD."
    0x5c8a3f7afdc0 ---------A   02390  GOSUB 2900
    0x5c8a3f7afe40 ---------A   02400  GOTO 1210
    0x5c8a3f7b0380 ---------A   02410  IF 8/D*RND(1)>.75 THEN 2520
    0x5c8a3f7b04f0 ---------A   02420  PRINT "SHOT IS OFF RIM."
    0x5c8a3f7b0a50 ---------A   02430  IF D/6*RND(1)>.5 THEN 2460
    0x5c8a3f7b0bc0 ---------A   02440  PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c8a3f7b0c50 ---------A   02450  GOTO 1210
    0x5c8a3f7b0eb0 ---------A   02460  PRINT O$;" CONTROLS THE REBOUND."
    0x5c8a3f7b1120 ---------A   02470  IF D=6 THEN 2800
    0x5c8a3f7b1450 ---------A   02480  IF RND(1)>.5 THEN 2510
    0x5c8a3f7b17b0 ---------A   02490  PRINT "PASS BACK TO ";O$;" GUARD."
    0x5c8a3f7b1830 ---------A   02500  GOTO 2280
    0x5c8a3f7b18b0 ---------A   02510  GOTO 2580
    0x5c8a3f7b1df0 ---------A   02520  IF 8/D*RND(1)>.9 THEN 2560
    0x5c8a3f7b1f60 ---------A   02530  PRINT "PLAYER FOULED.  TWO SHOTS."
    0x5c8a3f7b1fe0 ---------A   02540  GOSUB 2680
    0x5c8a3f7b2070 ---------A   02550  GOTO 1210
    0x5c8a3f7b21d0 ---------A   02560  PRINT "OFFENSIVE FOUL.  DARTMOUTH'S BALL."
    0x5c8a3f7b2250 ---------A   02570  GOTO 1210
    0x5c8a3f7b24a0 ---------A   02580  IF Z1>3 THEN 2660
    0x5c8a3f7b2610 ---------A   02590  PRINT "LAY UP."
    0x5c8a3f7b2b60 ---------A   02600  IF 7/D*RND(1)>.413 THEN 2640
    0x5c8a3f7b2cc0 ---------A   02610  PRINT "SHOT IS GOOD."
    0x5c8a3f7b2d40 ---------A   02620  GOSUB 2900
    0x5c8a3f7b2dc0 ---------A   02630  GOTO 1210
    0x5c8a3f7b2f10 ---------A   02640  PRINT "SHOT IS MISSED."
    0x5c8a3f7b2f90 ---------A   02650  GOTO 2430
    0x5c8a3f7b30e0 ---------A   02660  PRINT "SET SHOT."
    0x5c8a3f7b3160 ---------A   02670  GOTO 2600
    0x5c8a3f7b31d0 ---------C   02680  REM FOUL SHOOTING
    0x5c8a3f7b3520 ---------C   02690  IF RND(1)>.49 THEN 2740
    0x5c8a3f7b3690 ---------C   02700  PRINT "SHOOTER MAKES BOTH SHOTS."
    0x5c8a3f7b3d90 ---------C   02710  S(1-P)=S(1-P)+2
    0x5c8a3f7b3e00 ---------C   02720  GOSUB 2910
    0x5c8a3f7b3e50 ---------C   02730  RETURN
    0x5c8a3f7b41a0 ---------C   02740  IF RND(1)>.75 THEN 2780
    0x5c8a3f7b4320 ---------C   02750  PRINT "SHOOTER MAKES ONE SHOT AND MISSES ONE."
    0x5c8a3f7b4a20 ---------C   02760  S(1-P)=S(1-P)+1
    0x5c8a3f7b4aa0 ---------C   02770  GOTO 2720
    0x5c8a3f7b4bf0 ---------C   02780  PRINT "BOTH SHOTS MISSED."
    0x5c8a3f7b4c80 ---------C   02790  GOTO 2720
    0x5c8a3f7b4f90 ---------A   02800  IF RND(1)>.75 THEN 2820
    0x5c8a3f7b5030 ---------A   02810  GOTO 2480
    0x5c8a3f7b51a0 ---------A   02820  PRINT "BALL STOLEN.  EASY LAY UP FOR DARTMOUTH."
    0x5c8a3f7b5220 ---------A   02830  GOSUB 2930
    0x5c8a3f7b52a0 ---------A   02840  GOTO 2280
    0x5c8a3f7b55b0 ---------A   02850  IF RND(1)>.6 THEN 2870
    0x5c8a3f7b5650 ---------A   02860  GOTO 1710
    0x5c8a3f7b59a0 ---------A   02870  PRINT "PASS STOLEN BY ";O$;" EASY LAYUP."
    0x5c8a3f7b5a20 ---------A   02880  GOSUB 2900
    0x5c8a3f7b5a90 ---------A   02890  GOTO 1210
    0x5c8a3f7b5f50 ---------D   02900  S(0)=S(0)+2
    0x5c8a3f7b6520 ---------D   02910  PRINT "SCORE: ";S(1);"TO";S(0)
    0x5c8a3f7b6580 ---------D   02920  RETURN
    0x5c8a3f7b6a40 ---------E   02930  S(1)=S(1)+2
    0x5c8a3f7b6ab0 ---------E   02940  GOSUB 2910
    0x5c8a3f7b6b00 ---------E   02950  RETURN
    0x5c8a3f7b6b90 ----------   02960  PRINT
    0x5c8a3f7b6ce0 ----------   02970  PRINT "   ***** END OF FIRST HALF *****"
    0x5c8a3f7b6d80 ---------A   02980  PRINT
    0x5c8a3f7b7560 ---------A   02990  PRINT "SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c8a3f7b75e0 ---------A T 03000  PRINT
    0x5c8a3f7b7660 ---------A   03010  PRINT
    0x5c8a3f7b76e0 ---------A   03020  GOTO 1160
    0x5c8a3f7b7730 ---------A   03030  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02980 - 10000    7030 

 */



/*
 *  Symbol Table Listing for 'basic/basketbl.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
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
    O$                       String      
    OCT$            Function String          args=1, float  
    P                        Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,9} 
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    Z                        Integer     
    Z1                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/basketbl.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c8a3f7976d0 ---------A   01000  PRINT TAB(31);"BASKETBALL"
    0x5c8a3f797670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c8a3f7882b0 ---------A   01020  PRINT
    0x5c8a3f7979e0 ---------A   01030  PRINT
    0x5c8a3f7977f0 ---------A   01040  PRINT
    0x5c8a3f799ae0 ---------A   01050  PRINT "THIS IS DARTMOUTH COLLEGE BASKETBALL.  YOU WILL BE DARTMOUTH"
    0x5c8a3f798080 ---------A   01060  PRINT " CAPTAIN AND PLAYMAKER.  CALL SHOTS AS FOLLOWS:  1. LONG"
    0x5c8a3f7984c0 ---------A   01070  PRINT " (1070 FT.) JUMP SHOT; 2. SHORT (15 FT.) JUMP SHOT; 3. LAY"
    0x5c8a3f797be0 ---------A   01080  PRINT " UP; 4. SET SHOT."
    0x5c8a3f797c90 ---------A   01090  PRINT "BOTH TEAMS WILL USE THE SAME DEFENSE.  CALL DEFENSE AS"
    0x5c8a3f798730 ---------A   01100  PRINT "FOLLOWS:  6. PRESS; 6.5 MAN-TO MAN; 7. ZONE; 7.5 NONE."
    0x5c8a3f79f8a0 ---------A   01110  PRINT "TO CHANGE DEFENSE, JUST TYPE 0 AS YOUR NEXT SHOT."
    0x5c8a3f79fa20 ---------A   01120  INPUT "YOUR STARTING DEFENSE WILL BE";D
    0x5c8a3f79fc40 ---------A   01130  IF D<6 THEN 2140
    0x5c8a3f79fca0 ---------A   01140  PRINT
    0x5c8a3f79fe60 ---------A   01150  INPUT "CHOOSE YOUR OPPONENT";O$
    0x5c8a3f79ff80 ---------A T 01160  PRINT "CENTER JUMP"
    0x5c8a3f7a0360 ---------A   01170  IF RND(1)> 3/5 THEN 1200
    0x5c8a3f7a0540 ---------A   01180  PRINT O$;" CONTROLS THE TAP."
    0x5c8a3f7a05a0 ---------A   01190  GOTO 2170
    0x5c8a3f7a06b0 ---------A T 01200  PRINT "DARTMOUTH CONTROLS THE TAP."
    0x5c8a3f7a0710 ---------A T 01210  PRINT
    0x5c8a3f7a0950 ---------A T 01220  INPUT "YOUR SHOT";Z
    0x5c8a3f7a0c10 ---------A   01230  P=0
    0x5c8a3f7a0f70 ---------A   01240  IF Z<>INT(Z) THEN 1270
    0x5c8a3f7a13f0 ---------A   01250  IF Z<0 OR Z>4 THEN 1270
    0x5c8a3f7a1490 ---------A   01260  GOTO 1280
    0x5c8a3f7a1680 ---------A T 01270  GOTO 1220
    0x5c8a3f7a1990 ---------A T 01280  IF RND(1)<.5 THEN 1440
    0x5c8a3f7a1cb0 ---------A   01290  IF T<100 THEN 1440
    0x5c8a3f7a1d40 ---------A   01300  PRINT
    0x5c8a3f7a2230 ---------A   01310  IF S(1)<>S(0) THEN 1410
    0x5c8a3f7a2290 ---------A   01320  PRINT
    0x5c8a3f7a23e0 ---------A   01330  PRINT "   ***** END OF SECOND HALF *****"
    0x5c8a3f7a2480 ---------A   01340  PRINT
    0x5c8a3f7a2610 ---------A   01350  PRINT "SCORE AT END OF REGULATION TIME:"
    0x5c8a3f7a2df0 ---------A   01360  PRINT "        DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c8a3f7a2e90 ---------A   01370  PRINT
    0x5c8a3f7a3210 ---------A   01380  PRINT "BEGIN TWO MINUTE OVERTIME PERIOD"
    0x5c8a3f7a3430 ---------A   01390  T=93
    0x5c8a3f7a34b0 ---------A   01400  GOTO 1160
    0x5c8a3f7a3640 ---------A T 01410  PRINT "   ***** END OF GAME *****"
    0x5c8a3f7a3e30 ---------A   01420  PRINT "FINAL SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c8a3f7a3e90 ---------A   01430  STOP
    0x5c8a3f7a4480 ---------A T 01440  ON Z GOTO 1460,1460
    0x5c8a3f7a4500 ---------A   01450  GOTO 1810
    0x5c8a3f7a4830 ---------A T 01460  T=T+1
    0x5c8a3f7a4a80 ---------A   01470  IF T=50 THEN 2660
    0x5c8a3f7a4ce0 ---------A   01480  IF T=92 THEN 1500
    0x5c8a3f7a4d60 ---------A   01490  GOTO 1510
    0x5c8a3f7a4dd0 ---------A T 01500  GOSUB 2720
    0x5c8a3f7a4f30 ---------A T 01510  PRINT "JUMP SHOT"
    0x5c8a3f7a5480 ---------A   01520  IF RND(1)>.341*D/8 THEN 1560
    0x5c8a3f7a55e0 ---------A   01530  PRINT "SHOT IS GOOD."
    0x5c8a3f7a5660 ---------A   01540  GOSUB 2940
    0x5c8a3f7a56e0 ---------A   01550  GOTO 2170
    0x5c8a3f7a5c20 ---------A T 01560  IF RND(1)>.682*D/8 THEN 1680
    0x5c8a3f7a5d90 ---------A   01570  PRINT "SHOT IS OFF TARGET."
    0x5c8a3f7a62f0 ---------A   01580  IF D/6*RND(1)>.45 THEN 1610
    0x5c8a3f7a6460 ---------A   01590  PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c8a3f7a64f0 ---------A   01600  GOTO 1630
    0x5c8a3f7a6740 ---------A T 01610  PRINT "REBOUND TO ";O$
    0x5c8a3f7a67d0 ---------A   01620  GOTO 2170
    0x5c8a3f7a6ae0 ---------A T 01630  IF RND(1)>.4 THEN 1650
    0x5c8a3f7a6b60 ---------A   01640  GOTO 1810
    0x5c8a3f7a6dc0 ---------A T 01650  IF D=6 THEN 2610
    0x5c8a3f7a7360 ---------A T 01660  PRINT "BALL PASSED BACK TO YOU. ";
    0x5c8a3f7a73f0 ---------A   01670  GOTO 1220
    0x5c8a3f7a82c0 ---------A T 01680  IF RND(1)>.782*D/8 THEN 1750
    0x5c8a3f7a8460 ---------A   01690  PRINT "SHOT IS BLOCKED.  BALL CONTROLLED BY ";
    0x5c8a3f7a8780 ---------A   01700  IF RND(1)>.5 THEN 1730
    0x5c8a3f7a88e0 ---------A   01710  PRINT "DARTMOUTH."
    0x5c8a3f7a8960 ---------A   01720  GOTO 1220
    0x5c8a3f7a8bb0 ---------A T 01730  PRINT O$;"."
    0x5c8a3f7a8c40 ---------A   01740  GOTO 2170
    0x5c8a3f7a9190 ---------A T 01750  IF RND(1)>.843*D/8 THEN 1790
    0x5c8a3f7a9300 ---------A   01760  PRINT "SHOOTER IS FOULED.  TWO SHOTS."
    0x5c8a3f7a9380 ---------A   01770  GOSUB 2770
    0x5c8a3f7a9410 ---------A   01780  GOTO 2170
    0x5c8a3f7a9570 ---------A T 01790  PRINT "CHARGING FOUL.  DARTMOUTH LOSES BALL."
    0x5c8a3f7a95f0 ---------A   01800  GOTO 2170
    0x5c8a3f7a9920 ---------A T 01810  T=T+1
    0x5c8a3f7a9b70 ---------A   01820  IF T=50 THEN 2660
    0x5c8a3f7a9dd0 ---------A   01830  IF T=92 THEN 1850
    0x5c8a3f7a9e50 ---------A   01840  GOTO 1860
    0x5c8a3f7a9ec0 ---------A T 01850  GOSUB 2720
    0x5c8a3f7aa110 ---------A T 01860  IF Z=0 THEN 2140
    0x5c8a3f7aa370 ---------A   01870  IF Z>3 THEN 2120
    0x5c8a3f7aa4e0 ---------A   01880  PRINT "LAY UP."
    0x5c8a3f7aaa30 ---------A T 01890  IF 7/D*RND(1)>.4 THEN 1930
    0x5c8a3f7aaba0 ---------A   01900  PRINT "SHOT IS GOOD.  TWO POINTS."
    0x5c8a3f7aac20 ---------A   01910  GOSUB 2940
    0x5c8a3f7aaca0 ---------A   01920  GOTO 2170
    0x5c8a3f7ab1e0 ---------A T 01930  IF 7/D*RND(1)>.7 THEN 2030
    0x5c8a3f7ab350 ---------A   01940  PRINT "SHOT IS OFF THE RIM."
    0x5c8a3f7ab780 ---------A   01950  IF RND(1)>2/3 THEN 1980
    0x5c8a3f7ab9f0 ---------A   01960  PRINT O$;" CONTROLS THE REBOUND."
    0x5c8a3f7aba90 ---------A   01970  GOTO 2170
    0x5c8a3f7abc00 ---------A T 01980  PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c8a3f7abf20 ---------A   01990  IF RND(1)>.4 THEN 2010
    0x5c8a3f7abfb0 ---------A   02000  GOTO 1810
    0x5c8a3f7ac130 ---------A T 02010  PRINT "BALL PASSED BACK TO YOU.";
    0x5c8a3f7ac1c0 ---------A   02020  GOTO 1220
    0x5c8a3f7ac710 ---------A T 02030  IF 7/D*RND(1)>.875 THEN 2070
    0x5c8a3f7ac880 ---------A   02040  PRINT "SHOOTER FOULED.  TWO SHOTS."
    0x5c8a3f7ac900 ---------A   02050  GOSUB 2770
    0x5c8a3f7ac980 ---------A   02060  GOTO 2170
    0x5c8a3f7aced0 ---------A T 02070  IF 7/D*RND(1)>.925 THEN 2100
    0x5c8a3f7ad230 ---------A   02080  PRINT "SHOT BLOCKED. ";O$;"'S BALL."
    0x5c8a3f7ad2d0 ---------A   02090  GOTO 2170
    0x5c8a3f7ad440 ---------A T 02100  PRINT "CHARGING FOUL.  DARTMOUTH LOSES THE BALL."
    0x5c8a3f7ad4c0 ---------A   02110  GOTO 2170
    0x5c8a3f7ad610 ---------A T 02120  PRINT "SET SHOT."
    0x5c8a3f7ad6b0 ---------A   02130  GOTO 1890
    0x5c8a3f7ad830 ---------A T 02140  INPUT "YOUR NEW DEFENSIVE ALLIGNMENT IS";D
    0x5c8a3f7ada90 ---------A   02150  IF D<6 THEN 2140
    0x5c8a3f7adb10 ---------A   02160  GOTO 1210
    0x5c8a3f7add20 ---------A T 02170  P=1
    0x5c8a3f7ae050 ---------A   02180  T=T+1
    0x5c8a3f7ae2a0 ---------A   02190  IF T=50 THEN 2660
    0x5c8a3f7ae320 ---------A   02200  GOTO 2210
    0x5c8a3f7ae400 ---------A T 02210  PRINT
    0x5c8a3f7aeac0 ---------A   02220  Z1=10/4*RND(1)+1
    0x5c8a3f7af520 ---------A   02230  IF Z1>2 THEN 2460
    0x5c8a3f7af690 ---------A   02240  PRINT "JUMP SHOT."
    0x5c8a3f7afbe0 ---------A   02250  IF 8/D*RND(1)>.35 THEN 2290
    0x5c8a3f7afd40 ---------A   02260  PRINT "SHOT IS GOOD."
    0x5c8a3f7afdc0 ---------A   02270  GOSUB 2900
    0x5c8a3f7afe40 ---------A   02280  GOTO 1210
    0x5c8a3f7b0380 ---------A T 02290  IF 8/D*RND(1)>.75 THEN 2400
    0x5c8a3f7b04f0 ---------A   02300  PRINT "SHOT IS OFF RIM."
    0x5c8a3f7b0a50 ---------A T 02310  IF D/6*RND(1)>.5 THEN 2340
    0x5c8a3f7b0bc0 ---------A   02320  PRINT "DARTMOUTH CONTROLS THE REBOUND."
    0x5c8a3f7b0c50 ---------A   02330  GOTO 1210
    0x5c8a3f7b0eb0 ---------A T 02340  PRINT O$;" CONTROLS THE REBOUND."
    0x5c8a3f7b1120 ---------A   02350  IF D=6 THEN 2560
    0x5c8a3f7b1450 ---------A T 02360  IF RND(1)>.5 THEN 2390
    0x5c8a3f7b17b0 ---------A   02370  PRINT "PASS BACK TO ";O$;" GUARD."
    0x5c8a3f7b1830 ---------A   02380  GOTO 2170
    0x5c8a3f7b18b0 ---------A T 02390  GOTO 2460
    0x5c8a3f7b1df0 ---------A T 02400  IF 8/D*RND(1)>.9 THEN 2440
    0x5c8a3f7b1f60 ---------A   02410  PRINT "PLAYER FOULED.  TWO SHOTS."
    0x5c8a3f7b1fe0 ---------A   02420  GOSUB 2770
    0x5c8a3f7b2070 ---------A   02430  GOTO 1210
    0x5c8a3f7b21d0 ---------A T 02440  PRINT "OFFENSIVE FOUL.  DARTMOUTH'S BALL."
    0x5c8a3f7b2250 ---------A   02450  GOTO 1210
    0x5c8a3f7b24a0 ---------A T 02460  IF Z1>3 THEN 2540
    0x5c8a3f7b2610 ---------A   02470  PRINT "LAY UP."
    0x5c8a3f7b2b60 ---------A T 02480  IF 7/D*RND(1)>.413 THEN 2520
    0x5c8a3f7b2cc0 ---------A   02490  PRINT "SHOT IS GOOD."
    0x5c8a3f7b2d40 ---------A   02500  GOSUB 2900
    0x5c8a3f7b2dc0 ---------A   02510  GOTO 1210
    0x5c8a3f7b2f10 ---------A T 02520  PRINT "SHOT IS MISSED."
    0x5c8a3f7b2f90 ---------A   02530  GOTO 2310
    0x5c8a3f7b30e0 ---------A T 02540  PRINT "SET SHOT."
    0x5c8a3f7b3160 ---------A   02550  GOTO 2480
    0x5c8a3f7b4f90 ---------A T 02560  IF RND(1)>.75 THEN 2580
    0x5c8a3f7b5030 ---------A   02570  GOTO 2360
    0x5c8a3f7b51a0 ---------A T 02580  PRINT "BALL STOLEN.  EASY LAY UP FOR DARTMOUTH."
    0x5c8a3f7b5220 ---------A   02590  GOSUB 2940
    0x5c8a3f7b52a0 ---------A   02600  GOTO 2170
    0x5c8a3f7b55b0 ---------A T 02610  IF RND(1)>.6 THEN 2630
    0x5c8a3f7b5650 ---------A   02620  GOTO 1660
    0x5c8a3f7b59a0 ---------A T 02630  PRINT "PASS STOLEN BY ";O$;" EASY LAYUP."
    0x5c8a3f7b5a20 ---------A   02640  GOSUB 2900
    0x5c8a3f7b5a90 ---------A   02650  GOTO 1210
    0x5c8a3f7b6d80 ---------A T 02660  PRINT
    0x5c8a3f7b7560 ---------A   02670  PRINT "SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    0x5c8a3f7b75e0 ---------A   02680  PRINT
    0x5c8a3f7b7660 ---------A   02690  PRINT
    0x5c8a3f7b76e0 ---------A   02700  GOTO 1160
    0x5c8a3f7b7730 ---------A   02710  END
    0x5c8a3f7a3f30 ---------B G 02720  PRINT
    0x5c8a3f7a40b0 ---------B   02730  PRINT "   *** TWO MINUTES LEFT IN THE GAME ***"
    0x5c8a3f7a4130 ---------B   02740  PRINT
    0x5c8a3f7c5280 ---------B   02750  GOTO 02760
    0x5c8a3f7c6b50 ---------B T 02760  RETURN
    0x5c8a3f7b31d0 ---------C G 02770  REM FOUL SHOOTING
    0x5c8a3f7b3520 ---------C   02780  IF RND(1)>.49 THEN 2830
    0x5c8a3f7b3690 ---------C   02790  PRINT "SHOOTER MAKES BOTH SHOTS."
    0x5c8a3f7b3d90 ---------C   02800  S(1-P)=S(1-P)+2
    0x5c8a3f7b3e00 ---------C T 02810  GOSUB 2910
    0x5c8a3f7c54b0 ---------C   02820  GOTO 02890
    0x5c8a3f7b41a0 ---------C T 02830  IF RND(1)>.75 THEN 2870
    0x5c8a3f7b4320 ---------C   02840  PRINT "SHOOTER MAKES ONE SHOT AND MISSES ONE."
    0x5c8a3f7b4a20 ---------C   02850  S(1-P)=S(1-P)+1
    0x5c8a3f7b4aa0 ---------C   02860  GOTO 2810
    0x5c8a3f7b4bf0 ---------C T 02870  PRINT "BOTH SHOTS MISSED."
    0x5c8a3f7b4c80 ---------C   02880  GOTO 2810
    0x5c8a3f7c6bd0 ---------C T 02890  RETURN
    0x5c8a3f7b5f50 ---------D G 02900  S(0)=S(0)+2
    0x5c8a3f7b6520 ---------D G 02910  PRINT "SCORE: ";S(1);"TO";S(0)
    0x5c8a3f7c56e0 ---------D   02920  GOTO 02930
    0x5c8a3f7c6c50 ---------D T 02930  RETURN
    0x5c8a3f7b6a40 ---------E G 02940  S(1)=S(1)+2
    0x5c8a3f7b6ab0 ---------E   02950  GOSUB 2910
    0x5c8a3f7c5690 ---------E   02960  GOTO 02970
    0x5c8a3f7c6cd0 ---------E T 02970  RETURN
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
int    D_int;                                     // Basic: D 
char*  O_str;                                     // Basic: O$ 
int    P_int;                                     // Basic: P 
int    S_int_arr[10];                             // Basic: S 
int    T_int;                                     // Basic: T 
int    Z_int;                                     // Basic: Z 
int    Z1_int;                                    // Basic: Z1 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02720();
void Routine_02770();
void Routine_02900();
void Routine_02940();

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
// Routine B
//---------------------------------------------------------------------------

void Routine_02720(){
    // 02720 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02730 PRINT "   *** TWO MINUTES LEFT IN THE GAME ***"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   *** TWO MINUTES LEFT IN THE GAME ***");strcat(buf,"\n");fputs(buf,fh); };
    // 02740 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02750 GOTO 02760
    goto Lbl_02760;

  Lbl_02760:
    // 02760 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_02770(){
    // 02770 REM FOUL SHOOTING
    // 02780 IF RND(1)>.49 THEN 2830
    if(RND(1)>0.49)goto Lbl_02830;
    // 02790 PRINT "SHOOTER MAKES BOTH SHOTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOOTER MAKES BOTH SHOTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02800 S(1-P)=S(1-P)+2
    S_int_arr[1-P_int] = S_int_arr[1-P_int]+2;

  Lbl_02810:
    // 02810 GOSUB 2910
    Routine_02910();
    // 02820 GOTO 02890
    goto Lbl_02890;

  Lbl_02830:
    // 02830 IF RND(1)>.75 THEN 2870
    if(RND(1)>0.75)goto Lbl_02870;
    // 02840 PRINT "SHOOTER MAKES ONE SHOT AND MISSES ONE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOOTER MAKES ONE SHOT AND MISSES ONE.");strcat(buf,"\n");fputs(buf,fh); };
    // 02850 S(1-P)=S(1-P)+1
    S_int_arr[1-P_int] = S_int_arr[1-P_int]+1;
    // 02860 GOTO 2810
    goto Lbl_02810;

  Lbl_02870:
    // 02870 PRINT "BOTH SHOTS MISSED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BOTH SHOTS MISSED.");strcat(buf,"\n");fputs(buf,fh); };
    // 02880 GOTO 2810
    goto Lbl_02810;

  Lbl_02890:
    // 02890 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_02900(){
    // 02900 S(0)=S(0)+2
    S_int_arr[0] = S_int_arr[0]+2;

void Routine_02910(){
    // 02910 PRINT "SCORE: ";S(1);"TO";S(0)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SCORE: "); b2c_INT(buf,S_int_arr[1]);strcat(buf,"TO"); b2c_INT(buf,S_int_arr[0]);strcat(buf,"\n");fputs(buf,fh); };
    // 02920 GOTO 02930
    goto Lbl_02930;

  Lbl_02930:
    // 02930 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------

void Routine_02940(){
    // 02940 S(1)=S(1)+2
    S_int_arr[1] = S_int_arr[1]+2;
    // 02950 GOSUB 2910
    Routine_02910();
    // 02960 GOTO 02970
    goto Lbl_02970;

  Lbl_02970:
    // 02970 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(31);"BASKETBALL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,31);strcat(buf,"BASKETBALL");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "THIS IS DARTMOUTH COLLEGE BASKETBALL.  YOU WILL BE DARTMOUTH"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS DARTMOUTH COLLEGE BASKETBALL.  YOU WILL BE DARTMOUTH");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT " CAPTAIN AND PLAYMAKER.  CALL SHOTS AS FOLLOWS:  1. LONG"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," CAPTAIN AND PLAYMAKER.  CALL SHOTS AS FOLLOWS:  1. LONG");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT " (1070 FT.) JUMP SHOT; 2. SHORT (15 FT.) JUMP SHOT; 3. LAY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," (30 FT.) JUMP SHOT; 2. SHORT (15 FT.) JUMP SHOT; 3. LAY");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT " UP; 4. SET SHOT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," UP; 4. SET SHOT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "BOTH TEAMS WILL USE THE SAME DEFENSE.  CALL DEFENSE AS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BOTH TEAMS WILL USE THE SAME DEFENSE.  CALL DEFENSE AS");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "FOLLOWS:  6. PRESS; 6.5 MAN-TO MAN; 7. ZONE; 7.5 NONE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FOLLOWS:  6. PRESS; 6.5 MAN-TO MAN; 7. ZONE; 7.5 NONE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "TO CHANGE DEFENSE, JUST TYPE 0 AS YOUR NEXT SHOT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO CHANGE DEFENSE, JUST TYPE 0 AS YOUR NEXT SHOT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 INPUT "YOUR STARTING DEFENSE WILL BE";D
    // Start of Basic INPUT statement 01120
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"YOUR STARTING DEFENSE WILL BE");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&D_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01120
    // 01130 IF D<6 THEN 2140
    if(D_int<6)goto Lbl_02140;
    // 01140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01150 INPUT "CHOOSE YOUR OPPONENT";O$
    // Start of Basic INPUT statement 01150
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"CHOOSE YOUR OPPONENT");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&O_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01150

  Lbl_01160:
    // 01160 PRINT "CENTER JUMP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CENTER JUMP");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 IF RND(1)> 3/5 THEN 1200
    if(RND(1)>3/5)goto Lbl_01200;
    // 01180 PRINT O$;" CONTROLS THE TAP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O_str);strcat(buf," CONTROLS THE TAP.");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 GOTO 2170
    goto Lbl_02170;

  Lbl_01200:
    // 01200 PRINT "DARTMOUTH CONTROLS THE TAP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DARTMOUTH CONTROLS THE TAP.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01210:
    // 01210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01220:
    // 01220 INPUT "YOUR SHOT";Z
    // Start of Basic INPUT statement 01220
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"YOUR SHOT");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Z_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01220
    // 01230 P=0
    P_int = 0;
    // 01240 IF Z<>INT(Z) THEN 1270
    if(Z_int!=INT(Z_int))goto Lbl_01270;
    // 01250 IF Z<0 OR Z>4 THEN 1270
    if(Z_int<0||Z_int>4)goto Lbl_01270;
    // 01260 GOTO 1280
    goto Lbl_01280;

  Lbl_01270:
    // 01270 GOTO 1220
    goto Lbl_01220;

  Lbl_01280:
    // 01280 IF RND(1)<.5 THEN 1440
    if(RND(1)<0.5)goto Lbl_01440;
    // 01290 IF T<100 THEN 1440
    if(T_int<100)goto Lbl_01440;
    // 01300 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01310 IF S(1)<>S(0) THEN 1410
    if(S_int_arr[1]!=S_int_arr[0])goto Lbl_01410;
    // 01320 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT "   ***** END OF SECOND HALF *****"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   ***** END OF SECOND HALF *****");strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01350 PRINT "SCORE AT END OF REGULATION TIME:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SCORE AT END OF REGULATION TIME:");strcat(buf,"\n");fputs(buf,fh); };
    // 01360 PRINT "        DARTMOUTH:";S(1);"  ";O$;":";S(0)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"        DARTMOUTH:"); b2c_INT(buf,S_int_arr[1]);strcat(buf,"  "); strcat(buf,O_str);strcat(buf,":"); b2c_INT(buf,S_int_arr[0]);strcat(buf,"\n");fputs(buf,fh); };
    // 01370 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01380 PRINT "BEGIN TWO MINUTE OVERTIME PERIOD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BEGIN TWO MINUTE OVERTIME PERIOD");strcat(buf,"\n");fputs(buf,fh); };
    // 01390 T=93
    T_int = 93;
    // 01400 GOTO 1160
    goto Lbl_01160;

  Lbl_01410:
    // 01410 PRINT "   ***** END OF GAME *****"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   ***** END OF GAME *****");strcat(buf,"\n");fputs(buf,fh); };
    // 01420 PRINT "FINAL SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FINAL SCORE: DARTMOUTH:"); b2c_INT(buf,S_int_arr[1]);strcat(buf,"  "); strcat(buf,O_str);strcat(buf,":"); b2c_INT(buf,S_int_arr[0]);strcat(buf,"\n");fputs(buf,fh); };
    // 01430 STOP
    exit(1);

  Lbl_01440:
    // 01440 ON Z GOTO 1460,1460
    switch((int)(Z_int)){
        case 1: goto Lbl_01460;
        case 2: goto Lbl_01460;
        default: break; 
    };
    // 01450 GOTO 1810
    goto Lbl_01810;

  Lbl_01460:
    // 01460 T=T+1
    T_int = T_int+1;
    // 01470 IF T=50 THEN 2660
    if(T_int==50)goto Lbl_02660;
    // 01480 IF T=92 THEN 1500
    if(T_int==92)goto Lbl_01500;
    // 01490 GOTO 1510
    goto Lbl_01510;

  Lbl_01500:
    // 01500 GOSUB 2720
    Routine_02720();

  Lbl_01510:
    // 01510 PRINT "JUMP SHOT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"JUMP SHOT");strcat(buf,"\n");fputs(buf,fh); };
    // 01520 IF RND(1)>.341*D/8 THEN 1560
    if(RND(1)>0.34*D_int/8)goto Lbl_01560;
    // 01530 PRINT "SHOT IS GOOD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOT IS GOOD.");strcat(buf,"\n");fputs(buf,fh); };
    // 01540 GOSUB 2940
    Routine_02940();
    // 01550 GOTO 2170
    goto Lbl_02170;

  Lbl_01560:
    // 01560 IF RND(1)>.682*D/8 THEN 1680
    if(RND(1)>0.68*D_int/8)goto Lbl_01680;
    // 01570 PRINT "SHOT IS OFF TARGET."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOT IS OFF TARGET.");strcat(buf,"\n");fputs(buf,fh); };
    // 01580 IF D/6*RND(1)>.45 THEN 1610
    if(D_int/6*RND(1)>0.45)goto Lbl_01610;
    // 01590 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DARTMOUTH CONTROLS THE REBOUND.");strcat(buf,"\n");fputs(buf,fh); };
    // 01600 GOTO 1630
    goto Lbl_01630;

  Lbl_01610:
    // 01610 PRINT "REBOUND TO ";O$
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"REBOUND TO "); strcat(buf,O_str);strcat(buf,"\n");fputs(buf,fh); };
    // 01620 GOTO 2170
    goto Lbl_02170;

  Lbl_01630:
    // 01630 IF RND(1)>.4 THEN 1650
    if(RND(1)>0.4)goto Lbl_01650;
    // 01640 GOTO 1810
    goto Lbl_01810;

  Lbl_01650:
    // 01650 IF D=6 THEN 2610
    if(D_int==6)goto Lbl_02610;

  Lbl_01660:
    // 01660 PRINT "BALL PASSED BACK TO YOU. ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BALL PASSED BACK TO YOU. ");fputs(buf,fh); };
    // 01670 GOTO 1220
    goto Lbl_01220;

  Lbl_01680:
    // 01680 IF RND(1)>.782*D/8 THEN 1750
    if(RND(1)>0.78*D_int/8)goto Lbl_01750;
    // 01690 PRINT "SHOT IS BLOCKED.  BALL CONTROLLED BY ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOT IS BLOCKED.  BALL CONTROLLED BY ");fputs(buf,fh); };
    // 01700 IF RND(1)>.5 THEN 1730
    if(RND(1)>0.5)goto Lbl_01730;
    // 01710 PRINT "DARTMOUTH."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DARTMOUTH.");strcat(buf,"\n");fputs(buf,fh); };
    // 01720 GOTO 1220
    goto Lbl_01220;

  Lbl_01730:
    // 01730 PRINT O$;"."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O_str);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 01740 GOTO 2170
    goto Lbl_02170;

  Lbl_01750:
    // 01750 IF RND(1)>.843*D/8 THEN 1790
    if(RND(1)>0.84*D_int/8)goto Lbl_01790;
    // 01760 PRINT "SHOOTER IS FOULED.  TWO SHOTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOOTER IS FOULED.  TWO SHOTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01770 GOSUB 2770
    Routine_02770();
    // 01780 GOTO 2170
    goto Lbl_02170;

  Lbl_01790:
    // 01790 PRINT "CHARGING FOUL.  DARTMOUTH LOSES BALL."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CHARGING FOUL.  DARTMOUTH LOSES BALL.");strcat(buf,"\n");fputs(buf,fh); };
    // 01800 GOTO 2170
    goto Lbl_02170;

  Lbl_01810:
    // 01810 T=T+1
    T_int = T_int+1;
    // 01820 IF T=50 THEN 2660
    if(T_int==50)goto Lbl_02660;
    // 01830 IF T=92 THEN 1850
    if(T_int==92)goto Lbl_01850;
    // 01840 GOTO 1860
    goto Lbl_01860;

  Lbl_01850:
    // 01850 GOSUB 2720
    Routine_02720();

  Lbl_01860:
    // 01860 IF Z=0 THEN 2140
    if(Z_int==0)goto Lbl_02140;
    // 01870 IF Z>3 THEN 2120
    if(Z_int>3)goto Lbl_02120;
    // 01880 PRINT "LAY UP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LAY UP.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01890:
    // 01890 IF 7/D*RND(1)>.4 THEN 1930
    if(7/D_int*RND(1)>0.4)goto Lbl_01930;
    // 01900 PRINT "SHOT IS GOOD.  TWO POINTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOT IS GOOD.  TWO POINTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01910 GOSUB 2940
    Routine_02940();
    // 01920 GOTO 2170
    goto Lbl_02170;

  Lbl_01930:
    // 01930 IF 7/D*RND(1)>.7 THEN 2030
    if(7/D_int*RND(1)>0.7)goto Lbl_02030;
    // 01940 PRINT "SHOT IS OFF THE RIM."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOT IS OFF THE RIM.");strcat(buf,"\n");fputs(buf,fh); };
    // 01950 IF RND(1)>2/3 THEN 1980
    if(RND(1)>2/3)goto Lbl_01980;
    // 01960 PRINT O$;" CONTROLS THE REBOUND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O_str);strcat(buf," CONTROLS THE REBOUND.");strcat(buf,"\n");fputs(buf,fh); };
    // 01970 GOTO 2170
    goto Lbl_02170;

  Lbl_01980:
    // 01980 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DARTMOUTH CONTROLS THE REBOUND.");strcat(buf,"\n");fputs(buf,fh); };
    // 01990 IF RND(1)>.4 THEN 2010
    if(RND(1)>0.4)goto Lbl_02010;
    // 02000 GOTO 1810
    goto Lbl_01810;

  Lbl_02010:
    // 02010 PRINT "BALL PASSED BACK TO YOU.";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BALL PASSED BACK TO YOU.");fputs(buf,fh); };
    // 02020 GOTO 1220
    goto Lbl_01220;

  Lbl_02030:
    // 02030 IF 7/D*RND(1)>.875 THEN 2070
    if(7/D_int*RND(1)>0.88)goto Lbl_02070;
    // 02040 PRINT "SHOOTER FOULED.  TWO SHOTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOOTER FOULED.  TWO SHOTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02050 GOSUB 2770
    Routine_02770();
    // 02060 GOTO 2170
    goto Lbl_02170;

  Lbl_02070:
    // 02070 IF 7/D*RND(1)>.925 THEN 2100
    if(7/D_int*RND(1)>0.93)goto Lbl_02100;
    // 02080 PRINT "SHOT BLOCKED. ";O$;"'S BALL."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOT BLOCKED. "); strcat(buf,O_str);strcat(buf,"'S BALL.");strcat(buf,"\n");fputs(buf,fh); };
    // 02090 GOTO 2170
    goto Lbl_02170;

  Lbl_02100:
    // 02100 PRINT "CHARGING FOUL.  DARTMOUTH LOSES THE BALL."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CHARGING FOUL.  DARTMOUTH LOSES THE BALL.");strcat(buf,"\n");fputs(buf,fh); };
    // 02110 GOTO 2170
    goto Lbl_02170;

  Lbl_02120:
    // 02120 PRINT "SET SHOT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SET SHOT.");strcat(buf,"\n");fputs(buf,fh); };
    // 02130 GOTO 1890
    goto Lbl_01890;

  Lbl_02140:
    // 02140 INPUT "YOUR NEW DEFENSIVE ALLIGNMENT IS";D
    // Start of Basic INPUT statement 02140
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"YOUR NEW DEFENSIVE ALLIGNMENT IS");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&D_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02140
    // 02150 IF D<6 THEN 2140
    if(D_int<6)goto Lbl_02140;
    // 02160 GOTO 1210
    goto Lbl_01210;

  Lbl_02170:
    // 02170 P=1
    P_int = 1;
    // 02180 T=T+1
    T_int = T_int+1;
    // 02190 IF T=50 THEN 2660
    if(T_int==50)goto Lbl_02660;
    // 02200 GOTO 2210
    goto Lbl_02210;

  Lbl_02210:
    // 02210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02220 Z1=10/4*RND(1)+1
    Z1_int = 10/4*RND(1)+1;
    // 02230 IF Z1>2 THEN 2460
    if(Z1_int>2)goto Lbl_02460;
    // 02240 PRINT "JUMP SHOT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"JUMP SHOT.");strcat(buf,"\n");fputs(buf,fh); };
    // 02250 IF 8/D*RND(1)>.35 THEN 2290
    if(8/D_int*RND(1)>0.35)goto Lbl_02290;
    // 02260 PRINT "SHOT IS GOOD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOT IS GOOD.");strcat(buf,"\n");fputs(buf,fh); };
    // 02270 GOSUB 2900
    Routine_02900();
    // 02280 GOTO 1210
    goto Lbl_01210;

  Lbl_02290:
    // 02290 IF 8/D*RND(1)>.75 THEN 2400
    if(8/D_int*RND(1)>0.75)goto Lbl_02400;
    // 02300 PRINT "SHOT IS OFF RIM."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOT IS OFF RIM.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02310:
    // 02310 IF D/6*RND(1)>.5 THEN 2340
    if(D_int/6*RND(1)>0.5)goto Lbl_02340;
    // 02320 PRINT "DARTMOUTH CONTROLS THE REBOUND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DARTMOUTH CONTROLS THE REBOUND.");strcat(buf,"\n");fputs(buf,fh); };
    // 02330 GOTO 1210
    goto Lbl_01210;

  Lbl_02340:
    // 02340 PRINT O$;" CONTROLS THE REBOUND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,O_str);strcat(buf," CONTROLS THE REBOUND.");strcat(buf,"\n");fputs(buf,fh); };
    // 02350 IF D=6 THEN 2560
    if(D_int==6)goto Lbl_02560;

  Lbl_02360:
    // 02360 IF RND(1)>.5 THEN 2390
    if(RND(1)>0.5)goto Lbl_02390;
    // 02370 PRINT "PASS BACK TO ";O$;" GUARD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PASS BACK TO "); strcat(buf,O_str);strcat(buf," GUARD.");strcat(buf,"\n");fputs(buf,fh); };
    // 02380 GOTO 2170
    goto Lbl_02170;

  Lbl_02390:
    // 02390 GOTO 2460
    goto Lbl_02460;

  Lbl_02400:
    // 02400 IF 8/D*RND(1)>.9 THEN 2440
    if(8/D_int*RND(1)>0.9)goto Lbl_02440;
    // 02410 PRINT "PLAYER FOULED.  TWO SHOTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLAYER FOULED.  TWO SHOTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02420 GOSUB 2770
    Routine_02770();
    // 02430 GOTO 1210
    goto Lbl_01210;

  Lbl_02440:
    // 02440 PRINT "OFFENSIVE FOUL.  DARTMOUTH'S BALL."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OFFENSIVE FOUL.  DARTMOUTH'S BALL.");strcat(buf,"\n");fputs(buf,fh); };
    // 02450 GOTO 1210
    goto Lbl_01210;

  Lbl_02460:
    // 02460 IF Z1>3 THEN 2540
    if(Z1_int>3)goto Lbl_02540;
    // 02470 PRINT "LAY UP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LAY UP.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02480:
    // 02480 IF 7/D*RND(1)>.413 THEN 2520
    if(7/D_int*RND(1)>0.41)goto Lbl_02520;
    // 02490 PRINT "SHOT IS GOOD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOT IS GOOD.");strcat(buf,"\n");fputs(buf,fh); };
    // 02500 GOSUB 2900
    Routine_02900();
    // 02510 GOTO 1210
    goto Lbl_01210;

  Lbl_02520:
    // 02520 PRINT "SHOT IS MISSED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOT IS MISSED.");strcat(buf,"\n");fputs(buf,fh); };
    // 02530 GOTO 2310
    goto Lbl_02310;

  Lbl_02540:
    // 02540 PRINT "SET SHOT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SET SHOT.");strcat(buf,"\n");fputs(buf,fh); };
    // 02550 GOTO 2480
    goto Lbl_02480;

  Lbl_02560:
    // 02560 IF RND(1)>.75 THEN 2580
    if(RND(1)>0.75)goto Lbl_02580;
    // 02570 GOTO 2360
    goto Lbl_02360;

  Lbl_02580:
    // 02580 PRINT "BALL STOLEN.  EASY LAY UP FOR DARTMOUTH."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BALL STOLEN.  EASY LAY UP FOR DARTMOUTH.");strcat(buf,"\n");fputs(buf,fh); };
    // 02590 GOSUB 2940
    Routine_02940();
    // 02600 GOTO 2170
    goto Lbl_02170;

  Lbl_02610:
    // 02610 IF RND(1)>.6 THEN 2630
    if(RND(1)>0.6)goto Lbl_02630;
    // 02620 GOTO 1660
    goto Lbl_01660;

  Lbl_02630:
    // 02630 PRINT "PASS STOLEN BY ";O$;" EASY LAYUP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PASS STOLEN BY "); strcat(buf,O_str);strcat(buf," EASY LAYUP.");strcat(buf,"\n");fputs(buf,fh); };
    // 02640 GOSUB 2900
    Routine_02900();
    // 02650 GOTO 1210
    goto Lbl_01210;

  Lbl_02660:
    // 02660 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02670 PRINT "SCORE: DARTMOUTH:";S(1);"  ";O$;":";S(0)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SCORE: DARTMOUTH:"); b2c_INT(buf,S_int_arr[1]);strcat(buf,"  "); strcat(buf,O_str);strcat(buf,":"); b2c_INT(buf,S_int_arr[0]);strcat(buf,"\n");fputs(buf,fh); };
    // 02680 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02690 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02700 GOTO 1160
    goto Lbl_01160;
    // 02710 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
