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
    0x57d2a2411c30 ---------A   01010 PRINT "BASIC LIBRARY--'WAR'--18-JUL-70"
    0x57d2a24005d0 ---------A   01020 REM  *  *  *  *  *  *   MAIN PROGRAM   *  *  *  *  *  *  *  *  *  *  *  *
    0x57d2a2400610 ---------A   01030 REM
    0x57d2a2411db0 ---------A   01040 PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    0x57d2a2411cf0 ---------A   01050 PRINT "AS S-7 FOR SPADE 7.  "
    0x57d2a2411f30 ---------A T 01060 PRINT "DO YOU WANT DIRECTIONS"
    0x57d2a2410850 ---------A   01070 INPUT B$
    0x57d2a240ffc0 ---------A   01080 IF B$="N" THEN 1150
    0x57d2a240fb60 ---------A   01090 IF B$="Y" THEN 1120
    0x57d2a2411e70 ---------A   01100 PRINT "Y OR N, PLEASE.  ";
    0x57d2a2412050 ---------A   01110 GO TO 1060
    0x57d2a2411570 ---------A T 01120 PRINT "THE PDP-10 GIVES YOU AND IT A 'CARD'.  THE HIGHER 'CARD' "
    0x57d2a2410670 ---------A   01130 PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NT"
    0x57d2a2417740 ---------A   01140 PRINT " TO CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    0x57d2a2417790 ---------A T 01150 PRINT
    0x57d2a24177e0 ---------A   01160 PRINT
    0x57d2a2417cd0 ---------A   01170 DIM A$(52), L(54)
    0x57d2a2418050 ---------A   01180 FOR I=1 TO 52
    0x57d2a2418290 ---------A   01190 READ A$(I)
    0x57d2a24183b0 ---------A   01200 NEXT I
    0x57d2a2418430 ---------A   01210 RANDOM
    0x57d2a24187d0 ---------A   01220 FOR J=1 TO 52
    0x57d2a2418dd0 ---------A   01230 LET L(J)=INT(52*RND+1)
    0x57d2a2419290 ---------A   01240 FOR K=1 TO J-1
    0x57d2a24196d0 ---------A   01250 IF L(K)<>L(J) THEN 1280
    0x57d2a2419a10 ---------A   01260 LET J=J-1
    0x57d2a2419a80 ---------A   01270 GO TO 1290
    0x57d2a2419ba0 ---------A T 01280 NEXT K
    0x57d2a2419ce0 ---------A T 01290 NEXT J
    0x57d2a241a0e0 ---------A T 01300 LET P=P+1
    0x57d2a241a4b0 ---------A   01310 LET M1=L(P)
    0x57d2a241a7e0 ---------A   01320 LET P=P+1
    0x57d2a241abb0 ---------A   01330 LET M2=L(P)
    0x57d2a241ae30 ---------A   01340 PRINT
    0x57d2a241aec0 ---------A   01350 PRINT
    0x57d2a241b500 ---------A   01360 PRINT "YOU: ";A$(M1), "PDP-10: ";A$(M2),
    0x57d2a241bb20 ---------A   01370 LET N1=INT((M1-.5)/4)
    0x57d2a241c140 ---------A   01380 LET N2=INT((M2-.5)/4)
    0x57d2a241c3b0 ---------A   01390 IF N1>=N2 THEN 1430
    0x57d2a241c7d0 ---------A   01400 LET A1=A1+1
    0x57d2a241cce0 ---------A   01410 PRINT"PDP-10 WINS. YOU HAVE";B1;"; PDP-10 HAS";A1
    0x57d2a241cd50 ---------A   01420 GO TO 1480
    0x57d2a241cfb0 ---------A T 01430 IF N1=N2 THEN 1470
    0x57d2a241d310 ---------A   01440 LET B1=B1+1
    0x57d2a241d760 ---------A   01450 PRINT "YOU WIN.  YOU HAVE";B1;"; PDP-10 HAS";A1
    0x57d2a241d7e0 ---------A   01460 GO TO 1480
    0x57d2a241d930 ---------A T 01470 PRINT "TIE. N SCORE CHANGE."
    0x57d2a241dd70 ---------A T 01480 IF L(P+1)= 0 THEN 1550
    0x57d2a241df00 ---------A   01490 PRINT "DO YOU WANT TO CONTINUE";
    0x57d2a241e120 ---------A T 01500 INPUT V$
    0x57d2a241e3b0 ---------A   01510 IF V$="Y" THEN 1300
    0x57d2a241e640 ---------A   01520 IF V$="NO" THEN 1590
    0x57d2a241e7c0 ---------A   01530 PRINT"Y OR NO, PLEASE.  ";
    0x57d2a241e830 ---------A   01540 GO TO 1500
    0x57d2a241e890 ---------A T 01550 PRINT
    0x57d2a241ea10 ---------A   01560 PRINT" "
    0x57d2a241ec90 ---------A   01570 PRINT"YOU HAVE RUN OUT OF CARDS. FINAL SCORE: YOU--";B1
    0x57d2a241f040 ---------A   01580 PRINTTAB(40);"PDP-10--";A1
    0x57d2a241f1d0 ---------A T 01590 PRINT"THANKS FOR PLAYING. IT WAS FUN."
    0x57d2a241ff90 ---------A   01600 DATA S-2,H-2,C-2,D-2,S-3,H-3,C-3,D-3,S-4,H-4,C-4,D-4,S-5,H-5,C-5
    0x57d2a2420d50 ---------A   01610 DATA D-5,S-6,H-6,C-6,D-6,S-7,H-7,C-7,D-7,S-8,H-8,C-8,D-8,S-9,H-9
    0x57d2a2421a20 ---------A   01620 DATA C-9,D-9,S10,H-10,C-10,D-10,S-J,H-J,C-J,D-J,S-Q,H-Q,C-Q,D-Q
    0x57d2a2422190 ---------A   01630 DATA S-K,H-K,C-K,D-K,S-A,H-A,C-A,D-A
    0x57d2a24221e0 ---------A   01640 STOP
    0x57d2a2422240 ---------A   01650 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01060      01110T
     01120      01090T
     01150      01080T
     01280      01250T
     01290      01270T
     01300      01510T
     01430      01390T
     01470      01430T
     01480      01420T, 01460T
     01500      01540T
     01550      01480T
     01590      01520T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x57d2a2411c30 (01010)   0x000000000000 (00000)   0x57d2a2422240 (01650)   0x57d2a2422240 (01650)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01650 - 10000    8360 

 */



