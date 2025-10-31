/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/combat.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c0f9f0756d0 ---------A   00001  PRINT TAB(33);"COMBAT"
    0x5c0f9f075670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c0f9f0757f0 ---------A   00003  PRINT: PRINT: PRINT
    0x5c0f9f076080 ---------A   00004  PRINT "I AM AT WAR WITH YOU.": PRINT "WE HAVE 72000 SOLDIERS APIECE."
    0x5c0f9f076480 ---------A T 00005  PRINT:PRINT "DISTRIBUTE YOUR FORCES."
    0x5c0f9f075c60 ---------A   00006  PRINT ,"ME","  YOU"
    0x5c0f9f076620 ---------A   00007  PRINT "ARMY",30000,
    0x5c0f9f076840 ---------A   00008  INPUT A
    0x5c0f9f07d9e0 ---------A   00009  PRINT "NAVY",20000,
    0x5c0f9f07dba0 ---------A   00010  INPUT B
    0x5c0f9f07ddc0 ---------A   00011  PRINT "A. F.",22000,
    0x5c0f9f07dfc0 ---------A   00012  INPUT C
    0x5c0f9f07e460 ---------A   00013  IF A+B+C>72000 THEN 5
    0x5c0f9f077f30 ---------A   00014  D=30000
    0x5c0f9f077e70 ---------A   00015  E=20000
    0x5c0f9f0780b0 ---------A   00016  F=22000
    0x5c0f9f07ed20 ---------A   00017  PRINT "YOU ATTACK FIRST. TYPE (1) FOR ARMY; (2) FOR NAVY;"
    0x5c0f9f07ee60 ---------A   00018  PRINT "AND (3) FOR AIR FORCE."
    0x5c0f9f07f080 ---------A   00019  INPUT Y
    0x5c0f9f07f1e0 ---------A T 00020  PRINT "HOW MANY MEN"
    0x5c0f9f07f400 ---------A   00021  INPUT X
    0x5c0f9f07f640 ---------A   00022  IF X<0 THEN 20
    0x5c0f9f07f9e0 ---------A   00023  ON Y GOTO 100,200,300
    0x5c0f9f07fc60 ---------A T 00100  IF X>A THEN 20
    0x5c0f9f07ffe0 ---------A   00105  IF X<A/3 THEN 120
    0x5c0f9f080460 ---------A   00110  IF X<2*A/3 THEN 150
    0x5c0f9f080500 ---------A   00115  GOTO 270
    0x5c0f9f080850 ---------A T 00120  PRINT "YOU LOST";X;"MEN FROM YOUR ARMY."
    0x5c0f9f080c90 ---------A   00125  A=INT(A-X)
    0x5c0f9f080d30 ---------A   00130  GOTO 500
    0x5c0f9f081640 ---------A T 00150  PRINT "YOU LOST";INT(X/3);"MEN, BUT I LOST ";INT(2*D/3)
    0x5c0f9f081b80 ---------A   00155  A=INT(A-X/3)
    0x5c0f9f081d90 ---------A   00160  D=0
    0x5c0f9f082010 ---------A   00165  GOTO 500 
    0x5c0f9f082280 ---------A T 00200  IF X>B THEN 20
    0x5c0f9f082600 ---------A   00210  IF X<E/3 THEN 230
    0x5c0f9f082a80 ---------A   00215  IF X<2*E/3 THEN 250
    0x5c0f9f082ae0 ---------A   00220  GOTO 270
    0x5c0f9f082c40 ---------A T 00230  PRINT "YOUR ATTACK WAS STOPPED!"
    0x5c0f9f083080 ---------A   00232  B=INT(B-X)
    0x5c0f9f083110 ---------A   00235  GOTO 500
    0x5c0f9f083740 ---------A T 00250  PRINT "YOU DESTROYED";INT(2*E/3);"OF MY ARMY."
    0x5c0f9f083b60 ---------A   00255  E=INT(E/3)
    0x5c0f9f083c00 ---------A   00260  GOTO 500
    0x5c0f9f083d90 ---------A T 00270  PRINT "YOU SUNK ONE OF MY PATROL BOATS, BUT I WIPED OUT TWO"
    0x5c0f9f083f10 ---------A   00275  PRINT "OF YOUR AIR FORCE BASES AND 3 ARMY BASES."
    0x5c0f9f084330 ---------A   00280  A=INT(A/3)
    0x5c0f9f084740 ---------A   00285  C=INT(C/3)
    0x5c0f9f084c50 ---------A   00290  E=INT(2*E/3)
    0x5c0f9f084cc0 ---------A   00293  GOTO 500
    0x5c0f9f084f30 ---------A T 00300  IF X>C THEN 20
    0x5c0f9f0852b0 ---------A   00310  IF X<C/3 THEN 350
    0x5c0f9f085730 ---------A   00320  IF X<2*C/3 THEN 370
    0x5c0f9f0857c0 ---------A   00330  GOTO 380
    0x5c0f9f085920 ---------A T 00350  PRINT "YOUR ATTACK WAS WIPED OUT."
    0x5c0f9f085d60 ---------A   00355  C=INT(C-X)
    0x5c0f9f085e00 ---------A   00360  GOTO 500
    0x5c0f9f085f80 ---------A T 00370  PRINT "WE HAD A DOGFIGHT. YOU WON - AND FINISHED YOUR MISSION."
    0x5c0f9f0864a0 ---------A   00375  D=INT(2*D/3)
    0x5c0f9f0868b0 ---------A   00377  E=INT(E/3)
    0x5c0f9f086cc0 ---------A   00378  F=INT(F/3)
    0x5c0f9f086d60 ---------A   00379  GOTO 500
    0x5c0f9f086ef0 ---------A T 00380  PRINT "YOU WIPED OUT ONE OF MY ARMY PATROLS, BUT I DESTROYED"
    0x5c0f9f087070 ---------A   00381  PRINT "TWO NAVY BASES AND BOMBED THREE ARMY BASES."
    0x5c0f9f087490 ---------A   00385  A=INT(A/4)
    0x5c0f9f087cb0 ---------A   00387  B=INT(B/3)
    0x5c0f9f0881c0 ---------A   00390  D=INT(2*D/3)
    0x5c0f9f088230 ---------A T 00500  PRINT
    0x5c0f9f0884b0 ---------A   00501  PRINT,"YOU","ME"
    0x5c0f9f088810 ---------A   00510  PRINT "ARMY",A,D
    0x5c0f9f088b70 ---------A   00520  PRINT "NAVY",B,E
    0x5c0f9f088ee0 ---------A   00530  PRINT "A. F.",C,F
    0x5c0f9f089070 ---------A   01000  PRINT "WHAT IS YOUR NEXT MOVE?"
    0x5c0f9f0891e0 ---------A   01010  PRINT "ARMY=1  NAVY=2  AIR FORCE=3"
    0x5c0f9f089410 ---------A   01020  INPUT G
    0x5c0f9f089570 ---------A T 01030  PRINT "HOW MANY MEN"
    0x5c0f9f089790 ---------A   01040  INPUT T
    0x5c0f9f089a00 ---------A   01045  IF T<0 THEN 1030
    0x5c0f9f089da0 ---------A   01050  ON G GOTO 1600,1700,1800
    0x5c0f9f08a020 ---------A T 01600  IF T>A THEN 1030
    0x5c0f9f08a3b0 ---------A   01610  IF T<D/2 THEN 1630
    0x5c0f9f08a520 ---------A   01615  PRINT "YOU DESTROYED MY ARMY!"
    0x5c0f9f08a740 ---------A   01616  D=0
    0x5c0f9f08a7c0 ---------A   01617  GOTO 2000
    0x5c0f9f08a920 ---------A T 01630  PRINT "I WIPED OUT YOUR ATTACK!"
    0x5c0f9f08ac80 ---------A   01635  A=A-T
    0x5c0f9f08acf0 ---------A   01640  GOTO 2000
    0x5c0f9f08af60 ---------A T 01700  IF T>B THEN 1030 
    0x5c0f9f08b2e0 ---------A   01710  IF T<E/2 THEN 1750
    0x5c0f9f08b390 ---------A   01720  GOTO 1770
    0x5c0f9f08b520 ---------A T 01750  PRINT "I SUNK TWO OF YOUR BATTLESHIPS, AND MY AIR FORCE"
    0x5c0f9f08b690 ---------A   01751  PRINT "WIPED OUT YOUR UNGAURDED CAPITOL."
    0x5c0f9f08b9d0 ---------A   01755  A=A/4
    0x5c0f9f08bd00 ---------A   01760  B=B/2
    0x5c0f9f08bda0 ---------A   01765  GOTO 2000
    0x5c0f9f08bf30 ---------A T 01770  PRINT "YOUR NAVY SHOT DOWN THREE OF MY XIII PLANES,"
    0x5c0f9f08c0a0 ---------A   01771  PRINT "AND SUNK THREE BATTLESHIPS."
    0x5c0f9f08c4e0 ---------A   01775  F=2*F/3
    0x5c0f9f08c850 ---------A   01780  E=(E/2)
    0x5c0f9f08c8c0 ---------A   01790  GOTO 2000
    0x5c0f9f08cb40 ---------A T 01800  IF T>C THEN 1030 
    0x5c0f9f08cec0 ---------A   01810  IF T>F/2 THEN 1830 
    0x5c0f9f08cf70 ---------A   01820  GOTO 1850
    0x5c0f9f08d0f0 ---------A T 01830  PRINT "MY NAVY AND AIR FORCE IN A COMBINED ATTACK LEFT"
    0x5c0f9f08d260 ---------A   01831  PRINT "YOUR COUNTRY IN SHAMBLES."
    0x5c0f9f08d5a0 ---------A   01835  A=A/3
    0x5c0f9f08d8d0 ---------A   01837  B=B/3
    0x5c0f9f08dc00 ---------A   01840  C=C/3
    0x5c0f9f08dca0 ---------A   01845  GOTO 2000
    0x5c0f9f08de20 ---------A T 01850  PRINT "ONE OF YOUR PLANES CRASHED INTO MY HOUSE. I AM DEAD."
    0x5c0f9f08df90 ---------A   01851  PRINT "MY COUNTRY FELL APART."
    0x5c0f9f08e010 ---------A   01860  GOTO 2010
    0x5c0f9f08e0a0 ---------A T 02000  PRINT
    0x5c0f9f08e230 ---------A   02001  PRINT "FROM THE RESULTS OF BOTH OF YOUR ATTACKS,"
    0x5c0f9f08eb80 ---------A   02002  IF A+B+C>3/2*(D+E+F) THEN 2010
    0x5c0f9f08f4f0 ---------A   02005  IF A+B+C<2/3*(D+E+F) THEN 2015
    0x5c0f9f08f690 ---------A   02006  PRINT "THE TREATY OF PARIS CONCLUDED THAT WE TAKE OUR"
    0x5c0f9f08f810 ---------A   02007  PRINT "RESPECTIVE COUNTRIES AND LIVE IN PEACE."
    0x5c0f9f08f8a0 ---------A   02008  GOTO 2020
    0x5c0f9f08fa00 ---------A T 02010  PRINT "YOU WON, OH! SHUCKS!!!!"
    0x5c0f9f08fab0 ---------A   02012  GOTO 2020
    0x5c0f9f08fc40 ---------A T 02015  PRINT "YOU LOST-I CONQUERED YOUR COUNTRY.  IT SERVES YOU"
    0x5c0f9f08fdb0 ---------A   02016  PRINT "RIGHT FOR PLAYING THIS STUPID GAME!!!"
    0x5c0f9f08fe10 ---------A T 02020  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00005      00013T
     00020      00022T, 00100T, 00200T, 00300T
     00100      00023T
     00120      00105T
     00150      00110T
     00200      00023T
     00230      00210T
     00250      00215T
     00270      00115T, 00220T
     00300      00023T
     00350      00310T
     00370      00320T
     00380      00330T
     00500      00130T, 00165T, 00235T, 00260T, 00293T, 00360T, 00379T
     01030      01045T, 01600T, 01700T, 01800T
     01600      01050T
     01630      01610T
     01700      01050T
     01750      01710T
     01770      01720T
     01800      01050T
     01830      01810T
     01850      01820T
     02000      01617T, 01640T, 01765T, 01790T, 01845T
     02010      01860T, 02002T
     02015      02005T
     02020      02008T, 02012T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5c0f9f0756d0 (00001)   0x5c0f9f0756d0 (00001)   0x5c0f9f08fe10 (02020)   0x5c0f9f08fe10 (02020)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/combat.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c0f9f0756d0 ---------A   00001  PRINT TAB(33);"COMBAT"
    0x5c0f9f075670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c0f9f0662b0 ----------   00003  PRINT
    0x5c0f9f0759e0 ----------        a PRINT
    0x5c0f9f0757f0 ---------A        b PRINT
    0x5c0f9f077ae0 ----------   00004  PRINT "I AM AT WAR WITH YOU."
    0x5c0f9f076080 ---------A        a PRINT "WE HAVE 72000 SOLDIERS APIECE."
    0x5c0f9f075e40 ---------- T 00005  PRINT
    0x5c0f9f076480 ---------A T      a PRINT "DISTRIBUTE YOUR FORCES."
    0x5c0f9f075c60 ---------A   00006  PRINT ,"ME","  YOU"
    0x5c0f9f076620 ---------A   00007  PRINT "ARMY",30000,
    0x5c0f9f076840 ---------A   00008  INPUT A
    0x5c0f9f07d9e0 ---------A   00009  PRINT "NAVY",20000,
    0x5c0f9f07dba0 ---------A   00010  INPUT B
    0x5c0f9f07ddc0 ---------A   00011  PRINT "A. F.",22000,
    0x5c0f9f07dfc0 ---------A   00012  INPUT C
    0x5c0f9f07e460 ---------A   00013  IF A+B+C>72000 THEN 5
    0x5c0f9f077f30 ---------A   00014  D=30000
    0x5c0f9f077e70 ---------A   00015  E=20000
    0x5c0f9f0780b0 ---------A   00016  F=22000
    0x5c0f9f07ed20 ---------A   00017  PRINT "YOU ATTACK FIRST. TYPE (1) FOR ARMY; (2) FOR NAVY;"
    0x5c0f9f07ee60 ---------A   00018  PRINT "AND (3) FOR AIR FORCE."
    0x5c0f9f07f080 ---------A   00019  INPUT Y
    0x5c0f9f07f1e0 ---------A T 00020  PRINT "HOW MANY MEN"
    0x5c0f9f07f400 ---------A   00021  INPUT X
    0x5c0f9f07f640 ---------A   00022  IF X<0 THEN 20
    0x5c0f9f07f9e0 ---------A   00023  ON Y GOTO 100,200,300
    0x5c0f9f07fc60 ---------A T 00100  IF X>A THEN 20
    0x5c0f9f07ffe0 ---------A   00105  IF X<A/3 THEN 120
    0x5c0f9f080460 ---------A   00110  IF X<2*A/3 THEN 150
    0x5c0f9f080500 ---------A   00115  GOTO 270
    0x5c0f9f080850 ---------A T 00120  PRINT "YOU LOST";X;"MEN FROM YOUR ARMY."
    0x5c0f9f080c90 ---------A   00125  A=INT(A-X)
    0x5c0f9f080d30 ---------A   00130  GOTO 500
    0x5c0f9f081640 ---------A T 00150  PRINT "YOU LOST";INT(X/3);"MEN, BUT I LOST ";INT(2*D/3)
    0x5c0f9f081b80 ---------A   00155  A=INT(A-X/3)
    0x5c0f9f081d90 ---------A   00160  D=0
    0x5c0f9f082010 ---------A   00165  GOTO 500 
    0x5c0f9f082280 ---------A T 00200  IF X>B THEN 20
    0x5c0f9f082600 ---------A   00210  IF X<E/3 THEN 230
    0x5c0f9f082a80 ---------A   00215  IF X<2*E/3 THEN 250
    0x5c0f9f082ae0 ---------A   00220  GOTO 270
    0x5c0f9f082c40 ---------A T 00230  PRINT "YOUR ATTACK WAS STOPPED!"
    0x5c0f9f083080 ---------A   00232  B=INT(B-X)
    0x5c0f9f083110 ---------A   00235  GOTO 500
    0x5c0f9f083740 ---------A T 00250  PRINT "YOU DESTROYED";INT(2*E/3);"OF MY ARMY."
    0x5c0f9f083b60 ---------A   00255  E=INT(E/3)
    0x5c0f9f083c00 ---------A   00260  GOTO 500
    0x5c0f9f083d90 ---------A T 00270  PRINT "YOU SUNK ONE OF MY PATROL BOATS, BUT I WIPED OUT TWO"
    0x5c0f9f083f10 ---------A   00275  PRINT "OF YOUR AIR FORCE BASES AND 3 ARMY BASES."
    0x5c0f9f084330 ---------A   00280  A=INT(A/3)
    0x5c0f9f084740 ---------A   00285  C=INT(C/3)
    0x5c0f9f084c50 ---------A   00290  E=INT(2*E/3)
    0x5c0f9f084cc0 ---------A   00293  GOTO 500
    0x5c0f9f084f30 ---------A T 00300  IF X>C THEN 20
    0x5c0f9f0852b0 ---------A   00310  IF X<C/3 THEN 350
    0x5c0f9f085730 ---------A   00320  IF X<2*C/3 THEN 370
    0x5c0f9f0857c0 ---------A   00330  GOTO 380
    0x5c0f9f085920 ---------A T 00350  PRINT "YOUR ATTACK WAS WIPED OUT."
    0x5c0f9f085d60 ---------A   00355  C=INT(C-X)
    0x5c0f9f085e00 ---------A   00360  GOTO 500
    0x5c0f9f085f80 ---------A T 00370  PRINT "WE HAD A DOGFIGHT. YOU WON - AND FINISHED YOUR MISSION."
    0x5c0f9f0864a0 ---------A   00375  D=INT(2*D/3)
    0x5c0f9f0868b0 ---------A   00377  E=INT(E/3)
    0x5c0f9f086cc0 ---------A   00378  F=INT(F/3)
    0x5c0f9f086d60 ---------A   00379  GOTO 500
    0x5c0f9f086ef0 ---------A T 00380  PRINT "YOU WIPED OUT ONE OF MY ARMY PATROLS, BUT I DESTROYED"
    0x5c0f9f087070 ---------A   00381  PRINT "TWO NAVY BASES AND BOMBED THREE ARMY BASES."
    0x5c0f9f087490 ---------A   00385  A=INT(A/4)
    0x5c0f9f087cb0 ---------A   00387  B=INT(B/3)
    0x5c0f9f0881c0 ---------A   00390  D=INT(2*D/3)
    0x5c0f9f088230 ---------A T 00500  PRINT
    0x5c0f9f0884b0 ---------A   00501  PRINT,"YOU","ME"
    0x5c0f9f088810 ---------A   00510  PRINT "ARMY",A,D
    0x5c0f9f088b70 ---------A   00520  PRINT "NAVY",B,E
    0x5c0f9f088ee0 ---------A   00530  PRINT "A. F.",C,F
    0x5c0f9f089070 ---------A   01000  PRINT "WHAT IS YOUR NEXT MOVE?"
    0x5c0f9f0891e0 ---------A   01010  PRINT "ARMY=1  NAVY=2  AIR FORCE=3"
    0x5c0f9f089410 ---------A   01020  INPUT G
    0x5c0f9f089570 ---------A T 01030  PRINT "HOW MANY MEN"
    0x5c0f9f089790 ---------A   01040  INPUT T
    0x5c0f9f089a00 ---------A   01045  IF T<0 THEN 1030
    0x5c0f9f089da0 ---------A   01050  ON G GOTO 1600,1700,1800
    0x5c0f9f08a020 ---------A T 01600  IF T>A THEN 1030
    0x5c0f9f08a3b0 ---------A   01610  IF T<D/2 THEN 1630
    0x5c0f9f08a520 ---------A   01615  PRINT "YOU DESTROYED MY ARMY!"
    0x5c0f9f08a740 ---------A   01616  D=0
    0x5c0f9f08a7c0 ---------A   01617  GOTO 2000
    0x5c0f9f08a920 ---------A T 01630  PRINT "I WIPED OUT YOUR ATTACK!"
    0x5c0f9f08ac80 ---------A   01635  A=A-T
    0x5c0f9f08acf0 ---------A   01640  GOTO 2000
    0x5c0f9f08af60 ---------A T 01700  IF T>B THEN 1030 
    0x5c0f9f08b2e0 ---------A   01710  IF T<E/2 THEN 1750
    0x5c0f9f08b390 ---------A   01720  GOTO 1770
    0x5c0f9f08b520 ---------A T 01750  PRINT "I SUNK TWO OF YOUR BATTLESHIPS, AND MY AIR FORCE"
    0x5c0f9f08b690 ---------A   01751  PRINT "WIPED OUT YOUR UNGAURDED CAPITOL."
    0x5c0f9f08b9d0 ---------A   01755  A=A/4
    0x5c0f9f08bd00 ---------A   01760  B=B/2
    0x5c0f9f08bda0 ---------A   01765  GOTO 2000
    0x5c0f9f08bf30 ---------A T 01770  PRINT "YOUR NAVY SHOT DOWN THREE OF MY XIII PLANES,"
    0x5c0f9f08c0a0 ---------A   01771  PRINT "AND SUNK THREE BATTLESHIPS."
    0x5c0f9f08c4e0 ---------A   01775  F=2*F/3
    0x5c0f9f08c850 ---------A   01780  E=(E/2)
    0x5c0f9f08c8c0 ---------A   01790  GOTO 2000
    0x5c0f9f08cb40 ---------A T 01800  IF T>C THEN 1030 
    0x5c0f9f08cec0 ---------A   01810  IF T>F/2 THEN 1830 
    0x5c0f9f08cf70 ---------A   01820  GOTO 1850
    0x5c0f9f08d0f0 ---------A T 01830  PRINT "MY NAVY AND AIR FORCE IN A COMBINED ATTACK LEFT"
    0x5c0f9f08d260 ---------A   01831  PRINT "YOUR COUNTRY IN SHAMBLES."
    0x5c0f9f08d5a0 ---------A   01835  A=A/3
    0x5c0f9f08d8d0 ---------A   01837  B=B/3
    0x5c0f9f08dc00 ---------A   01840  C=C/3
    0x5c0f9f08dca0 ---------A   01845  GOTO 2000
    0x5c0f9f08de20 ---------A T 01850  PRINT "ONE OF YOUR PLANES CRASHED INTO MY HOUSE. I AM DEAD."
    0x5c0f9f08df90 ---------A   01851  PRINT "MY COUNTRY FELL APART."
    0x5c0f9f08e010 ---------A   01860  GOTO 2010
    0x5c0f9f08e0a0 ---------A T 02000  PRINT
    0x5c0f9f08e230 ---------A   02001  PRINT "FROM THE RESULTS OF BOTH OF YOUR ATTACKS,"
    0x5c0f9f08eb80 ---------A   02002  IF A+B+C>3/2*(D+E+F) THEN 2010
    0x5c0f9f08f4f0 ---------A   02005  IF A+B+C<2/3*(D+E+F) THEN 2015
    0x5c0f9f08f690 ---------A   02006  PRINT "THE TREATY OF PARIS CONCLUDED THAT WE TAKE OUR"
    0x5c0f9f08f810 ---------A   02007  PRINT "RESPECTIVE COUNTRIES AND LIVE IN PEACE."
    0x5c0f9f08f8a0 ---------A   02008  GOTO 2020
    0x5c0f9f08fa00 ---------A T 02010  PRINT "YOU WON, OH! SHUCKS!!!!"
    0x5c0f9f08fab0 ---------A   02012  GOTO 2020
    0x5c0f9f08fc40 ---------A T 02015  PRINT "YOU LOST-I CONQUERED YOUR COUNTRY.  IT SERVES YOU"
    0x5c0f9f08fdb0 ---------A   02016  PRINT "RIGHT FOR PLAYING THIS STUPID GAME!!!"
    0x5c0f9f08fe10 ---------A T 02020  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/combat.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c0f9f0756d0 ---------A   01000  PRINT TAB(33);"COMBAT"
    0x5c0f9f075670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c0f9f0662b0 ----------   01020  PRINT
    0x5c0f9f0759e0 ---------- T 01030  PRINT
    0x5c0f9f0757f0 ---------A   01040  PRINT
    0x5c0f9f077ae0 ----------   01050  PRINT "I AM AT WAR WITH YOU."
    0x5c0f9f076080 ---------A   01060  PRINT "WE HAVE 72000 SOLDIERS APIECE."
    0x5c0f9f075e40 ----------   01070  PRINT
    0x5c0f9f076480 ---------A   01080  PRINT "DISTRIBUTE YOUR FORCES."
    0x5c0f9f075c60 ---------A   01090  PRINT ,"ME","  YOU"
    0x5c0f9f076620 ---------A   01100  PRINT "ARMY",30000,
    0x5c0f9f076840 ---------A   01110  INPUT A
    0x5c0f9f07d9e0 ---------A   01120  PRINT "NAVY",20000,
    0x5c0f9f07dba0 ---------A   01130  INPUT B
    0x5c0f9f07ddc0 ---------A   01140  PRINT "A. F.",22000,
    0x5c0f9f07dfc0 ---------A   01150  INPUT C
    0x5c0f9f07e460 ---------A   01160  IF A+B+C>72000 THEN 1080
    0x5c0f9f077f30 ---------A   01170  D=30000
    0x5c0f9f077e70 ---------A   01180  E=20000
    0x5c0f9f0780b0 ---------A   01190  F=22000
    0x5c0f9f07ed20 ---------A   01200  PRINT "YOU ATTACK FIRST. TYPE (1) FOR ARMY; (2) FOR NAVY;"
    0x5c0f9f07ee60 ---------A   01210  PRINT "AND (3) FOR AIR FORCE."
    0x5c0f9f07f080 ---------A   01220  INPUT Y
    0x5c0f9f07f1e0 ---------A   01230  PRINT "HOW MANY MEN"
    0x5c0f9f07f400 ---------A   01240  INPUT X
    0x5c0f9f07f640 ---------A   01250  IF X<0 THEN 1230
    0x5c0f9f07f9e0 ---------A   01260  ON Y GOTO 1270,1380,1540
    0x5c0f9f07fc60 ---------A   01270  IF X>A THEN 1230
    0x5c0f9f07ffe0 ---------A   01280  IF X<A/3 THEN 1310
    0x5c0f9f080460 ---------A   01290  IF X<2*A/3 THEN 1340
    0x5c0f9f080500 ---------A   01300  GOTO 1480
    0x5c0f9f080850 ---------A   01310  PRINT "YOU LOST";X;"MEN FROM YOUR ARMY."
    0x5c0f9f080c90 ---------A   01320  A=INT(A-X)
    0x5c0f9f080d30 ---------A   01330  GOTO 1710
    0x5c0f9f081640 ---------A   01340  PRINT "YOU LOST";INT(X/3);"MEN, BUT I LOST ";INT(2*D/3)
    0x5c0f9f081b80 ---------A   01350  A=INT(A-X/3)
    0x5c0f9f081d90 ---------A   01360  D=0
    0x5c0f9f082010 ---------A   01370  GOTO 1710 
    0x5c0f9f082280 ---------A   01380  IF X>B THEN 1230
    0x5c0f9f082600 ---------A   01390  IF X<E/3 THEN 1420
    0x5c0f9f082a80 ---------A   01400  IF X<2*E/3 THEN 1450
    0x5c0f9f082ae0 ---------A   01410  GOTO 1480
    0x5c0f9f082c40 ---------A   01420  PRINT "YOUR ATTACK WAS STOPPED!"
    0x5c0f9f083080 ---------A   01430  B=INT(B-X)
    0x5c0f9f083110 ---------A   01440  GOTO 1710
    0x5c0f9f083740 ---------A   01450  PRINT "YOU DESTROYED";INT(2*E/3);"OF MY ARMY."
    0x5c0f9f083b60 ---------A   01460  E=INT(E/3)
    0x5c0f9f083c00 ---------A   01470  GOTO 1710
    0x5c0f9f083d90 ---------A   01480  PRINT "YOU SUNK ONE OF MY PATROL BOATS, BUT I WIPED OUT TWO"
    0x5c0f9f083f10 ---------A   01490  PRINT "OF YOUR AIR FORCE BASES AND 3 ARMY BASES."
    0x5c0f9f084330 ---------A   01500  A=INT(A/3)
    0x5c0f9f084740 ---------A   01510  C=INT(C/3)
    0x5c0f9f084c50 ---------A   01520  E=INT(2*E/3)
    0x5c0f9f084cc0 ---------A   01530  GOTO 1710
    0x5c0f9f084f30 ---------A   01540  IF X>C THEN 1230
    0x5c0f9f0852b0 ---------A   01550  IF X<C/3 THEN 1580
    0x5c0f9f085730 ---------A   01560  IF X<2*C/3 THEN 1610
    0x5c0f9f0857c0 ---------A   01570  GOTO 1660
    0x5c0f9f085920 ---------A   01580  PRINT "YOUR ATTACK WAS WIPED OUT."
    0x5c0f9f085d60 ---------A   01590  C=INT(C-X)
    0x5c0f9f085e00 ---------A T 01600  GOTO 1710
    0x5c0f9f085f80 ---------A   01610  PRINT "WE HAD A DOGFIGHT. YOU WON - AND FINISHED YOUR MISSION."
    0x5c0f9f0864a0 ---------A   01620  D=INT(2*D/3)
    0x5c0f9f0868b0 ---------A T 01630  E=INT(E/3)
    0x5c0f9f086cc0 ---------A   01640  F=INT(F/3)
    0x5c0f9f086d60 ---------A   01650  GOTO 1710
    0x5c0f9f086ef0 ---------A   01660  PRINT "YOU WIPED OUT ONE OF MY ARMY PATROLS, BUT I DESTROYED"
    0x5c0f9f087070 ---------A   01670  PRINT "TWO NAVY BASES AND BOMBED THREE ARMY BASES."
    0x5c0f9f087490 ---------A   01680  A=INT(A/4)
    0x5c0f9f087cb0 ---------A   01690  B=INT(B/3)
    0x5c0f9f0881c0 ---------A T 01700  D=INT(2*D/3)
    0x5c0f9f088230 ---------A   01710  PRINT
    0x5c0f9f0884b0 ---------A   01720  PRINT,"YOU","ME"
    0x5c0f9f088810 ---------A   01730  PRINT "ARMY",A,D
    0x5c0f9f088b70 ---------A   01740  PRINT "NAVY",B,E
    0x5c0f9f088ee0 ---------A T 01750  PRINT "A. F.",C,F
    0x5c0f9f089070 ---------A   01760  PRINT "WHAT IS YOUR NEXT MOVE?"
    0x5c0f9f0891e0 ---------A T 01770  PRINT "ARMY=1  NAVY=2  AIR FORCE=3"
    0x5c0f9f089410 ---------A   01780  INPUT G
    0x5c0f9f089570 ---------A   01790  PRINT "HOW MANY MEN"
    0x5c0f9f089790 ---------A T 01800  INPUT T
    0x5c0f9f089a00 ---------A   01810  IF T<0 THEN 1790
    0x5c0f9f089da0 ---------A   01820  ON G GOTO 1830,1910,2040
    0x5c0f9f08a020 ---------A T 01830  IF T>A THEN 1790
    0x5c0f9f08a3b0 ---------A   01840  IF T<D/2 THEN 1880
    0x5c0f9f08a520 ---------A T 01850  PRINT "YOU DESTROYED MY ARMY!"
    0x5c0f9f08a740 ---------A   01860  D=0
    0x5c0f9f08a7c0 ---------A   01870  GOTO 2160
    0x5c0f9f08a920 ---------A   01880  PRINT "I WIPED OUT YOUR ATTACK!"
    0x5c0f9f08ac80 ---------A   01890  A=A-T
    0x5c0f9f08acf0 ---------A   01900  GOTO 2160
    0x5c0f9f08af60 ---------A   01910  IF T>B THEN 1790 
    0x5c0f9f08b2e0 ---------A   01920  IF T<E/2 THEN 1940
    0x5c0f9f08b390 ---------A   01930  GOTO 1990
    0x5c0f9f08b520 ---------A   01940  PRINT "I SUNK TWO OF YOUR BATTLESHIPS, AND MY AIR FORCE"
    0x5c0f9f08b690 ---------A   01950  PRINT "WIPED OUT YOUR UNGAURDED CAPITOL."
    0x5c0f9f08b9d0 ---------A   01960  A=A/4
    0x5c0f9f08bd00 ---------A   01970  B=B/2
    0x5c0f9f08bda0 ---------A   01980  GOTO 2160
    0x5c0f9f08bf30 ---------A   01990  PRINT "YOUR NAVY SHOT DOWN THREE OF MY XIII PLANES,"
    0x5c0f9f08c0a0 ---------A T 02000  PRINT "AND SUNK THREE BATTLESHIPS."
    0x5c0f9f08c4e0 ---------A T 02010  F=2*F/3
    0x5c0f9f08c850 ---------A T 02020  E=(E/2)
    0x5c0f9f08c8c0 ---------A   02030  GOTO 2160
    0x5c0f9f08cb40 ---------A   02040  IF T>C THEN 1790 
    0x5c0f9f08cec0 ---------A   02050  IF T>F/2 THEN 2070 
    0x5c0f9f08cf70 ---------A   02060  GOTO 2130
    0x5c0f9f08d0f0 ---------A   02070  PRINT "MY NAVY AND AIR FORCE IN A COMBINED ATTACK LEFT"
    0x5c0f9f08d260 ---------A   02080  PRINT "YOUR COUNTRY IN SHAMBLES."
    0x5c0f9f08d5a0 ---------A   02090  A=A/3
    0x5c0f9f08d8d0 ---------A   02100  B=B/3
    0x5c0f9f08dc00 ---------A   02110  C=C/3
    0x5c0f9f08dca0 ---------A   02120  GOTO 2160
    0x5c0f9f08de20 ---------A   02130  PRINT "ONE OF YOUR PLANES CRASHED INTO MY HOUSE. I AM DEAD."
    0x5c0f9f08df90 ---------A   02140  PRINT "MY COUNTRY FELL APART."
    0x5c0f9f08e010 ---------A   02150  GOTO 2230
    0x5c0f9f08e0a0 ---------A   02160  PRINT
    0x5c0f9f08e230 ---------A   02170  PRINT "FROM THE RESULTS OF BOTH OF YOUR ATTACKS,"
    0x5c0f9f08eb80 ---------A   02180  IF A+B+C>3/2*(D+E+F) THEN 2230
    0x5c0f9f08f4f0 ---------A   02190  IF A+B+C<2/3*(D+E+F) THEN 2250
    0x5c0f9f08f690 ---------A   02200  PRINT "THE TREATY OF PARIS CONCLUDED THAT WE TAKE OUR"
    0x5c0f9f08f810 ---------A   02210  PRINT "RESPECTIVE COUNTRIES AND LIVE IN PEACE."
    0x5c0f9f08f8a0 ---------A   02220  GOTO 2270
    0x5c0f9f08fa00 ---------A   02230  PRINT "YOU WON, OH! SHUCKS!!!!"
    0x5c0f9f08fab0 ---------A   02240  GOTO 2270
    0x5c0f9f08fc40 ---------A   02250  PRINT "YOU LOST-I CONQUERED YOUR COUNTRY.  IT SERVES YOU"
    0x5c0f9f08fdb0 ---------A   02260  PRINT "RIGHT FOR PLAYING THIS STUPID GAME!!!"
    0x5c0f9f08fe10 ---------A   02270  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02280 - 10000    7730 

 */



