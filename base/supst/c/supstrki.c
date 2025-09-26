/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/supst/basic/supstrki.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x5575a5615d10 ---------A   00001 REM NOTE: Basic language type forced to be:
    0x5575a5615e00 ---------A   00002 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5575a5615ec0 ---------A   00010 CLS
    0x5575a5616030 ---------A   00020 PRINT@273,"SUPER STAR TREK INSTRUCTIONS"
    0x5575a5616150 ---------A   00030 PRINT@409,"COPYRIGHT BY"
    0x5575a56162d0 ---------A   00040 PRINT@534,"CREATIVE COMPUTING"
    0x5575a56163e0 ---------A   00050 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x5575a5616620 ---------A   00060 P=1:GOSUB1400
    0x5575a56166c0 ---------A   00070 CLS
    0x5575a5616880 ---------A   00080 PRINT@320,"1. WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    0x5575a56169e0 ---------A   00090 PRINT"     COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM OR XXX)."
    0x5575a5616a90 ---------A   00100 GOSUB1450
    0x5575a5616c10 ---------A   00110 PRINT@320,"2. IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    0x5575a561b150 ---------A   00120 PRINTTAB(12);"LIST OF THE LEGAL COMMANDS PRINTED OUT."
    0x5575a561b200 ---------A   00130 GOSUB1450
    0x5575a561b390 ---------A   00140 PRINT@192,"3. SOME COMMANDS REQUARE YHOU TO ENTER DATA (FOR EXAMPLE, THE"
    0x5575a561b530 ---------A   00150 PRINT"      'NAV' COMMAND COMES BACK WITH 'CORSE (1-9) ?'.) IF YOU"
    0x5575a561b7b0 ---------A   00160 PRINT"  TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    0x5575a561ba00 ---------A   00170 PRINTTAB(22);"WILL BE ABORTED."
    0x5575a561ba70 ---------A   00180 GOSUB1450
    0x5575a561bb50 ---------A   00190 PRINT:PRINT
    0x5575a561bcf0 ---------A   00200 PRINT"      THE GALAXY IS DIVIDED INTO AN 8 X 8 QUADRANT GRID,"
    0x5575a561be50 ---------A   00210 PRINT"AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID"
    0x5575a561bef0 ---------A   00220 PRINT
    0x5575a561c090 ---------A   00230 PRINT"  YOU WIL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE"
    0x5575a561c230 ---------A   00240 PRINT"GALAXY TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP"
    0x5575a561c3d0 ---------A   00250 PRINT"/ENTERPRISE/; YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF"
    0x5575a561c530 ---------A   00260 PRINT"KLINGON WARSHIPS WHICH ARE MENACING THE UNITED FEDERATION OF"
    0x5575a561c660 ---------A   00270 PRINT"PLANETS."
    0x5575a561c700 ---------A   00280 GOSUB1450
    0x5575a561c860 ---------A   00290 PRINT"  YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    0x5575a561c9b0 ---------A   00300 PRINT"      CAPTAIN OF THE STARSHIP ENTERPRISE:"
    0x5575a561ca40 ---------A   00310 PRINT
    0x5575a561cda0 ---------A   00320 PRINT"/NAV/ COMMAND = WARP ENGINE CONTROL --"
    0x5575a561ce40 ---------A   00330 PRINT
    0x5575a561cfc0 ---------A   00340 PRINT"  COURSE IS IN A CIRCULAR NUMERICAL       4  3  2"
    0x5575a561d140 ---------A   00350 PRINT"		  VECTOR ARRANGEMENT AS SHOWN              . . ."
    0x5575a561d2c0 ---------A   00360 PRINT"  INTERGER AND REAL VALUES MAY BE           ..."
    0x5575a561d440 ---------A   00370 PRINT"  USED.  (THUS COURSE 1.5 IS HALF-      5 ---*--- 1"
    0x5575a561d5c0 ---------A   00380 PRINT"      WAY BETWEEN 1 AND 2.                  ..."
    0x5575a561d740 ---------A   00390 PRINT"                                           . . ."
    0x5575a561d8b0 ---------A   00400 PRINT"VALUES MAY APPROACH 9.0, WHICH            6  7  8"
    0x5575a561da10 ---------A   00410 PRINT"      ITSELF IS EQUIVALENT TO 1.0"
    0x5575a561db60 ---------A   00420 PRINT"                                  COURSE"
    0x5575a561dbd0 ---------A   00430 GOSUB1450
    0x5575a561dd10 ---------A   00440 PRINT@256,""
    0x5575a561df90 ---------A   00450 PRINTTAB(15);"ONE WARP FACTOR IS THE SIZE OF"
    0x5575a561e220 ---------A   00460 PRINTTAB(14);"ONE QUARDRANT.  THEREFORE, TO GET"
    0x5575a561e4a0 ---------A   00470 PRINTTAB(13);"FROM QUARDRANT 6,5 TO 5,5 YOU WOULD"
    0x5575a561e700 ---------A   00480 PRINTTAB(16);"USE COURSE 3, WARP FACTOR 1."
    0x5575a561e790 ---------A   00490 GOSUB1450
    0x5575a561e8d0 ---------A   00500 PRINT"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"
    0x5575a561e970 ---------A   00510 PRINT
    0x5575a561eac0 ---------A   00520 PRINT"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."
    0x5575a561eb60 ---------A   00530 PRINT
    0x5575a561ecd0 ---------A   00540 PRINT"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    0x5575a561ee30 ---------A   00550 PRINT"      <*> = YOUR STARSHIP'S POSITTION"
    0x5575a561efb0 ---------A   00560 PRINT"      +K+ = KLINGON BATTLE CRUISER"
    0x5575a561f110 ---------A   00570 PRINT"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"
    0x5575a561f240 ---------A   00580 PRINT"  * = STAR"
    0x5575a561f2e0 ---------A   00590 PRINT
    0x5575a561f440 ---------A   00600 PRINT"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    0x5575a561f4d0 ---------A   00610 GOSUB1420
    0x5575a561f610 ---------A   00620 PRINT"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"
    0x5575a561f6c0 ---------A   00630 PRINT
    0x5575a561fc60 ---------A   00640 PRINT"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x5575a561fe00 ---------A   00650 PRINT"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."
    0x5575a561ff90 ---------A   00660 PRINT"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"
    0x5575a5620120 ---------A   00670 PRINT"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"
    0x5575a5620280 ---------A   00680 PRINT"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"
    0x5575a56203b0 ---------A   00690 PRINT"  KLINGONS."
    0x5575a5620400 ---------A   00700 PRINT
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

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x5575a5615d10   0x5575a5615d10   0x5575a5620400   0x5575a5620400 


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
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/supst/basic/supstrki.bas'
 *
    P              Integer 
    TAB   Function String      args=1, 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/supst/basic/supstrki.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x5575a5615d10 ---------A   01000 REM NOTE: Basic language type forced to be:
    0x5575a5615e00 ---------A   01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5575a5615ec0 ---------A   01020 CLS
    0x5575a5616030 ---------A   01030 PRINT@273,"SUPER STAR TREK INSTRUCTIONS"
    0x5575a5616150 ---------A   01040 PRINT@409,"COPYRIGHT BY"
    0x5575a56162d0 ---------A   01050 PRINT@534,"CREATIVE COMPUTING"
    0x5575a56163e0 ---------A   01060 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x5575a5616620 ---------A   01070 P=1:GOSUB1400
    0x5575a56166c0 ---------A   01080 CLS
    0x5575a5616880 ---------A   01090 PRINT@320,"1. WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    0x5575a56169e0 ---------A   01100 PRINT"     COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM OR XXX)."
    0x5575a5616a90 ---------A   01110 GOSUB1450
    0x5575a5616c10 ---------A   01120 PRINT@320,"2. IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    0x5575a561b150 ---------A   01130 PRINTTAB(12);"LIST OF THE LEGAL COMMANDS PRINTED OUT."
    0x5575a561b200 ---------A   01140 GOSUB1450
    0x5575a561b390 ---------A   01150 PRINT@192,"3. SOME COMMANDS REQUARE YHOU TO ENTER DATA (FOR EXAMPLE, THE"
    0x5575a561b530 ---------A   01160 PRINT"      'NAV' COMMAND COMES BACK WITH 'CORSE (1-9) ?'.) IF YOU"
    0x5575a561b7b0 ---------A   01170 PRINT"  TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    0x5575a561ba00 ---------A   01180 PRINTTAB(22);"WILL BE ABORTED."
    0x5575a561ba70 ---------A   01190 GOSUB1450
    0x5575a561bb50 ---------A   01200 PRINT:PRINT
    0x5575a561bcf0 ---------A   01210 PRINT"      THE GALAXY IS DIVIDED INTO AN 8 X 8 QUADRANT GRID,"
    0x5575a561be50 ---------A   01220 PRINT"AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID"
    0x5575a561bef0 ---------A   01230 PRINT
    0x5575a561c090 ---------A   01240 PRINT"  YOU WIL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE"
    0x5575a561c230 ---------A   01250 PRINT"GALAXY TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP"
    0x5575a561c3d0 ---------A   01260 PRINT"/ENTERPRISE/; YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF"
    0x5575a561c530 ---------A   01270 PRINT"KLINGON WARSHIPS WHICH ARE MENACING THE UNITED FEDERATION OF"
    0x5575a561c660 ---------A   01280 PRINT"PLANETS."
    0x5575a561c700 ---------A   01290 GOSUB1450
    0x5575a561c860 ---------A   01300 PRINT"  YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    0x5575a561c9b0 ---------A   01310 PRINT"      CAPTAIN OF THE STARSHIP ENTERPRISE:"
    0x5575a561ca40 ---------A   01320 PRINT
    0x5575a561cda0 ---------A   01330 PRINT"/NAV/ COMMAND = WARP ENGINE CONTROL --"
    0x5575a561ce40 ---------A   01340 PRINT
    0x5575a561cfc0 ---------A   01350 PRINT"  COURSE IS IN A CIRCULAR NUMERICAL       4  3  2"
    0x5575a561d140 ---------A   01360 PRINT"		  VECTOR ARRANGEMENT AS SHOWN              . . ."
    0x5575a561d2c0 ---------A   01370 PRINT"  INTERGER AND REAL VALUES MAY BE           ..."
    0x5575a561d440 ---------A   01380 PRINT"  USED.  (THUS COURSE 1.5 IS HALF-      5 ---*--- 1"
    0x5575a561d5c0 ---------A   01390 PRINT"      WAY BETWEEN 1 AND 2.                  ..."
    0x5575a561d740 ---------A G 01400 PRINT"                                           . . ."
    0x5575a561d8b0 ---------A   01410 PRINT"VALUES MAY APPROACH 9.0, WHICH            6  7  8"
    0x5575a561da10 ---------A G 01420 PRINT"      ITSELF IS EQUIVALENT TO 1.0"
    0x5575a561db60 ---------A   01430 PRINT"                                  COURSE"
    0x5575a561dbd0 ---------A   01440 GOSUB1450
    0x5575a561dd10 ---------A G 01450 PRINT@256,""
    0x5575a561df90 ---------A   01460 PRINTTAB(15);"ONE WARP FACTOR IS THE SIZE OF"
    0x5575a561e220 ---------A   01470 PRINTTAB(14);"ONE QUARDRANT.  THEREFORE, TO GET"
    0x5575a561e4a0 ---------A   01480 PRINTTAB(13);"FROM QUARDRANT 6,5 TO 5,5 YOU WOULD"
    0x5575a561e700 ---------A   01490 PRINTTAB(16);"USE COURSE 3, WARP FACTOR 1."
    0x5575a561e790 ---------A   01500 GOSUB1450
    0x5575a561e8d0 ---------A   01510 PRINT"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"
    0x5575a561e970 ---------A   01520 PRINT
    0x5575a561eac0 ---------A   01530 PRINT"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."
    0x5575a561eb60 ---------A   01540 PRINT
    0x5575a561ecd0 ---------A   01550 PRINT"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    0x5575a561ee30 ---------A   01560 PRINT"      <*> = YOUR STARSHIP'S POSITTION"
    0x5575a561efb0 ---------A   01570 PRINT"      +K+ = KLINGON BATTLE CRUISER"
    0x5575a561f110 ---------A   01580 PRINT"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"
    0x5575a561f240 ---------A   01590 PRINT"  * = STAR"
    0x5575a561f2e0 ---------A   01600 PRINT
    0x5575a561f440 ---------A   01610 PRINT"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    0x5575a561f4d0 ---------A   01620 GOSUB1420
    0x5575a561f610 ---------A   01630 PRINT"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"
    0x5575a561f6c0 ---------A   01640 PRINT
    0x5575a561fc60 ---------A   01650 PRINT"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x5575a561fe00 ---------A   01660 PRINT"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."
    0x5575a561ff90 ---------A   01670 PRINT"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"
    0x5575a5620120 ---------A   01680 PRINT"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"
    0x5575a5620280 ---------A   01690 PRINT"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"
    0x5575a56203b0 ---------A   01700 PRINT"  KLINGONS."
    0x5575a5620400 ---------A   01710 PRINT
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
int   P_int;        // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01400();
void Routine_01420();
void Routine_01450();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------

