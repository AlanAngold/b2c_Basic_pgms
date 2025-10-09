/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/digits.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b92d3367ac0 ---------A   00010 PRINT TAB(33);"DIGITS"
    0x5b92d3368e70 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b92d3368ff0 ---------A   00030 PRINT:PRINT:PRINT
    0x5b92d3366920 ---------A   00210 PRINT "THIS IS A GAME OF GUESSING."
    0x5b92d33689e0 ---------A   00220 PRINT "FOR INSTRUCTIONS, TYPE '1', ELSE TYPE '0'";
    0x5b92d3366610 ---------A   00230 INPUT E
    0x5b92d33665b0 ---------A   00240 IF E=0 THEN 360
    0x5b92d3366b60 ---------A   00250 PRINT
    0x5b92d3369100 ---------A   00260 PRINT "PLEASE TAKE A PIECE OF PAPER AND WRITE DOWN"
    0x5b92d33675e0 ---------A   00270 PRINT "THE DIGITS '0', '1', OR '2' THIRTY TIMES AT RANDOM."
    0x5b92d3367770 ---------A   00280 PRINT "ARRANGE THEM IN THREE LINES OF TEN DIGITS EACH."
    0x5b92d336e8b0 ---------A   00290 PRINT "I WILL ASK FOR THEN TEN AT A TIME."
    0x5b92d336ea50 ---------A   00300 PRINT "I WILL ALWAYS GUESS THEM FIRST AND THEN LOOK AT YOUR"
    0x5b92d336ebf0 ---------A   00310 PRINT "NEXT NUMBER TO SEE IF I WAS RIGHT. BY PURE LUCK,"
    0x5b92d336ed50 ---------A   00320 PRINT "I OUGHT TO BE RIGHT TEN TIMES. BUT I HOPE TO DO BETTER"
    0x5b92d336ee60 ---------A   00330 PRINT "THAN THAT *****"
    0x5b92d336ef00 ---------A   00340 PRINT:PRINT
    0x5b92d336f370 ---------A T 00360 READ A,B,C
    0x5b92d336f630 ---------A   00370 DATA 0,1,3
    0x5b92d3370030 ---------A   00380 DIM M(26,2),K(2,2),L(8,2)
    0x5b92d3370d20 ---------A T 00400 FOR I=0 TO 26: FOR J=0 TO 2: M(I,J)=1: NEXT J: NEXT I
    0x5b92d33718e0 ---------A   00410 FOR I=0 TO 2: FOR J=0 TO 2: K(I,J)=9: NEXT J: NEXT I
    0x5b92d33724a0 ---------A   00420 FOR I=0 TO 8: FOR J=0 TO 2: L(I,J)=3: NEXT J: NEXT I
    0x5b92d3372f00 ---------A   00450 L(0,0)=2: L(4,1)=2: L(8,2)=2
    0x5b92d3373730 ---------A   00480 Z=26: Z1=8: Z2=2
    0x5b92d3373a00 ---------A   00510 X=0
    0x5b92d3373d90 ---------A   00520 FOR T=1 TO 3
    0x5b92d3373df0 ---------A T 00530 PRINT
    0x5b92d3373f90 ---------A   00540 PRINT "TEN NUMBERS, PLEASE";
    0x5b92d3375100 ---------A   00550 INPUT N(1),N(2),N(3),N(4),N(5),N(6),N(7),N(8),N(9),N(10)
    0x5b92d33753e0 ---------A   00560 FOR I=1 TO 10
    0x5b92d33758a0 ---------A   00570 W=N(I)-1
    0x5b92d3375c10 ---------A   00580 IF W=SGN(W) THEN 620
    0x5b92d3375fa0 ---------A   00590 PRINT "ONLY USE THE DIGITS '0', '1', OR '2'."
    0x5b92d3376140 ---------A   00600 PRINT "LET'S TRY AGAIN.":GOTO 530
    0x5b92d3376260 ---------A T 00620 NEXT I
    0x5b92d3376790 ---------A   00630 PRINT: PRINT "MY GUESS","YOUR NO.","RESULT","NO. RIGHT":PRINT
    0x5b92d3376b20 ---------A   00660 FOR U=1 TO 10
    0x5b92d33770f0 ---------A   00670 N=N(U): S=0
    0x5b92d33773d0 ---------A   00690 FOR J=0 TO 2
    0x5b92d33781b0 ---------A   00700 S1=A*K(Z2,J)+B*L(Z1,J)+C*M(Z,J)
    0x5b92d3378420 ---------A   00710 IF S>S1 THEN 760
    0x5b92d33786b0 ---------A   00720 IF S<S1 THEN 740
    0x5b92d33789d0 ---------A   00730 IF RND(1)<.5 THEN 760
    0x5b92d3378ee0 ---------A T 00740 S=S1: G=J
    0x5b92d3379010 ---------A T 00760 NEXT J
    0x5b92d3379580 ---------A   00770 PRINT "  ";G,"   ";N(U),
    0x5b92d33798d0 ---------A   00780 IF G=N(U) THEN 810
    0x5b92d3379b30 ---------A   00790 PRINT " WRONG",X
    0x5b92d3379ba0 ---------A   00800 GOTO 880
    0x5b92d3379ec0 ---------A T 00810 X=X+1
    0x5b92d337a110 ---------A   00820 PRINT " RIGHT",X
    0x5b92d337a7c0 ---------A   00830 M(Z,N)=M(Z,N)+1
    0x5b92d337ae70 ---------A   00840 L(Z1,N)=L(Z1,N)+1
    0x5b92d337b520 ---------A   00850 K(Z2,N)=K(Z2,N)+1
    0x5b92d337bb50 ---------A   00860 Z=Z-INT(Z/9)*9
    0x5b92d337c080 ---------A   00870 Z=3*Z+N(U)
    0x5b92d337c6b0 ---------A T 00880 Z1=Z-INT(Z/9)*9
    0x5b92d337c9c0 ---------A   00890 Z2=N(U)
    0x5b92d337caf0 ---------A   00900 NEXT U
    0x5b92d337cc30 ---------A   00910 NEXT T
    0x5b92d337ccb0 ---------A   00920 PRINT
    0x5b92d337cf00 ---------A   00930 IF X>10 THEN 980
    0x5b92d337d180 ---------A   00940 IF X<10 THEN 1010
    0x5b92d337d310 ---------A   00950 PRINT "I GUESSED EXACTLY 1/3 OF YOUR NUMBERS."
    0x5b92d337d870 ---------A   00960 PRINT "IT'S A TIE GAME."
    0x5b92d337d900 ---------A   00970 GOTO 1030
    0x5b92d337da90 ---------A T 00980 PRINT "I GUESSED MORE THAN 1/3 OF YOUR NUMBERS."
    0x5b92d337e280 ---------A   00990 PRINT "I WIN.": FOR Q=1 TO 10: PRINT CHR$(7);: NEXT Q
    0x5b92d337e320 ---------A   01000 GOTO 1030
    0x5b92d337e4a0 ---------A T 01010 PRINT "I GUESSED LESS THAN 1/3 OF YOUR NUMBERS."
    0x5b92d337e600 ---------A   01020 PRINT "YOU BEAT ME.  CONGRATULATIONS *****"
    0x5b92d337e6a0 ---------A T 01030 PRINT
    0x5b92d337e830 ---------A   01040 PRINT "DO YOU WANT TO TRY AGAIN (1 FOR YES, 0 FOR NO)";
    0x5b92d337e980 ---------A   01060 INPUT X
    0x5b92d337ebf0 ---------A   01070 IF X=1 THEN 400
    0x5b92d337eda0 ---------A   01080 PRINT:PRINT "THANKS FOR THE GAME."
    0x5b92d337edf0 ---------A   01090 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00360      00240T
     00400      01070T
     00530      00600T
     00620      00580T
     00740      00720T
     00760      00710T, 00730T
     00810      00780T
     00880      00800T
     00980      00930T
     01010      00940T
     01030      00970T, 01000T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5b92d3367ac0 (00010)   0x000000000000 (00000)   0x5b92d337edf0 (01090)   0x5b92d337edf0 (01090)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01780 - 10000    8230 

 */



