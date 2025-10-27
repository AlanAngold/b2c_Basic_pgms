/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/war.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x63f596975b60 ---------A   00010 PRINT TAB(33);"WAR"
    0x63f596976e70 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x63f5969752d0 ---------A   00030 PRINT: PRINT: PRINT
    0x63f5969652f0 ---------A   00100 PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    0x63f596976a20 ---------A   00110 PRINT "AS S-7 FOR SPADE 7.  ";
    0x63f596974e40 ---------A T 00120 PRINT "DO YOU WANT DIRECTIONS";
    0x63f5969746d0 ---------A   00130 INPUT B$
    0x63f596974670 ---------A   00140 IF B$="NO" THEN 210
    0x63f596975660 ---------A   00150 IF B$="YES" THEN 180
    0x63f596975040 ---------A   00160 PRINT "YES OR NO, PLEASE.  ";
    0x63f596975830 ---------A   00170 GOTO 120
    0x63f59697c910 ---------A T 00180 PRINT "THE COMPUTER GIVES YOU AND IT A 'CARD'.  THE HIGHER CARD"
    0x63f59697cac0 ---------A   00190 PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NOT TO"
    0x63f59697cc10 ---------A   00200 PRINT "CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    0x63f59697cc60 ---------A T 00210 PRINT
    0x63f59697ccb0 ---------A   00220 PRINT
    0x63f59697d1a0 ---------A   00230 DIM A$(52),L(54)
    0x63f59697d520 ---------A   00240 FOR I=1 TO 52
    0x63f59697d760 ---------A   00250 READ A$(I)
    0x63f59697d880 ---------A   00260 NEXT I
    0x63f59697d900 ---------A   00270 REM
    0x63f59697dc80 ---------A   00280 FOR J=1 TO 52
    0x63f59697e340 ---------A T 00290 LET L(J)=INT(52*RND(1))+1
    0x63f59697e590 ---------A   00295 IF J=1 THEN 350
    0x63f59697ea30 ---------A   00300 FOR K=1 TO J-1
    0x63f59697ee70 ---------A   00310 IF L(K)<>L(J) THEN 340
    0x63f59697eef0 ---------A   00320 REM
    0x63f59697ef70 ---------A   00330 GOTO 290
    0x63f59697f090 ---------A T 00340 NEXT K
    0x63f59697f1d0 ---------A T 00350 NEXT J
    0x63f59697f5d0 ---------A T 00360 P=P+1
    0x63f59697f9a0 ---------A   00370 M1=L(P)
    0x63f59697fcd0 ---------A   00380 P=P+1
    0x63f5969802b0 ---------A   00390 M2=L(P)
    0x63f596980340 ---------A   00400 PRINT
    0x63f596980950 ---------A   00420 PRINT "YOU: ";A$(M1),"COMPUTER: ";A$(M2)
    0x63f596980f60 ---------A   00430 N1=INT((M1-.5)/4)
    0x63f596981570 ---------A   00440 N2=INT((M2-.5)/4)
    0x63f5969817e0 ---------A   00450 IF N1>=N2 THEN 490
    0x63f596981c10 ---------A   00460 A1=A1+1
    0x63f596982130 ---------A   00470 PRINT "THE COMPUTER WINS!!! YOU HAVE";B1;"AND THE COMPUTER HAS";A1
    0x63f5969821a0 ---------A   00480 GOTO 540
    0x63f596982400 ---------A T 00490 IF N1=N2 THEN 530
    0x63f596982770 ---------A   00500 B1=B1+1
    0x63f596982bc0 ---------A   00510 PRINT "YOU WIN. YOU HAVE";B1;"AND THE COMPUTER HAS";A1
    0x63f596982c40 ---------A   00520 GOTO 540
    0x63f596982da0 ---------A T 00530 PRINT "TIE.  NO SCORE CHANGE."
    0x63f5969831e0 ---------A T 00540 IF L(P+1)=0 THEN 610
    0x63f596983370 ---------A   00550 PRINT "DO YOU WANT TO CONTINUE";
    0x63f596983590 ---------A   00560 INPUT V$
    0x63f596983810 ---------A   00570 IF V$="YES" THEN 360
    0x63f596983aa0 ---------A   00580 IF V$="NO" THEN 650
    0x63f596983c20 ---------A   00590 PRINT "YES OR NO, PLEASE.  ";
    0x63f596983c90 ---------A   00600 GOTO 540
    0x63f596983cf0 ---------A T 00610 PRINT
    0x63f596983d90 ---------A   00620 PRINT
    0x63f596984030 ---------A   00630 PRINT "WE HAVE RUN OUT OF CARDS.  FINAL SCORE:  YOU: ";B1;
    0x63f5969842f0 ---------A   00640 PRINT "  THE COMPUTER: ";A1:PRINT
    0x63f596984450 ---------A T 00650 PRINT "THANKS FOR PLAYING.  IT WAS FUN."
    0x63f5969844f0 ---------A   00655 PRINT
    0x63f596984c90 ---------A   00660 DATA "S-2","H-2","C-2","D-2","S-3","H-3","C-3","D-3"
    0x63f596985430 ---------A   00670 DATA "S-4","H-4","C-4","D-4","S-5","H-5","C-5","D-5"
    0x63f596985bd0 ---------A   00680 DATA "S-6","H-6","C-6","D-6","S-7","H-7","C-7","D-7"
    0x63f596986370 ---------A   00690 DATA "S-8","H-8","C-8","D-8","S-9","H-9","C-9","D-9"
    0x63f596986b10 ---------A   00700 DATA "S-10","H-10","C-10","D-10","S-J","H-J","C-J","D-J"
    0x63f5969876a0 ---------A   00710 DATA "S-Q","H-Q","C-Q","D-Q","S-K","H-K","C-K","D-K"
    0x63f596987a90 ---------A   00720 DATA "S-A","H-A","C-A","D-A"
    0x63f596987ae0 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00120      00170T
     00180      00150T
     00210      00140T
     00290      00330T
     00340      00310T
     00350      00295T
     00360      00570T
     00490      00450T
     00530      00490T
     00540      00480T, 00520T, 00600T
     00610      00540T
     00650      00580T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x63f596975b60 (00010)   0x63f596975b60 (00010)   0x63f596987ae0 (00999)   0x63f596987ae0 (00999)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01680 - 10000    8330 

 */



