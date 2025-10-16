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
    0x5fb563061590 ---------A   00010 '*************************************
    0x5fb563061610 ---------A   00020 '*         PROGRAM WRITTEN BY        *
    0x5fb563071210 ---------A   00030 '*           PAMELA McGINLEY         *
    0x5fb5630612b0 ---------A   00040 '*                                   *
    0x5fb563072520 ---------A   00050 '*         MODIFICATIONS BY          *
    0x5fb563070920 ---------A   00060 '*                                   *
    0x5fb563070730 ---------A   00070 '*           ROBERT L. ROACH         *
    0x5fb5630729e0 ---------A   00080 '*************************************
    0x5fb563072a20 ---------A   00090 '
    0x5fb563072a60 ---------A   00100 '
    0x5fb563070f80 ---------A   00105 CLS
    0x5fb563071ac0 ---------A   00110 PRINT TAB(25);"LITERATURE QUIZ"
    0x5fb563072e70 ---------A   00120 PRINT TAB(15);"CREATIVE COMPUTING MORRISTOWN, NEW JERSEY"
    0x5fb563072ff0 ---------A   00130 PRINT:PRINT:PRINT
    0x5fb563073090 ---------A   00140 R=0
    0x5fb563073160 ---------A   00150 PRINT"TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x5fb5630716c0 ---------A   00160 PRINT:PRINT"THIS IS A MULTIPLE-CHOICE QUIZ."
    0x5fb5630787e0 ---------A   00170 PRINT"TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x5fb563078a20 ---------A   00180 PRINT:PRINT"GOOD LUCK!":PRINT:PRINT
    0x5fb563078bb0 ---------A   00190 PRINT"IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT."
    0x5fb563078d00 ---------A   00200 PRINT"1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x5fb563078d90 ---------A   00210 GOSUB 1000:'INPUT A:IF A=3 THEN 230
    0x5fb563078f50 ---------A   00220 PRINT"SORRY...FIGARO WAS HIS NAME.":GOTO 250
    0x5fb5630790a0 ----------   00230 PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x5fb563079110 ----------   00240 GOSUB 600
    0x5fb5630791f0 ---------A T 00250 PRINT:PRINT
    0x5fb563079390 ---------A   00260 PRINT"FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS ?"
    0x5fb563079530 ---------A   00270 PRINT"1)MR. NIXON'S 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x5fb5630795e0 ---------A   00275 GOSUB 1000:'INPUT A
    0x5fb563070610 ---------A   00280 IF A=2 THEN 300
    0x5fb563079aa0 ---------A   00290 PRINT"TOO BAD....IT WAS ELMER FUDD'S GARDEN.":GOTO 320
    0x5fb563079be0 ---------A T 00300 PRINT"PRETTY GOOD!"
    0x5fb563079c50 ---------A   00310 GOSUB 600
    0x5fb563079f40 ---------A T 00320 PRINT:PRINT
    0x5fb56307a0d0 ---------A   00330 PRINT "IN THE WIZARD OF OZ DORTHY'S DOG WAS NAMED ?"
    0x5fb56307a260 ---------A   00340 PRINT"1)CICERO, 2)TRIXIE, 3)KING, 4)TOTO";
    0x5fb56307a320 ---------A   00350 GOSUB 1000:'INPUT A:IF A=4 THEN 370
    0x5fb56307a540 ---------A   00360 PRINT"BACK TO THE BOOKS,....TOTO WAS HIS NAME.":GOTO 390
    0x5fb56307a690 ----------   00370 PRINT"YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x5fb56307a700 ----------   00380 GOSUB 600
    0x5fb56307a7e0 ---------A T 00390 PRINT:PRINT
    0x5fb56307a980 ---------A   00400 PRINT"WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE ?"
    0x5fb56307ab30 ---------A   00410 PRINT"1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x5fb56307abf0 ---------A   00420 GOSUB 1000:'INPUT A:IF A=3 THEN 450
    0x5fb56307ad80 ---------A   00430 PRINT"OH, COME ON NOW...IT WAS SNOW WHITE."
    0x5fb56307adf0 ---------A   00440 GOTO 470
    0x5fb56307af30 ----------   00450 PRINT"GOOD MEMORY!"
    0x5fb56307afa0 ----------   00460 GOSUB 600
    0x5fb56307b050 ---------A T 00470 PRINT:PRINT
    0x5fb5630705b0 ---------A   00480 IF R=4 THEN 530
    0x5fb56307b4d0 ---------A   00490 IF R<2 THEN 570
    0x5fb56307b660 ---------A   00500 PRINT"NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x5fb56307b7c0 ---------A   00510 PRINT"READING THE NURSERY GREATS."
    0x5fb56307b860 ---------A   00520 GOTO 590
    0x5fb56307b9f0 ---------A T 00530 PRINT"WOW! THAT'S SUPER! YOU REALLY KNOW YOUR NURSERY"
    0x5fb56307bb70 ---------A   00540 PRINT"YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x5fb56307bcd0 ---------A   00550 PRINT"LITERATURE (HA, HA, HA)"
    0x5fb56307bd70 ---------A   00560 GOTO 590
    0x5fb56307bef0 ---------A T 00570 PRINT"HUH. THAT'S DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x5fb56307c050 ---------A   00580 PRINT"NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x5fb56307c0a0 ---------A T 00590 END
    0x5fb56307c410 ---------B G 00600 R=R+1:RETURN
    0x5fb56307c600 ----------   01000 PRINT:PRINT"HIT ANY KEY TO CONTINUE"
    0x5fb56307ce40 ---------- T 01010 A$="":A$=INKEY$:IF A$="" THEN 1010
    0x5fb56307d710 ----------   01020 FOR X=1 TO 4:PRINT CHR$(27);CHR$(30);:NEXT X:RETURN
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
   A) 0x5fb563061590 (00010)   0x000000000000 (00000)   0x5fb56307d710 (01020)   0x5fb56307c0a0 (00590)   
   B) 0x5fb56307c410 (00600)   0x5fb56307c410 (00600)   0x5fb56307c410 (00600)   0x5fb56307c410 (00600)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01570 - 10000    8440 

 */



