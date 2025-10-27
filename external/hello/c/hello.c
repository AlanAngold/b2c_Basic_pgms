/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/hello.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c303ffb5b80 ---------A   00002 PRINT TAB(33);"HELLO"
    0x5c303ffb6ed0 ---------A   00004 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c303ffb7050 ---------A   00006 PRINT: PRINT: PRINT
    0x5c303ffa52f0 ---------A   00010 PRINT "HELLO.  MY NAME IS CREATIVE COMPUTER."
    0x5c303ffb5090 ---------A   00020 PRINT: PRINT: INPUT "WHAT'S YOUR NAME";N$: PRINT
    0x5c303ffb5500 ---------A   00030 PRINT "HI THERE, ";N$;", ARE YOU ENJOYING YOURSELF HERE";
    0x5c303ffb7140 ---------A T 00040 INPUT B$: PRINT
    0x5c303ffb57a0 ---------A   00050 IF B$="YES" THEN 70
    0x5c303ffbc9b0 ---------A   00055 IF B$="NO" THEN 80
    0x5c303ffbcdd0 ---------A   00060 PRINT N$;", I DON'T UNDERSTAND YOUR ANSWER OF '";B$;"'."
    0x5c303ffbcfd0 ---------A   00065 PRINT "PLEASE ANSWER 'YES' OR 'NO'.  DO YOU LIKE IT HERE";: GOTO 40
    0x5c303ffbd340 ---------A T 00070 PRINT "I'M GLAD TO HEAR THAT, ";N$;".": PRINT
    0x5c303ffbd3e0 ---------A   00075 GOTO 100
    0x5c303ffbd720 ---------A T 00080 PRINT "OH, I'M SORRY TO HEAR THAT, ";N$;". MAYBE WE CAN"
    0x5c303ffbd850 ---------A   00085 PRINT "BRIGHTEN UP YOUR VISIT A BIT."
    0x5c303ffbd8f0 ---------A T 00100 PRINT
    0x5c303ffbdc90 ---------A   00105 PRINT "SAY, ";N$;", I CAN SOLVE ALL KINDS OF PROBLEMS EXCEPT"
    0x5c303ffbde30 ---------A   00110 PRINT "THOSE DEALING WITH GREECE.  WHAT KIND OF PROBLEMS DO"
    0x5c303ffbdfc0 ---------A   00120 PRINT "YOU HAVE (ANSWER SEX, HEALTH, MONEY, OR JOB)";
    0x5c303ffbe1d0 ---------A T 00125 INPUT C$
    0x5c303ffbe230 ---------A   00126 PRINT
    0x5c303ffbe4b0 ---------A   00130 IF C$="SEX" THEN 200
    0x5c303ffbe740 ---------A   00132 IF C$="HEALTH" THEN 180
    0x5c303ffbe9d0 ---------A   00134 IF C$="MONEY" THEN 160
    0x5c303ffbec80 ---------A   00136 IF C$="JOB" THEN 145
    0x5c303ffbf1e0 ---------A   00138 PRINT "OH, ";N$;", YOUR ANSWER OF ";C$;" IS GREEK TO ME."
    0x5c303ffbf280 ---------A   00140 GOTO 250
    0x5c303ffbf600 ---------A T 00145 PRINT "I CAN SYMPATHIZE WITH YOU ";N$;".  I HAVE TO WORK"
    0x5c303ffbf7a0 ---------A   00148 PRINT "VERY LONG HOURS FOR NO PAY -- AND SOME OF MY BOSSES"
    0x5c303ffbfb40 ---------A   00150 PRINT "REALLY BEAT ON MY KEYBOARD.  MY ADVICE TO YOU, ";N$;","
    0x5c303ffbfcb0 ---------A   00153 PRINT "IS TO OPEN A RETAIL COMPUTER STORE.  IT'S GREAT FUN."
    0x5c303ffbfd50 ---------A   00155 GOTO 250
    0x5c303ffc00d0 ---------A T 00160 PRINT "SORRY, ";N$;", I'M BROKE TOO.  WHY DON'T YOU SELL"
    0x5c303ffc0470 ---------A   00162 PRINT "ENCYCLOPEADIAS OR MARRY SOMEONE RICH OR STOP EATING"
    0x5c303ffc05d0 ---------A   00164 PRINT "SO YOU WON'T NEED SO MUCH MONEY?"
    0x5c303ffc0650 ---------A   00170 GOTO 250
    0x5c303ffc09a0 ---------A T 00180 PRINT "MY ADVICE TO YOU ";N$;" IS:"
    0x5c303ffc0b30 ---------A   00185 PRINT "     1.  TAKE TWO ASPRIN"
    0x5c303ffc0cc0 ---------A   00188 PRINT "     2.  DRINK PLENTY OF FLUIDS (ORANGE JUICE, NOT BEER!)"
    0x5c303ffc0e20 ---------A   00190 PRINT "     3.  GO TO BED (ALONE)"
    0x5c303ffc0ec0 ---------A   00195 GOTO 250
    0x5c303ffc1170 ---------A T 00200 INPUT "IS YOUR PROBLEM TOO MUCH OR TOO LITTLE";D$: PRINT
    0x5c303ffc13f0 ---------A T 00210 IF D$="TOO MUCH" THEN 220
    0x5c303ffc16a0 ---------A   00212 IF D$="TOO LITTLE" THEN 230
    0x5c303ffc1a40 ---------A   00215 PRINT "DON'T GET ALL SHOOK, ";N$;", JUST ANSWER THE QUESTION"
    0x5c303ffc1c60 ---------A   00217 INPUT "WITH 'TOO MUCH' OR 'TOO LITTLE'.  WHICH IS IT";D$:GOTO 210
    0x5c303ffc1e00 ---------A T 00220 PRINT "YOU CALL THAT A PROBLEM?!!  I SHOULD HAVE SUCH PROBLEMS!"
    0x5c303ffc2150 ---------A   00225 PRINT "IF IT BOTHERS YOU, ";N$;", TAKE A COLD SHOWER."
    0x5c303ffc21f0 ---------A   00228 GOTO 250
    0x5c303ffc2570 ---------A T 00230 PRINT "WHY ARE YOU HERE IN SUFFERN, ";N$;"?  YOU SHOULD BE"
    0x5c303ffc2700 ---------A   00235 PRINT "IN TOKYO OR NEW YORK OR AMSTERDAM OR SOMEPLACE WITH SOME"
    0x5c303ffc2850 ---------A   00240 PRINT "REAL ACTION."
    0x5c303ffc28e0 ---------A T 00250 PRINT
    0x5c303ffc2b60 ---------A T 00255 PRINT "ANY MORE PROBLEMS YOU WANT SOLVED, ";N$;
    0x5c303ffc2de0 ---------A   00260 INPUT E$: PRINT
    0x5c303ffc3050 ---------A   00270 IF E$="YES" THEN 280
    0x5c303ffc32f0 ---------A   00273 IF E$="NO" THEN 300
    0x5c303ffc3660 ---------A   00275 PRINT "JUST A SIMPLE 'YES' OR 'NO' PLEASE, ";N$;"."
    0x5c303ffc36f0 ---------A   00277 GOTO 255
    0x5c303ffc3860 ---------A T 00280 PRINT "WHAT KIND (SEX, MONEY, HEALTH, JOB)";
    0x5c303ffc38d0 ---------A   00282 GOTO 125
    0x5c303ffc3950 ---------A T 00300 PRINT
    0x5c303ffc3cd0 ---------A   00302 PRINT "THAT WILL BE $5.00 FOR THE ADVICE, ";N$;"."
    0x5c303ffc3e50 ---------A   00305 PRINT "PLEASE LEAVE THE MONEY ON THE TERMINAL."
    0x5c303ffc4300 ---------A   00307 FOR I=1 TO 2000: NEXT I
    0x5c303ffc4840 ---------A   00310 PRINT: PRINT: PRINT
    0x5c303ffc49c0 ---------A T 00315 PRINT "DID YOU LEAVE THE MONEY";
    0x5c303ffc4c40 ---------A   00320 INPUT G$: PRINT
    0x5c303ffc4eb0 ---------A   00325 IF G$="YES" THEN 350
    0x5c303ffc5160 ---------A   00330 IF G$="NO" THEN 370
    0x5c303ffc56f0 ---------A   00335 PRINT "YOUR ANSWER OF '";G$;"' CONFUSES ME, ";N$;"."
    0x5c303ffc58c0 ---------A   00340 PRINT "PLEASE RESPOND WITH 'YES' OR 'NO'.": GOTO 315
    0x5c303ffc5c40 ---------A T 00350 PRINT "HEY, ";N$;"??? YOU LEFT NO MONEY AT ALL!"
    0x5c303ffc5dd0 ---------A   00355 PRINT "YOU ARE CHEATING ME OUT OF MY HARD-EARNED LIVING."
    0x5c303ffc61c0 ---------A   00360 PRINT:PRINT "WHAT A RIP OFF, ";N$;"!!!":PRINT
    0x5c303ffc6260 ---------A   00365 GOTO 385
    0x5c303ffc65e0 ---------A T 00370 PRINT "THAT'S HONEST, ";N$;", BUT HOW DO YOU EXPECT"
    0x5c303ffc6760 ---------A   00375 PRINT "ME TO GO ON WITH MY PSYCHOLOGY STUDIES IF MY PATIENTS"
    0x5c303ffc68f0 ---------A   00380 PRINT "DON'T PAY THEIR BILLS?"
    0x5c303ffc6da0 ---------A T 00385 PRINT:PRINT "TAKE A WALK, ";N$;".":PRINT:PRINT:GOTO 999
    0x5c303ffc70e0 ----------   00390 PRINT "NICE MEETING YOU, ";N$;", HAVE A NICE DAY."
    0x5c303ffc7150 ---------A   00400 REM
    0x5c303ffc71b0 ---------A T 00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00040      00065T
     00070      00050T
     00080      00055T
     00100      00075T
     00125      00282T
     00145      00136T
     00160      00134T
     00180      00132T
     00200      00130T
     00210      00217T
     00220      00210T
     00230      00212T
     00250      00140T, 00155T, 00170T, 00195T, 00228T
     00255      00277T
     00280      00270T
     00300      00273T
     00315      00340T
     00350      00325T
     00370      00330T
     00385      00365T
     00999      00385T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5c303ffb5b80 (00002)   0x5c303ffb5b80 (00002)   0x5c303ffc71b0 (00999)   0x5c303ffc71b0 (00999)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01820 - 10000    8190 

 */



