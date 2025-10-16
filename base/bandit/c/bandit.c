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
    0x62723b61c5d0 ---------A   01000 REM THIS PROGRAM SIMULATES THE MECHANICAL
    0x62723b61c610 ---------A   01010 REM THREE WHEEL ONE-ARM-BANDIT
    0x62723b62dcf0 ---------A T 01020 PRINT"ARE INTRUCTIONS REQUIRED?"
    0x62723b62cac0 ---------A   01030 PRINT"TYPE EITHER 'YES' OR 'NO'"
    0x62723b62b610 ---------A   01040 INPUT L$
    0x62723b62b5b0 ---------A   01050 IF L$="YES" THEN 1090
    0x62723b62cf00 ---------A   01060 IF L$="NO" THEN 1160
    0x62723b62ddb0 ---------A   01070 PRINT"INVALID COMMAND"
    0x62723b62fb20 ---------A   01080 GOTO 1020
    0x62723b62de70 ---------A T 01090 PRINT"SCORING IS SIMPLE; 3 ORANGES, LEMONS OR"
    0x62723b62df30 ---------A   01100 PRINT"BANANAS EARN $10. 3 CHERRIES EARN $90."
    0x62723b62bff0 ---------A   01110 PRINT"IF THE FIRST FRUIT IS AN APPLE, YOU EARN $2"
    0x62723b62bdf0 ---------A   01120 PRINT"IF THE FIRST AND SECOND ARE APPLES, YOU EARN $3."
    0x62723b630150 ---------A   01130 PRINT"IF THE LAST FRUIT IS A CHERRY AND THE"
    0x62723b6302e0 ---------A   01140 PRINT"OTHER TWO ARE THE SAME BUT NOT APPLES YOU"
    0x62723b630430 ---------A   01150 PRINT"EARN $10. EACH TURN COSTS $1. GOOD LUCK"
    0x62723b6306e0 ---------A T 01160 LET J=0
    0x62723b630750 ---------A   01170 PRINT
    0x62723b634cc0 ---------A T 01180 GOSUB 1580
    0x62723b635040 ---------A   01190 LET S1=S
    0x62723b6350b0 ---------A   01200 GOSUB 1580
    0x62723b635390 ---------A   01210 LET S2=S
    0x62723b635400 ---------A   01220 GOSUB 1580
    0x62723b6356e0 ---------A   01230 LET S3=S
    0x62723b635910 ---------A   01240 LET S=S1
    0x62723b635980 ---------A   01250 GOSUB 1600
    0x62723b635d20 ---------A   01260 LET S1$=S$
    0x62723b635f50 ---------A   01270 LET S=S2
    0x62723b635fc0 ---------A   01280 GOSUB 1600
    0x62723b6362a0 ---------A   01290 LET S2$=S$
    0x62723b6364d0 ---------A   01300 LET S=S3
    0x62723b636540 ---------A   01310 GOSUB 1600
    0x62723b636830 ---------A   01320 LET S3$=S$
    0x62723b636cc0 ---------A   01330 IF S1$="CHERRY" THEN 1370
    0x62723b636f50 ---------A   01340 IF S1$="APPLE" THEN 1410
    0x62723b6371d0 ---------A   01350 IF S1$=S2$ THEN 1430
    0x62723b637260 ---------A   01360 GOTO 1450
    0x62723b6374c0 ---------A T 01370 IF S1$=S2$ THEN 1390
    0x62723b637550 ---------A   01380 GOTO 1450
    0x62723b6377b0 ---------A T 01390 IF S2$=S3$ THEN 1470
    0x62723b637840 ---------A   01400 GOTO 1450
    0x62723b637aa0 ---------A T 01410 IF S1$=S2$ THEN 1490
    0x62723b637b30 ---------A   01420 GOTO 1510
    0x62723b637da0 ---------A T 01430 IF S2$=S3$ THEN 1530
    0x62723b638020 ---------A   01440 IF S3$="CHERRY" THEN 1530
    0x62723b638360 ---------A T 01450 LET J=J-1
    0x62723b6383d0 ---------A   01460 GOTO 1540
    0x62723b6386f0 ---------A T 01470 LET J=J+89
    0x62723b638760 ---------A   01480 GOTO 1540
    0x62723b638a80 ---------A T 01490 LET J=J+2
    0x62723b638af0 ---------A   01500 GOTO 1540
    0x62723b638e10 ---------A T 01510 LET J=J+1
    0x62723b638e80 ---------A   01520 GOTO 1540
    0x62723b6391a0 ---------A T 01530 LET J=J+9
    0x62723b639220 ---------A T 01540 PRINT
    0x62723b639790 ---------A   01550 PRINT S1$;" ";S2$;" ";S3$
    0x62723b6399f0 ---------A   01560 PRINT"YOUR TOTAL EARNINGS ARE NOW $";J
    0x62723b639a40 ---------A   01570 GOTO 1710
    0x62723b639f60 ---------B G 01580 LET S=1+INT(5*RND)
    0x62723b639fb0 ---------B   01590 RETURN
    0x62723b63a4e0 ---------C G 01600 ON S GOTO 1610,1630,1650,1670,1690
    0x62723b63a710 ---------C T 01610 LET S$="CHERRY"
    0x62723b63a780 ---------C   01620 GOTO 1700
    0x62723b63a9a0 ---------C T 01630 LET S$="APPLE"
    0x62723b63aa10 ---------C   01640 GOTO 1700
    0x62723b63b040 ---------C T 01650 LET S$="LEMON"
    0x62723b63b0b0 ---------C   01660 GOTO 1700
    0x62723b63b2d0 ---------C T 01670 LET S$="ORANGE"
    0x62723b63b340 ---------C   01680 GOTO 1700
    0x62723b63b560 ---------C T 01690 LET S$="BANANA"
    0x62723b63b5b0 ---------C T 01700 RETURN
    0x62723b63b650 ---------A T 01710 PRINT
    0x62723b63b7b0 ---------A   01720 PRINT"TO CONTINUE TYPE 'Y', IF NOT TYPE 'N'"
    0x62723b63b9d0 ---------A   01730 INPUT Z$
    0x62723b63bc60 ---------A   01740 IF Z$="Y" THEN 1790
    0x62723b63bef0 ---------A   01750 IF Z$="N" THEN 1770
    0x62723b63c070 ---------A   01760 PRINT"INVALID RESPONSE"
    0x62723b63c1d0 ---------A T 01770 PRINT"ONE-ARM-BANDIT SAYS GOOD-BYE"
    0x62723b63c220 ---------A   01780 STOP
    0x62723b63c2a0 ---------A T 01790 PRINT
    0x62723b63c310 ---------A   01800 GOTO 1180
    0x62723b63c350 ---------A   01810 END
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
   A) 0x62723b61c5d0 (01000)   0x000000000000 (00000)   0x62723b63c350 (01810)   0x62723b63c350 (01810)   
   B) 0x62723b639f60 (01580)   0x62723b639f60 (01580)   0x62723b639fb0 (01590)   0x62723b639fb0 (01590)   
   C) 0x62723b63a4e0 (01600)   0x62723b63a4e0 (01600)   0x62723b63b5b0 (01700)   0x62723b63b5b0 (01700)   

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
    J                        Float       
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
    S                        Float       
    S$                       String      
    S1                       Float       
    S1$                      String      
    S2                       Float       
    S2$                      String      
    S3                       Float       
    S3$                      String      
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
    0x62723b61c5d0 ---------A   01000 REM THIS PROGRAM SIMULATES THE MECHANICAL
    0x62723b61c610 ---------A   01010 REM THREE WHEEL ONE-ARM-BANDIT
    0x62723b62dcf0 ---------A T 01020 PRINT"ARE INTRUCTIONS REQUIRED?"
    0x62723b62cac0 ---------A   01030 PRINT"TYPE EITHER 'YES' OR 'NO'"
    0x62723b62b610 ---------A   01040 INPUT L$
    0x62723b62b5b0 ---------A   01050 IF L$="YES" THEN 1090
    0x62723b62cf00 ---------A   01060 IF L$="NO" THEN 1160
    0x62723b62ddb0 ---------A   01070 PRINT"INVALID COMMAND"
    0x62723b62fb20 ---------A   01080 GOTO 1020
    0x62723b62de70 ---------A T 01090 PRINT"SCORING IS SIMPLE; 3 ORANGES, LEMONS OR"
    0x62723b62df30 ---------A   01100 PRINT"BANANAS EARN $10. 3 CHERRIES EARN $90."
    0x62723b62bff0 ---------A   01110 PRINT"IF THE FIRST FRUIT IS AN APPLE, YOU EARN $2"
    0x62723b62bdf0 ---------A   01120 PRINT"IF THE FIRST AND SECOND ARE APPLES, YOU EARN $3."
    0x62723b630150 ---------A   01130 PRINT"IF THE LAST FRUIT IS A CHERRY AND THE"
    0x62723b6302e0 ---------A   01140 PRINT"OTHER TWO ARE THE SAME BUT NOT APPLES YOU"
    0x62723b630430 ---------A   01150 PRINT"EARN $10. EACH TURN COSTS $1. GOOD LUCK"
    0x62723b6306e0 ---------A T 01160 LET J=0
    0x62723b630750 ---------A   01170 PRINT
    0x62723b634cc0 ---------A T 01180 GOSUB 1690
    0x62723b635040 ---------A   01190 LET S1=S
    0x62723b6350b0 ---------A   01200 GOSUB 1690
    0x62723b635390 ---------A   01210 LET S2=S
    0x62723b635400 ---------A   01220 GOSUB 1690
    0x62723b6356e0 ---------A   01230 LET S3=S
    0x62723b635910 ---------A   01240 LET S=S1
    0x62723b635980 ---------A   01250 GOSUB 1720
    0x62723b635d20 ---------A   01260 LET S1$=S$
    0x62723b635f50 ---------A   01270 LET S=S2
    0x62723b635fc0 ---------A   01280 GOSUB 1720
    0x62723b6362a0 ---------A   01290 LET S2$=S$
    0x62723b6364d0 ---------A   01300 LET S=S3
    0x62723b636540 ---------A   01310 GOSUB 1720
    0x62723b636830 ---------A   01320 LET S3$=S$
    0x62723b636cc0 ---------A   01330 IF S1$="CHERRY" THEN 1370
    0x62723b636f50 ---------A   01340 IF S1$="APPLE" THEN 1410
    0x62723b6371d0 ---------A   01350 IF S1$=S2$ THEN 1430
    0x62723b637260 ---------A   01360 GOTO 1450
    0x62723b6374c0 ---------A T 01370 IF S1$=S2$ THEN 1390
    0x62723b637550 ---------A   01380 GOTO 1450
    0x62723b6377b0 ---------A T 01390 IF S2$=S3$ THEN 1470
    0x62723b637840 ---------A   01400 GOTO 1450
    0x62723b637aa0 ---------A T 01410 IF S1$=S2$ THEN 1490
    0x62723b637b30 ---------A   01420 GOTO 1510
    0x62723b637da0 ---------A T 01430 IF S2$=S3$ THEN 1530
    0x62723b638020 ---------A   01440 IF S3$="CHERRY" THEN 1530
    0x62723b638360 ---------A T 01450 LET J=J-1
    0x62723b6383d0 ---------A   01460 GOTO 1540
    0x62723b6386f0 ---------A T 01470 LET J=J+89
    0x62723b638760 ---------A   01480 GOTO 1540
    0x62723b638a80 ---------A T 01490 LET J=J+2
    0x62723b638af0 ---------A   01500 GOTO 1540
    0x62723b638e10 ---------A T 01510 LET J=J+1
    0x62723b638e80 ---------A   01520 GOTO 1540
    0x62723b6391a0 ---------A T 01530 LET J=J+9
    0x62723b639220 ---------A T 01540 PRINT
    0x62723b639790 ---------A   01550 PRINT S1$;" ";S2$;" ";S3$
    0x62723b6399f0 ---------A   01560 PRINT"YOUR TOTAL EARNINGS ARE NOW $";J
    0x62723b639a40 ---------A   01570 GOTO 1580
    0x62723b63b650 ---------A T 01580 PRINT
    0x62723b63b7b0 ---------A   01590 PRINT"TO CONTINUE TYPE 'Y', IF NOT TYPE 'N'"
    0x62723b63b9d0 ---------A   01600 INPUT Z$
    0x62723b63bc60 ---------A   01610 IF Z$="Y" THEN 1660
    0x62723b63bef0 ---------A   01620 IF Z$="N" THEN 1640
    0x62723b63c070 ---------A   01630 PRINT"INVALID RESPONSE"
    0x62723b63c1d0 ---------A T 01640 PRINT"ONE-ARM-BANDIT SAYS GOOD-BYE"
    0x62723b63c220 ---------A   01650 STOP
    0x62723b63c2a0 ---------A T 01660 PRINT
    0x62723b63c310 ---------A   01670 GOTO 1180
    0x62723b63c350 ---------A   01680 END
    0x62723b639f60 ---------B G 01690 LET S=1+INT(5*RND)
    0x62723b63f580 ---------B   01700 GOTO 01710
    0x62723b63f5c0 ---------B T 01710 RETURN
    0x62723b63a4e0 ---------C G 01720 ON S GOTO 1730,1750,1770,1790,1810
    0x62723b63a710 ---------C T 01730 LET S$="CHERRY"
    0x62723b63a780 ---------C   01740 GOTO 1820
    0x62723b63a9a0 ---------C T 01750 LET S$="APPLE"
    0x62723b63aa10 ---------C   01760 GOTO 1820
    0x62723b63b040 ---------C T 01770 LET S$="LEMON"
    0x62723b63b0b0 ---------C   01780 GOTO 1820
    0x62723b63b2d0 ---------C T 01790 LET S$="ORANGE"
    0x62723b63b340 ---------C   01800 GOTO 1820
    0x62723b63b560 ---------C T 01810 LET S$="BANANA"
    0x62723b63f600 ---------C T 01820 GOTO 01830
    0x62723b63f660 ---------C T 01830 RETURN
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
float  J_flt;                                     // Basic: J 
char*  QHelpAnswer;                               // Basic: L$ 
float  S_flt;                                     // Basic: S 
char*  FruitIdx2Str_Result;                       // Basic: S$ 
float  S1_flt;                                    // Basic: S1 
char*  Roll1Fruit;                                // Basic: S1$ 
float  S2_flt;                                    // Basic: S2 
char*  Roll2Fruit;                                // Basic: S2$ 
float  S3_flt;                                    // Basic: S3 
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
    S_flt = 1+INT(5*RND());
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
    switch((int)(S_flt)){
        case 1: goto Lbl_01730;
        case 2: goto Lbl_01750;
        case 3: goto Lbl_01770;
        case 4: goto Lbl_01790;
        case 5: goto FruitIdx2StrExit;
        default: break; 
    };

  Lbl_01730:
    // 01730 LET S$="CHERRY"
    GLBpStr="Cherry";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01740 GOTO 1820
    goto Lbl_01820;

  Lbl_01750:
    // 01750 LET S$="APPLE"
    GLBpStr="Apple";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01760 GOTO 1820
    goto Lbl_01820;

  Lbl_01770:
    // 01770 LET S$="LEMON"
    GLBpStr="Lemon";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01780 GOTO 1820
    goto Lbl_01820;

  Lbl_01790:
    // 01790 LET S$="ORANGE"
    GLBpStr="Orange";
    FruitIdx2Str_Result = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01800 GOTO 1820
    goto Lbl_01820;

  FruitIdx2StrExit:
    // 01810 LET S$="BANANA"
    GLBpStr="Banana";
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
    b2c_printf("Are intructions required?\n");
    // 01030 PRINT"TYPE EITHER 'YES' OR 'NO'"
    b2c_printf("Type either 'yes' or 'no'\n");
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
    if(strcmp(QHelpAnswer,"Yes")==0)goto Instructions;
    // 01060 IF L$="NO" THEN 1160
    if(strcmp(QHelpAnswer,"No")==0)goto StartGame;
    // 01070 PRINT"INVALID COMMAND"
    b2c_printf("Invalid command\n");
    // 01080 GOTO 1020
    goto QInstructions;

  Instructions:
    // 01090 PRINT"SCORING IS SIMPLE; 3 ORANGES, LEMONS OR"
    b2c_printf("Scoring is simple; 3 oranges, lemons or\n");
    // 01100 PRINT"BANANAS EARN $10. 3 CHERRIES EARN $90."
    b2c_printf("Bananas earn $10. 3 Cherries earn $90.\n");
    // 01110 PRINT"IF THE FIRST FRUIT IS AN APPLE, YOU EARN $2"
    b2c_printf("If the first fruit is an apple, you earn $2\n");
    // 01120 PRINT"IF THE FIRST AND SECOND ARE APPLES, YOU EARN $3."
    b2c_printf("If the first and second are apples, you earn $3.\n");
    // 01130 PRINT"IF THE LAST FRUIT IS A CHERRY AND THE"
    b2c_printf("If the last fruit is a cherry and the\n");
    // 01140 PRINT"OTHER TWO ARE THE SAME BUT NOT APPLES YOU"
    b2c_printf("Other two are the same but not apples you\n");
    // 01150 PRINT"EARN $10. EACH TURN COSTS $1. GOOD LUCK"
    b2c_printf("Earn $10. Each turn costs $1. Good luck\n");

  StartGame:
    // 01160 LET J=0
    J_flt = 0;
    // 01170 PRINT
    b2c_printf("\n");

  GameLoop:
    // 01180 GOSUB 1690
    RandInt1to5();
    // 01190 LET S1=S
    S1_flt = S_flt;
    // 01200 GOSUB 1690
    RandInt1to5();
    // 01210 LET S2=S
    S2_flt = S_flt;
    // 01220 GOSUB 1690
    RandInt1to5();
    // 01230 LET S3=S
    S3_flt = S_flt;
    // 01240 LET S=S1
    S_flt = S1_flt;
    // 01250 GOSUB 1720
    Routine_01720();
    // 01260 LET S1$=S$
    GLBpStr=FruitIdx2Str_Result;
    Roll1Fruit = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01270 LET S=S2
    S_flt = S2_flt;
    // 01280 GOSUB 1720
    Routine_01720();
    // 01290 LET S2$=S$
    GLBpStr=FruitIdx2Str_Result;
    Roll2Fruit = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01300 LET S=S3
    S_flt = S3_flt;
    // 01310 GOSUB 1720
    Routine_01720();
    // 01320 LET S3$=S$
    GLBpStr=FruitIdx2Str_Result;
    Roll3Fruit = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01330 IF S1$="CHERRY" THEN 1370
    if(strcmp(Roll1Fruit,"Cherry")==0)goto IsDoubleCherry;
    // 01340 IF S1$="APPLE" THEN 1410
    if(strcmp(Roll1Fruit,"Apple")==0)goto IsDoubleApple;
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
    if(strcmp(Roll3Fruit,"Cherry")==0)goto TrippleOrDoubleAndCherry;

  Nothing:
    // 01450 LET J=J-1
    J_flt = J_flt-1;
    // 01460 GOTO 1540
    goto DspResults;

  ThreeCherries:
    // 01470 LET J=J+89
    J_flt = J_flt+89;
    // 01480 GOTO 1540
    goto DspResults;

  DoubleApple:
    // 01490 LET J=J+2
    J_flt = J_flt+2;
    // 01500 GOTO 1540
    goto DspResults;

  SingleApple:
    // 01510 LET J=J+1
    J_flt = J_flt+1;
    // 01520 GOTO 1540
    goto DspResults;

  TrippleOrDoubleAndCherry:
    // 01530 LET J=J+9
    J_flt = J_flt+9;

  DspResults:
    // 01540 PRINT
    b2c_printf("\n");
    // 01550 PRINT S1$;" ";S2$;" ";S3$
    b2c_printf("%s×c;rb  %s   %s\n",Roll1Fruit,Roll2Fruit,Roll3Fruit);
    // 01560 PRINT"YOUR TOTAL EARNINGS ARE NOW $";J
    b2c_printf("Your total earnings are now $ %.2f \n",J_flt);
    // 01570 GOTO 1580
    goto QContinue;

  QContinue:
    // 01580 PRINT
    b2c_printf("\n");
    // 01590 PRINT"TO CONTINUE TYPE 'Y', IF NOT TYPE 'N'"
    b2c_printf("To continue type 'y', if not type 'n'\n");
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
    b2c_printf("Invalid response\n");

  QuitingTime:
    // 01640 PRINT"ONE-ARM-BANDIT SAYS GOOD-BYE"
    b2c_printf("One-arm-bandit says good-bye\n");
    // 01650 STOP
    exit(1);

  PlayAgain:
    // 01660 PRINT
    b2c_printf("\n");
    // 01670 GOTO 1180
    goto GameLoop;
    // 01680 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
