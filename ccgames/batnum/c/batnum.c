/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/batnum.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b050cef4db0 ---------A   00005 PRINT CHR$(26)
    0x5b050cef4e70 ---------A   00010 PRINT TAB(33);"BATNUM":PRINT
    0x5b050cef4ff0 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b050cef29e0 ---------A   00030 PRINT:PRINT:PRINT
    0x5b050cef4af0 ---------A   00110 PRINT "   This program is a 'Battle of Numbers' game, where the"
    0x5b050cef3090 ---------A   00120 PRINT "computer is your opponent."
    0x5b050cef34d0 ---------A   00130 PRINT 
    0x5b050cef2c30 ---------A   00140 PRINT "   The game starts with an assumed pile of objects. You"
    0x5b050cef51d0 ---------A   00150 PRINT "and your opponent alternately remove objects from the pile."
    0x5b050cef3730 ---------A   00160 PRINT "Winning is defined in advance as taking the last object or"
    0x5b050cef5220 ---------A   00170 PRINT "not. You can also specify some other beginning conditions."
    0x5b050cefaa40 ---------A   00180 PRINT "Don't use zero, however, in playing the game.":PRINT
    0x5b050cefaba0 ---------A   00190 PRINT "Enter a negative number for new pile size to stop playing."
    0x5b050cefac40 ---------A   00200 PRINT:PRINT
    0x5b050cefac90 ---------A   00210 GOTO 330
    0x5b050cef26d0 ---------A T 00220 FOR I=1 TO 10
    0x5b050cefafb0 ---------A   00230 PRINT
    0x5b050cefb0c0 ---------A   00240 NEXT I
    0x5b050cef2670 ---------A T 00330 INPUT "ENTER PILE SIZE";N
    0x5b050cefb440 ---------A   00350 IF N>=1 THEN 370
    0x5b050cefb5b0 ---------A   00360 PRINT:PRINT:PRINT:RUN "MENU"
    0x5b050cefb8f0 ---------A T 00370 IF N<>INT(N) THEN 220
    0x5b050cefbb80 ---------A   00380 IF N<1 THEN 220
    0x5b050cefbde0 ---------A T 00390 INPUT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ";M
    0x5b050cefc040 ---------A   00410 IF M=1 THEN 430
    0x5b050cefc280 ---------A   00420 IF M<>2 THEN 390
    0x5b050cefc660 ---------A T 00430 INPUT "ENTER MIN AND MAX ";A,B
    0x5b050cefc8e0 ---------A   00450 IF A>B THEN 430
    0x5b050cefcb50 ---------A   00460 IF A<1 THEN 430
    0x5b050cefcec0 ---------A   00470 IF A<>INT(A) THEN 430
    0x5b050cefd250 ---------A   00480 IF B<>INT(B) THEN 430
    0x5b050cefd4b0 ---------A T 00490 INPUT "ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ";S
    0x5b050cefd580 ---------A   00500 PRINT:PRINT
    0x5b050cefd9e0 ---------A   00510 IF S=1 THEN 530
    0x5b050cefdc40 ---------A   00520 IF S<>2 THEN 490
    0x5b050cefe060 ---------A T 00530 C=A+B
    0x5b050cefe2b0 ---------A   00540 IF S=2 THEN 570
    0x5b050cefe330 ---------A T 00550 GOSUB 600
    0x5b050cefe630 ---------A   00560 IF W=1 THEN 220
    0x5b050cefe6b0 ---------A T 00570 GOSUB 810
    0x5b050cefe8f0 ---------A   00580 IF W=1 THEN 220
    0x5b050cefe970 ---------A   00590 GOTO 550
    0x5b050cefec50 ---------B G 00600 Q=N
    0x5b050cefeea0 ---------B   00610 IF M=1 THEN 630
    0x5b050ceff1e0 ---------B   00620 Q=Q-1
    0x5b050ceff430 ---------B T 00630 IF M=1 THEN 680
    0x5b050ceff6b0 ---------B   00640 IF N>A THEN 720
    0x5b050ceff8f0 ---------B   00650 W=1
    0x5b050ceffc90 ---------B   00660 PRINT:PRINT "COMPUTER TAKES";N;"AND LOSES."
    0x5b050ceffce0 ---------B   00670 RETURN
    0x5b050cefff60 ---------B T 00680 IF N>B THEN 720
    0x5b050cf001a0 ---------B   00690 W=1
    0x5b050cf00540 ---------B   00700 PRINT:PRINT "COMPUTER TAKES";N;"AND WINS."
    0x5b050cf00590 ---------B   00710 RETURN
    0x5b050cf00cd0 ---------B T 00720 P=Q-C*INT(Q/C)
    0x5b050cf00f40 ---------B   00730 IF P>=A THEN 750
    0x5b050cf01180 ---------B   00740 P=A
    0x5b050cf013f0 ---------B T 00750 IF P<=B THEN 770
    0x5b050cf01630 ---------B   00760 P=B
    0x5b050cf019a0 ---------B T 00770 N=N-P
    0x5b050cf01e40 ---------B   00780 PRINT:PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    0x5b050cf02050 ---------B   00790 W=0
    0x5b050cf020a0 ---------B   00800 RETURN
    0x5b050cf02280 ---------C G 00810 PRINT:PRINT "YOUR MOVE ";
    0x5b050cf023d0 ---------C T 00820 INPUT P
    0x5b050cf02a80 ---------C   00830 IF P<>0 THEN 870
    0x5b050cf02ca0 ---------C   00840 PRINT:PRINT:PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    0x5b050cf02eb0 ---------C   00850 W=1
    0x5b050cf02f00 ---------C   00860 RETURN
    0x5b050cf03270 ---------C T 00870 IF P<>INT(P) THEN 920
    0x5b050cf034f0 ---------C   00880 IF P>=A THEN 910
    0x5b050cf03770 ---------C   00890 IF P=N THEN 960
    0x5b050cf037f0 ---------C   00900 GOTO 920
    0x5b050cf03a60 ---------C T 00910 IF P<=B THEN 940
    0x5b050cf03bf0 ---------C T 00920 PRINT "ILLEGAL MOVE, REENTER IT ";
    0x5b050cf03c60 ---------C   00930 GOTO 820
    0x5b050cf03fa0 ---------C T 00940 N=N-P
    0x5b050cf041f0 ---------C   00950 IF N<>0 THEN 1030
    0x5b050cf04460 ---------C T 00960 IF M=1 THEN 1000
    0x5b050cf04610 ---------C   00970 PRINT:PRINT "TOUGH LUCK, YOU LOSE."
    0x5b050cf04820 ---------C   00980 W=1
    0x5b050cf04870 ---------C   00990 RETURN
    0x5b050cf04aa0 ---------C T 01000 PRINT:PRINT:PRINT "CONGRATULATIONS, YOU WIN."
    0x5b050cf04cb0 ---------C   01010 W=1
    0x5b050cf04d00 ---------C   01020 RETURN
    0x5b050cf04f60 ---------C T 01030 IF N>=0 THEN 1060
    0x5b050cf052c0 ---------C   01040 N=N+P
    0x5b050cf05330 ---------C   01050 GOTO 920
    0x5b050cf05530 ---------C T 01060 W=0
    0x5b050cf05580 ---------C   01070 RETURN
    0x5b050cf05600 ----------   01080 RUN "MENU"
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00220      00370T, 00380T, 00560T, 00580T
     00330      00210T
     00370      00350T
     00390      00420T
     00430      00410T, 00450T, 00460T, 00470T, 00480T
     00490      00520T
     00530      00510T
     00550      00590T
     00570      00540T
     00600      00550G
     00630      00610T
     00680      00630T
     00720      00640T, 00680T
     00750      00730T
     00770      00750T
     00810      00570G
     00820      00930T
     00870      00830T
     00910      00880T
     00920      00870T, 00900T, 01050T
     00940      00910T
     00960      00890T
     01000      00960T
     01030      00950T
     01060      01030T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5b050cef4db0 (00005)   0x5b050cef4db0 (00005)   0x5b050cf05600 (01080)   0x5b050cefe970 (00590)   
   B) 0x5b050cefec50 (00600)   0x5b050cefec50 (00600)   0x5b050ceffce0 (00670)   0x5b050cf020a0 (00800)   
   C) 0x5b050cf02280 (00810)   0x5b050cf02280 (00810)   0x5b050cf02f00 (00860)   0x5b050cf05580 (01070)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01920 - 10000    8090 

 */