/*
 *  Symbol Table Listing for 'basic/hello.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$                       String      
    C$                       String      
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D$                       String      
    E$                       String      
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G$                       String      
    HEX$            Function String          args=1, int    
    I                        Integer     
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

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/hello.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c303ffb5b80 ---------A   01000 PRINT TAB(33);"HELLO"
    0x5c303ffb6ed0 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c303ffb7050 ---------A   01020 PRINT: PRINT: PRINT
    0x5c303ffa52f0 ---------A   01030 PRINT "HELLO.  MY NAME IS CREATIVE COMPUTER."
    0x5c303ffb5090 ---------A   01040 PRINT: PRINT: INPUT "WHAT'S YOUR NAME";N$: PRINT
    0x5c303ffb5500 ---------A   01050 PRINT "HI THERE, ";N$;", ARE YOU ENJOYING YOURSELF HERE";
    0x5c303ffb7140 ---------A T 01060 INPUT B$: PRINT
    0x5c303ffb57a0 ---------A   01070 IF B$="YES" THEN 1110
    0x5c303ffbc9b0 ---------A   01080 IF B$="NO" THEN 1130
    0x5c303ffbcdd0 ---------A   01090 PRINT N$;", I DON'T UNDERSTAND YOUR ANSWER OF '";B$;"'."
    0x5c303ffbcfd0 ---------A   01100 PRINT "PLEASE ANSWER 'YES' OR 'NO'.  DO YOU LIKE IT HERE";: GOTO 1060
    0x5c303ffbd340 ---------A T 01110 PRINT "I'M GLAD TO HEAR THAT, ";N$;".": PRINT
    0x5c303ffbd3e0 ---------A   01120 GOTO 1150
    0x5c303ffbd720 ---------A T 01130 PRINT "OH, I'M SORRY TO HEAR THAT, ";N$;". MAYBE WE CAN"
    0x5c303ffbd850 ---------A   01140 PRINT "BRIGHTEN UP YOUR VISIT A BIT."
    0x5c303ffbd8f0 ---------A T 01150 PRINT
    0x5c303ffbdc90 ---------A   01160 PRINT "SAY, ";N$;", I CAN SOLVE ALL KINDS OF PROBLEMS EXCEPT"
    0x5c303ffbde30 ---------A   01170 PRINT "THOSE DEALING WITH GREECE.  WHAT KIND OF PROBLEMS DO"
    0x5c303ffbdfc0 ---------A   01180 PRINT "YOU HAVE (ANSWER SEX, HEALTH, MONEY, OR JOB)";
    0x5c303ffbe1d0 ---------A T 01190 INPUT C$
    0x5c303ffbe230 ---------A   01200 PRINT
    0x5c303ffbe4b0 ---------A   01210 IF C$="SEX" THEN 1410
    0x5c303ffbe740 ---------A   01220 IF C$="HEALTH" THEN 1360
    0x5c303ffbe9d0 ---------A   01230 IF C$="MONEY" THEN 1320
    0x5c303ffbec80 ---------A   01240 IF C$="JOB" THEN 1270
    0x5c303ffbf1e0 ---------A   01250 PRINT "OH, ";N$;", YOUR ANSWER OF ";C$;" IS GREEK TO ME."
    0x5c303ffbf280 ---------A   01260 GOTO 1520
    0x5c303ffbf600 ---------A T 01270 PRINT "I CAN SYMPATHIZE WITH YOU ";N$;".  I HAVE TO WORK"
    0x5c303ffbf7a0 ---------A   01280 PRINT "VERY LONG HOURS FOR NO PAY -- AND SOME OF MY BOSSES"
    0x5c303ffbfb40 ---------A   01290 PRINT "REALLY BEAT ON MY KEYBOARD.  MY ADVICE TO YOU, ";N$;","
    0x5c303ffbfcb0 ---------A   01300 PRINT "IS TO OPEN A RETAIL COMPUTER STORE.  IT'S GREAT FUN."
    0x5c303ffbfd50 ---------A   01310 GOTO 1520
    0x5c303ffc00d0 ---------A T 01320 PRINT "SORRY, ";N$;", I'M BROKE TOO.  WHY DON'T YOU SELL"
    0x5c303ffc0470 ---------A   01330 PRINT "ENCYCLOPEADIAS OR MARRY SOMEONE RICH OR STOP EATING"
    0x5c303ffc05d0 ---------A   01340 PRINT "SO YOU WON'T NEED SO MUCH MONEY?"
    0x5c303ffc0650 ---------A   01350 GOTO 1520
    0x5c303ffc09a0 ---------A T 01360 PRINT "MY ADVICE TO YOU ";N$;" IS:"
    0x5c303ffc0b30 ---------A   01370 PRINT "     1.  TAKE TWO ASPRIN"
    0x5c303ffc0cc0 ---------A   01380 PRINT "     2.  DRINK PLENTY OF FLUIDS (ORANGE JUICE, NOT BEER!)"
    0x5c303ffc0e20 ---------A   01390 PRINT "     3.  GO TO BED (ALONE)"
    0x5c303ffc0ec0 ---------A   01400 GOTO 1520
    0x5c303ffc1170 ---------A T 01410 INPUT "IS YOUR PROBLEM TOO MUCH OR TOO LITTLE";D$: PRINT
    0x5c303ffc13f0 ---------A T 01420 IF D$="TOO MUCH" THEN 1460
    0x5c303ffc16a0 ---------A   01430 IF D$="TOO LITTLE" THEN 1490
    0x5c303ffc1a40 ---------A   01440 PRINT "DON'T GET ALL SHOOK, ";N$;", JUST ANSWER THE QUESTION"
    0x5c303ffc1c60 ---------A   01450 INPUT "WITH 'TOO MUCH' OR 'TOO LITTLE'.  WHICH IS IT";D$:GOTO 1420
    0x5c303ffc1e00 ---------A T 01460 PRINT "YOU CALL THAT A PROBLEM?!!  I SHOULD HAVE SUCH PROBLEMS!"
    0x5c303ffc2150 ---------A   01470 PRINT "IF IT BOTHERS YOU, ";N$;", TAKE A COLD SHOWER."
    0x5c303ffc21f0 ---------A   01480 GOTO 1520
    0x5c303ffc2570 ---------A T 01490 PRINT "WHY ARE YOU HERE IN SUFFERN, ";N$;"?  YOU SHOULD BE"
    0x5c303ffc2700 ---------A   01500 PRINT "IN TOKYO OR NEW YORK OR AMSTERDAM OR SOMEPLACE WITH SOME"
    0x5c303ffc2850 ---------A   01510 PRINT "REAL ACTION."
    0x5c303ffc28e0 ---------A T 01520 PRINT
    0x5c303ffc2b60 ---------A T 01530 PRINT "ANY MORE PROBLEMS YOU WANT SOLVED, ";N$;
    0x5c303ffc2de0 ---------A   01540 INPUT E$: PRINT
    0x5c303ffc3050 ---------A   01550 IF E$="YES" THEN 1590
    0x5c303ffc32f0 ---------A   01560 IF E$="NO" THEN 1610
    0x5c303ffc3660 ---------A   01570 PRINT "JUST A SIMPLE 'YES' OR 'NO' PLEASE, ";N$;"."
    0x5c303ffc36f0 ---------A   01580 GOTO 1530
    0x5c303ffc3860 ---------A T 01590 PRINT "WHAT KIND (SEX, MONEY, HEALTH, JOB)";
    0x5c303ffc38d0 ---------A   01600 GOTO 1190
    0x5c303ffc3950 ---------A T 01610 PRINT
    0x5c303ffc3cd0 ---------A   01620 PRINT "THAT WILL BE $5.00 FOR THE ADVICE, ";N$;"."
    0x5c303ffc3e50 ---------A   01630 PRINT "PLEASE LEAVE THE MONEY ON THE TERMINAL."
    0x5c303ffc4300 ---------A   01640 FOR I=1 TO 2000: NEXT I
    0x5c303ffc4840 ---------A   01650 PRINT: PRINT: PRINT
    0x5c303ffc49c0 ---------A T 01660 PRINT "DID YOU LEAVE THE MONEY";
    0x5c303ffc4c40 ---------A   01670 INPUT G$: PRINT
    0x5c303ffc4eb0 ---------A   01680 IF G$="YES" THEN 1720
    0x5c303ffc5160 ---------A   01690 IF G$="NO" THEN 1760
    0x5c303ffc56f0 ---------A   01700 PRINT "YOUR ANSWER OF '";G$;"' CONFUSES ME, ";N$;"."
    0x5c303ffc58c0 ---------A   01710 PRINT "PLEASE RESPOND WITH 'YES' OR 'NO'.": GOTO 1660
    0x5c303ffc5c40 ---------A T 01720 PRINT "HEY, ";N$;"??? YOU LEFT NO MONEY AT ALL!"
    0x5c303ffc5dd0 ---------A   01730 PRINT "YOU ARE CHEATING ME OUT OF MY HARD-EARNED LIVING."
    0x5c303ffc61c0 ---------A   01740 PRINT:PRINT "WHAT A RIP OFF, ";N$;"!!!":PRINT
    0x5c303ffc6260 ---------A   01750 GOTO 1790
    0x5c303ffc65e0 ---------A T 01760 PRINT "THAT'S HONEST, ";N$;", BUT HOW DO YOU EXPECT"
    0x5c303ffc6760 ---------A   01770 PRINT "ME TO GO ON WITH MY PSYCHOLOGY STUDIES IF MY PATIENTS"
    0x5c303ffc68f0 ---------A   01780 PRINT "DON'T PAY THEIR BILLS?"
    0x5c303ffc6da0 ---------A T 01790 PRINT:PRINT "TAKE A WALK, ";N$;".":PRINT:PRINT:GOTO 1810
    0x5c303ffc7150 ---------A   01800 REM
    0x5c303ffc71b0 ---------A T 01810 END
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
char*  B_str;                                     // Basic: B$ 
char*  C_str;                                     // Basic: C$ 
char*  D_str;                                     // Basic: D$ 
char*  E_str;                                     // Basic: E$ 
char*  G_str;                                     // Basic: G$ 
int    I_int;                                     // Basic: I 
char*  N_str;                                     // Basic: N$ 
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
