/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/mastrmnd.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x59fae12d2b80 ---------A   00002 PRINT TAB(30);"MASTERMIND"
    0x59fae12d3f30 ---------A   00004 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x59fae12d40b0 ---------A   00006 PRINT: PRINT: PRINT
    0x59fae12c22b0 ---------A   00010 REM
    0x59fae12d19e0 ---------A   00020 REM     MASTERMIND II
    0x59fae12d1840 ---------A   00030 REM     STEVE NORTH
    0x59fae12d3aa0 ---------A   00040 REM     CREATIVE COMPUTING
    0x59fae12d2040 ---------A   00050 REM     PO BOX 789-M MORRISTOWN NEW JERSEY 07960
    0x59fae12d20c0 ---------A   00060 REM
    0x59fae12d1e40 ---------A   00070 REM
    0x59fae12d16d0 ---------A T 00080 INPUT "NUMBER OF COLORS";C9
    0x59fae12d4100 ---------A   00090 IF C9>8 THEN PRINT "NO MORE THAN 8, PLEASE!":GOTO 80
    0x59fae12d26c0 ----------   00100 INPUT "NUMBER OF POSITIONS";P9
    0x59fae12d2860 ----------   00110 INPUT "NUMBER OF ROUNDS";R9
    0x59fae12d9c20 ----------   00120 P=C9^P9
    0x59fae12d9df0 ----------   00130 PRINT "TOTAL POSSIBILITIES =";P
    0x59fae12da390 ----------   00140 H=0:C=0
    0x59fae12db600 ----------   00150 DIM Q(P9),S(10,2),S$(10),A$(P9),G$(P9),I(P),H$(P9)
    0x59fae12db8e0 ----------   00160 L$="BWRGOYPT"
    0x59fae12db950 ----------   00170 PRINT
    0x59fae12db9d0 ----------   00180 PRINT
    0x59fae12dbb30 ----------   00190 PRINT "COLOR     LETTER"
    0x59fae12dbc80 ----------   00200 PRINT "=====     ======"
    0x59fae12dc030 ----------   00210 FOR X=1 TO C9
    0x59fae12dc260 ----------   00220 READ X$
    0x59fae12dc860 ----------   00230 PRINT X$;TAB(13);MID$(L$,X,1)
    0x59fae12dc990 ----------   00240 NEXT X
    0x59fae12dca10 ----------   00250 PRINT
    0x59fae12dcdc0 ----------   00260 FOR R=1 TO R9
    0x59fae12dce50 ----------   00270 PRINT 
    0x59fae12dd1a0 ----------   00280 PRINT "ROUND NUMBER";R;"----"
    0x59fae12dd220 ----------   00290 PRINT
    0x59fae12dd3d0 ----------   00300 PRINT "GUESS MY COMBINATION.":PRINT
    0x59fae12dd660 ---------A   00310 REM     GET A COMBINATION
    0x59fae12ddd20 ----------   00320 A=INT(P*RND(1)+1)
    0x59fae12ddd90 ----------   00330 GOSUB 3000
    0x59fae12de070 ----------   00340 FOR X=1 TO A
    0x59fae12de0f0 ----------   00350 GOSUB 3500
    0x59fae12de210 ----------   00360 NEXT X
    0x59fae12de5d0 ----------   00370 FOR M=1 TO 10
    0x59fae12dea90 ---------- T 00380 PRINT "MOVE # ";M;" GUESS ";:INPUT X$
    0x59fae12ded20 ----------   00390 IF X$="BOARD" THEN 2000
    0x59fae12defd0 ----------   00400 IF X$="QUIT" THEN 2500
    0x59fae12df4e0 ----------   00410 IF LEN(X$)<>P9 THEN PRINT "BAD NUMBER OF POSITIONS.":GOTO 380
    0x59fae12df550 ---------A   00420 REM     UNPACK X$ INTO G$(1-P9)
    0x59fae12df850 ----------   00430 FOR X=1 TO P9
    0x59fae12dfc30 ----------   00440 FOR Y=1 TO C9
    0x59fae12e03b0 ----------   00450 IF MID$(X$,X,1)=MID$(L$,Y,1) THEN 480
    0x59fae12e04f0 ----------   00460 NEXT Y
    0x59fae12e0b50 ----------   00470 PRINT "'"; MID$(X$,X,1); "' IS UNRECOGNIZED.":GOTO 380
    0x59fae12e10d0 ---------- T 00480 G$(X)=MID$(X$,X,1)
    0x59fae12e1200 ----------   00490 NEXT X
    0x59fae12e12e0 ---------A   00500 REM     NOW WE CONVERT Q(1-P9) INTO A$(1-P9) [ACTUAL GUESS]
    0x59fae12e1380 ----------   00510 GOSUB 4000
    0x59fae12e1400 ---------A   00520 REM     AND GET NUMBER OF BLACKS AND WHITES
    0x59fae12e1480 ----------   00530 GOSUB 4500
    0x59fae12e17b0 ----------   00540 IF B=P9 THEN 630
    0x59fae12e1840 ---------A   00550 REM     TELL HUMAN RESULTS
    0x59fae12e1eb0 ----------   00560 PRINT "YOU HAVE ";B;" BLACKS AND ";W;" WHITES."
    0x59fae12e1f40 ---------A   00570 REM     SAVE ALL THIS STUFF FOR BOARD PRINTOUT LATER
    0x59fae12e2260 ----------   00580 S$(M)=X$
    0x59fae12e2630 ----------   00590 S(M,1)=B
    0x59fae12e2a00 ----------   00600 S(M,2)=W
    0x59fae12e2b30 ----------   00610 NEXT M
    0x59fae12e2d30 ----------   00620 PRINT "YOU RAN OUT OF MOVES!  THAT'S ALL YOU GET!":GOTO 640
    0x59fae12e31c0 ----------   00622 GOSUB 4000
    0x59fae12e3330 ----------   00623 PRINT "THE ACTUAL COMBINATION WAS: ";
    0x59fae12e3620 ----------   00624 FOR X=1 TO P9
    0x59fae12e3880 ----------   00625 PRINT A$(X);
    0x59fae12e39b0 ----------   00626 NEXT X
    0x59fae12e3a50 ----------   00627 PRINT
    0x59fae12e3da0 ---------- T 00630 PRINT "YOU GUESSED IT IN ";M;" MOVES!"
    0x59fae12e40f0 ---------- T 00640 H=H+M
    0x59fae12e4160 ----------   00650 GOSUB 5000
    0x59fae12e41c0 ---------A T 00660 REM
    0x59fae12e4260 ---------A   00670 REM     NOW COMPUTER GUESSES
    0x59fae12e42e0 ---------A   00680 REM
    0x59fae12e45e0 ----------   00690 FOR X=1 TO P
    0x59fae12e48e0 ----------   00700 I(X)=1
    0x59fae12e4a10 ----------   00710 NEXT X
    0x59fae12e4bb0 ----------   00720 PRINT "NOW I GUESS.  THINK OF A COMBINATION."
    0x59fae12e4d30 ----------   00730 INPUT "HIT RETURN WHEN READY:";X$
    0x59fae12e5010 ----------   00740 FOR M=1 TO 10
    0x59fae12e50a0 ----------   00750 GOSUB 3000
    0x59fae12e5100 ---------A   00760 REM     FIND A GUESS
    0x59fae12e57c0 ----------   00770 G=INT(P*RND(1)+1)
    0x59fae12e5af0 ----------   00780 IF I(G)=1 THEN 890
    0x59fae12e5e10 ----------   00790 FOR X=G TO P
    0x59fae12e6150 ----------   00800 IF I(X)=1 THEN 880
    0x59fae12e6290 ----------   00810 NEXT X
    0x59fae12e6590 ----------   00820 FOR X=1 TO G
    0x59fae12e68d0 ----------   00830 IF I(X)=1 THEN 880
    0x59fae12e6a10 ----------   00840 NEXT X
    0x59fae12e6be0 ----------   00850 PRINT "YOU HAVE GIVEN ME INCONSISTENT INFORMATION."
    0x59fae12e6d50 ----------   00860 PRINT "TRY AGAIN, AND THIS TIME PLEASE BE MORE CAREFUL."
    0x59fae12e6dc0 ----------   00870 GOTO 660
    0x59fae12e7000 ---------- T 00880 G=X
    0x59fae12e7080 ---------A T 00890 REM     NOW WE CONVERT GUESS #G INTO G$
    0x59fae12e7380 ----------   00900 FOR X=1 TO G
    0x59fae12e7400 ----------   00910 GOSUB 3500
    0x59fae12e7520 ----------   00920 NEXT X
    0x59fae12e75b0 ----------   00930 GOSUB 6000
    0x59fae12e7710 ----------   00940 PRINT "MY GUESS IS: ";
    0x59fae12e7a00 ----------   00950 FOR X=1 TO P9
    0x59fae12e7c60 ----------   00960 PRINT H$(X);
    0x59fae12e7d90 ----------   00970 NEXT X
    0x59fae12e8180 ----------   00980 INPUT "  BLACKS, WHITES ";B1,W1
    0x59fae12e8400 ----------   00990 IF B1=P9 THEN 1120
    0x59fae12e8480 ----------   01000 GOSUB 3000
    0x59fae12e8760 ----------   01010 FOR X=1 TO P
    0x59fae12e87f0 ----------   01020 GOSUB 3500
    0x59fae12e8b10 ----------   01030 IF I(X)=0 THEN 1070
    0x59fae12e8b90 ----------   01035 GOSUB 6500
    0x59fae12e8bf0 ----------   01040 GOSUB 4000
    0x59fae12e8c60 ----------   01050 GOSUB 4500
    0x59fae12e93d0 ----------   01060 IF B1<>B OR W1<>W THEN I(X)=0
    0x59fae12e9510 ---------- T 01070 NEXT X
    0x59fae12e9650 ----------   01080 NEXT M
    0x59fae12e97f0 ----------   01090 PRINT "I USED UP ALL MY MOVES!"
    0x59fae12e9960 ----------   01100 PRINT "I GUESS MY CPU IS JUST HAVING AN OFF DAY."
    0x59fae12e99e0 ----------   01110 GOTO 1130
    0x59fae12e9d20 ---------- T 01120 PRINT "I GOT IT IN ";M;" MOVES!"
    0x59fae12ea070 ---------- T 01130 C=C+M
    0x59fae12ea0e0 ----------   01140 GOSUB 5000
    0x59fae12ea200 ----------   01150 NEXT R
    0x59fae12ea370 ----------   01160 PRINT "GAME OVER"
    0x59fae12ea4c0 ----------   01170 PRINT "FINAL SCORE:"
    0x59fae12ea530 ----------   01180 GOSUB 5040
    0x59fae12ea570 ----------   01190 STOP
    0x59fae12eae00 ---------A T 02000 REM
    0x59fae12eaea0 ---------A   02010 REM     BOARD PRINTOUT ROUTINE
    0x59fae12eaf20 ---------A   02020 REM
    0x59fae12eafa0 ----------   02025 PRINT
    0x59fae12eb110 ----------   02030 PRINT "BOARD"
    0x59fae12eb280 ----------   02040 PRINT "MOVE     GUESS          BLACK     WHITE"
    0x59fae12eb750 ----------   02050 FOR Z=1 TO M-1
    0x59fae12ec390 ----------   02060 PRINT Z;TAB(9);S$(Z);TAB(25);S(Z,1);TAB(35);S(Z,2)
    0x59fae12ec4c0 ----------   02070 NEXT Z
    0x59fae12ec540 ----------   02075 PRINT
    0x59fae12ec5b0 ----------   02080 GOTO 380
    0x59fae12ec610 ---------A T 02500 REM
    0x59fae12ec6a0 ---------A   02510 REM     QUIT ROUTINE
    0x59fae12ec720 ---------A   02520 REM
    0x59fae12ec8d0 ----------   02530 PRINT "QUITTER!  MY COMBINATION WAS: ";
    0x59fae12ec940 ----------   02535 GOSUB 4000
    0x59fae12ecc20 ----------   02540 FOR X=1 TO P9
    0x59fae12ece80 ----------   02550 PRINT A$(X);
    0x59fae12ecfb0 ----------   02560 NEXT X
    0x59fae12ed030 ----------   02565 PRINT
    0x59fae12ed180 ----------   02570 PRINT "GOOD BYE"
    0x59fae12ed1d0 ----------   02580 STOP
    0x59fae12ed250 ---------B G 03000 REM
    0x59fae12ed300 ---------B   03010 REM     INITIALIZE Q(1-P9) TO ZEROS
    0x59fae12ed380 ---------B   03020 REM
    0x59fae12ed680 ---------B   03030 FOR S=1 TO P9
    0x59fae12ed980 ---------B   03040 Q(S)=0
    0x59fae12edab0 ---------B   03050 NEXT S
    0x59fae12edb10 ---------B   03060 RETURN
    0x59fae12edb90 ---------C G 03500 REM
    0x59fae12edc30 ---------C   03510 REM     INCREMENT Q(1-P9)
    0x59fae12edcb0 ---------C   03520 REM
    0x59fae12ee010 ---------C   03522 IF Q(1)>0 THEN 3530
    0x59fae12ee0c0 ---------C   03524 REM  IF ZERO, THIS IS OUR FIRST INCREMENT: MAKE ALL ONES
    0x59fae12ee3c0 ---------C   03526 FOR S=1 TO P9
    0x59fae12ee6c0 ---------C   03527 Q(S)=1
    0x59fae12ee7f0 ---------C   03528 NEXT S
    0x59fae12ee850 ---------C   03529 RETURN
    0x59fae12eea70 ---------C T 03530 Q=1
    0x59fae12eef70 ---------C T 03540 Q(Q)=Q(Q)+1
    0x59fae12ef300 ---------C   03550 IF Q(Q)<=C9 THEN RETURN
    0x59fae12ef600 ---------C   03560 Q(Q)=1
    0x59fae12ef930 ---------C   03570 Q=Q+1
    0x59fae12ef9a0 ---------C   03580 GOTO 3540
    0x59fae12efa00 ---------D G 04000 REM
    0x59fae12efab0 ---------D   04010 REM     CONVERT Q(1-P9) TO A$(1-P9)
    0x59fae12efb30 ---------D   04020 REM
    0x59fae12efe40 ---------D   04030 FOR S=1 TO P9
    0x59fae12f04c0 ---------D   04040 A$(S)=MID$(L$,Q(S),1)
    0x59fae12f05f0 ---------D   04050 NEXT S
    0x59fae12f0650 ---------D   04060 RETURN
    0x59fae12f06d0 ---------E G 04500 REM
    0x59fae12f0790 ---------E   04510 REM     GET NUMBER OF BLACKS (B) AND WHITES (W)
    0x59fae12f0840 ---------E   04520 REM     MASHES G$ AND A$ IN THE PROCESS
    0x59fae12f08c0 ---------E   04530 REM
    0x59fae12f0f80 ---------E   04540 B=0:W=0:F=0
    0x59fae12f1280 ---------E   04550 FOR S=1 TO P9
    0x59fae12f16c0 ---------E   04560 IF G$(S)<>A$(S) THEN 4620
    0x59fae12f1a00 ---------E   04570 B=B+1
    0x59fae12f1df0 ---------E   04580 G$(S)=CHR$(F)
    0x59fae12f22e0 ---------E   04590 A$(S)=CHR$(F+1)
    0x59fae12f2610 ---------E   04600 F=F+2
    0x59fae12f2680 ---------E   04610 GOTO 4660
    0x59fae12f2a30 ---------E T 04620 FOR T=1 TO P9
    0x59fae12f2e80 ---------E   04630 IF G$(S)<>A$(T) THEN 4650
    0x59fae12f32f0 ---------E   04640 IF G$(T)=A$(T) THEN 4650
    0x59fae12f4230 ---------E   04645 W=W+1:A$(T)=CHR$(F):G$(S)=CHR$(F+1):F=F+2:GOTO 4660
    0x59fae12f4350 ---------E T 04650 NEXT T
    0x59fae12f4490 ---------E T 04660 NEXT S
    0x59fae12f44f0 ---------E   04670 RETURN
    0x59fae12f4570 ---------F G 05000 REM
    0x59fae12f4600 ---------F   05010 REM     PRINT SCORE
    0x59fae12f4680 ---------F   05020 REM
    0x59fae12f47f0 ---------F   05030 PRINT "SCORE:"
    0x59fae12f4a50 ---------F G 05040 PRINT "     COMPUTER ";C
    0x59fae12f4ca0 ---------F   05050 PRINT "     HUMAN    ";H
    0x59fae12f4d10 ---------F   05060 PRINT
    0x59fae12f4d60 ---------F   05070 RETURN
    0x59fae12f4de0 ---------A   05500 REM
    0x59fae12f4e90 ---------A   05510 REM     CONVERT Q(1-P9) INTO G$(1-P9)
    0x59fae12f4f10 ---------A   05520 REM
    0x59fae12f5220 ----------   05530 FOR S=1 TO P9
    0x59fae12f58a0 ----------   05540 G$(S)=MID$(L$,Q(S),1)
    0x59fae12f59d0 ----------   05550 NEXT S
    0x59fae12f5a30 ----------   05560 RETURN
    0x59fae12f5ab0 ---------G G 06000 REM
    0x59fae12f5b60 ---------G   06010 REM     CONVERT Q(1-P9) TO H$(1-P9)
    0x59fae12f5be0 ---------G   06020 REM
    0x59fae12f5ef0 ---------G   06030 FOR S=1 TO P9
    0x59fae12f6570 ---------G   06040 H$(S)=MID$(L$,Q(S),1)
    0x59fae12f66a0 ---------G   06050 NEXT S
    0x59fae12f6700 ---------G   06060 RETURN
    0x59fae12f6780 ---------H G 06500 REM
    0x59fae12f6810 ---------H   06510 REM     COPY H$ INTO G$
    0x59fae12f6890 ---------H   06520 REM
    0x59fae12f6b90 ---------H   06530 FOR S=1 TO P9
    0x59fae12f6f90 ---------H   06540 G$(S)=H$(S)
    0x59fae12f70c0 ---------H   06550 NEXT S
    0x59fae12f7120 ---------H   06560 RETURN
    0x59fae12f71d0 ---------A   08000 REM     PROGRAM DATA FOR COLOR NAMES
    0x59fae12f79a0 ---------A   08010 DATA BLACK,WHITE,RED,GREEN,ORANGE,YELLOW,PURPLE,TAN
    0x59fae12f7a30 ---------A   09998 REM   ...WE'RE SORRY BUT IT'S TIME TO GO...
    0x59fae12f7a90 ---------A   09999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00080      00090T
     00380      00410T, 00470T, 02080T
     00480      00450T
     00630      00540T
     00640      00620T
     00660      00870T
     00880      00800T, 00830T
     00890      00780T
     01070      01030T
     01120      00990T
     01130      01110T
     02000      00390T
     02500      00400T
     03000      00330G, 00750G, 01000G
     03500      00350G, 00910G, 01020G
     03530      03522T
     03540      03580T
     04000      00510G, 00622G, 01040G, 02535G
     04500      00530G, 01050G
     04620      04560T
     04650      04630T, 04640T
     04660      04610T, 04645T
     05000      00650G, 01140G
     05040      01180G
     06000      00930G
     06500      01035G

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x59fae12d2b80 (00002)   0x59fae12d2b80 (00002)   0x59fae12f7a90 (09999)   0x59fae12f7a90 (09999)   
   B) 0x59fae12ed250 (03000)   0x59fae12ed250 (03000)   0x59fae12edb10 (03060)   0x59fae12edb10 (03060)   
   C) 0x59fae12edb90 (03500)   0x59fae12edb90 (03500)   0x59fae12ee850 (03529)   0x59fae12ef9a0 (03580)   
   D) 0x59fae12efa00 (04000)   0x59fae12efa00 (04000)   0x59fae12f0650 (04060)   0x59fae12f0650 (04060)   
   E) 0x59fae12f06d0 (04500)   0x59fae12f06d0 (04500)   0x59fae12f44f0 (04670)   0x59fae12f44f0 (04670)   
   F) 0x59fae12f4570 (05000)   0x59fae12f4570 (05000)   0x59fae12f4d60 (05070)   0x59fae12f4d60 (05070)   
   G) 0x59fae12f5ab0 (06000)   0x59fae12f5ab0 (06000)   0x59fae12f6700 (06060)   0x59fae12f6700 (06060)   
   H) 0x59fae12f6780 (06500)   0x59fae12f6780 (06500)   0x59fae12f7120 (06560)   0x59fae12f7120 (06560)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine F overlaps, or is tangled with, routine A!
    NOTE: Routine G overlaps, or is tangled with, routine A!
    NOTE: Routine H overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02130 - 10000    7880 

 */



