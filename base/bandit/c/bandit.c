/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/bandit.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5fd58c6445d0 ---------A   01000 REM THIS PROGRAM SIMULATES THE MECHANICAL
    0x5fd58c644610 ---------A   01010 REM THREE WHEEL ONE-ARM-BANDIT
    0x5fd58c655db0 ---------A T 01020 PRINT"ARE INTRUCTIONS REQUIRED?"
    0x5fd58c654b80 ---------A   01030 PRINT"TYPE EITHER 'YES' OR 'NO'"
    0x5fd58c6536d0 ---------A   01040 INPUT L$
    0x5fd58c653670 ---------A   01050 IF L$="YES" THEN 1090
    0x5fd58c654fc0 ---------A   01060 IF L$="NO" THEN 1160
    0x5fd58c655e70 ---------A   01070 PRINT"INVALID COMMAND"
    0x5fd58c657be0 ---------A   01080 GOTO 1020
    0x5fd58c655f30 ---------A T 01090 PRINT"SCORING IS SIMPLE; 3 ORANGES, LEMONS OR"
    0x5fd58c655ff0 ---------A   01100 PRINT"BANANAS EARN $10. 3 CHERRIES EARN $90."
    0x5fd58c6540b0 ---------A   01110 PRINT"IF THE FIRST FRUIT IS AN APPLE, YOU EARN $2"
    0x5fd58c653eb0 ---------A   01120 PRINT"IF THE FIRST AND SECOND ARE APPLES, YOU EARN $3."
    0x5fd58c658210 ---------A   01130 PRINT"IF THE LAST FRUIT IS A CHERRY AND THE"
    0x5fd58c6583a0 ---------A   01140 PRINT"OTHER TWO ARE THE SAME BUT NOT APPLES YOU"
    0x5fd58c6584f0 ---------A   01150 PRINT"EARN $10. EACH TURN COSTS $1. GOOD LUCK"
    0x5fd58c6587a0 ---------A T 01160 LET J=0
    0x5fd58c658810 ---------A   01170 PRINT
    0x5fd58c65cd80 ---------A T 01180 GOSUB 1580
    0x5fd58c65d100 ---------A   01190 LET S1=S
    0x5fd58c65d170 ---------A   01200 GOSUB 1580
    0x5fd58c65d450 ---------A   01210 LET S2=S
    0x5fd58c65d4c0 ---------A   01220 GOSUB 1580
    0x5fd58c65d7a0 ---------A   01230 LET S3=S
    0x5fd58c65d9d0 ---------A   01240 LET S=S1
    0x5fd58c65da40 ---------A   01250 GOSUB 1600
    0x5fd58c65dde0 ---------A   01260 LET S1$=S$
    0x5fd58c65e010 ---------A   01270 LET S=S2
    0x5fd58c65e080 ---------A   01280 GOSUB 1600
    0x5fd58c65e360 ---------A   01290 LET S2$=S$
    0x5fd58c65e590 ---------A   01300 LET S=S3
    0x5fd58c65e600 ---------A   01310 GOSUB 1600
    0x5fd58c65e8f0 ---------A   01320 LET S3$=S$
    0x5fd58c65ed80 ---------A   01330 IF S1$="CHERRY" THEN 1370
    0x5fd58c65f010 ---------A   01340 IF S1$="APPLE" THEN 1410
    0x5fd58c65f290 ---------A   01350 IF S1$=S2$ THEN 1430
    0x5fd58c65f320 ---------A   01360 GOTO 1450
    0x5fd58c65f580 ---------A T 01370 IF S1$=S2$ THEN 1390
    0x5fd58c65f610 ---------A   01380 GOTO 1450
    0x5fd58c65f870 ---------A T 01390 IF S2$=S3$ THEN 1470
    0x5fd58c65f900 ---------A   01400 GOTO 1450
    0x5fd58c65fb60 ---------A T 01410 IF S1$=S2$ THEN 1490
    0x5fd58c65fbf0 ---------A   01420 GOTO 1510
    0x5fd58c65fe60 ---------A T 01430 IF S2$=S3$ THEN 1530
    0x5fd58c6600e0 ---------A   01440 IF S3$="CHERRY" THEN 1530
    0x5fd58c660420 ---------A T 01450 LET J=J-1
    0x5fd58c660490 ---------A   01460 GOTO 1540
    0x5fd58c6607b0 ---------A T 01470 LET J=J+89
    0x5fd58c660820 ---------A   01480 GOTO 1540
    0x5fd58c660b40 ---------A T 01490 LET J=J+2
    0x5fd58c660bb0 ---------A   01500 GOTO 1540
    0x5fd58c660ed0 ---------A T 01510 LET J=J+1
    0x5fd58c660f40 ---------A   01520 GOTO 1540
    0x5fd58c661260 ---------A T 01530 LET J=J+9
    0x5fd58c6612e0 ---------A T 01540 PRINT
    0x5fd58c661850 ---------A   01550 PRINT S1$;" ";S2$;" ";S3$
    0x5fd58c661ab0 ---------A   01560 PRINT"YOUR TOTAL EARNINGS ARE NOW $";J
    0x5fd58c661b00 ---------A   01570 GOTO 1710
    0x5fd58c662020 ---------B G 01580 LET S=1+INT(5*RND)
    0x5fd58c662070 ---------B   01590 RETURN
    0x5fd58c6625a0 ---------C G 01600 ON S GOTO 1610,1630,1650,1670,1690
    0x5fd58c6627d0 ---------C T 01610 LET S$="CHERRY"
    0x5fd58c662840 ---------C   01620 GOTO 1700
    0x5fd58c662a60 ---------C T 01630 LET S$="APPLE"
    0x5fd58c662ad0 ---------C   01640 GOTO 1700
    0x5fd58c663100 ---------C T 01650 LET S$="LEMON"
    0x5fd58c663170 ---------C   01660 GOTO 1700
    0x5fd58c663390 ---------C T 01670 LET S$="ORANGE"
    0x5fd58c663400 ---------C   01680 GOTO 1700
    0x5fd58c663620 ---------C T 01690 LET S$="BANANA"
    0x5fd58c663670 ---------C T 01700 RETURN
    0x5fd58c663710 ---------A T 01710 PRINT
    0x5fd58c663870 ---------A   01720 PRINT"TO CONTINUE TYPE 'Y', IF NOT TYPE 'N'"
    0x5fd58c663a90 ---------A   01730 INPUT Z$
    0x5fd58c663d20 ---------A   01740 IF Z$="Y" THEN 1790
    0x5fd58c663fb0 ---------A   01750 IF Z$="N" THEN 1770
    0x5fd58c664130 ---------A   01760 PRINT"INVALID RESPONSE"
    0x5fd58c664290 ---------A T 01770 PRINT"ONE-ARM-BANDIT SAYS GOOD-BYE"
    0x5fd58c6642e0 ---------A   01780 STOP
    0x5fd58c664360 ---------A T 01790 PRINT
    0x5fd58c6643d0 ---------A   01800 GOTO 1180
    0x5fd58c664410 ---------A   01810 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01020      01080T
     01090      01050T
     01160      01060T
     01180      01800T
     01370      01330T
     01390      01370T
     01410      01340T
     01430      01350T
     01450      01360T, 01380T, 01400T
     01470      01390T
     01490      01410T
     01510      01420T
     01530      01430T, 01440T
     01540      01460T, 01480T, 01500T, 01520T
     01580      01180G, 01200G, 01220G
     01600      01250G, 01280G, 01310G
     01610      01600T
     01630      01600T
     01650      01600T
     01670      01600T
     01690      01600T
     01700      01620T, 01640T, 01660T, 01680T
     01710      01570T
     01770      01750T
     01790      01740T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5fd58c6445d0 (01000)   0x5fd58c6445d0 (01000)   0x5fd58c664410 (01810)   0x5fd58c664410 (01810)   
   B) 0x5fd58c662020 (01580)   0x5fd58c662020 (01580)   0x5fd58c662070 (01590)   0x5fd58c662070 (01590)   
   C) 0x5fd58c6625a0 (01600)   0x5fd58c6625a0 (01600)   0x5fd58c663670 (01700)   0x5fd58c663670 (01700)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01840 - 10000    8170 

 */



