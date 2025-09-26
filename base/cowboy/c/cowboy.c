/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/cowboy/basic/cowboy.bas: 
 *
                   +-+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | | |
        Address    v v v Original BASIC statement
    -------------- --- - ------------------------------------------------------------------------------
    0x5574cc213ce0 ---------A   01000 RANDOMIZE
    0x5574cc213fe0 ---------A   01010 PRINT TAB(26);"CORRAL"
    0x5574cc214250 ---------A   01020 PRINT TAB(20);"CREATIVE COMPUTING"
    0x5574cc2144c0 ---------A   01030 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x5574cc214530 ---------A   01040 PRINT
    0x5574cc2145f0 ---------A   01050 PRINT
    0x5574cc214660 ---------A   01060 PRINT
    0x5574cc214850 ---------A   01070 DIM A(21)
    0x5574cc214ad0 ---------A   01080 DIM S(2,9)
    0x5574cc219030 ---------A   01090 FOR I=1 TO 2
    0x5574cc2192b0 ---------A   01100     FOR J=0 TO 9
    0x5574cc219450 ---------A   01110         READ S(I,J)
    0x5574cc2194f0 ---------A   01120     NEXT J
    0x5574cc2195b0 ---------A   01130 NEXT I
    0x5574cc214580 ---------A   01140 DATA 0,1,2,3,3,2,2,1,0,-1
    0x5574cc21a5a0 ---------A   01150 DATA 1,2,3,4,5,4,3,2,1,0
    0x5574cc21a720 ---------A   01160 PRINT "  YOU ARE THE COWBOY.  GO CATCH YOUR HORSE IN THE CORRAL!"
    0x5574cc21a990 ---------A   01170 PRINT "DO YOU WANT FULL INSTRUCTIONS";
    0x5574cc21aaf0 ---------A   01180 INPUT F$
    0x5574cc21ae80 ---------A   01190 IF LEFT$(F$,1)="N" THEN 1260
    0x5574cc21b010 ---------A   01200 PRINT "YOU MOVE TOWARD YOUR HORSE 1 TO 5 STEPS AT A TIME."
    0x5574cc21b190 ---------A   01210 PRINT "IF YOU MORE THAN HALVE THE SEPERATION HE WILL BOLT!"
    0x5574cc21b310 ---------A   01220 PRINT "HE MAY ALSO BOLT WHEN HE IS CLOSE TO THE RAIL"
    0x5574cc21b4a0 ---------A   01230 PRINT "WHEN YOU COME WITHIN 2 STEPS HE MAY KICK.  SO LOOKOUT!!"
    0x5574cc21b600 ---------A   01240 PRINT "IF YOU WISH TO QUIT AT ANY TIME ENTER 0(ZERO) TO PROMPT"
    0x5574cc21b6a0 ---------A   01250 PRINT
    0x5574cc21b800 ---------A T 01260 PRINT "AFTER '?' TYPE IN DIGIT FROM 1 TO 5 FOR COWBOY'S NEXT MOVE"
    0x5574cc21b9f0 ---------A T 01270 C=1
    0x5574cc21bbe0 ---------A   01280 L=1
    0x5574cc21bdd0 ---------A   01290 K=0
    0x5574cc21bfc0 ---------A   01300 M=0
    0x5574cc21c1b0 ---------A   01310 N=0
    0x5574cc21c590 ---------A   01320 D9=RND(1)+1.5
    0x5574cc21cd20 ---------A   01330 PRINT "LEVEL OF DIFFICULTY (0-10) :"10-INT((D9-1.5)*10)
    0x5574cc21cd90 ---------A   01340 GOSUB 2120
    0x5574cc21cfb0 ---------A   01350 IF R<=5 THEN 1370
    0x5574cc21d170 ---------A   01360 Q=-Q
    0x5574cc21d400 ---------A T 01370 H=13+Q
    0x5574cc21d470 ---------A   01380 GOSUB 2170
    0x5574cc21d770 ---------A   01390 T=2+P
    0x5574cc21d7e0 ---------A   01400 PRINT
    0x5574cc21d9f0 ---------A T 01410 B$="            "
    0x5574cc21dc00 ---------A T 01420 FOR J=1 TO 21
    0x5574cc21dde0 ---------A   01430     A(J)=32
    0x5574cc21de90 ---------A   01440 NEXTJ
    0x5574cc21e070 ---------A   01450 A(C)=67
    0x5574cc21e240 ---------A   01460 A(H)=72
    0x5574cc21e410 ---------A   01470 PRINT N,"I";
    0x5574cc21e630 ---------A   01480 FOR J=1 TO 21
    0x5574cc21e870 ---------A   01490     PRINT CHR$(A(J));
    0x5574cc21e920 ---------A   01500 NEXT J
    0x5574cc21eb00 ---------A   01510 PRINT "I",B$;
    0x5574cc21ee30 ---------A   01520 X=ABS(H-C)
    0x5574cc21f0e0 ---------A   01530 L=SGN(H-C)
    0x5574cc21f2f0 ---------A   01540 N=N+1
    0x5574cc21f480 ---------A   01550 IF K>0 GOTO 2030
    0x5574cc21f640 ---------A T 01560 IF N>100 GOTO 2410
    0x5574cc21f7c0 ---------A   01570 INPUT D$
    0x5574cc21f960 ---------A   01580 CHANGE D$ TO Z
    0x5574cc21fb70 ---------A   01590 DIM Z(10)
    0x5574cc21fe90 ---------A   01600 D=Z(1)-48
    0x5574cc220040 ---------A   01610 IF D>0 THEN 1630
    0x5574cc2200c0 ---------A   01620 GOTO1640
    0x5574cc220240 ---------A T 01630 IF D<6 GOTO 1670
    0x5574cc220430 ---------A T 01640 IF D=0 THEN 2370
    0x5574cc2209b0 ---------A   01650 PRINT "ILLEGAL MOVE .TRY AGAIN",
    0x5574cc220a20 ---------A   01660 GOTO 1560
    0x5574cc220d00 ---------A T 01670 E=C+L*D
    0x5574cc220eb0 ---------A   01680 IF E<1 THEN 1640
    0x5574cc221070 ---------A   01690 IF E>21 THEN 1640
    0x5574cc2211b0 ---------A   01700 C=E
    0x5574cc221220 ---------A   01710 GOSUB 2120
    0x5574cc2213c0 ---------A   01720 G=P
    0x5574cc221630 ---------A   01730 H=H+L*G
    0x5574cc2216a0 ---------A   01740 GOSUB 2170
    0x5574cc2218e0 ---------A   01750 IF X<2*D THEN 1770
    0x5574cc221960 ---------A   01760 GOTO 1780
    0x5574cc221ae0 ---------A T 01770 IF D>1 GOTO 1840
    0x5574cc221cc0 ---------A T 01780 IF H>1 THEN 1800
    0x5574cc221d40 ---------A   01790 GOTO 1810
    0x5574cc221ee0 ---------A T 01800 IF H<20 THEN 1930
    0x5574cc221f60 ---------A T 01810 GOSUB 2120
    0x5574cc2220e0 ---------A   01820 IF R>2 GOTO 1930
    0x5574cc2222a0 ---------A   01830 IF X>7 GOTO 1410
    0x5574cc2225c0 ---------A T 01840 G=9+2*G
    0x5574cc222830 ---------A   01850 H=H-L*G
    0x5574cc222960 ---------A   01860 L=-L
    0x5574cc2229e0 ---------A   01870 GOSUB 2170
    0x5574cc222c80 ---------A   01880 IF ABS(H-C)>1 THEN 1910
    0x5574cc222f40 ---------A   01890 H=H-3*L
    0x5574cc222fb0 ---------A   01900 GOSUB 2170
    0x5574cc223130 ---------A T 01910 B$="BOLTED      "
    0x5574cc2231b0 ---------A   01920 GOTO 1420
    0x5574cc223430 ---------A T 01930 IF ABS(H-C)>2 GOTO 1410
    0x5574cc2234d0 ---------A   01940 GOSUB 2120
    0x5574cc223690 ---------A   01950 IF R1>D9 GOTO 2100
    0x5574cc223730 ---------A   01960 GOSUB 2120
    0x5574cc223930 ---------A   01970 K=P+2
    0x5574cc223b40 ---------A   01980 M=M+1
    0x5574cc223df0 ---------A   01990 H=H-5*L
    0x5574cc223e60 ---------A   02000 GOSUB 2170
    0x5574cc223fe0 ---------A   02010 B$="KICKED"
    0x5574cc224050 ---------A   02020 GOTO 1420
    0x5574cc224190 ---------A T 02030 IF M>T GOTO 2220
    0x5574cc2243d0 ---------A   02040 K=K-1
    0x5574cc224440 ---------A   02050 PRINT
    0x5574cc2244b0 ---------A   02060 GOSUB 2120
    0x5574cc224830 ---------A   02070 H=H+L*(P+1)
    0x5574cc2248a0 ---------A   02080 GOSUB 2170
    0x5574cc224900 ---------A   02090 GOTO1410
    0x5574cc224a60 ---------A T 02100 IF H=C THEN 2260
    0x5574cc224ae0 ---------A   02110 GOTO 1410
    0x5574cc224ea0 ---------B G 02120 R1=(8*RND(1)+1)
    0x5574cc225030 ---------B   02130 R=INT(R1)
    0x5574cc225260 ---------B   02140 P=S(1,R)
    0x5574cc225490 ---------B   02150 Q=S(2,R)
    0x5574cc2254e0 ---------B   02160 RETURN
    0x5574cc2256a0 ---------C G 02170 IF H>=1 THEN 2190
    0x5574cc225820 ---------C   02180 H=1
    0x5574cc2259d0 ---------C T 02190 IF H<=21 THEN 2210
    0x5574cc225b50 ---------C   02200 H=21
    0x5574cc225ba0 ---------C T 02210 RETURN
    0x5574cc225c40 ---------A T 02220 PRINT 
    0x5574cc225da0 ---------A   02230 PRINT "THOSE KICKS LANDED YOU IN THE HOSPITAL!"
    0x5574cc225ed0 ---------A   02240 PRINT " GET WELL SOON!!"
    0x5574cc225f40 ---------A   02250 GOTO 2370
    0x5574cc226140 ---------A T 02260 FOR J=1 TO 21
    0x5574cc226320 ---------A   02270     A(J)=32
    0x5574cc2263d0 ---------A   02280 NEXT J
    0x5574cc226dc0 ---------A   02290 A(C)=35
    0x5574cc226f10 ---------A   02300 PRINT "I";
    0x5574cc227130 ---------A   02310 FOR J=1 TO 21
    0x5574cc2272f0 ---------A   02320     PRINT CHR$(A(J));
    0x5574cc2273a0 ---------A   02330 NEXT J
    0x5574cc2274e0 ---------A   02340 PRINT "I"
    0x5574cc227580 ---------A   02350 PRINT
    0x5574cc2276e0 ---------A   02360 PRINT "YIPPEE!!  NOW SEE IF YOU CAN CATCH HIM IN FEWER MOVES"
    0x5574cc227830 ---------A T 02370 PRINT "ANOTHER ROUNDUP";
    0x5574cc227910 ---------A   02380 INPUT F$
    0x5574cc227bf0 ---------A   02390 IF LEFT$(F$,1)="Y" THEN 1270
    0x5574cc227c70 ---------A   02400 GOTO 2440
    0x5574cc227cf0 ---------A T 02410 PRINT 
    0x5574cc227e40 ---------A   02420 PRINT "ENOUGH!! YOU'D DO BETTER AS CAMP COOK!"
    0x5574cc227eb0 ---------A   02430 GOTO 2370
    0x5574cc227ef0 ---------A T 02440 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01260      01190T
     01270      02390T
     01370      01350T
     01410      01830T, 01930T, 02090T, 02110T
     01420      01920T, 02020T
     01560      01660T
     01630      01610T
     01640      01620T, 01680T, 01690T
     01670      01630T
     01770      01750T
     01780      01760T
     01800      01780T
     01810      01790T
     01840      01770T
     01910      01880T
     01930      01800T, 01820T
     02030      01550T
     02100      01950T
     02120      01340G, 01710G, 01810G, 01940G, 01960G, 02060G
     02170      01380G, 01740G, 01870G, 01900G, 02000G, 02080G
     02190      02170T
     02210      02190T
     02220      02030T
     02260      02100T
     02370      01640T, 02250T, 02430T
     02410      01560T
     02440      02400T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x5574cc213ce0   0x5574cc213ce0   0x5574cc227ef0   0x5574cc227ef0 
   B) 0x5574cc224ea0   0x5574cc224ea0   0x5574cc2254e0   0x5574cc2254e0 
   C) 0x5574cc2256a0   0x5574cc2256a0   0x5574cc225ba0   0x5574cc225ba0 

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02450 - 10000    7560 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/cowboy/basic/cowboy.bas'
 *
    A     Array    Integer     {0,22} 
    ABS   Function Integer     args=1, int   
    B$             String  
    C              Integer 
    CHR$  Function String      args=1, int   
    D              Integer 
    D$             String  
    D9             Float   
    E              Integer 
    F$             String  
    G              Integer 
    H              Integer 
    I              Integer 
    INT   Function Integer     args=1, float 
    J              Integer 
    K              Integer 
    L              Integer 
    LEFT$ Function String      args=2, char* int   
    M              Integer 
    N              Integer 
    P              Integer 
    Q              Integer 
    R              Integer 
    R1             Integer 
    RND   Function Integer     args=1, int   
    S     Array    Integer     {0,3} {0,10} 
    SGN   Function Integer     args=1, int   
    T              Integer 
    TAB   Function String      args=1, 
    X              Integer 
    Z              Integer 
    Z     Array    Integer     {0,11} 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/cowboy/basic/cowboy.bas: 
 *
                   +-+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | | |
        Address    v v v Original BASIC statement
    -------------- --- - ------------------------------------------------------------------------------
    0x5574cc213ce0 ---------A   01000 RANDOMIZE
    0x5574cc213fe0 ---------A   01010 PRINT TAB(26);"CORRAL"
    0x5574cc214250 ---------A   01020 PRINT TAB(20);"CREATIVE COMPUTING"
    0x5574cc2144c0 ---------A   01030 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    0x5574cc214530 ---------A   01040 PRINT
    0x5574cc2145f0 ---------A   01050 PRINT
    0x5574cc214660 ---------A   01060 PRINT
    0x5574cc214850 ---------A   01070 DIM A(21)
    0x5574cc214ad0 ---------A   01080 DIM S(2,9)
    0x5574cc219030 ---------A   01090 FOR I=1 TO 2
    0x5574cc2192b0 ---------A   01100     FOR J=0 TO 9
    0x5574cc219450 ---------A   01110         READ S(I,J)
    0x5574cc2194f0 ---------A   01120     NEXT J
    0x5574cc2195b0 ---------A   01130 NEXT I
    0x5574cc214580 ---------A   01140 DATA 0,1,2,3,3,2,2,1,0,-1
    0x5574cc21a5a0 ---------A   01150 DATA 1,2,3,4,5,4,3,2,1,0
    0x5574cc21a720 ---------A   01160 PRINT "  YOU ARE THE COWBOY.  GO CATCH YOUR HORSE IN THE CORRAL!"
    0x5574cc21a990 ---------A   01170 PRINT "DO YOU WANT FULL INSTRUCTIONS";
    0x5574cc21aaf0 ---------A   01180 INPUT F$
    0x5574cc21ae80 ---------A   01190 IF LEFT$(F$,1)="N" THEN 1260
    0x5574cc21b010 ---------A   01200 PRINT "YOU MOVE TOWARD YOUR HORSE 1 TO 5 STEPS AT A TIME."
    0x5574cc21b190 ---------A   01210 PRINT "IF YOU MORE THAN HALVE THE SEPERATION HE WILL BOLT!"
    0x5574cc21b310 ---------A   01220 PRINT "HE MAY ALSO BOLT WHEN HE IS CLOSE TO THE RAIL"
    0x5574cc21b4a0 ---------A   01230 PRINT "WHEN YOU COME WITHIN 2 STEPS HE MAY KICK.  SO LOOKOUT!!"
    0x5574cc21b600 ---------A   01240 PRINT "IF YOU WISH TO QUIT AT ANY TIME ENTER 0(ZERO) TO PROMPT"
    0x5574cc21b6a0 ---------A   01250 PRINT
    0x5574cc21b800 ---------A T 01260 PRINT "AFTER '?' TYPE IN DIGIT FROM 1 TO 5 FOR COWBOY'S NEXT MOVE"
    0x5574cc21b9f0 ---------A T 01270 C=1
    0x5574cc21bbe0 ---------A   01280 L=1
    0x5574cc21bdd0 ---------A   01290 K=0
    0x5574cc21bfc0 ---------A   01300 M=0
    0x5574cc21c1b0 ---------A   01310 N=0
    0x5574cc21c590 ---------A   01320 D9=RND(1)+1.5
    0x5574cc21cd20 ---------A   01330 PRINT "LEVEL OF DIFFICULTY (0-10) :"10-INT((D9-1.5)*10)
    0x5574cc21cd90 ---------A   01340 GOSUB 2350
    0x5574cc21cfb0 ---------A   01350 IF R<=5 THEN 1370
    0x5574cc21d170 ---------A   01360 Q=-Q
    0x5574cc21d400 ---------A T 01370 H=13+Q
    0x5574cc21d470 ---------A   01380 GOSUB 2400
    0x5574cc21d770 ---------A   01390 T=2+P
    0x5574cc21d7e0 ---------A   01400 PRINT
    0x5574cc21d9f0 ---------A T 01410 B$="            "
    0x5574cc21dc00 ---------A T 01420 FOR J=1 TO 21
    0x5574cc21dde0 ---------A   01430     A(J)=32
    0x5574cc21de90 ---------A   01440 NEXTJ
    0x5574cc21e070 ---------A   01450 A(C)=67
    0x5574cc21e240 ---------A   01460 A(H)=72
    0x5574cc21e410 ---------A   01470 PRINT N,"I";
    0x5574cc21e630 ---------A   01480 FOR J=1 TO 21
    0x5574cc21e870 ---------A   01490     PRINT CHR$(A(J));
    0x5574cc21e920 ---------A   01500 NEXT J
    0x5574cc21eb00 ---------A   01510 PRINT "I",B$;
    0x5574cc21ee30 ---------A   01520 X=ABS(H-C)
    0x5574cc21f0e0 ---------A   01530 L=SGN(H-C)
    0x5574cc21f2f0 ---------A   01540 N=N+1
    0x5574cc21f480 ---------A   01550 IF K>0 GOTO 2030
    0x5574cc21f640 ---------A T 01560 IF N>100 GOTO 2310
    0x5574cc21f7c0 ---------A   01570 INPUT D$
    0x5574cc21f960 ---------A   01580 CHANGE D$ TO Z
    0x5574cc21fb70 ---------A   01590 DIM Z(10)
    0x5574cc21fe90 ---------A   01600 D=Z(1)-48
    0x5574cc220040 ---------A   01610 IF D>0 THEN 1630
    0x5574cc2200c0 ---------A   01620 GOTO1640
    0x5574cc220240 ---------A T 01630 IF D<6 GOTO 1670
    0x5574cc220430 ---------A T 01640 IF D=0 THEN 2270
    0x5574cc2209b0 ---------A   01650 PRINT "ILLEGAL MOVE .TRY AGAIN",
    0x5574cc220a20 ---------A   01660 GOTO 1560
    0x5574cc220d00 ---------A T 01670 E=C+L*D
    0x5574cc220eb0 ---------A   01680 IF E<1 THEN 1640
    0x5574cc221070 ---------A   01690 IF E>21 THEN 1640
    0x5574cc2211b0 ---------A   01700 C=E
    0x5574cc221220 ---------A   01710 GOSUB 2350
    0x5574cc2213c0 ---------A   01720 G=P
    0x5574cc221630 ---------A   01730 H=H+L*G
    0x5574cc2216a0 ---------A   01740 GOSUB 2400
    0x5574cc2218e0 ---------A   01750 IF X<2*D THEN 1770
    0x5574cc221960 ---------A   01760 GOTO 1780
    0x5574cc221ae0 ---------A T 01770 IF D>1 GOTO 1840
    0x5574cc221cc0 ---------A T 01780 IF H>1 THEN 1800
    0x5574cc221d40 ---------A   01790 GOTO 1810
    0x5574cc221ee0 ---------A T 01800 IF H<20 THEN 1930
    0x5574cc221f60 ---------A T 01810 GOSUB 2350
    0x5574cc2220e0 ---------A   01820 IF R>2 GOTO 1930
    0x5574cc2222a0 ---------A   01830 IF X>7 GOTO 1410
    0x5574cc2225c0 ---------A T 01840 G=9+2*G
    0x5574cc222830 ---------A   01850 H=H-L*G
    0x5574cc222960 ---------A   01860 L=-L
    0x5574cc2229e0 ---------A   01870 GOSUB 2400
    0x5574cc222c80 ---------A   01880 IF ABS(H-C)>1 THEN 1910
    0x5574cc222f40 ---------A   01890 H=H-3*L
    0x5574cc222fb0 ---------A   01900 GOSUB 2400
    0x5574cc223130 ---------A T 01910 B$="BOLTED      "
    0x5574cc2231b0 ---------A   01920 GOTO 1420
    0x5574cc223430 ---------A T 01930 IF ABS(H-C)>2 GOTO 1410
    0x5574cc2234d0 ---------A   01940 GOSUB 2350
    0x5574cc223690 ---------A   01950 IF R1>D9 GOTO 2100
    0x5574cc223730 ---------A   01960 GOSUB 2350
    0x5574cc223930 ---------A   01970 K=P+2
    0x5574cc223b40 ---------A   01980 M=M+1
    0x5574cc223df0 ---------A   01990 H=H-5*L
    0x5574cc223e60 ---------A   02000 GOSUB 2400
    0x5574cc223fe0 ---------A   02010 B$="KICKED"
    0x5574cc224050 ---------A   02020 GOTO 1420
    0x5574cc224190 ---------A T 02030 IF M>T GOTO 2120
    0x5574cc2243d0 ---------A   02040 K=K-1
    0x5574cc224440 ---------A   02050 PRINT
    0x5574cc2244b0 ---------A   02060 GOSUB 2350
    0x5574cc224830 ---------A   02070 H=H+L*(P+1)
    0x5574cc2248a0 ---------A   02080 GOSUB 2400
    0x5574cc224900 ---------A   02090 GOTO1410
    0x5574cc224a60 ---------A T 02100 IF H=C THEN 2160
    0x5574cc224ae0 ---------A   02110 GOTO 1410
    0x5574cc225c40 ---------A T 02120 PRINT 
    0x5574cc225da0 ---------A   02130 PRINT "THOSE KICKS LANDED YOU IN THE HOSPITAL!"
    0x5574cc225ed0 ---------A   02140 PRINT " GET WELL SOON!!"
    0x5574cc225f40 ---------A   02150 GOTO 2270
    0x5574cc226140 ---------A T 02160 FOR J=1 TO 21
    0x5574cc226320 ---------A   02170     A(J)=32
    0x5574cc2263d0 ---------A   02180 NEXT J
    0x5574cc226dc0 ---------A   02190 A(C)=35
    0x5574cc226f10 ---------A   02200 PRINT "I";
    0x5574cc227130 ---------A   02210 FOR J=1 TO 21
    0x5574cc2272f0 ---------A   02220     PRINT CHR$(A(J));
    0x5574cc2273a0 ---------A   02230 NEXT J
    0x5574cc2274e0 ---------A   02240 PRINT "I"
    0x5574cc227580 ---------A   02250 PRINT
    0x5574cc2276e0 ---------A   02260 PRINT "YIPPEE!!  NOW SEE IF YOU CAN CATCH HIM IN FEWER MOVES"
    0x5574cc227830 ---------A T 02270 PRINT "ANOTHER ROUNDUP";
    0x5574cc227910 ---------A   02280 INPUT F$
    0x5574cc227bf0 ---------A   02290 IF LEFT$(F$,1)="Y" THEN 1270
    0x5574cc227c70 ---------A   02300 GOTO 2340
    0x5574cc227cf0 ---------A T 02310 PRINT 
    0x5574cc227e40 ---------A   02320 PRINT "ENOUGH!! YOU'D DO BETTER AS CAMP COOK!"
    0x5574cc227eb0 ---------A   02330 GOTO 2270
    0x5574cc227ef0 ---------A T 02340 END
    0x5574cc224ea0 ---------B G 02350 R1=(8*RND(1)+1)
    0x5574cc225030 ---------B   02360 R=INT(R1)
    0x5574cc225260 ---------B   02370 P=S(1,R)
    0x5574cc225490 ---------B   02380 Q=S(2,R)
    0x5574cc2254e0 ---------B   02390 RETURN
    0x5574cc2256a0 ---------C G 02400 IF H>=1 THEN 2420
    0x5574cc225820 ---------C   02410 H=1
    0x5574cc2259d0 ---------C T 02420 IF H<=21 THEN 2440
    0x5574cc225b50 ---------C   02430 H=21
    0x5574cc225ba0 ---------C T 02440 RETURN
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
char* data_01140s[]={"0","1","2","3","3","2","2","1","0","-1"};
char* data_01150s[]={"1","2","3","4","5","4","3","2","1","0"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1140, 10,data_01140s},
    { 1150, 10,data_01150s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int   A_int_arr[22];// Comments?
char* B_str;        // Comments?
int   C_int;        // Comments?
int   D_int;        // Comments?
char* D_str;        // Comments?
float D9_flt;       // Comments?
int   E_int;        // Comments?
char* F_str;        // Comments?
int   G_int;        // Comments?
int   H_int;        // Comments?
int   I_int;        // Comments?
int   J_int;        // Comments?
int   K_int;        // Comments?
int   L_int;        // Comments?
int   M_int;        // Comments?
int   N_int;        // Comments?
int   P_int;        // Comments?
int   Q_int;        // Comments?
int   R_int;        // Comments?
int   R1_int;       // Comments?
int   S_int_arr[3][10]; // Comments?
int   T_int;        // Comments?
int   X_int;        // Comments?
int   Z_int;        // Comments?
int   Z_int_arr[11];// Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02350();
void Routine_02400();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------

void Routine_02350(){
    // 02350 R1=(8*RND(1)+1)
    R1_int = (8*RND(1)+1);
    // 02360 R=INT(R1)
    R_int = INT(R1_int);
    // 02370 P=S(1,R)
    P_int = S_int_arr[(int)1][(int)R_int];
    // 02380 Q=S(2,R)
    Q_int = S_int_arr[(int)2][(int)R_int];
    // 02390 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_02400(){
    // 02400 IF H>=1 THEN 2420
    if(H_int>=1)goto Lbl_02420;
    // 02410 H=1
    H_int = 1;

  Lbl_02420:
    // 02420 IF H<=21 THEN 2440
    if(H_int<=21)goto Lbl_02440;
    // 02430 H=21
    H_int = 21;

  Lbl_02440:
    // 02440 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 RANDOMIZE
    RANDOMIZE();
    // 01010 PRINT TAB(26);"CORRAL"
    b2c_fprintf(stdout,"%sCORRAL",TAB(26)); b2c_fprintf(stdout,"\n");
    // 01020 PRINT TAB(20);"CREATIVE COMPUTING"
    b2c_fprintf(stdout,"%sCREATIVE COMPUTING",TAB(20)); b2c_fprintf(stdout,"\n");
    // 01030 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    b2c_fprintf(stdout,"%sMORRISTOWN, NEW JERSEY",TAB(18)); b2c_fprintf(stdout,"\n");
    // 01040 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01050 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01060 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01070 DIM A(21)
    // 01080 DIM S(2,9)
    // 01090 FOR I=1 TO 2
    for(I_int=1;I_int<=2;I_int++){
        // 01100     FOR J=0 TO 9
        for(J_int=0;J_int<=9;J_int++){
            // 01110         READ S(I,J)
            S_int_arr[(int)I_int][(int)J_int] = Get_Data_Int();
            // 01120     NEXT J
            int dummy_1120=0; // Ignore this line.
        }; // End-For(J_int)
        // 01130 NEXT I
        int dummy_1130=0; // Ignore this line.
    }; // End-For(I_int)
    // 01140 DATA 0,1,2,3,3,2,2,1,0,-1
    // 01150 DATA 1,2,3,4,5,4,3,2,1,0
    // 01160 PRINT "  YOU ARE THE COWBOY.  GO CATCH YOUR HORSE IN THE CORRAL!"
    b2c_fprintf(stdout,"  YOU ARE THE COWBOY.  GO CATCH YOUR HORSE IN THE CORRAL!"); b2c_fprintf(stdout,"\n");
    // 01170 PRINT "DO YOU WANT FULL INSTRUCTIONS";
    b2c_fprintf(stdout,"DO YOU WANT FULL INSTRUCTIONS"); 
    // 01180 INPUT F$
    // Start of Basic INPUT statement 01180
    printf(" ? ");
    char inpbuf_01180[100];
    if(fgets(inpbuf_01180,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01180=strtok(inpbuf_01180," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01180==nullptr){
            F_str = "";
        }else{
            F_str = ps_01180;
        };
    }; // End of Basic INPUT statement 01180
    // 01190 IF LEFT$(F$,1)="N" THEN 1260
    if(strcmp(LEFT(F_str,1),"N")==0)goto Lbl_01260;
    // 01200 PRINT "YOU MOVE TOWARD YOUR HORSE 1 TO 5 STEPS AT A TIME."
    b2c_fprintf(stdout,"YOU MOVE TOWARD YOUR HORSE 1 TO 5 STEPS AT A TIME."); b2c_fprintf(stdout,"\n");
    // 01210 PRINT "IF YOU MORE THAN HALVE THE SEPERATION HE WILL BOLT!"
    b2c_fprintf(stdout,"IF YOU MORE THAN HALVE THE SEPERATION HE WILL BOLT!"); b2c_fprintf(stdout,"\n");
    // 01220 PRINT "HE MAY ALSO BOLT WHEN HE IS CLOSE TO THE RAIL"
    b2c_fprintf(stdout,"HE MAY ALSO BOLT WHEN HE IS CLOSE TO THE RAIL"); b2c_fprintf(stdout,"\n");
    // 01230 PRINT "WHEN YOU COME WITHIN 2 STEPS HE MAY KICK.  SO LOOKOUT!!"
    b2c_fprintf(stdout,"WHEN YOU COME WITHIN 2 STEPS HE MAY KICK.  SO LOOKOUT!!"); b2c_fprintf(stdout,"\n");
    // 01240 PRINT "IF YOU WISH TO QUIT AT ANY TIME ENTER 0(ZERO) TO PROMPT"
    b2c_fprintf(stdout,"IF YOU WISH TO QUIT AT ANY TIME ENTER 0(ZERO) TO PROMPT"); b2c_fprintf(stdout,"\n");
    // 01250 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");

  Lbl_01260:
    // 01260 PRINT "AFTER '?' TYPE IN DIGIT FROM 1 TO 5 FOR COWBOY'S NEXT MOVE"
    b2c_fprintf(stdout,"AFTER '?' TYPE IN DIGIT FROM 1 TO 5 FOR COWBOY'S NEXT MOVE"); b2c_fprintf(stdout,"\n");

  Lbl_01270:
    // 01270 C=1
    C_int = 1;
    // 01280 L=1
    L_int = 1;
    // 01290 K=0
    K_int = 0;
    // 01300 M=0
    M_int = 0;
    // 01310 N=0
    N_int = 0;
    // 01320 D9=RND(1)+1.5
    D9_flt = RND(1)+1.5;
    // 01330 PRINT "LEVEL OF DIFFICULTY (0-10) :"10-INT((D9-1.5)*10)
    b2c_fprintf(stdout,"LEVEL OF DIFFICULTY (0-10) :%d",10-INT((D9_flt-1.5)*10)); b2c_fprintf(stdout,"\n");
    // 01340 GOSUB 2350
    Routine_02350();
    // 01350 IF R<=5 THEN 1370
    if(R_int<=5)goto Lbl_01370;
    // 01360 Q=-Q
    Q_int = -Q_int;

  Lbl_01370:
    // 01370 H=13+Q
    H_int = 13+Q_int;
    // 01380 GOSUB 2400
    Routine_02400();
    // 01390 T=2+P
    T_int = 2+P_int;
    // 01400 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");

  Lbl_01410:
    // 01410 B$="            "
    GLBpStr="            ";
    B_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01420:
    // 01420 FOR J=1 TO 21
    for(J_int=1;J_int<=21;J_int++){
        // 01430     A(J)=32
        A_int_arr[(int)J_int] = 32;
        // 01440 NEXTJ
        int dummy_1440=0; // Ignore this line.
    }; // End-For(J_int)
    // 01450 A(C)=67
    A_int_arr[(int)C_int] = 67;
    // 01460 A(H)=72
    A_int_arr[(int)H_int] = 72;
    // 01470 PRINT N,"I";
    b2c_fprintf(stdout," %d @I",N_int); 
    // 01480 FOR J=1 TO 21
    for(J_int=1;J_int<=21;J_int++){
        // 01490     PRINT CHR$(A(J));
        b2c_fprintf(stdout,"%s",CHR(A_int_arr[(int)J_int])); 
        // 01500 NEXT J
        int dummy_1500=0; // Ignore this line.
    }; // End-For(J_int)
    // 01510 PRINT "I",B$;
    b2c_fprintf(stdout,"I@%s",B_str); 
    // 01520 X=ABS(H-C)
    X_int = ABS(H_int-C_int);
    // 01530 L=SGN(H-C)
    L_int = SGN(H_int-C_int);
    // 01540 N=N+1
    N_int = N_int+1;
    // 01550 IF K>0 GOTO 2030
    if(K_int>0)goto Lbl_02030;

  Lbl_01560:
    // 01560 IF N>100 GOTO 2310
    if(N_int>100)goto Lbl_02310;
    // 01570 INPUT D$
    // Start of Basic INPUT statement 01570
    printf(" ? ");
    char inpbuf_01570[100];
    if(fgets(inpbuf_01570,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01570=strtok(inpbuf_01570," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01570==nullptr){
            D_str = "";
        }else{
            D_str = ps_01570;
        };
    }; // End of Basic INPUT statement 01570
    // 01580 CHANGE D$ TO Z
    Z_int=atoi(D_str);
    // 01590 DIM Z(10)
    // 01600 D=Z(1)-48
    D_int = Z_int_arr[(int)1]-48;
    // 01610 IF D>0 THEN 1630
    if(D_int>0)goto Lbl_01630;
    // 01620 GOTO1640
    goto Lbl_01640;

  Lbl_01630:
    // 01630 IF D<6 GOTO 1670
    if(D_int<6)goto Lbl_01670;

  Lbl_01640:
    // 01640 IF D=0 THEN 2270
    if(D_int==0)goto Lbl_02270;
    // 01650 PRINT "ILLEGAL MOVE .TRY AGAIN",
    b2c_fprintf(stdout,"ILLEGAL MOVE .TRY AGAIN@"); 
    // 01660 GOTO 1560
    goto Lbl_01560;

  Lbl_01670:
    // 01670 E=C+L*D
    E_int = C_int+L_int*D_int;
    // 01680 IF E<1 THEN 1640
    if(E_int<1)goto Lbl_01640;
    // 01690 IF E>21 THEN 1640
    if(E_int>21)goto Lbl_01640;
    // 01700 C=E
    C_int = E_int;
    // 01710 GOSUB 2350
    Routine_02350();
    // 01720 G=P
    G_int = P_int;
    // 01730 H=H+L*G
    H_int = H_int+L_int*G_int;
    // 01740 GOSUB 2400
    Routine_02400();
    // 01750 IF X<2*D THEN 1770
    if(X_int<2*D_int)goto Lbl_01770;
    // 01760 GOTO 1780
    goto Lbl_01780;

  Lbl_01770:
    // 01770 IF D>1 GOTO 1840
    if(D_int>1)goto Lbl_01840;

  Lbl_01780:
    // 01780 IF H>1 THEN 1800
    if(H_int>1)goto Lbl_01800;
    // 01790 GOTO 1810
    goto Lbl_01810;

  Lbl_01800:
    // 01800 IF H<20 THEN 1930
    if(H_int<20)goto Lbl_01930;

  Lbl_01810:
    // 01810 GOSUB 2350
    Routine_02350();
    // 01820 IF R>2 GOTO 1930
    if(R_int>2)goto Lbl_01930;
    // 01830 IF X>7 GOTO 1410
    if(X_int>7)goto Lbl_01410;

  Lbl_01840:
    // 01840 G=9+2*G
    G_int = 9+2*G_int;
    // 01850 H=H-L*G
    H_int = H_int-L_int*G_int;
    // 01860 L=-L
    L_int = -L_int;
    // 01870 GOSUB 2400
    Routine_02400();
    // 01880 IF ABS(H-C)>1 THEN 1910
    if(ABS(H_int-C_int)>1)goto Lbl_01910;
    // 01890 H=H-3*L
    H_int = H_int-3*L_int;
    // 01900 GOSUB 2400
    Routine_02400();

  Lbl_01910:
    // 01910 B$="BOLTED      "
    GLBpStr="BOLTED      ";
    B_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01920 GOTO 1420
    goto Lbl_01420;

  Lbl_01930:
    // 01930 IF ABS(H-C)>2 GOTO 1410
    if(ABS(H_int-C_int)>2)goto Lbl_01410;
    // 01940 GOSUB 2350
    Routine_02350();
    // 01950 IF R1>D9 GOTO 2100
    if(R1_int>D9_flt)goto Lbl_02100;
    // 01960 GOSUB 2350
    Routine_02350();
    // 01970 K=P+2
    K_int = P_int+2;
    // 01980 M=M+1
    M_int = M_int+1;
    // 01990 H=H-5*L
    H_int = H_int-5*L_int;
    // 02000 GOSUB 2400
    Routine_02400();
    // 02010 B$="KICKED"
    GLBpStr="KICKED";
    B_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02020 GOTO 1420
    goto Lbl_01420;

  Lbl_02030:
    // 02030 IF M>T GOTO 2120
    if(M_int>T_int)goto Lbl_02120;
    // 02040 K=K-1
    K_int = K_int-1;
    // 02050 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02060 GOSUB 2350
    Routine_02350();
    // 02070 H=H+L*(P+1)
    H_int = H_int+L_int*(P_int+1);
    // 02080 GOSUB 2400
    Routine_02400();
    // 02090 GOTO1410
    goto Lbl_01410;

  Lbl_02100:
    // 02100 IF H=C THEN 2160
    if(H_int==C_int)goto Lbl_02160;
    // 02110 GOTO 1410
    goto Lbl_01410;

  Lbl_02120:
    // 02120 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02130 PRINT "THOSE KICKS LANDED YOU IN THE HOSPITAL!"
    b2c_fprintf(stdout,"THOSE KICKS LANDED YOU IN THE HOSPITAL!"); b2c_fprintf(stdout,"\n");
    // 02140 PRINT " GET WELL SOON!!"
    b2c_fprintf(stdout," GET WELL SOON!!"); b2c_fprintf(stdout,"\n");
    // 02150 GOTO 2270
    goto Lbl_02270;

  Lbl_02160:
    // 02160 FOR J=1 TO 21
    for(J_int=1;J_int<=21;J_int++){
        // 02170     A(J)=32
        A_int_arr[(int)J_int] = 32;
        // 02180 NEXT J
        int dummy_2180=0; // Ignore this line.
    }; // End-For(J_int)
    // 02190 A(C)=35
    A_int_arr[(int)C_int] = 35;
    // 02200 PRINT "I";
    b2c_fprintf(stdout,"I"); 
    // 02210 FOR J=1 TO 21
    for(J_int=1;J_int<=21;J_int++){
        // 02220     PRINT CHR$(A(J));
        b2c_fprintf(stdout,"%s",CHR(A_int_arr[(int)J_int])); 
        // 02230 NEXT J
        int dummy_2230=0; // Ignore this line.
    }; // End-For(J_int)
    // 02240 PRINT "I"
    b2c_fprintf(stdout,"I"); b2c_fprintf(stdout,"\n");
    // 02250 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02260 PRINT "YIPPEE!!  NOW SEE IF YOU CAN CATCH HIM IN FEWER MOVES"
    b2c_fprintf(stdout,"YIPPEE!!  NOW SEE IF YOU CAN CATCH HIM IN FEWER MOVES"); b2c_fprintf(stdout,"\n");

  Lbl_02270:
    // 02270 PRINT "ANOTHER ROUNDUP";
    b2c_fprintf(stdout,"ANOTHER ROUNDUP"); 
    // 02280 INPUT F$
    // Start of Basic INPUT statement 02280
    printf(" ? ");
    char inpbuf_02280[100];
    if(fgets(inpbuf_02280,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02280=strtok(inpbuf_02280," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02280==nullptr){
            F_str = "";
        }else{
            F_str = ps_02280;
        };
    }; // End of Basic INPUT statement 02280
    // 02290 IF LEFT$(F$,1)="Y" THEN 1270
    if(strcmp(LEFT(F_str,1),"Y")==0)goto Lbl_01270;
    // 02300 GOTO 2340
    goto Lbl_02340;

  Lbl_02310:
    // 02310 PRINT 
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02320 PRINT "ENOUGH!! YOU'D DO BETTER AS CAMP COOK!"
    b2c_fprintf(stdout,"ENOUGH!! YOU'D DO BETTER AS CAMP COOK!"); b2c_fprintf(stdout,"\n");
    // 02330 GOTO 2270
    goto Lbl_02270;

  Lbl_02340:
    // 02340 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
