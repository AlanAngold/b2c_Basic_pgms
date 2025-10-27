/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/reverse.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b9831fdcb80 ---------A   00010 PRINT TAB(32);"REVERSE"
    0x5b9831fddf30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b9831fde0b0 ---------A   00030 PRINT:PRINT:PRINT
    0x5b9831fdb7f0 ---------A   00100 PRINT "REVERSE -- A GAME OF SKILL": PRINT
    0x5b9831fdc040 ---------A   00130 DIM A(20)
    0x5b9831fdbe40 ---------A   00140 REM *** N=NUMBER OF NUMBERS
    0x5b9831fdd740 ---------A   00150 N=9
    0x5b9831fde1c0 ---------A   00160 PRINT "DO YOU WANT THE RULES";
    0x5b9831fdb6d0 ---------A   00170 INPUT A$
    0x5b9831fdb670 ---------A   00180 IF A$="NO" THEN 210
    0x5b9831fe3920 ---------A   00190 GOSUB 710
    0x5b9831fe3960 ---------A   00200 REM *** MAKE A RANDOM LIST A(1) TO A(N)
    0x5b9831fdc080 ---------A T 00210 A(1)=INT((N-1)*RND(1)+2)
    0x5b9831fe43a0 ---------A   00220 FOR K=2 TO N
    0x5b9831fe4a80 ---------A T 00230 A(K)=INT(N*RND(1)+1)
    0x5b9831fe4f10 ---------A   00240 FOR J=1 TO K-1
    0x5b9831fe5350 ---------A   00250 IF A(K)=A(J) THEN 230
    0x5b9831fe55b0 ---------A   00260 NEXT J:NEXT K
    0x5b9831fe5670 ---------A   00280 REM *** PRINT ORIGINAL LIST AND START GAME
    0x5b9831fe5850 ---------A   00290 PRINT: PRINT "HERE WE GO ... THE LIST IS:"
    0x5b9831fe5b20 ---------A   00310 T=0
    0x5b9831fe5ba0 ---------A   00320 GOSUB 610
    0x5b9831fe5d10 ---------A T 00330 PRINT "HOW MANY SHALL I REVERSE";
    0x5b9831fe5f20 ---------A   00340 INPUT R
    0x5b9831fe6180 ---------A   00350 IF R=0 THEN 520
    0x5b9831fe6430 ---------A   00360 IF R<=N THEN 390
    0x5b9831fe66f0 ---------A   00370 PRINT "OOPS! TOO MANY! I CAN REVERSE AT MOST";N:GOTO 330
    0x5b9831fe6a30 ---------A T 00390 T=T+1
    0x5b9831fe6ac0 ---------A   00400 REM *** REVERSE R NUMBERS AND PRINT NEW LIST
    0x5b9831fe6fa0 ---------A   00410 FOR K=1 TO INT(R/2)
    0x5b9831fe7380 ---------A   00420 Z=A(K)
    0x5b9831fe7990 ---------A   00430 A(K)=A(R-K+1)
    0x5b9831fe7ec0 ---------A   00440 A(R-K+1)=Z
    0x5b9831fe8200 ---------A   00450 NEXT K
    0x5b9831fe8290 ---------A   00460 GOSUB 610
    0x5b9831fe82f0 ---------A   00470 REM *** CHECK FOR A WIN
    0x5b9831fe85f0 ---------A   00480 FOR K=1 TO N
    0x5b9831fe8950 ---------A   00490 IF A(K)<>K THEN 330
    0x5b9831fe8a90 ---------A   00500 NEXT K
    0x5b9831fe8e60 ---------A   00510 PRINT "YOU WON IT IN";T;"MOVES!!!":PRINT
    0x5b9831fe8ee0 ---------A T 00520 PRINT
    0x5b9831fe9050 ---------A   00530 PRINT "TRY AGAIN (YES OR NO)";
    0x5b9831fe91b0 ---------A   00540 INPUT A$
    0x5b9831fe9450 ---------A   00550 IF A$="YES" THEN 210
    0x5b9831fe9670 ---------A   00560 PRINT: PRINT "O.K. HOPE YOU HAD FUN!!":GOTO 999
    0x5b9831fe96e0 ---------B   00600 REM *** SUBROUTINE TO PRINT LIST
    0x5b9831fe9da0 ---------B G 00610 PRINT:FOR K=1 TO N:PRINT A(K);:NEXT K
    0x5b9831fe9ea0 ---------B   00650 PRINT:PRINT:RETURN
    0x5b9831fe9f50 ---------C   00700 REM *** SUBROUTINE TO PRINT THE RULES
    0x5b9831fea180 ---------C G 00710 PRINT:PRINT "THIS IS THE GAME OF 'REVERSE'.  TO WIN, ALL YOU HAVE"
    0x5b9831fea520 ---------C   00720 PRINT "TO DO IS ARRANGE A LIST OF NUMBERS (1 THROUGH";N;")"
    0x5b9831fea6c0 ---------C   00730 PRINT "IN NUMERICAL ORDER FROM LEFT TO RIGHT.  TO MOVE, YOU"
    0x5b9831fea860 ---------C   00740 PRINT "TELL ME HOW MANY NUMBERS (COUNTING FROM THE LEFT) TO"
    0x5b9831fea9e0 ---------C   00750 PRINT "REVERSE.  FOR EXAMPLE, IF THE CURRENT LIST IS:"
    0x5b9831feabb0 ---------C   00760 PRINT:PRINT "2 3 4 5 1 6 7 8 9"
    0x5b9831fead80 ---------C   00770 PRINT:PRINT "AND YOU REVERSE 4, THE RESULT WILL BE:"
    0x5b9831feaf40 ---------C   00780 PRINT:PRINT "5 4 3 2 1 6 7 8 9"
    0x5b9831feb110 ---------C   00790 PRINT:PRINT "NOW IF YOU REVERSE 5, YOU WIN!"
    0x5b9831feb320 ---------C   00800 PRINT:PRINT "1 2 3 4 5 6 7 8 9":PRINT
    0x5b9831feb4b0 ---------C   00810 PRINT "NO DOUBT YOU WILL LIKE THIS GAME, BUT"
    0x5b9831feb6a0 ---------C   00820 PRINT "IF YOU WANT TO QUIT, REVERSE 0 (ZERO).":PRINT: RETURN
    0x5b9831feb700 ---------A T 00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00210      00180T, 00550T
     00230      00250T
     00330      00370T, 00490T
     00390      00360T
     00520      00350T
     00610      00320G, 00460G
     00710      00190G
     00999      00560T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5b9831fdcb80 (00010)   0x5b9831fdcb80 (00010)   0x5b9831feb700 (00999)   0x5b9831feb700 (00999)   
   B) 0x5b9831fe96e0 (00600)   0x5b9831fe9da0 (00610)   0x5b9831fe9ea0 (00650)   0x5b9831fe9ea0 (00650)   
   C) 0x5b9831fe9f50 (00700)   0x5b9831fea180 (00710)   0x5b9831feb6a0 (00820)   0x5b9831feb6a0 (00820)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01640 - 10000    8370 

 */



