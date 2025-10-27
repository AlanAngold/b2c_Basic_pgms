/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/pizza.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56d4d7013b80 ---------A   00005 PRINT TAB(33);"PIZZA"
    0x56d4d7014ed0 ---------A   00010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56d4d7015050 ---------A   00015 PRINT: PRINT: PRINT
    0x56d4d70141b0 ---------A   00020 DIM S$(16),M$(4)
    0x56d4d70134c0 ---------A   00030 PRINT "PIZZA DELIVERY GAME": PRINT
    0x56d4d70150a0 ---------A   00050 INPUT "WHAT IS YOUR FIRST NAME";N$: PRINT
    0x56d4d7013810 ---------A   00080 PRINT "HI, ";N$;".  IN THIS GAME YOU ARE TO TAKE ORDERS"
    0x56d4d701a910 ---------A   00090 PRINT "FOR PIZZAS.  THEN YOU ARE TO TELL A DELIVERY BOY"
    0x56d4d701aae0 ---------A   00100 PRINT "WHERE TO DELIVER THE ORDERED PIZZAS.": PRINT: PRINT
    0x56d4d7012670 ---------A   00140 FOR I=1 TO 16
    0x56d4d701b050 ---------A   00150 READ S$(I)
    0x56d4d701b170 ---------A   00160 NEXT I
    0x56d4d701b450 ---------A   00170 FOR I=1 TO 4
    0x56d4d701b690 ---------A   00180 READ M$(I)
    0x56d4d701b7b0 ---------A   00190 NEXT I
    0x56d4d701c510 ---------A   00200 DATA "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O"
    0x56d4d701ca00 ---------A   00210 DATA "P","1","2","3","4"
    0x56d4d701cba0 ---------A   00230 PRINT "MAP OF THE CITY OF HYATTSVILLE": PRINT
    0x56d4d701ccd0 ---------A   00250 PRINT " -----1-----2-----3-----4-----"
    0x56d4d701cfa0 ---------A   00260 K=4
    0x56d4d701d290 ---------A   00270 FOR I=1 TO 4
    0x56d4d701d780 ---------A   00280 PRINT "-": PRINT "-": PRINT"-": PRINT "-"
    0x56d4d701d9d0 ---------A   00320 PRINT M$(K);
    0x56d4d701dff0 ---------A   00330 S1=16-4*I+1
    0x56d4d701ebe0 ---------A   00340 PRINT "     ";S$(S1);"     ";S$(S1+1);"     ";S$(S1+2);"     ";
    0x56d4d701f1f0 ---------A   00350 PRINT S$(S1+3);"     ";M$(K)
    0x56d4d701f520 ---------A   00380 K=K-1
    0x56d4d701f650 ---------A   00390 NEXT I
    0x56d4d701fb80 ---------A   00400 PRINT "-": PRINT "-": PRINT "-": PRINT "-"
    0x56d4d701fd50 ---------A   00440 PRINT " -----1-----2-----3-----4-----": PRINT
    0x56d4d701fee0 ---------A   00460 PRINT "THE OUTPUT IS A MAP OF THE HOMES WHERE"
    0x56d4d70200b0 ---------A   00470 PRINT "YOU ARE TO SEND PIZZAS.": PRINT
    0x56d4d7020230 ---------A   00490 PRINT "YOUR JOB IS TO GIVE A TRUCK DRIVER"
    0x56d4d70205c0 ---------A   00500 PRINT "THE LOCATION OR COORDINATES OF THE"
    0x56d4d7020790 ---------A   00510 PRINT "HOME ORDERING THE PIZZA.": PRINT
    0x56d4d70209e0 ---------A T 00520 INPUT "DO YOU NEED MORE DIRECTIONS";A$
    0x56d4d7020c60 ---------A   00530 IF A$="YES" THEN 590
    0x56d4d7020f00 ---------A   00540 IF A$="NO" THEN 750
    0x56d4d70210e0 ---------A   00550 PRINT "'YES' OR 'NO' PLEASE, NOW THEN,": GOTO 520
    0x56d4d70212a0 ---------A T 00590 PRINT: PRINT "SOMEBODY WILL ASK FOR A PIZZA TO BE"
    0x56d4d7021430 ---------A   00600 PRINT "DELIVERED.  THEN A DELIVERY BOY WILL"
    0x56d4d70216e0 ---------A   00610 PRINT "ASK YOU FOR THE LOCATION.":PRINT "     EXAMPLE:"
    0x56d4d7021860 ---------A   00620 PRINT "THIS IS J.  PLEASE SEND A PIZZA."
    0x56d4d7021bd0 ---------A   00640 PRINT "DRIVER TO ";N$;".  WHERE DOES J LIVE?"
    0x56d4d7021d90 ---------A   00650 PRINT "YOUR ANSWER WOULD BE 2,3": PRINT
    0x56d4d7021f10 ---------A   00660 INPUT "UNDERSTAND";A$
    0x56d4d70221c0 ---------A   00670 IF A$="YES" THEN 690
    0x56d4d7022350 ---------A   00680 PRINT "THIS JOB IS DEFINITELY TOO DIFFICULT FOR YOU. THANKS ANYWAY"
    0x56d4d70223f0 ---------A   00685 GOTO 999
    0x56d4d70225b0 ---------A T 00690 PRINT "GOOD.  YOU ARE NOW READY TO START TAKING ORDERS.": PRINT
    0x56d4d7022750 ---------A   00700 PRINT "GOOD LUCK!!": PRINT
    0x56d4d7022a30 ---------A T 00750 FOR I=1 TO 5
    0x56d4d7023140 ---------A   00760 S=INT(RND(1)*16+1): PRINT
    0x56d4d70237a0 ---------A   00770 PRINT "HELLO ";N$;"'S PIZZA.  THIS IS ";S$(S);".";
    0x56d4d7023930 ---------A   00775 PRINT "  PLEASE SEND A PIZZA."
    0x56d4d7023f80 ---------A T 00780 PRINT "  DRIVER TO ";N$;":  WHERE DOES ";S$(S);" LIVE";
    0x56d4d70243f0 ---------A   00790 INPUT A(1),A(2)
    0x56d4d7024bd0 ---------A   00870 T=A(1)+(A(2)-1)*4
    0x56d4d7024e70 ---------A   00880 IF T=S THEN 920
    0x56d4d70252d0 ---------A   00890 PRINT "THIS IS ";S$(T);".  I DID NOT ORDER A PIZZA."
    0x56d4d70258a0 ---------A   00900 PRINT "I LIVE AT ";A(1);",";A(2)
    0x56d4d7025940 ---------A   00910 GOTO 780
    0x56d4d7025f70 ---------A T 00920 PRINT "HELLO "N$;".  THIS IS ";S$(S);", THANKS FOR THE PIZZA."
    0x56d4d70260a0 ---------A   00930 NEXT I
    0x56d4d70262c0 ---------A   00940 PRINT: INPUT "DO YOU WANT TO DELIVER MORE PIZZAS";A$
    0x56d4d7026970 ---------A   00960 IF A$="YES" THEN 750
    0x56d4d7026d70 ---------A   00970 PRINT: PRINT "O.K. ";N$;", SEE YOU LATER!":PRINT
    0x56d4d7026dc0 ---------A T 00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00520      00550T
     00590      00530T
     00690      00670T
     00750      00540T, 00960T
     00780      00910T
     00920      00880T
     00999      00685T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x56d4d7013b80 (00005)   0x56d4d7013b80 (00005)   0x56d4d7026dc0 (00999)   0x56d4d7026dc0 (00999)   


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
 *  Symbol Table Listing for 'basic/pizza.bas'
 *
    A               Array    Integer         {0,9} 
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
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K                        Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M$              Array    String          {0,3} 
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N$                       String      
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
    S$              Array    String          {0,15} 
    S1                       Integer     
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

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/pizza.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56d4d7013b80 ---------A   01000 PRINT TAB(33);"PIZZA"
    0x56d4d7014ed0 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56d4d7015050 ---------A   01020 PRINT: PRINT: PRINT
    0x56d4d70141b0 ---------A   01030 DIM S$(16),M$(4)
    0x56d4d70134c0 ---------A   01040 PRINT "PIZZA DELIVERY GAME": PRINT
    0x56d4d70150a0 ---------A   01050 INPUT "WHAT IS YOUR FIRST NAME";N$: PRINT
    0x56d4d7013810 ---------A   01060 PRINT "HI, ";N$;".  IN THIS GAME YOU ARE TO TAKE ORDERS"
    0x56d4d701a910 ---------A   01070 PRINT "FOR PIZZAS.  THEN YOU ARE TO TELL A DELIVERY BOY"
    0x56d4d701aae0 ---------A   01080 PRINT "WHERE TO DELIVER THE ORDERED PIZZAS.": PRINT: PRINT
    0x56d4d7012670 ---------A   01090 FOR I=1 TO 16
    0x56d4d701b050 ---------A   01100 READ S$(I)
    0x56d4d701b170 ---------A   01110 NEXT I
    0x56d4d701b450 ---------A   01120 FOR I=1 TO 4
    0x56d4d701b690 ---------A   01130 READ M$(I)
    0x56d4d701b7b0 ---------A   01140 NEXT I
    0x56d4d701c510 ---------A   01150 DATA "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O"
    0x56d4d701ca00 ---------A   01160 DATA "P","1","2","3","4"
    0x56d4d701cba0 ---------A   01170 PRINT "MAP OF THE CITY OF HYATTSVILLE": PRINT
    0x56d4d701ccd0 ---------A   01180 PRINT " -----1-----2-----3-----4-----"
    0x56d4d701cfa0 ---------A   01190 K=4
    0x56d4d701d290 ---------A   01200 FOR I=1 TO 4
    0x56d4d701d780 ---------A   01210 PRINT "-": PRINT "-": PRINT"-": PRINT "-"
    0x56d4d701d9d0 ---------A   01220 PRINT M$(K);
    0x56d4d701dff0 ---------A   01230 S1=16-4*I+1
    0x56d4d701ebe0 ---------A   01240 PRINT "     ";S$(S1);"     ";S$(S1+1);"     ";S$(S1+2);"     ";
    0x56d4d701f1f0 ---------A   01250 PRINT S$(S1+3);"     ";M$(K)
    0x56d4d701f520 ---------A   01260 K=K-1
    0x56d4d701f650 ---------A   01270 NEXT I
    0x56d4d701fb80 ---------A   01280 PRINT "-": PRINT "-": PRINT "-": PRINT "-"
    0x56d4d701fd50 ---------A   01290 PRINT " -----1-----2-----3-----4-----": PRINT
    0x56d4d701fee0 ---------A   01300 PRINT "THE OUTPUT IS A MAP OF THE HOMES WHERE"
    0x56d4d70200b0 ---------A   01310 PRINT "YOU ARE TO SEND PIZZAS.": PRINT
    0x56d4d7020230 ---------A   01320 PRINT "YOUR JOB IS TO GIVE A TRUCK DRIVER"
    0x56d4d70205c0 ---------A   01330 PRINT "THE LOCATION OR COORDINATES OF THE"
    0x56d4d7020790 ---------A   01340 PRINT "HOME ORDERING THE PIZZA.": PRINT
    0x56d4d70209e0 ---------A T 01350 INPUT "DO YOU NEED MORE DIRECTIONS";A$
    0x56d4d7020c60 ---------A   01360 IF A$="YES" THEN 1390
    0x56d4d7020f00 ---------A   01370 IF A$="NO" THEN 1510
    0x56d4d70210e0 ---------A   01380 PRINT "'YES' OR 'NO' PLEASE, NOW THEN,": GOTO 1350
    0x56d4d70212a0 ---------A T 01390 PRINT: PRINT "SOMEBODY WILL ASK FOR A PIZZA TO BE"
    0x56d4d7021430 ---------A   01400 PRINT "DELIVERED.  THEN A DELIVERY BOY WILL"
    0x56d4d70216e0 ---------A   01410 PRINT "ASK YOU FOR THE LOCATION.":PRINT "     EXAMPLE:"
    0x56d4d7021860 ---------A   01420 PRINT "THIS IS J.  PLEASE SEND A PIZZA."
    0x56d4d7021bd0 ---------A   01430 PRINT "DRIVER TO ";N$;".  WHERE DOES J LIVE?"
    0x56d4d7021d90 ---------A   01440 PRINT "YOUR ANSWER WOULD BE 2,3": PRINT
    0x56d4d7021f10 ---------A   01450 INPUT "UNDERSTAND";A$
    0x56d4d70221c0 ---------A   01460 IF A$="YES" THEN 1490
    0x56d4d7022350 ---------A   01470 PRINT "THIS JOB IS DEFINITELY TOO DIFFICULT FOR YOU. THANKS ANYWAY"
    0x56d4d70223f0 ---------A   01480 GOTO 1670
    0x56d4d70225b0 ---------A T 01490 PRINT "GOOD.  YOU ARE NOW READY TO START TAKING ORDERS.": PRINT
    0x56d4d7022750 ---------A   01500 PRINT "GOOD LUCK!!": PRINT
    0x56d4d7022a30 ---------A T 01510 FOR I=1 TO 5
    0x56d4d7023140 ---------A   01520 S=INT(RND(1)*16+1): PRINT
    0x56d4d70237a0 ---------A   01530 PRINT "HELLO ";N$;"'S PIZZA.  THIS IS ";S$(S);".";
    0x56d4d7023930 ---------A   01540 PRINT "  PLEASE SEND A PIZZA."
    0x56d4d7023f80 ---------A T 01550 PRINT "  DRIVER TO ";N$;":  WHERE DOES ";S$(S);" LIVE";
    0x56d4d70243f0 ---------A   01560 INPUT A(1),A(2)
    0x56d4d7024bd0 ---------A   01570 T=A(1)+(A(2)-1)*4
    0x56d4d7024e70 ---------A   01580 IF T=S THEN 1620
    0x56d4d70252d0 ---------A   01590 PRINT "THIS IS ";S$(T);".  I DID NOT ORDER A PIZZA."
    0x56d4d70258a0 ---------A   01600 PRINT "I LIVE AT ";A(1);",";A(2)
    0x56d4d7025940 ---------A   01610 GOTO 1550
    0x56d4d7025f70 ---------A T 01620 PRINT "HELLO "N$;".  THIS IS ";S$(S);", THANKS FOR THE PIZZA."
    0x56d4d70260a0 ---------A   01630 NEXT I
    0x56d4d70262c0 ---------A   01640 PRINT: INPUT "DO YOU WANT TO DELIVER MORE PIZZAS";A$
    0x56d4d7026970 ---------A   01650 IF A$="YES" THEN 1510
    0x56d4d7026d70 ---------A   01660 PRINT: PRINT "O.K. ";N$;", SEE YOU LATER!":PRINT
    0x56d4d7026dc0 ---------A T 01670 END
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
char* data_01150s[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O"};
char* data_01160s[]={"P","1","2","3","4"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1150, 15,data_01150s},
    { 1160,  5,data_01160s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int_arr[10];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    I_int;                                     // Basic: I 
int    K_int;                                     // Basic: K 
char*  M_str_arr[4];                              // Basic: M$ 
char*  N_str;                                     // Basic: N$ 
int    S_int;                                     // Basic: S 
char*  S_str_arr[16];                             // Basic: S$ 
int    S1_int;                                    // Basic: S1 
int    T_int;                                     // Basic: T 
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