/*
 *  Symbol Table Listing for 'basic/mastrmnd.bas'
 *
    A                        Integer     
    A$              Array    String          {0,-1} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    B1                       Integer     
    C                        Integer     
    C9                       Integer     
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
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
    G$              Array    String          {0,-1} 
    H                        Integer     
    H$              Array    String          {0,-1} 
    HEX$            Function String          args=1, int    
    I               Array    Integer         {0,-1} 
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    L$                       String      
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    OCT$            Function String          args=1, float  
    P                        Integer     
    P9                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q               Array    Integer         {0,-1} 
    R                        Integer     
    R9                       Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,9} {0,1} 
    S$              Array    String          {0,9} 
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
    W                        Integer     
    W1                       Integer     
    X                        Integer     
    X$                       String      
    Y                        Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/mastrmnd.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x59fae12d2b80 ---------A   01000 PRINT TAB(30);"MASTERMIND"
    0x59fae12d3f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x59fae12d40b0 ---------A   01020 PRINT: PRINT: PRINT
    0x59fae12c22b0 ---------A   01030 REM
    0x59fae12d19e0 ---------A   01040 REM     MASTERMIND II
    0x59fae12d1840 ---------A   01050 REM     STEVE NORTH
    0x59fae12d3aa0 ---------A   01060 REM     CREATIVE COMPUTING
    0x59fae12d2040 ---------A   01070 REM     PO BOX 789-M MORRISTOWN NEW JERSEY 07960
    0x59fae12d20c0 ---------A   01080 REM
    0x59fae12d1e40 ---------A   01090 REM
    0x59fae12d16d0 ---------A T 01100 INPUT "NUMBER OF COLORS";C9
    0x59fae12d4100 ---------A   01110 IF C9>8 THEN PRINT "NO MORE THAN 8, PLEASE!":GOTO 1100
    0x59fae12dd660 ---------A   01120 REM     GET A COMBINATION
    0x59fae12df550 ---------A   01130 REM     UNPACK X$ INTO G$(1-P9)
    0x59fae12e12e0 ---------A   01140 REM     NOW WE CONVERT Q(1-P9) INTO A$(1-P9) [ACTUAL GUESS]
    0x59fae12e1400 ---------A   01150 REM     AND GET NUMBER OF BLACKS AND WHITES
    0x59fae12e1840 ---------A   01160 REM     TELL HUMAN RESULTS
    0x59fae12e1f40 ---------A   01170 REM     SAVE ALL THIS STUFF FOR BOARD PRINTOUT LATER
    0x59fae12e41c0 ---------A   01180 REM
    0x59fae12e4260 ---------A   01190 REM     NOW COMPUTER GUESSES
    0x59fae12e42e0 ---------A   01200 REM
    0x59fae12e5100 ---------A   01210 REM     FIND A GUESS
    0x59fae12e7080 ---------A   01220 REM     NOW WE CONVERT GUESS #G INTO G$
    0x59fae12eae00 ---------A   01230 REM
    0x59fae12eaea0 ---------A   01240 REM     BOARD PRINTOUT ROUTINE
    0x59fae12eaf20 ---------A   01250 REM
    0x59fae12ec610 ---------A   01260 REM
    0x59fae12ec6a0 ---------A   01270 REM     QUIT ROUTINE
    0x59fae12ec720 ---------A   01280 REM
    0x59fae12f4de0 ---------A   01290 REM
    0x59fae12f4e90 ---------A   01300 REM     CONVERT Q(1-P9) INTO G$(1-P9)
    0x59fae12f4f10 ---------A   01310 REM
    0x59fae12f71d0 ---------A   01320 REM     PROGRAM DATA FOR COLOR NAMES
    0x59fae12f79a0 ---------A   01330 DATA BLACK,WHITE,RED,GREEN,ORANGE,YELLOW,PURPLE,TAN
    0x59fae12f7a30 ---------A   01340 REM   ...WE'RE SORRY BUT IT'S TIME TO GO...
    0x59fae12f7a90 ---------A   01350 END
    0x59fae12ed250 ---------A   01360 REM
    0x59fae12ed300 ---------A   01370 REM     INITIALIZE Q(1-P9) TO ZEROS
    0x59fae12ed380 ---------A   01380 REM
    0x59fae12ed680 ----------   01390 FOR S=1 TO P9
    0x59fae12ed980 ----------   01400 Q(S)=0
    0x59fae12edab0 ----------   01410 NEXT S
    0x59fae12fd7a0 ----------   01420 GOTO 01430
    0x59fae12fd7e0 ---------- T 01430 RETURN
    0x59fae12edb90 ---------A   01440 REM
    0x59fae12edc30 ---------A   01450 REM     INCREMENT Q(1-P9)
    0x59fae12edcb0 ---------A   01460 REM
    0x59fae12ee010 ----------   01470 IF Q(1)>0 THEN 1530
    0x59fae12ee0c0 ---------A   01480 REM  IF ZERO, THIS IS OUR FIRST INCREMENT: MAKE ALL ONES
    0x59fae12ee3c0 ----------   01490 FOR S=1 TO P9
    0x59fae12ee6c0 ----------   01500 Q(S)=1
    0x59fae12ee7f0 ----------   01510 NEXT S
    0x59fae12fd820 ----------   01520 GOTO 01590
    0x59fae12eea70 ---------- T 01530 Q=1
    0x59fae12eef70 ---------- T 01540 Q(Q)=Q(Q)+1
    0x59fae12ef300 ----------   01550 IF Q(Q)<=C9 THEN RETURN
    0x59fae12ef600 ----------   01560 Q(Q)=1
    0x59fae12ef930 ----------   01570 Q=Q+1
    0x59fae12ef9a0 ----------   01580 GOTO 1540
    0x59fae12fd880 ---------- T 01590 RETURN
    0x59fae12efa00 ---------A   01600 REM
    0x59fae12efab0 ---------A   01610 REM     CONVERT Q(1-P9) TO A$(1-P9)
    0x59fae12efb30 ---------A   01620 REM
    0x59fae12efe40 ----------   01630 FOR S=1 TO P9
    0x59fae12f04c0 ----------   01640 A$(S)=MID$(L$,Q(S),1)
    0x59fae12f05f0 ----------   01650 NEXT S
    0x59fae12fd8e0 ----------   01660 GOTO 01670
    0x59fae12fd940 ---------- T 01670 RETURN
    0x59fae12f06d0 ---------A   01680 REM
    0x59fae12f0790 ---------A   01690 REM     GET NUMBER OF BLACKS (B) AND WHITES (W)
    0x59fae12f0840 ---------A   01700 REM     MASHES G$ AND A$ IN THE PROCESS
    0x59fae12f08c0 ---------A   01710 REM
    0x59fae12f0f80 ----------   01720 B=0:W=0:F=0
    0x59fae12f1280 ----------   01730 FOR S=1 TO P9
    0x59fae12f16c0 ----------   01740 IF G$(S)<>A$(S) THEN 1800
    0x59fae12f1a00 ----------   01750 B=B+1
    0x59fae12f1df0 ----------   01760 G$(S)=CHR$(F)
    0x59fae12f22e0 ----------   01770 A$(S)=CHR$(F+1)
    0x59fae12f2610 ----------   01780 F=F+2
    0x59fae12f2680 ----------   01790 GOTO 4690
    0x59fae12f2a30 ---------- T 01800 FOR T=1 TO P9
    0x59fae12f2e80 ----------   01810 IF G$(S)<>A$(T) THEN 1840
    0x59fae12f32f0 ----------   01820 IF G$(T)=A$(T) THEN 1840
    0x59fae12f4230 ----------   01830 W=W+1:A$(T)=CHR$(F):G$(S)=CHR$(F+1):F=F+2:GOTO 4690
    0x59fae12f4350 ---------- T 01840 NEXT T
    0x59fae12f4490 ---------- T 01850 NEXT S
    0x59fae12fd9a0 ----------   01860 GOTO 01870
    0x59fae12fda00 ---------- T 01870 RETURN
    0x59fae12f4570 ---------A   01880 REM
    0x59fae12f4600 ---------A   01890 REM     PRINT SCORE
    0x59fae12f4680 ---------A   01900 REM
    0x59fae12f47f0 ----------   01910 PRINT "SCORE:"
    0x59fae12f4a50 ----------   01920 PRINT "     COMPUTER ";C
    0x59fae12f4ca0 ----------   01930 PRINT "     HUMAN    ";H
    0x59fae12f4d10 ----------   01940 PRINT
    0x59fae12fda60 ----------   01950 GOTO 01960
    0x59fae12fdac0 ---------- T 01960 RETURN
    0x59fae12f5ab0 ---------A   01970 REM
    0x59fae12f5b60 ---------A   01980 REM     CONVERT Q(1-P9) TO H$(1-P9)
    0x59fae12f5be0 ---------A   01990 REM
    0x59fae12f5ef0 ----------   02000 FOR S=1 TO P9
    0x59fae12f6570 ----------   02010 H$(S)=MID$(L$,Q(S),1)
    0x59fae12f66a0 ----------   02020 NEXT S
    0x59fae12fdb20 ----------   02030 GOTO 02040
    0x59fae12fdb80 ---------- T 02040 RETURN
    0x59fae12f6780 ---------A   02050 REM
    0x59fae12f6810 ---------A   02060 REM     COPY H$ INTO G$
    0x59fae12f6890 ---------A   02070 REM
    0x59fae12f6b90 ----------   02080 FOR S=1 TO P9
    0x59fae12f6f90 ----------   02090 G$(S)=H$(S)
    0x59fae12f70c0 ----------   02100 NEXT S
    0x59fae12fdbe0 ----------   02110 GOTO 02120
    0x59fae12fdc40 ---------- T 02120 RETURN
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
char* data_01330s[]={"BLACK","WHITE","RED","GREEN","ORANGE","YELLOW","PURPLE","TAN"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1330,  8,data_01330s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int;                                     // Basic: A 
char*  A_str_arr[0];                              // Basic: A$ 
int    B_int;                                     // Basic: B 
int    B1_int;                                    // Basic: B1 
int    C_int;                                     // Basic: C 
int    C9_int;                                    // Basic: C9 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
char*  G_str_arr[0];                              // Basic: G$ 
int    H_int;                                     // Basic: H 
char*  H_str_arr[0];                              // Basic: H$ 
int    I_int_arr[0];                              // Basic: I 
char*  L_str;                                     // Basic: L$ 
int    M_int;                                     // Basic: M 
int    P_int;                                     // Basic: P 
int    P9_int;                                    // Basic: P9 
int    Q_int_arr[0];                              // Basic: Q 
int    R_int;                                     // Basic: R 
int    R9_int;                                    // Basic: R9 
int    S_int_arr[10][2];                          // Basic: S 
char*  S_str_arr[10];                             // Basic: S$ 
int    T_int;                                     // Basic: T 
int    W_int;                                     // Basic: W 
int    W1_int;                                    // Basic: W1 
int    X_int;                                     // Basic: X 
char*  X_str;                                     // Basic: X$ 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
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
