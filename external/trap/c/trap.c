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
    0x59075e5216d0 ---------A   00001  PRINT TAB(34);"TRAP"
    0x59075e521670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x59075e5122b0 ---------A   00003  PRINT:PRINT:PRINT
    0x59075e522b80 ---------A   00010  G=6
    0x59075e523ed0 ---------A   00020  N=100
    0x59075e523f90 ---------A   00030  REM-TRAP
    0x59075e524050 ---------A   00040  REM-STEVE ULLMAN, 8-1-72
    0x59075e522500 ---------A   00050  PRINT "INSTRUCTIONS";
    0x59075e524140 ---------A   00060  INPUT Z$
    0x59075e5298c0 ---------A   00070  IF LEFT$(Z$,1)<>"Y" THEN 180
    0x59075e529b20 ---------A   00080  PRINT "I AM THINKING OF A NUMBER BETWEEN 1 AND";N
    0x59075e529cc0 ---------A   00090  PRINT "TRY TO GUESS MY NUMBER. ON EACH GUESS,"
    0x59075e529e60 ---------A   00100  PRINT "YOU ARE TO ENTER 2 NUMBERS, TRYING TO TRAP"
    0x59075e529fc0 ---------A   00110  PRINT "MY NUMBER BETWEEN THE TWO NUMBERS. I WILL"
    0x59075e52a170 ---------A   00120  PRINT "TELL YOU IF YOU HAVE TRAPPED MY NUMBER, IF MY"
    0x59075e52a310 ---------A   00130  PRINT "NUMBER IS LARGER THAN YOUR TWO NUMBERS, OR IF"
    0x59075e52a4c0 ---------A   00140  PRINT "MY NUMBER IS SMALLER THAN YOUR TWO NUMBERS."
    0x59075e52a660 ---------A   00150  PRINT "IF YOU WANT TO GUESS ONE SINGLE NUMBER, TYPE"
    0x59075e52a800 ---------A   00160  PRINT "YOUR GUESS FOR BOTH YOUR TRAP NUMBERS."
    0x59075e52ab40 ---------A   00170  PRINT "YOU GET";G;"GUESSES TO GET MY NUMBER."
    0x59075e52b200 ---------A T 00180  X=INT(N*RND(1))+1
    0x59075e52b5b0 ---------A   00190  FOR Q=1 TO G
    0x59075e52b630 ---------A   00200  PRINT 
    0x59075e52b8b0 ---------A   00210  PRINT "GUESS #";Q;
    0x59075e52bc50 ---------A   00220  INPUT A,B
    0x59075e52c110 ---------A   00230  IF A=B AND X=A THEN 400
    0x59075e52c390 ---------A   00240  IF A <= B THEN 260
    0x59075e52c3f0 ---------A   00250  GOSUB 360
    0x59075e52c8a0 ---------A T 00260  IF A <= X AND X <= B THEN 320
    0x59075e52cb40 ---------A   00270  IF X<A THEN 300
    0x59075e52ccc0 ---------A   00280  PRINT "MY NUMBER IS LARGER THAN YOUR TRAP NUMBERS."
    0x59075e52cd70 ---------A   00290  GOTO 330
    0x59075e52cee0 ---------A T 00300  PRINT "MY NUMBER IS SMALLER THAN YOUR TRAP NUMBERS."
    0x59075e52d180 ---------A   00310  GOTO 330
    0x59075e52d2e0 ---------A T 00320  PRINT "YOU HAVE TRAPPED MY NUMBER."
    0x59075e52d420 ---------A T 00330  NEXT Q
    0x59075e52d8c0 ---------A   00340  PRINT "SORRY, THAT'S";G;"GUESSES. THE NUMBER WAS";X
    0x59075e52d940 ---------A   00345  PRINT
    0x59075e52d9c0 ---------A   00350  GOTO 410
    0x59075e52dcb0 ---------B G 00360  R=A
    0x59075e52dee0 ---------B   00370  A=B
    0x59075e52e110 ---------B   00380  B=R
    0x59075e52e160 ---------B   00390  RETURN 
    0x59075e52e2d0 ---------A T 00400  PRINT "YOU GOT IT!!!"
    0x59075e52e350 ---------A T 00410  PRINT 
    0x59075e52e4b0 ---------A   00420  PRINT "TRY AGAIN."
    0x59075e52e530 ---------A   00430  PRINT
    0x59075e52e5b0 ---------A   00440  GOTO 180
    0x59075e52e600 ---------A   00450  END
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
   A) 0x59075e5216d0 (00001)   0x59075e5216d0 (00001)   0x59075e52e600 (00450)   0x59075e52e600 (00450)   
   B) 0x59075e52dcb0 (00360)   0x59075e52dcb0 (00360)   0x59075e52e160 (00390)   0x59075e52e160 (00390)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/trap.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x59075e5216d0 ---------A   00001  PRINT TAB(34);"TRAP"
    0x59075e521670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x59075e5222d0 ----------   00003  PRINT
    0x59075e522910 ----------        a PRINT
    0x59075e5122b0 ---------A        b PRINT
    0x59075e522b80 ---------A   00010  G=6
    0x59075e523ed0 ---------A   00020  N=100
    0x59075e523f90 ---------A   00030  REM-TRAP
    0x59075e524050 ---------A   00040  REM-STEVE ULLMAN, 8-1-72
    0x59075e522500 ---------A   00050  PRINT "INSTRUCTIONS";
    0x59075e524140 ---------A   00060  INPUT Z$
    0x59075e5298c0 ---------A   00070  IF LEFT$(Z$,1)<>"Y" THEN 180
    0x59075e529b20 ---------A   00080  PRINT "I AM THINKING OF A NUMBER BETWEEN 1 AND";N
    0x59075e529cc0 ---------A   00090  PRINT "TRY TO GUESS MY NUMBER. ON EACH GUESS,"
    0x59075e529e60 ---------A   00100  PRINT "YOU ARE TO ENTER 2 NUMBERS, TRYING TO TRAP"
    0x59075e529fc0 ---------A   00110  PRINT "MY NUMBER BETWEEN THE TWO NUMBERS. I WILL"
    0x59075e52a170 ---------A   00120  PRINT "TELL YOU IF YOU HAVE TRAPPED MY NUMBER, IF MY"
    0x59075e52a310 ---------A   00130  PRINT "NUMBER IS LARGER THAN YOUR TWO NUMBERS, OR IF"
    0x59075e52a4c0 ---------A   00140  PRINT "MY NUMBER IS SMALLER THAN YOUR TWO NUMBERS."
    0x59075e52a660 ---------A   00150  PRINT "IF YOU WANT TO GUESS ONE SINGLE NUMBER, TYPE"
    0x59075e52a800 ---------A   00160  PRINT "YOUR GUESS FOR BOTH YOUR TRAP NUMBERS."
    0x59075e52ab40 ---------A   00170  PRINT "YOU GET";G;"GUESSES TO GET MY NUMBER."
    0x59075e52b200 ---------A T 00180  X=INT(N*RND(1))+1
    0x59075e52b5b0 ---------A   00190  FOR Q=1 TO G
    0x59075e52b630 ---------A   00200  PRINT 
    0x59075e52b8b0 ---------A   00210  PRINT "GUESS #";Q;
    0x59075e52bc50 ---------A   00220  INPUT A,B
    0x59075e52c110 ---------A   00230  IF A=B AND X=A THEN 400
    0x59075e52c390 ---------A   00240  IF A <= B THEN 260
    0x59075e52c3f0 ---------A   00250  GOSUB 360
    0x59075e52c8a0 ---------A T 00260  IF A <= X AND X <= B THEN 320
    0x59075e52cb40 ---------A   00270  IF X<A THEN 300
    0x59075e52ccc0 ---------A   00280  PRINT "MY NUMBER IS LARGER THAN YOUR TRAP NUMBERS."
    0x59075e52cd70 ---------A   00290  GOTO 330
    0x59075e52cee0 ---------A T 00300  PRINT "MY NUMBER IS SMALLER THAN YOUR TRAP NUMBERS."
    0x59075e52d180 ---------A   00310  GOTO 330
    0x59075e52d2e0 ---------A T 00320  PRINT "YOU HAVE TRAPPED MY NUMBER."
    0x59075e52d420 ---------A T 00330  NEXT Q
    0x59075e52d8c0 ---------A   00340  PRINT "SORRY, THAT'S";G;"GUESSES. THE NUMBER WAS";X
    0x59075e52d940 ---------A   00345  PRINT
    0x59075e52d9c0 ---------A   00350  GOTO 410
    0x59075e52dcb0 ---------B G 00360  R=A
    0x59075e52dee0 ---------B   00370  A=B
    0x59075e52e110 ---------B   00380  B=R
    0x59075e52e160 ---------B   00390  RETURN 
    0x59075e52e2d0 ---------A T 00400  PRINT "YOU GOT IT!!!"
    0x59075e52e350 ---------A T 00410  PRINT 
    0x59075e52e4b0 ---------A   00420  PRINT "TRY AGAIN."
    0x59075e52e530 ---------A   00430  PRINT
    0x59075e52e5b0 ---------A   00440  GOTO 180
    0x59075e52e600 ---------A   00450  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/trap.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x59075e5216d0 ---------A   01000  PRINT TAB(34);"TRAP"
    0x59075e521670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x59075e5222d0 ----------   01020  PRINT
    0x59075e522910 ----------   01030  PRINT
    0x59075e5122b0 ---------A   01040  PRINT
    0x59075e522b80 ---------A   01050  G=6
    0x59075e523ed0 ---------A   01060  N=100
    0x59075e523f90 ---------A   01070  REM-TRAP
    0x59075e524050 ---------A   01080  REM-STEVE ULLMAN, 8-1-72
    0x59075e522500 ---------A   01090  PRINT "INSTRUCTIONS";
    0x59075e524140 ---------A   01100  INPUT Z$
    0x59075e5298c0 ---------A   01110  IF LEFT$(Z$,1)<>"Y" THEN 1220
    0x59075e529b20 ---------A   01120  PRINT "I AM THINKING OF A NUMBER BETWEEN 1 AND";N
    0x59075e529cc0 ---------A   01130  PRINT "TRY TO GUESS MY NUMBER. ON EACH GUESS,"
    0x59075e529e60 ---------A   01140  PRINT "YOU ARE TO ENTER 2 NUMBERS, TRYING TO TRAP"
    0x59075e529fc0 ---------A   01150  PRINT "MY NUMBER BETWEEN THE TWO NUMBERS. I WILL"
    0x59075e52a170 ---------A   01160  PRINT "TELL YOU IF YOU HAVE TRAPPED MY NUMBER, IF MY"
    0x59075e52a310 ---------A   01170  PRINT "NUMBER IS LARGER THAN YOUR TWO NUMBERS, OR IF"
    0x59075e52a4c0 ---------A   01180  PRINT "MY NUMBER IS SMALLER THAN YOUR TWO NUMBERS."
    0x59075e52a660 ---------A   01190  PRINT "IF YOU WANT TO GUESS ONE SINGLE NUMBER, TYPE"
    0x59075e52a800 ---------A   01200  PRINT "YOUR GUESS FOR BOTH YOUR TRAP NUMBERS."
    0x59075e52ab40 ---------A   01210  PRINT "YOU GET";G;"GUESSES TO GET MY NUMBER."
    0x59075e52b200 ---------A   01220  X=INT(N*RND(1))+1
    0x59075e52b5b0 ---------A   01230  FOR Q=1 TO G
    0x59075e52b630 ---------A   01240  PRINT 
    0x59075e52b8b0 ---------A   01250  PRINT "GUESS #";Q;
    0x59075e52bc50 ---------A   01260  INPUT A,B
    0x59075e52c110 ---------A   01270  IF A=B AND X=A THEN 1450
    0x59075e52c390 ---------A   01280  IF A <= B THEN 1300
    0x59075e52c3f0 ---------A   01290  GOSUB 1410
    0x59075e52c8a0 ---------A   01300  IF A <= X AND X <= B THEN 1360
    0x59075e52cb40 ---------A   01310  IF X<A THEN 1340
    0x59075e52ccc0 ---------A   01320  PRINT "MY NUMBER IS LARGER THAN YOUR TRAP NUMBERS."
    0x59075e52cd70 ---------A   01330  GOTO 1370
    0x59075e52cee0 ---------A   01340  PRINT "MY NUMBER IS SMALLER THAN YOUR TRAP NUMBERS."
    0x59075e52d180 ---------A   01350  GOTO 1370
    0x59075e52d2e0 ---------A   01360  PRINT "YOU HAVE TRAPPED MY NUMBER."
    0x59075e52d420 ---------A   01370  NEXT Q
    0x59075e52d8c0 ---------A   01380  PRINT "SORRY, THAT'S";G;"GUESSES. THE NUMBER WAS";X
    0x59075e52d940 ---------A   01390  PRINT
    0x59075e52d9c0 ---------A   01400  GOTO 1460
    0x59075e52dcb0 ---------B   01410  R=A
    0x59075e52dee0 ---------B   01420  A=B
    0x59075e52e110 ---------B   01430  B=R
    0x59075e52e160 ---------B   01440  RETURN 
    0x59075e52e2d0 ---------A   01450  PRINT "YOU GOT IT!!!"
    0x59075e52e350 ---------A   01460  PRINT 
    0x59075e52e4b0 ---------A   01470  PRINT "TRY AGAIN."
    0x59075e52e530 ---------A   01480  PRINT
    0x59075e52e5b0 ---------A   01490  GOTO 1220
    0x59075e52e600 ---------A   01500  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01520 - 10000    8490 

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
    0x59075e5216d0 ---------A   01000  PRINT TAB(34);"TRAP"
    0x59075e521670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x59075e5222d0 ---------A   01020  PRINT
    0x59075e522910 ---------A   01030  PRINT
    0x59075e5122b0 ---------A   01040  PRINT
    0x59075e522b80 ---------A   01050  G=6
    0x59075e523ed0 ---------A   01060  N=100
    0x59075e523f90 ---------A   01070  REM-TRAP
    0x59075e524050 ---------A   01080  REM-STEVE ULLMAN, 8-1-72
    0x59075e522500 ---------A   01090  PRINT "INSTRUCTIONS";
    0x59075e524140 ---------A   01100  INPUT Z$
    0x59075e5298c0 ---------A   01110  IF LEFT$(Z$,1)<>"Y" THEN 1220
    0x59075e529b20 ---------A   01120  PRINT "I AM THINKING OF A NUMBER BETWEEN 1 AND";N
    0x59075e529cc0 ---------A   01130  PRINT "TRY TO GUESS MY NUMBER. ON EACH GUESS,"
    0x59075e529e60 ---------A   01140  PRINT "YOU ARE TO ENTER 2 NUMBERS, TRYING TO TRAP"
    0x59075e529fc0 ---------A   01150  PRINT "MY NUMBER BETWEEN THE TWO NUMBERS. I WILL"
    0x59075e52a170 ---------A   01160  PRINT "TELL YOU IF YOU HAVE TRAPPED MY NUMBER, IF MY"
    0x59075e52a310 ---------A   01170  PRINT "NUMBER IS LARGER THAN YOUR TWO NUMBERS, OR IF"
    0x59075e52a4c0 ---------A   01180  PRINT "MY NUMBER IS SMALLER THAN YOUR TWO NUMBERS."
    0x59075e52a660 ---------A   01190  PRINT "IF YOU WANT TO GUESS ONE SINGLE NUMBER, TYPE"
    0x59075e52a800 ---------A   01200  PRINT "YOUR GUESS FOR BOTH YOUR TRAP NUMBERS."
    0x59075e52ab40 ---------A   01210  PRINT "YOU GET";G;"GUESSES TO GET MY NUMBER."
    0x59075e52b200 ---------A T 01220  X=INT(N*RND(1))+1
    0x59075e52b5b0 ---------A   01230  FOR Q=1 TO G
    0x59075e52b630 ---------A   01240  PRINT 
    0x59075e52b8b0 ---------A   01250  PRINT "GUESS #";Q;
    0x59075e52bc50 ---------A   01260  INPUT A,B
    0x59075e52c110 ---------A   01270  IF A=B AND X=A THEN 1410
    0x59075e52c390 ---------A   01280  IF A <= B THEN 1300
    0x59075e52c3f0 ---------A   01290  GOSUB 1470
    0x59075e52c8a0 ---------A T 01300  IF A <= X AND X <= B THEN 1360
    0x59075e52cb40 ---------A   01310  IF X<A THEN 1340
    0x59075e52ccc0 ---------A   01320  PRINT "MY NUMBER IS LARGER THAN YOUR TRAP NUMBERS."
    0x59075e52cd70 ---------A   01330  GOTO 1370
    0x59075e52cee0 ---------A T 01340  PRINT "MY NUMBER IS SMALLER THAN YOUR TRAP NUMBERS."
    0x59075e52d180 ---------A   01350  GOTO 1370
    0x59075e52d2e0 ---------A T 01360  PRINT "YOU HAVE TRAPPED MY NUMBER."
    0x59075e52d420 ---------A T 01370  NEXT Q
    0x59075e52d8c0 ---------A   01380  PRINT "SORRY, THAT'S";G;"GUESSES. THE NUMBER WAS";X
    0x59075e52d940 ---------A   01390  PRINT
    0x59075e52d9c0 ---------A   01400  GOTO 1420
    0x59075e52e2d0 ---------A T 01410  PRINT "YOU GOT IT!!!"
    0x59075e52e350 ---------A T 01420  PRINT 
    0x59075e52e4b0 ---------A   01430  PRINT "TRY AGAIN."
    0x59075e52e530 ---------A   01440  PRINT
    0x59075e52e5b0 ---------A   01450  GOTO 1220
    0x59075e52e600 ---------A   01460  END
    0x59075e52dcb0 ---------B G 01470  R=A
    0x59075e52dee0 ---------B   01480  A=B
    0x59075e52e110 ---------B   01490  B=R
    0x59075e52e660 ---------B   01500  GOTO 01510
    0x59075e533400 ---------B T 01510  RETURN
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
void Routine_01470();

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