/*
 *  Symbol Table Listing for 'basic/batnum.bas'
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
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Integer     
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
    N                        Integer     
    OCT$            Function String          args=1, float  
    P                        Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
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
    W                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/batnum.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b050cef4db0 ---------A   01000 PRINT CHR$(26)
    0x5b050cef4e70 ---------A   01010 PRINT TAB(33);"BATNUM":PRINT
    0x5b050cef4ff0 ---------A   01020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b050cef29e0 ---------A   01030 PRINT:PRINT:PRINT
    0x5b050cef4af0 ---------A   01040 PRINT "   This program is a 'Battle of Numbers' game, where the"
    0x5b050cef3090 ---------A   01050 PRINT "computer is your opponent."
    0x5b050cef34d0 ---------A   01060 PRINT 
    0x5b050cef2c30 ---------A   01070 PRINT "   The game starts with an assumed pile of objects. You"
    0x5b050cef51d0 ---------A   01080 PRINT "and your opponent alternately remove objects from the pile."
    0x5b050cef3730 ---------A   01090 PRINT "Winning is defined in advance as taking the last object or"
    0x5b050cef5220 ---------A   01100 PRINT "not. You can also specify some other beginning conditions."
    0x5b050cefaa40 ---------A   01110 PRINT "Don't use zero, however, in playing the game.":PRINT
    0x5b050cefaba0 ---------A   01120 PRINT "Enter a negative number for new pile size to stop playing."
    0x5b050cefac40 ---------A   01130 PRINT:PRINT
    0x5b050cefac90 ---------A   01140 GOTO 1180
    0x5b050cef26d0 ---------A T 01150 FOR I=1 TO 10
    0x5b050cefafb0 ---------A   01160 PRINT
    0x5b050cefb0c0 ---------A   01170 NEXT I
    0x5b050cef2670 ---------A T 01180 INPUT "ENTER PILE SIZE";N
    0x5b050cefb440 ---------A   01190 IF N>=1 THEN 1210
    0x5b050cefb5b0 ---------A   01200 PRINT:PRINT:PRINT:RUN "MENU"
    0x5b050cefb8f0 ---------A T 01210 IF N<>INT(N) THEN 1150
    0x5b050cefbb80 ---------A   01220 IF N<1 THEN 1150
    0x5b050cefbde0 ---------A T 01230 INPUT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ";M
    0x5b050cefc040 ---------A   01240 IF M=1 THEN 1260
    0x5b050cefc280 ---------A   01250 IF M<>2 THEN 1230
    0x5b050cefc660 ---------A T 01260 INPUT "ENTER MIN AND MAX ";A,B
    0x5b050cefc8e0 ---------A   01270 IF A>B THEN 1260
    0x5b050cefcb50 ---------A   01280 IF A<1 THEN 1260
    0x5b050cefcec0 ---------A   01290 IF A<>INT(A) THEN 1260
    0x5b050cefd250 ---------A   01300 IF B<>INT(B) THEN 1260
    0x5b050cefd4b0 ---------A T 01310 INPUT "ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ";S
    0x5b050cefd580 ---------A   01320 PRINT:PRINT
    0x5b050cefd9e0 ---------A   01330 IF S=1 THEN 1350
    0x5b050cefdc40 ---------A   01340 IF S<>2 THEN 1310
    0x5b050cefe060 ---------A T 01350 C=A+B
    0x5b050cefe2b0 ---------A   01360 IF S=2 THEN 1390
    0x5b050cefe330 ---------A T 01370 GOSUB 1420
    0x5b050cefe630 ---------A   01380 IF W=1 THEN 1150
    0x5b050cefe6b0 ---------A T 01390 GOSUB 1640
    0x5b050cefe8f0 ---------A   01400 IF W=1 THEN 1150
    0x5b050cefe970 ---------A   01410 GOTO 1370
    0x5b050cefec50 ---------B G 01420 Q=N
    0x5b050cefeea0 ---------B   01430 IF M=1 THEN 1450
    0x5b050ceff1e0 ---------B   01440 Q=Q-1
    0x5b050ceff430 ---------B T 01450 IF M=1 THEN 1500
    0x5b050ceff6b0 ---------B   01460 IF N>A THEN 1540
    0x5b050ceff8f0 ---------B   01470 W=1
    0x5b050ceffc90 ---------B   01480 PRINT:PRINT "COMPUTER TAKES";N;"AND LOSES."
    0x5b050cf086f0 ---------B   01490 GOTO 01630
    0x5b050cefff60 ---------B T 01500 IF N>B THEN 1540
    0x5b050cf001a0 ---------B   01510 W=1
    0x5b050cf00540 ---------B   01520 PRINT:PRINT "COMPUTER TAKES";N;"AND WINS."
    0x5b050cf08730 ---------B   01530 GOTO 01630
    0x5b050cf00cd0 ---------B T 01540 P=Q-C*INT(Q/C)
    0x5b050cf00f40 ---------B   01550 IF P>=A THEN 1570
    0x5b050cf01180 ---------B   01560 P=A
    0x5b050cf013f0 ---------B T 01570 IF P<=B THEN 1590
    0x5b050cf01630 ---------B   01580 P=B
    0x5b050cf019a0 ---------B T 01590 N=N-P
    0x5b050cf01e40 ---------B   01600 PRINT:PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    0x5b050cf02050 ---------B   01610 W=0
    0x5b050cf08770 ---------B   01620 GOTO 01630
    0x5b050cf087d0 ---------B T 01630 RETURN
    0x5b050cf02280 ---------C G 01640 PRINT:PRINT "YOUR MOVE ";
    0x5b050cf023d0 ---------C T 01650 INPUT P
    0x5b050cf02a80 ---------C   01660 IF P<>0 THEN 1700
    0x5b050cf02ca0 ---------C   01670 PRINT:PRINT:PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    0x5b050cf02eb0 ---------C   01680 W=1
    0x5b050cf08c40 ---------C   01690 GOTO 01910
    0x5b050cf03270 ---------C T 01700 IF P<>INT(P) THEN 1750
    0x5b050cf034f0 ---------C   01710 IF P>=A THEN 1740
    0x5b050cf03770 ---------C   01720 IF P=N THEN 1790
    0x5b050cf037f0 ---------C   01730 GOTO 1750
    0x5b050cf03a60 ---------C T 01740 IF P<=B THEN 1770
    0x5b050cf03bf0 ---------C T 01750 PRINT "ILLEGAL MOVE, REENTER IT ";
    0x5b050cf03c60 ---------C   01760 GOTO 1650
    0x5b050cf03fa0 ---------C T 01770 N=N-P
    0x5b050cf041f0 ---------C   01780 IF N<>0 THEN 1860
    0x5b050cf04460 ---------C T 01790 IF M=1 THEN 1830
    0x5b050cf04610 ---------C   01800 PRINT:PRINT "TOUGH LUCK, YOU LOSE."
    0x5b050cf04820 ---------C   01810 W=1
    0x5b050cf08ca0 ---------C   01820 GOTO 018202
    0x5b050cf04aa0 ---------C T 01830 PRINT:PRINT:PRINT "CONGRATULATIONS, YOU WIN."
    0x5b050cf04cb0 ---------C   01840 W=1
    0x5b050cf08d00 ---------C   01850 GOTO 01910
    0x5b050cf04f60 ---------C T 01860 IF N>=0 THEN 1890
    0x5b050cf052c0 ---------C   01870 N=N+P
    0x5b050cf05330 ---------C   01880 GOTO 1750
    0x5b050cf05530 ---------C T 01890 W=0
    0x5b050cf08d60 ---------C   01900 GOTO 01910
    0x5b050cf08dc0 ---------C T 01910 RETURN
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
int    I_int;                                     // Basic: I 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    S_int;                                     // Basic: S 
int    W_int;                                     // Basic: W 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01420();
void Routine_01640();

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

void Routine_01420(){
    // 01420 Q=N
    Q_int = N_int;
    // 01430 IF M=1 THEN 1450
    if(M_int==1)goto Lbl_01450;
    // 01440 Q=Q-1
    Q_int = Q_int-1;

  Lbl_01450:
    // 01450 IF M=1 THEN 1500
    if(M_int==1)goto Lbl_01500;
    // 01460 IF N>A THEN 1540
    if(N_int>A_int)goto Lbl_01540;
    // 01470 W=1
    W_int = 1;
    // 01480 PRINT:PRINT "COMPUTER TAKES";N;"AND LOSES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER TAKES"); b2c_INT(buf,N_int);strcat(buf,"AND LOSES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01490 GOTO 01630
    goto Lbl_01630;

  Lbl_01500:
    // 01500 IF N>B THEN 1540
    if(N_int>B_int)goto Lbl_01540;
    // 01510 W=1
    W_int = 1;
    // 01520 PRINT:PRINT "COMPUTER TAKES";N;"AND WINS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER TAKES"); b2c_INT(buf,N_int);strcat(buf,"AND WINS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01530 GOTO 01630
    goto Lbl_01630;

  Lbl_01540:
    // 01540 P=Q-C*INT(Q/C)
    P_int = Q_int-C_int*INT(Q_int/C_int);
    // 01550 IF P>=A THEN 1570
    if(P_int>=A_int)goto Lbl_01570;
    // 01560 P=A
    P_int = A_int;

  Lbl_01570:
    // 01570 IF P<=B THEN 1590
    if(P_int<=B_int)goto Lbl_01590;
    // 01580 P=B
    P_int = B_int;

  Lbl_01590:
    // 01590 N=N-P
    N_int = N_int-P_int;
    // 01600 PRINT:PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER TAKES"); b2c_INT(buf,P_int);strcat(buf,"AND LEAVES"); b2c_INT(buf,N_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01610 W=0
    W_int = 0;
    // 01620 GOTO 01630
    goto Lbl_01630;

  Lbl_01630:
    // 01630 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_01640(){
    // 01640 PRINT:PRINT "YOUR MOVE ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR MOVE ");fputs(buf,fh); };

  Lbl_01650:
    // 01650 INPUT P
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
                (err += b2c_strtoi(&P_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01650
    // 01660 IF P<>0 THEN 1700
    if(P_int!=0)goto Lbl_01700;
    // 01670 PRINT:PRINT:PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01680 W=1
    W_int = 1;
    // 01690 GOTO 01910
    goto Lbl_01910;

  Lbl_01700:
    // 01700 IF P<>INT(P) THEN 1750
    if(P_int!=INT(P_int))goto Lbl_01750;
    // 01710 IF P>=A THEN 1740
    if(P_int>=A_int)goto Lbl_01740;
    // 01720 IF P=N THEN 1790
    if(P_int==N_int)goto Lbl_01790;
    // 01730 GOTO 1750
    goto Lbl_01750;

  Lbl_01740:
    // 01740 IF P<=B THEN 1770
    if(P_int<=B_int)goto Lbl_01770;

  Lbl_01750:
    // 01750 PRINT "ILLEGAL MOVE, REENTER IT ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ILLEGAL MOVE, REENTER IT ");fputs(buf,fh); };
    // 01760 GOTO 1650
    goto Lbl_01650;

  Lbl_01770:
    // 01770 N=N-P
    N_int = N_int-P_int;
    // 01780 IF N<>0 THEN 1860
    if(N_int!=0)goto Lbl_01860;

  Lbl_01790:
    // 01790 IF M=1 THEN 1830
    if(M_int==1)goto Lbl_01830;
    // 01800 PRINT:PRINT "TOUGH LUCK, YOU LOSE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOUGH LUCK, YOU LOSE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01810 W=1
    W_int = 1;
    // 01820 GOTO 018202
    goto Lbl_01910;

  Lbl_01830:
    // 01830 PRINT:PRINT:PRINT "CONGRATULATIONS, YOU WIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONGRATULATIONS, YOU WIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01840 W=1
    W_int = 1;
    // 01850 GOTO 01910
    goto Lbl_01910;

  Lbl_01860:
    // 01860 IF N>=0 THEN 1890
    if(N_int>=0)goto Lbl_01890;
    // 01870 N=N+P
    N_int = N_int+P_int;
    // 01880 GOTO 1750
    goto Lbl_01750;

  Lbl_01890:
    // 01890 W=0
    W_int = 0;
    // 01900 GOTO 01910
    goto Lbl_01910;

  Lbl_01910:
    // 01910 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
