/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/chomp.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56671ea60ac0 ---------A   00010 PRINT TAB(33);"CHOMP"
    0x56671ea61e10 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56671ea61f90 ---------A   00030 PRINT:PRINT:PRINT
    0x56671ea50300 ---------A   00040 DIM A(10,10)
    0x56671ea61500 ---------A   00100 REM *** THE GAME OF CHOMP *** COPYRIGHT PCC 1973 ***
    0x56671ea5fd80 ---------A   00110 PRINT 
    0x56671ea615c0 ---------A   00120 PRINT "THIS IS THE GAME OF CHOMP (SCIENTIFIC AMERICAN, JAN 1973)"
    0x56671ea61610 ---------A   00130 PRINT "DO YOU WANT THE RULES (1=YES, 0=NO!)";
    0x56671ea5f610 ---------A   00140 INPUT R
    0x56671ea5f5b0 ---------A   00150 IF R=0 THEN 340
    0x56671ea5ff80 ---------A   00160 F=1
    0x56671ea67a40 ---------A   00170 R=5
    0x56671ea67d40 ---------A   00180 C=7
    0x56671ea67eb0 ---------A   00190 PRINT "CHOMP IS FOR 1 OR MORE PLAYERS (HUMANS ONLY)."
    0x56671ea67f50 ---------A   00200 PRINT
    0x56671ea680c0 ---------A   00210 PRINT "HERE'S HOW A BOARD LOOKS (THIS ONE IS 5 BY 7):"
    0x56671ea68130 ---------A   00220 GOSUB 540
    0x56671ea681c0 ---------A   00230 PRINT
    0x56671ea68360 ---------A   00240 PRINT "THE BOARD IS A BIG COOKIE - R ROWS HIGH AND C COLUMNS"
    0x56671ea68510 ---------A   00250 PRINT "WIDE. YOU INPUT R AND C AT THE START. IN THE UPPER LEFT"
    0x56671ea686c0 ---------A   00260 PRINT "CORNER OF THE COOKIE IS A POISON SQUARE (P). THE ONE WHO"
    0x56671ea68870 ---------A   00270 PRINT "CHOMPS THE POISON SQUARE LOSES. TO TAKE A CHOMP, TYPE THE"
    0x56671ea68a10 ---------A   00280 PRINT "ROW AND COLUMN OF ONE OF THE SQUARES ON THE COOKIE."
    0x56671ea68bc0 ---------A   00290 PRINT "ALL OF THE SQUARES BELOW AND TO THE RIGHT OF THAT SQUARE"
    0x56671ea68d60 ---------A   00300 PRINT "(INCLUDING THAT SQUARE, TOO) DISAPPEAR -- CHOMP!!"
    0x56671ea68f10 ---------A   00310 PRINT "NO FAIR CHOMPING SQUARES THAT HAVE ALREADY BEEN CHOMPED,"
    0x56671ea69090 ---------A   00320 PRINT "OR THAT ARE OUTSIDE THE ORIGINAL DIMENSIONS OF THE COOKIE."
    0x56671ea690e0 ---------A   00330 PRINT 
    0x56671ea69230 ---------A T 00340 PRINT "HERE WE GO..."
    0x56671ea692a0 ---------A   00350 REM 
    0x56671ea694c0 ---------A   00360 F=0
    0x56671ea69850 ---------A   00370 FOR I=1 TO 10
    0x56671ea69bf0 ---------A   00372 FOR J=1 TO 10
    0x56671ea6a1e0 ---------A   00375 A(I,J)=0
    0x56671ea6a310 ---------A   00377 NEXT J
    0x56671ea6a450 ---------A   00379 NEXT I
    0x56671ea6a4b0 ---------A   00380 PRINT 
    0x56671ea6a620 ---------A   00390 PRINT "HOW MANY PLAYERS";
    0x56671ea6a830 ---------A   00400 INPUT P
    0x56671ea6aaf0 ---------A   00410 I1=0
    0x56671ea6ac60 ---------A T 00420 PRINT "HOW MANY ROWS";
    0x56671ea6adb0 ---------A   00430 INPUT R
    0x56671ea6b030 ---------A   00440 IF R <= 9 THEN 470
    0x56671ea6b190 ---------A   00450 PRINT "TOO MANY ROWS (9 IS MAXIMUM). NOW, ";
    0x56671ea6b1e0 ---------A   00460 GOTO 420
    0x56671ea6b340 ---------A T 00470 PRINT "HOW MANY COLUMNS";
    0x56671ea6b490 ---------A   00480 INPUT C
    0x56671ea6b710 ---------A   00490 IF C <= 9 THEN 530
    0x56671ea6b8b0 ---------A   00500 PRINT "TOO MANY COLUMNS (9 IS MAXIMUM). NOW, ";
    0x56671ea6b920 ---------A   00510 GOTO 470
    0x56671ea6b980 ---------A T 00530 PRINT 
    0x56671ea6bc70 ---------A G 00540 FOR I=1 TO R
    0x56671ea6bf70 ---------A   00550 FOR J=1 TO C
    0x56671ea6c350 ---------A   00560 A(I,J)=1
    0x56671ea6c480 ---------A   00570 NEXT J
    0x56671ea6c5c0 ---------A   00580 NEXT I
    0x56671ea6c960 ---------A   00590 A(1,1)=-1
    0x56671ea6c9d0 ---------A   00600 REM PRINT THE BOARD
    0x56671ea6ca30 ---------A T 00610 PRINT 
    0x56671ea6ccc0 ---------A   00620 PRINT TAB(7);"1 2 3 4 5 6 7 8 9"
    0x56671ea6cfb0 ---------A   00630 FOR I=1 TO R
    0x56671ea6d270 ---------A   00640 PRINT I;TAB(7);
    0x56671ea6d570 ---------A   00650 FOR J=1 TO C
    0x56671ea6d9a0 ---------A   00660 IF A(I,J)=-1 THEN 700
    0x56671ea6ddc0 ---------A   00670 IF A(I,J)=0 THEN 720
    0x56671ea6e350 ---------A   00680 PRINT "* ";
    0x56671ea6e3c0 ---------A   00690 GOTO 710
    0x56671ea6e520 ---------A T 00700 PRINT "P ";
    0x56671ea6e650 ---------A T 00710 NEXT J
    0x56671ea6e6d0 ---------A T 00720 PRINT 
    0x56671ea6e800 ---------A   00730 NEXT I
    0x56671ea6e880 ---------A   00740 PRINT 
    0x56671ea6ead0 ---------A   00750 IF F=0 THEN 770
    0x56671ea6eb30 ---------A   00760 RETURN 
    0x56671ea6ebe0 ---------A T 00770 REM GET CHOMPS FOR EACH PLAYER IN TURN
    0x56671ea6ef30 ---------A   00780 LET I1=I1+1
    0x56671ea6f660 ---------A   00790 LET P1=I1-INT(I1/P)*P
    0x56671ea6f8b0 ---------A   00800 IF P1 <> 0 THEN 820
    0x56671ea6faf0 ---------A   00810 P1=P
    0x56671ea6fd60 ---------A T 00820 PRINT "PLAYER";P1
    0x56671ea6fee0 ---------A   00830 PRINT "COORDINATES OF CHOMP (ROW,COLUMN)";
    0x56671ea70290 ---------A   00840 INPUT R1,C1
    0x56671ea704f0 ---------A   00850 IF R1<1 THEN 920
    0x56671ea70770 ---------A   00860 IF R1>R THEN 920
    0x56671ea709d0 ---------A   00870 IF C1<1 THEN 920
    0x56671ea70c60 ---------A   00880 IF C1>C THEN 920
    0x56671ea71090 ---------A   00890 IF A(R1,C1)=0 THEN 920
    0x56671ea714b0 ---------A   00900 IF A(R1,C1)=-1 THEN 1010
    0x56671ea71560 ---------A   00910 GOTO 940
    0x56671ea716c0 ---------A T 00920 PRINT "NO FAIR. YOU'RE TRYING TO CHOMP ON EMPTY SPACE!"
    0x56671ea71730 ---------A   00930 GOTO 820
    0x56671ea71a30 ---------A T 00940 FOR I=R1 TO R
    0x56671ea71d50 ---------A   00950 FOR J=C1 TO C
    0x56671ea72130 ---------A   00960 A(I,J)=0
    0x56671ea72260 ---------A   00970 NEXT J
    0x56671ea723a0 ---------A   00980 NEXT I
    0x56671ea72440 ---------A   00990 GOTO 610
    0x56671ea724b0 ---------A   01000 REM END OF GAME DETECTED IN LINE 900
    0x56671ea72720 ---------A T 01010 PRINT "YOU LOSE, PLAYER";P1
    0x56671ea727a0 ---------A   01020 PRINT 
    0x56671ea72910 ---------A   01030 PRINT "AGAIN (1=YES, 0=NO!)";
    0x56671ea72b20 ---------A   01040 INPUT R$
    0x56671ea72d80 ---------A   01050 IF R=1 THEN 340
    0x56671ea72de0 ---------A   01060 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00340      00150T, 01050T
     00420      00460T
     00470      00440T, 00510T
     00530      00490T
     00540      00220G
     00610      00990T
     00700      00660T
     00710      00690T
     00720      00670T
     00770      00750T
     00820      00800T, 00930T
     00920      00850T, 00860T, 00870T, 00880T, 00890T
     00940      00910T
     01010      00900T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x56671ea60ac0 (00010)   0x56671ea6bc70 (00540)   0x56671ea72de0 (01060)   0x56671ea72de0 (01060)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02040 - 10000    7970 

 */



