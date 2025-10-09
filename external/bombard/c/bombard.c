/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/bombard.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e93f9cebac0 ---------A   00010 PRINT TAB(33);"BOMBARDMENT"
    0x5e93f9cece70 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e93f9cdb2b0 ---------A   00030 PRINT:PRINT:PRINT
    0x5e93f9cea730 ---------A   00100 PRINT "YOU ARE ON A BATTLEFIELD WITH 4 PLATOONS AND YOU"
    0x5e93f9ceaf80 ---------A   00110 PRINT "HAVE 25 OUTPOSTS AVAILABLE WHERE THEY MAY BE PLACED."
    0x5e93f9ceb410 ---------A   00120 PRINT "YOU CAN ONLY PLACE ONE PLATOON AT ANY ONE OUTPOST."
    0x5e93f9cec660 ---------A   00130 PRINT "THE COMPUTER DOES THE SAME WITH ITS FOUR PLATOONS."
    0x5e93f9ceab70 ---------A   00135 PRINT
    0x5e93f9ced110 ---------A   00140 PRINT "THE OBJECT OF THE GAME IS TO FIRE MISSLES AT THE"
    0x5e93f9ceb670 ---------A   00150 PRINT "OUTPOSTS OF THE COMPUTER.  IT WILL DO THE SAME TO YOU."
    0x5e93f9ceb7c0 ---------A   00160 PRINT "THE ONE WHO DESTROYS ALL FOUR OF THE ENEMY'S PLATOONS"
    0x5e93f9cf2860 ---------A   00170 PRINT "FIRST IS THE WINNER."
    0x5e93f9cf2900 ---------A   00180 PRINT
    0x5e93f9cf2a60 ---------A   00190 PRINT "GOOD LUCK... AND TELL US WHERE YOU WANT THE BODIES SENT!"
    0x5e93f9cf2b00 ---------A   00200 PRINT
    0x5e93f9cf2c50 ---------A   00210 PRINT "TEAR OFF MATRIX AND USE IT TO CHECK OFF THE NUMBERS."
    0x5e93f9cf3090 ---------A   00220 FOR R=1 TO 5: PRINT: NEXT R
    0x5e93f9cf32f0 ---------A   00260 DIM M(100)
    0x5e93f9cea5b0 ---------A   00270 FOR R=1 TO 5
    0x5e93f9cf3b30 ---------A   00280 I=(R-1)*5+1
    0x5e93f9cf4480 ---------A   00290 PRINT I,I+1,I+2,I+3,I+4
    0x5e93f9cf45b0 ---------A   00300 NEXT R
    0x5e93f9cf49e0 ---------A   00350 FOR R=1 TO 10: PRINT: NEXT R
    0x5e93f9cf5080 ---------A   00380 C=INT(RND(1)*25)+1
    0x5e93f9cf5710 ---------A T 00390 D=INT(RND(1)*25)+1
    0x5e93f9cf5da0 ---------A T 00400 E=INT(RND(1)*25)+1
    0x5e93f9cf6430 ---------A T 00410 F=INT(RND(1)*25)+1
    0x5e93f9cf66a0 ---------A   00420 IF C=D THEN 390
    0x5e93f9cf6920 ---------A   00430 IF C=E THEN 400
    0x5e93f9cf6ba0 ---------A   00440 IF C=F THEN 410
    0x5e93f9cf6e20 ---------A   00450 IF D=E THEN 400
    0x5e93f9cf70a0 ---------A   00460 IF D=F THEN 410
    0x5e93f9cf7340 ---------A   00470 IF E=F THEN 410
    0x5e93f9cf76b0 ---------A   00480 PRINT "WHAT ARE YOUR FOUR POSITIONS";
    0x5e93f9cf7da0 ---------A   00490 INPUT G,H,K,L
    0x5e93f9cf7e40 ---------A   00495 PRINT
    0x5e93f9cf7f90 ---------A T 00500 PRINT "WHERE DO YOU WISH TO FIRE YOUR MISSLE";
    0x5e93f9cf81a0 ---------A   00510 INPUT Y
    0x5e93f9cf8420 ---------A   00520 IF Y=C THEN 710
    0x5e93f9cf86a0 ---------A   00530 IF Y=D THEN 710
    0x5e93f9cf8920 ---------A   00540 IF Y=E THEN 710
    0x5e93f9cf8ba0 ---------A   00550 IF Y=F THEN 710
    0x5e93f9cf8c20 ---------A   00560 GOTO 630
    0x5e93f9cf91e0 ---------A T 00570 M=INT(RND(1)*25)+1
    0x5e93f9cf9250 ---------A   00575 GOTO 1160
    0x5e93f9cf9570 ---------A T 00580 IF X=G THEN 920
    0x5e93f9cf97f0 ---------A   00590 IF X=H THEN 920
    0x5e93f9cf9a70 ---------A   00600 IF X=L THEN 920
    0x5e93f9cf9cf0 ---------A   00610 IF X=K THEN 920
    0x5e93f9cf9d90 ---------A   00620 GOTO 670
    0x5e93f9cf9e90 ---------A T 00630 PRINT "HA, HA YOU MISSED. MY TURN NOW:"
    0x5e93f9cf9fd0 ---------A   00640 PRINT: PRINT: GOTO 570
    0x5e93f9cfa330 ---------A T 00670 PRINT "I MISSED YOU, YOU DIRTY RAT. I PICKED";M". YOUR TURN:"
    0x5e93f9cfa440 ---------A   00680 PRINT: PRINT: GOTO 500
    0x5e93f9cfa820 ---------A T 00710 Q=Q+1
    0x5e93f9cfaa80 ---------A   00720 IF Q=4 THEN 890
    0x5e93f9cfabf0 ---------A   00730 PRINT "YOU GOT ONE OF MY OUTPOSTS!"
    0x5e93f9cfae40 ---------A   00740 IF Q=1 THEN 770
    0x5e93f9cfb0a0 ---------A   00750 IF Q=2 THEN 810
    0x5e93f9cfb310 ---------A   00760 IF Q=3 THEN 850
    0x5e93f9cfb490 ---------A T 00770 PRINT "ONE DOWN, THREE TO GO."
    0x5e93f9cfb5b0 ---------A   00780 PRINT: PRINT: GOTO 570
    0x5e93f9cfb700 ---------A T 00810 PRINT "TWO DOWN, TWO TO GO."
    0x5e93f9cfb820 ---------A   00820 PRINT: PRINT: GOTO 570
    0x5e93f9cfb980 ---------A T 00850 PRINT "THREE DOWN, ONE TO GO."
    0x5e93f9cfbed0 ---------A   00860 PRINT: PRINT: GOTO 570
    0x5e93f9cfc040 ---------A T 00890 PRINT "YOU GOT ME, I'M GOING FAST. BUT I'LL GET YOU WHEN"
    0x5e93f9cfc1a0 ---------A   00900 PRINT "MY TRANSISTO&S RECUP%RA*E!"
    0x5e93f9cfc210 ---------A   00910 GOTO 1235
    0x5e93f9cfc5f0 ---------A T 00920 Z=Z+1
    0x5e93f9cfc870 ---------A   00930 IF Z=4 THEN 1110
    0x5e93f9cfcbe0 ---------A   00940 PRINT "I GOT YOU. IT WON'T BE LONG NOW. POST";X;"WAS HIT."
    0x5e93f9cfce30 ---------A   00950 IF Z=1 THEN 990
    0x5e93f9cfd090 ---------A   00960 IF Z=2 THEN 1030
    0x5e93f9cfd310 ---------A   00970 IF Z=3 THEN 1070
    0x5e93f9cfd490 ---------A T 00990 PRINT "YOU HAVE ONLY THREE OUTPOSTS LEFT."
    0x5e93f9cfd5c0 ---------A   01000 PRINT: PRINT: GOTO 500
    0x5e93f9cfd720 ---------A T 01030 PRINT "YOU HAVE ONLY TWO OUTPOSTS LEFT."
    0x5e93f9cfd850 ---------A   01040 PRINT: PRINT: GOTO 500
    0x5e93f9cfd9b0 ---------A T 01070 PRINT "YOU HAVE ONLY ONE OUTPOST LEFT."
    0x5e93f9cfdaf0 ---------A   01080 PRINT: PRINT: GOTO 500
    0x5e93f9cfde50 ---------A T 01110 PRINT "YOU'RE DEAD. YOUR LAST OUTPOST WAS AT";X;". HA, HA, HA."
    0x5e93f9cfdfb0 ---------A   01120 PRINT "BETTER LUCK NEXT TIME."
    0x5e93f9cfe020 ---------A   01150 GOTO 1235
    0x5e93f9cfe400 ---------A T 01160 P=P+1
    0x5e93f9cfe7f0 ---------A   01170 N=P-1
    0x5e93f9cfeba0 ---------A   01180 FOR T=1 TO N
    0x5e93f9cfef00 ---------A   01190 IF M=M(T) THEN 570
    0x5e93f9cff040 ---------A   01200 NEXT T
    0x5e93f9cff280 ---------A   01210 X=M
    0x5e93f9cff590 ---------A   01220 M(P)=M
    0x5e93f9cff600 ---------A   01230 GOTO 580
    0x5e93f9cff640 ---------A T 01235 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00390      00420T
     00400      00430T, 00450T
     00410      00440T, 00460T, 00470T
     00500      00680T, 01000T, 01040T, 01080T
     00570      00640T, 00780T, 00820T, 00860T, 01190T
     00580      01230T
     00630      00560T
     00670      00620T
     00710      00520T, 00530T, 00540T, 00550T
     00770      00740T
     00810      00750T
     00850      00760T
     00890      00720T
     00920      00580T, 00590T, 00600T, 00610T
     00990      00950T
     01030      00960T
     01070      00970T
     01110      00930T
     01160      00575T
     01235      00910T, 01150T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5e93f9cebac0 (00010)   0x000000000000 (00000)   0x5e93f9cff640 (01235)   0x5e93f9cff640 (01235)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01930 - 10000    8080 

 */



