/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/supstrki.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6510de45b5d0 ---------A   00001 REM NOTE: Basic language type forced to be:
    0x6510de46bf00 ---------A   00002 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x6510de46b850 ---------A   00010 CLS
    0x6510de46bac0 ---------A   00020 PRINT@273,"SUPER STAR TREK INSTRUCTIONS"
    0x6510de46ce70 ---------A   00030 PRINT@409,"COPYRIGHT BY"
    0x6510de46cf30 ---------A   00040 PRINT@534,"CREATIVE COMPUTING"
    0x6510de46cff0 ---------A   00050 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x6510de46af80 ---------A   00060 P=1:GOSUB1400
    0x6510de46afc0 ---------A   00070 CLS
    0x6510de46add0 ---------A   00080 PRINT@320,"1. WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    0x6510de46c620 ---------A   00090 PRINT"     COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM OR XXX)."
    0x6510de46c670 ---------A   00100 GOSUB1450
    0x6510de46d090 ---------A   00110 PRINT@320,"2. IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    0x6510de46b6c0 ---------A   00120 PRINTTAB(12);"LIST OF THE LEGAL COMMANDS PRINTED OUT."
    0x6510de46b770 ---------A   00130 GOSUB1450
    0x6510de472900 ---------A   00140 PRINT@192,"3. SOME COMMANDS REQUARE YHOU TO ENTER DATA (FOR EXAMPLE, THE"
    0x6510de472ac0 ---------A   00150 PRINT"      'NAV' COMMAND COMES BACK WITH 'CORSE (1-9) ?'.) IF YOU"
    0x6510de472c20 ---------A   00160 PRINT"  TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    0x6510de472e30 ---------A   00170 PRINTTAB(22);"WILL BE ABORTED."
    0x6510de472e80 ---------A   00180 GOSUB1450
    0x6510de472f60 ---------A   00190 PRINT:PRINT
    0x6510de473120 ---------A   00200 PRINT"      THE GALAXY IS DIVIDED INTO AN 8 X 8 QUADRANT GRID,"
    0x6510de473280 ---------A   00210 PRINT"AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID"
    0x6510de473320 ---------A   00220 PRINT
    0x6510de4734e0 ---------A   00230 PRINT"  YOU WIL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE"
    0x6510de4736a0 ---------A   00240 PRINT"GALAXY TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP"
    0x6510de473860 ---------A   00250 PRINT"/ENTERPRISE/; YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF"
    0x6510de4739c0 ---------A   00260 PRINT"KLINGON WARSHIPS WHICH ARE MENACING THE UNITED FEDERATION OF"
    0x6510de473ad0 ---------A   00270 PRINT"PLANETS."
    0x6510de473b70 ---------A   00280 GOSUB1450
    0x6510de473cf0 ---------A   00290 PRINT"  YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    0x6510de473e60 ---------A   00300 PRINT"      CAPTAIN OF THE STARSHIP ENTERPRISE:"
    0x6510de473ef0 ---------A   00310 PRINT
    0x6510de474270 ---------A   00320 PRINT"/NAV/ COMMAND = WARP ENGINE CONTROL --"
    0x6510de474310 ---------A   00330 PRINT
    0x6510de4744b0 ---------A   00340 PRINT"  COURSE IS IN A CIRCULAR NUMERICAL       4  3  2"
    0x6510de474650 ---------A   00350 PRINT"		  VECTOR ARRANGEMENT AS SHOWN              . . ."
    0x6510de4747f0 ---------A   00360 PRINT"  INTERGER AND REAL VALUES MAY BE           ..."
    0x6510de474990 ---------A   00370 PRINT"  USED.  (THUS COURSE 1.5 IS HALF-      5 ---*--- 1"
    0x6510de474b30 ---------A   00380 PRINT"      WAY BETWEEN 1 AND 2.                  ..."
    0x6510de474cd0 ---------A   00390 PRINT"                                           . . ."
    0x6510de474e60 ---------A   00400 PRINT"VALUES MAY APPROACH 9.0, WHICH            6  7  8"
    0x6510de474fb0 ---------A   00410 PRINT"      ITSELF IS EQUIVALENT TO 1.0"
    0x6510de475120 ---------A   00420 PRINT"                                  COURSE"
    0x6510de475190 ---------A   00430 GOSUB1450
    0x6510de4752f0 ---------A   00440 PRINT@256,""
    0x6510de475580 ---------A   00450 PRINTTAB(15);"ONE WARP FACTOR IS THE SIZE OF"
    0x6510de475850 ---------A   00460 PRINTTAB(14);"ONE QUARDRANT.  THEREFORE, TO GET"
    0x6510de475b10 ---------A   00470 PRINTTAB(13);"FROM QUARDRANT 6,5 TO 5,5 YOU WOULD"
    0x6510de475db0 ---------A   00480 PRINTTAB(16);"USE COURSE 3, WARP FACTOR 1."
    0x6510de475e40 ---------A   00490 GOSUB1450
    0x6510de475fa0 ---------A   00500 PRINT"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"
    0x6510de476040 ---------A   00510 PRINT
    0x6510de4761b0 ---------A   00520 PRINT"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."
    0x6510de476250 ---------A   00530 PRINT
    0x6510de4763e0 ---------A   00540 PRINT"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    0x6510de476560 ---------A   00550 PRINT"      <*> = YOUR STARSHIP'S POSITTION"
    0x6510de476700 ---------A   00560 PRINT"      +K+ = KLINGON BATTLE CRUISER"
    0x6510de476880 ---------A   00570 PRINT"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"
    0x6510de4769d0 ---------A   00580 PRINT"  * = STAR"
    0x6510de476a70 ---------A   00590 PRINT
    0x6510de476bf0 ---------A   00600 PRINT"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    0x6510de476c80 ---------A   00610 GOSUB1420
    0x6510de476de0 ---------A   00620 PRINT"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"
    0x6510de476e90 ---------A   00630 PRINT
    0x6510de477450 ---------A   00640 PRINT"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x6510de477610 ---------A   00650 PRINT"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."
    0x6510de4777c0 ---------A   00660 PRINT"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"
    0x6510de477970 ---------A   00670 PRINT"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"
    0x6510de477af0 ---------A   00680 PRINT"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"
    0x6510de477c40 ---------A   00690 PRINT"  KLINGONS."
    0x6510de477c90 ---------A   00700 PRINT
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01400      00060G
     01420      00610G
     01450      00100G, 00130G, 00180G, 00280G, 00430G, 00490G

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x6510de45b5d0 (00001)   0x000000000000 (00000)   0x6510de477c90 (00700)   0x6510de477c90 (00700)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01720 - 10000    8290 

 */



