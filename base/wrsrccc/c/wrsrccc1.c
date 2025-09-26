/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/wrsrccc/basic/wrsrccc1.bas: 
 *
                   ++---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   || +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    || |
        Address    vv v Original BASIC statement
    -------------- -- - ------------------------------------------------------------------------------
    0x557af7fdfd10 ---------A   00001 REM NOTE: Basic language type forced to be:
    0x557af7fdfe00 ---------A   00002 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x557af7fe00f0 ---------A   00010 PRINTTAB(20);"WORD SEARCH PUZZLE"
    0x557af7fe0260 ---------A   00040 PRINT:PRINT:PRINT
    0x557af7fe03e0 ---------A   00050 PRINT"  This program is a word search puzzle generator!!"
    0x557af7fe05b0 ---------A   00060 PRINT"The program takes a set on input strings, purges all"
    0x557af7fe0730 ---------A   00070 PRINT"non-alphabetic characters out of them, and incorporates"
    0x557af7fe0820 ---------A   00080 PRINT"them into a word search puzzle."
    0x557af7fe08c0 ---------A   00090 PRINT
    0x557af7fe0a80 ---------A   00100 PRINT"  In the course of making a puzzle, the machine may"
    0x557af7fe0c10 ---------A   00110 PRINT"find that it can't put a particular word anywhere, and"
    0x557af7fe4fe0 ---------A   00120 PRINT"so will ask you if it should start the whole puzzle"
    0x557af7fe5170 ---------A   00130 PRINT"over.  If you don't want it to start over, typing 'NO'"
    0x557af7fe5300 ---------A   00140 PRINT"will throw away that particular word.  If this persists,"
    0x557af7fe5450 ---------A   00150 PRINT"try either less words or bigger puzzle dimensions!"
    0x557af7fe5510 ---------A   00160 PRINT:PRINT
    0x557af7fe5560 ---------A   00280 CLEAR3000
    0x557af7fe5cc0 ---------A   00300 DEF FNA(Z)=INT(RND(0)*Z+1)
    0x557af7fe5e90 ---------A   00310 INPUT"HOW MANY COLUMNS DOES YOUR PRINTER HAVE";TW
    0x557af7fe6050 ---------A   00320 INPUT"DO YOU WANT A SOLUTION PRINTOUT";X$
    0x557af7fe63a0 ---------A T 00330 INPUT"WHAT IS TO BE THE WIDTH OF YOUR PUZZLE";W:MD=W
    0x557af7fe6620 ---------A   00340 IFW*2<=TW THEN 345
    0x557af7fe6910 ---------A   00343 PRINT"THAT WILL NOT FIT IN";TW;" COLUMNS.":GOTO330
    0x557af7fe6ad0 ---------A T 00345 IFW<1 THEN 330
    0x557af7fe6ec0 ---------A T 00350 INPUT"THE LENGTH OF";L:IFL>W THEN MD=L
    0x557af7fe70b0 ----------   00355 IFL<1 THEN 350
    0x557af7fe7250 ---------- T 00360 INPUT"WHAT IS THE MAXIMUM NUMBER OF WORDS IN THE PUZZLE";M
    0x557af7fe7440 ----------   00370 IFM>=2 THEN 380
    0x557af7fe75f0 ----------   00375 PRINT"SORRY; THERE MUST BE AT LEAST 2 WORDS.":GOTO360
    0x557af7fe7650 ---------- T 00380 PRINT
    0x557af7fe79b0 ----------   00390 DIMA$(L,W),W$(M)
    0x557af7fe7fc0 ----------   00400 DIMW(M,3),DXY(8,2),DD(28)
    0x557af7fe8130 ----------   00410 PRINT"NOW ENTER A HEADING THAT WILL BE PRINTED OVER THE PUZZLE:"
    0x557af7fe85d0 ----------   00420 PRINT"(";TW;"CHARACTERS MAXIMUM! )"
    0x557af7fe8750 ----------   00430 INPUTXY$
    0x557af7fe88e0 ----------   00440 PRINT"OK . . . Enter a word at each question mark."
    0x557af7fe8a60 ----------   00450 PRINT"to redo the previous word, type a hyphen (-)."
    0x557af7fe8bb0 ----------   00460 PRINT"When you run out of words, type a period (.)."
    0x557af7fe8e30 ----------   00470 FORI=1TOM
    0x557af7fe9680 ---------- T 00480 INPUTT$:IFT$="-" THEN I=I-1:PRINT"REDO";W$(I);". . .":GOTO480
    0x557af7fe9ac0 ----------   00490 IFT$="." THEN M=I-1:GOTO660
    0x557af7fe9eb0 ---------- T 00500 IFLEN(T$)=0 THEN PRINT"INPUT ERROR; REDO:":GOTO480
    0x557af7fea0b0 ----------   00510 J=1
    0x557af7fea7a0 ---------- T 00520 TE$=MID$(T$,J,1):IFTE$>="a"ANDTE$<="z" THEN 570
    0x557af7feab60 ----------   00525 IFTE$<"A"ORTE$>"Z" THEN 530
    0x557af7feb6a0 ----------   00527 T$=LEFT$(T$,J-1)+CHR$(ASC(MID$(T$,J,1))+32)+RIGHT$(T$,LEN(T$)-J):GOTO570
    0x557af7feb9f0 ---------- T 00530 IFTE$=T$ THEN T$="":GOTO500
    0x557af7febee0 ----------   00540 IFJ=LEN(T$) THEN T$=LEFT$(T$,J-1):GOTO580
    0x557af7fec600 ----------   00550 IFJ=1 THEN T$=RIGHT$(T$,LEN(T$)-1):J=J-1:GOTO570
    0x557af7fecd20 ----------   00560 T$=LEFT$(T$,J-1)+RIGHT$(T$,LEN(T$)-J):J=J-1
    0x557af7fed0e0 ---------- T 00570 J=J+1:IFJ<=LEN(T$) THEN 520
    0x557af7fed390 ---------- T 00580 PRINT"-";T$;"-"
    0x557af7fed580 ----------   00600 IFLEN(T$)<=MD THEN 610
    0x557af7fed700 ----------   00605 PRINT"THAT'S TOO LONG, I'M AFRAID.";
    0x557af7fed8a0 ----------   00607 PRINT" TRY ANOTHER ONE:":GOTO480
    0x557af7fede50 ---------- T 00610 FORIZ=1TOI-1:IFW$(IZ)<>T$ THEN NEXT:GOTO630
    0x557af7fedfe0 ----------   00620 PRINT"YOU ENTERED THAT ONE ALREADY. TRY ANOTHER:":GOTO480
    0x557af7fee160 ---------- T 00630 W$(I)=T$
    0x557af7fee210 ----------   00640 NEXTI
    0x557af7fee4e0 ----------   00650 PRINT"THAT'S IT...";M;"WORDS."
    0x557af7fee620 ---------- T 00660 PRINT"NOW LET ME PONDER THIS........."
    0x557af7fee8d0 ----------   00680 FORI=1TOM-1
    0x557af7feeb80 ----------   00685 FORJ=I+1TOM
    0x557af7fef3c0 ----------   00690 IFLEN(W$(I))<LEN(W$(J)) THEN HZ$=W$(I):W$(I)=W$(J):W$(J)=HZ$
    0x557af7fef490 ----------   00700 NEXT:NEXT
    0x557af7fefe10 ----------   00710 FORI=1TO8:READDXY(I,1),DXY(I,2):NEXT
    0x557af7ff0190 ----------   00720 FORI=1TO28:READDD(I):NEXT
    0x557af7ff0e20 ---------A   00730 DATA0,1,1,1,1,0,1,-1,0,-1,-1,-1,-1,0,-1,1
    0x557af7ff2390 ---------A   00740 DATA2,4,6,8,2,4,6,8,2,4,6,8,2,4,6,8,2,4,6,8,2,4,6,8,1,3,5,7
    0x557af7ff2560 ---------- T 00750 FORI=1TOM
    0x557af7ff27e0 ----------   00760 LN=LEN(W$(I))
    0x557af7ff29d0 ----------   00770 NT=0
    0x557af7ff2cb0 ---------- T 00790 SD=DD(FNA(28))
    0x557af7ff36b0 ----------   00800 SX=FNA(W):X1=SX+(LN-1)*DXY(SD,1):IFX1<1ORX1>W THEN 790
    0x557af7ff4020 ----------   00810 SY=FNA(L):X1=SY+(LN-1)*DXY(SD,2):IFX1<1ORX1>L THEN 790
    0x557af7ff4530 ----------   00820 NT=NT+1:IFNT<>W*L*2 THEN 850
    0x557af7ff4850 ----------   00830 PRINT"COUNDN'T FIT  '";W$(I);"' IN THE PUZZLE."
    0x557af7ff49e0 ----------   00832 INPUT"DO YOU WANT ME TO START OVER";A$
    0x557af7ff4cc0 ----------   00834 IFLEFT$(A$,1)="Y" THEN 750
    0x557af7ff4f10 ----------   00836 W$(I)="":GOTO950
    0x557af7ff51c0 ---------- T 00850 J=SY:K=SX
    0x557af7ff5440 ----------   00860 FORP=1TOLN
    0x557af7ff5af0 ----------   00870 IF LEN(A$(J,K))<>0 AND A$(J,K)<>MID$(W$(I),P,1) THEN 790
    0x557af7ff6110 ----------   00880 J=J+DXY(SD,2):K=K+DXY(SD,1):NEXTP
    0x557af7ff6380 ----------   00900 J=SY:K=SX
    0x557af7ff6900 ----------   00910 FORP=1TOLN:A$(J,K)=MID$(W$(I),P,1)
    0x557af7ff6ee0 ----------   00920 J=J+DXY(SD,2):K=K+DXY(SD,1):NEXT
    0x557af7ff7520 ----------   00940 W(I,1)=SX:W(I,2)=SY:W(I,3)=SD
    0x557af7ff75d0 ---------- T 00950 NEXTI
    0x557af7ff77b0 ----------   00970 FORI=1TOL
    0x557af7ff79b0 ----------   00975 FORJ=1TOW
    0x557af7ff8000 ----------   00980 IFA$(I,J)="" THEN A$(I,J)=CHR$(FNA(26)+96)
    0x557af7ff80d0 ----------   00990 NEXT:NEXT
    0x557af7ff85e0 ----------   01010 FORI=1TOM-1:FORJ=I+1TOM
    0x557af7ff8830 ----------   01020 IFW$(I)<=W$(J) THEN 1030
    0x557af7ff8d30 ----------   01021 HZ$=W$(I):W$(I)=W$(J):W$(J)=HZ$
    0x557af7ff9690 ----------   01025 FORK=1TO3:HZ=W(I,K):W(I,K)=W(J,K):W(J,K)=HZ:NEXTK
    0x557af7ff97f0 ---------- T 01030 NEXTJ:NEXTI
    0x557af7ff99f0 ----------   01040 INPUT"HOW MANY COPIES OF THIS PUZZLE DO YOU WANT";N
    0x557af7ff9b60 ----------   01050 PRINT"FOR EACH COPY, HIT RETURN TO BEGIN PRINTING..."
    0x557af7ff9e90 ----------   01060 FORC=1TON:GOSUB1070:NEXT:GOTO1230
    0x557af7ff9fc0 ---------B G 01070 INPUTA$:PRINT
    0x557af7ffa460 ---------B   01080 T=(TW-2*W)/2:PRINT
    0x557af7ffa4e0 ---------B   01090 LPRINT
    0x557af7ffa8b0 ---------B   01100 LPRINTTAB((TW-LEN(XY$))/2);XY$
    0x557af7ffa980 ---------B   01110 LPRINT:LPRINT
    0x557af7ffacb0 ---------B   01120 FORJ=1TOL:LPRINTTAB(T);
    0x557af7ffb2a0 ---------B   01130 FORK=1TOW:IFA$(J,K)="." THEN LPRINT". ";:GOTO1140
    0x557af7ffb6c0 ----------   01135 LPRINTCHR$(ASC(A$(J,K))-32);" ";
    0x557af7ffb7c0 ---------B T 01140 NEXT:LPRINT:NEXT
    0x557af7ffb8a0 ---------B   01150 LPRINT:LPRINT
    0x557af7ffb9f0 ---------B   01160 LPRINT"FIND THESE HIDDEN WORDS IN THE ABOVE PUZZLE:"
    0x557af7ffba80 ---------B   01170 LPRINT
    0x557af7ffbed0 ---------B   01180 FORJ=1TOM:IFLEN(W$(J))=0 THEN 1210
    0x557af7ffc400 ---------B   01190 IFPOS(0)+LEN(W$(J))>TW-2 THEN LPRINT
    0x557af7ffc570 ----------   01200 LPRINTW$(J),
    0x557af7ffc710 ---------B T 01210 NEXT:LPRINT:LPRINT:LPRINT:LPRINT
    0x557af7ffc760 ---------B   01220 RETURN
    0x557af7ffcd00 ---------- T 01230 IFLEFT$(X$,1)="Y"ORLEFT$(X$,1)="y" THEN 1250
    0x557af7ffcd60 ---------A   01240 END
    0x557af7ffcde0 ---------A T 01250 '
    0x557af7ffd510 ----------   01260 FORI=1TOL:FORJ=1TOW:A$(I,J)=".":NEXTJ:NEXTI
    0x557af7ffd700 ----------   01270 FORI=1TOM
    0x557af7ffdd20 ----------   01280 LN=LEN(W$(I)):J=W(I,2):K=W(I,1)
    0x557af7ffdf00 ----------   01290 FORP=1TOLN
    0x557af7ffe2e0 ----------   01300 A$(J,K)=MID$(W$(I),P,1)
    0x557af7ffeaf0 ----------   01310 J=J+DXY(W(I,3),2):K=K+DXY(W(I,3),1):NEXTP
    0x557af7ffebb0 ----------   01320 NEXTI
    0x557af7ffed70 ----------   01330 XY$="HERE IS THE ANSWER KEY:"
    0x557af7fff5f0 ----------   01340 GOSUB1070
    0x557af7fff6a0 ----------   01350 LPRINT:LPRINT
    0x557af7fff6f0 ---------A   01360 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00330      00343T, 00345T
     00345      00340T
     00350      00355T
     00360      00375T
     00380      00370T
     00480      00480T, 00500T, 00607T, 00620T
     00500      00530T
     00520      00570T
     00530      00525T
     00570      00520T, 00527T, 00550T
     00580      00540T
     00610      00600T
     00630      00610T
     00660      00490T
     00750      00834T
     00790      00800T, 00810T, 00870T
     00850      00820T
     00950      00836T
     01030      01020T
     01070      01340G
     01140      01130T
     01210      01180T
     01230      01060T
     01250      01230T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x557af7fdfd10   0x557af7fdfd10   0x557af7fff6f0   0x557af7fff6f0 
   B) 0x557af7ff9fc0   0x557af7ff9fc0   0x557af7ffc760   0x557af7ffc760 

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02320 - 10000    7690 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/wrsrccc/basic/wrsrccc1.bas'
 *
    A$    Array    String      {0,1} {0,1} 
    A$             String  
    ASC   Function Integer     args=1, char* 
    C              Integer 
    CHR$  Function String      args=1, int   
    DD    Array    Integer     {0,29} 
    DXY   Array    Integer     {0,9} {0,3} 
    FNA   Function Integer     args=1, int   
    HZ             Integer 
    HZ$            String  
    I              Integer 
    INT   Function Integer     args=1, float 
    IZ             Integer 
    J              Integer 
    K              Integer 
    L              Integer 
    LEFT$ Function String      args=2, char* int   
    LEN   Function Integer     args=1, char* 
    LN             Integer 
    M              Integer 
    MD             Integer 
    MID$  Function String      args=2, char* int   
    N              Integer 
    NT             Integer 
    P              Integer 
    POS   Function Integer     args=1, Any   
    RIGHT$ Function String      args=2, char* int   
    RND   Function Integer     args=1, int   
    SD             Integer 
    SX             Integer 
    SY             Integer 
    T              Integer 
    T$             String  
    TAB   Function String      args=1, 
    TE$            String  
    TW             Integer 
    W              Integer 
    W     Array    Integer     {0,1} {0,4} 
    W$    Array    String      {0,1} 
    X$             String  
    X1             Integer 
    XY$            String  
    Z              Integer 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/wrsrccc/basic/wrsrccc1.bas: 
 *
                   ++---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   || +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    || |
        Address    vv v Original BASIC statement
    -------------- -- - ------------------------------------------------------------------------------
    0x557af7fdfd10 ---------A   01000 REM NOTE: Basic language type forced to be:
    0x557af7fdfe00 ---------A   01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x557af7fe00f0 ---------A   01020 PRINTTAB(20);"WORD SEARCH PUZZLE"
    0x557af7fe0260 ---------A   01030 PRINT:PRINT:PRINT
    0x557af7fe03e0 ---------A   01040 PRINT"  This program is a word search puzzle generator!!"
    0x557af7fe05b0 ---------A   01050 PRINT"The program takes a set on input strings, purges all"
    0x557af7fe0730 ---------A   01060 PRINT"non-alphabetic characters out of them, and incorporates"
    0x557af7fe0820 ---------A   01070 PRINT"them into a word search puzzle."
    0x557af7fe08c0 ---------A   01080 PRINT
    0x557af7fe0a80 ---------A   01090 PRINT"  In the course of making a puzzle, the machine may"
    0x557af7fe0c10 ---------A   01100 PRINT"find that it can't put a particular word anywhere, and"
    0x557af7fe4fe0 ---------A   01110 PRINT"so will ask you if it should start the whole puzzle"
    0x557af7fe5170 ---------A   01120 PRINT"over.  If you don't want it to start over, typing 'NO'"
    0x557af7fe5300 ---------A   01130 PRINT"will throw away that particular word.  If this persists,"
    0x557af7fe5450 ---------A   01140 PRINT"try either less words or bigger puzzle dimensions!"
    0x557af7fe5510 ---------A   01150 PRINT:PRINT
    0x557af7fe5560 ---------A   01160 CLEAR3000
    0x557af7fe5cc0 ---------A   01170 DEF FNA(Z)=INT(RND(0)*Z+1)
    0x557af7fe5e90 ---------A   01180 INPUT"HOW MANY COLUMNS DOES YOUR PRINTER HAVE";TW
    0x557af7fe6050 ---------A   01190 INPUT"DO YOU WANT A SOLUTION PRINTOUT";X$
    0x557af7fe63a0 ---------A T 01200 INPUT"WHAT IS TO BE THE WIDTH OF YOUR PUZZLE";W:MD=W
    0x557af7fe6620 ---------A   01210 IFW*2<=TW THEN 1230
    0x557af7fe6910 ---------A   01220 PRINT"THAT WILL NOT FIT IN";TW;" COLUMNS.":GOTO1200
    0x557af7fe6ad0 ---------A T 01230 IFW<1 THEN 1200
    0x557af7fe6ec0 ---------A T 01240 INPUT"THE LENGTH OF";L:IFL>W THEN MD=L
    0x557af7fe70b0 ----------   01250 IFL<1 THEN 1240
    0x557af7fe7250 ---------- T 01260 INPUT"WHAT IS THE MAXIMUM NUMBER OF WORDS IN THE PUZZLE";M
    0x557af7fe7440 ----------   01270 IFM>=2 THEN 1290
    0x557af7fe75f0 ----------   01280 PRINT"SORRY; THERE MUST BE AT LEAST 2 WORDS.":GOTO1260
    0x557af7fe7650 ---------- T 01290 PRINT
    0x557af7fe79b0 ----------   01300 DIMA$(L,W),W$(M)
    0x557af7fe7fc0 ----------   01310 DIMW(M,3),DXY(8,2),DD(28)
    0x557af7fe8130 ----------   01320 PRINT"NOW ENTER A HEADING THAT WILL BE PRINTED OVER THE PUZZLE:"
    0x557af7fe85d0 ----------   01330 PRINT"(";TW;"CHARACTERS MAXIMUM! )"
    0x557af7fe8750 ----------   01340 INPUTXY$
    0x557af7fe88e0 ----------   01350 PRINT"OK . . . Enter a word at each question mark."
    0x557af7fe8a60 ----------   01360 PRINT"to redo the previous word, type a hyphen (-)."
    0x557af7fe8bb0 ----------   01370 PRINT"When you run out of words, type a period (.)."
    0x557af7fe8e30 ----------   01380 FORI=1TOM
    0x557af7fe9680 ---------- T 01390 INPUTT$:IFT$="-" THEN I=I-1:PRINT"REDO";W$(I);". . .":GOTO1390
    0x557af7fe9ac0 ----------   01400 IFT$="." THEN M=I-1:GOTO1600
    0x557af7fe9eb0 ---------- T 01410 IFLEN(T$)=0 THEN PRINT"INPUT ERROR; REDO:":GOTO1390
    0x557af7fea0b0 ----------   01420 J=1
    0x557af7fea7a0 ---------- T 01430 TE$=MID$(T$,J,1):IFTE$>="a"ANDTE$<="z" THEN 1500
    0x557af7feab60 ----------   01440 IFTE$<"A"ORTE$>"Z" THEN 1460
    0x557af7feb6a0 ----------   01450 T$=LEFT$(T$,J-1)+CHR$(ASC(MID$(T$,J,1))+32)+RIGHT$(T$,LEN(T$)-J):GOTO1500
    0x557af7feb9f0 ---------- T 01460 IFTE$=T$ THEN T$="":GOTO1410
    0x557af7febee0 ----------   01470 IFJ=LEN(T$) THEN T$=LEFT$(T$,J-1):GOTO1510
    0x557af7fec600 ----------   01480 IFJ=1 THEN T$=RIGHT$(T$,LEN(T$)-1):J=J-1:GOTO1500
    0x557af7fecd20 ----------   01490 T$=LEFT$(T$,J-1)+RIGHT$(T$,LEN(T$)-J):J=J-1
    0x557af7fed0e0 ---------- T 01500 J=J+1:IFJ<=LEN(T$) THEN 1430
    0x557af7fed390 ---------- T 01510 PRINT"-";T$;"-"
    0x557af7fed580 ----------   01520 IFLEN(T$)<=MD THEN 1550
    0x557af7fed700 ----------   01530 PRINT"THAT'S TOO LONG, I'M AFRAID.";
    0x557af7fed8a0 ----------   01540 PRINT" TRY ANOTHER ONE:":GOTO1390
    0x557af7fede50 ---------- T 01550 FORIZ=1TOI-1:IFW$(IZ)<>T$ THEN NEXT:GOTO1570
    0x557af7fedfe0 ----------   01560 PRINT"YOU ENTERED THAT ONE ALREADY. TRY ANOTHER:":GOTO1390
    0x557af7fee160 ---------- T 01570 W$(I)=T$
    0x557af7fee210 ----------   01580 NEXTI
    0x557af7fee4e0 ----------   01590 PRINT"THAT'S IT...";M;"WORDS."
    0x557af7fee620 ---------- T 01600 PRINT"NOW LET ME PONDER THIS........."
    0x557af7fee8d0 ----------   01610 FORI=1TOM-1
    0x557af7feeb80 ----------   01620 FORJ=I+1TOM
    0x557af7fef3c0 ----------   01630 IFLEN(W$(I))<LEN(W$(J)) THEN HZ$=W$(I):W$(I)=W$(J):W$(J)=HZ$
    0x557af7fef490 ----------   01640 NEXT:NEXT
    0x557af7fefe10 ----------   01650 FORI=1TO8:READDXY(I,1),DXY(I,2):NEXT
    0x557af7ff0190 ----------   01660 FORI=1TO28:READDD(I):NEXT
    0x557af7ff0e20 ---------A   01670 DATA0,1,1,1,1,0,1,-1,0,-1,-1,-1,-1,0,-1,1
    0x557af7ff2390 ---------A   01680 DATA2,4,6,8,2,4,6,8,2,4,6,8,2,4,6,8,2,4,6,8,2,4,6,8,1,3,5,7
    0x557af7ff2560 ---------- T 01690 FORI=1TOM
    0x557af7ff27e0 ----------   01700 LN=LEN(W$(I))
    0x557af7ff29d0 ----------   01710 NT=0
    0x557af7ff2cb0 ---------- T 01720 SD=DD(FNA(28))
    0x557af7ff36b0 ----------   01730 SX=FNA(W):X1=SX+(LN-1)*DXY(SD,1):IFX1<1ORX1>W THEN 1720
    0x557af7ff4020 ----------   01740 SY=FNA(L):X1=SY+(LN-1)*DXY(SD,2):IFX1<1ORX1>L THEN 1720
    0x557af7ff4530 ----------   01750 NT=NT+1:IFNT<>W*L*2 THEN 1800
    0x557af7ff4850 ----------   01760 PRINT"COUNDN'T FIT  '";W$(I);"' IN THE PUZZLE."
    0x557af7ff49e0 ----------   01770 INPUT"DO YOU WANT ME TO START OVER";A$
    0x557af7ff4cc0 ----------   01780 IFLEFT$(A$,1)="Y" THEN 1690
    0x557af7ff4f10 ----------   01790 W$(I)="":GOTO1880
    0x557af7ff51c0 ---------- T 01800 J=SY:K=SX
    0x557af7ff5440 ----------   01810 FORP=1TOLN
    0x557af7ff5af0 ----------   01820 IF LEN(A$(J,K))<>0 AND A$(J,K)<>MID$(W$(I),P,1) THEN 1720
    0x557af7ff6110 ----------   01830 J=J+DXY(SD,2):K=K+DXY(SD,1):NEXTP
    0x557af7ff6380 ----------   01840 J=SY:K=SX
    0x557af7ff6900 ----------   01850 FORP=1TOLN:A$(J,K)=MID$(W$(I),P,1)
    0x557af7ff6ee0 ----------   01860 J=J+DXY(SD,2):K=K+DXY(SD,1):NEXT
    0x557af7ff7520 ----------   01870 W(I,1)=SX:W(I,2)=SY:W(I,3)=SD
    0x557af7ff75d0 ---------- T 01880 NEXTI
    0x557af7ff77b0 ----------   01890 FORI=1TOL
    0x557af7ff79b0 ----------   01900 FORJ=1TOW
    0x557af7ff8000 ----------   01910 IFA$(I,J)="" THEN A$(I,J)=CHR$(FNA(26)+96)
    0x557af7ff80d0 ----------   01920 NEXT:NEXT
    0x557af7ff85e0 ----------   01930 FORI=1TOM-1:FORJ=I+1TOM
    0x557af7ff8830 ----------   01940 IFW$(I)<=W$(J) THEN 1970
    0x557af7ff8d30 ----------   01950 HZ$=W$(I):W$(I)=W$(J):W$(J)=HZ$
    0x557af7ff9690 ----------   01960 FORK=1TO3:HZ=W(I,K):W(I,K)=W(J,K):W(J,K)=HZ:NEXTK
    0x557af7ff97f0 ---------- T 01970 NEXTJ:NEXTI
    0x557af7ff99f0 ----------   01980 INPUT"HOW MANY COPIES OF THIS PUZZLE DO YOU WANT";N
    0x557af7ff9b60 ----------   01990 PRINT"FOR EACH COPY, HIT RETURN TO BEGIN PRINTING..."
    0x557af7ff9e90 ----------   02000 FORC=1TON:GOSUB1070:NEXT:GOTO2030
    0x557af7ffb6c0 ----------   02010 LPRINTCHR$(ASC(A$(J,K))-32);" ";
    0x557af7ffc570 ----------   02020 LPRINTW$(J),
    0x557af7ffcd00 ---------- T 02030 IFLEFT$(X$,1)="Y"ORLEFT$(X$,1)="y" THEN 2060
    0x557af7ffcd60 ---------A   02040 END
    0x557af7ffcde0 ---------A   02050 '
    0x557af7ffd510 ---------- T 02060 FORI=1TOL:FORJ=1TOW:A$(I,J)=".":NEXTJ:NEXTI
    0x557af7ffd700 ----------   02070 FORI=1TOM
    0x557af7ffdd20 ----------   02080 LN=LEN(W$(I)):J=W(I,2):K=W(I,1)
    0x557af7ffdf00 ----------   02090 FORP=1TOLN
    0x557af7ffe2e0 ----------   02100 A$(J,K)=MID$(W$(I),P,1)
    0x557af7ffeaf0 ----------   02110 J=J+DXY(W(I,3),2):K=K+DXY(W(I,3),1):NEXTP
    0x557af7ffebb0 ----------   02120 NEXTI
    0x557af7ffed70 ----------   02130 XY$="HERE IS THE ANSWER KEY:"
    0x557af7fff5f0 ----------   02140 GOSUB2170
    0x557af7fff6a0 ----------   02150 LPRINT:LPRINT
    0x557af7fff6f0 ---------A   02160 END
    0x557af7ff9fc0 ---------B G 02170 INPUTA$:PRINT
    0x557af7ffa460 ---------B   02180 T=(TW-2*W)/2:PRINT
    0x557af7ffa4e0 ---------B   02190 LPRINT
    0x557af7ffa8b0 ---------B   02200 LPRINTTAB((TW-LEN(XY$))/2);XY$
    0x557af7ffa980 ---------B   02210 LPRINT:LPRINT
    0x557af7ffacb0 ---------B   02220 FORJ=1TOL:LPRINTTAB(T);
    0x557af7ffb2a0 ---------B   02230 FORK=1TOW:IFA$(J,K)="." THEN LPRINT". ";:GOTO2240
    0x557af7ffb7c0 ---------B T 02240 NEXT:LPRINT:NEXT
    0x557af7ffb8a0 ---------B   02250 LPRINT:LPRINT
    0x557af7ffb9f0 ---------B   02260 LPRINT"FIND THESE HIDDEN WORDS IN THE ABOVE PUZZLE:"
    0x557af7ffba80 ---------B   02270 LPRINT
    0x557af7ffbed0 ---------B   02280 FORJ=1TOM:IFLEN(W$(J))=0 THEN 2300
    0x557af7ffc400 ---------B   02290 IFPOS(0)+LEN(W$(J))>TW-2 THEN LPRINT
    0x557af7ffc710 ---------B T 02300 NEXT:LPRINT:LPRINT:LPRINT:LPRINT
    0x557af7ffc760 ---------B   02310 RETURN
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
char* data_01670s[]={"0","1","1","1","1","0","1","-1","0","-1","-1","-1","-1","0","-1","1"};
char* data_01680s[]={"2","4","6","8","2","4","6","8","2","4","6","8","2","4","6","8","2","4","6","8","2","4","6","8","1","3","5","7"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1670, 16,data_01670s},
    { 1680, 28,data_01680s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char* A_str_arr[1][1];  // Comments?
char* A_str;        // Comments?
int   C_int;        // Comments?
int   DD_int_arr[29];   // Comments?
int   DXY_int_arr[9][3];// Comments?
int   HZ_int;       // Comments?
char* HZ_str;       // Comments?
int   I_int;        // Comments?
int   IZ_int;       // Comments?
int   J_int;        // Comments?
int   K_int;        // Comments?
int   L_int;        // Comments?
int   LN_int;       // Comments?
int   M_int;        // Comments?
int   MD_int;       // Comments?
int   N_int;        // Comments?
int   NT_int;       // Comments?
int   P_int;        // Comments?
int   SD_int;       // Comments?
int   SX_int;       // Comments?
int   SY_int;       // Comments?
int   T_int;        // Comments?
char* T_str;        // Comments?
char* TE_str;       // Comments?
int   TW_int;       // Comments?
int   W_int;        // Comments?
int   W_int_arr[1][4];  // Comments?
char* W_str_arr[1]; // Comments?
char* X_str;        // Comments?
int   X1_int;       // Comments?
char* XY_str;       // Comments?
int   Z_int;        // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02170();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused Z
int FNA(int Z){
    int rtn=INT(RND(0)*Z_int+1);
    return(rtn);
}

//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------

void Routine_02170(){
    // 02170 INPUTA$:PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02180 T=(TW-2*W)/2:PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02190 LPRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02200 LPRINTTAB((TW-LEN(XY$))/2);XY$
    b2c_fprintf(stdout,"%s%s",TAB((TW_int-LEN(XY_str))/2),XY_str); b2c_fprintf(stdout,"\n");
    // 02210 LPRINT:LPRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02220 FORJ=1TOL:LPRINTTAB(T);
    b2c_fprintf(stdout,"%s",TAB(T_int)); 
    // 02230 FORK=1TOW:IFA$(J,K)="." THEN LPRINT". ";:GOTO2240
    goto Lbl_02240;

  Lbl_02240:
    // 02240 NEXT:LPRINT:NEXT
    int dummy_2240=0; // Ignore this line.
};
// 02250 LPRINT:LPRINT
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
// 02260 LPRINT"FIND THESE HIDDEN WORDS IN THE ABOVE PUZZLE:"
b2c_fprintf(stdout,"FIND THESE HIDDEN WORDS IN THE ABOVE PUZZLE:"); b2c_fprintf(stdout,"\n");
// 02270 LPRINT
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
// 02280 FORJ=1TOM:IFLEN(W$(J))=0 THEN 2300
if(LEN(W_str_arr[(int)J_int])==0)goto Lbl_02300;
// 02290 IFPOS(0)+LEN(W$(J))>TW-2 THEN LPRINT
if(POS(0)+LEN(W_str_arr[(int)J_int])>TW_int-2) {
}

  Lbl_02300:
// 02300 NEXT:LPRINT:LPRINT:LPRINT:LPRINT
b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
// 02310 RETURN
return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM NOTE: Basic language type forced to be:
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 PRINTTAB(20);"WORD SEARCH PUZZLE"
    b2c_fprintf(stdout,"%sWORD SEARCH PUZZLE",TAB(20)); b2c_fprintf(stdout,"\n");
    // 01030 PRINT:PRINT:PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01040 PRINT"  This program is a word search puzzle generator!!"
    b2c_fprintf(stdout,"  This program is a word search puzzle generator!!"); b2c_fprintf(stdout,"\n");
    // 01050 PRINT"The program takes a set on input strings, purges all"
    b2c_fprintf(stdout,"The program takes a set on input strings, purges all"); b2c_fprintf(stdout,"\n");
    // 01060 PRINT"non-alphabetic characters out of them, and incorporates"
    b2c_fprintf(stdout,"non-alphabetic characters out of them, and incorporates"); b2c_fprintf(stdout,"\n");
    // 01070 PRINT"them into a word search puzzle."
    b2c_fprintf(stdout,"them into a word search puzzle."); b2c_fprintf(stdout,"\n");
    // 01080 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01090 PRINT"  In the course of making a puzzle, the machine may"
    b2c_fprintf(stdout,"  In the course of making a puzzle, the machine may"); b2c_fprintf(stdout,"\n");
    // 01100 PRINT"find that it can't put a particular word anywhere, and"
    b2c_fprintf(stdout,"find that it can't put a particular word anywhere, and"); b2c_fprintf(stdout,"\n");
    // 01110 PRINT"so will ask you if it should start the whole puzzle"
    b2c_fprintf(stdout,"so will ask you if it should start the whole puzzle"); b2c_fprintf(stdout,"\n");
    // 01120 PRINT"over.  If you don't want it to start over, typing 'NO'"
    b2c_fprintf(stdout,"over.  If you don't want it to start over, typing 'NO'"); b2c_fprintf(stdout,"\n");
    // 01130 PRINT"will throw away that particular word.  If this persists,"
    b2c_fprintf(stdout,"will throw away that particular word.  If this persists,"); b2c_fprintf(stdout,"\n");
    // 01140 PRINT"try either less words or bigger puzzle dimensions!"
    b2c_fprintf(stdout,"try either less words or bigger puzzle dimensions!"); b2c_fprintf(stdout,"\n");
    // 01150 PRINT:PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01160 CLEAR3000
    ClearMemory(3000,4294967295);
    // 01170 DEF FNA(Z)=INT(RND(0)*Z+1)
    // 01180 INPUT"HOW MANY COLUMNS DOES YOUR PRINTER HAVE";TW
    // Start of Basic INPUT statement 01180
    printf("HOW MANY COLUMNS DOES YOUR PRINTER HAVE");
    char inpbuf_01180[100];
    if(fgets(inpbuf_01180,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01180=strtok(inpbuf_01180," ,\t\n");
        TW_int=strdup(inpbuf_01180);
    }; // End of Basic INPUT statement 01180
    // 01190 INPUT"DO YOU WANT A SOLUTION PRINTOUT";X$
    // Start of Basic INPUT statement 01190
    printf("DO YOU WANT A SOLUTION PRINTOUT");
    char inpbuf_01190[100];
    if(fgets(inpbuf_01190,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01190=strtok(inpbuf_01190," ,\t\n");
        X_str=strdup(inpbuf_01190);
    }; // End of Basic INPUT statement 01190

  Lbl_01200:
    // 01200 INPUT"WHAT IS TO BE THE WIDTH OF YOUR PUZZLE";W:MD=W
    MD_int = W_int;
    // 01210 IFW*2<=TW THEN 1230
    if(W_int*2<=TW_int)goto Lbl_01230;
    // 01220 PRINT"THAT WILL NOT FIT IN";TW;" COLUMNS.":GOTO1200
    goto Lbl_01200;

  Lbl_01230:
    // 01230 IFW<1 THEN 1200
    if(W_int<1)goto Lbl_01200;

  Lbl_01240:
    // 01240 INPUT"THE LENGTH OF";L:IFL>W THEN MD=L
    if(L_int>W_int) {
    }
    // 01670 DATA0,1,1,1,1,0,1,-1,0,-1,-1,-1,-1,0,-1,1
    // 01680 DATA2,4,6,8,2,4,6,8,2,4,6,8,2,4,6,8,2,4,6,8,2,4,6,8,1,3,5,7
    // 02040 END
    // 02050 '
    // 02160 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
