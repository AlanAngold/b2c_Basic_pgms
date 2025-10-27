/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/tictac1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5623ad402b80 ---------A   00010 PRINT TAB(30);"TIC TAC TOE"
    0x5623ad403f30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5623ad4040b0 ---------A   00030 PRINT:PRINT:PRINT
    0x5623ad3f22b0 ---------A   00050 REM
    0x5623ad4019e0 ---------A   00100 REM   THIS PROGRAM PLAYS TIC TAC TOE
    0x5623ad4017f0 ---------A   00110 REM   THE MACHINE GOES FIRST
    0x5623ad402080 ---------A   00120 PRINT "THE GAME BOARD IS NUMBERED:": PRINT
    0x5623ad401be0 ---------A   00130 PRINT "1  2  3": PRINT "8  9  4": PRINT "7  6  5"
    0x5623ad401c50 ---------A   00140 PRINT
    0x5623ad401cc0 ---------A   00150 REM
    0x5623ad404100 ---------A   00160 REM
    0x5623ad404180 ---------A   00170 REM
    0x5623ad401a20 ---------A   00180 DEF FNM(X)=X-8*INT((X-1)/8)
    0x5623ad409e20 ---------A   00190 REM
    0x5623ad409e60 ---------A   00200 REM  MAIN PROGRAM
    0x5623ad409ee0 ---------A T 00210 PRINT
    0x5623ad409f50 ---------A   00220 PRINT
    0x5623ad40a220 ---------A   00230 A=9
    0x5623ad40a510 ---------A   00240 M=A
    0x5623ad40a580 ---------A   00250 GOSUB 650
    0x5623ad40a860 ---------A   00260 P=M
    0x5623ad40ad30 ---------A   00270 B=FNM(P+1)
    0x5623ad40af60 ---------A   00280 M=B
    0x5623ad40afd0 ---------A   00290 GOSUB 650
    0x5623ad40b290 ---------A   00300 Q=M
    0x5623ad4016d0 ---------A   00310 IF Q=FNM(B+4) THEN 360
    0x5623ad40bb60 ---------A   00320 C=FNM(B+4)
    0x5623ad40bd90 ---------A   00330 M=C
    0x5623ad40be00 ---------A   00340 GOSUB 700
    0x5623ad40be60 ---------A   00350 GOTO 730
    0x5623ad40c260 ---------A T 00360 C=FNM(B+2)
    0x5623ad40c490 ---------A   00370 M=C
    0x5623ad40c500 ---------A   00380 GOSUB 650
    0x5623ad40c9d0 ---------A   00390 R=M
    0x5623ad401670 ---------A   00400 IF R=FNM(C+4) THEN 450
    0x5623ad40d2a0 ---------A   00410 D=FNM(C+4)
    0x5623ad40d4d0 ---------A   00420 M=D
    0x5623ad40d540 ---------A   00430 GOSUB 700
    0x5623ad40d580 ---------A   00440 GOTO 730
    0x5623ad40dac0 ---------A T 00450 IF P/2<>INT(P/2) THEN 500
    0x5623ad40dee0 ---------A   00460 D=FNM(C+7)
    0x5623ad40e110 ---------A   00470 M=D
    0x5623ad40e180 ---------A   00480 GOSUB 700
    0x5623ad40e1e0 ---------A   00490 GOTO 730
    0x5623ad40e5e0 ---------A T 00500 D=FNM(C+3)
    0x5623ad40e810 ---------A   00510 M=D
    0x5623ad40e880 ---------A   00520 GOSUB 650
    0x5623ad40eb70 ---------A   00530 S=M
    0x5623ad40efc0 ---------A   00540 IF S=FNM(D+4) THEN 590
    0x5623ad40f4a0 ---------A   00550 E=FNM(D+4)
    0x5623ad40f6d0 ---------A   00560 M=E
    0x5623ad40f740 ---------A   00570 GOSUB 700
    0x5623ad40f7a0 ---------A   00580 REM
    0x5623ad40fbc0 ---------A T 00590 E=FNM(D+6)
    0x5623ad40fdf0 ---------A   00600 M=E
    0x5623ad40fe70 ---------A   00610 GOSUB 700
    0x5623ad40ffb0 ---------A   00620 PRINT "THE GAME IS A DRAW."
    0x5623ad410020 ---------A   00630 GOTO 210
    0x5623ad410080 ---------B   00640 REM
    0x5623ad410100 ---------B G 00650 GOSUB 700
    0x5623ad410260 ---------B   00660 PRINT "YOUR MOVE";
    0x5623ad4103b0 ---------B   00670 INPUT M
    0x5623ad410410 ---------B   00680 RETURN
    0x5623ad410680 ---------C G 00700 PRINT "COMPUTER MOVES";M
    0x5623ad4106d0 ---------C   00710 RETURN
    0x5623ad410b60 ---------A   00720 REM
    0x5623ad410cd0 ---------A T 00730 PRINT "AND WINS ********"
    0x5623ad410d40 ---------A   00740 GOTO 210
    0x5623ad410d80 ---------A   00750 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00210      00630T, 00740T
     00360      00310T
     00450      00400T
     00500      00450T
     00590      00540T
     00650      00250G, 00290G, 00380G, 00520G
     00700      00340G, 00430G, 00480G, 00570G, 00610G, 00650G
     00730      00350T, 00440T, 00490T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5623ad402b80 (00010)   0x5623ad402b80 (00010)   0x5623ad410d80 (00750)   0x5623ad410d80 (00750)   
   B) 0x5623ad410080 (00640)   0x5623ad410100 (00650)   0x5623ad410410 (00680)   0x5623ad410410 (00680)   
   C) 0x5623ad410680 (00700)   0x5623ad410680 (00700)   0x5623ad4106d0 (00710)   0x5623ad4106d0 (00710)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01710 - 10000    8300 

 */



