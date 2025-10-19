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
int    P_int;                                     // Basic: P 
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
    // 01130 PRINTTAB(12);"LIST OF THE LEGAL COMMANDS PRINTED OUT."
    b2c_printf("List of the legal commands printed out.\n");
    // 01140 GOSUB1450
    Routine_01450();
    // 01150 PRINT@192,"3. SOME COMMANDS REQUARE YHOU TO ENTER DATA (FOR EXAMPLE, THE"
    b2c_printf("3. Some commands requare yhou to enter data (for example, the\n");
    // 01160 PRINT"      'NAV' COMMAND COMES BACK WITH 'CORSE (1-9) ?'.) IF YOU"
    b2c_printf("      'nav' command comes back with 'corse (1-9) ?'.) If you\n");
    // 01170 PRINT"  TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    b2c_printf("  type in illegal data (like negative numbers), that command\n");
    // 01180 PRINTTAB(22);"WILL BE ABORTED."
    b2c_printf("Will be aborted.\n");
    // 01190 GOSUB1450
    Routine_01450();
    // 01200 PRINT:PRINT
    b2c_printf("");
    // 01210 PRINT"      THE GALAXY IS DIVIDED INTO AN 8 X 8 QUADRANT GRID,"
    b2c_printf("      the galaxy is divided into an 8 x 8 quadrant grid,\n");
    // 01220 PRINT"AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID"
    b2c_printf("And each quadrant is further divided into an 8 x 8 sector grid\n");
    // 01230 PRINT
    b2c_printf("");
    // 01240 PRINT"  YOU WIL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE"
    b2c_printf("  you wil be assigned a starting point somewhere in the\n");
    // 01250 PRINT"GALAXY TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP"
    b2c_printf("Galaxy to begin a tour of duty as commander of the starship\n");
    // 01260 PRINT"/ENTERPRISE/; YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF"
    b2c_printf("/enterprise/; your mission: to seek and destroy the fleet of\n");
    // 01270 PRINT"KLINGON WARSHIPS WHICH ARE MENACING THE UNITED FEDERATION OF"
    b2c_printf("Klingon warships which are menacing the united federation of\n");
    // 01280 PRINT"PLANETS."
    b2c_printf("Planets.\n");
    // 01290 GOSUB1450
    Routine_01450();
    // 01300 PRINT"  YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    b2c_printf("  you have the following commands available to you as\n");
    // 01310 PRINT"      CAPTAIN OF THE STARSHIP ENTERPRISE:"
    b2c_printf("      captain of the starship enterprise:\n");
    // 01320 PRINT
    b2c_printf("");
    // 01330 PRINT"/NAV/ COMMAND = WARP ENGINE CONTROL --"
    b2c_printf("/nav/ command = warp engine control --\n");
    // 01340 PRINT
    b2c_printf("");
    // 01350 PRINT"  COURSE IS IN A CIRCULAR NUMERICAL       4  3  2"
    b2c_printf("  course is in a circular numerical       4  3  2\n");
    // 01360 PRINT"		  VECTOR ARRANGEMENT AS SHOWN              . . ."
    b2c_printf("		  vector arrangement as shown              . . .\n");
    // 01370 PRINT"  INTERGER AND REAL VALUES MAY BE           ..."
    b2c_printf("  interger and real values may be           ...\n");
    // 01380 PRINT"  USED.  (THUS COURSE 1.5 IS HALF-      5 ---*--- 1"
    b2c_printf("  used.  (Thus course 1.5 Is half-      5 ---*--- 1\n");
    // 01390 PRINT"      WAY BETWEEN 1 AND 2.                  ..."
    b2c_printf("      way between 1 and 2.                  ...\n");

void Routine_01400(){
    // 01400 PRINT"                                           . . ."
    b2c_printf("                                           . . .\n");
    // 01410 PRINT"VALUES MAY APPROACH 9.0, WHICH            6  7  8"
    b2c_printf("Values may approach 9.0, Which            6  7  8\n");

void Routine_01420(){
    // 01420 PRINT"      ITSELF IS EQUIVALENT TO 1.0"
    b2c_printf("      itself is equivalent to 1.0\n");
    // 01430 PRINT"                                  COURSE"
    b2c_printf("                                  course\n");
    // 01440 GOSUB1450
    Routine_01450();

void Routine_01450(){
    // 01450 PRINT@256,""
    b2c_printf("\n");
    // 01460 PRINTTAB(15);"ONE WARP FACTOR IS THE SIZE OF"
    b2c_printf("One warp factor is the size of\n");
    // 01470 PRINTTAB(14);"ONE QUARDRANT.  THEREFORE, TO GET"
    b2c_printf("One quardrant.  Therefore, to get\n");
    // 01480 PRINTTAB(13);"FROM QUARDRANT 6,5 TO 5,5 YOU WOULD"
    b2c_printf("From quardrant 6,5 to 5,5 you would\n");
    // 01490 PRINTTAB(16);"USE COURSE 3, WARP FACTOR 1."
    b2c_printf("Use course 3, warp factor 1.\n");
    // 01500 GOSUB1450
    Routine_01450();
    // 01510 PRINT"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"
    b2c_printf("/srs/ command = short range sensor scan\n");
    // 01520 PRINT
    b2c_printf("");
    // 01530 PRINT"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."
    b2c_printf("      shows you a scan of your present quardrant.\n");
    // 01540 PRINT
    b2c_printf("");
    // 01550 PRINT"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    b2c_printf("      symblogy on your sensor screen is as follows:\n");
    // 01560 PRINT"      <*> = YOUR STARSHIP'S POSITTION"
    b2c_printf("      <*> = your starship's posittion\n");
    // 01570 PRINT"      +K+ = KLINGON BATTLE CRUISER"
    b2c_printf("      +k+ = klingon battle cruiser\n");
    // 01580 PRINT"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"
    b2c_printf("      >!< = Federation starbase (refuel/repair/re-arm here !\n");
    // 01590 PRINT"  * = STAR"
    b2c_printf("  * = star\n");
    // 01600 PRINT
    b2c_printf("");
    // 01610 PRINT"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    b2c_printf("      a condensed 'status report' will also be presented.\n");
    // 01620 GOSUB1420
    Routine_01420();
    // 01630 PRINT"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"
    b2c_printf("/lrs/ command = long range sensor scan\n");
    // 01640 PRINT
    b2c_printf("");
    // 01650 PRINT"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    b2c_printf("      shows conditions in space for one quadrant on each side\n");
    // 01660 PRINT"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."
    b2c_printf("  of the enterprise (which is in the middle of the scan).\n");
    // 01670 PRINT"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"
    b2c_printf("  the scan is coded in the form /###/, wher the units digit\n");
    // 01680 PRINT"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"
    b2c_printf("  is the number of stars, the tens digit is the number of\n");
    // 01690 PRINT"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"
    b2c_printf("  starbases, and the hundreds digit is the number of\n");
    // 01700 PRINT"  KLINGONS."
    b2c_printf("  klingons.\n");
    // 01710 PRINT
    b2c_printf("");
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
