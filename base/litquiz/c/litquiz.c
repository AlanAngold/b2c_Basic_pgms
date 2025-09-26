/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/litquiz/basic/litquiz.bas: 
 *
                   ++---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   || +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    || |
        Address    vv v Original BASIC statement
    -------------- -- - ------------------------------------------------------------------------------
    0x559719895d00 ---------A   00010 '*************************************
    0x559719895dd0 ---------A   00020 '*         PROGRAM WRITTEN BY        *
    0x559719895ea0 ---------A   00030 '*           PAMELA McGINLEY         *
    0x559719895f80 ---------A   00040 '*                                   *
    0x559719896030 ---------A   00050 '*         MODIFICATIONS BY          *
    0x559719896100 ---------A   00060 '*                                   *
    0x5597198961b0 ---------A   00070 '*           ROBERT L. ROACH         *
    0x559719896260 ---------A   00080 '*************************************
    0x5597198962a0 ---------A   00090 '
    0x5597198963b0 ---------A   00100 '
    0x559719896440 ---------A   00105 CLS
    0x5597198966e0 ---------A   00110 PRINT TAB(25);"LITERATURE QUIZ"
    0x559719896950 ---------A   00120 PRINT TAB(15);"CREATIVE COMPUTING MORRISTOWN, NEW JERSEY"
    0x559719896a60 ---------A   00130 PRINT:PRINT:PRINT
    0x55971989af00 ---------A   00140 R=0
    0x55971989b030 ---------A   00150 PRINT"TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x55971989b1f0 ---------A   00160 PRINT:PRINT"THIS IS A MULTIPLE-CHOICE QUIZ."
    0x55971989b460 ---------A   00170 PRINT"TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x55971989b6a0 ---------A   00180 PRINT:PRINT"GOOD LUCK!":PRINT:PRINT
    0x55971989b810 ---------A   00190 PRINT"IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT."
    0x55971989b990 ---------A   00200 PRINT"1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x55971989ba50 ---------A   00210 GOSUB 1000:'INPUT A:IF A=3 THEN 230
    0x55971989bc20 ---------A   00220 PRINT"SORRY...FIGARO WAS HIS NAME.":GOTO 250
    0x55971989bd50 ----------   00230 PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x55971989bdc0 ----------   00240 GOSUB 600
    0x55971989bea0 ---------A T 00250 PRINT:PRINT
    0x55971989c020 ---------A   00260 PRINT"FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS ?"
    0x55971989c1a0 ---------A   00270 PRINT"1)MR. NIXON'S 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x55971989c250 ---------A   00275 GOSUB 1000:'INPUT A
    0x55971989c4c0 ---------A   00280 IF A=2 THEN 300
    0x55971989c670 ---------A   00290 PRINT"TOO BAD....IT WAS ELMER FUDD'S GARDEN.":GOTO 320
    0x55971989c790 ---------A T 00300 PRINT"PRETTY GOOD!"
    0x55971989c800 ---------A   00310 GOSUB 600
    0x55971989caf0 ---------A T 00320 PRINT:PRINT
    0x55971989cc60 ---------A   00330 PRINT "IN THE WIZARD OF OZ DORTHY'S DOG WAS NAMED ?"
    0x55971989cdd0 ---------A   00340 PRINT"1)CICERO, 2)TRIXIE, 3)KING, 4)TOTO";
    0x55971989ce90 ---------A   00350 GOSUB 1000:'INPUT A:IF A=4 THEN 370
    0x55971989d090 ---------A   00360 PRINT"BACK TO THE BOOKS,....TOTO WAS HIS NAME.":GOTO 390
    0x55971989d1c0 ----------   00370 PRINT"YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x55971989d230 ----------   00380 GOSUB 600
    0x55971989d310 ---------A T 00390 PRINT:PRINT
    0x55971989d490 ---------A   00400 PRINT"WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE ?"
    0x55971989d620 ---------A   00410 PRINT"1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x55971989d6e0 ---------A   00420 GOSUB 1000:'INPUT A:IF A=3 THEN 450
    0x55971989d850 ---------A   00430 PRINT"OH, COME ON NOW...IT WAS SNOW WHITE."
    0x55971989d8c0 ---------A   00440 GOTO 470
    0x55971989d9e0 ----------   00450 PRINT"GOOD MEMORY!"
    0x55971989da50 ----------   00460 GOSUB 600
    0x55971989db00 ---------A T 00470 PRINT:PRINT
    0x55971989dcb0 ---------A   00480 IF R=4 THEN 530
    0x55971989dea0 ---------A   00490 IF R<2 THEN 570
    0x55971989e010 ---------A   00500 PRINT"NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x55971989e150 ---------A   00510 PRINT"READING THE NURSERY GREATS."
    0x55971989e1f0 ---------A   00520 GOTO 590
    0x55971989e360 ---------A T 00530 PRINT"WOW! THAT'S SUPER! YOU REALLY KNOW YOUR NURSERY"
    0x55971989e4c0 ---------A   00540 PRINT"YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x55971989e600 ---------A   00550 PRINT"LITERATURE (HA, HA, HA)"
    0x55971989e6a0 ---------A   00560 GOTO 590
    0x55971989e800 ---------A T 00570 PRINT"HUH. THAT'S DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x55971989e940 ---------A   00580 PRINT"NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x55971989e990 ---------A T 00590 END
    0x55971989ebe0 ---------B G 00600 R=R+1:RETURN
    0x55971989edb0 ----------   01000 PRINT:PRINT"HIT ANY KEY TO CONTINUE"
    0x55971989f330 ---------- T 01010 A$="":A$=INKEY$:IF A$="" THEN 1010
    0x55971989f9c0 ----------   01020 FOR X=1 TO 4:PRINT CHR$(27);CHR$(30);:NEXT X:RETURN
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

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x559719895d00   0x559719895d00   0x55971989f9c0   0x55971989e990 
   B) 0x55971989ebe0   0x55971989ebe0   0x55971989ebe0   0x55971989ebe0 


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01650 - 10000    8360 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/litquiz/basic/litquiz.bas'
 *
    A              Integer 
    A$             String  
    CHR$  Function String      args=1, int   
    INKEY$          String  
    R              Integer 
    TAB   Function String      args=1, 
    X              Integer 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/litquiz/basic/litquiz.bas: 
 *
                   ++---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   || +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    || |
        Address    vv v Original BASIC statement
    -------------- -- - ------------------------------------------------------------------------------
    0x559719895d00 ---------A   01000 '*************************************
    0x559719895dd0 ---------A   01010 '*         PROGRAM WRITTEN BY        *
    0x559719895ea0 ---------A   01020 '*           PAMELA McGINLEY         *
    0x559719895f80 ---------A   01030 '*                                   *
    0x559719896030 ---------A   01040 '*         MODIFICATIONS BY          *
    0x559719896100 ---------A   01050 '*                                   *
    0x5597198961b0 ---------A   01060 '*           ROBERT L. ROACH         *
    0x559719896260 ---------A   01070 '*************************************
    0x5597198962a0 ---------A   01080 '
    0x5597198963b0 ---------A   01090 '
    0x559719896440 ---------A   01100 CLS
    0x5597198966e0 ---------A   01110 PRINT TAB(25);"LITERATURE QUIZ"
    0x559719896950 ---------A   01120 PRINT TAB(15);"CREATIVE COMPUTING MORRISTOWN, NEW JERSEY"
    0x559719896a60 ---------A   01130 PRINT:PRINT:PRINT
    0x55971989af00 ---------A   01140 R=0
    0x55971989b030 ---------A   01150 PRINT"TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x55971989b1f0 ---------A   01160 PRINT:PRINT"THIS IS A MULTIPLE-CHOICE QUIZ."
    0x55971989b460 ---------A   01170 PRINT"TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x55971989b6a0 ---------A   01180 PRINT:PRINT"GOOD LUCK!":PRINT:PRINT
    0x55971989b810 ---------A   01190 PRINT"IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT."
    0x55971989b990 ---------A   01200 PRINT"1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x55971989ba50 ---------A   01210 GOSUB 1000:'INPUT A:IF A=3 THEN 230
    0x55971989bc20 ---------A   01220 PRINT"SORRY...FIGARO WAS HIS NAME.":GOTO 1250
    0x55971989bd50 ----------   01230 PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x55971989bdc0 ----------   01240 GOSUB 1640
    0x55971989bea0 ---------A T 01250 PRINT:PRINT
    0x55971989c020 ---------A   01260 PRINT"FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS ?"
    0x55971989c1a0 ---------A   01270 PRINT"1)MR. NIXON'S 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x55971989c250 ---------A   01280 GOSUB 1000:'INPUT A
    0x55971989c4c0 ---------A   01290 IF A=2 THEN 1310
    0x55971989c670 ---------A   01300 PRINT"TOO BAD....IT WAS ELMER FUDD'S GARDEN.":GOTO 1330
    0x55971989c790 ---------A T 01310 PRINT"PRETTY GOOD!"
    0x55971989c800 ---------A   01320 GOSUB 1640
    0x55971989caf0 ---------A T 01330 PRINT:PRINT
    0x55971989cc60 ---------A   01340 PRINT "IN THE WIZARD OF OZ DORTHY'S DOG WAS NAMED ?"
    0x55971989cdd0 ---------A   01350 PRINT"1)CICERO, 2)TRIXIE, 3)KING, 4)TOTO";
    0x55971989ce90 ---------A   01360 GOSUB 1000:'INPUT A:IF A=4 THEN 370
    0x55971989d090 ---------A   01370 PRINT"BACK TO THE BOOKS,....TOTO WAS HIS NAME.":GOTO 1400
    0x55971989d1c0 ----------   01380 PRINT"YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x55971989d230 ----------   01390 GOSUB 1640
    0x55971989d310 ---------A T 01400 PRINT:PRINT
    0x55971989d490 ---------A   01410 PRINT"WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE ?"
    0x55971989d620 ---------A   01420 PRINT"1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x55971989d6e0 ---------A   01430 GOSUB 1000:'INPUT A:IF A=3 THEN 450
    0x55971989d850 ---------A   01440 PRINT"OH, COME ON NOW...IT WAS SNOW WHITE."
    0x55971989d8c0 ---------A   01450 GOTO 1480
    0x55971989d9e0 ----------   01460 PRINT"GOOD MEMORY!"
    0x55971989da50 ----------   01470 GOSUB 1640
    0x55971989db00 ---------A T 01480 PRINT:PRINT
    0x55971989dcb0 ---------A   01490 IF R=4 THEN 1540
    0x55971989dea0 ---------A   01500 IF R<2 THEN 1580
    0x55971989e010 ---------A   01510 PRINT"NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x55971989e150 ---------A   01520 PRINT"READING THE NURSERY GREATS."
    0x55971989e1f0 ---------A   01530 GOTO 1600
    0x55971989e360 ---------A T 01540 PRINT"WOW! THAT'S SUPER! YOU REALLY KNOW YOUR NURSERY"
    0x55971989e4c0 ---------A   01550 PRINT"YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x55971989e600 ---------A   01560 PRINT"LITERATURE (HA, HA, HA)"
    0x55971989e6a0 ---------A   01570 GOTO 1600
    0x55971989e800 ---------A T 01580 PRINT"HUH. THAT'S DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x55971989e940 ---------A   01590 PRINT"NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x55971989e990 ---------A T 01600 END
    0x55971989edb0 ----------   01610 PRINT:PRINT"HIT ANY KEY TO CONTINUE"
    0x55971989f330 ---------- T 01620 A$="":A$=INKEY$:IF A$="" THEN 1620
    0x55971989f9c0 ----------   01630 FOR X=1 TO 4:PRINT CHR$(27);CHR$(30);:NEXT X:RETURN
    0x55971989ebe0 ---------B G 01640 R=R+1:RETURN
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
int   A_int;        // Comments?
char* A_str;        // Comments?
char* INKEY_str;    // Comments?
int   R_int;        // Comments?
int   X_int;        // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01640();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------