/*
 *  Symbol Table Listing for 'basic/digits.bas'
 *
    A                        Float       
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Float       
    C                        Float       
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    E                        Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Float       
    HEX$            Function String          args=1, int    
    I                        Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Float       
    K               Array    Float           {0,1} {0,1} 
    L               Array    Float           {0,7} {0,1} 
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M               Array    Float           {0,25} {0,1} 
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N               Array    Float           {0,9} 
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Float       
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Float       
    S1                       Float       
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Float       
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U                        Float       
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Float       
    X                        Float       
    Z                        Float       
    Z1                       Float       
    Z2                       Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/digits.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b92d3367ac0 ---------A   01000 PRINT TAB(33);"DIGITS"
    0x5b92d3368e70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b92d3368ff0 ---------A   01020 PRINT:PRINT:PRINT
    0x5b92d3366920 ---------A   01030 PRINT "THIS IS A GAME OF GUESSING."
    0x5b92d33689e0 ---------A   01040 PRINT "FOR INSTRUCTIONS, TYPE '1', ELSE TYPE '0'";
    0x5b92d3366610 ---------A   01050 INPUT E
    0x5b92d33665b0 ---------A   01060 IF E=0 THEN 1170
    0x5b92d3366b60 ---------A   01070 PRINT
    0x5b92d3369100 ---------A   01080 PRINT "PLEASE TAKE A PIECE OF PAPER AND WRITE DOWN"
    0x5b92d33675e0 ---------A   01090 PRINT "THE DIGITS '0', '1', OR '2' THIRTY TIMES AT RANDOM."
    0x5b92d3367770 ---------A   01100 PRINT "ARRANGE THEM IN THREE LINES OF TEN DIGITS EACH."
    0x5b92d336e8b0 ---------A   01110 PRINT "I WILL ASK FOR THEN TEN AT A TIME."
    0x5b92d336ea50 ---------A   01120 PRINT "I WILL ALWAYS GUESS THEM FIRST AND THEN LOOK AT YOUR"
    0x5b92d336ebf0 ---------A   01130 PRINT "NEXT NUMBER TO SEE IF I WAS RIGHT. BY PURE LUCK,"
    0x5b92d336ed50 ---------A   01140 PRINT "I OUGHT TO BE RIGHT TEN TIMES. BUT I HOPE TO DO BETTER"
    0x5b92d336ee60 ---------A   01150 PRINT "THAN THAT *****"
    0x5b92d336ef00 ---------A   01160 PRINT:PRINT
    0x5b92d336f370 ---------A T 01170 READ A,B,C
    0x5b92d336f630 ---------A   01180 DATA 0,1,3
    0x5b92d3370030 ---------A   01190 DIM M(26,2),K(2,2),L(8,2)
    0x5b92d3370d20 ---------A T 01200 FOR I=0 TO 26: FOR J=0 TO 2: M(I,J)=1: NEXT J: NEXT I
    0x5b92d33718e0 ---------A   01210 FOR I=0 TO 2: FOR J=0 TO 2: K(I,J)=9: NEXT J: NEXT I
    0x5b92d33724a0 ---------A   01220 FOR I=0 TO 8: FOR J=0 TO 2: L(I,J)=3: NEXT J: NEXT I
    0x5b92d3372f00 ---------A   01230 L(0,0)=2: L(4,1)=2: L(8,2)=2
    0x5b92d3373730 ---------A   01240 Z=26: Z1=8: Z2=2
    0x5b92d3373a00 ---------A   01250 X=0
    0x5b92d3373d90 ---------A   01260 FOR T=1 TO 3
    0x5b92d3373df0 ---------A T 01270 PRINT
    0x5b92d3373f90 ---------A   01280 PRINT "TEN NUMBERS, PLEASE";
    0x5b92d3375100 ---------A   01290 INPUT N(1),N(2),N(3),N(4),N(5),N(6),N(7),N(8),N(9),N(10)
    0x5b92d33753e0 ---------A   01300 FOR I=1 TO 10
    0x5b92d33758a0 ---------A   01310 W=N(I)-1
    0x5b92d3375c10 ---------A   01320 IF W=SGN(W) THEN 1350
    0x5b92d3375fa0 ---------A   01330 PRINT "ONLY USE THE DIGITS '0', '1', OR '2'."
    0x5b92d3376140 ---------A   01340 PRINT "LET'S TRY AGAIN.":GOTO 1270
    0x5b92d3376260 ---------A T 01350 NEXT I
    0x5b92d3376790 ---------A   01360 PRINT: PRINT "MY GUESS","YOUR NO.","RESULT","NO. RIGHT":PRINT
    0x5b92d3376b20 ---------A   01370 FOR U=1 TO 10
    0x5b92d33770f0 ---------A   01380 N=N(U): S=0
    0x5b92d33773d0 ---------A   01390 FOR J=0 TO 2
    0x5b92d33781b0 ---------A   01400 S1=A*K(Z2,J)+B*L(Z1,J)+C*M(Z,J)
    0x5b92d3378420 ---------A   01410 IF S>S1 THEN 1450
    0x5b92d33786b0 ---------A   01420 IF S<S1 THEN 1440
    0x5b92d33789d0 ---------A   01430 IF RND(1)<.5 THEN 1450
    0x5b92d3378ee0 ---------A T 01440 S=S1: G=J
    0x5b92d3379010 ---------A T 01450 NEXT J
    0x5b92d3379580 ---------A   01460 PRINT "  ";G,"   ";N(U),
    0x5b92d33798d0 ---------A   01470 IF G=N(U) THEN 1500
    0x5b92d3379b30 ---------A   01480 PRINT " WRONG",X
    0x5b92d3379ba0 ---------A   01490 GOTO 1570
    0x5b92d3379ec0 ---------A T 01500 X=X+1
    0x5b92d337a110 ---------A   01510 PRINT " RIGHT",X
    0x5b92d337a7c0 ---------A   01520 M(Z,N)=M(Z,N)+1
    0x5b92d337ae70 ---------A   01530 L(Z1,N)=L(Z1,N)+1
    0x5b92d337b520 ---------A   01540 K(Z2,N)=K(Z2,N)+1
    0x5b92d337bb50 ---------A   01550 Z=Z-INT(Z/9)*9
    0x5b92d337c080 ---------A   01560 Z=3*Z+N(U)
    0x5b92d337c6b0 ---------A T 01570 Z1=Z-INT(Z/9)*9
    0x5b92d337c9c0 ---------A   01580 Z2=N(U)
    0x5b92d337caf0 ---------A   01590 NEXT U
    0x5b92d337cc30 ---------A   01600 NEXT T
    0x5b92d337ccb0 ---------A   01610 PRINT
    0x5b92d337cf00 ---------A   01620 IF X>10 THEN 1670
    0x5b92d337d180 ---------A   01630 IF X<10 THEN 1700
    0x5b92d337d310 ---------A   01640 PRINT "I GUESSED EXACTLY 1/3 OF YOUR NUMBERS."
    0x5b92d337d870 ---------A   01650 PRINT "IT'S A TIE GAME."
    0x5b92d337d900 ---------A   01660 GOTO 1720
    0x5b92d337da90 ---------A T 01670 PRINT "I GUESSED MORE THAN 1/3 OF YOUR NUMBERS."
    0x5b92d337e280 ---------A   01680 PRINT "I WIN.": FOR Q=1 TO 10: PRINT CHR$(7);: NEXT Q
    0x5b92d337e320 ---------A   01690 GOTO 1720
    0x5b92d337e4a0 ---------A T 01700 PRINT "I GUESSED LESS THAN 1/3 OF YOUR NUMBERS."
    0x5b92d337e600 ---------A   01710 PRINT "YOU BEAT ME.  CONGRATULATIONS *****"
    0x5b92d337e6a0 ---------A T 01720 PRINT
    0x5b92d337e830 ---------A   01730 PRINT "DO YOU WANT TO TRY AGAIN (1 FOR YES, 0 FOR NO)";
    0x5b92d337e980 ---------A   01740 INPUT X
    0x5b92d337ebf0 ---------A   01750 IF X=1 THEN 1200
    0x5b92d337eda0 ---------A   01760 PRINT:PRINT "THANKS FOR THE GAME."
    0x5b92d337edf0 ---------A   01770 END
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
char* data_01180s[]={"0","1","3"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1180,  3,data_01180s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
float  A_flt;                                     // Basic: A 
float  B_flt;                                     // Basic: B 
float  C_flt;                                     // Basic: C 
float  E_flt;                                     // Basic: E 
float  G_flt;                                     // Basic: G 
float  I_flt;                                     // Basic: I 
float  J_flt;                                     // Basic: J 
float  K_flt_arr[2][2];                           // Basic: K 
float  L_flt_arr[8][2];                           // Basic: L 
float  M_flt_arr[26][2];                          // Basic: M 
float  N_flt_arr[10];                             // Basic: N 
float  Q_flt;                                     // Basic: Q 
float  S_flt;                                     // Basic: S 
float  S1_flt;                                    // Basic: S1 
float  T_flt;                                     // Basic: T 
float  U_flt;                                     // Basic: U 
float  W_flt;                                     // Basic: W 
float  X_flt;                                     // Basic: X 
float  Z_flt;                                     // Basic: Z 
float  Z1_flt;                                    // Basic: Z1 
float  Z2_flt;                                    // Basic: Z2 
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
