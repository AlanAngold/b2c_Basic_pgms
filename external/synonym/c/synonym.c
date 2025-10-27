/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/synonym.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57d41bae1b80 ---------A   00002 PRINT TAB(33);"SYNONYM"
    0x57d41bae2f30 ---------A   00004 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57d41bae30b0 ---------A   00006 PRINT: PRINT: PRINT
    0x57d41bae1620 ---------A   00010 DIM R$(5),W$(10),L(30),R(30)
    0x57d41bae9050 ---------A   00020 R$(1)="RIGHT": R$(2)="CORRECT": R$(3)="FINE": R$(4)="GOOD!"
    0x57d41bae9390 ---------A   00030 R$(5)="CHECK"
    0x57d41bae9690 ---------A   00070 C=0
    0x57d41bae9830 ---------A   00090 PRINT "A SYNONYM OF A WORD MEANS ANOTHER WORD IN THE ENGLISH"
    0x57d41bae99c0 ---------A   00100 PRINT "LANGUAGE WHICH HAS THE SAME OR VERY NEARLY THE SAME";
    0x57d41bae90a0 ---------A   00110 PRINT " MEANING."
    0x57d41bae9c80 ---------A   00130 PRINT "I CHOOSE A WORD -- YOU TYPE A SYNONYM."
    0x57d41bae9e10 ---------A   00140 PRINT "IF YOU CAN'T THINK OF A SYNONYM, TYPE THE WORD 'HELP'"
    0x57d41bae9f70 ---------A   00145 PRINT "AND I WILL TELL YOU A SYNONYM.": PRINT
    0x57d41baea4d0 ---------A T 00150 RESTORE: C=C+1: READ N
    0x57d41bae06d0 ---------A   00160 IF C>N THEN 420
    0x57d41baead90 ---------A T 00170 N1=INT(RND(1)*N+1)
    0x57d41bae0670 ---------A   00174 IF R(N1)=1 THEN 170
    0x57d41baeb360 ---------A   00176 R(N1)=1
    0x57d41baeb710 ---------A   00180 FOR I=1 TO N1
    0x57d41baeb930 ---------A   00190 READ N2
    0x57d41baebcd0 ---------A   00200 FOR J=1 TO N2
    0x57d41baebf10 ---------A   00210 READ W$(J)
    0x57d41baec030 ---------A   00220 NEXT J
    0x57d41baec170 ---------A   00230 NEXT I
    0x57d41baec860 ---------A   00232 FOR J=1 TO N2: L(J)=J: NEXT J
    0x57d41baece40 ---------A   00235 L(0)=N2: G=1: PRINT
    0x57d41baed730 ---------A   00237 L(G)=L(L(0)): L(0)=N2-1: PRINT
    0x57d41baedc30 ---------A T 00240 PRINT "     WHAT IS A SYNONYM OF ";W$(G);: INPUT A$
    0x57d41baedeb0 ---------A   00250 IF A$="HELP" THEN 340
    0x57d41baee270 ---------A   00260 FOR K=1 TO N2
    0x57d41baee4d0 ---------A   00270 IF G=K THEN 290
    0x57d41baee830 ---------A   00280 IF A$=W$(K) THEN 320
    0x57d41baee970 ---------A T 00290 NEXT K
    0x57d41baeed50 ---------A   00300 PRINT "     TRY AGAIN.": GOTO 240
    0x57d41baef370 ---------A T 00320 PRINT R$(INT(RND(1)*5+1)): GOTO 150
    0x57d41baefb00 ---------A T 00340 G1=INT(RND(1)*L(0)+1)
    0x57d41baf0360 ---------A   00360 PRINT "**** A SYNONYM OF ";W$(G);" IS ";W$(L(G1));".": PRINT
    0x57d41baf0d10 ---------A   00370 L(G1)=L(L(0)): L(0)=L(0)-1: GOTO 240
    0x57d41baf0f00 ---------A T 00420 PRINT: PRINT "SYNONYM DRILL COMPLETED.": GOTO 999
    0x57d41baf1070 ---------A   00500 DATA 10
    0x57d41baf1640 ---------A   00510 DATA 5,"FIRST","START","BEGINNING","ONSET","INITIAL"
    0x57d41baf1c20 ---------A   00520 DATA 5,"SIMILAR","ALIKE","SAME","LIKE","RESEMBLING"
    0x57d41baf2200 ---------A   00530 DATA 5,"MODEL","PATTERN","PROTOTYPE","STANDARD","CRITERION"
    0x57d41baf27e0 ---------A   00540 DATA 5,"SMALL","INSIGNIFICANT","LITTLE","TINY","MINUTE"
    0x57d41baf2ea0 ---------A   00550 DATA 6,"STOP","HALT","STAY","ARREST","CHECK","STANDSTILL"
    0x57d41baf3450 ---------A   00560 DATA 6,"HOUSE","DWELLING","RESIDENCE","DOMICILE","LODGING"
    0x57d41baf35d0 ---------A   00565 DATA "HABITATION"
    0x57d41baf3d70 ---------A   00570 DATA 7,"PIT","HOLE","HOLLOW","WELL","GULF","CHASM","ABYSS"
    0x57d41baf4510 ---------A   00580 DATA 7,"PUSH","SHOVE","THRUST","PROD","POKE","BUTT","PRESS"
    0x57d41baf4bd0 ---------A   00590 DATA 6,"RED","ROUGE","SCARLET","CRIMSON","FLAME","RUBY"
    0x57d41baf5260 ---------A   00600 DATA 7,"PAIN","SUFFERING","HURT","MISERY","DISTRESS","ACHE"
    0x57d41baf53b0 ---------A   00605 DATA "DISCOMFORT"
    0x57d41baf5400 ---------A T 00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00150      00320T
     00170      00174T
     00240      00300T, 00370T
     00290      00270T
     00320      00280T
     00340      00250T
     00420      00160T
     00999      00420T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x57d41bae1b80 (00002)   0x57d41bae1b80 (00002)   0x57d41baf5400 (00999)   0x57d41baf5400 (00999)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01530 - 10000    8480 

 */



