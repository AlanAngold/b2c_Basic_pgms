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
    0x590df2f91ac0 ---------A   00010 PRINT TAB(33);"BATNUM"
    0x590df2f92e70 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x590df2f812b0 ---------A   00030 PRINT:PRINT:PRINT
    0x590df2f90960 ---------A   00110 PRINT "THIS PROGRAM IS A 'BATTLE OF NUMBERS' GAME, WHERE THE"
    0x590df2f90770 ---------A   00120 PRINT "COMPUTER IS YOUR OPPONENT."
    0x590df2f90f80 ---------A   00130 PRINT 
    0x590df2f913c0 ---------A   00140 PRINT "THE GAME STARTS WITH AN ASSUMED PILE OF OBJECTS. YOU"
    0x590df2f90b20 ---------A   00150 PRINT "AND YOUR OPPONENT ALTERNATELY REMOVE OBJECTS FROM THE PILE."
    0x590df2f930d0 ---------A   00160 PRINT "WINNING IS DEFINED IN ADVANCE AS TAKING THE LAST OBJECT OR"
    0x590df2f915f0 ---------A   00170 PRINT "NOT. YOU CAN ALSO SPECIFY SOME OTHER BEGINNING CONDITIONS."
    0x590df2f91790 ---------A   00180 PRINT "DON'T USE ZERO, HOWEVER, IN PLAYING THE GAME."
    0x590df2f988b0 ---------A   00190 PRINT "ENTER A NEGATIVE NUMBER FOR NEW PILE SIZE TO STOP PLAYING."
    0x590df2f98900 ---------A   00200 PRINT
    0x590df2f98950 ---------A   00210 GOTO 330
    0x590df2f90610 ---------A T 00220 FOR I=1 TO 10
    0x590df2f98c70 ---------A   00230 PRINT
    0x590df2f98d80 ---------A   00240 NEXT I
    0x590df2f905b0 ---------A T 00330 INPUT "ENTER PILE SIZE";N
    0x590df2f99100 ---------A   00350 IF N>=1 THEN 370
    0x590df2f99160 ---------A   00360 GOTO 330
    0x590df2f994a0 ---------A T 00370 IF N<>INT(N) THEN 220
    0x590df2f99730 ---------A   00380 IF N<1 THEN 220
    0x590df2f99990 ---------A T 00390 INPUT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ";M
    0x590df2f99bf0 ---------A   00410 IF M=1 THEN 430
    0x590df2f99e30 ---------A   00420 IF M<>2 THEN 390
    0x590df2f9a210 ---------A T 00430 INPUT "ENTER MIN AND MAX ";A,B
    0x590df2f9a490 ---------A   00450 IF A>B THEN 430
    0x590df2f9a6d0 ---------A   00460 IF A<1 THEN 430
    0x590df2f9aa10 ---------A   00470 IF A<>INT(A) THEN 430
    0x590df2f9ada0 ---------A   00480 IF B<>INT(B) THEN 430
    0x590df2f9b000 ---------A T 00490 INPUT "ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ";S
    0x590df2f9b0d0 ---------A   00500 PRINT:PRINT
    0x590df2f9b320 ---------A   00510 IF S=1 THEN 530
    0x590df2f9b790 ---------A   00520 IF S<>2 THEN 490
    0x590df2f9bbb0 ---------A T 00530 C=A+B
    0x590df2f9be00 ---------A   00540 IF S=2 THEN 570
    0x590df2f9be80 ---------A T 00550 GOSUB 600
    0x590df2f9c180 ---------A   00560 IF W=1 THEN 220
    0x590df2f9c200 ---------A T 00570 GOSUB 810
    0x590df2f9c440 ---------A   00580 IF W=1 THEN 220
    0x590df2f9c4c0 ---------A   00590 GOTO 550
    0x590df2f9c7a0 ---------B G 00600 Q=N
    0x590df2f9c9f0 ---------B   00610 IF M=1 THEN 630
    0x590df2f9cd30 ---------B   00620 Q=Q-1
    0x590df2f9cf80 ---------B T 00630 IF M=1 THEN 680
    0x590df2f9d200 ---------B   00640 IF N>A THEN 720
    0x590df2f9d440 ---------B   00650 W=1
    0x590df2f9d790 ---------B   00660 PRINT "COMPUTER TAKES";N;"AND LOSES."
    0x590df2f9d7e0 ---------B   00670 RETURN
    0x590df2f9da60 ---------B T 00680 IF N>B THEN 720
    0x590df2f9dca0 ---------B   00690 W=1
    0x590df2f9dff0 ---------B   00700 PRINT "COMPUTER TAKES";N;"AND WINS."
    0x590df2f9e040 ---------B   00710 RETURN
    0x590df2f9e780 ---------B T 00720 P=Q-C*INT(Q/C)
    0x590df2f9e9f0 ---------B   00730 IF P>=A THEN 750
    0x590df2f9ec30 ---------B   00740 P=A
    0x590df2f9eea0 ---------B T 00750 IF P<=B THEN 770
    0x590df2f9f0e0 ---------B   00760 P=B
    0x590df2f9f450 ---------B T 00770 N=N-P
    0x590df2f9f8a0 ---------B   00780 PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    0x590df2f9fab0 ---------B   00790 W=0
    0x590df2f9fb00 ---------B   00800 RETURN
    0x590df2f9fcb0 ---------C G 00810 PRINT:PRINT "YOUR MOVE ";
    0x590df2f9fe00 ---------C T 00820 INPUT P
    0x590df2fa0090 ---------C   00830 IF P<>0 THEN 870
    0x590df2fa0620 ---------C   00840 PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    0x590df2fa0830 ---------C   00850 W=1
    0x590df2fa0880 ---------C   00860 RETURN
    0x590df2fa0bf0 ---------C T 00870 IF P<>INT(P) THEN 920
    0x590df2fa0e70 ---------C   00880 IF P>=A THEN 910
    0x590df2fa10f0 ---------C   00890 IF P=N THEN 960
    0x590df2fa1170 ---------C   00900 GOTO 920
    0x590df2fa13e0 ---------C T 00910 IF P<=B THEN 940
    0x590df2fa1570 ---------C T 00920 PRINT "ILLEGAL MOVE, REENTER IT ";
    0x590df2fa15e0 ---------C   00930 GOTO 820
    0x590df2fa1920 ---------C T 00940 N=N-P
    0x590df2fa1b70 ---------C   00950 IF N<>0 THEN 1030
    0x590df2fa1de0 ---------C T 00960 IF M=1 THEN 1000
    0x590df2fa1f40 ---------C   00970 PRINT "TOUGH LUCK, YOU LOSE."
    0x590df2fa2150 ---------C   00980 W=1
    0x590df2fa21a0 ---------C   00990 RETURN
    0x590df2fa2320 ---------C T 01000 PRINT "CONGRATULATIONS, YOU WIN."
    0x590df2fa2530 ---------C   01010 W=1
    0x590df2fa2580 ---------C   01020 RETURN
    0x590df2fa27e0 ---------C T 01030 IF N>=0 THEN 1060
    0x590df2fa2b40 ---------C   01040 N=N+P
    0x590df2fa2bb0 ---------C   01050 GOTO 920
    0x590df2fa2db0 ---------C T 01060 W=0
    0x590df2fa2e00 ---------C   01070 RETURN
    0x590df2fa2e60 ---------A   01080 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00220      00370T, 00380T, 00560T, 00580T
     00330      00210T, 00360T
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
   A) 0x590df2f91ac0 (00010)   0x000000000000 (00000)   0x590df2fa2e60 (01080)   0x590df2fa2e60 (01080)   
   B) 0x590df2f9c7a0 (00600)   0x590df2f9c7a0 (00600)   0x590df2f9d7e0 (00670)   0x590df2f9fb00 (00800)   
   C) 0x590df2f9fcb0 (00810)   0x590df2f9fcb0 (00810)   0x590df2fa0880 (00860)   0x590df2fa2e00 (01070)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

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
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Float       
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
    M                        Float       
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Float       
    OCT$            Function String          args=1, float  
    P                        Float       
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
    W                        Float       

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
    0x590df2f91ac0 ---------A   01000 PRINT TAB(33);"BATNUM"
    0x590df2f92e70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x590df2f812b0 ---------A   01020 PRINT:PRINT:PRINT
    0x590df2f90960 ---------A   01030 PRINT "THIS PROGRAM IS A 'BATTLE OF NUMBERS' GAME, WHERE THE"
    0x590df2f90770 ---------A   01040 PRINT "COMPUTER IS YOUR OPPONENT."
    0x590df2f90f80 ---------A   01050 PRINT 
    0x590df2f913c0 ---------A   01060 PRINT "THE GAME STARTS WITH AN ASSUMED PILE OF OBJECTS. YOU"
    0x590df2f90b20 ---------A   01070 PRINT "AND YOUR OPPONENT ALTERNATELY REMOVE OBJECTS FROM THE PILE."
    0x590df2f930d0 ---------A   01080 PRINT "WINNING IS DEFINED IN ADVANCE AS TAKING THE LAST OBJECT OR"
    0x590df2f915f0 ---------A   01090 PRINT "NOT. YOU CAN ALSO SPECIFY SOME OTHER BEGINNING CONDITIONS."
    0x590df2f91790 ---------A   01100 PRINT "DON'T USE ZERO, HOWEVER, IN PLAYING THE GAME."
    0x590df2f988b0 ---------A   01110 PRINT "ENTER A NEGATIVE NUMBER FOR NEW PILE SIZE TO STOP PLAYING."
    0x590df2f98900 ---------A   01120 PRINT
    0x590df2f98950 ---------A   01130 GOTO 1170
    0x590df2f90610 ---------A T 01140 FOR I=1 TO 10
    0x590df2f98c70 ---------A   01150 PRINT
    0x590df2f98d80 ---------A   01160 NEXT I
    0x590df2f905b0 ---------A T 01170 INPUT "ENTER PILE SIZE";N
    0x590df2f99100 ---------A   01180 IF N>=1 THEN 1200
    0x590df2f99160 ---------A   01190 GOTO 1170
    0x590df2f994a0 ---------A T 01200 IF N<>INT(N) THEN 1140
    0x590df2f99730 ---------A   01210 IF N<1 THEN 1140
    0x590df2f99990 ---------A T 01220 INPUT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ";M
    0x590df2f99bf0 ---------A   01230 IF M=1 THEN 1250
    0x590df2f99e30 ---------A   01240 IF M<>2 THEN 1220
    0x590df2f9a210 ---------A T 01250 INPUT "ENTER MIN AND MAX ";A,B
    0x590df2f9a490 ---------A   01260 IF A>B THEN 1250
    0x590df2f9a6d0 ---------A   01270 IF A<1 THEN 1250
    0x590df2f9aa10 ---------A   01280 IF A<>INT(A) THEN 1250
    0x590df2f9ada0 ---------A   01290 IF B<>INT(B) THEN 1250
    0x590df2f9b000 ---------A T 01300 INPUT "ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ";S
    0x590df2f9b0d0 ---------A   01310 PRINT:PRINT
    0x590df2f9b320 ---------A   01320 IF S=1 THEN 1340
    0x590df2f9b790 ---------A   01330 IF S<>2 THEN 1300
    0x590df2f9bbb0 ---------A T 01340 C=A+B
    0x590df2f9be00 ---------A   01350 IF S=2 THEN 1380
    0x590df2f9be80 ---------A T 01360 GOSUB 1420
    0x590df2f9c180 ---------A   01370 IF W=1 THEN 1140
    0x590df2f9c200 ---------A T 01380 GOSUB 1640
    0x590df2f9c440 ---------A   01390 IF W=1 THEN 1140
    0x590df2f9c4c0 ---------A   01400 GOTO 1360
    0x590df2fa2e60 ---------A   01410 END
    0x590df2f9c7a0 ---------B G 01420 Q=N
    0x590df2f9c9f0 ---------B   01430 IF M=1 THEN 1450
    0x590df2f9cd30 ---------B   01440 Q=Q-1
    0x590df2f9cf80 ---------B T 01450 IF M=1 THEN 1500
    0x590df2f9d200 ---------B   01460 IF N>A THEN 1540
    0x590df2f9d440 ---------B   01470 W=1
    0x590df2f9d790 ---------B   01480 PRINT "COMPUTER TAKES";N;"AND LOSES."
    0x590df2fa5f00 ---------B   01490 GOTO 01630
    0x590df2f9da60 ---------B T 01500 IF N>B THEN 1540
    0x590df2f9dca0 ---------B   01510 W=1
    0x590df2f9dff0 ---------B   01520 PRINT "COMPUTER TAKES";N;"AND WINS."
    0x590df2fa5f40 ---------B   01530 GOTO 01630
    0x590df2f9e780 ---------B T 01540 P=Q-C*INT(Q/C)
    0x590df2f9e9f0 ---------B   01550 IF P>=A THEN 1570
    0x590df2f9ec30 ---------B   01560 P=A
    0x590df2f9eea0 ---------B T 01570 IF P<=B THEN 1590
    0x590df2f9f0e0 ---------B   01580 P=B
    0x590df2f9f450 ---------B T 01590 N=N-P
    0x590df2f9f8a0 ---------B   01600 PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    0x590df2f9fab0 ---------B   01610 W=0
    0x590df2fa5f80 ---------B   01620 GOTO 01630
    0x590df2fa5fe0 ---------B T 01630 RETURN
    0x590df2f9fcb0 ---------C G 01640 PRINT:PRINT "YOUR MOVE ";
    0x590df2f9fe00 ---------C T 01650 INPUT P
    0x590df2fa0090 ---------C   01660 IF P<>0 THEN 1700
    0x590df2fa0620 ---------C   01670 PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    0x590df2fa0830 ---------C   01680 W=1
    0x590df2fa6450 ---------C   01690 GOTO 01910
    0x590df2fa0bf0 ---------C T 01700 IF P<>INT(P) THEN 1750
    0x590df2fa0e70 ---------C   01710 IF P>=A THEN 1740
    0x590df2fa10f0 ---------C   01720 IF P=N THEN 1790
    0x590df2fa1170 ---------C   01730 GOTO 1750
    0x590df2fa13e0 ---------C T 01740 IF P<=B THEN 1770
    0x590df2fa1570 ---------C T 01750 PRINT "ILLEGAL MOVE, REENTER IT ";
    0x590df2fa15e0 ---------C   01760 GOTO 1650
    0x590df2fa1920 ---------C T 01770 N=N-P
    0x590df2fa1b70 ---------C   01780 IF N<>0 THEN 1860
    0x590df2fa1de0 ---------C T 01790 IF M=1 THEN 1830
    0x590df2fa1f40 ---------C   01800 PRINT "TOUGH LUCK, YOU LOSE."
    0x590df2fa2150 ---------C   01810 W=1
    0x590df2fa64b0 ---------C   01820 GOTO 018202
    0x590df2fa2320 ---------C T 01830 PRINT "CONGRATULATIONS, YOU WIN."
    0x590df2fa2530 ---------C   01840 W=1
    0x590df2fa6510 ---------C   01850 GOTO 01910
    0x590df2fa27e0 ---------C T 01860 IF N>=0 THEN 1890
    0x590df2fa2b40 ---------C   01870 N=N+P
    0x590df2fa2bb0 ---------C   01880 GOTO 1750
    0x590df2fa2db0 ---------C T 01890 W=0
    0x590df2fa6570 ---------C   01900 GOTO 01910
    0x590df2fa65d0 ---------C T 01910 RETURN
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
float  B_flt;                                     // Basic: B 
float  C_flt;                                     // Basic: C 
float  I_flt;                                     // Basic: I 
float  M_flt;                                     // Basic: M 
float  N_flt;                                     // Basic: N 
float  P_flt;                                     // Basic: P 
float  Q_flt;                                     // Basic: Q 
float  S_flt;                                     // Basic: S 
float  W_flt;                                     // Basic: W 
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
    Q_flt = N_flt;
    // 01430 IF M=1 THEN 1450
    if(M_flt==1)goto Lbl_01450;
    // 01440 Q=Q-1
    Q_flt = Q_flt-1;

  Lbl_01450:
    // 01450 IF M=1 THEN 1500
    if(M_flt==1)goto Lbl_01500;
    // 01460 IF N>A THEN 1540
    if(N_flt>A_flt)goto Lbl_01540;
    // 01470 W=1
    W_flt = 1;
    // 01480 PRINT "COMPUTER TAKES";N;"AND LOSES."
    b2c_printf("Computer takes %.2f Computer takesAnd loses.\n",N_flt);
    // 01490 GOTO 01630
    goto Lbl_01630;

  Lbl_01500:
    // 01500 IF N>B THEN 1540
    if(N_flt>B_flt)goto Lbl_01540;
    // 01510 W=1
    W_flt = 1;
    // 01520 PRINT "COMPUTER TAKES";N;"AND WINS."
    b2c_printf("Computer takes %.2f Computer takesAnd wins.\n",N_flt);
    // 01530 GOTO 01630
    goto Lbl_01630;

  Lbl_01540:
    // 01540 P=Q-C*INT(Q/C)
    P_flt = Q_flt-C_flt*INT(Q_flt/C_flt);
    // 01550 IF P>=A THEN 1570
    if(P_flt>=A_flt)goto Lbl_01570;
    // 01560 P=A
    P_flt = A_flt;

  Lbl_01570:
    // 01570 IF P<=B THEN 1590
    if(P_flt<=B_flt)goto Lbl_01590;
    // 01580 P=B
    P_flt = B_flt;

  Lbl_01590:
    // 01590 N=N-P
    N_flt = N_flt-P_flt;
    // 01600 PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    b2c_printf("Computer takes %.2f Computer takesAnd leavesAnd leaves %.2f \n",P_flt,N_flt);
    // 01610 W=0
    W_flt = 0;
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
    b2c_printf("Your move ");

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
                (err += b2c_strtof(&P_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01650
    // 01660 IF P<>0 THEN 1700
    if(P_flt!=0)goto Lbl_01700;
    // 01670 PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    b2c_printf("I told you not to use zero! Computer wins by forfeit.\n");
    // 01680 W=1
    W_flt = 1;
    // 01690 GOTO 01910
    goto Lbl_01910;

  Lbl_01700:
    // 01700 IF P<>INT(P) THEN 1750
    if(P_flt!=INT(P_flt))goto Lbl_01750;
    // 01710 IF P>=A THEN 1740
    if(P_flt>=A_flt)goto Lbl_01740;
    // 01720 IF P=N THEN 1790
    if(P_flt==N_flt)goto Lbl_01790;
    // 01730 GOTO 1750
    goto Lbl_01750;

  Lbl_01740:
    // 01740 IF P<=B THEN 1770
    if(P_flt<=B_flt)goto Lbl_01770;

  Lbl_01750:
    // 01750 PRINT "ILLEGAL MOVE, REENTER IT ";
    b2c_printf("Illegal move, reenter it ");
    // 01760 GOTO 1650
    goto Lbl_01650;

  Lbl_01770:
    // 01770 N=N-P
    N_flt = N_flt-P_flt;
    // 01780 IF N<>0 THEN 1860
    if(N_flt!=0)goto Lbl_01860;

  Lbl_01790:
    // 01790 IF M=1 THEN 1830
    if(M_flt==1)goto Lbl_01830;
    // 01800 PRINT "TOUGH LUCK, YOU LOSE."
    b2c_printf("Tough luck, you lose.\n");
    // 01810 W=1
    W_flt = 1;
    // 01820 GOTO 018202
    goto Lbl_01910;

  Lbl_01830:
    // 01830 PRINT "CONGRATULATIONS, YOU WIN."
    b2c_printf("Congratulations, you win.\n");
    // 01840 W=1
    W_flt = 1;
    // 01850 GOTO 01910
    goto Lbl_01910;

  Lbl_01860:
    // 01860 IF N>=0 THEN 1890
    if(N_flt>=0)goto Lbl_01890;
    // 01870 N=N+P
    N_flt = N_flt+P_flt;
    // 01880 GOTO 1750
    goto Lbl_01750;

  Lbl_01890:
    // 01890 W=0
    W_flt = 0;
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