/*
 *  Symbol Table Listing for 'basic/bombard.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    C                        Float       
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Float       
    E                        Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Float       
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Float       
    H                        Float       
    HEX$            Function String          args=1, int    
    I                        Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K                        Float       
    L                        Float       
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M               Array    Float           {0,99} 
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
    R                        Float       
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
    T                        Float       
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Float       
    Y                        Float       
    Z                        Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/bombard.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e93f9cebac0 ---------A   01000 PRINT TAB(33);"BOMBARDMENT"
    0x5e93f9cece70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e93f9cdb2b0 ---------A   01020 PRINT:PRINT:PRINT
    0x5e93f9cea730 ---------A   01030 PRINT "YOU ARE ON A BATTLEFIELD WITH 4 PLATOONS AND YOU"
    0x5e93f9ceaf80 ---------A   01040 PRINT "HAVE 25 OUTPOSTS AVAILABLE WHERE THEY MAY BE PLACED."
    0x5e93f9ceb410 ---------A   01050 PRINT "YOU CAN ONLY PLACE ONE PLATOON AT ANY ONE OUTPOST."
    0x5e93f9cec660 ---------A   01060 PRINT "THE COMPUTER DOES THE SAME WITH ITS FOUR PLATOONS."
    0x5e93f9ceab70 ---------A   01070 PRINT
    0x5e93f9ced110 ---------A   01080 PRINT "THE OBJECT OF THE GAME IS TO FIRE MISSLES AT THE"
    0x5e93f9ceb670 ---------A   01090 PRINT "OUTPOSTS OF THE COMPUTER.  IT WILL DO THE SAME TO YOU."
    0x5e93f9ceb7c0 ---------A   01100 PRINT "THE ONE WHO DESTROYS ALL FOUR OF THE ENEMY'S PLATOONS"
    0x5e93f9cf2860 ---------A   01110 PRINT "FIRST IS THE WINNER."
    0x5e93f9cf2900 ---------A   01120 PRINT
    0x5e93f9cf2a60 ---------A   01130 PRINT "GOOD LUCK... AND TELL US WHERE YOU WANT THE BODIES SENT!"
    0x5e93f9cf2b00 ---------A   01140 PRINT
    0x5e93f9cf2c50 ---------A   01150 PRINT "TEAR OFF MATRIX AND USE IT TO CHECK OFF THE NUMBERS."
    0x5e93f9cf3090 ---------A   01160 FOR R=1 TO 5: PRINT: NEXT R
    0x5e93f9cf32f0 ---------A   01170 DIM M(100)
    0x5e93f9cea5b0 ---------A   01180 FOR R=1 TO 5
    0x5e93f9cf3b30 ---------A   01190 I=(R-1)*5+1
    0x5e93f9cf4480 ---------A   01200 PRINT I,I+1,I+2,I+3,I+4
    0x5e93f9cf45b0 ---------A   01210 NEXT R
    0x5e93f9cf49e0 ---------A   01220 FOR R=1 TO 10: PRINT: NEXT R
    0x5e93f9cf5080 ---------A   01230 C=INT(RND(1)*25)+1
    0x5e93f9cf5710 ---------A T 01240 D=INT(RND(1)*25)+1
    0x5e93f9cf5da0 ---------A T 01250 E=INT(RND(1)*25)+1
    0x5e93f9cf6430 ---------A T 01260 F=INT(RND(1)*25)+1
    0x5e93f9cf66a0 ---------A   01270 IF C=D THEN 1240
    0x5e93f9cf6920 ---------A   01280 IF C=E THEN 1250
    0x5e93f9cf6ba0 ---------A   01290 IF C=F THEN 1260
    0x5e93f9cf6e20 ---------A   01300 IF D=E THEN 1250
    0x5e93f9cf70a0 ---------A   01310 IF D=F THEN 1260
    0x5e93f9cf7340 ---------A   01320 IF E=F THEN 1260
    0x5e93f9cf76b0 ---------A   01330 PRINT "WHAT ARE YOUR FOUR POSITIONS";
    0x5e93f9cf7da0 ---------A   01340 INPUT G,H,K,L
    0x5e93f9cf7e40 ---------A   01350 PRINT
    0x5e93f9cf7f90 ---------A T 01360 PRINT "WHERE DO YOU WISH TO FIRE YOUR MISSLE";
    0x5e93f9cf81a0 ---------A   01370 INPUT Y
    0x5e93f9cf8420 ---------A   01380 IF Y=C THEN 1540
    0x5e93f9cf86a0 ---------A   01390 IF Y=D THEN 1540
    0x5e93f9cf8920 ---------A   01400 IF Y=E THEN 1540
    0x5e93f9cf8ba0 ---------A   01410 IF Y=F THEN 1540
    0x5e93f9cf8c20 ---------A   01420 GOTO 1500
    0x5e93f9cf91e0 ---------A T 01430 M=INT(RND(1)*25)+1
    0x5e93f9cf9250 ---------A   01440 GOTO 1840
    0x5e93f9cf9570 ---------A T 01450 IF X=G THEN 1690
    0x5e93f9cf97f0 ---------A   01460 IF X=H THEN 1690
    0x5e93f9cf9a70 ---------A   01470 IF X=L THEN 1690
    0x5e93f9cf9cf0 ---------A   01480 IF X=K THEN 1690
    0x5e93f9cf9d90 ---------A   01490 GOTO 1520
    0x5e93f9cf9e90 ---------A T 01500 PRINT "HA, HA YOU MISSED. MY TURN NOW:"
    0x5e93f9cf9fd0 ---------A   01510 PRINT: PRINT: GOTO 1430
    0x5e93f9cfa330 ---------A T 01520 PRINT "I MISSED YOU, YOU DIRTY RAT. I PICKED";M". YOUR TURN:"
    0x5e93f9cfa440 ---------A   01530 PRINT: PRINT: GOTO 1360
    0x5e93f9cfa820 ---------A T 01540 Q=Q+1
    0x5e93f9cfaa80 ---------A   01550 IF Q=4 THEN 1660
    0x5e93f9cfabf0 ---------A   01560 PRINT "YOU GOT ONE OF MY OUTPOSTS!"
    0x5e93f9cfae40 ---------A   01570 IF Q=1 THEN 1600
    0x5e93f9cfb0a0 ---------A   01580 IF Q=2 THEN 1620
    0x5e93f9cfb310 ---------A   01590 IF Q=3 THEN 1640
    0x5e93f9cfb490 ---------A T 01600 PRINT "ONE DOWN, THREE TO GO."
    0x5e93f9cfb5b0 ---------A   01610 PRINT: PRINT: GOTO 1430
    0x5e93f9cfb700 ---------A T 01620 PRINT "TWO DOWN, TWO TO GO."
    0x5e93f9cfb820 ---------A   01630 PRINT: PRINT: GOTO 1430
    0x5e93f9cfb980 ---------A T 01640 PRINT "THREE DOWN, ONE TO GO."
    0x5e93f9cfbed0 ---------A   01650 PRINT: PRINT: GOTO 1430
    0x5e93f9cfc040 ---------A T 01660 PRINT "YOU GOT ME, I'M GOING FAST. BUT I'LL GET YOU WHEN"
    0x5e93f9cfc1a0 ---------A   01670 PRINT "MY TRANSISTO&S RECUP%RA*E!"
    0x5e93f9cfc210 ---------A   01680 GOTO 1920
    0x5e93f9cfc5f0 ---------A T 01690 Z=Z+1
    0x5e93f9cfc870 ---------A   01700 IF Z=4 THEN 1810
    0x5e93f9cfcbe0 ---------A   01710 PRINT "I GOT YOU. IT WON'T BE LONG NOW. POST";X;"WAS HIT."
    0x5e93f9cfce30 ---------A   01720 IF Z=1 THEN 1750
    0x5e93f9cfd090 ---------A   01730 IF Z=2 THEN 1770
    0x5e93f9cfd310 ---------A   01740 IF Z=3 THEN 1790
    0x5e93f9cfd490 ---------A T 01750 PRINT "YOU HAVE ONLY THREE OUTPOSTS LEFT."
    0x5e93f9cfd5c0 ---------A   01760 PRINT: PRINT: GOTO 1360
    0x5e93f9cfd720 ---------A T 01770 PRINT "YOU HAVE ONLY TWO OUTPOSTS LEFT."
    0x5e93f9cfd850 ---------A   01780 PRINT: PRINT: GOTO 1360
    0x5e93f9cfd9b0 ---------A T 01790 PRINT "YOU HAVE ONLY ONE OUTPOST LEFT."
    0x5e93f9cfdaf0 ---------A   01800 PRINT: PRINT: GOTO 1360
    0x5e93f9cfde50 ---------A T 01810 PRINT "YOU'RE DEAD. YOUR LAST OUTPOST WAS AT";X;". HA, HA, HA."
    0x5e93f9cfdfb0 ---------A   01820 PRINT "BETTER LUCK NEXT TIME."
    0x5e93f9cfe020 ---------A   01830 GOTO 1920
    0x5e93f9cfe400 ---------A T 01840 P=P+1
    0x5e93f9cfe7f0 ---------A   01850 N=P-1
    0x5e93f9cfeba0 ---------A   01860 FOR T=1 TO N
    0x5e93f9cfef00 ---------A   01870 IF M=M(T) THEN 1430
    0x5e93f9cff040 ---------A   01880 NEXT T
    0x5e93f9cff280 ---------A   01890 X=M
    0x5e93f9cff590 ---------A   01900 M(P)=M
    0x5e93f9cff600 ---------A   01910 GOTO 1450
    0x5e93f9cff640 ---------A T 01920 END
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
float  C_flt;                                     // Basic: C 
float  D_flt;                                     // Basic: D 
float  E_flt;                                     // Basic: E 
float  F_flt;                                     // Basic: F 
float  G_flt;                                     // Basic: G 
float  H_flt;                                     // Basic: H 
float  I_flt;                                     // Basic: I 
float  K_flt;                                     // Basic: K 
float  L_flt;                                     // Basic: L 
float  M_flt_arr[100];                            // Basic: M 
float  N_flt;                                     // Basic: N 
float  P_flt;                                     // Basic: P 
float  Q_flt;                                     // Basic: Q 
float  R_flt;                                     // Basic: R 
float  T_flt;                                     // Basic: T 
float  X_flt;                                     // Basic: X 
float  Y_flt;                                     // Basic: Y 
float  Z_flt;                                     // Basic: Z 
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