/*
 *  Symbol Table Listing for 'basic/supstrki.bas'
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
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/supstrki.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6510de45b5d0 ---------A   01000 REM NOTE: Basic language type forced to be:
    0x6510de46bf00 ---------A   01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x6510de46b850 ---------A   01020 CLS
    0x6510de46bac0 ---------A   01030 PRINT@273,"SUPER STAR TREK INSTRUCTIONS"
    0x6510de46ce70 ---------A   01040 PRINT@409,"COPYRIGHT BY"
    0x6510de46cf30 ---------A   01050 PRINT@534,"CREATIVE COMPUTING"
    0x6510de46cff0 ---------A   01060 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x6510de46af80 ---------A   01070 P=1:GOSUB1400
    0x6510de46afc0 ---------A   01080 CLS
    0x6510de46add0 ---------A   01090 PRINT@320,"1. WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    0x6510de46c620 ---------A   01100 PRINT"     COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM OR XXX)."
    0x6510de46c670 ---------A   01110 GOSUB1450
    0x6510de46d090 ---------A   01120 PRINT@320,"2. IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    0x6510de46b6c0 ---------A   01130 PRINTTAB(12);"LIST OF THE LEGAL COMMANDS PRINTED OUT."
    0x6510de46b770 ---------A   01140 GOSUB1450
    0x6510de472900 ---------A   01150 PRINT@192,"3. SOME COMMANDS REQUARE YHOU TO ENTER DATA (FOR EXAMPLE, THE"
    0x6510de472ac0 ---------A   01160 PRINT"      'NAV' COMMAND COMES BACK WITH 'CORSE (1-9) ?'.) IF YOU"
    0x6510de472c20 ---------A   01170 PRINT"  TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    0x6510de472e30 ---------A   01180 PRINTTAB(22);"WILL BE ABORTED."
    0x6510de472e80 ---------A   01190 GOSUB1450
    0x6510de472f60 ---------A   01200 PRINT:PRINT
    0x6510de473120 ---------A   01210 PRINT"      THE GALAXY IS DIVIDED INTO AN 8 X 8 QUADRANT GRID,"
    0x6510de473280 ---------A   01220 PRINT"AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID"
    0x6510de473320 ---------A   01230 PRINT
    0x6510de4734e0 ---------A   01240 PRINT"  YOU WIL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE"
    0x6510de4736a0 ---------A   01250 PRINT"GALAXY TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP"
    0x6510de473860 ---------A   01260 PRINT"/ENTERPRISE/; YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF"
    0x6510de4739c0 ---------A   01270 PRINT"KLINGON WARSHIPS WHICH ARE MENACING THE UNITED FEDERATION OF"
    0x6510de473ad0 ---------A   01280 PRINT"PLANETS."
    0x6510de473b70 ---------A   01290 GOSUB1450
    0x6510de473cf0 ---------A   01300 PRINT"  YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    0x6510de473e60 ---------A   01310 PRINT"      CAPTAIN OF THE STARSHIP ENTERPRISE:"
    0x6510de473ef0 ---------A   01320 PRINT
    0x6510de474270 ---------A   01330 PRINT"/NAV/ COMMAND = WARP ENGINE CONTROL --"
    0x6510de474310 ---------A   01340 PRINT
    0x6510de4744b0 ---------A   01350 PRINT"  COURSE IS IN A CIRCULAR NUMERICAL       4  3  2"
    0x6510de474650 ---------A   01360 PRINT"		  VECTOR ARRANGEMENT AS SHOWN              . . ."
    0x6510de4747f0 ---------A   01370 PRINT"  INTERGER AND REAL VALUES MAY BE           ..."
    0x6510de474990 ---------A   01380 PRINT"  USED.  (THUS COURSE 1.5 IS HALF-      5 ---*--- 1"
    0x6510de474b30 ---------A   01390 PRINT"      WAY BETWEEN 1 AND 2.                  ..."
    0x6510de474cd0 ---------A G 01400 PRINT"                                           . . ."
    0x6510de474e60 ---------A   01410 PRINT"VALUES MAY APPROACH 9.0, WHICH            6  7  8"
    0x6510de474fb0 ---------A G 01420 PRINT"      ITSELF IS EQUIVALENT TO 1.0"
    0x6510de475120 ---------A   01430 PRINT"                                  COURSE"
    0x6510de475190 ---------A   01440 GOSUB1450
    0x6510de4752f0 ---------A G 01450 PRINT@256,""
    0x6510de475580 ---------A   01460 PRINTTAB(15);"ONE WARP FACTOR IS THE SIZE OF"
    0x6510de475850 ---------A   01470 PRINTTAB(14);"ONE QUARDRANT.  THEREFORE, TO GET"
    0x6510de475b10 ---------A   01480 PRINTTAB(13);"FROM QUARDRANT 6,5 TO 5,5 YOU WOULD"
    0x6510de475db0 ---------A   01490 PRINTTAB(16);"USE COURSE 3, WARP FACTOR 1."
    0x6510de475e40 ---------A   01500 GOSUB1450
    0x6510de475fa0 ---------A   01510 PRINT"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"
    0x6510de476040 ---------A   01520 PRINT
    0x6510de4761b0 ---------A   01530 PRINT"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."
    0x6510de476250 ---------A   01540 PRINT
    0x6510de4763e0 ---------A   01550 PRINT"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    0x6510de476560 ---------A   01560 PRINT"      <*> = YOUR STARSHIP'S POSITTION"
    0x6510de476700 ---------A   01570 PRINT"      +K+ = KLINGON BATTLE CRUISER"
    0x6510de476880 ---------A   01580 PRINT"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"
    0x6510de4769d0 ---------A   01590 PRINT"  * = STAR"
    0x6510de476a70 ---------A   01600 PRINT
    0x6510de476bf0 ---------A   01610 PRINT"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    0x6510de476c80 ---------A   01620 GOSUB1420
    0x6510de476de0 ---------A   01630 PRINT"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"
    0x6510de476e90 ---------A   01640 PRINT
    0x6510de477450 ---------A   01650 PRINT"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x6510de477610 ---------A   01660 PRINT"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."
    0x6510de4777c0 ---------A   01670 PRINT"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"
    0x6510de477970 ---------A   01680 PRINT"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"
    0x6510de477af0 ---------A   01690 PRINT"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"
    0x6510de477c40 ---------A   01700 PRINT"  KLINGONS."
    0x6510de477c90 ---------A   01710 PRINT
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
float  P_flt;                                     // Basic: P 
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
    // 01000 REM NOTE: Basic language type forced to be:
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 CLS
    ClearScreen(0);
    // 01030 PRINT@273,"SUPER STAR TREK INSTRUCTIONS"
    b2c_printf("Super star trek instructions\n");
    // 01040 PRINT@409,"COPYRIGHT BY"
    b2c_printf("Copyright by\n");
    // 01050 PRINT@534,"CREATIVE COMPUTING"
    b2c_printf("Creative computing\n");
    // 01060 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    b2c_printf("Morristown, new jersey 07960\n");
    // 01070 P=1:GOSUB1400
    Routine_01400();
    // 01080 CLS
    ClearScreen(0);
    // 01090 PRINT@320,"1. WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    b2c_printf("1. When you see 'command ?' Printed, enter one of the legal\n");
    // 01100 PRINT"     COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM OR XXX)."
    b2c_printf("     commands (nav,srs,lrs,pha,tor,she,dam,com or xxx).\n");
    // 01110 GOSUB1450
    Routine_01450();
    // 01120 PRINT@320,"2. IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    b2c_printf("2. If you should type in an illegal command, you'll get a short\n");
