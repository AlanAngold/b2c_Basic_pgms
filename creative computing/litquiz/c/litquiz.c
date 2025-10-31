/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/litquiz.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x63db7eeecdb0 ---------A   00010  '*************************************
    0x63db7eeebb80 ---------A   00020  '*         PROGRAM WRITTEN BY        *
    0x63db7eeecf30 ---------A   00030  '*           PAMELA McGINLEY         *
    0x63db7eeece70 ---------A   00040  '*                                   *
    0x63db7eeecff0 ---------A   00050  '*         MODIFICATIONS BY          *
    0x63db7eeeb910 ---------A   00060  '*                                   *
    0x63db7eedb2f0 ---------A   00070  '*           ROBERT L. ROACH         *
    0x63db7eeec620 ---------A   00080  '*************************************
    0x63db7eeea9e0 ---------A   00090  '
    0x63db7eeed0b0 ---------A   00100  '
    0x63db7eeea7f0 ---------A   00105  CLS
    0x63db7eeea6d0 ---------A   00110  PRINT TAB(25);"LITERATURE QUIZ"
    0x63db7eeea670 ---------A   00120  PRINT TAB(15);"CREATIVE COMPUTING MORRISTOWN, NEW JERSEY"
    0x63db7eeec6a0 ---------A   00130  PRINT:PRINT:PRINT
    0x63db7eeed100 ---------A   00140  R=0
    0x63db7eeed1d0 ---------A   00150  PRINT"TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x63db7eeeb730 ---------A   00160  PRINT:PRINT"THIS IS A MULTIPLE-CHOICE QUIZ."
    0x63db7eef28a0 ---------A   00170  PRINT"TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x63db7eef2b20 ---------A   00180  PRINT:PRINT"GOOD LUCK!":PRINT:PRINT
    0x63db7eef2cc0 ---------A   00190  PRINT"IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT."
    0x63db7eef2e20 ---------A   00200  PRINT"1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x63db7eef2ed0 ---------A   00210  GOSUB 1000:'INPUT A:IF A=3 THEN 230
    0x63db7eef30e0 ---------A   00220  PRINT"SORRY...FIGARO WAS HIS NAME.":GOTO 250
    0x63db7eef3240 ----------   00230  PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x63db7eef32c0 ----------   00240  GOSUB 600
    0x63db7eef33c0 ---------A T 00250  PRINT:PRINT
    0x63db7eef3570 ---------A   00260  PRINT"FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS ?"
    0x63db7eef3720 ---------A   00270  PRINT"1)MR. NIXON'S 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x63db7eef37f0 ---------A   00275  GOSUB 1000:'INPUT A
    0x63db7eef3b50 ---------A   00280  IF A=2 THEN 300
    0x63db7eef3d30 ---------A   00290  PRINT"TOO BAD....IT WAS ELMER FUDD'S GARDEN.":GOTO 320
    0x63db7eef3e80 ---------A T 00300  PRINT"PRETTY GOOD!"
    0x63db7eef3f00 ---------A   00310  GOSUB 600
    0x63db7eef4210 ---------A T 00320  PRINT:PRINT
    0x63db7eef43b0 ---------A   00330  PRINT "IN THE WIZARD OF OZ DORTHY'S DOG WAS NAMED ?"
    0x63db7eef4550 ---------A   00340  PRINT"1)CICERO, 2)TRIXIE, 3)KING, 4)TOTO";
    0x63db7eef4630 ---------A   00350  GOSUB 1000:'INPUT A:IF A=4 THEN 370
    0x63db7eef4870 ---------A   00360  PRINT"BACK TO THE BOOKS,....TOTO WAS HIS NAME.":GOTO 390
    0x63db7eef49d0 ----------   00370  PRINT"YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x63db7eef4a50 ----------   00380  GOSUB 600
    0x63db7eef4b50 ---------A T 00390  PRINT:PRINT
    0x63db7eef4d00 ---------A   00400  PRINT"WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE ?"
    0x63db7eef4ec0 ---------A   00410  PRINT"1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x63db7eef4fa0 ---------A   00420  GOSUB 1000:'INPUT A:IF A=3 THEN 450
    0x63db7eef5140 ---------A   00430  PRINT"OH, COME ON NOW...IT WAS SNOW WHITE."
    0x63db7eef51c0 ---------A   00440  GOTO 470
    0x63db7eef5310 ----------   00450  PRINT"GOOD MEMORY!"
    0x63db7eef5390 ----------   00460  GOSUB 600
    0x63db7eef5460 ---------A T 00470  PRINT:PRINT
    0x63db7eef56c0 ---------A   00480  IF R=4 THEN 530
    0x63db7eef5950 ---------A   00490  IF R<2 THEN 570
    0x63db7eef5ae0 ---------A   00500  PRINT"NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x63db7eef5c50 ---------A   00510  PRINT"READING THE NURSERY GREATS."
    0x63db7eef5d00 ---------A   00520  GOTO 590
    0x63db7eef5ea0 ---------A T 00530  PRINT"WOW! THAT'S SUPER! YOU REALLY KNOW YOUR NURSERY"
    0x63db7eef6030 ---------A   00540  PRINT"YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x63db7eef61a0 ---------A   00550  PRINT"LITERATURE (HA, HA, HA)"
    0x63db7eef6250 ---------A   00560  GOTO 590
    0x63db7eef63e0 ---------A T 00570  PRINT"HUH. THAT'S DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x63db7eef6550 ---------A   00580  PRINT"NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x63db7eef65b0 ---------A T 00590  END
    0x63db7eef6920 ---------B G 00600  R=R+1:RETURN
    0x63db7eef6b20 ----------   01000  PRINT:PRINT"HIT ANY KEY TO CONTINUE"
    0x63db7eef7370 ---------- T 01010  A$="":A$=INKEY$:IF A$="" THEN 1010
    0x63db7eef7c60 ----------   01020  FOR X=1 TO 4:PRINT CHR$(27);CHR$(30);:NEXT X:RETURN
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00250      00220T
     00300      00280T
     00320      00290T
     00390      00360T
     00470      00440T
     00530      00480T
     00570      00490T
     00590      00520T, 00560T
     00600      00240G, 00310G, 00380G, 00460G
     01010      01010T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x63db7eeecdb0 (00010)   0x63db7eeecdb0 (00010)   0x63db7eef7c60 (01020)   0x63db7eef65b0 (00590)   
   B) 0x63db7eef6920 (00600)   0x63db7eef6920 (00600)   0x63db7eef6920 (00600)   0x63db7eef6920 (00600)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/litquiz.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x63db7eeecdb0 ---------A   00010  '*************************************
    0x63db7eeebb80 ---------A   00020  '*         PROGRAM WRITTEN BY        *
    0x63db7eeecf30 ---------A   00030  '*           PAMELA McGINLEY         *
    0x63db7eeece70 ---------A   00040  '*                                   *
    0x63db7eeecff0 ---------A   00050  '*         MODIFICATIONS BY          *
    0x63db7eeeb910 ---------A   00060  '*                                   *
    0x63db7eedb2f0 ---------A   00070  '*           ROBERT L. ROACH         *
    0x63db7eeec620 ---------A   00080  '*************************************
    0x63db7eeea9e0 ---------A   00090  '
    0x63db7eeed0b0 ---------A   00100  '
    0x63db7eeea7f0 ---------A   00105  CLS
    0x63db7eeea6d0 ---------A   00110  PRINT TAB(25);"LITERATURE QUIZ"
    0x63db7eeea670 ---------A   00120  PRINT TAB(15);"CREATIVE COMPUTING MORRISTOWN, NEW JERSEY"
    0x63db7eeeb480 ----------   00130  PRINT
    0x63db7eeeb4e0 ----------        a PRINT
    0x63db7eeec6a0 ---------A        b PRINT
    0x63db7eeed100 ---------A   00140  R=0
    0x63db7eeed1d0 ---------A   00150  PRINT"TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x63db7eeed230 ----------   00160  PRINT
    0x63db7eeeb730 ---------A        a PRINT"THIS IS A MULTIPLE-CHOICE QUIZ."
    0x63db7eef28a0 ---------A   00170  PRINT"TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x63db7eef2900 ----------   00180  PRINT
    0x63db7eef2a20 ----------        a PRINT"GOOD LUCK!"
    0x63db7eef2a80 ----------        b PRINT
    0x63db7eef2b20 ---------A        c PRINT
    0x63db7eef2cc0 ---------A   00190  PRINT"IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT."
    0x63db7eef2e20 ---------A   00200  PRINT"1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x63db7eef2e80 ----------   00210  GOSUB 1000
    0x63db7eef2ed0 ---------A        a 'INPUT A
    0x63db7eef3050 ----------   00220  PRINT"SORRY...FIGARO WAS HIS NAME."
    0x63db7eef30e0 ---------A        a GOTO 250
    0x63db7eef3240 ----------   00230  PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x63db7eef32c0 ----------   00240  GOSUB 600
    0x63db7eef3310 ---------- T 00250  PRINT
    0x63db7eef33c0 ---------A T      a PRINT
    0x63db7eef3570 ---------A   00260  PRINT"FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS ?"
    0x63db7eef3720 ---------A   00270  PRINT"1)MR. NIXON'S 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x63db7eef3780 ----------   00275  GOSUB 1000
    0x63db7eef37f0 ---------A        a 'INPUT A
    0x63db7eef3b50 ---------A   00280  IF A=2 THEN 300
    0x63db7eef3cb0 ----------   00290  PRINT"TOO BAD....IT WAS ELMER FUDD'S GARDEN."
    0x63db7eef3d30 ---------A        a GOTO 320
    0x63db7eef3e80 ---------A T 00300  PRINT"PRETTY GOOD!"
    0x63db7eef3f00 ---------A   00310  GOSUB 600
    0x63db7eef4160 ---------- T 00320  PRINT
    0x63db7eef4210 ---------A T      a PRINT
    0x63db7eef43b0 ---------A   00330  PRINT "IN THE WIZARD OF OZ DORTHY'S DOG WAS NAMED ?"
    0x63db7eef4550 ---------A   00340  PRINT"1)CICERO, 2)TRIXIE, 3)KING, 4)TOTO";
    0x63db7eef45b0 ----------   00350  GOSUB 1000
    0x63db7eef4630 ---------A        a 'INPUT A
    0x63db7eef47d0 ----------   00360  PRINT"BACK TO THE BOOKS,....TOTO WAS HIS NAME."
    0x63db7eef4870 ---------A        a GOTO 390
    0x63db7eef49d0 ----------   00370  PRINT"YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x63db7eef4a50 ----------   00380  GOSUB 600
    0x63db7eef4aa0 ---------- T 00390  PRINT
    0x63db7eef4b50 ---------A T      a PRINT
    0x63db7eef4d00 ---------A   00400  PRINT"WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE ?"
    0x63db7eef4ec0 ---------A   00410  PRINT"1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x63db7eef4f20 ----------   00420  GOSUB 1000
    0x63db7eef4fa0 ---------A        a 'INPUT A
    0x63db7eef5140 ---------A   00430  PRINT"OH, COME ON NOW...IT WAS SNOW WHITE."
    0x63db7eef51c0 ---------A   00440  GOTO 470
    0x63db7eef5310 ----------   00450  PRINT"GOOD MEMORY!"
    0x63db7eef5390 ----------   00460  GOSUB 600
    0x63db7eef53e0 ---------- T 00470  PRINT
    0x63db7eef5460 ---------A T      a PRINT
    0x63db7eef56c0 ---------A   00480  IF R=4 THEN 530
    0x63db7eef5950 ---------A   00490  IF R<2 THEN 570
    0x63db7eef5ae0 ---------A   00500  PRINT"NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x63db7eef5c50 ---------A   00510  PRINT"READING THE NURSERY GREATS."
    0x63db7eef5d00 ---------A   00520  GOTO 590
    0x63db7eef5ea0 ---------A T 00530  PRINT"WOW! THAT'S SUPER! YOU REALLY KNOW YOUR NURSERY"
    0x63db7eef6030 ---------A   00540  PRINT"YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x63db7eef61a0 ---------A   00550  PRINT"LITERATURE (HA, HA, HA)"
    0x63db7eef6250 ---------A   00560  GOTO 590
    0x63db7eef63e0 ---------A T 00570  PRINT"HUH. THAT'S DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x63db7eef6550 ---------A   00580  PRINT"NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x63db7eef65b0 ---------A T 00590  END
    0x63db7eef68d0 ---------- G 00600  R=R+1
    0x63db7eef6920 ---------B G      a RETURN
    0x63db7eef69a0 ----------   01000  PRINT
    0x63db7eef6b20 ----------        a PRINT"HIT ANY KEY TO CONTINUE"
    0x63db7eef6e00 ---------- T 01010  A$=""
    0x63db7eef70d0 ---------- T      a A$=INKEY$
    0x63db7eef7370 ---------- T      b IF A$="" THEN 1010
    0x63db7eef76f0 ----------   01020  FOR X=1 TO 4
    0x63db7eef7ad0 ----------        a PRINT CHR$(27);CHR$(30);
    0x63db7eef7c10 ----------        b NEXT X
    0x63db7eef7c60 ----------        c RETURN
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/litquiz.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x63db7eeecdb0 ---------A   01000  '*************************************
    0x63db7eeebb80 ---------A T 01010  '*         PROGRAM WRITTEN BY        *
    0x63db7eeecf30 ---------A   01020  '*           PAMELA McGINLEY         *
    0x63db7eeece70 ---------A   01030  '*                                   *
    0x63db7eeecff0 ---------A   01040  '*         MODIFICATIONS BY          *
    0x63db7eeeb910 ---------A   01050  '*                                   *
    0x63db7eedb2f0 ---------A   01060  '*           ROBERT L. ROACH         *
    0x63db7eeec620 ---------A   01070  '*************************************
    0x63db7eeea9e0 ---------A   01080  '
    0x63db7eeed0b0 ---------A   01090  '
    0x63db7eeea7f0 ---------A   01100  CLS
    0x63db7eeea6d0 ---------A   01110  PRINT TAB(25);"LITERATURE QUIZ"
    0x63db7eeea670 ---------A   01120  PRINT TAB(15);"CREATIVE COMPUTING MORRISTOWN, NEW JERSEY"
    0x63db7eeeb480 ----------   01130  PRINT
    0x63db7eeeb4e0 ----------   01140  PRINT
    0x63db7eeec6a0 ---------A   01150  PRINT
    0x63db7eeed100 ---------A   01160  R=0
    0x63db7eeed1d0 ---------A   01170  PRINT"TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x63db7eeed230 ----------   01180  PRINT
    0x63db7eeeb730 ---------A   01190  PRINT"THIS IS A MULTIPLE-CHOICE QUIZ."
    0x63db7eef28a0 ---------A   01200  PRINT"TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x63db7eef2900 ----------   01210  PRINT
    0x63db7eef2a20 ----------   01220  PRINT"GOOD LUCK!"
    0x63db7eef2a80 ----------   01230  PRINT
    0x63db7eef2b20 ---------A   01240  PRINT
    0x63db7eef2cc0 ---------A   01250  PRINT"IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT."
    0x63db7eef2e20 ---------A   01260  PRINT"1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x63db7eef2e80 ----------   01270  GOSUB 1810
    0x63db7eef2ed0 ---------A   01280  'INPUT A
    0x63db7eef3050 ----------   01290  PRINT"SORRY...FIGARO WAS HIS NAME."
    0x63db7eef30e0 ---------A   01300  GOTO 1340
    0x63db7eef3240 ----------   01310  PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x63db7eef32c0 ----------   01320  GOSUB 1790
    0x63db7eef3310 ----------   01330  PRINT
    0x63db7eef33c0 ---------A   01340  PRINT
    0x63db7eef3570 ---------A   01350  PRINT"FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS ?"
    0x63db7eef3720 ---------A   01360  PRINT"1)MR. NIXON'S 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x63db7eef3780 ----------   01370  GOSUB 1810
    0x63db7eef37f0 ---------A   01380  'INPUT A
    0x63db7eef3b50 ---------A   01390  IF A=2 THEN 1420
    0x63db7eef3cb0 ----------   01400  PRINT"TOO BAD....IT WAS ELMER FUDD'S GARDEN."
    0x63db7eef3d30 ---------A   01410  GOTO 1450
    0x63db7eef3e80 ---------A   01420  PRINT"PRETTY GOOD!"
    0x63db7eef3f00 ---------A   01430  GOSUB 1790
    0x63db7eef4160 ----------   01440  PRINT
    0x63db7eef4210 ---------A   01450  PRINT
    0x63db7eef43b0 ---------A   01460  PRINT "IN THE WIZARD OF OZ DORTHY'S DOG WAS NAMED ?"
    0x63db7eef4550 ---------A   01470  PRINT"1)CICERO, 2)TRIXIE, 3)KING, 4)TOTO";
    0x63db7eef45b0 ----------   01480  GOSUB 1810
    0x63db7eef4630 ---------A   01490  'INPUT A
    0x63db7eef47d0 ----------   01500  PRINT"BACK TO THE BOOKS,....TOTO WAS HIS NAME."
    0x63db7eef4870 ---------A   01510  GOTO 1550
    0x63db7eef49d0 ----------   01520  PRINT"YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x63db7eef4a50 ----------   01530  GOSUB 1790
    0x63db7eef4aa0 ----------   01540  PRINT
    0x63db7eef4b50 ---------A   01550  PRINT
    0x63db7eef4d00 ---------A   01560  PRINT"WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE ?"
    0x63db7eef4ec0 ---------A   01570  PRINT"1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x63db7eef4f20 ----------   01580  GOSUB 1810
    0x63db7eef4fa0 ---------A   01590  'INPUT A
    0x63db7eef5140 ---------A   01600  PRINT"OH, COME ON NOW...IT WAS SNOW WHITE."
    0x63db7eef51c0 ---------A   01610  GOTO 1650
    0x63db7eef5310 ----------   01620  PRINT"GOOD MEMORY!"
    0x63db7eef5390 ----------   01630  GOSUB 1790
    0x63db7eef53e0 ----------   01640  PRINT
    0x63db7eef5460 ---------A   01650  PRINT
    0x63db7eef56c0 ---------A   01660  IF R=4 THEN 1710
    0x63db7eef5950 ---------A   01670  IF R<2 THEN 1750
    0x63db7eef5ae0 ---------A   01680  PRINT"NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x63db7eef5c50 ---------A   01690  PRINT"READING THE NURSERY GREATS."
    0x63db7eef5d00 ---------A   01700  GOTO 1770
    0x63db7eef5ea0 ---------A   01710  PRINT"WOW! THAT'S SUPER! YOU REALLY KNOW YOUR NURSERY"
    0x63db7eef6030 ---------A   01720  PRINT"YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x63db7eef61a0 ---------A   01730  PRINT"LITERATURE (HA, HA, HA)"
    0x63db7eef6250 ---------A   01740  GOTO 1770
    0x63db7eef63e0 ---------A   01750  PRINT"HUH. THAT'S DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x63db7eef6550 ---------A   01760  PRINT"NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x63db7eef65b0 ---------A   01770  END
    0x63db7eef68d0 ----------   01780  R=R+1
    0x63db7eef6920 ---------B   01790  RETURN
    0x63db7eef69a0 ----------   01800  PRINT
    0x63db7eef6b20 ----------   01810  PRINT"HIT ANY KEY TO CONTINUE"
    0x63db7eef6e00 ----------   01820  A$=""
    0x63db7eef70d0 ----------   01830  A$=INKEY$
    0x63db7eef7370 ----------   01840  IF A$="" THEN 1840
    0x63db7eef76f0 ----------   01850  FOR X=1 TO 4
    0x63db7eef7ad0 ----------   01860  PRINT CHR$(27);CHR$(30);
    0x63db7eef7c10 ----------   01870  NEXT X
    0x63db7eef7c60 ----------   01880  RETURN
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01800 - 10000    8210 

 */