void Routine_01470(){
    // 01470 R=A
    R_int = A_int;
    // 01480 A=B
    A_int = B_int;
    // 01490 B=R
    B_int = R_int;
    // 01500 GOTO 01510
    goto Lbl_01510;

  Lbl_01510:
    // 01510 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(34);"TRAP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,34);strcat(buf,"TRAP");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 G=6
    G_int = 6;
    // 01060 N=100
    N_int = 100;
    // 01070 REM-TRAP
    // 01080 REM-STEVE ULLMAN, 8-1-72
    // 01090 PRINT "INSTRUCTIONS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INSTRUCTIONS");fputs(buf,fh); };
    // 01100 INPUT Z$
    // Start of Basic INPUT statement 01100
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Z_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01100
    // 01110 IF LEFT$(Z$,1)<>"Y" THEN 1220
    if(LEFT$(Z_str,1)=='Y')goto Lbl_01220;
    // 01120 PRINT "I AM THINKING OF A NUMBER BETWEEN 1 AND";N
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I AM THINKING OF A NUMBER BETWEEN 1 AND"); b2c_INT(buf,N_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "TRY TO GUESS MY NUMBER. ON EACH GUESS,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY TO GUESS MY NUMBER. ON EACH GUESS,");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "YOU ARE TO ENTER 2 NUMBERS, TRYING TO TRAP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE TO ENTER 2 NUMBERS, TRYING TO TRAP");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "MY NUMBER BETWEEN THE TWO NUMBERS. I WILL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MY NUMBER BETWEEN THE TWO NUMBERS. I WILL");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "TELL YOU IF YOU HAVE TRAPPED MY NUMBER, IF MY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TELL YOU IF YOU HAVE TRAPPED MY NUMBER, IF MY");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT "NUMBER IS LARGER THAN YOUR TWO NUMBERS, OR IF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NUMBER IS LARGER THAN YOUR TWO NUMBERS, OR IF");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT "MY NUMBER IS SMALLER THAN YOUR TWO NUMBERS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MY NUMBER IS SMALLER THAN YOUR TWO NUMBERS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT "IF YOU WANT TO GUESS ONE SINGLE NUMBER, TYPE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF YOU WANT TO GUESS ONE SINGLE NUMBER, TYPE");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT "YOUR GUESS FOR BOTH YOUR TRAP NUMBERS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR GUESS FOR BOTH YOUR TRAP NUMBERS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT "YOU GET";G;"GUESSES TO GET MY NUMBER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU GET"); b2c_INT(buf,G_int);strcat(buf,"GUESSES TO GET MY NUMBER.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01220:
    // 01220 X=INT(N*RND(1))+1
    X_int = INT(N_int*RND(1))+1;
    // 01230 FOR Q=1 TO G
    for(Q_int=1;Q_int<=G_int;Q_int++){
        // 01240 PRINT 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01250 PRINT "GUESS #";Q;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GUESS #"); b2c_INT(buf,Q_int);fputs(buf,fh); };
        // 01260 INPUT A,B
        // Start of Basic INPUT statement 01260
        {
            int numargs=2;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&A_int,args,0)) ||
                    (err += b2c_strtoi(&B_int,args,1)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01260
        // 01270 IF A=B AND X=A THEN 1410
        if(A_int==B_int&&X_int==A_int)goto Lbl_01410;
        // 01280 IF A <= B THEN 1300
        if(A_int<=B_int)goto Lbl_01300;
        // 01290 GOSUB 1470
        Routine_01470();

  Lbl_01300:
        // 01300 IF A <= X AND X <= B THEN 1360
        if(A_int<=X_int&&X_int<=B_int)goto Lbl_01360;
        // 01310 IF X<A THEN 1340
        if(X_int<A_int)goto Lbl_01340;
        // 01320 PRINT "MY NUMBER IS LARGER THAN YOUR TRAP NUMBERS."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MY NUMBER IS LARGER THAN YOUR TRAP NUMBERS.");strcat(buf,"\n");fputs(buf,fh); };
        // 01330 GOTO 1370
        goto Lbl_01370;

  Lbl_01340:
        // 01340 PRINT "MY NUMBER IS SMALLER THAN YOUR TRAP NUMBERS."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MY NUMBER IS SMALLER THAN YOUR TRAP NUMBERS.");strcat(buf,"\n");fputs(buf,fh); };
        // 01350 GOTO 1370
        goto Lbl_01370;

  Lbl_01360:
        // 01360 PRINT "YOU HAVE TRAPPED MY NUMBER."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE TRAPPED MY NUMBER.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01370:
        // 01370 NEXT Q
        int dummy_1370=0; // Ignore this line.
    }; // End-For(Q_int)
    // 01380 PRINT "SORRY, THAT'S";G;"GUESSES. THE NUMBER WAS";X
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY, THAT'S"); b2c_INT(buf,G_int);strcat(buf,"GUESSES. THE NUMBER WAS"); b2c_INT(buf,X_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01390 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01400 GOTO 1420
    goto Lbl_01420;

  Lbl_01410:
    // 01410 PRINT "YOU GOT IT!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU GOT IT!!!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01420:
    // 01420 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01430 PRINT "TRY AGAIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01440 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01450 GOTO 1220
    goto Lbl_01220;
    // 01460 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