/*
 *  Symbol Table Listing for 'basic/reverse.bas'
 *
    A               Array    Integer         {0,19} 
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
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    K                        Integer     
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
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/reverse.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b9831fdcb80 ---------A   01000 PRINT TAB(32);"REVERSE"
    0x5b9831fddf30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b9831fde0b0 ---------A   01020 PRINT:PRINT:PRINT
    0x5b9831fdb7f0 ---------A   01030 PRINT "REVERSE -- A GAME OF SKILL": PRINT
    0x5b9831fdc040 ---------A   01040 DIM A(20)
    0x5b9831fdbe40 ---------A   01050 REM *** N=NUMBER OF NUMBERS
    0x5b9831fdd740 ---------A   01060 N=9
    0x5b9831fde1c0 ---------A   01070 PRINT "DO YOU WANT THE RULES";
    0x5b9831fdb6d0 ---------A   01080 INPUT A$
    0x5b9831fdb670 ---------A   01090 IF A$="NO" THEN 1120
    0x5b9831fe3920 ---------A   01100 GOSUB 1510
    0x5b9831fe3960 ---------A   01110 REM *** MAKE A RANDOM LIST A(1) TO A(N)
    0x5b9831fdc080 ---------A T 01120 A(1)=INT((N-1)*RND(1)+2)
    0x5b9831fe43a0 ---------A   01130 FOR K=2 TO N
    0x5b9831fe4a80 ---------A T 01140 A(K)=INT(N*RND(1)+1)
    0x5b9831fe4f10 ---------A   01150 FOR J=1 TO K-1
    0x5b9831fe5350 ---------A   01160 IF A(K)=A(J) THEN 1140
    0x5b9831fe55b0 ---------A   01170 NEXT J:NEXT K
    0x5b9831fe5670 ---------A   01180 REM *** PRINT ORIGINAL LIST AND START GAME
    0x5b9831fe5850 ---------A   01190 PRINT: PRINT "HERE WE GO ... THE LIST IS:"
    0x5b9831fe5b20 ---------A   01200 T=0
    0x5b9831fe5ba0 ---------A   01210 GOSUB 1470
    0x5b9831fe5d10 ---------A T 01220 PRINT "HOW MANY SHALL I REVERSE";
    0x5b9831fe5f20 ---------A   01230 INPUT R
    0x5b9831fe6180 ---------A   01240 IF R=0 THEN 1400
    0x5b9831fe6430 ---------A   01250 IF R<=N THEN 1270
    0x5b9831fe66f0 ---------A   01260 PRINT "OOPS! TOO MANY! I CAN REVERSE AT MOST";N:GOTO 1220
    0x5b9831fe6a30 ---------A T 01270 T=T+1
    0x5b9831fe6ac0 ---------A   01280 REM *** REVERSE R NUMBERS AND PRINT NEW LIST
    0x5b9831fe6fa0 ---------A   01290 FOR K=1 TO INT(R/2)
    0x5b9831fe7380 ---------A   01300 Z=A(K)
    0x5b9831fe7990 ---------A   01310 A(K)=A(R-K+1)
    0x5b9831fe7ec0 ---------A   01320 A(R-K+1)=Z
    0x5b9831fe8200 ---------A   01330 NEXT K
    0x5b9831fe8290 ---------A   01340 GOSUB 1470
    0x5b9831fe82f0 ---------A   01350 REM *** CHECK FOR A WIN
    0x5b9831fe85f0 ---------A   01360 FOR K=1 TO N
    0x5b9831fe8950 ---------A   01370 IF A(K)<>K THEN 1220
    0x5b9831fe8a90 ---------A   01380 NEXT K
    0x5b9831fe8e60 ---------A   01390 PRINT "YOU WON IT IN";T;"MOVES!!!":PRINT
    0x5b9831fe8ee0 ---------A T 01400 PRINT
    0x5b9831fe9050 ---------A   01410 PRINT "TRY AGAIN (YES OR NO)";
    0x5b9831fe91b0 ---------A   01420 INPUT A$
    0x5b9831fe9450 ---------A   01430 IF A$="YES" THEN 1120
    0x5b9831fe9670 ---------A   01440 PRINT: PRINT "O.K. HOPE YOU HAD FUN!!":GOTO 1450
    0x5b9831feb700 ---------A T 01450 END
    0x5b9831fe96e0 ---------B   01460 REM *** SUBROUTINE TO PRINT LIST
    0x5b9831fe9da0 ---------B G 01470 PRINT:FOR K=1 TO N:PRINT A(K);:NEXT K
    0x5b9831fede80 ---------B   01480 GOTO 01490
    0x5b9831fedec0 ---------B T 01490 RETURN
    0x5b9831fe9f50 ---------C   01500 REM *** SUBROUTINE TO PRINT THE RULES
    0x5b9831fea180 ---------C G 01510 PRINT:PRINT "THIS IS THE GAME OF 'REVERSE'.  TO WIN, ALL YOU HAVE"
    0x5b9831fea520 ---------C   01520 PRINT "TO DO IS ARRANGE A LIST OF NUMBERS (1 THROUGH";N;")"
    0x5b9831fea6c0 ---------C   01530 PRINT "IN NUMERICAL ORDER FROM LEFT TO RIGHT.  TO MOVE, YOU"
    0x5b9831fea860 ---------C   01540 PRINT "TELL ME HOW MANY NUMBERS (COUNTING FROM THE LEFT) TO"
    0x5b9831fea9e0 ---------C   01550 PRINT "REVERSE.  FOR EXAMPLE, IF THE CURRENT LIST IS:"
    0x5b9831feabb0 ---------C   01560 PRINT:PRINT "2 3 4 5 1 6 7 8 9"
    0x5b9831fead80 ---------C   01570 PRINT:PRINT "AND YOU REVERSE 4, THE RESULT WILL BE:"
    0x5b9831feaf40 ---------C   01580 PRINT:PRINT "5 4 3 2 1 6 7 8 9"
    0x5b9831feb110 ---------C   01590 PRINT:PRINT "NOW IF YOU REVERSE 5, YOU WIN!"
    0x5b9831feb320 ---------C   01600 PRINT:PRINT "1 2 3 4 5 6 7 8 9":PRINT
    0x5b9831feb4b0 ---------C   01610 PRINT "NO DOUBT YOU WILL LIKE THIS GAME, BUT"
    0x5b9831fedf00 ---------C   01620 GOTO 01630
    0x5b9831fedf60 ---------C T 01630 RETURN
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
int    A_int_arr[20];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    N_int;                                     // Basic: N 
int    R_int;                                     // Basic: R 
int    T_int;                                     // Basic: T 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01470();
void Routine_01510();

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
    // 01460 REM *** SUBROUTINE TO PRINT LIST

void Routine_01470(){
    // 01470 PRINT:FOR K=1 TO N:PRINT A(K);:NEXT K
    int dummy_1470=0; // Ignore this line.
}; // End-For(K_int)
// 01480 GOTO 01490
goto Lbl_01490;

  Lbl_01490:
// 01490 RETURN
return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
// 01500 REM *** SUBROUTINE TO PRINT THE RULES

void Routine_01510(){
// 01510 PRINT:PRINT "THIS IS THE GAME OF 'REVERSE'.  TO WIN, ALL YOU HAVE"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS THE GAME OF 'REVERSE'.  TO WIN, ALL YOU HAVE");strcat(buf,"\n");fputs(buf,fh); };
// 01520 PRINT "TO DO IS ARRANGE A LIST OF NUMBERS (1 THROUGH";N;")"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO DO IS ARRANGE A LIST OF NUMBERS (1 THROUGH"); b2c_INT(buf,N_int);strcat(buf,")");strcat(buf,"\n");fputs(buf,fh); };
// 01530 PRINT "IN NUMERICAL ORDER FROM LEFT TO RIGHT.  TO MOVE, YOU"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IN NUMERICAL ORDER FROM LEFT TO RIGHT.  TO MOVE, YOU");strcat(buf,"\n");fputs(buf,fh); };
// 01540 PRINT "TELL ME HOW MANY NUMBERS (COUNTING FROM THE LEFT) TO"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TELL ME HOW MANY NUMBERS (COUNTING FROM THE LEFT) TO");strcat(buf,"\n");fputs(buf,fh); };
// 01550 PRINT "REVERSE.  FOR EXAMPLE, IF THE CURRENT LIST IS:"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"REVERSE.  FOR EXAMPLE, IF THE CURRENT LIST IS:");strcat(buf,"\n");fputs(buf,fh); };
// 01560 PRINT:PRINT "2 3 4 5 1 6 7 8 9"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"2 3 4 5 1 6 7 8 9");strcat(buf,"\n");fputs(buf,fh); };
// 01570 PRINT:PRINT "AND YOU REVERSE 4, THE RESULT WILL BE:"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND YOU REVERSE 4, THE RESULT WILL BE:");strcat(buf,"\n");fputs(buf,fh); };
// 01580 PRINT:PRINT "5 4 3 2 1 6 7 8 9"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"5 4 3 2 1 6 7 8 9");strcat(buf,"\n");fputs(buf,fh); };
// 01590 PRINT:PRINT "NOW IF YOU REVERSE 5, YOU WIN!"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOW IF YOU REVERSE 5, YOU WIN!");strcat(buf,"\n");fputs(buf,fh); };
// 01600 PRINT:PRINT "1 2 3 4 5 6 7 8 9":PRINT
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
// 01610 PRINT "NO DOUBT YOU WILL LIKE THIS GAME, BUT"
{ FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NO DOUBT YOU WILL LIKE THIS GAME, BUT");strcat(buf,"\n");fputs(buf,fh); };
// 01620 GOTO 01630
goto Lbl_01630;

  Lbl_01630:
// 01630 RETURN
return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
