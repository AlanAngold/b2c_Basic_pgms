/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/gomoko.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62bb9e9a4b80 ---------A   00002 PRINT TAB(33);"GOMOKO"
    0x62bb9e9a5f30 ---------A   00004 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x62bb9e9a60b0 ---------A   00006 PRINT:PRINT:PRINT
    0x62bb9e9a3830 ---------A   00008 DIM A(19,19)
    0x62bb9e9a4480 ---------A   00010 PRINT "WELCOME TO THE ORIENTAL GAME OF GOMOKO."
    0x62bb9e9a3c70 ---------A   00020 PRINT: PRINT "THE GAME IS PLAYED ON AN N BY N GRID OF A SIZE"
    0x62bb9e9a6220 ---------A   00030 PRINT "THAT YOU SPECIFY.  DURING YOUR PLAY, YOU MAY COVER ONE GRID"
    0x62bb9e9a4780 ---------A   00040 PRINT "INTERSECTION WITH A MARKER. THE OBJECT OF THE GAME IS TO GET"
    0x62bb9e9ab8f0 ---------A   00050 PRINT "5 ADJACENT MARKERS IN A ROW -- HORIZONTALLY, VERTICALLY, OR"
    0x62bb9e9aba50 ---------A   00060 PRINT "DIAGONALLY.  ON THE BOARD DIAGRAM, YOUR MOVES ARE MARKED"
    0x62bb9e9abbf0 ---------A   00070 PRINT "WITH A '1' AND THE COMPUTER MOVES WITH A '2'."
    0x62bb9e9abde0 ---------A   00080 PRINT: PRINT "THE COMPUTER DOES NOT KEEP TRACK OF WHO HAS WON."
    0x62bb9e9abfd0 ---------A   00090 PRINT "TO END THE GAME, TYPE -1,-1 FOR YOUR MOVE.": PRINT
    0x62bb9e9a36d0 ---------A T 00110 PRINT "WHAT IS YOUR BOARD SIZE (MIN 7/ MAX 19)";: INPUT N
    0x62bb9e9a3670 ---------A   00115 IF N>6 THEN 117
    0x62bb9e9ac490 ---------A   00116 GOTO 120
    0x62bb9e9ac6e0 ---------A T 00117 IF N<20 THEN 210
    0x62bb9e9ac8d0 ---------A T 00120 PRINT "I SAID, THE MINIMUM IS 7, THE MAXIMUM IS 19.": GOTO 110
    0x62bb9e9ad580 ---------A T 00210 FOR I=1 TO N:FOR J=1 TO N: A(I,J)=0: NEXT J: NEXT I
    0x62bb9e9ad770 ---------A   00300 PRINT: PRINT "WE ALTERNATE MOVES.  YOU GO FIRST...": PRINT
    0x62bb9e9adaf0 ---------A T 00310 PRINT "YOUR PLAY (I,J)";: INPUT I,J
    0x62bb9e9adb70 ---------A   00315 PRINT
    0x62bb9e9adde0 ---------A   00320 IF I=-1 THEN 980
    0x62bb9e9ae700 ---------A   00330 X=I: Y=J: GOSUB 910: IF L=1 THEN 410
    0x62bb9e9ae870 ---------A   00340 PRINT "ILLEGAL MOVE.  TRY AGAIN...": GOTO 310
    0x62bb9e9aec90 ---------A T 00410 IF A(I,J)=0 THEN 440
    0x62bb9e9aee20 ---------A   00420 PRINT "SQUARE OCCUPIED.  TRY AGAIN...": GOTO 310
    0x62bb9e9af200 ---------A T 00440 A(I,J)=1
    0x62bb9e9af290 ---------A   00500 REM *** COMPUTER TRIES AN INTELLIGENT MOVE ***
    0x62bb9e9aff50 ---------A   00510 FOR E=-1 TO 1: FOR F=-1 TO 1: IF E+F-E*F=0 THEN 590
    0x62bb9e9b0630 ---------A   00540 X=I+F: Y=J+F: GOSUB 910
    0x62bb9e9b0850 ---------A   00570 IF L=0 THEN 590
    0x62bb9e9b0c70 ---------A   00580 IF A(X,Y)=1 THEN 710
    0x62bb9e9b10e0 ---------A T 00590 NEXT F: NEXT E
    0x62bb9e9b11a0 ---------A   00600 REM *** COMPUTER TRIES A RANDOM MOVE ***
    0x62bb9e9b1ff0 ---------A T 00610 X=INT(N*RND(1)+1): Y=INT(N*RND(1)+1): GOSUB 910: IF L=0 THEN 610
    0x62bb9e9b2420 ---------A T 00650 IF A(X,Y)<>0 THEN 610
    0x62bb9e9b28a0 ---------A   00660 A(X,Y)=2: GOSUB 810: GOTO 310
    0x62bb9e9b2f60 ---------A T 00710 X=I-E: Y=J-F: GOSUB 910
    0x62bb9e9b31a0 ---------A   00750 IF L=0 THEN 610
    0x62bb9e9b3230 ---------A   00760 GOTO 650
    0x62bb9e9b32a0 ---------A   00800 REM *** PRINT THE BOARD ***
    0x62bb9e9b3be0 ----------   00810 FOR I=1 TO N: FOR J=1 TO N: PRINT A(I,J);
    0x62bb9e9b3f10 ----------   00840 NEXT J: PRINT: NEXT I: PRINT: RETURN
    0x62bb9e9b4370 ---------B G 00910 L=1: IF X<1 THEN 970
    0x62bb9e9b45f0 ---------B   00920 IF X>N THEN 970
    0x62bb9e9b4850 ---------B   00930 IF Y<1 THEN 970
    0x62bb9e9b4ad0 ---------B   00940 IF Y>N THEN 970
    0x62bb9e9b4b30 ---------B   00950 RETURN
    0x62bb9e9b4d80 ---------B T 00970 L=0: RETURN
    0x62bb9e9b4f70 ---------A T 00980 PRINT: PRINT "THANKS FOR THE GAME!!"
    0x62bb9e9b52e0 ---------A   00985 PRINT "PLAY AGAIN (1 FOR YES, 0 FOR NO)";: INPUT Q
    0x62bb9e9b5540 ---------A   00990 IF Q=1 THEN 110
    0x62bb9e9b55a0 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00110      00120T, 00990T
     00117      00115T
     00120      00116T
     00210      00117T
     00310      00340T, 00420T, 00660T
     00410      00330T
     00440      00410T
     00590      00510T, 00570T
     00610      00610T, 00650T, 00750T
     00650      00760T
     00710      00580T
     00910      00540G, 00710G
     00970      00910T, 00920T, 00930T, 00940T
     00980      00320T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x62bb9e9a4b80 (00002)   0x62bb9e9a4b80 (00002)   0x62bb9e9b55a0 (00999)   0x62bb9e9b55a0 (00999)   
   B) 0x62bb9e9b4370 (00910)   0x62bb9e9b4370 (00910)   0x62bb9e9b4b30 (00950)   0x62bb9e9b4d80 (00970)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01530 - 10000    8480 

 */