/*
 *  Symbol Table Listing for 'basic/combat.bas'
 *
    A                        Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    C                        Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Integer     
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
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
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
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
    X                        Integer     
    Y                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/combat.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c0f9f0756d0 ---------A   01000  PRINT TAB(33);"COMBAT"
    0x5c0f9f075670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c0f9f0662b0 ---------A   01020  PRINT
    0x5c0f9f0759e0 ---------A   01030  PRINT
    0x5c0f9f0757f0 ---------A   01040  PRINT
    0x5c0f9f077ae0 ---------A   01050  PRINT "I AM AT WAR WITH YOU."
    0x5c0f9f076080 ---------A   01060  PRINT "WE HAVE 72000 SOLDIERS APIECE."
    0x5c0f9f075e40 ---------A   01070  PRINT
    0x5c0f9f076480 ---------A T 01080  PRINT "DISTRIBUTE YOUR FORCES."
    0x5c0f9f075c60 ---------A   01090  PRINT ,"ME","  YOU"
    0x5c0f9f076620 ---------A   01100  PRINT "ARMY",30000,
    0x5c0f9f076840 ---------A   01110  INPUT A
    0x5c0f9f07d9e0 ---------A   01120  PRINT "NAVY",20000,
    0x5c0f9f07dba0 ---------A   01130  INPUT B
    0x5c0f9f07ddc0 ---------A   01140  PRINT "A. F.",22000,
    0x5c0f9f07dfc0 ---------A   01150  INPUT C
    0x5c0f9f07e460 ---------A   01160  IF A+B+C>72000 THEN 1080
    0x5c0f9f077f30 ---------A   01170  D=30000
    0x5c0f9f077e70 ---------A   01180  E=20000
    0x5c0f9f0780b0 ---------A   01190  F=22000
    0x5c0f9f07ed20 ---------A   01200  PRINT "YOU ATTACK FIRST. TYPE (1) FOR ARMY; (2) FOR NAVY;"
    0x5c0f9f07ee60 ---------A   01210  PRINT "AND (3) FOR AIR FORCE."
    0x5c0f9f07f080 ---------A   01220  INPUT Y
    0x5c0f9f07f1e0 ---------A T 01230  PRINT "HOW MANY MEN"
    0x5c0f9f07f400 ---------A   01240  INPUT X
    0x5c0f9f07f640 ---------A   01250  IF X<0 THEN 1230
    0x5c0f9f07f9e0 ---------A   01260  ON Y GOTO 1270,1380,1540
    0x5c0f9f07fc60 ---------A T 01270  IF X>A THEN 1230
    0x5c0f9f07ffe0 ---------A   01280  IF X<A/3 THEN 1310
    0x5c0f9f080460 ---------A   01290  IF X<2*A/3 THEN 1340
    0x5c0f9f080500 ---------A   01300  GOTO 1480
    0x5c0f9f080850 ---------A T 01310  PRINT "YOU LOST";X;"MEN FROM YOUR ARMY."
    0x5c0f9f080c90 ---------A   01320  A=INT(A-X)
    0x5c0f9f080d30 ---------A   01330  GOTO 1710
    0x5c0f9f081640 ---------A T 01340  PRINT "YOU LOST";INT(X/3);"MEN, BUT I LOST ";INT(2*D/3)
    0x5c0f9f081b80 ---------A   01350  A=INT(A-X/3)
    0x5c0f9f081d90 ---------A   01360  D=0
    0x5c0f9f082010 ---------A   01370  GOTO 1710 
    0x5c0f9f082280 ---------A T 01380  IF X>B THEN 1230
    0x5c0f9f082600 ---------A   01390  IF X<E/3 THEN 1420
    0x5c0f9f082a80 ---------A   01400  IF X<2*E/3 THEN 1450
    0x5c0f9f082ae0 ---------A   01410  GOTO 1480
    0x5c0f9f082c40 ---------A T 01420  PRINT "YOUR ATTACK WAS STOPPED!"
    0x5c0f9f083080 ---------A   01430  B=INT(B-X)
    0x5c0f9f083110 ---------A   01440  GOTO 1710
    0x5c0f9f083740 ---------A T 01450  PRINT "YOU DESTROYED";INT(2*E/3);"OF MY ARMY."
    0x5c0f9f083b60 ---------A   01460  E=INT(E/3)
    0x5c0f9f083c00 ---------A   01470  GOTO 1710
    0x5c0f9f083d90 ---------A T 01480  PRINT "YOU SUNK ONE OF MY PATROL BOATS, BUT I WIPED OUT TWO"
    0x5c0f9f083f10 ---------A   01490  PRINT "OF YOUR AIR FORCE BASES AND 3 ARMY BASES."
    0x5c0f9f084330 ---------A   01500  A=INT(A/3)
    0x5c0f9f084740 ---------A   01510  C=INT(C/3)
    0x5c0f9f084c50 ---------A   01520  E=INT(2*E/3)
    0x5c0f9f084cc0 ---------A   01530  GOTO 1710
    0x5c0f9f084f30 ---------A T 01540  IF X>C THEN 1230
    0x5c0f9f0852b0 ---------A   01550  IF X<C/3 THEN 1580
    0x5c0f9f085730 ---------A   01560  IF X<2*C/3 THEN 1610
    0x5c0f9f0857c0 ---------A   01570  GOTO 1660
    0x5c0f9f085920 ---------A T 01580  PRINT "YOUR ATTACK WAS WIPED OUT."
    0x5c0f9f085d60 ---------A   01590  C=INT(C-X)
    0x5c0f9f085e00 ---------A   01600  GOTO 1710
    0x5c0f9f085f80 ---------A T 01610  PRINT "WE HAD A DOGFIGHT. YOU WON - AND FINISHED YOUR MISSION."
    0x5c0f9f0864a0 ---------A   01620  D=INT(2*D/3)
    0x5c0f9f0868b0 ---------A   01630  E=INT(E/3)
    0x5c0f9f086cc0 ---------A   01640  F=INT(F/3)
    0x5c0f9f086d60 ---------A   01650  GOTO 1710
    0x5c0f9f086ef0 ---------A T 01660  PRINT "YOU WIPED OUT ONE OF MY ARMY PATROLS, BUT I DESTROYED"
    0x5c0f9f087070 ---------A   01670  PRINT "TWO NAVY BASES AND BOMBED THREE ARMY BASES."
    0x5c0f9f087490 ---------A   01680  A=INT(A/4)
    0x5c0f9f087cb0 ---------A   01690  B=INT(B/3)
    0x5c0f9f0881c0 ---------A   01700  D=INT(2*D/3)
    0x5c0f9f088230 ---------A T 01710  PRINT
    0x5c0f9f0884b0 ---------A   01720  PRINT,"YOU","ME"
    0x5c0f9f088810 ---------A   01730  PRINT "ARMY",A,D
    0x5c0f9f088b70 ---------A   01740  PRINT "NAVY",B,E
    0x5c0f9f088ee0 ---------A   01750  PRINT "A. F.",C,F
    0x5c0f9f089070 ---------A   01760  PRINT "WHAT IS YOUR NEXT MOVE?"
    0x5c0f9f0891e0 ---------A   01770  PRINT "ARMY=1  NAVY=2  AIR FORCE=3"
    0x5c0f9f089410 ---------A   01780  INPUT G
    0x5c0f9f089570 ---------A T 01790  PRINT "HOW MANY MEN"
    0x5c0f9f089790 ---------A   01800  INPUT T
    0x5c0f9f089a00 ---------A   01810  IF T<0 THEN 1790
    0x5c0f9f089da0 ---------A   01820  ON G GOTO 1830,1910,2040
    0x5c0f9f08a020 ---------A T 01830  IF T>A THEN 1790
    0x5c0f9f08a3b0 ---------A   01840  IF T<D/2 THEN 1880
    0x5c0f9f08a520 ---------A   01850  PRINT "YOU DESTROYED MY ARMY!"
    0x5c0f9f08a740 ---------A   01860  D=0
    0x5c0f9f08a7c0 ---------A   01870  GOTO 2160
    0x5c0f9f08a920 ---------A T 01880  PRINT "I WIPED OUT YOUR ATTACK!"
    0x5c0f9f08ac80 ---------A   01890  A=A-T
    0x5c0f9f08acf0 ---------A   01900  GOTO 2160
    0x5c0f9f08af60 ---------A T 01910  IF T>B THEN 1790 
    0x5c0f9f08b2e0 ---------A   01920  IF T<E/2 THEN 1940
    0x5c0f9f08b390 ---------A   01930  GOTO 1990
    0x5c0f9f08b520 ---------A T 01940  PRINT "I SUNK TWO OF YOUR BATTLESHIPS, AND MY AIR FORCE"
    0x5c0f9f08b690 ---------A   01950  PRINT "WIPED OUT YOUR UNGAURDED CAPITOL."
    0x5c0f9f08b9d0 ---------A   01960  A=A/4
    0x5c0f9f08bd00 ---------A   01970  B=B/2
    0x5c0f9f08bda0 ---------A   01980  GOTO 2160
    0x5c0f9f08bf30 ---------A T 01990  PRINT "YOUR NAVY SHOT DOWN THREE OF MY XIII PLANES,"
    0x5c0f9f08c0a0 ---------A   02000  PRINT "AND SUNK THREE BATTLESHIPS."
    0x5c0f9f08c4e0 ---------A   02010  F=2*F/3
    0x5c0f9f08c850 ---------A   02020  E=(E/2)
    0x5c0f9f08c8c0 ---------A   02030  GOTO 2160
    0x5c0f9f08cb40 ---------A T 02040  IF T>C THEN 1790 
    0x5c0f9f08cec0 ---------A   02050  IF T>F/2 THEN 2070 
    0x5c0f9f08cf70 ---------A   02060  GOTO 2130
    0x5c0f9f08d0f0 ---------A T 02070  PRINT "MY NAVY AND AIR FORCE IN A COMBINED ATTACK LEFT"
    0x5c0f9f08d260 ---------A   02080  PRINT "YOUR COUNTRY IN SHAMBLES."
    0x5c0f9f08d5a0 ---------A   02090  A=A/3
    0x5c0f9f08d8d0 ---------A   02100  B=B/3
    0x5c0f9f08dc00 ---------A   02110  C=C/3
    0x5c0f9f08dca0 ---------A   02120  GOTO 2160
    0x5c0f9f08de20 ---------A T 02130  PRINT "ONE OF YOUR PLANES CRASHED INTO MY HOUSE. I AM DEAD."
    0x5c0f9f08df90 ---------A   02140  PRINT "MY COUNTRY FELL APART."
    0x5c0f9f08e010 ---------A   02150  GOTO 2230
    0x5c0f9f08e0a0 ---------A T 02160  PRINT
    0x5c0f9f08e230 ---------A   02170  PRINT "FROM THE RESULTS OF BOTH OF YOUR ATTACKS,"
    0x5c0f9f08eb80 ---------A   02180  IF A+B+C>3/2*(D+E+F) THEN 2230
    0x5c0f9f08f4f0 ---------A   02190  IF A+B+C<2/3*(D+E+F) THEN 2250
    0x5c0f9f08f690 ---------A   02200  PRINT "THE TREATY OF PARIS CONCLUDED THAT WE TAKE OUR"
    0x5c0f9f08f810 ---------A   02210  PRINT "RESPECTIVE COUNTRIES AND LIVE IN PEACE."
    0x5c0f9f08f8a0 ---------A   02220  GOTO 2270
    0x5c0f9f08fa00 ---------A T 02230  PRINT "YOU WON, OH! SHUCKS!!!!"
    0x5c0f9f08fab0 ---------A   02240  GOTO 2270
    0x5c0f9f08fc40 ---------A T 02250  PRINT "YOU LOST-I CONQUERED YOUR COUNTRY.  IT SERVES YOU"
    0x5c0f9f08fdb0 ---------A   02260  PRINT "RIGHT FOR PLAYING THIS STUPID GAME!!!"
    0x5c0f9f08fe10 ---------A T 02270  END
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
int    B_int;                                     // Basic: B 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    T_int;                                     // Basic: T 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
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
    // 01000 PRINT TAB(33);"COMBAT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"COMBAT");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "I AM AT WAR WITH YOU."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I AM AT WAR WITH YOU.");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "WE HAVE 72000 SOLDIERS APIECE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WE HAVE 72000 SOLDIERS APIECE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01080:
    // 01080 PRINT "DISTRIBUTE YOUR FORCES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DISTRIBUTE YOUR FORCES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT ,"ME","  YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ME");strcat(buf,"  YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "ARMY",30000,
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ARMY");b2c_PrtInt(buf,30000);fputs(buf,fh); };
    // 01110 INPUT A
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
                (err += b2c_strtoi(&A_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01110
    // 01120 PRINT "NAVY",20000,
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NAVY");b2c_PrtInt(buf,20000);fputs(buf,fh); };
    // 01130 INPUT B
    // Start of Basic INPUT statement 01130
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&B_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01130
    // 01140 PRINT "A. F.",22000,
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A. F.");b2c_PrtInt(buf,22000);fputs(buf,fh); };
    // 01150 INPUT C
    // Start of Basic INPUT statement 01150
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01150
    // 01160 IF A+B+C>72000 THEN 1080
    if(A_int+B_int+C_int>72000)goto Lbl_01080;
    // 01170 D=30000
    D_int = 30000;
    // 01180 E=20000
    E_int = 20000;
    // 01190 F=22000
    F_int = 22000;
    // 01200 PRINT "YOU ATTACK FIRST. TYPE (1) FOR ARMY; (2) FOR NAVY;"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ATTACK FIRST. TYPE (1) FOR ARMY; (2) FOR NAVY;");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT "AND (3) FOR AIR FORCE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND (3) FOR AIR FORCE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 INPUT Y
    // Start of Basic INPUT statement 01220
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Y_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01220

  Lbl_01230:
    // 01230 PRINT "HOW MANY MEN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY MEN");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 INPUT X
    // Start of Basic INPUT statement 01240
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01240
    // 01250 IF X<0 THEN 1230
    if(X_int<0)goto Lbl_01230;
    // 01260 ON Y GOTO 1270,1380,1540
    switch((int)(Y_int)){
        case 1: goto Lbl_01270;
        case 2: goto Lbl_01380;
        case 3: goto Lbl_01540;
        default: break; 
    };

  Lbl_01270:
    // 01270 IF X>A THEN 1230
    if(X_int>A_int)goto Lbl_01230;
    // 01280 IF X<A/3 THEN 1310
    if(X_int<A_int/3)goto Lbl_01310;
    // 01290 IF X<2*A/3 THEN 1340
    if(X_int<2*A_int/3)goto Lbl_01340;
    // 01300 GOTO 1480
    goto Lbl_01480;

  Lbl_01310:
    // 01310 PRINT "YOU LOST";X;"MEN FROM YOUR ARMY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU LOST"); b2c_INT(buf,X_int);strcat(buf,"MEN FROM YOUR ARMY.");strcat(buf,"\n");fputs(buf,fh); };
    // 01320 A=INT(A-X)
    A_int = INT(A_int-X_int);
    // 01330 GOTO 1710
    goto Lbl_01710;

  Lbl_01340:
    // 01340 PRINT "YOU LOST";INT(X/3);"MEN, BUT I LOST ";INT(2*D/3)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU LOST");b2c_INT(buf,INT(X_int/3));strcat(buf,"MEN, BUT I LOST ");b2c_INT(buf,INT(2*D_int/3));strcat(buf,"\n");fputs(buf,fh); };
    // 01350 A=INT(A-X/3)
    A_int = INT(A_int-X_int/3);
    // 01360 D=0
    D_int = 0;
    // 01370 GOTO 1710 
    goto Lbl_01710;

  Lbl_01380:
    // 01380 IF X>B THEN 1230
    if(X_int>B_int)goto Lbl_01230;
    // 01390 IF X<E/3 THEN 1420
    if(X_int<E_int/3)goto Lbl_01420;
    // 01400 IF X<2*E/3 THEN 1450
    if(X_int<2*E_int/3)goto Lbl_01450;
    // 01410 GOTO 1480
    goto Lbl_01480;

  Lbl_01420:
    // 01420 PRINT "YOUR ATTACK WAS STOPPED!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR ATTACK WAS STOPPED!");strcat(buf,"\n");fputs(buf,fh); };
    // 01430 B=INT(B-X)
    B_int = INT(B_int-X_int);
    // 01440 GOTO 1710
    goto Lbl_01710;

  Lbl_01450:
    // 01450 PRINT "YOU DESTROYED";INT(2*E/3);"OF MY ARMY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU DESTROYED");b2c_INT(buf,INT(2*E_int/3));strcat(buf,"OF MY ARMY.");strcat(buf,"\n");fputs(buf,fh); };
    // 01460 E=INT(E/3)
    E_int = INT(E_int/3);
    // 01470 GOTO 1710
    goto Lbl_01710;

  Lbl_01480:
    // 01480 PRINT "YOU SUNK ONE OF MY PATROL BOATS, BUT I WIPED OUT TWO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU SUNK ONE OF MY PATROL BOATS, BUT I WIPED OUT TWO");strcat(buf,"\n");fputs(buf,fh); };
    // 01490 PRINT "OF YOUR AIR FORCE BASES AND 3 ARMY BASES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF YOUR AIR FORCE BASES AND 3 ARMY BASES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01500 A=INT(A/3)
    A_int = INT(A_int/3);
    // 01510 C=INT(C/3)
    C_int = INT(C_int/3);
    // 01520 E=INT(2*E/3)
    E_int = INT(2*E_int/3);
    // 01530 GOTO 1710
    goto Lbl_01710;

  Lbl_01540:
    // 01540 IF X>C THEN 1230
    if(X_int>C_int)goto Lbl_01230;
    // 01550 IF X<C/3 THEN 1580
    if(X_int<C_int/3)goto Lbl_01580;
    // 01560 IF X<2*C/3 THEN 1610
    if(X_int<2*C_int/3)goto Lbl_01610;
    // 01570 GOTO 1660
    goto Lbl_01660;

  Lbl_01580:
    // 01580 PRINT "YOUR ATTACK WAS WIPED OUT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR ATTACK WAS WIPED OUT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01590 C=INT(C-X)
    C_int = INT(C_int-X_int);
    // 01600 GOTO 1710
    goto Lbl_01710;

  Lbl_01610:
    // 01610 PRINT "WE HAD A DOGFIGHT. YOU WON - AND FINISHED YOUR MISSION."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WE HAD A DOGFIGHT. YOU WON - AND FINISHED YOUR MISSION.");strcat(buf,"\n");fputs(buf,fh); };
    // 01620 D=INT(2*D/3)
    D_int = INT(2*D_int/3);
    // 01630 E=INT(E/3)
    E_int = INT(E_int/3);
    // 01640 F=INT(F/3)
    F_int = INT(F_int/3);
    // 01650 GOTO 1710
    goto Lbl_01710;

  Lbl_01660:
    // 01660 PRINT "YOU WIPED OUT ONE OF MY ARMY PATROLS, BUT I DESTROYED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU WIPED OUT ONE OF MY ARMY PATROLS, BUT I DESTROYED");strcat(buf,"\n");fputs(buf,fh); };
    // 01670 PRINT "TWO NAVY BASES AND BOMBED THREE ARMY BASES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TWO NAVY BASES AND BOMBED THREE ARMY BASES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01680 A=INT(A/4)
    A_int = INT(A_int/4);
    // 01690 B=INT(B/3)
    B_int = INT(B_int/3);
    // 01700 D=INT(2*D/3)
    D_int = INT(2*D_int/3);

  Lbl_01710:
    // 01710 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01720 PRINT,"YOU","ME"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU");strcat(buf,"ME");strcat(buf,"\n");fputs(buf,fh); };
    // 01730 PRINT "ARMY",A,D
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ARMY"); b2c_INT(buf,A_int); b2c_INT(buf,D_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01740 PRINT "NAVY",B,E
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NAVY"); b2c_INT(buf,B_int); b2c_INT(buf,E_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01750 PRINT "A. F.",C,F
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A. F."); b2c_INT(buf,C_int); b2c_INT(buf,F_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01760 PRINT "WHAT IS YOUR NEXT MOVE?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT IS YOUR NEXT MOVE?");strcat(buf,"\n");fputs(buf,fh); };
    // 01770 PRINT "ARMY=1  NAVY=2  AIR FORCE=3"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ARMY=1  NAVY=2  AIR FORCE=3");strcat(buf,"\n");fputs(buf,fh); };
    // 01780 INPUT G
    // Start of Basic INPUT statement 01780
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&G_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01780

  Lbl_01790:
    // 01790 PRINT "HOW MANY MEN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY MEN");strcat(buf,"\n");fputs(buf,fh); };
    // 01800 INPUT T
    // Start of Basic INPUT statement 01800
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&T_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01800
    // 01810 IF T<0 THEN 1790
    if(T_int<0)goto Lbl_01790;
    // 01820 ON G GOTO 1830,1910,2040
    switch((int)(G_int)){
        case 1: goto Lbl_01830;
        case 2: goto Lbl_01910;
        case 3: goto Lbl_02040;
        default: break; 
    };

  Lbl_01830:
    // 01830 IF T>A THEN 1790
    if(T_int>A_int)goto Lbl_01790;
    // 01840 IF T<D/2 THEN 1880
    if(T_int<D_int/2)goto Lbl_01880;
    // 01850 PRINT "YOU DESTROYED MY ARMY!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU DESTROYED MY ARMY!");strcat(buf,"\n");fputs(buf,fh); };
    // 01860 D=0
    D_int = 0;
    // 01870 GOTO 2160
    goto Lbl_02160;

  Lbl_01880:
    // 01880 PRINT "I WIPED OUT YOUR ATTACK!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I WIPED OUT YOUR ATTACK!");strcat(buf,"\n");fputs(buf,fh); };
    // 01890 A=A-T
    A_int = A_int-T_int;
    // 01900 GOTO 2160
    goto Lbl_02160;

  Lbl_01910:
    // 01910 IF T>B THEN 1790 
    if(T_int>B_int)goto Lbl_01790;
    // 01920 IF T<E/2 THEN 1940
    if(T_int<E_int/2)goto Lbl_01940;
    // 01930 GOTO 1990
    goto Lbl_01990;

  Lbl_01940:
    // 01940 PRINT "I SUNK TWO OF YOUR BATTLESHIPS, AND MY AIR FORCE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I SUNK TWO OF YOUR BATTLESHIPS, AND MY AIR FORCE");strcat(buf,"\n");fputs(buf,fh); };
    // 01950 PRINT "WIPED OUT YOUR UNGAURDED CAPITOL."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WIPED OUT YOUR UNGAURDED CAPITOL.");strcat(buf,"\n");fputs(buf,fh); };
    // 01960 A=A/4
    A_int = A_int/4;
    // 01970 B=B/2
    B_int = B_int/2;
    // 01980 GOTO 2160
    goto Lbl_02160;

  Lbl_01990:
    // 01990 PRINT "YOUR NAVY SHOT DOWN THREE OF MY XIII PLANES,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR NAVY SHOT DOWN THREE OF MY XIII PLANES,");strcat(buf,"\n");fputs(buf,fh); };
    // 02000 PRINT "AND SUNK THREE BATTLESHIPS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND SUNK THREE BATTLESHIPS.");strcat(buf,"\n");fputs(buf,fh); };
    // 02010 F=2*F/3
    F_int = 2*F_int/3;
    // 02020 E=(E/2)
    E_int = (E_int/2);
    // 02030 GOTO 2160
    goto Lbl_02160;

  Lbl_02040:
    // 02040 IF T>C THEN 1790 
    if(T_int>C_int)goto Lbl_01790;
    // 02050 IF T>F/2 THEN 2070 
    if(T_int>F_int/2)goto Lbl_02070;
    // 02060 GOTO 2130
    goto Lbl_02130;

  Lbl_02070:
    // 02070 PRINT "MY NAVY AND AIR FORCE IN A COMBINED ATTACK LEFT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MY NAVY AND AIR FORCE IN A COMBINED ATTACK LEFT");strcat(buf,"\n");fputs(buf,fh); };
    // 02080 PRINT "YOUR COUNTRY IN SHAMBLES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR COUNTRY IN SHAMBLES.");strcat(buf,"\n");fputs(buf,fh); };
    // 02090 A=A/3
    A_int = A_int/3;
    // 02100 B=B/3
    B_int = B_int/3;
    // 02110 C=C/3
    C_int = C_int/3;
    // 02120 GOTO 2160
    goto Lbl_02160;

  Lbl_02130:
    // 02130 PRINT "ONE OF YOUR PLANES CRASHED INTO MY HOUSE. I AM DEAD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ONE OF YOUR PLANES CRASHED INTO MY HOUSE. I AM DEAD.");strcat(buf,"\n");fputs(buf,fh); };
    // 02140 PRINT "MY COUNTRY FELL APART."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MY COUNTRY FELL APART.");strcat(buf,"\n");fputs(buf,fh); };
    // 02150 GOTO 2230
    goto Lbl_02230;

  Lbl_02160:
    // 02160 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02170 PRINT "FROM THE RESULTS OF BOTH OF YOUR ATTACKS,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FROM THE RESULTS OF BOTH OF YOUR ATTACKS,");strcat(buf,"\n");fputs(buf,fh); };
    // 02180 IF A+B+C>3/2*(D+E+F) THEN 2230
    if(A_int+B_int+C_int>3/2*(D_int+E_int+F_int))goto Lbl_02230;
    // 02190 IF A+B+C<2/3*(D+E+F) THEN 2250
    if(A_int+B_int+C_int<2/3*(D_int+E_int+F_int))goto Lbl_02250;
    // 02200 PRINT "THE TREATY OF PARIS CONCLUDED THAT WE TAKE OUR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE TREATY OF PARIS CONCLUDED THAT WE TAKE OUR");strcat(buf,"\n");fputs(buf,fh); };
    // 02210 PRINT "RESPECTIVE COUNTRIES AND LIVE IN PEACE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RESPECTIVE COUNTRIES AND LIVE IN PEACE.");strcat(buf,"\n");fputs(buf,fh); };
    // 02220 GOTO 2270
    goto Lbl_02270;

  Lbl_02230:
    // 02230 PRINT "YOU WON, OH! SHUCKS!!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU WON, OH! SHUCKS!!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 02240 GOTO 2270
    goto Lbl_02270;

  Lbl_02250:
    // 02250 PRINT "YOU LOST-I CONQUERED YOUR COUNTRY.  IT SERVES YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU LOST-I CONQUERED YOUR COUNTRY.  IT SERVES YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 02260 PRINT "RIGHT FOR PLAYING THIS STUPID GAME!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"RIGHT FOR PLAYING THIS STUPID GAME!!!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02270:
    // 02270 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
