/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/trap.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f2fbb50db80 ---------A   00001 PRINT TAB(34);"TRAP"
    0x5f2fbb50eed0 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5f2fbb50f050 ---------A   00003 PRINT:PRINT:PRINT
    0x5f2fbb4fd2b0 ---------A   00010 G=6
    0x5f2fbb50e1f0 ---------A   00020 N=100
    0x5f2fbb50ceb0 ---------A   00030 REM-TRAP
    0x5f2fbb50d480 ---------A   00040 REM-STEVE ULLMAN, 8-1-72
    0x5f2fbb50e6c0 ---------A   00050 PRINT "INSTRUCTIONS";
    0x5f2fbb50c6d0 ---------A   00060 INPUT Z$
    0x5f2fbb50c670 ---------A   00070 IF LEFT$(Z$,1)<>"Y" THEN 180
    0x5f2fbb50ce40 ---------A   00080 PRINT "I AM THINKING OF A NUMBER BETWEEN 1 AND";N
    0x5f2fbb514bc0 ---------A   00090 PRINT "TRY TO GUESS MY NUMBER. ON EACH GUESS,"
    0x5f2fbb514d50 ---------A   00100 PRINT "YOU ARE TO ENTER 2 NUMBERS, TRYING TO TRAP"
    0x5f2fbb514ef0 ---------A   00110 PRINT "MY NUMBER BETWEEN THE TWO NUMBERS. I WILL"
    0x5f2fbb515090 ---------A   00120 PRINT "TELL YOU IF YOU HAVE TRAPPED MY NUMBER, IF MY"
    0x5f2fbb515220 ---------A   00130 PRINT "NUMBER IS LARGER THAN YOUR TWO NUMBERS, OR IF"
    0x5f2fbb5153c0 ---------A   00140 PRINT "MY NUMBER IS SMALLER THAN YOUR TWO NUMBERS."
    0x5f2fbb515550 ---------A   00150 PRINT "IF YOU WANT TO GUESS ONE SINGLE NUMBER, TYPE"
    0x5f2fbb5156e0 ---------A   00160 PRINT "YOUR GUESS FOR BOTH YOUR TRAP NUMBERS."
    0x5f2fbb515a10 ---------A   00170 PRINT "YOU GET";G;"GUESSES TO GET MY NUMBER."
    0x5f2fbb5160c0 ---------A T 00180 X=INT(N*RND(1))+1
    0x5f2fbb516470 ---------A   00190 FOR Q=1 TO G
    0x5f2fbb5164f0 ---------A   00200 PRINT 
    0x5f2fbb516760 ---------A   00210 PRINT "GUESS #";Q;
    0x5f2fbb516af0 ---------A   00220 INPUT A,B
    0x5f2fbb516fb0 ---------A   00230 IF A=B AND X=A THEN 400
    0x5f2fbb517230 ---------A   00240 IF A <= B THEN 260
    0x5f2fbb517290 ---------A   00250 GOSUB 360
    0x5f2fbb517730 ---------A T 00260 IF A <= X AND X <= B THEN 320
    0x5f2fbb5179d0 ---------A   00270 IF X<A THEN 300
    0x5f2fbb517b50 ---------A   00280 PRINT "MY NUMBER IS LARGER THAN YOUR TRAP NUMBERS."
    0x5f2fbb517bf0 ---------A   00290 GOTO 330
    0x5f2fbb517d50 ---------A T 00300 PRINT "MY NUMBER IS SMALLER THAN YOUR TRAP NUMBERS."
    0x5f2fbb517fe0 ---------A   00310 GOTO 330
    0x5f2fbb518130 ---------A T 00320 PRINT "YOU HAVE TRAPPED MY NUMBER."
    0x5f2fbb518260 ---------A T 00330 NEXT Q
    0x5f2fbb5186f0 ---------A   00340 PRINT "SORRY, THAT'S";G;"GUESSES. THE NUMBER WAS";X
    0x5f2fbb518760 ---------A   00345 PRINT
    0x5f2fbb5187d0 ---------A   00350 GOTO 410
    0x5f2fbb518ab0 ---------B G 00360 R=A
    0x5f2fbb518ce0 ---------B   00370 A=B
    0x5f2fbb518f10 ---------B   00380 B=R
    0x5f2fbb518f60 ---------B   00390 RETURN 
    0x5f2fbb5190d0 ---------A T 00400 PRINT "YOU GOT IT!!!"
    0x5f2fbb519140 ---------A T 00410 PRINT 
    0x5f2fbb519290 ---------A   00420 PRINT "TRY AGAIN."
    0x5f2fbb519300 ---------A   00430 PRINT
    0x5f2fbb519370 ---------A   00440 GOTO 180
    0x5f2fbb5193b0 ---------A   00450 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00180      00070T, 00440T
     00260      00240T
     00300      00270T
     00320      00260T
     00330      00290T, 00310T
     00360      00250G
     00400      00230T
     00410      00350T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5f2fbb50db80 (00001)   0x5f2fbb50db80 (00001)   0x5f2fbb5193b0 (00450)   0x5f2fbb5193b0 (00450)   
   B) 0x5f2fbb518ab0 (00360)   0x5f2fbb518ab0 (00360)   0x5f2fbb518f60 (00390)   0x5f2fbb518f60 (00390)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01500 - 10000    8510 

 */