/*
 *  Symbol Table Listing for 'basic/war.bas'
 *
    A$              Array    String          {0,51} 
    A1                       Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$                       String      
    B1                       Integer     
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
    J                        Integer     
    K                        Integer     
    L               Array    Integer         {0,53} 
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M1                       Integer     
    M2                       Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N1                       Integer     
    N2                       Integer     
    OCT$            Function String          args=1, float  
    P                        Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
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
    V$                       String      
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/war.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x63f596975b60 ---------A   01000 PRINT TAB(33);"WAR"
    0x63f596976e70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x63f5969752d0 ---------A   01020 PRINT: PRINT: PRINT
    0x63f5969652f0 ---------A   01030 PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    0x63f596976a20 ---------A   01040 PRINT "AS S-7 FOR SPADE 7.  ";
    0x63f596974e40 ---------A T 01050 PRINT "DO YOU WANT DIRECTIONS";
    0x63f5969746d0 ---------A   01060 INPUT B$
    0x63f596974670 ---------A   01070 IF B$="NO" THEN 1140
    0x63f596975660 ---------A   01080 IF B$="YES" THEN 1110
    0x63f596975040 ---------A   01090 PRINT "YES OR NO, PLEASE.  ";
    0x63f596975830 ---------A   01100 GOTO 1050
    0x63f59697c910 ---------A T 01110 PRINT "THE COMPUTER GIVES YOU AND IT A 'CARD'.  THE HIGHER CARD"
    0x63f59697cac0 ---------A   01120 PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NOT TO"
    0x63f59697cc10 ---------A   01130 PRINT "CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    0x63f59697cc60 ---------A T 01140 PRINT
    0x63f59697ccb0 ---------A   01150 PRINT
    0x63f59697d1a0 ---------A   01160 DIM A$(52),L(54)
    0x63f59697d520 ---------A   01170 FOR I=1 TO 52
    0x63f59697d760 ---------A   01180 READ A$(I)
    0x63f59697d880 ---------A   01190 NEXT I
    0x63f59697d900 ---------A   01200 REM
    0x63f59697dc80 ---------A   01210 FOR J=1 TO 52
    0x63f59697e340 ---------A T 01220 LET L(J)=INT(52*RND(1))+1
    0x63f59697e590 ---------A   01230 IF J=1 THEN 1290
    0x63f59697ea30 ---------A   01240 FOR K=1 TO J-1
    0x63f59697ee70 ---------A   01250 IF L(K)<>L(J) THEN 1280
    0x63f59697eef0 ---------A   01260 REM
    0x63f59697ef70 ---------A   01270 GOTO 1220
    0x63f59697f090 ---------A T 01280 NEXT K
    0x63f59697f1d0 ---------A T 01290 NEXT J
    0x63f59697f5d0 ---------A T 01300 P=P+1
    0x63f59697f9a0 ---------A   01310 M1=L(P)
    0x63f59697fcd0 ---------A   01320 P=P+1
    0x63f5969802b0 ---------A   01330 M2=L(P)
    0x63f596980340 ---------A   01340 PRINT
    0x63f596980950 ---------A   01350 PRINT "YOU: ";A$(M1),"COMPUTER: ";A$(M2)
    0x63f596980f60 ---------A   01360 N1=INT((M1-.5)/4)
    0x63f596981570 ---------A   01370 N2=INT((M2-.5)/4)
    0x63f5969817e0 ---------A   01380 IF N1>=N2 THEN 1420
    0x63f596981c10 ---------A   01390 A1=A1+1
    0x63f596982130 ---------A   01400 PRINT "THE COMPUTER WINS!!! YOU HAVE";B1;"AND THE COMPUTER HAS";A1
    0x63f5969821a0 ---------A   01410 GOTO 1470
    0x63f596982400 ---------A T 01420 IF N1=N2 THEN 1460
    0x63f596982770 ---------A   01430 B1=B1+1
    0x63f596982bc0 ---------A   01440 PRINT "YOU WIN. YOU HAVE";B1;"AND THE COMPUTER HAS";A1
    0x63f596982c40 ---------A   01450 GOTO 1470
    0x63f596982da0 ---------A T 01460 PRINT "TIE.  NO SCORE CHANGE."
    0x63f5969831e0 ---------A T 01470 IF L(P+1)=0 THEN 1540
    0x63f596983370 ---------A   01480 PRINT "DO YOU WANT TO CONTINUE";
    0x63f596983590 ---------A   01490 INPUT V$
    0x63f596983810 ---------A   01500 IF V$="YES" THEN 1300
    0x63f596983aa0 ---------A   01510 IF V$="NO" THEN 1580
    0x63f596983c20 ---------A   01520 PRINT "YES OR NO, PLEASE.  ";
    0x63f596983c90 ---------A   01530 GOTO 1470
    0x63f596983cf0 ---------A T 01540 PRINT
    0x63f596983d90 ---------A   01550 PRINT
    0x63f596984030 ---------A   01560 PRINT "WE HAVE RUN OUT OF CARDS.  FINAL SCORE:  YOU: ";B1;
    0x63f5969842f0 ---------A   01570 PRINT "  THE COMPUTER: ";A1:PRINT
    0x63f596984450 ---------A T 01580 PRINT "THANKS FOR PLAYING.  IT WAS FUN."
    0x63f5969844f0 ---------A   01590 PRINT
    0x63f596984c90 ---------A   01600 DATA "S-2","H-2","C-2","D-2","S-3","H-3","C-3","D-3"
    0x63f596985430 ---------A   01610 DATA "S-4","H-4","C-4","D-4","S-5","H-5","C-5","D-5"
    0x63f596985bd0 ---------A   01620 DATA "S-6","H-6","C-6","D-6","S-7","H-7","C-7","D-7"
    0x63f596986370 ---------A   01630 DATA "S-8","H-8","C-8","D-8","S-9","H-9","C-9","D-9"
    0x63f596986b10 ---------A   01640 DATA "S-10","H-10","C-10","D-10","S-J","H-J","C-J","D-J"
    0x63f5969876a0 ---------A   01650 DATA "S-Q","H-Q","C-Q","D-Q","S-K","H-K","C-K","D-K"
    0x63f596987a90 ---------A   01660 DATA "S-A","H-A","C-A","D-A"
    0x63f596987ae0 ---------A   01670 END
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
char* data_01600s[]={"S-2","H-2","C-2","D-2","S-3","H-3","C-3","D-3"};
char* data_01610s[]={"S-4","H-4","C-4","D-4","S-5","H-5","C-5","D-5"};
char* data_01620s[]={"S-6","H-6","C-6","D-6","S-7","H-7","C-7","D-7"};
char* data_01630s[]={"S-8","H-8","C-8","D-8","S-9","H-9","C-9","D-9"};
char* data_01640s[]={"S-10","H-10","C-10","D-10","S-J","H-J","C-J","D-J"};
char* data_01650s[]={"S-Q","H-Q","C-Q","D-Q","S-K","H-K","C-K","D-K"};
char* data_01660s[]={"S-A","H-A","C-A","D-A"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1600,  8,data_01600s},
    { 1610,  8,data_01610s},
    { 1620,  8,data_01620s},
    { 1630,  8,data_01630s},
    { 1640,  8,data_01640s},
    { 1650,  8,data_01650s},
    { 1660,  4,data_01660s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char*  A_str_arr[52];                             // Basic: A$ 
int    A1_int;                                    // Basic: A1 
char*  B_str;                                     // Basic: B$ 
int    B1_int;                                    // Basic: B1 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int_arr[54];                             // Basic: L 
int    M1_int;                                    // Basic: M1 
int    M2_int;                                    // Basic: M2 
int    N1_int;                                    // Basic: N1 
int    N2_int;                                    // Basic: N2 
int    P_int;                                     // Basic: P 
char*  V_str;                                     // Basic: V$ 
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