/*
 *  Symbol Table Listing for 'basic/litquiz.bas'
 *
    A                        Float       
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
    R                        Float       
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Float       

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
    0x5fb563061590 ---------A   01000 '*************************************
    0x5fb563061610 ---------A   01010 '*         PROGRAM WRITTEN BY        *
    0x5fb563071210 ---------A   01020 '*           PAMELA McGINLEY         *
    0x5fb5630612b0 ---------A   01030 '*                                   *
    0x5fb563072520 ---------A   01040 '*         MODIFICATIONS BY          *
    0x5fb563070920 ---------A   01050 '*                                   *
    0x5fb563070730 ---------A   01060 '*           ROBERT L. ROACH         *
    0x5fb5630729e0 ---------A   01070 '*************************************
    0x5fb563072a20 ---------A   01080 '
    0x5fb563072a60 ---------A   01090 '
    0x5fb563070f80 ---------A   01100 CLS
    0x5fb563071ac0 ---------A   01110 PRINT TAB(25);"LITERATURE QUIZ"
    0x5fb563072e70 ---------A   01120 PRINT TAB(15);"CREATIVE COMPUTING MORRISTOWN, NEW JERSEY"
    0x5fb563072ff0 ---------A   01130 PRINT:PRINT:PRINT
    0x5fb563073090 ---------A   01140 R=0
    0x5fb563073160 ---------A   01150 PRINT"TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x5fb5630716c0 ---------A   01160 PRINT:PRINT"THIS IS A MULTIPLE-CHOICE QUIZ."
    0x5fb5630787e0 ---------A   01170 PRINT"TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x5fb563078a20 ---------A   01180 PRINT:PRINT"GOOD LUCK!":PRINT:PRINT
    0x5fb563078bb0 ---------A   01190 PRINT"IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT."
    0x5fb563078d00 ---------A   01200 PRINT"1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x5fb563078d90 ---------A   01210 GOSUB 1000:'INPUT A:IF A=3 THEN 230
    0x5fb563078f50 ---------A   01220 PRINT"SORRY...FIGARO WAS HIS NAME.":GOTO 1230
    0x5fb5630791f0 ---------A T 01230 PRINT:PRINT
    0x5fb563079390 ---------A   01240 PRINT"FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS ?"
    0x5fb563079530 ---------A   01250 PRINT"1)MR. NIXON'S 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x5fb5630795e0 ---------A   01260 GOSUB 1000:'INPUT A
    0x5fb563070610 ---------A   01270 IF A=2 THEN 1290
    0x5fb563079aa0 ---------A   01280 PRINT"TOO BAD....IT WAS ELMER FUDD'S GARDEN.":GOTO 1310
    0x5fb563079be0 ---------A T 01290 PRINT"PRETTY GOOD!"
    0x5fb563079c50 ---------A   01300 GOSUB 1550
    0x5fb563079f40 ---------A T 01310 PRINT:PRINT
    0x5fb56307a0d0 ---------A   01320 PRINT "IN THE WIZARD OF OZ DORTHY'S DOG WAS NAMED ?"
    0x5fb56307a260 ---------A   01330 PRINT"1)CICERO, 2)TRIXIE, 3)KING, 4)TOTO";
    0x5fb56307a320 ---------A   01340 GOSUB 1000:'INPUT A:IF A=4 THEN 370
    0x5fb56307a540 ---------A   01350 PRINT"BACK TO THE BOOKS,....TOTO WAS HIS NAME.":GOTO 1360
    0x5fb56307a7e0 ---------A T 01360 PRINT:PRINT
    0x5fb56307a980 ---------A   01370 PRINT"WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE ?"
    0x5fb56307ab30 ---------A   01380 PRINT"1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x5fb56307abf0 ---------A   01390 GOSUB 1000:'INPUT A:IF A=3 THEN 450
    0x5fb56307ad80 ---------A   01400 PRINT"OH, COME ON NOW...IT WAS SNOW WHITE."
    0x5fb56307adf0 ---------A   01410 GOTO 1420
    0x5fb56307b050 ---------A T 01420 PRINT:PRINT
    0x5fb5630705b0 ---------A   01430 IF R=4 THEN 1480
    0x5fb56307b4d0 ---------A   01440 IF R<2 THEN 1520
    0x5fb56307b660 ---------A   01450 PRINT"NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x5fb56307b7c0 ---------A   01460 PRINT"READING THE NURSERY GREATS."
    0x5fb56307b860 ---------A   01470 GOTO 1540
    0x5fb56307b9f0 ---------A T 01480 PRINT"WOW! THAT'S SUPER! YOU REALLY KNOW YOUR NURSERY"
    0x5fb56307bb70 ---------A   01490 PRINT"YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x5fb56307bcd0 ---------A   01500 PRINT"LITERATURE (HA, HA, HA)"
    0x5fb56307bd70 ---------A   01510 GOTO 1540
    0x5fb56307bef0 ---------A T 01520 PRINT"HUH. THAT'S DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x5fb56307c050 ---------A   01530 PRINT"NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x5fb56307c0a0 ---------A T 01540 END
    0x5fb5630801d0 ---------B G 01550 GOTO 01560
    0x5fb563080210 ---------B T 01560 RETURN
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
char*  A_str;                                     // Basic: A$ 
char*  INKEY_str;                                 // Basic: INKEY$ 
float  R_flt;                                     // Basic: R 
float  X_flt;                                     // Basic: X 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01550();

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

void Routine_01550(){
    // 01550 GOTO 01560
    goto Lbl_01560;

  Lbl_01560:
    // 01560 RETURN
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
