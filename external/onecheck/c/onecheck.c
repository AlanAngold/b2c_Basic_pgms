/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/onecheck.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x626f9297eb80 ---------A   00002 PRINT TAB(30);"ONE CHECK"
    0x626f9297ff30 ---------A   00004 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x626f929800b0 ---------A   00006 PRINT: PRINT: PRINT
    0x626f9297da20 ---------A   00008 DIM A(64)
    0x626f9297d830 ---------A   00010 PRINT "SOLITAIRE CHECKER PUZZLE BY DAVID AHL"
    0x626f9297de40 ---------A   00015 PRINT
    0x626f9297f6f0 ---------A   00020 PRINT "48 CHECKERS ARE PLACED ON THE 2 OUTSIDE SPACES OF A"
    0x626f92980100 ---------A   00025 PRINT "STANDARD 64-SQUARE CHECKERBOARD.  THE OBJECT IS TO"
    0x626f9297e670 ---------A   00030 PRINT "REMOVE AS MANY CHECKERS AS POSSIBLE BY DIAGONAL JUMPS"
    0x626f9297e780 ---------A   00035 PRINT "(AS IN STANDARD CHECKERS).  USE THE NUMBERED BOARD TO"
    0x626f929858f0 ---------A   00040 PRINT "INDICATE THE SQUARE YOU WISH TO JUMP FROM AND TO.  ON"
    0x626f92985a90 ---------A   00045 PRINT "THE BOARD PRINTED OUT ON EACH TURN '1' INDICATES A"
    0x626f92985c30 ---------A   00050 PRINT "CHECKER AND '0' AN EMPTY SQUARE.  WHEN YOU HAVE NO"
    0x626f92985d80 ---------A   00055 PRINT "POSSIBLE JUMPS REMAINING, INPUT A '0' IN RESPONSE TO"
    0x626f92985e90 ---------A   00060 PRINT "QUESTION 'JUMP FROM ?'"
    0x626f92985ee0 ---------A   00062 PRINT
    0x626f92985ff0 ---------A   00063 PRINT "HERE IS THE NUMERICAL BOARD:"
    0x626f92986040 ---------A   00066 PRINT
    0x626f9297d6d0 ---------A T 00070 FOR J=1 TO 57 STEP 8
    0x626f92987540 ---------A   00074 PRINT J;TAB(4);J+1;TAB(8);J+2;TAB(12);J+3;TAB(16);J+4;TAB(20);J+5;
    0x626f92987c10 ---------A   00075 PRINT TAB(24);J+6;TAB(28);J+7
    0x626f92987d40 ---------A   00076 NEXT J
    0x626f92987df0 ---------A   00077 PRINT
    0x626f92987f60 ---------A   00078 PRINT "AND HERE IS THE OPENING POSITION OF THE CHECKERS."
    0x626f92987fd0 ---------A   00079 PRINT
    0x626f9297d670 ---------A   00080 FOR J=1 TO 64
    0x626f92988540 ---------A   00082 A(J)=1
    0x626f92988670 ---------A   00084 NEXT J
    0x626f929889f0 ---------A   00086 FOR J=19 TO 43 STEP 8
    0x626f92988ed0 ---------A   00088 FOR I=J TO J+3
    0x626f929891d0 ---------A   00090 A(I)=0
    0x626f92989300 ---------A   00092 NEXT I
    0x626f92989440 ---------A   00094 NEXT J
    0x626f92989930 ---------A   00096 M=0
    0x626f929899a0 ---------A   00098 GOTO 340
    0x626f92989bc0 ---------A T 00100 INPUT "JUMP FROM";F
    0x626f92989e20 ---------A   00105 IF F=0 THEN 500
    0x626f9298a060 ---------A   00110 INPUT "TO";T
    0x626f9298a0c0 ---------A   00112 PRINT
    0x626f9298a140 ---------A   00118 REM *** CHECK LEGALITY OF MOVE
    0x626f9298a760 ---------A   00120 F1=INT((F-1)/8)
    0x626f9298ac70 ---------A   00130 F2=F-8*F1
    0x626f9298b280 ---------A   00140 T1=INT((T-1)/8)
    0x626f9298b790 ---------A   00150 T2=T-8*T1
    0x626f9298b9e0 ---------A   00160 IF F1>7 THEN 230
    0x626f9298bc40 ---------A   00170 IF T1>7 THEN 230
    0x626f9298bea0 ---------A   00180 IF F2>8 THEN 230
    0x626f9298c110 ---------A   00190 IF T2>8 THEN 230
    0x626f9298c580 ---------A   00200 IF ABS(F1-T1)<>2 THEN 230
    0x626f9298c9f0 ---------A   00210 IF ABS(F2-T2)<>2 THEN 230
    0x626f9298cf90 ---------A   00212 IF A((T+F)/2)=0 THEN 230
    0x626f9298d2d0 ---------A   00215 IF A(F)=0 THEN 230
    0x626f9298d610 ---------A   00220 IF A(T)=1 THEN 230
    0x626f9298d6a0 ---------A   00225 GOTO 250
    0x626f9298d7f0 ---------A T 00230 PRINT "ILLEGAL MOVE.  TRY AGAIN..."
    0x626f9298d870 ---------A   00240 GOTO 100
    0x626f9298d8d0 ---------A   00245 REM *** UPDATE BOARD
    0x626f9298dbd0 ---------A T 00250 A(T)=1
    0x626f9298dec0 ---------A   00260 A(F)=0
    0x626f9298e410 ---------A   00270 A((T+F)/2)=0
    0x626f9298e740 ---------A   00290 M=M+1
    0x626f9298e7b0 ---------A   00310 REM *** PRINT BOARD
    0x626f9298eb60 ---------A T 00340 FOR J=1 TO 57 STEP 8
    0x626f9298ef80 ---------A   00350 FOR I=J TO J+7
    0x626f9298f1e0 ---------A   00360 PRINT A(I);
    0x626f9298f720 ---------A   00370 NEXT I
    0x626f9298f7a0 ---------A   00380 PRINT
    0x626f9298f8d0 ---------A   00390 NEXT J
    0x626f9298f950 ---------A   00400 PRINT
    0x626f9298f9d0 ---------A   00410 GOTO 100
    0x626f9298fa40 ---------A   00490 REM *** END GAME SUMMARY
    0x626f9298fd20 ---------A T 00500 S=0
    0x626f9298fff0 ---------A   00510 FOR I=1 TO 64
    0x626f92990430 ---------A   00520 S=S+A(I)
    0x626f92990560 ---------A   00530 NEXT I
    0x626f92990b40 ---------A   00540 PRINT:PRINT "YOU MADE";M;"JUMPS AND HAD";S;"PIECES"
    0x626f92990ca0 ---------A   00550 PRINT "REMAINING ON THE BOARD."
    0x626f92990d20 ---------A   00560 PRINT
    0x626f92990f50 ---------A T 00562 INPUT "TRY AGAIN";A$
    0x626f929911d0 ---------A   00570 IF A$="YES" THEN 70
    0x626f92991470 ---------A   00575 IF A$="NO" THEN 600
    0x626f929915e0 ---------A   00580 PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    0x626f92991650 ---------A   00590 GOTO 562
    0x626f929916c0 ---------A T 00600 PRINT
    0x626f92991820 ---------A   00610 PRINT "O.K.  HOPE YOU HAD FUN!!"
    0x626f92991870 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00070      00570T
     00100      00240T, 00410T
     00230      00160T, 00170T, 00180T, 00190T, 00200T, 00210T, 00212T, 00215T, 
                00220T
     00250      00225T
     00340      00098T
     00500      00105T
     00562      00590T
     00600      00575T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x626f9297eb80 (00002)   0x626f9297eb80 (00002)   0x626f92991870 (00999)   0x626f92991870 (00999)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01860 - 10000    8150 

 */