void Routine_01400(){
    // 01400 PRINT"                                           . . ."
    b2c_fprintf(stdout,"                                           . . ."); b2c_fprintf(stdout,"\n");
    // 01410 PRINT"VALUES MAY APPROACH 9.0, WHICH            6  7  8"
    b2c_fprintf(stdout,"VALUES MAY APPROACH 9.0, WHICH            6  7  8"); b2c_fprintf(stdout,"\n");

void Routine_01420(){
    // 01420 PRINT"      ITSELF IS EQUIVALENT TO 1.0"
    b2c_fprintf(stdout,"      ITSELF IS EQUIVALENT TO 1.0"); b2c_fprintf(stdout,"\n");
    // 01430 PRINT"                                  COURSE"
    b2c_fprintf(stdout,"                                  COURSE"); b2c_fprintf(stdout,"\n");
    // 01440 GOSUB1450
    Routine_01450();

void Routine_01450(){
    // 01450 PRINT@256,""
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01460 PRINTTAB(15);"ONE WARP FACTOR IS THE SIZE OF"
    b2c_fprintf(stdout,"%sONE WARP FACTOR IS THE SIZE OF",TAB(15)); b2c_fprintf(stdout,"\n");
    // 01470 PRINTTAB(14);"ONE QUARDRANT.  THEREFORE, TO GET"
    b2c_fprintf(stdout,"%sONE QUARDRANT.  THEREFORE, TO GET",TAB(14)); b2c_fprintf(stdout,"\n");
    // 01480 PRINTTAB(13);"FROM QUARDRANT 6,5 TO 5,5 YOU WOULD"
    b2c_fprintf(stdout,"%sFROM QUARDRANT 6,5 TO 5,5 YOU WOULD",TAB(13)); b2c_fprintf(stdout,"\n");
    // 01490 PRINTTAB(16);"USE COURSE 3, WARP FACTOR 1."
    b2c_fprintf(stdout,"%sUSE COURSE 3, WARP FACTOR 1.",TAB(16)); b2c_fprintf(stdout,"\n");
    // 01500 GOSUB1450
    Routine_01450();
    // 01510 PRINT"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"
    b2c_fprintf(stdout,"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"); b2c_fprintf(stdout,"\n");
    // 01520 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01530 PRINT"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."
    b2c_fprintf(stdout,"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."); b2c_fprintf(stdout,"\n");
    // 01540 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01550 PRINT"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    b2c_fprintf(stdout,"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"); b2c_fprintf(stdout,"\n");
    // 01560 PRINT"      <*> = YOUR STARSHIP'S POSITTION"
    b2c_fprintf(stdout,"      <*> = YOUR STARSHIP'S POSITTION"); b2c_fprintf(stdout,"\n");
    // 01570 PRINT"      +K+ = KLINGON BATTLE CRUISER"
    b2c_fprintf(stdout,"      +K+ = KLINGON BATTLE CRUISER"); b2c_fprintf(stdout,"\n");
    // 01580 PRINT"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"
    b2c_fprintf(stdout,"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"); b2c_fprintf(stdout,"\n");
    // 01590 PRINT"  * = STAR"
    b2c_fprintf(stdout,"  * = STAR"); b2c_fprintf(stdout,"\n");
    // 01600 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01610 PRINT"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    b2c_fprintf(stdout,"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."); b2c_fprintf(stdout,"\n");
    // 01620 GOSUB1420
    Routine_01420();
    // 01630 PRINT"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"
    b2c_fprintf(stdout,"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"); b2c_fprintf(stdout,"\n");
    // 01640 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01650 PRINT"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    b2c_fprintf(stdout,"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"); b2c_fprintf(stdout,"\n");
    // 01660 PRINT"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."
    b2c_fprintf(stdout,"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."); b2c_fprintf(stdout,"\n");
    // 01670 PRINT"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"
    b2c_fprintf(stdout,"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"); b2c_fprintf(stdout,"\n");
    // 01680 PRINT"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"
    b2c_fprintf(stdout,"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"); b2c_fprintf(stdout,"\n");
    // 01690 PRINT"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"
    b2c_fprintf(stdout,"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"); b2c_fprintf(stdout,"\n");
    // 01700 PRINT"  KLINGONS."
    b2c_fprintf(stdout,"  KLINGONS."); b2c_fprintf(stdout,"\n");
    // 01710 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_01420(){
    // 01420 PRINT"      ITSELF IS EQUIVALENT TO 1.0"
    b2c_fprintf(stdout,"      ITSELF IS EQUIVALENT TO 1.0"); b2c_fprintf(stdout,"\n");
    // 01430 PRINT"                                  COURSE"
    b2c_fprintf(stdout,"                                  COURSE"); b2c_fprintf(stdout,"\n");
    // 01440 GOSUB1450
    Routine_01450();

void Routine_01450(){
    // 01450 PRINT@256,""
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01460 PRINTTAB(15);"ONE WARP FACTOR IS THE SIZE OF"
    b2c_fprintf(stdout,"%sONE WARP FACTOR IS THE SIZE OF",TAB(15)); b2c_fprintf(stdout,"\n");
    // 01470 PRINTTAB(14);"ONE QUARDRANT.  THEREFORE, TO GET"
    b2c_fprintf(stdout,"%sONE QUARDRANT.  THEREFORE, TO GET",TAB(14)); b2c_fprintf(stdout,"\n");
    // 01480 PRINTTAB(13);"FROM QUARDRANT 6,5 TO 5,5 YOU WOULD"
    b2c_fprintf(stdout,"%sFROM QUARDRANT 6,5 TO 5,5 YOU WOULD",TAB(13)); b2c_fprintf(stdout,"\n");
    // 01490 PRINTTAB(16);"USE COURSE 3, WARP FACTOR 1."
    b2c_fprintf(stdout,"%sUSE COURSE 3, WARP FACTOR 1.",TAB(16)); b2c_fprintf(stdout,"\n");
    // 01500 GOSUB1450
    Routine_01450();
    // 01510 PRINT"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"
    b2c_fprintf(stdout,"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"); b2c_fprintf(stdout,"\n");
    // 01520 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01530 PRINT"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."
    b2c_fprintf(stdout,"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."); b2c_fprintf(stdout,"\n");
    // 01540 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01550 PRINT"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    b2c_fprintf(stdout,"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"); b2c_fprintf(stdout,"\n");
    // 01560 PRINT"      <*> = YOUR STARSHIP'S POSITTION"
    b2c_fprintf(stdout,"      <*> = YOUR STARSHIP'S POSITTION"); b2c_fprintf(stdout,"\n");
    // 01570 PRINT"      +K+ = KLINGON BATTLE CRUISER"
    b2c_fprintf(stdout,"      +K+ = KLINGON BATTLE CRUISER"); b2c_fprintf(stdout,"\n");
    // 01580 PRINT"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"
    b2c_fprintf(stdout,"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"); b2c_fprintf(stdout,"\n");
    // 01590 PRINT"  * = STAR"
    b2c_fprintf(stdout,"  * = STAR"); b2c_fprintf(stdout,"\n");
    // 01600 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01610 PRINT"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    b2c_fprintf(stdout,"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."); b2c_fprintf(stdout,"\n");
    // 01620 GOSUB1420
    Routine_01420();
    // 01630 PRINT"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"
    b2c_fprintf(stdout,"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"); b2c_fprintf(stdout,"\n");
    // 01640 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01650 PRINT"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    b2c_fprintf(stdout,"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"); b2c_fprintf(stdout,"\n");
    // 01660 PRINT"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."
    b2c_fprintf(stdout,"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."); b2c_fprintf(stdout,"\n");
    // 01670 PRINT"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"
    b2c_fprintf(stdout,"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"); b2c_fprintf(stdout,"\n");
    // 01680 PRINT"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"
    b2c_fprintf(stdout,"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"); b2c_fprintf(stdout,"\n");
    // 01690 PRINT"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"
    b2c_fprintf(stdout,"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"); b2c_fprintf(stdout,"\n");
    // 01700 PRINT"  KLINGONS."
    b2c_fprintf(stdout,"  KLINGONS."); b2c_fprintf(stdout,"\n");
    // 01710 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_01450(){
    // 01450 PRINT@256,""
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01460 PRINTTAB(15);"ONE WARP FACTOR IS THE SIZE OF"
    b2c_fprintf(stdout,"%sONE WARP FACTOR IS THE SIZE OF",TAB(15)); b2c_fprintf(stdout,"\n");
    // 01470 PRINTTAB(14);"ONE QUARDRANT.  THEREFORE, TO GET"
    b2c_fprintf(stdout,"%sONE QUARDRANT.  THEREFORE, TO GET",TAB(14)); b2c_fprintf(stdout,"\n");
    // 01480 PRINTTAB(13);"FROM QUARDRANT 6,5 TO 5,5 YOU WOULD"
    b2c_fprintf(stdout,"%sFROM QUARDRANT 6,5 TO 5,5 YOU WOULD",TAB(13)); b2c_fprintf(stdout,"\n");
    // 01490 PRINTTAB(16);"USE COURSE 3, WARP FACTOR 1."
    b2c_fprintf(stdout,"%sUSE COURSE 3, WARP FACTOR 1.",TAB(16)); b2c_fprintf(stdout,"\n");
    // 01500 GOSUB1450
    Routine_01450();
    // 01510 PRINT"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"
    b2c_fprintf(stdout,"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"); b2c_fprintf(stdout,"\n");
    // 01520 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01530 PRINT"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."
    b2c_fprintf(stdout,"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."); b2c_fprintf(stdout,"\n");
    // 01540 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01550 PRINT"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    b2c_fprintf(stdout,"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"); b2c_fprintf(stdout,"\n");
    // 01560 PRINT"      <*> = YOUR STARSHIP'S POSITTION"
    b2c_fprintf(stdout,"      <*> = YOUR STARSHIP'S POSITTION"); b2c_fprintf(stdout,"\n");
    // 01570 PRINT"      +K+ = KLINGON BATTLE CRUISER"
    b2c_fprintf(stdout,"      +K+ = KLINGON BATTLE CRUISER"); b2c_fprintf(stdout,"\n");
    // 01580 PRINT"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"
    b2c_fprintf(stdout,"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"); b2c_fprintf(stdout,"\n");
    // 01590 PRINT"  * = STAR"
    b2c_fprintf(stdout,"  * = STAR"); b2c_fprintf(stdout,"\n");
    // 01600 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01610 PRINT"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    b2c_fprintf(stdout,"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."); b2c_fprintf(stdout,"\n");
    // 01620 GOSUB1420
    Routine_01420();
    // 01630 PRINT"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"
    b2c_fprintf(stdout,"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"); b2c_fprintf(stdout,"\n");
    // 01640 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01650 PRINT"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    b2c_fprintf(stdout,"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"); b2c_fprintf(stdout,"\n");
    // 01660 PRINT"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."
    b2c_fprintf(stdout,"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."); b2c_fprintf(stdout,"\n");
    // 01670 PRINT"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"
    b2c_fprintf(stdout,"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"); b2c_fprintf(stdout,"\n");
    // 01680 PRINT"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"
    b2c_fprintf(stdout,"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"); b2c_fprintf(stdout,"\n");
    // 01690 PRINT"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"
    b2c_fprintf(stdout,"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"); b2c_fprintf(stdout,"\n");
    // 01700 PRINT"  KLINGONS."
    b2c_fprintf(stdout,"  KLINGONS."); b2c_fprintf(stdout,"\n");
    // 01710 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");

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
    b2c_fprintf(stdout,"SUPER STAR TREK INSTRUCTIONS"); b2c_fprintf(stdout,"\n");
    // 01040 PRINT@409,"COPYRIGHT BY"
    b2c_fprintf(stdout,"COPYRIGHT BY"); b2c_fprintf(stdout,"\n");
    // 01050 PRINT@534,"CREATIVE COMPUTING"
    b2c_fprintf(stdout,"CREATIVE COMPUTING"); b2c_fprintf(stdout,"\n");
    // 01060 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    b2c_fprintf(stdout,"MORRISTOWN, NEW JERSEY 07960"); b2c_fprintf(stdout,"\n");
    // 01070 P=1:GOSUB1400
    Routine_01400();
    // 01080 CLS
    ClearScreen(0);
    // 01090 PRINT@320,"1. WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    b2c_fprintf(stdout,"1. WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"); b2c_fprintf(stdout,"\n");
    // 01100 PRINT"     COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM OR XXX)."
    b2c_fprintf(stdout,"     COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM OR XXX)."); b2c_fprintf(stdout,"\n");
    // 01110 GOSUB1450
    Routine_01450();
    // 01120 PRINT@320,"2. IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    b2c_fprintf(stdout,"2. IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"); b2c_fprintf(stdout,"\n");
    // 01130 PRINTTAB(12);"LIST OF THE LEGAL COMMANDS PRINTED OUT."
    b2c_fprintf(stdout,"%sLIST OF THE LEGAL COMMANDS PRINTED OUT.",TAB(12)); b2c_fprintf(stdout,"\n");
    // 01140 GOSUB1450
    Routine_01450();
    // 01150 PRINT@192,"3. SOME COMMANDS REQUARE YHOU TO ENTER DATA (FOR EXAMPLE, THE"
    b2c_fprintf(stdout,"3. SOME COMMANDS REQUARE YHOU TO ENTER DATA (FOR EXAMPLE, THE"); b2c_fprintf(stdout,"\n");
    // 01160 PRINT"      'NAV' COMMAND COMES BACK WITH 'CORSE (1-9) ?'.) IF YOU"
    b2c_fprintf(stdout,"      'NAV' COMMAND COMES BACK WITH 'CORSE (1-9) ?'.) IF YOU"); b2c_fprintf(stdout,"\n");
    // 01170 PRINT"  TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    b2c_fprintf(stdout,"  TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"); b2c_fprintf(stdout,"\n");
    // 01180 PRINTTAB(22);"WILL BE ABORTED."
    b2c_fprintf(stdout,"%sWILL BE ABORTED.",TAB(22)); b2c_fprintf(stdout,"\n");
    // 01190 GOSUB1450
    Routine_01450();
    // 01200 PRINT:PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01210 PRINT"      THE GALAXY IS DIVIDED INTO AN 8 X 8 QUADRANT GRID,"
    b2c_fprintf(stdout,"      THE GALAXY IS DIVIDED INTO AN 8 X 8 QUADRANT GRID,"); b2c_fprintf(stdout,"\n");
    // 01220 PRINT"AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID"
    b2c_fprintf(stdout,"AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID"); b2c_fprintf(stdout,"\n");
    // 01230 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01240 PRINT"  YOU WIL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE"
    b2c_fprintf(stdout,"  YOU WIL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE"); b2c_fprintf(stdout,"\n");
    // 01250 PRINT"GALAXY TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP"
    b2c_fprintf(stdout,"GALAXY TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP"); b2c_fprintf(stdout,"\n");
    // 01260 PRINT"/ENTERPRISE/; YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF"
    b2c_fprintf(stdout,"/ENTERPRISE/; YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF"); b2c_fprintf(stdout,"\n");
    // 01270 PRINT"KLINGON WARSHIPS WHICH ARE MENACING THE UNITED FEDERATION OF"
    b2c_fprintf(stdout,"KLINGON WARSHIPS WHICH ARE MENACING THE UNITED FEDERATION OF"); b2c_fprintf(stdout,"\n");
    // 01280 PRINT"PLANETS."
    b2c_fprintf(stdout,"PLANETS."); b2c_fprintf(stdout,"\n");
    // 01290 GOSUB1450
    Routine_01450();
    // 01300 PRINT"  YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    b2c_fprintf(stdout,"  YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"); b2c_fprintf(stdout,"\n");
    // 01310 PRINT"      CAPTAIN OF THE STARSHIP ENTERPRISE:"
    b2c_fprintf(stdout,"      CAPTAIN OF THE STARSHIP ENTERPRISE:"); b2c_fprintf(stdout,"\n");
    // 01320 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01330 PRINT"/NAV/ COMMAND = WARP ENGINE CONTROL --"
    b2c_fprintf(stdout,"/NAV/ COMMAND = WARP ENGINE CONTROL --"); b2c_fprintf(stdout,"\n");
    // 01340 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01350 PRINT"  COURSE IS IN A CIRCULAR NUMERICAL       4  3  2"
    b2c_fprintf(stdout,"  COURSE IS IN A CIRCULAR NUMERICAL       4  3  2"); b2c_fprintf(stdout,"\n");
    // 01360 PRINT"		  VECTOR ARRANGEMENT AS SHOWN              . . ."
    b2c_fprintf(stdout,"		  VECTOR ARRANGEMENT AS SHOWN              . . ."); b2c_fprintf(stdout,"\n");
    // 01370 PRINT"  INTERGER AND REAL VALUES MAY BE           ..."
    b2c_fprintf(stdout,"  INTERGER AND REAL VALUES MAY BE           ..."); b2c_fprintf(stdout,"\n");
    // 01380 PRINT"  USED.  (THUS COURSE 1.5 IS HALF-      5 ---*--- 1"
    b2c_fprintf(stdout,"  USED.  (THUS COURSE 1.5 IS HALF-      5 ---*--- 1"); b2c_fprintf(stdout,"\n");
    // 01390 PRINT"      WAY BETWEEN 1 AND 2.                  ..."
    b2c_fprintf(stdout,"      WAY BETWEEN 1 AND 2.                  ..."); b2c_fprintf(stdout,"\n");

void Routine_01400(){
    // 01400 PRINT"                                           . . ."
    // 01410 PRINT"VALUES MAY APPROACH 9.0, WHICH            6  7  8"

void Routine_01420(){
    // 01420 PRINT"      ITSELF IS EQUIVALENT TO 1.0"
    // 01430 PRINT"                                  COURSE"
    // 01440 GOSUB1450

void Routine_01450(){
    // 01450 PRINT@256,""
    // 01460 PRINTTAB(15);"ONE WARP FACTOR IS THE SIZE OF"
    // 01470 PRINTTAB(14);"ONE QUARDRANT.  THEREFORE, TO GET"
    // 01480 PRINTTAB(13);"FROM QUARDRANT 6,5 TO 5,5 YOU WOULD"
    // 01490 PRINTTAB(16);"USE COURSE 3, WARP FACTOR 1."
    // 01500 GOSUB1450
    // 01510 PRINT"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"
    // 01520 PRINT
    // 01530 PRINT"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."
    // 01540 PRINT
    // 01550 PRINT"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    // 01560 PRINT"      <*> = YOUR STARSHIP'S POSITTION"
    // 01570 PRINT"      +K+ = KLINGON BATTLE CRUISER"
    // 01580 PRINT"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"
    // 01590 PRINT"  * = STAR"
    // 01600 PRINT
    // 01610 PRINT"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    // 01620 GOSUB1420
    // 01630 PRINT"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"
    // 01640 PRINT
    // 01650 PRINT"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    // 01660 PRINT"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."
    // 01670 PRINT"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"
    // 01680 PRINT"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"
    // 01690 PRINT"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"
    // 01700 PRINT"  KLINGONS."
    // 01710 PRINT
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