/*
 *  Symbol Table Listing for 'basic/chomp.bas'
 *
    A               Array    Float           {0,9} {0,9} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    C                        Float       
    C1                       Float       
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
    F                        Float       
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Float       
    I1                       Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Float       
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
    P                        Float       
    P1                       Float       
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Float       
    R$                       String      
    R1                       Float       
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

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/chomp.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56671ea60ac0 ---------A   01000 PRINT TAB(33);"CHOMP"
    0x56671ea61e10 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56671ea61f90 ---------A   01020 PRINT:PRINT:PRINT
    0x56671ea50300 ---------A   01030 DIM A(10,10)
    0x56671ea61500 ---------A   01040 REM *** THE GAME OF CHOMP *** COPYRIGHT PCC 1973 ***
    0x56671ea5fd80 ---------A   01050 PRINT 
    0x56671ea615c0 ---------A   01060 PRINT "THIS IS THE GAME OF CHOMP (SCIENTIFIC AMERICAN, JAN 1973)"
    0x56671ea61610 ---------A   01070 PRINT "DO YOU WANT THE RULES (1=YES, 0=NO!)";
    0x56671ea5f610 ---------A   01080 INPUT R
    0x56671ea5f5b0 ---------A   01090 IF R=0 THEN 1280
    0x56671ea5ff80 ---------A   01100 F=1
    0x56671ea67a40 ---------A   01110 R=5
    0x56671ea67d40 ---------A   01120 C=7
    0x56671ea67eb0 ---------A   01130 PRINT "CHOMP IS FOR 1 OR MORE PLAYERS (HUMANS ONLY)."
    0x56671ea67f50 ---------A   01140 PRINT
    0x56671ea680c0 ---------A   01150 PRINT "HERE'S HOW A BOARD LOOKS (THIS ONE IS 5 BY 7):"
    0x56671ea68130 ---------A   01160 GOSUB 1510
    0x56671ea681c0 ---------A   01170 PRINT
    0x56671ea68360 ---------A   01180 PRINT "THE BOARD IS A BIG COOKIE - R ROWS HIGH AND C COLUMNS"
    0x56671ea68510 ---------A   01190 PRINT "WIDE. YOU INPUT R AND C AT THE START. IN THE UPPER LEFT"
    0x56671ea686c0 ---------A   01200 PRINT "CORNER OF THE COOKIE IS A POISON SQUARE (P). THE ONE WHO"
    0x56671ea68870 ---------A   01210 PRINT "CHOMPS THE POISON SQUARE LOSES. TO TAKE A CHOMP, TYPE THE"
    0x56671ea68a10 ---------A   01220 PRINT "ROW AND COLUMN OF ONE OF THE SQUARES ON THE COOKIE."
    0x56671ea68bc0 ---------A   01230 PRINT "ALL OF THE SQUARES BELOW AND TO THE RIGHT OF THAT SQUARE"
    0x56671ea68d60 ---------A   01240 PRINT "(INCLUDING THAT SQUARE, TOO) DISAPPEAR -- CHOMP!!"
    0x56671ea68f10 ---------A   01250 PRINT "NO FAIR CHOMPING SQUARES THAT HAVE ALREADY BEEN CHOMPED,"
    0x56671ea69090 ---------A   01260 PRINT "OR THAT ARE OUTSIDE THE ORIGINAL DIMENSIONS OF THE COOKIE."
    0x56671ea690e0 ---------A   01270 PRINT 
    0x56671ea69230 ---------A T 01280 PRINT "HERE WE GO..."
    0x56671ea692a0 ---------A   01290 REM 
    0x56671ea694c0 ---------A   01300 F=0
    0x56671ea69850 ---------A   01310 FOR I=1 TO 10
    0x56671ea69bf0 ---------A   01320 FOR J=1 TO 10
    0x56671ea6a1e0 ---------A   01330 A(I,J)=0
    0x56671ea6a310 ---------A   01340 NEXT J
    0x56671ea6a450 ---------A   01350 NEXT I
    0x56671ea6a4b0 ---------A   01360 PRINT 
    0x56671ea6a620 ---------A   01370 PRINT "HOW MANY PLAYERS";
    0x56671ea6a830 ---------A   01380 INPUT P
    0x56671ea6aaf0 ---------A   01390 I1=0
    0x56671ea6ac60 ---------A T 01400 PRINT "HOW MANY ROWS";
    0x56671ea6adb0 ---------A   01410 INPUT R
    0x56671ea6b030 ---------A   01420 IF R <= 9 THEN 1450
    0x56671ea6b190 ---------A   01430 PRINT "TOO MANY ROWS (9 IS MAXIMUM). NOW, ";
    0x56671ea6b1e0 ---------A   01440 GOTO 1400
    0x56671ea6b340 ---------A T 01450 PRINT "HOW MANY COLUMNS";
    0x56671ea6b490 ---------A   01460 INPUT C
    0x56671ea6b710 ---------A   01470 IF C <= 9 THEN 1500
    0x56671ea6b8b0 ---------A   01480 PRINT "TOO MANY COLUMNS (9 IS MAXIMUM). NOW, ";
    0x56671ea6b920 ---------A   01490 GOTO 1450
    0x56671ea6b980 ---------A T 01500 PRINT 
    0x56671ea6bc70 ---------A G 01510 FOR I=1 TO R
    0x56671ea6bf70 ---------A   01520 FOR J=1 TO C
    0x56671ea6c350 ---------A   01530 A(I,J)=1
    0x56671ea6c480 ---------A   01540 NEXT J
    0x56671ea6c5c0 ---------A   01550 NEXT I
    0x56671ea6c960 ---------A   01560 A(1,1)=-1
    0x56671ea6c9d0 ---------A   01570 REM PRINT THE BOARD
    0x56671ea6ca30 ---------A T 01580 PRINT 
    0x56671ea6ccc0 ---------A   01590 PRINT TAB(7);"1 2 3 4 5 6 7 8 9"
    0x56671ea6cfb0 ---------A   01600 FOR I=1 TO R
    0x56671ea6d270 ---------A   01610 PRINT I;TAB(7);
    0x56671ea6d570 ---------A   01620 FOR J=1 TO C
    0x56671ea6d9a0 ---------A   01630 IF A(I,J)=-1 THEN 1670
    0x56671ea6ddc0 ---------A   01640 IF A(I,J)=0 THEN 1690
    0x56671ea6e350 ---------A   01650 PRINT "* ";
    0x56671ea6e3c0 ---------A   01660 GOTO 1680
    0x56671ea6e520 ---------A T 01670 PRINT "P ";
    0x56671ea6e650 ---------A T 01680 NEXT J
    0x56671ea6e6d0 ---------A T 01690 PRINT 
    0x56671ea6e800 ---------A   01700 NEXT I
    0x56671ea6e880 ---------A   01710 PRINT 
    0x56671ea6ead0 ---------A   01720 IF F=0 THEN 1750
    0x56671ea76570 ---------A   01730 GOTO 09900
    0x56671ea6ebe0 ---------A   01740 REM GET CHOMPS FOR EACH PLAYER IN TURN
    0x56671ea6ef30 ---------A T 01750 LET I1=I1+1
    0x56671ea6f660 ---------A   01760 LET P1=I1-INT(I1/P)*P
    0x56671ea6f8b0 ---------A   01770 IF P1 <> 0 THEN 1790
    0x56671ea6faf0 ---------A   01780 P1=P
    0x56671ea6fd60 ---------A T 01790 PRINT "PLAYER";P1
    0x56671ea6fee0 ---------A   01800 PRINT "COORDINATES OF CHOMP (ROW,COLUMN)";
    0x56671ea70290 ---------A   01810 INPUT R1,C1
    0x56671ea704f0 ---------A   01820 IF R1<1 THEN 1890
    0x56671ea70770 ---------A   01830 IF R1>R THEN 1890
    0x56671ea709d0 ---------A   01840 IF C1<1 THEN 1890
    0x56671ea70c60 ---------A   01850 IF C1>C THEN 1890
    0x56671ea71090 ---------A   01860 IF A(R1,C1)=0 THEN 1890
    0x56671ea714b0 ---------A   01870 IF A(R1,C1)=-1 THEN 1980
    0x56671ea71560 ---------A   01880 GOTO 1910
    0x56671ea716c0 ---------A T 01890 PRINT "NO FAIR. YOU'RE TRYING TO CHOMP ON EMPTY SPACE!"
    0x56671ea71730 ---------A   01900 GOTO 1790
    0x56671ea71a30 ---------A T 01910 FOR I=R1 TO R
    0x56671ea71d50 ---------A   01920 FOR J=C1 TO C
    0x56671ea72130 ---------A   01930 A(I,J)=0
    0x56671ea72260 ---------A   01940 NEXT J
    0x56671ea723a0 ---------A   01950 NEXT I
    0x56671ea72440 ---------A   01960 GOTO 1580
    0x56671ea724b0 ---------A   01970 REM END OF GAME DETECTED IN LINE 900
    0x56671ea72720 ---------A T 01980 PRINT "YOU LOSE, PLAYER";P1
    0x56671ea727a0 ---------A   01990 PRINT 
    0x56671ea72910 ---------A   02000 PRINT "AGAIN (1=YES, 0=NO!)";
    0x56671ea72b20 ---------A   02010 INPUT R$
    0x56671ea72d80 ---------A   02020 IF R=1 THEN 1280
    0x56671ea72de0 ---------A   02030 END
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
float  A_flt_arr[10][10];                         // Basic: A 
float  C_flt;                                     // Basic: C 
float  C1_flt;                                    // Basic: C1 
float  F_flt;                                     // Basic: F 
float  I_flt;                                     // Basic: I 
float  I1_flt;                                    // Basic: I1 
float  J_flt;                                     // Basic: J 
float  P_flt;                                     // Basic: P 
float  P1_flt;                                    // Basic: P1 
float  R_flt;                                     // Basic: R 
char*  R_str;                                     // Basic: R$ 
float  R1_flt;                                    // Basic: R1 
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