/*
 *  Symbol Table Listing for 'basic/onecheck.bas'
 *
    A               Array    Integer         {0,63} 
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
    F                        Integer     
    F1                       Integer     
    F2                       Integer     
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
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Integer     
    T1                       Integer     
    T2                       Integer     
    TAB             Function Unknown (0)    args=1, int    
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
 *  Listing of basic/onecheck.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x626f9297eb80 ---------A   01000 PRINT TAB(30);"ONE CHECK"
    0x626f9297ff30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x626f929800b0 ---------A   01020 PRINT: PRINT: PRINT
    0x626f9297da20 ---------A   01030 DIM A(64)
    0x626f9297d830 ---------A   01040 PRINT "SOLITAIRE CHECKER PUZZLE BY DAVID AHL"
    0x626f9297de40 ---------A   01050 PRINT
    0x626f9297f6f0 ---------A   01060 PRINT "48 CHECKERS ARE PLACED ON THE 2 OUTSIDE SPACES OF A"
    0x626f92980100 ---------A   01070 PRINT "STANDARD 64-SQUARE CHECKERBOARD.  THE OBJECT IS TO"
    0x626f9297e670 ---------A   01080 PRINT "REMOVE AS MANY CHECKERS AS POSSIBLE BY DIAGONAL JUMPS"
    0x626f9297e780 ---------A   01090 PRINT "(AS IN STANDARD CHECKERS).  USE THE NUMBERED BOARD TO"
    0x626f929858f0 ---------A   01100 PRINT "INDICATE THE SQUARE YOU WISH TO JUMP FROM AND TO.  ON"
    0x626f92985a90 ---------A   01110 PRINT "THE BOARD PRINTED OUT ON EACH TURN '1' INDICATES A"
    0x626f92985c30 ---------A   01120 PRINT "CHECKER AND '0' AN EMPTY SQUARE.  WHEN YOU HAVE NO"
    0x626f92985d80 ---------A   01130 PRINT "POSSIBLE JUMPS REMAINING, INPUT A '0' IN RESPONSE TO"
    0x626f92985e90 ---------A   01140 PRINT "QUESTION 'JUMP FROM ?'"
    0x626f92985ee0 ---------A   01150 PRINT
    0x626f92985ff0 ---------A   01160 PRINT "HERE IS THE NUMERICAL BOARD:"
    0x626f92986040 ---------A   01170 PRINT
    0x626f9297d6d0 ---------A T 01180 FOR J=1 TO 57 STEP 8
    0x626f92987540 ---------A   01190 PRINT J;TAB(4);J+1;TAB(8);J+2;TAB(12);J+3;TAB(16);J+4;TAB(20);J+5;
    0x626f92987c10 ---------A   01200 PRINT TAB(24);J+6;TAB(28);J+7
    0x626f92987d40 ---------A   01210 NEXT J
    0x626f92987df0 ---------A   01220 PRINT
    0x626f92987f60 ---------A   01230 PRINT "AND HERE IS THE OPENING POSITION OF THE CHECKERS."
    0x626f92987fd0 ---------A   01240 PRINT
    0x626f9297d670 ---------A   01250 FOR J=1 TO 64
    0x626f92988540 ---------A   01260 A(J)=1
    0x626f92988670 ---------A   01270 NEXT J
    0x626f929889f0 ---------A   01280 FOR J=19 TO 43 STEP 8
    0x626f92988ed0 ---------A   01290 FOR I=J TO J+3
    0x626f929891d0 ---------A   01300 A(I)=0
    0x626f92989300 ---------A   01310 NEXT I
    0x626f92989440 ---------A   01320 NEXT J
    0x626f92989930 ---------A   01330 M=0
    0x626f929899a0 ---------A   01340 GOTO 1620
    0x626f92989bc0 ---------A T 01350 INPUT "JUMP FROM";F
    0x626f92989e20 ---------A   01360 IF F=0 THEN 1710
    0x626f9298a060 ---------A   01370 INPUT "TO";T
    0x626f9298a0c0 ---------A   01380 PRINT
    0x626f9298a140 ---------A   01390 REM *** CHECK LEGALITY OF MOVE
    0x626f9298a760 ---------A   01400 F1=INT((F-1)/8)
    0x626f9298ac70 ---------A   01410 F2=F-8*F1
    0x626f9298b280 ---------A   01420 T1=INT((T-1)/8)
    0x626f9298b790 ---------A   01430 T2=T-8*T1
    0x626f9298b9e0 ---------A   01440 IF F1>7 THEN 1540
    0x626f9298bc40 ---------A   01450 IF T1>7 THEN 1540
    0x626f9298bea0 ---------A   01460 IF F2>8 THEN 1540
    0x626f9298c110 ---------A   01470 IF T2>8 THEN 1540
    0x626f9298c580 ---------A   01480 IF ABS(F1-T1)<>2 THEN 1540
    0x626f9298c9f0 ---------A   01490 IF ABS(F2-T2)<>2 THEN 1540
    0x626f9298cf90 ---------A   01500 IF A((T+F)/2)=0 THEN 1540
    0x626f9298d2d0 ---------A   01510 IF A(F)=0 THEN 1540
    0x626f9298d610 ---------A   01520 IF A(T)=1 THEN 1540
    0x626f9298d6a0 ---------A   01530 GOTO 1570
    0x626f9298d7f0 ---------A T 01540 PRINT "ILLEGAL MOVE.  TRY AGAIN..."
    0x626f9298d870 ---------A   01550 GOTO 1350
    0x626f9298d8d0 ---------A   01560 REM *** UPDATE BOARD
    0x626f9298dbd0 ---------A T 01570 A(T)=1
    0x626f9298dec0 ---------A   01580 A(F)=0
    0x626f9298e410 ---------A   01590 A((T+F)/2)=0
    0x626f9298e740 ---------A   01600 M=M+1
    0x626f9298e7b0 ---------A   01610 REM *** PRINT BOARD
    0x626f9298eb60 ---------A T 01620 FOR J=1 TO 57 STEP 8
    0x626f9298ef80 ---------A   01630 FOR I=J TO J+7
    0x626f9298f1e0 ---------A   01640 PRINT A(I);
    0x626f9298f720 ---------A   01650 NEXT I
    0x626f9298f7a0 ---------A   01660 PRINT
    0x626f9298f8d0 ---------A   01670 NEXT J
    0x626f9298f950 ---------A   01680 PRINT
    0x626f9298f9d0 ---------A   01690 GOTO 1350
    0x626f9298fa40 ---------A   01700 REM *** END GAME SUMMARY
    0x626f9298fd20 ---------A T 01710 S=0
    0x626f9298fff0 ---------A   01720 FOR I=1 TO 64
    0x626f92990430 ---------A   01730 S=S+A(I)
    0x626f92990560 ---------A   01740 NEXT I
    0x626f92990b40 ---------A   01750 PRINT:PRINT "YOU MADE";M;"JUMPS AND HAD";S;"PIECES"
    0x626f92990ca0 ---------A   01760 PRINT "REMAINING ON THE BOARD."
    0x626f92990d20 ---------A   01770 PRINT
    0x626f92990f50 ---------A T 01780 INPUT "TRY AGAIN";A$
    0x626f929911d0 ---------A   01790 IF A$="YES" THEN 1180
    0x626f92991470 ---------A   01800 IF A$="NO" THEN 1830
    0x626f929915e0 ---------A   01810 PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    0x626f92991650 ---------A   01820 GOTO 1780
    0x626f929916c0 ---------A T 01830 PRINT
    0x626f92991820 ---------A   01840 PRINT "O.K.  HOPE YOU HAD FUN!!"
    0x626f92991870 ---------A   01850 END
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
int    A_int_arr[64];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    F_int;                                     // Basic: F 
int    F1_int;                                    // Basic: F1 
int    F2_int;                                    // Basic: F2 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    M_int;                                     // Basic: M 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
int    T1_int;                                    // Basic: T1 
int    T2_int;                                    // Basic: T2 
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