/*
 *  Symbol Table Listing for 'basic/tictac1.bas'
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
    FIX             Function Integer         args=1, float  
    FNM             Array    Integer         {0,9} 
    FRE             Function Integer         args=1, char*  
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
    M                        Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    OCT$            Function String          args=1, float  
    P                        Integer     
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
    S                        Integer     
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
 *  Listing of basic/tictac1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5623ad402b80 ---------A   01000 PRINT TAB(30);"TIC TAC TOE"
    0x5623ad403f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5623ad4040b0 ---------A   01020 PRINT:PRINT:PRINT
    0x5623ad3f22b0 ---------A   01030 REM
    0x5623ad4019e0 ---------A   01040 REM   THIS PROGRAM PLAYS TIC TAC TOE
    0x5623ad4017f0 ---------A   01050 REM   THE MACHINE GOES FIRST
    0x5623ad402080 ---------A   01060 PRINT "THE GAME BOARD IS NUMBERED:": PRINT
    0x5623ad401be0 ---------A   01070 PRINT "1  2  3": PRINT "8  9  4": PRINT "7  6  5"
    0x5623ad401c50 ---------A   01080 PRINT
    0x5623ad401cc0 ---------A   01090 REM
    0x5623ad404100 ---------A   01100 REM
    0x5623ad404180 ---------A   01110 REM
    0x5623ad401a20 ---------A   01120 DEF FNM(X)=X-8*INT((X-1)/8)
    0x5623ad409e20 ---------A   01130 REM
    0x5623ad409e60 ---------A   01140 REM  MAIN PROGRAM
    0x5623ad409ee0 ---------A T 01150 PRINT
    0x5623ad409f50 ---------A   01160 PRINT
    0x5623ad40a220 ---------A   01170 A=9
    0x5623ad40a510 ---------A   01180 M=A
    0x5623ad40a580 ---------A   01190 GOSUB 1630
    0x5623ad40a860 ---------A   01200 P=M
    0x5623ad40ad30 ---------A   01210 B=FNM(P+1)
    0x5623ad40af60 ---------A   01220 M=B
    0x5623ad40afd0 ---------A   01230 GOSUB 1630
    0x5623ad40b290 ---------A   01240 Q=M
    0x5623ad4016d0 ---------A   01250 IF Q=FNM(B+4) THEN 1300
    0x5623ad40bb60 ---------A   01260 C=FNM(B+4)
    0x5623ad40bd90 ---------A   01270 M=C
    0x5623ad40be00 ---------A   01280 GOSUB 1680
    0x5623ad40be60 ---------A   01290 GOTO 1590
    0x5623ad40c260 ---------A T 01300 C=FNM(B+2)
    0x5623ad40c490 ---------A   01310 M=C
    0x5623ad40c500 ---------A   01320 GOSUB 1630
    0x5623ad40c9d0 ---------A   01330 R=M
    0x5623ad401670 ---------A   01340 IF R=FNM(C+4) THEN 1390
    0x5623ad40d2a0 ---------A   01350 D=FNM(C+4)
    0x5623ad40d4d0 ---------A   01360 M=D
    0x5623ad40d540 ---------A   01370 GOSUB 1680
    0x5623ad40d580 ---------A   01380 GOTO 1590
    0x5623ad40dac0 ---------A T 01390 IF P/2<>INT(P/2) THEN 1440
    0x5623ad40dee0 ---------A   01400 D=FNM(C+7)
    0x5623ad40e110 ---------A   01410 M=D
    0x5623ad40e180 ---------A   01420 GOSUB 1680
    0x5623ad40e1e0 ---------A   01430 GOTO 1590
    0x5623ad40e5e0 ---------A T 01440 D=FNM(C+3)
    0x5623ad40e810 ---------A   01450 M=D
    0x5623ad40e880 ---------A   01460 GOSUB 1630
    0x5623ad40eb70 ---------A   01470 S=M
    0x5623ad40efc0 ---------A   01480 IF S=FNM(D+4) THEN 1530
    0x5623ad40f4a0 ---------A   01490 E=FNM(D+4)
    0x5623ad40f6d0 ---------A   01500 M=E
    0x5623ad40f740 ---------A   01510 GOSUB 1680
    0x5623ad40f7a0 ---------A   01520 REM
    0x5623ad40fbc0 ---------A T 01530 E=FNM(D+6)
    0x5623ad40fdf0 ---------A   01540 M=E
    0x5623ad40fe70 ---------A   01550 GOSUB 1680
    0x5623ad40ffb0 ---------A   01560 PRINT "THE GAME IS A DRAW."
    0x5623ad410020 ---------A   01570 GOTO 1150
    0x5623ad410b60 ---------A   01580 REM
    0x5623ad410cd0 ---------A T 01590 PRINT "AND WINS ********"
    0x5623ad410d40 ---------A   01600 GOTO 1150
    0x5623ad410d80 ---------A   01610 END
    0x5623ad410080 ---------B   01620 REM
    0x5623ad410100 ---------B G 01630 GOSUB 1680
    0x5623ad410260 ---------B   01640 PRINT "YOUR MOVE";
    0x5623ad4103b0 ---------B   01650 INPUT M
    0x5623ad413980 ---------B   01660 GOTO 01670
    0x5623ad4139c0 ---------B T 01670 RETURN
    0x5623ad410680 ---------C G 01680 PRINT "COMPUTER MOVES";M
    0x5623ad413a00 ---------C   01690 GOTO 01700
    0x5623ad413a60 ---------C T 01700 RETURN
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
int    FNM_int_arr[10];                           // Basic: FNM 
int    M_int;                                     // Basic: M 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    X_int;                                     // Basic: X 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01630();
void Routine_01680();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused X
int FNM(int X){
    int rtn=X_int-8*INT((X_int-1)/8);
    return(rtn);
}

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
    // 01620 REM

void Routine_01630(){
    // 01630 GOSUB 1680
    Routine_01680();
    // 01640 PRINT "YOUR MOVE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR MOVE");fputs(buf,fh); };
    // 01650 INPUT M
    // Start of Basic INPUT statement 01650
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01650
    // 01660 GOTO 01670
    goto Lbl_01670;

  Lbl_01670:
    // 01670 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_01680(){
    // 01680 PRINT "COMPUTER MOVES";M
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER MOVES"); b2c_INT(buf,M_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01690 GOTO 01700
    goto Lbl_01700;

  Lbl_01700:
    // 01700 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