/*
 *  Symbol Table Listing for 'basic/war.bas'
 *
    A$              Array    String          {0,51} 
    A1                       Float       
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$                       String      
    B1                       Float       
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
    J                        Float       
    K                        Float       
    L               Array    Float           {0,53} 
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M1                       Float       
    M2                       Float       
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N1                       Float       
    N2                       Float       
    OCT$            Function String          args=1, float  
    P                        Float       
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
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
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
    0x57d2a2411c30 ---------A   01000 PRINT "BASIC LIBRARY--'WAR'--18-JUL-70"
    0x57d2a24005d0 ---------A   01010 REM  *  *  *  *  *  *   MAIN PROGRAM   *  *  *  *  *  *  *  *  *  *  *  *
    0x57d2a2400610 ---------A   01020 REM
    0x57d2a2411db0 ---------A   01030 PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    0x57d2a2411cf0 ---------A   01040 PRINT "AS S-7 FOR SPADE 7.  "
    0x57d2a2411f30 ---------A T 01050 PRINT "DO YOU WANT DIRECTIONS"
    0x57d2a2410850 ---------A   01060 INPUT B$
    0x57d2a240ffc0 ---------A   01070 IF B$="N" THEN 1140
    0x57d2a240fb60 ---------A   01080 IF B$="Y" THEN 1110
    0x57d2a2411e70 ---------A   01090 PRINT "Y OR N, PLEASE.  ";
    0x57d2a2412050 ---------A   01100 GO TO 1050
    0x57d2a2411570 ---------A T 01110 PRINT "THE PDP-10 GIVES YOU AND IT A 'CARD'.  THE HIGHER 'CARD' "
    0x57d2a2410670 ---------A   01120 PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NT"
    0x57d2a2417740 ---------A   01130 PRINT " TO CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    0x57d2a2417790 ---------A T 01140 PRINT
    0x57d2a24177e0 ---------A   01150 PRINT
    0x57d2a2417cd0 ---------A   01160 DIM A$(52), L(54)
    0x57d2a2418050 ---------A   01170 FOR I=1 TO 52
    0x57d2a2418290 ---------A   01180 READ A$(I)
    0x57d2a24183b0 ---------A   01190 NEXT I
    0x57d2a2418430 ---------A   01200 RANDOM
    0x57d2a24187d0 ---------A   01210 FOR J=1 TO 52
    0x57d2a2418dd0 ---------A   01220 LET L(J)=INT(52*RND+1)
    0x57d2a2419290 ---------A   01230 FOR K=1 TO J-1
    0x57d2a24196d0 ---------A   01240 IF L(K)<>L(J) THEN 1270
    0x57d2a2419a10 ---------A   01250 LET J=J-1
    0x57d2a2419a80 ---------A   01260 GO TO 1280
    0x57d2a2419ba0 ---------A T 01270 NEXT K
    0x57d2a2419ce0 ---------A T 01280 NEXT J
    0x57d2a241a0e0 ---------A T 01290 LET P=P+1
    0x57d2a241a4b0 ---------A   01300 LET M1=L(P)
    0x57d2a241a7e0 ---------A   01310 LET P=P+1
    0x57d2a241abb0 ---------A   01320 LET M2=L(P)
    0x57d2a241ae30 ---------A   01330 PRINT
    0x57d2a241aec0 ---------A   01340 PRINT
    0x57d2a241b500 ---------A   01350 PRINT "YOU: ";A$(M1), "PDP-10: ";A$(M2),
    0x57d2a241bb20 ---------A   01360 LET N1=INT((M1-.5)/4)
    0x57d2a241c140 ---------A   01370 LET N2=INT((M2-.5)/4)
    0x57d2a241c3b0 ---------A   01380 IF N1>=N2 THEN 1420
    0x57d2a241c7d0 ---------A   01390 LET A1=A1+1
    0x57d2a241cce0 ---------A   01400 PRINT"PDP-10 WINS. YOU HAVE";B1;"; PDP-10 HAS";A1
    0x57d2a241cd50 ---------A   01410 GO TO 1470
    0x57d2a241cfb0 ---------A T 01420 IF N1=N2 THEN 1460
    0x57d2a241d310 ---------A   01430 LET B1=B1+1
    0x57d2a241d760 ---------A   01440 PRINT "YOU WIN.  YOU HAVE";B1;"; PDP-10 HAS";A1
    0x57d2a241d7e0 ---------A   01450 GO TO 1470
    0x57d2a241d930 ---------A T 01460 PRINT "TIE. N SCORE CHANGE."
    0x57d2a241dd70 ---------A T 01470 IF L(P+1)= 0 THEN 1540
    0x57d2a241df00 ---------A   01480 PRINT "DO YOU WANT TO CONTINUE";
    0x57d2a241e120 ---------A T 01490 INPUT V$
    0x57d2a241e3b0 ---------A   01500 IF V$="Y" THEN 1290
    0x57d2a241e640 ---------A   01510 IF V$="NO" THEN 1580
    0x57d2a241e7c0 ---------A   01520 PRINT"Y OR NO, PLEASE.  ";
    0x57d2a241e830 ---------A   01530 GO TO 1490
    0x57d2a241e890 ---------A T 01540 PRINT
    0x57d2a241ea10 ---------A   01550 PRINT" "
    0x57d2a241ec90 ---------A   01560 PRINT"YOU HAVE RUN OUT OF CARDS. FINAL SCORE: YOU--";B1
    0x57d2a241f040 ---------A   01570 PRINTTAB(40);"PDP-10--";A1
    0x57d2a241f1d0 ---------A T 01580 PRINT"THANKS FOR PLAYING. IT WAS FUN."
    0x57d2a241ff90 ---------A   01590 DATA S-2,H-2,C-2,D-2,S-3,H-3,C-3,D-3,S-4,H-4,C-4,D-4,S-5,H-5,C-5
    0x57d2a2420d50 ---------A   01600 DATA D-5,S-6,H-6,C-6,D-6,S-7,H-7,C-7,D-7,S-8,H-8,C-8,D-8,S-9,H-9
    0x57d2a2421a20 ---------A   01610 DATA C-9,D-9,S10,H-10,C-10,D-10,S-J,H-J,C-J,D-J,S-Q,H-Q,C-Q,D-Q
    0x57d2a2422190 ---------A   01620 DATA S-K,H-K,C-K,D-K,S-A,H-A,C-A,D-A
    0x57d2a24221e0 ---------A   01630 STOP
    0x57d2a2422240 ---------A   01640 END
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
char* data_01590s[]={"S-2","H-2","C-2","D-2","S-3","H-3","C-3","D-3","S-4","H-4","C-4","D-4","S-5","H-5","C-5"};
char* data_01600s[]={"D-5","S-6","H-6","C-6","D-6","S-7","H-7","C-7","D-7","S-8","H-8","C-8","D-8","S-9","H-9"};
char* data_01610s[]={"C-9","D-9","S10","H-10","C-10","D-10","S-J","H-J","C-J","D-J","S-Q","H-Q","C-Q","D-Q"};
char* data_01620s[]={"S-K","H-K","C-K","D-K","S-A","H-A","C-A","D-A"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1590, 15,data_01590s},
    { 1600, 15,data_01600s},
    { 1610, 14,data_01610s},
    { 1620,  8,data_01620s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char*  A_str_arr[52];                             // Basic: A$ 
float  A1_flt;                                    // Basic: A1 
char*  B_str;                                     // Basic: B$ 
float  B1_flt;                                    // Basic: B1 
float  I_flt;                                     // Basic: I 
float  J_flt;                                     // Basic: J 
float  K_flt;                                     // Basic: K 
float  L_flt_arr[54];                             // Basic: L 
float  M1_flt;                                    // Basic: M1 
float  M2_flt;                                    // Basic: M2 
float  N1_flt;                                    // Basic: N1 
float  N2_flt;                                    // Basic: N2 
float  P_flt;                                     // Basic: P 
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
    // 01000 PRINT "BASIC LIBRARY--'WAR'--18-JUL-70"
    b2c_printf("Basic library--'war'--18-jul-70\n");
    // 01010 REM  *  *  *  *  *  *   MAIN PROGRAM   *  *  *  *  *  *  *  *  *  *  *  *
    // 01020 REM
    // 01030 PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    b2c_printf("This is the card game of war.  Each card is given by suit-#\n");
    // 01040 PRINT "AS S-7 FOR SPADE 7.  "
    b2c_printf("As s-7 for spade 7.  \n");

  Lbl_01050:
    // 01050 PRINT "DO YOU WANT DIRECTIONS"
    b2c_printf("Do you want directions\n");
    // 01060 INPUT B$
    // Start of Basic INPUT statement 01060
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&B_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01060
    // 01070 IF B$="N" THEN 1140
    if(strcmp(B_str,"N")==0)goto Lbl_01140;
    // 01080 IF B$="Y" THEN 1110
    if(strcmp(B_str,"Y")==0)goto Lbl_01110;
    // 01090 PRINT "Y OR N, PLEASE.  ";
    b2c_printf("Y or n, please.  ");
    // 01100 GO TO 1050
    goto Lbl_01050;

  Lbl_01110:
    // 01110 PRINT "THE PDP-10 GIVES YOU AND IT A 'CARD'.  THE HIGHER 'CARD' "
    b2c_printf("The pdp-10 gives you and it a 'card'.  The higher 'card' \n");
    // 01120 PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NT"
    b2c_printf("(numerically) wins.  The game ends when you choose nt\n");
    // 01130 PRINT " TO CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    b2c_printf(" to continue or when you have finished the pack.\n");

  Lbl_01140:
    // 01140 PRINT
    b2c_printf("\n");
    // 01150 PRINT
    b2c_printf("\n");
    // 01160 DIM A$(52), L(54)
    // 01170 FOR I=1 TO 52
    for(I_flt=1;I_flt<=52;I_flt++){
        // 01180 READ A$(I)
        A_str_arr[(int)I_flt] = Get_Data_String();
        // 01190 NEXT I
        int dummy_1190=0; // Ignore this line.
    }; // End-For(I_flt)
    // 01200 RANDOM
    RANDOMIZE();
    // 01210 FOR J=1 TO 52
    for(J_flt=1;J_flt<=52;J_flt++){
        // 01220 LET L(J)=INT(52*RND+1)
        L_flt_arr[(int)J_flt] = INT(52*RND()+1);
        // 01230 FOR K=1 TO J-1
        for(K_flt=1;K_flt<=J_flt-1;K_flt++){
            // 01240 IF L(K)<>L(J) THEN 1270
            if(L_flt_arr[(int)K_flt]!=L_flt_arr[(int)J_flt])goto Lbl_01270;
            // 01250 LET J=J-1
            J_flt = J_flt-1;
            // 01260 GO TO 1280
            goto Lbl_01280;

  Lbl_01270:
            // 01270 NEXT K
            int dummy_1270=0; // Ignore this line.
        }; // End-For(K_flt)

  Lbl_01280:
        // 01280 NEXT J
        int dummy_1280=0; // Ignore this line.
    }; // End-For(J_flt)

  Lbl_01290:
    // 01290 LET P=P+1
    P_flt = P_flt+1;
    // 01300 LET M1=L(P)
    M1_flt = L_flt_arr[(int)P_flt];
    // 01310 LET P=P+1
    P_flt = P_flt+1;
    // 01320 LET M2=L(P)
    M2_flt = L_flt_arr[(int)P_flt];
    // 01330 PRINT
    b2c_printf("\n");
    // 01340 PRINT
    b2c_printf("\n");
    // 01350 PRINT "YOU: ";A$(M1), "PDP-10: ";A$(M2),
    b2c_printf("You: %sYou: Pdp-10: Pdp-10: %sPdp-10: \n",A_str_arr[(int)M1_flt],A_str_arr[(int)M2_flt]);
    // 01360 LET N1=INT((M1-.5)/4)
    N1_flt = INT((M1_flt-0.5)/4);
    // 01370 LET N2=INT((M2-.5)/4)
    N2_flt = INT((M2_flt-0.5)/4);
    // 01380 IF N1>=N2 THEN 1420
    if(N1_flt>=N2_flt)goto Lbl_01420;
    // 01390 LET A1=A1+1
    A1_flt = A1_flt+1;
    // 01400 PRINT"PDP-10 WINS. YOU HAVE";B1;"; PDP-10 HAS";A1
    b2c_printf("Pdp-10 wins. You have %.2f Pdp-10 wins. You have; pdp-10 has; pdp-10 has %.2f \n",B1_flt,A1_flt);
    // 01410 GO TO 1470
    goto Lbl_01470;

  Lbl_01420:
    // 01420 IF N1=N2 THEN 1460
    if(N1_flt==N2_flt)goto Lbl_01460;
    // 01430 LET B1=B1+1
    B1_flt = B1_flt+1;
    // 01440 PRINT "YOU WIN.  YOU HAVE";B1;"; PDP-10 HAS";A1
    b2c_printf("You win.  You have %.2f You win.  You have; pdp-10 has; pdp-10 has %.2f \n",B1_flt,A1_flt);
    // 01450 GO TO 1470
    goto Lbl_01470;

  Lbl_01460:
    // 01460 PRINT "TIE. N SCORE CHANGE."
    b2c_printf("Tie. N score change.\n");

  Lbl_01470:
    // 01470 IF L(P+1)= 0 THEN 1540
    if(L_flt_arr[(int)P_flt+1]==0)goto Lbl_01540;
    // 01480 PRINT "DO YOU WANT TO CONTINUE";
    b2c_printf("Do you want to continue");

  Lbl_01490:
    // 01490 INPUT V$
    // Start of Basic INPUT statement 01490
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&V_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01490
    // 01500 IF V$="Y" THEN 1290
    if(strcmp(V_str,"Y")==0)goto Lbl_01290;
    // 01510 IF V$="NO" THEN 1580
    if(strcmp(V_str,"No")==0)goto Lbl_01580;
    // 01520 PRINT"Y OR NO, PLEASE.  ";
    b2c_printf("Y or no, please.  ");
    // 01530 GO TO 1490
    goto Lbl_01490;

  Lbl_01540:
    // 01540 PRINT
    b2c_printf("\n");
    // 01550 PRINT" "
    b2c_printf(" \n");
    // 01560 PRINT"YOU HAVE RUN OUT OF CARDS. FINAL SCORE: YOU--";B1
    b2c_printf("You have run out of cards. Final score: you-- %.2f \n",B1_flt);