/*
 *  Symbol Table Listing for 'basic/litquiz.bas'
 *
    A                        Integer     
    A$                       String      
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
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    INKEY$                   String      
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
    R                        Integer     
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
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/litquiz.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x63db7eeecdb0 ---------A   01000  '*************************************
    0x63db7eeebb80 ---------A   01010  '*         PROGRAM WRITTEN BY        *
    0x63db7eeecf30 ---------A   01020  '*           PAMELA McGINLEY         *
    0x63db7eeece70 ---------A   01030  '*                                   *
    0x63db7eeecff0 ---------A   01040  '*         MODIFICATIONS BY          *
    0x63db7eeeb910 ---------A   01050  '*                                   *
    0x63db7eedb2f0 ---------A   01060  '*           ROBERT L. ROACH         *
    0x63db7eeec620 ---------A   01070  '*************************************
    0x63db7eeea9e0 ---------A   01080  '
    0x63db7eeed0b0 ---------A   01090  '
    0x63db7eeea7f0 ---------A   01100  CLS
    0x63db7eeea6d0 ---------A   01110  PRINT TAB(25);"LITERATURE QUIZ"
    0x63db7eeea670 ---------A   01120  PRINT TAB(15);"CREATIVE COMPUTING MORRISTOWN, NEW JERSEY"
    0x63db7eeeb480 ---------A   01130  PRINT
    0x63db7eeeb4e0 ---------A   01140  PRINT
    0x63db7eeec6a0 ---------A   01150  PRINT
    0x63db7eeed100 ---------A   01160  R=0
    0x63db7eeed1d0 ---------A   01170  PRINT"TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x63db7eeed230 ---------A   01180  PRINT
    0x63db7eeeb730 ---------A   01190  PRINT"THIS IS A MULTIPLE-CHOICE QUIZ."
    0x63db7eef28a0 ---------A   01200  PRINT"TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x63db7eef2900 ---------A   01210  PRINT
    0x63db7eef2a20 ---------A   01220  PRINT"GOOD LUCK!"
    0x63db7eef2a80 ---------A   01230  PRINT
    0x63db7eef2b20 ---------A   01240  PRINT
    0x63db7eef2cc0 ---------A   01250  PRINT"IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT."
    0x63db7eef2e20 ---------A   01260  PRINT"1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x63db7eef2e80 ---------A   01270  GOSUB 1710
    0x63db7eef2ed0 ---------A   01280  'INPUT A
    0x63db7eef3050 ---------A   01290  PRINT"SORRY...FIGARO WAS HIS NAME."
    0x63db7eef30e0 ---------A   01300  GOTO 1310
    0x63db7eef33c0 ---------A T 01310  PRINT
    0x63db7eef3570 ---------A   01320  PRINT"FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS ?"
    0x63db7eef3720 ---------A   01330  PRINT"1)MR. NIXON'S 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x63db7eef3780 ---------A   01340  GOSUB 1710
    0x63db7eef37f0 ---------A   01350  'INPUT A
    0x63db7eef3b50 ---------A   01360  IF A=2 THEN 1390
    0x63db7eef3cb0 ---------A   01370  PRINT"TOO BAD....IT WAS ELMER FUDD'S GARDEN."
    0x63db7eef3d30 ---------A   01380  GOTO 1420
    0x63db7eef3e80 ---------A T 01390  PRINT"PRETTY GOOD!"
    0x63db7eef3f00 ---------A   01400  GOSUB 1690
    0x63db7eef4160 ---------A   01410  PRINT
    0x63db7eef4210 ---------A T 01420  PRINT
    0x63db7eef43b0 ---------A   01430  PRINT "IN THE WIZARD OF OZ DORTHY'S DOG WAS NAMED ?"
    0x63db7eef4550 ---------A   01440  PRINT"1)CICERO, 2)TRIXIE, 3)KING, 4)TOTO";
    0x63db7eef45b0 ---------A   01450  GOSUB 1710
    0x63db7eef4630 ---------A   01460  'INPUT A
    0x63db7eef47d0 ---------A   01470  PRINT"BACK TO THE BOOKS,....TOTO WAS HIS NAME."
    0x63db7eef4870 ---------A   01480  GOTO 1490
    0x63db7eef4b50 ---------A T 01490  PRINT
    0x63db7eef4d00 ---------A   01500  PRINT"WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE ?"
    0x63db7eef4ec0 ---------A   01510  PRINT"1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x63db7eef4f20 ---------A   01520  GOSUB 1710
    0x63db7eef4fa0 ---------A   01530  'INPUT A
    0x63db7eef5140 ---------A   01540  PRINT"OH, COME ON NOW...IT WAS SNOW WHITE."
    0x63db7eef51c0 ---------A   01550  GOTO 1560
    0x63db7eef5460 ---------A T 01560  PRINT
    0x63db7eef56c0 ---------A   01570  IF R=4 THEN 1620
    0x63db7eef5950 ---------A   01580  IF R<2 THEN 1660
    0x63db7eef5ae0 ---------A   01590  PRINT"NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x63db7eef5c50 ---------A   01600  PRINT"READING THE NURSERY GREATS."
    0x63db7eef5d00 ---------A   01610  GOTO 1680
    0x63db7eef5ea0 ---------A T 01620  PRINT"WOW! THAT'S SUPER! YOU REALLY KNOW YOUR NURSERY"
    0x63db7eef6030 ---------A   01630  PRINT"YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x63db7eef61a0 ---------A   01640  PRINT"LITERATURE (HA, HA, HA)"
    0x63db7eef6250 ---------A   01650  GOTO 1680
    0x63db7eef63e0 ---------A T 01660  PRINT"HUH. THAT'S DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x63db7eef6550 ---------A   01670  PRINT"NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x63db7eef65b0 ---------A T 01680  END
    0x63db7eefdb40 ---------B G 01690  GOTO 01700
    0x63db7eefefb0 ---------B T 01700  RETURN
    0x63db7eef6b20 ---------C G 01710  PRINT"HIT ANY KEY TO CONTINUE"
    0x63db7eef6e00 ---------C   01720  A$=""
    0x63db7eef70d0 ---------C   01730  A$=INKEY$
    0x63db7eef7370 ---------C T 01740  IF A$="" THEN 1740
    0x63db7eef76f0 ---------C   01750  FOR X=1 TO 4
    0x63db7eef7ad0 ---------C   01760  PRINT CHR$(27);CHR$(30);
    0x63db7eef7c10 ---------C   01770  NEXT X
    0x63db7eefdaf0 ---------C   01780  GOTO 01790
    0x63db7eeff030 ---------C T 01790  RETURN
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
char*  A_str;                                     // Basic: A$ 
char*  INKEY_str;                                 // Basic: INKEY$ 
int    R_int;                                     // Basic: R 
int    X_int;                                     // Basic: X 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01690();
void Routine_01710();

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

void Routine_01690(){
    // 01690 GOTO 01700
    goto Lbl_01700;

  Lbl_01700:
    // 01700 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_01710(){
    // 01710 PRINT"HIT ANY KEY TO CONTINUE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HIT ANY KEY TO CONTINUE");strcat(buf,"\n");fputs(buf,fh); };
    // 01720 A$=""
    GLBpStr="";
    A_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01730 A$=INKEY$
    GLBpStr=INKEY_str;
    A_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01740:
    // 01740 IF A$="" THEN 1740
    if(strcmp(A_str,"")==0)goto Lbl_01740;
    // 01750 FOR X=1 TO 4
    for(X_int=1;X_int<=4;X_int++){
        // 01760 PRINT CHR$(27);CHR$(30);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(27));strcpy(buf,CHR$(30));fputs(buf,fh); };
        // 01770 NEXT X
        int dummy_1770=0; // Ignore this line.
    }; // End-For(X_int)
    // 01780 GOTO 01790
    goto Lbl_01790;

  Lbl_01790:
    // 01790 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 '*************************************
    // 01010 '*         PROGRAM WRITTEN BY        *
    // 01020 '*           PAMELA McGINLEY         *
    // 01030 '*                                   *
    // 01040 '*         MODIFICATIONS BY          *
    // 01050 '*                                   *
    // 01060 '*           ROBERT L. ROACH         *
    // 01070 '*************************************
    // 01080 '
    // 01090 '
    // 01100 CLS
    ClearScreen(0);
    // 01110 PRINT TAB(25);"LITERATURE QUIZ"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,25);strcat(buf,"LITERATURE QUIZ");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT TAB(15);"CREATIVE COMPUTING MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01160 R=0
    R_int = 0;
    // 01170 PRINT"TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT"THIS IS A MULTIPLE-CHOICE QUIZ."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS A MULTIPLE-CHOICE QUIZ.");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT"TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK.");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT"GOOD LUCK!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD LUCK!");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT"IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT"1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO");fputs(buf,fh); };
    // 01270 GOSUB 1710
    Routine_01710();
    // 01280 'INPUT A
    // 01290 PRINT"SORRY...FIGARO WAS HIS NAME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY...FIGARO WAS HIS NAME.");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 GOTO 1310
    goto Lbl_01310;

  Lbl_01310:
    // 01310 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01320 PRINT"FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS ?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS ?");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT"1)MR. NIXON'S 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1)MR. NIXON'S 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S");fputs(buf,fh); };
    // 01340 GOSUB 1710
    Routine_01710();
    // 01350 'INPUT A
    // 01360 IF A=2 THEN 1390
    if(A_int==2)goto Lbl_01390;
    // 01370 PRINT"TOO BAD....IT WAS ELMER FUDD'S GARDEN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO BAD....IT WAS ELMER FUDD'S GARDEN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01380 GOTO 1420
    goto Lbl_01420;

  Lbl_01390:
    // 01390 PRINT"PRETTY GOOD!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PRETTY GOOD!");strcat(buf,"\n");fputs(buf,fh); };
    // 01400 GOSUB 1690
    Routine_01690();
    // 01410 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01420:
    // 01420 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01430 PRINT "IN THE WIZARD OF OZ DORTHY'S DOG WAS NAMED ?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IN THE WIZARD OF OZ DORTHY'S DOG WAS NAMED ?");strcat(buf,"\n");fputs(buf,fh); };
    // 01440 PRINT"1)CICERO, 2)TRIXIE, 3)KING, 4)TOTO";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1)CICERO, 2)TRIXIE, 3)KING, 4)TOTO");fputs(buf,fh); };
    // 01450 GOSUB 1710
    Routine_01710();
    // 01460 'INPUT A
    // 01470 PRINT"BACK TO THE BOOKS,....TOTO WAS HIS NAME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BACK TO THE BOOKS,....TOTO WAS HIS NAME.");strcat(buf,"\n");fputs(buf,fh); };
    // 01480 GOTO 1490
    goto Lbl_01490;

  Lbl_01490:
    // 01490 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01500 PRINT"WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE ?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE ?");strcat(buf,"\n");fputs(buf,fh); };
    // 01510 PRINT"1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY");fputs(buf,fh); };
    // 01520 GOSUB 1710
    Routine_01710();
    // 01530 'INPUT A
    // 01540 PRINT"OH, COME ON NOW...IT WAS SNOW WHITE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OH, COME ON NOW...IT WAS SNOW WHITE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01550 GOTO 1560
    goto Lbl_01560;

  Lbl_01560:
    // 01560 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01570 IF R=4 THEN 1620
    if(R_int==4)goto Lbl_01620;
    // 01580 IF R<2 THEN 1660
    if(R_int<2)goto Lbl_01660;
    // 01590 PRINT"NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME");strcat(buf,"\n");fputs(buf,fh); };
    // 01600 PRINT"READING THE NURSERY GREATS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"READING THE NURSERY GREATS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01610 GOTO 1680
    goto Lbl_01680;

  Lbl_01620:
    // 01620 PRINT"WOW! THAT'S SUPER! YOU REALLY KNOW YOUR NURSERY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WOW! THAT'S SUPER! YOU REALLY KNOW YOUR NURSERY");strcat(buf,"\n");fputs(buf,fh); };
    // 01630 PRINT"YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE");strcat(buf,"\n");fputs(buf,fh); };
    // 01640 PRINT"LITERATURE (HA, HA, HA)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LITERATURE (HA, HA, HA)");strcat(buf,"\n");fputs(buf,fh); };
    // 01650 GOTO 1680
    goto Lbl_01680;

  Lbl_01660:
    // 01660 PRINT"HUH. THAT'S DEFINITELY NOT TOO SWIFT.  BACK TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HUH. THAT'S DEFINITELY NOT TOO SWIFT.  BACK TO");strcat(buf,"\n");fputs(buf,fh); };
    // 01670 PRINT"NURSERY SCHOOL FOR YOU, MY FRIEND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NURSERY SCHOOL FOR YOU, MY FRIEND.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01680:
    // 01680 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