/*
 *  Symbol Table Listing for 'basic/synonym.bas'
 *
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
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
    G                        Integer     
    G1                       Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    K                        Integer     
    L               Array    Integer         {0,29} 
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
    N1                       Integer     
    N2                       Integer     
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R               Array    Integer         {0,29} 
    R$              Array    String          {0,4} 
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
    W$              Array    String          {0,9} 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/synonym.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57d41bae1b80 ---------A   01000 PRINT TAB(33);"SYNONYM"
    0x57d41bae2f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57d41bae30b0 ---------A   01020 PRINT: PRINT: PRINT
    0x57d41bae1620 ---------A   01030 DIM R$(5),W$(1030),L(30),R(30)
    0x57d41bae9050 ---------A   01040 R$(1)="RIGHT": R$(2)="CORRECT": R$(3)="FINE": R$(4)="GOOD!"
    0x57d41bae9390 ---------A   01050 R$(5)="CHECK"
    0x57d41bae9690 ---------A   01060 C=0
    0x57d41bae9830 ---------A   01070 PRINT "A SYNONYM OF A WORD MEANS ANOTHER WORD IN THE ENGLISH"
    0x57d41bae99c0 ---------A   01080 PRINT "LANGUAGE WHICH HAS THE SAME OR VERY NEARLY THE SAME";
    0x57d41bae90a0 ---------A   01090 PRINT " MEANING."
    0x57d41bae9c80 ---------A   01100 PRINT "I CHOOSE A WORD -- YOU TYPE A SYNONYM."
    0x57d41bae9e10 ---------A   01110 PRINT "IF YOU CAN'T THINK OF A SYNONYM, TYPE THE WORD 'HELP'"
    0x57d41bae9f70 ---------A   01120 PRINT "AND I WILL TELL YOU A SYNONYM.": PRINT
    0x57d41baea4d0 ---------A T 01130 RESTORE: C=C+1: READ N
    0x57d41bae06d0 ---------A   01140 IF C>N THEN 1380
    0x57d41baead90 ---------A T 01150 N1=INT(RND(1)*N+1)
    0x57d41bae0670 ---------A   01160 IF R(N1)=1 THEN 1150
    0x57d41baeb360 ---------A   01170 R(N1)=1
    0x57d41baeb710 ---------A   01180 FOR I=1 TO N1
    0x57d41baeb930 ---------A   01190 READ N2
    0x57d41baebcd0 ---------A   01200 FOR J=1 TO N2
    0x57d41baebf10 ---------A   01210 READ W$(J)
    0x57d41baec030 ---------A   01220 NEXT J
    0x57d41baec170 ---------A   01230 NEXT I
    0x57d41baec860 ---------A   01240 FOR J=1 TO N2: L(J)=J: NEXT J
    0x57d41baece40 ---------A   01250 L(0)=N2: G=1: PRINT
    0x57d41baed730 ---------A   01260 L(G)=L(L(0)): L(0)=N2-1: PRINT
    0x57d41baedc30 ---------A T 01270 PRINT "     WHAT IS A SYNONYM OF ";W$(G);: INPUT A$
    0x57d41baedeb0 ---------A   01280 IF A$="HELP" THEN 1350
    0x57d41baee270 ---------A   01290 FOR K=1 TO N2
    0x57d41baee4d0 ---------A   01300 IF G=K THEN 1320
    0x57d41baee830 ---------A   01310 IF A$=W$(K) THEN 1340
    0x57d41baee970 ---------A T 01320 NEXT K
    0x57d41baeed50 ---------A   01330 PRINT "     TRY AGAIN.": GOTO 1270
    0x57d41baef370 ---------A T 01340 PRINT R$(INT(RND(1)*5+1)): GOTO 1130
    0x57d41baefb00 ---------A T 01350 G1=INT(RND(1)*L(0)+1)
    0x57d41baf0360 ---------A   01360 PRINT "**** A SYNONYM OF ";W$(G);" IS ";W$(L(G1));".": PRINT
    0x57d41baf0d10 ---------A   01370 L(G1)=L(L(0)): L(0)=L(0)-1: GOTO 1270
    0x57d41baf0f00 ---------A T 01380 PRINT: PRINT "SYNONYM DRILL COMPLETED.": GOTO 1520
    0x57d41baf1070 ---------A   01390 DATA 10
    0x57d41baf1640 ---------A   01400 DATA 5,"FIRST","START","BEGINNING","ONSET","INITIAL"
    0x57d41baf1c20 ---------A   01410 DATA 5,"SIMILAR","ALIKE","SAME","LIKE","RESEMBLING"
    0x57d41baf2200 ---------A   01420 DATA 5,"MODEL","PATTERN","PROTOTYPE","STANDARD","CRITERION"
    0x57d41baf27e0 ---------A   01430 DATA 5,"SMALL","INSIGNIFICANT","LITTLE","TINY","MINUTE"
    0x57d41baf2ea0 ---------A   01440 DATA 6,"STOP","HALT","STAY","ARREST","CHECK","STANDSTILL"
    0x57d41baf3450 ---------A   01450 DATA 6,"HOUSE","DWELLING","RESIDENCE","DOMICILE","LODGING"
    0x57d41baf35d0 ---------A   01460 DATA "HABITATION"
    0x57d41baf3d70 ---------A   01470 DATA 7,"PIT","HOLE","HOLLOW","WELL","GULF","CHASM","ABYSS"
    0x57d41baf4510 ---------A   01480 DATA 7,"PUSH","SHOVE","THRUST","PROD","POKE","BUTT","PRESS"
    0x57d41baf4bd0 ---------A   01490 DATA 6,"RED","ROUGE","SCARLET","CRIMSON","FLAME","RUBY"
    0x57d41baf5260 ---------A   01500 DATA 7,"PAIN","SUFFERING","HURT","MISERY","DISTRESS","ACHE"
    0x57d41baf53b0 ---------A   01510 DATA "DISCOMFORT"
    0x57d41baf5400 ---------A T 01520 END
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
char* data_01390s[]={"10"};
char* data_01400s[]={"5","FIRST","START","BEGINNING","ONSET","INITIAL"};
char* data_01410s[]={"5","SIMILAR","ALIKE","SAME","LIKE","RESEMBLING"};
char* data_01420s[]={"5","MODEL","PATTERN","PROTOTYPE","STANDARD","CRITERION"};
char* data_01430s[]={"5","SMALL","INSIGNIFICANT","LITTLE","TINY","MINUTE"};
char* data_01440s[]={"6","STOP","HALT","STAY","ARREST","CHECK","STANDSTILL"};
char* data_01450s[]={"6","HOUSE","DWELLING","RESIDENCE","DOMICILE","LODGING"};
char* data_01460s[]={"HABITATION"};
char* data_01470s[]={"7","PIT","HOLE","HOLLOW","WELL","GULF","CHASM","ABYSS"};
char* data_01480s[]={"7","PUSH","SHOVE","THRUST","PROD","POKE","BUTT","PRESS"};
char* data_01490s[]={"6","RED","ROUGE","SCARLET","CRIMSON","FLAME","RUBY"};
char* data_01500s[]={"7","PAIN","SUFFERING","HURT","MISERY","DISTRESS","ACHE"};
char* data_01510s[]={"DISCOMFORT"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1390,  1,data_01390s},
    { 1400,  6,data_01400s},
    { 1410,  6,data_01410s},
    { 1420,  6,data_01420s},
    { 1430,  6,data_01430s},
    { 1440,  7,data_01440s},
    { 1450,  6,data_01450s},
    { 1460,  1,data_01460s},
    { 1470,  8,data_01470s},
    { 1480,  8,data_01480s},
    { 1490,  7,data_01490s},
    { 1500,  7,data_01500s},
    { 1510,  1,data_01510s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char*  A_str;                                     // Basic: A$ 
int    C_int;                                     // Basic: C 
int    G_int;                                     // Basic: G 
int    G1_int;                                    // Basic: G1 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int_arr[30];                             // Basic: L 
int    N_int;                                     // Basic: N 
int    N1_int;                                    // Basic: N1 
int    N2_int;                                    // Basic: N2 
int    R_int_arr[30];                             // Basic: R 
char*  R_str_arr[5];                              // Basic: R$ 
char*  W_str_arr[10];                             // Basic: W$ 
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