/*
 *  Symbol Table Listing for 'basic/trap.bas'
 *
    A                        Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
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
    N                        Integer     
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
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
    Z$                       String      

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/trap.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f2fbb50db80 ---------A   01000 PRINT TAB(34);"TRAP"
    0x5f2fbb50eed0 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5f2fbb50f050 ---------A   01020 PRINT:PRINT:PRINT
    0x5f2fbb4fd2b0 ---------A   01030 G=6
    0x5f2fbb50e1f0 ---------A   01040 N=100
    0x5f2fbb50ceb0 ---------A   01050 REM-TRAP
    0x5f2fbb50d480 ---------A   01060 REM-STEVE ULLMAN, 8-1-72
    0x5f2fbb50e6c0 ---------A   01070 PRINT "INSTRUCTIONS";
    0x5f2fbb50c6d0 ---------A   01080 INPUT Z$
    0x5f2fbb50c670 ---------A   01090 IF LEFT$(Z$,1)<>"Y" THEN 1200
    0x5f2fbb50ce40 ---------A   01100 PRINT "I AM THINKING OF A NUMBER BETWEEN 1 AND";N
    0x5f2fbb514bc0 ---------A   01110 PRINT "TRY TO GUESS MY NUMBER. ON EACH GUESS,"
    0x5f2fbb514d50 ---------A   01120 PRINT "YOU ARE TO ENTER 2 NUMBERS, TRYING TO TRAP"
    0x5f2fbb514ef0 ---------A   01130 PRINT "MY NUMBER BETWEEN THE TWO NUMBERS. I WILL"
    0x5f2fbb515090 ---------A   01140 PRINT "TELL YOU IF YOU HAVE TRAPPED MY NUMBER, IF MY"
    0x5f2fbb515220 ---------A   01150 PRINT "NUMBER IS LARGER THAN YOUR TWO NUMBERS, OR IF"
    0x5f2fbb5153c0 ---------A   01160 PRINT "MY NUMBER IS SMALLER THAN YOUR TWO NUMBERS."
    0x5f2fbb515550 ---------A   01170 PRINT "IF YOU WANT TO GUESS ONE SINGLE NUMBER, TYPE"
    0x5f2fbb5156e0 ---------A   01180 PRINT "YOUR GUESS FOR BOTH YOUR TRAP NUMBERS."
    0x5f2fbb515a10 ---------A   01190 PRINT "YOU GET";G;"GUESSES TO GET MY NUMBER."
    0x5f2fbb5160c0 ---------A T 01200 X=INT(N*RND(1))+1
    0x5f2fbb516470 ---------A   01210 FOR Q=1 TO G
    0x5f2fbb5164f0 ---------A   01220 PRINT 
    0x5f2fbb516760 ---------A   01230 PRINT "GUESS #";Q;
    0x5f2fbb516af0 ---------A   01240 INPUT A,B
    0x5f2fbb516fb0 ---------A   01250 IF A=B AND X=A THEN 1390
    0x5f2fbb517230 ---------A   01260 IF A <= B THEN 1280
    0x5f2fbb517290 ---------A   01270 GOSUB 1450
    0x5f2fbb517730 ---------A T 01280 IF A <= X AND X <= B THEN 1340
    0x5f2fbb5179d0 ---------A   01290 IF X<A THEN 1320
    0x5f2fbb517b50 ---------A   01300 PRINT "MY NUMBER IS LARGER THAN YOUR TRAP NUMBERS."
    0x5f2fbb517bf0 ---------A   01310 GOTO 1350
    0x5f2fbb517d50 ---------A T 01320 PRINT "MY NUMBER IS SMALLER THAN YOUR TRAP NUMBERS."
    0x5f2fbb517fe0 ---------A   01330 GOTO 1350
    0x5f2fbb518130 ---------A T 01340 PRINT "YOU HAVE TRAPPED MY NUMBER."
    0x5f2fbb518260 ---------A T 01350 NEXT Q
    0x5f2fbb5186f0 ---------A   01360 PRINT "SORRY, THAT'S";G;"GUESSES. THE NUMBER WAS";X
    0x5f2fbb518760 ---------A   01370 PRINT
    0x5f2fbb5187d0 ---------A   01380 GOTO 1400
    0x5f2fbb5190d0 ---------A T 01390 PRINT "YOU GOT IT!!!"
    0x5f2fbb519140 ---------A T 01400 PRINT 
    0x5f2fbb519290 ---------A   01410 PRINT "TRY AGAIN."
    0x5f2fbb519300 ---------A   01420 PRINT
    0x5f2fbb519370 ---------A   01430 GOTO 1200
    0x5f2fbb5193b0 ---------A   01440 END
    0x5f2fbb518ab0 ---------B G 01450 R=A
    0x5f2fbb518ce0 ---------B   01460 A=B
    0x5f2fbb518f10 ---------B   01470 B=R
    0x5f2fbb51b720 ---------B   01480 GOTO 01490
    0x5f2fbb51b760 ---------B T 01490 RETURN
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
int    G_int;                                     // Basic: G 
int    N_int;                                     // Basic: N 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    X_int;                                     // Basic: X 
char*  Z_str;                                     // Basic: Z$ 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01450();

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

void Routine_01450(){
    // 01450 R=A
    R_int = A_int;
    // 01460 A=B
    A_int = B_int;
    // 01470 B=R
    B_int = R_int;
    // 01480 GOTO 01490
    goto Lbl_01490;

  Lbl_01490:
    // 01490 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