/*
 *  Symbol Table Listing for 'basic/bandit.bas'
 *
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
    L$                       String      
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
    S$                       String      
    S1                       Integer     
    S1$                      String      
    S2                       Integer     
    S2$                      String      
    S3                       Integer     
    S3$                      String      
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
    Z$                       String      

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/bandit.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5fd58c6445d0 ---------A   01000 REM THIS PROGRAM SIMULATES THE MECHANICAL
    0x5fd58c644610 ---------A   01010 REM THREE WHEEL ONE-ARM-BANDIT
    0x5fd58c655db0 ---------A T 01020 PRINT"ARE INTRUCTIONS REQUIRED?"
    0x5fd58c654b80 ---------A   01030 PRINT"TYPE EITHER 'YES' OR 'NO'"
    0x5fd58c6536d0 ---------A   01040 INPUT L$
    0x5fd58c653670 ---------A   01050 IF L$="YES" THEN 1090
    0x5fd58c654fc0 ---------A   01060 IF L$="NO" THEN 1160
    0x5fd58c655e70 ---------A   01070 PRINT"INVALID COMMAND"
    0x5fd58c657be0 ---------A   01080 GOTO 1020
    0x5fd58c655f30 ---------A T 01090 PRINT"SCORING IS SIMPLE; 3 ORANGES, LEMONS OR"
    0x5fd58c655ff0 ---------A   01100 PRINT"BANANAS EARN $10. 3 CHERRIES EARN $90."
    0x5fd58c6540b0 ---------A   01110 PRINT"IF THE FIRST FRUIT IS AN APPLE, YOU EARN $2"
    0x5fd58c653eb0 ---------A   01120 PRINT"IF THE FIRST AND SECOND ARE APPLES, YOU EARN $3."
    0x5fd58c658210 ---------A   01130 PRINT"IF THE LAST FRUIT IS A CHERRY AND THE"
    0x5fd58c6583a0 ---------A   01140 PRINT"OTHER TWO ARE THE SAME BUT NOT APPLES YOU"
    0x5fd58c6584f0 ---------A   01150 PRINT"EARN $10. EACH TURN COSTS $1. GOOD LUCK"
    0x5fd58c6587a0 ---------A T 01160 LET J=0
    0x5fd58c658810 ---------A   01170 PRINT
    0x5fd58c65cd80 ---------A T 01180 GOSUB 1690
    0x5fd58c65d100 ---------A   01190 LET S1=S
    0x5fd58c65d170 ---------A   01200 GOSUB 1690
    0x5fd58c65d450 ---------A   01210 LET S2=S
    0x5fd58c65d4c0 ---------A   01220 GOSUB 1690
    0x5fd58c65d7a0 ---------A   01230 LET S3=S
    0x5fd58c65d9d0 ---------A   01240 LET S=S1
    0x5fd58c65da40 ---------A   01250 GOSUB 1720
    0x5fd58c65dde0 ---------A   01260 LET S1$=S$
    0x5fd58c65e010 ---------A   01270 LET S=S2
    0x5fd58c65e080 ---------A   01280 GOSUB 1720
    0x5fd58c65e360 ---------A   01290 LET S2$=S$
    0x5fd58c65e590 ---------A   01300 LET S=S3
    0x5fd58c65e600 ---------A   01310 GOSUB 1720
    0x5fd58c65e8f0 ---------A   01320 LET S3$=S$
    0x5fd58c65ed80 ---------A   01330 IF S1$="CHERRY" THEN 1370
    0x5fd58c65f010 ---------A   01340 IF S1$="APPLE" THEN 1410
    0x5fd58c65f290 ---------A   01350 IF S1$=S2$ THEN 1430
    0x5fd58c65f320 ---------A   01360 GOTO 1450
    0x5fd58c65f580 ---------A T 01370 IF S1$=S2$ THEN 1390
    0x5fd58c65f610 ---------A   01380 GOTO 1450
    0x5fd58c65f870 ---------A T 01390 IF S2$=S3$ THEN 1470
    0x5fd58c65f900 ---------A   01400 GOTO 1450
    0x5fd58c65fb60 ---------A T 01410 IF S1$=S2$ THEN 1490
    0x5fd58c65fbf0 ---------A   01420 GOTO 1510
    0x5fd58c65fe60 ---------A T 01430 IF S2$=S3$ THEN 1530
    0x5fd58c6600e0 ---------A   01440 IF S3$="CHERRY" THEN 1530
    0x5fd58c660420 ---------A T 01450 LET J=J-1
    0x5fd58c660490 ---------A   01460 GOTO 1540
    0x5fd58c6607b0 ---------A T 01470 LET J=J+89
    0x5fd58c660820 ---------A   01480 GOTO 1540
    0x5fd58c660b40 ---------A T 01490 LET J=J+2
    0x5fd58c660bb0 ---------A   01500 GOTO 1540
    0x5fd58c660ed0 ---------A T 01510 LET J=J+1
    0x5fd58c660f40 ---------A   01520 GOTO 1540
    0x5fd58c661260 ---------A T 01530 LET J=J+9
    0x5fd58c6612e0 ---------A T 01540 PRINT
    0x5fd58c661850 ---------A   01550 PRINT S1$;" ";S2$;" ";S3$
    0x5fd58c661ab0 ---------A   01560 PRINT"YOUR TOTAL EARNINGS ARE NOW $";J
    0x5fd58c661b00 ---------A   01570 GOTO 1580
    0x5fd58c663710 ---------A T 01580 PRINT
    0x5fd58c663870 ---------A   01590 PRINT"TO CONTINUE TYPE 'Y', IF NOT TYPE 'N'"
    0x5fd58c663a90 ---------A   01600 INPUT Z$
    0x5fd58c663d20 ---------A   01610 IF Z$="Y" THEN 1660
    0x5fd58c663fb0 ---------A   01620 IF Z$="N" THEN 1640
    0x5fd58c664130 ---------A   01630 PRINT"INVALID RESPONSE"
    0x5fd58c664290 ---------A T 01640 PRINT"ONE-ARM-BANDIT SAYS GOOD-BYE"
    0x5fd58c6642e0 ---------A   01650 STOP
    0x5fd58c664360 ---------A T 01660 PRINT
    0x5fd58c6643d0 ---------A   01670 GOTO 1180
    0x5fd58c664410 ---------A   01680 END
    0x5fd58c662020 ---------B G 01690 LET S=1+INT(5*RND)
    0x5fd58c667640 ---------B   01700 GOTO 01710
    0x5fd58c667680 ---------B T 01710 RETURN
    0x5fd58c6625a0 ---------C G 01720 ON S GOTO 1730,1750,1770,1790,1810
    0x5fd58c6627d0 ---------C T 01730 LET S$="CHERRY"
    0x5fd58c662840 ---------C   01740 GOTO 1820
    0x5fd58c662a60 ---------C T 01750 LET S$="APPLE"
    0x5fd58c662ad0 ---------C   01760 GOTO 1820
    0x5fd58c663100 ---------C T 01770 LET S$="LEMON"
    0x5fd58c663170 ---------C   01780 GOTO 1820
    0x5fd58c663390 ---------C T 01790 LET S$="ORANGE"
    0x5fd58c663400 ---------C   01800 GOTO 1820
    0x5fd58c663620 ---------C T 01810 LET S$="BANANA"
    0x5fd58c6676c0 ---------C T 01820 GOTO 01830
    0x5fd58c667720 ---------C T 01830 RETURN
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
int    Earnings;                                  // Basic: J 
char*  QHelpAnswer;                               // Basic: L$ 
int    RandInt1to5_Result;                        // Basic: S 
char*  FruitIdx2Str_Result;                       // Basic: S$ 
int    Roll1;                                     // Basic: S1 
char*  Roll1Fruit;                                // Basic: S1$ 
int    Roll2;                                     // Basic: S2 
char*  Roll2Fruit;                                // Basic: S2$ 
int    Roll3;                                     // Basic: S3 
char*  Roll3Fruit;                                // Basic: S3$ 
char*  QContinueAnswer;                           // Basic: Z$ 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void RandInt1to5();
void Routine_01720();

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

void RandInt1to5(){
    // 01690 LET S=1+INT(5*RND)
    RandInt1to5_Result = 1+INT(5*RND());
    // 01700 GOTO 01710
    goto Lbl_01710;

  Lbl_01710:
    // 01710 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_01720(){
    // 01720 ON S GOTO 1730,1750,1770,1790,1810
    switch((int)(RandInt1to5_Result)){
        case 1: goto Lbl_01730;
        case 2: goto Lbl_01750;
        case 3: goto Lbl_01770;
        case 4: goto Lbl_01790;
        case 5: goto FruitIdx2StrExit;
        default: break; 
    };

  Lbl_01730:
    // 01730 LET S$="CHERRY"
    GLBpStr="CHERRY";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01740 GOTO 1820
    goto Lbl_01820;

  Lbl_01750:
    // 01750 LET S$="APPLE"
    GLBpStr="APPLE";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01760 GOTO 1820
    goto Lbl_01820;

  Lbl_01770:
    // 01770 LET S$="LEMON"
    GLBpStr="LEMON";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01780 GOTO 1820
    goto Lbl_01820;

  Lbl_01790:
    // 01790 LET S$="ORANGE"
    GLBpStr="ORANGE";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01800 GOTO 1820
    goto Lbl_01820;

  FruitIdx2StrExit:
    // 01810 LET S$="BANANA"
    GLBpStr="BANANA";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01820:
    // 01820 GOTO 01830
    goto Lbl_01830;

  Lbl_01830:
    // 01830 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM THIS PROGRAM SIMULATES THE MECHANICAL
    // 01010 REM THREE WHEEL ONE-ARM-BANDIT

  QInstructions:
    // 01020 PRINT"ARE INTRUCTIONS REQUIRED?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ARE INTRUCTIONS REQUIRED?");strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT"TYPE EITHER 'YES' OR 'NO'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TYPE EITHER 'YES' OR 'NO'");strcat(buf,"\n");fputs(buf,fh); };
    // 01040 INPUT L$
    // Start of Basic INPUT statement 01040
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&QHelpAnswer,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01040
    // 01050 IF L$="YES" THEN 1090
    if(strcmp(QHelpAnswer,"YES")==0)goto Instructions;
    // 01060 IF L$="NO" THEN 1160
    if(strcmp(QHelpAnswer,"NO")==0)goto StartGame;
    // 01070 PRINT"INVALID COMMAND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INVALID COMMAND");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 GOTO 1020
    goto QInstructions;

  Instructions:
    // 01090 PRINT"SCORING IS SIMPLE; 3 ORANGES, LEMONS OR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SCORING IS SIMPLE; 3 ORANGES, LEMONS OR");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT"BANANAS EARN $10. 3 CHERRIES EARN $90."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BANANAS EARN $10. 3 CHERRIES EARN $90.");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT"IF THE FIRST FRUIT IS AN APPLE, YOU EARN $2"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF THE FIRST FRUIT IS AN APPLE, YOU EARN $2");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT"IF THE FIRST AND SECOND ARE APPLES, YOU EARN $3."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF THE FIRST AND SECOND ARE APPLES, YOU EARN $3.");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT"IF THE LAST FRUIT IS A CHERRY AND THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF THE LAST FRUIT IS A CHERRY AND THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT"OTHER TWO ARE THE SAME BUT NOT APPLES YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OTHER TWO ARE THE SAME BUT NOT APPLES YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT"EARN $10. EACH TURN COSTS $1. GOOD LUCK"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"EARN $10. EACH TURN COSTS $1. GOOD LUCK");strcat(buf,"\n");fputs(buf,fh); };

  StartGame:
    // 01160 LET J=0
    Earnings = 0;
    // 01170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  GameLoop:
    // 01180 GOSUB 1690
    RandInt1to5();
    // 01190 LET S1=S
    Roll1 = RandInt1to5_Result;
    // 01200 GOSUB 1690
    RandInt1to5();
    // 01210 LET S2=S
    Roll2 = RandInt1to5_Result;
    // 01220 GOSUB 1690
    RandInt1to5();
    // 01230 LET S3=S
    Roll3 = RandInt1to5_Result;
    // 01240 LET S=S1
    RandInt1to5_Result = Roll1;
    // 01250 GOSUB 1720
    Routine_01720();
    // 01260 LET S1$=S$
    GLBpStr=FruitIdx2Str_Result;
    Roll1Fruit = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01270 LET S=S2
    RandInt1to5_Result = Roll2;
    // 01280 GOSUB 1720
    Routine_01720();
    // 01290 LET S2$=S$
    GLBpStr=FruitIdx2Str_Result;
    Roll2Fruit = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01300 LET S=S3
    RandInt1to5_Result = Roll3;
    // 01310 GOSUB 1720
    Routine_01720();
    // 01320 LET S3$=S$
    GLBpStr=FruitIdx2Str_Result;
    Roll3Fruit = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01330 IF S1$="CHERRY" THEN 1370
    if(strcmp(Roll1Fruit,"CHERRY")==0)goto IsDoubleCherry;
    // 01340 IF S1$="APPLE" THEN 1410
    if(strcmp(Roll1Fruit,"APPLE")==0)goto IsDoubleApple;
    // 01350 IF S1$=S2$ THEN 1430
    if(strcmp(Roll1Fruit,Roll2Fruit)==0)goto IsDouble;
    // 01360 GOTO 1450
    goto Nothing;

  IsDoubleCherry:
    // 01370 IF S1$=S2$ THEN 1390
    if(strcmp(Roll1Fruit,Roll2Fruit)==0)goto IsTripleCherry;
    // 01380 GOTO 1450
    goto Nothing;

  IsTripleCherry:
    // 01390 IF S2$=S3$ THEN 1470
    if(strcmp(Roll2Fruit,Roll3Fruit)==0)goto ThreeCherries;
    // 01400 GOTO 1450
    goto Nothing;

  IsDoubleApple:
    // 01410 IF S1$=S2$ THEN 1490
    if(strcmp(Roll1Fruit,Roll2Fruit)==0)goto DoubleApple;
    // 01420 GOTO 1510
    goto SingleApple;

  IsDouble:
    // 01430 IF S2$=S3$ THEN 1530
    if(strcmp(Roll2Fruit,Roll3Fruit)==0)goto TrippleOrDoubleAndCherry;
    // 01440 IF S3$="CHERRY" THEN 1530
    if(strcmp(Roll3Fruit,"CHERRY")==0)goto TrippleOrDoubleAndCherry;

  Nothing:
    // 01450 LET J=J-1
    Earnings = Earnings-1;
    // 01460 GOTO 1540
    goto DspResults;

  ThreeCherries:
    // 01470 LET J=J+89
    Earnings = Earnings+89;
    // 01480 GOTO 1540
    goto DspResults;

  DoubleApple:
    // 01490 LET J=J+2
    Earnings = Earnings+2;
    // 01500 GOTO 1540
    goto DspResults;

  SingleApple:
    // 01510 LET J=J+1
    Earnings = Earnings+1;
    // 01520 GOTO 1540
    goto DspResults;

  TrippleOrDoubleAndCherry:
    // 01530 LET J=J+9
    Earnings = Earnings+9;

  DspResults:
    // 01540 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01550 PRINT S1$;" ";S2$;" ";S3$
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_STR(buf,Roll1Fruit);strcat(buf," "); b2c_STR(buf,Roll2Fruit);strcat(buf," "); b2c_STR(buf,Roll3Fruit);strcat(buf,"\n");fputs(buf,fh); };
    // 01560 PRINT"YOUR TOTAL EARNINGS ARE NOW $";J
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR TOTAL EARNINGS ARE NOW $"); b2c_INT(buf,Earnings);strcat(buf,"\n");fputs(buf,fh); };
    // 01570 GOTO 1580
    goto QContinue;

  QContinue:
    // 01580 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01590 PRINT"TO CONTINUE TYPE 'Y', IF NOT TYPE 'N'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TO CONTINUE TYPE 'Y', IF NOT TYPE 'N'");strcat(buf,"\n");fputs(buf,fh); };
    // 01600 INPUT Z$
    // Start of Basic INPUT statement 01600
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&QContinueAnswer,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01600
    // 01610 IF Z$="Y" THEN 1660
    if(strcmp(QContinueAnswer,"Y")==0)goto PlayAgain;
    // 01620 IF Z$="N" THEN 1640
    if(strcmp(QContinueAnswer,"N")==0)goto QuitingTime;
    // 01630 PRINT"INVALID RESPONSE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INVALID RESPONSE");strcat(buf,"\n");fputs(buf,fh); };

  QuitingTime:
    // 01640 PRINT"ONE-ARM-BANDIT SAYS GOOD-BYE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ONE-ARM-BANDIT SAYS GOOD-BYE");strcat(buf,"\n");fputs(buf,fh); };
    // 01650 STOP
    exit(1);

  PlayAgain:
    // 01660 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01670 GOTO 1180
    goto GameLoop;
    // 01680 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