void Routine_01640(){
    // 01640 R=R+1:RETURN
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
    b2c_fprintf(stdout,"%sLITERATURE QUIZ",TAB(25)); b2c_fprintf(stdout,"\n");
    // 01120 PRINT TAB(15);"CREATIVE COMPUTING MORRISTOWN, NEW JERSEY"
    b2c_fprintf(stdout,"%sCREATIVE COMPUTING MORRISTOWN, NEW JERSEY",TAB(15)); b2c_fprintf(stdout,"\n");
    // 01130 PRINT:PRINT:PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01140 R=0
    R_int = 0;
    // 01150 PRINT"TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    b2c_fprintf(stdout,"TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."); b2c_fprintf(stdout,"\n");
    // 01160 PRINT:PRINT"THIS IS A MULTIPLE-CHOICE QUIZ."
    b2c_fprintf(stdout,"THIS IS A MULTIPLE-CHOICE QUIZ."); b2c_fprintf(stdout,"\n");
    // 01170 PRINT"TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    b2c_fprintf(stdout,"TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."); b2c_fprintf(stdout,"\n");
    // 01180 PRINT:PRINT"GOOD LUCK!":PRINT:PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01190 PRINT"IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT."
    b2c_fprintf(stdout,"IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT."); b2c_fprintf(stdout,"\n");
    // 01200 PRINT"1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    b2c_fprintf(stdout,"1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO"); 
    // 01210 GOSUB 1000:'INPUT A:IF A=3 THEN 230
    // 01220 PRINT"SORRY...FIGARO WAS HIS NAME.":GOTO 1250
    goto Lbl_01250;

  Lbl_01250:
    // 01250 PRINT:PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01260 PRINT"FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS ?"
    b2c_fprintf(stdout,"FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS ?"); b2c_fprintf(stdout,"\n");
    // 01270 PRINT"1)MR. NIXON'S 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    b2c_fprintf(stdout,"1)MR. NIXON'S 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S"); 
    // 01280 GOSUB 1000:'INPUT A
    // 01290 IF A=2 THEN 1310
    if(A_int==2)goto Lbl_01310;
    // 01300 PRINT"TOO BAD....IT WAS ELMER FUDD'S GARDEN.":GOTO 1330
    goto Lbl_01330;

  Lbl_01310:
    // 01310 PRINT"PRETTY GOOD!"
    b2c_fprintf(stdout,"PRETTY GOOD!"); b2c_fprintf(stdout,"\n");
    // 01320 GOSUB 1640
    Routine_01640();

  Lbl_01330:
    // 01330 PRINT:PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01340 PRINT "IN THE WIZARD OF OZ DORTHY'S DOG WAS NAMED ?"
    b2c_fprintf(stdout,"IN THE WIZARD OF OZ DORTHY'S DOG WAS NAMED ?"); b2c_fprintf(stdout,"\n");
    // 01350 PRINT"1)CICERO, 2)TRIXIE, 3)KING, 4)TOTO";
    b2c_fprintf(stdout,"1)CICERO, 2)TRIXIE, 3)KING, 4)TOTO"); 
    // 01360 GOSUB 1000:'INPUT A:IF A=4 THEN 370
    // 01370 PRINT"BACK TO THE BOOKS,....TOTO WAS HIS NAME.":GOTO 1400
    goto Lbl_01400;

  Lbl_01400:
    // 01400 PRINT:PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01410 PRINT"WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE ?"
    b2c_fprintf(stdout,"WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE ?"); b2c_fprintf(stdout,"\n");
    // 01420 PRINT"1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    b2c_fprintf(stdout,"1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY"); 
    // 01430 GOSUB 1000:'INPUT A:IF A=3 THEN 450
    // 01440 PRINT"OH, COME ON NOW...IT WAS SNOW WHITE."
    b2c_fprintf(stdout,"OH, COME ON NOW...IT WAS SNOW WHITE."); b2c_fprintf(stdout,"\n");
    // 01450 GOTO 1480
    goto Lbl_01480;

  Lbl_01480:
    // 01480 PRINT:PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01490 IF R=4 THEN 1540
    if(R_int==4)goto Lbl_01540;
    // 01500 IF R<2 THEN 1580
    if(R_int<2)goto Lbl_01580;
    // 01510 PRINT"NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    b2c_fprintf(stdout,"NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"); b2c_fprintf(stdout,"\n");
    // 01520 PRINT"READING THE NURSERY GREATS."
    b2c_fprintf(stdout,"READING THE NURSERY GREATS."); b2c_fprintf(stdout,"\n");
    // 01530 GOTO 1600
    goto Lbl_01600;

  Lbl_01540:
    // 01540 PRINT"WOW! THAT'S SUPER! YOU REALLY KNOW YOUR NURSERY"
    b2c_fprintf(stdout,"WOW! THAT'S SUPER! YOU REALLY KNOW YOUR NURSERY"); b2c_fprintf(stdout,"\n");
    // 01550 PRINT"YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    b2c_fprintf(stdout,"YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"); b2c_fprintf(stdout,"\n");
    // 01560 PRINT"LITERATURE (HA, HA, HA)"
    b2c_fprintf(stdout,"LITERATURE (HA, HA, HA)"); b2c_fprintf(stdout,"\n");
    // 01570 GOTO 1600
    goto Lbl_01600;

  Lbl_01580:
    // 01580 PRINT"HUH. THAT'S DEFINITELY NOT TOO SWIFT.  BACK TO"
    b2c_fprintf(stdout,"HUH. THAT'S DEFINITELY NOT TOO SWIFT.  BACK TO"); b2c_fprintf(stdout,"\n");
    // 01590 PRINT"NURSERY SCHOOL FOR YOU, MY FRIEND."
    b2c_fprintf(stdout,"NURSERY SCHOOL FOR YOU, MY FRIEND."); b2c_fprintf(stdout,"\n");

  Lbl_01600:
    // 01600 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