/*
 *  Symbol Table Listing for 'basic/gomoko.bas'
 *
    A               Array    Integer         {0,18} {0,18} 
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
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
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
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
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
    Y                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/gomoko.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62bb9e9a4b80 ---------A   01000 PRINT TAB(33);"GOMOKO"
    0x62bb9e9a5f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x62bb9e9a60b0 ---------A   01020 PRINT:PRINT:PRINT
    0x62bb9e9a3830 ---------A   01030 DIM A(19,19)
    0x62bb9e9a4480 ---------A   01040 PRINT "WELCOME TO THE ORIENTAL GAME OF GOMOKO."
    0x62bb9e9a3c70 ---------A   01050 PRINT: PRINT "THE GAME IS PLAYED ON AN N BY N GRID OF A SIZE"
    0x62bb9e9a6220 ---------A   01060 PRINT "THAT YOU SPECIFY.  DURING YOUR PLAY, YOU MAY COVER ONE GRID"
    0x62bb9e9a4780 ---------A   01070 PRINT "INTERSECTION WITH A MARKER. THE OBJECT OF THE GAME IS TO GET"
    0x62bb9e9ab8f0 ---------A   01080 PRINT "5 ADJACENT MARKERS IN A ROW -- HORIZONTALLY, VERTICALLY, OR"
    0x62bb9e9aba50 ---------A   01090 PRINT "DIAGONALLY.  ON THE BOARD DIAGRAM, YOUR MOVES ARE MARKED"
    0x62bb9e9abbf0 ---------A   01100 PRINT "WITH A '1' AND THE COMPUTER MOVES WITH A '2'."
    0x62bb9e9abde0 ---------A   01110 PRINT: PRINT "THE COMPUTER DOES NOT KEEP TRACK OF WHO HAS WON."
    0x62bb9e9abfd0 ---------A   01120 PRINT "TO END THE GAME, TYPE -1,-1 FOR YOUR MOVE.": PRINT
    0x62bb9e9a36d0 ---------A T 01130 PRINT "WHAT IS YOUR BOARD SIZE (MIN 7/ MAX 19)";: INPUT N
    0x62bb9e9a3670 ---------A   01140 IF N>6 THEN 1160
    0x62bb9e9ac490 ---------A   01150 GOTO 1170
    0x62bb9e9ac6e0 ---------A T 01160 IF N<20 THEN 1180
    0x62bb9e9ac8d0 ---------A T 01170 PRINT "I SAID, THE MINIMUM IS 7, THE MAXIMUM IS 19.": GOTO 1130
    0x62bb9e9ad580 ---------A T 01180 FOR I=1 TO N:FOR J=1 TO N: A(I,J)=0: NEXT J: NEXT I
    0x62bb9e9ad770 ---------A   01190 PRINT: PRINT "WE ALTERNATE MOVES.  YOU GO FIRST...": PRINT
    0x62bb9e9adaf0 ---------A T 01200 PRINT "YOUR PLAY (I,J)";: INPUT I,J
    0x62bb9e9adb70 ---------A   01210 PRINT
    0x62bb9e9adde0 ---------A   01220 IF I=-1 THEN 1420
    0x62bb9e9ae700 ---------A   01230 X=I: Y=J: GOSUB 910: IF L=1 THEN 1250
    0x62bb9e9ae870 ---------A   01240 PRINT "ILLEGAL MOVE.  TRY AGAIN...": GOTO 1200
    0x62bb9e9aec90 ---------A T 01250 IF A(I,J)=0 THEN 1270
    0x62bb9e9aee20 ---------A   01260 PRINT "SQUARE OCCUPIED.  TRY AGAIN...": GOTO 1200
    0x62bb9e9af200 ---------A T 01270 A(I,J)=1
    0x62bb9e9af290 ---------A   01280 REM *** COMPUTER TRIES AN INTELLIGENT MOVE ***
    0x62bb9e9aff50 ---------A   01290 FOR E=-1 TO 1: FOR F=-1 TO 1: IF E+F-E*F=0 THEN 1330
    0x62bb9e9b0630 ---------A   01300 X=I+F: Y=J+F: GOSUB 1460
    0x62bb9e9b0850 ---------A   01310 IF L=0 THEN 1330
    0x62bb9e9b0c70 ---------A   01320 IF A(X,Y)=1 THEN 1380
    0x62bb9e9b10e0 ---------A T 01330 NEXT F: NEXT E
    0x62bb9e9b11a0 ---------A   01340 REM *** COMPUTER TRIES A RANDOM MOVE ***
    0x62bb9e9b1ff0 ---------A T 01350 X=INT(N*RND(1)+1): Y=INT(N*RND(1)+1): GOSUB 910: IF L=0 THEN 1350
    0x62bb9e9b2420 ---------A T 01360 IF A(X,Y)<>0 THEN 1350
    0x62bb9e9b28a0 ---------A   01370 A(X,Y)=2: GOSUB 810: GOTO 1200
    0x62bb9e9b2f60 ---------A T 01380 X=I-E: Y=J-F: GOSUB 1460
    0x62bb9e9b31a0 ---------A   01390 IF L=0 THEN 1350
    0x62bb9e9b3230 ---------A   01400 GOTO 1360
    0x62bb9e9b32a0 ---------A   01410 REM *** PRINT THE BOARD ***
    0x62bb9e9b4f70 ---------A T 01420 PRINT: PRINT "THANKS FOR THE GAME!!"
    0x62bb9e9b52e0 ---------A   01430 PRINT "PLAY AGAIN (1 FOR YES, 0 FOR NO)";: INPUT Q
    0x62bb9e9b5540 ---------A   01440 IF Q=1 THEN 1130
    0x62bb9e9b55a0 ---------A   01450 END
    0x62bb9e9b4370 ---------B G 01460 L=1: IF X<1 THEN 1510
    0x62bb9e9b45f0 ---------B   01470 IF X>N THEN 1510
    0x62bb9e9b4850 ---------B   01480 IF Y<1 THEN 1510
    0x62bb9e9b4ad0 ---------B   01490 IF Y>N THEN 1510
    0x62bb9e9b7b90 ---------B   01500 GOTO 01520
    0x62bb9e9b7bd0 ---------B T 01510 GOTO 01520
    0x62bb9e9b7c10 ---------B T 01520 RETURN
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
int    A_int_arr[19][19];                         // Basic: A 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    L_int;                                     // Basic: L 
int    N_int;                                     // Basic: N 
int    Q_int;                                     // Basic: Q 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01460();

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

void Routine_01460(){
    // 01460 L=1: IF X<1 THEN 1510
    if(X_int<1)goto Lbl_01510;
    // 01470 IF X>N THEN 1510
    if(X_int>N_int)goto Lbl_01510;
    // 01480 IF Y<1 THEN 1510
    if(Y_int<1)goto Lbl_01510;
    // 01490 IF Y>N THEN 1510
    if(Y_int>N_int)goto Lbl_01510;
    // 01500 GOTO 01520
    goto Lbl_01520;

  Lbl_01510:
    // 01510 GOTO 01520
    goto Lbl_01520;

  Lbl_01520:
    // 01520 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
