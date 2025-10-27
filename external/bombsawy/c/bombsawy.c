/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/bombsawy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5925f6a7db80 ---------A T 00008 PRINT "YOU ARE A PILOT IN A WORLD WAR II BOMBER."
    0x5925f6a7c6d0 ---------A T 00010 INPUT "WHAT SIDE -- ITALY(1), ALLIES(2), JAPAN(3), GERMANY(4)";A
    0x5925f6a7c670 ---------A   00020 IF A>0 AND A<5 THEN 25
    0x5925f6a7ca20 ---------A   00022 PRINT "TRY AGAIN..." : GOTO 10
    0x5925f6a7f0b0 ---------A T 00025 ON A GOTO 30, 110, 200, 220
    0x5925f6a7d620 ---------A T 00030 INPUT "YOUR TARGET -- ALBANIA(1), GREECE(2), NORTH AFRICA(3)";B
    0x5925f6a84a20 ---------A   00040 IF B>0 AND B<4 THEN 45
    0x5925f6a84b90 ---------A   00042 PRINT "TRY AGAIN..." : GOTO 30
    0x5925f6a84f70 ---------A T 00045 PRINT : ON B GOTO 50, 80,90
    0x5925f6a7cc20 ---------A T 00050 PRINT "SHOULD BE EASY -- YOU'RE FLYING A NAZI-MADE PLANE."
    0x5925f6a850c0 ---------A   00060 GOTO 280
    0x5925f6a85250 ---------A T 00080 PRINT "BE CAREFUL!!!" : GOTO 280
    0x5925f6a85410 ---------A T 00090 PRINT "YOU'RE GOING FOR THE OIL, EH?" : GOTO 280
    0x5925f6a85640 ---------A T 00110 INPUT "AIRCRAFT -- LIBERATOR(1), B-29(2), B-17(3), LANCASTER(4)";G
    0x5925f6a85aa0 ---------A   00120 IF G>0 AND G<5 THEN 125
    0x5925f6a85c90 ---------A   00122 PRINT "TRY AGAIN..." : GOTO 110
    0x5925f6a86150 ---------A T 00125 PRINT : ON G GOTO 130, 150, 170, 190
    0x5925f6a86360 ---------A T 00130 PRINT "YOU'VE GOT 2 TONS OF BOMBS FLYING FOR PLOESTI." : GOTO 280
    0x5925f6a86560 ---------A T 00150 PRINT "YOU'RE DUMPING THE A-BOMB ON HIROSHIMA." : GOTO 280
    0x5925f6a86760 ---------A T 00170 PRINT "YOU'RE CHASING THE BISMARK IN THE NORTH SEA." : GOTO 280
    0x5925f6a868d0 ---------A T 00190 PRINT "YOU'RE BUSTING A GERMAN HEAVY WATER PLANT IN THE RUHR."
    0x5925f6a86970 ---------A   00195 GOTO 280
    0x5925f6a86b00 ---------A T 00200 PRINT "YOU'RE FLYING A KAMIKAZE MISSION OVER THE USS LEXINGTON."
    0x5925f6a86d20 ---------A   00205 INPUT "YOUR FIRST KAMIKAZE MISSION(Y OR N)";F$
    0x5925f6a872c0 ---------A   00207 IF F$="N" THEN S=0 : GOTO 358
    0x5925f6a87610 ----------   00210 PRINT : IF RND(1)>.65 THEN 325
    0x5925f6a876c0 ----------   00215 GOTO 380
    0x5925f6a87850 ---------A T 00220 PRINT "A NAZI, EH?  OH WELL.  ARE YOU GOING FOR RUSSIA(1),"
    0x5925f6a87f00 ---------A   00230 INPUT "ENGLAND(2), OR FRANCE(3)";M : IF M>0 AND M<4 THEN 235
    0x5925f6a880e0 ---------A   00232 PRINT "TRY AGAIN..." : GOTO 220
    0x5925f6a884d0 ---------A T 00235 PRINT : ON M GOTO 250, 260, 270
    0x5925f6a886d0 ---------A T 00250 PRINT "YOU'RE NEARING STALINGRAD." : GOTO 280
    0x5925f6a888e0 ---------A T 00260 PRINT "NEARING LONDON.  BE CAREFUL, THEY'VE GOT RADAR." : GOTO 280
    0x5925f6a88c60 ---------A T 00270 PRINT "NEARING VERSAILLES.  DUCK SOUP.  THEY'RE NEARLY DEFENSELESS."
    0x5925f6a88cf0 ---------A T 00280 PRINT
    0x5925f6a88f30 ---------A T 00285 INPUT "HOW MANY MISSIONS HAVE YOU FLOWN";D
    0x5925f6a891a0 ---------A   00290 IF D<160 THEN 300
    0x5925f6a89330 ---------A   00292 PRINT "MISSIONS, NOT MILES..." 
    0x5925f6a894b0 ---------A   00295 PRINT "150 MISSIONS IS HIGH EVEN FOR OLD-TIMERS."
    0x5925f6a89680 ---------A   00297 PRINT "NOW THEN, "; : GOTO 285
    0x5925f6a89930 ---------A T 00300 PRINT:IF D<100 THEN 310
    0x5925f6a89b30 ---------A   00305 PRINT "THAT'S PUSHING THE ODDS!" : GOTO 320
    0x5925f6a89ec0 ---------A T 00310 IF D<25 THEN PRINT "FRESH OUT OF TRAINING, EH?"
    0x5925f6a8a370 ---------A T 00320 PRINT : IF D<160*RND(1) THEN 330
    0x5925f6a8a990 ---------A T 00325 PRINT "DIRECT HIT!!!! "INT(100*RND(1))"KILLED."
    0x5925f6a8ab70 ---------A   00327 PRINT "MISSION SUCCESSFUL." : GOTO 390
    0x5925f6a8b270 ---------A T 00330 PRINT "MISSED TARGET BY"INT(2+30*RND(1))"MILES!"
    0x5925f6a8b470 ---------A   00335 PRINT "NOW YOU'RE REALLY IN FOR IT !!" : PRINT
    0x5925f6a8b6d0 ---------A T 00340 INPUT "DOES THE ENEMY HAVE GUNS(1), MISSILES(2), OR BOTH(3)";R
    0x5925f6a8bb60 ---------A   00345 IF R>0 AND R<4 THEN 350
    0x5925f6a8bd40 ---------A   00347 PRINT "TRY AGAIN..." : GOTO 340
    0x5925f6a8c2b0 ---------A T 00350 PRINT : T=0 : IF R=2 THEN 360
    0x5925f6a8c490 ---------A   00355 INPUT "WHAT'S THE PERCENT HIT RATE OF ENEMY GUNNERS (10 TO 50)";S
    0x5925f6a8c890 ---------A   00357 IF S<10 THEN PRINT "YOU LIE, BUT YOU'LL PAY...": GOTO 380
    0x5925f6a8c900 ---------A T 00358 PRINT
    0x5925f6a8cda0 ---------A T 00360 PRINT : IF R>1 THEN T=35
    0x5925f6a8d330 ---------A   00365 IF S+T>100*RND(1) THEN 380
    0x5925f6a8d520 ---------A   00370 PRINT "YOU MADE IT THROUGH TREMENDOUS FLAK!!" : GOTO 390
    0x5925f6a8d680 ---------A T 00380 PRINT "* * * * BOOM * * * *"
    0x5925f6a8d810 ---------A   00384 PRINT "YOU HAVE BEEN SHOT DOWN....."
    0x5925f6a8d990 ---------A   00386 PRINT "DEARLY BELOVED, WE ARE GATHERED HERE TODAY TO PAY OUR"
    0x5925f6a8db10 ---------A   00387 PRINT "LAST TRIBUTE..."
    0x5925f6a8de40 ---------A T 00390 PRINT:PRINT:PRINT:INPUT "ANOTHER MISSION (Y OR N)";U$
    0x5925f6a8e0d0 ---------A   00395 IF U$="Y" THEN 8
    0x5925f6a8e2d0 ---------A   00400 PRINT "CHICKEN !!!" : PRINT : END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00008      00395T
     00010      00022T
     00025      00020T
     00030      00025T, 00042T
     00045      00040T
     00050      00045T
     00080      00045T
     00090      00045T
     00110      00025T, 00122T
     00125      00120T
     00130      00125T
     00150      00125T
     00170      00125T
     00190      00125T
     00200      00025T
     00220      00025T, 00232T
     00235      00230T
     00250      00235T
     00260      00235T
     00270      00235T
     00280      00060T, 00080T, 00090T, 00130T, 00150T, 00170T, 00195T, 00250T, 
                00260T
     00285      00297T
     00300      00290T
     00310      00300T
     00320      00305T
     00325      00210T
     00330      00320T
     00340      00347T
     00350      00345T
     00358      00207T
     00360      00350T
     00380      00215T, 00357T, 00365T
     00390      00327T, 00370T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5925f6a7db80 (00008)   0x5925f6a7db80 (00008)   0x5925f6a8e2d0 (00400)   0x5925f6a8e2d0 (00400)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01630 - 10000    8380 

 */



/*
 *  Symbol Table Listing for 'basic/bombsawy.bas'
 *
    A                        Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F$                       String      
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
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
    M                        Integer     
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
    R                        Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Integer     
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
    U$                       String      
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/bombsawy.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5925f6a7db80 ---------A T 01000 PRINT "YOU ARE A PILOT IN A WORLD WAR II BOMBER."
    0x5925f6a7c6d0 ---------A T 01010 INPUT "WHAT SIDE -- ITALY(1), ALLIES(2), JAPAN(3), GERMANY(4)";A
    0x5925f6a7c670 ---------A   01020 IF A>0 AND A<5 THEN 1040
    0x5925f6a7ca20 ---------A   01030 PRINT "TRY AGAIN..." : GOTO 1010
    0x5925f6a7f0b0 ---------A T 01040 ON A GOTO 1050, 1130, 11250, 220
    0x5925f6a7d620 ---------A T 01050 INPUT "YOUR TARGET -- ALBANIA(1), GREECE(2), NORTH AFRICA(3)";B
    0x5925f6a84a20 ---------A   01060 IF B>0 AND B<4 THEN 1080
    0x5925f6a84b90 ---------A   01070 PRINT "TRY AGAIN..." : GOTO 1050
    0x5925f6a84f70 ---------A T 01080 PRINT : ON B GOTO 101120, 1110,90
    0x5925f6a7cc20 ---------A T 01090 PRINT "SHOULD BE EASY -- YOU'RE FLYING A NAZI-MADE PLANE."
    0x5925f6a850c0 ---------A   01100 GOTO 1320
    0x5925f6a85250 ---------A T 01110 PRINT "BE CAREFUL!!!" : GOTO 21110
    0x5925f6a85410 ---------A T 01120 PRINT "YOU'RE GOING FOR THE OIL, EH?" : GOTO 1320
    0x5925f6a85640 ---------A T 01130 INPUT "AIRCRAFT -- LIBERATOR(1), B-29(2), B-17(3), LANCASTER(4)";G
    0x5925f6a85aa0 ---------A   01140 IF G>0 AND G<5 THEN 1160
    0x5925f6a85c90 ---------A   01150 PRINT "TRY AGAIN..." : GOTO 1130
    0x5925f6a86150 ---------A T 01160 PRINT : ON G GOTO 111200, 1180, 170, 190
    0x5925f6a86360 ---------A T 01170 PRINT "YOU'VE GOT 2 TONS OF BOMBS FLYING FOR PLOESTI." : GOTO 1320
    0x5925f6a86560 ---------A T 01180 PRINT "YOU'RE DUMPING THE A-BOMB ON HIROSHIMA." : GOTO 1320
    0x5925f6a86760 ---------A T 01190 PRINT "YOU'RE CHASING THE BISMARK IN THE NORTH SEA." : GOTO 1320
    0x5925f6a868d0 ---------A T 01200 PRINT "YOU'RE BUSTING A GERMAN HEAVY WATER PLANT IN THE RUHR."
    0x5925f6a86970 ---------A   01210 GOTO 1320
    0x5925f6a86b00 ---------A T 01220 PRINT "YOU'RE FLYING A KAMIKAZE MISSION OVER THE USS LEXINGTON."
    0x5925f6a86d20 ---------A   01230 INPUT "YOUR FIRST KAMIKAZE MISSION(Y OR N)";F$
    0x5925f6a872c0 ---------A   01240 IF F$="N" THEN S=0 : GOTO 1520
    0x5925f6a87850 ---------A T 01250 PRINT "A NAZI, EH?  OH WELL.  ARE YOU GOING FOR RUSSIA(1),"
    0x5925f6a87f00 ---------A   01260 INPUT "ENGLAND(2), OR FRANCE(3)";M : IF M>0 AND M<4 THEN 1280
    0x5925f6a880e0 ---------A   01270 PRINT "TRY AGAIN..." : GOTO 1250
    0x5925f6a884d0 ---------A T 01280 PRINT : ON M GOTO 1290, 1300, 1310
    0x5925f6a886d0 ---------A T 01290 PRINT "YOU'RE NEARING STALINGRAD." : GOTO 1320
    0x5925f6a888e0 ---------A T 01300 PRINT "NEARING LONDON.  BE CAREFUL, THEY'VE GOT RADAR." : GOTO 1320
    0x5925f6a88c60 ---------A T 01310 PRINT "NEARING VERSAILLES.  DUCK SOUP.  THEY'RE NEARLY DEFENSELESS."
    0x5925f6a88cf0 ---------A T 01320 PRINT
    0x5925f6a88f30 ---------A T 01330 INPUT "HOW MANY MISSIONS HAVE YOU FLOWN";D
    0x5925f6a891a0 ---------A   01340 IF D<160 THEN 1380
    0x5925f6a89330 ---------A   01350 PRINT "MISSIONS, NOT MILES..." 
    0x5925f6a894b0 ---------A   01360 PRINT "150 MISSIONS IS HIGH EVEN FOR OLD-TIMERS."
    0x5925f6a89680 ---------A   01370 PRINT "NOW THEN, "; : GOTO 1330
    0x5925f6a89930 ---------A T 01380 PRINT:IF D<100 THEN 1400
    0x5925f6a89b30 ---------A   01390 PRINT "THAT'S PUSHING THE ODDS!" : GOTO 1410
    0x5925f6a89ec0 ---------A T 01400 IF D<25 THEN PRINT "FRESH OUT OF TRAINING, EH?"
    0x5925f6a8a370 ---------A T 01410 PRINT : IF D<160*RND(1) THEN 1440
    0x5925f6a8a990 ---------A   01420 PRINT "DIRECT HIT!!!! "INT(100*RND(1))"KILLED."
    0x5925f6a8ab70 ---------A   01430 PRINT "MISSION SUCCESSFUL." : GOTO 1600
    0x5925f6a8b270 ---------A T 01440 PRINT "MISSED TARGET BY"INT(2+30*RND(1))"MILES!"
    0x5925f6a8b470 ---------A   01450 PRINT "NOW YOU'RE REALLY IN FOR IT !!" : PRINT
    0x5925f6a8b6d0 ---------A T 01460 INPUT "DOES THE ENEMY HAVE GUNS(1), MISSILES(2), OR BOTH(3)";R
    0x5925f6a8bb60 ---------A   01470 IF R>0 AND R<4 THEN 1490
    0x5925f6a8bd40 ---------A   01480 PRINT "TRY AGAIN..." : GOTO 1460
    0x5925f6a8c2b0 ---------A T 01490 PRINT : T=0 : IF R=2 THEN 1530
    0x5925f6a8c490 ---------A   01500 INPUT "WHAT'S THE PERCENT HIT RATE OF ENEMY GUNNERS (10 TO 50)";S
    0x5925f6a8c890 ---------A   01510 IF S<10 THEN PRINT "YOU LIE, BUT YOU'LL PAY...": GOTO 1560
    0x5925f6a8c900 ---------A T 01520 PRINT
    0x5925f6a8cda0 ---------A T 01530 PRINT : IF R>1 THEN T=35
    0x5925f6a8d330 ---------A   01540 IF S+T>100*RND(1) THEN 1560
    0x5925f6a8d520 ---------A   01550 PRINT "YOU MADE IT THROUGH TREMENDOUS FLAK!!" : GOTO 1600
    0x5925f6a8d680 ---------A T 01560 PRINT "* * * * BOOM * * * *"
    0x5925f6a8d810 ---------A   01570 PRINT "YOU HAVE BEEN SHOT DOWN....."
    0x5925f6a8d990 ---------A   01580 PRINT "DEARLY BELOVED, WE ARE GATHERED HERE TODAY TO PAY OUR"
    0x5925f6a8db10 ---------A   01590 PRINT "LAST TRIBUTE..."
    0x5925f6a8de40 ---------A T 01600 PRINT:PRINT:PRINT:INPUT "ANOTHER MISSION (Y OR N)";U$
    0x5925f6a8e0d0 ---------A   01610 IF U$="Y" THEN 1000
    0x5925f6a8e2d0 ---------A   01620 PRINT "CHICKEN !!!" : PRINT : END
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
int    A_int;                                     // Basic: A 
int    B_int;                                     // Basic: B 
int    D_int;                                     // Basic: D 
char*  F_str;                                     // Basic: F$ 
int    G_int;                                     // Basic: G 
int    M_int;                                     // Basic: M 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
char*  U_str;                                     // Basic: U$ 
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

  Lbl_01000:
    // 01000 PRINT "YOU ARE A PILOT IN A WORLD WAR II BOMBER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE A PILOT IN A WORLD WAR II BOMBER.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01010:
    // 01010 INPUT "WHAT SIDE -- ITALY(1), ALLIES(2), JAPAN(3), GERMANY(4)";A
    // Start of Basic INPUT statement 01010
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"WHAT SIDE -- ITALY(1), ALLIES(2), JAPAN(3), GERMANY(4)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&A_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01010
    // 01020 IF A>0 AND A<5 THEN 1040
    if(A_int>0&&A_int<5)goto Lbl_01040;
    // 01030 PRINT "TRY AGAIN..." : GOTO 1010
    goto Lbl_01010;

  Lbl_01040:
    // 01040 ON A GOTO 1050, 1130, 11250, 220
    switch((int)(A_int)){
        case 1: goto Lbl_01050;
        case 2: goto Lbl_01130;
        case 3: goto Lbl_01220;
        case 4: goto Lbl_01250;
        default: break; 
    };

  Lbl_01050:
    // 01050 INPUT "YOUR TARGET -- ALBANIA(1), GREECE(2), NORTH AFRICA(3)";B
    // Start of Basic INPUT statement 01050
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"YOUR TARGET -- ALBANIA(1), GREECE(2), NORTH AFRICA(3)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&B_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01050
    // 01060 IF B>0 AND B<4 THEN 1080
    if(B_int>0&&B_int<4)goto Lbl_01080;
    // 01070 PRINT "TRY AGAIN..." : GOTO 1050
    goto Lbl_01050;

  Lbl_01080:
    // 01080 PRINT : ON B GOTO 101120, 1110,90
    switch((int)(B_int)){
        case 1: goto Lbl_01090;
        case 2: goto Lbl_01110;
        case 3: goto Lbl_01120;
        default: break; 
    };

  Lbl_01090:
    // 01090 PRINT "SHOULD BE EASY -- YOU'RE FLYING A NAZI-MADE PLANE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHOULD BE EASY -- YOU'RE FLYING A NAZI-MADE PLANE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 GOTO 1320
    goto Lbl_01320;

  Lbl_01110:
    // 01110 PRINT "BE CAREFUL!!!" : GOTO 21110
    goto Lbl_01320;

  Lbl_01120:
    // 01120 PRINT "YOU'RE GOING FOR THE OIL, EH?" : GOTO 1320
    goto Lbl_01320;

  Lbl_01130:
    // 01130 INPUT "AIRCRAFT -- LIBERATOR(1), B-29(2), B-17(3), LANCASTER(4)";G
    // Start of Basic INPUT statement 01130
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"AIRCRAFT -- LIBERATOR(1), B-29(2), B-17(3), LANCASTER(4)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&G_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01130
    // 01140 IF G>0 AND G<5 THEN 1160
    if(G_int>0&&G_int<5)goto Lbl_01160;
    // 01150 PRINT "TRY AGAIN..." : GOTO 1130
    goto Lbl_01130;

  Lbl_01160:
    // 01160 PRINT : ON G GOTO 111200, 1180, 170, 190
    switch((int)(G_int)){
        case 1: goto Lbl_01170;
        case 2: goto Lbl_01180;
        case 3: goto Lbl_01190;
        case 4: goto Lbl_01200;
        default: break; 
    };

  Lbl_01170:
    // 01170 PRINT "YOU'VE GOT 2 TONS OF BOMBS FLYING FOR PLOESTI." : GOTO 1320
    goto Lbl_01320;

  Lbl_01180:
    // 01180 PRINT "YOU'RE DUMPING THE A-BOMB ON HIROSHIMA." : GOTO 1320
    goto Lbl_01320;

  Lbl_01190:
    // 01190 PRINT "YOU'RE CHASING THE BISMARK IN THE NORTH SEA." : GOTO 1320
    goto Lbl_01320;

  Lbl_01200:
    // 01200 PRINT "YOU'RE BUSTING A GERMAN HEAVY WATER PLANT IN THE RUHR."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU'RE BUSTING A GERMAN HEAVY WATER PLANT IN THE RUHR.");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 GOTO 1320
    goto Lbl_01320;

  Lbl_01220:
    // 01220 PRINT "YOU'RE FLYING A KAMIKAZE MISSION OVER THE USS LEXINGTON."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU'RE FLYING A KAMIKAZE MISSION OVER THE USS LEXINGTON.");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 INPUT "YOUR FIRST KAMIKAZE MISSION(Y OR N)";F$
    // Start of Basic INPUT statement 01230
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"YOUR FIRST KAMIKAZE MISSION(Y OR N)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&F_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01230
    // 01240 IF F$="N" THEN S=0 : GOTO 1520
    goto Lbl_01520;

  Lbl_01250:
    // 01250 PRINT "A NAZI, EH?  OH WELL.  ARE YOU GOING FOR RUSSIA(1),"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A NAZI, EH?  OH WELL.  ARE YOU GOING FOR RUSSIA(1),");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 INPUT "ENGLAND(2), OR FRANCE(3)";M : IF M>0 AND M<4 THEN 1280
    if(M_int>0&&M_int<4)goto Lbl_01280;
    // 01270 PRINT "TRY AGAIN..." : GOTO 1250
    goto Lbl_01250;

  Lbl_01280:
    // 01280 PRINT : ON M GOTO 1290, 1300, 1310
    switch((int)(M_int)){
        case 1: goto Lbl_01290;
        case 2: goto Lbl_01300;
        case 3: goto Lbl_01310;
        default: break; 
    };

  Lbl_01290:
    // 01290 PRINT "YOU'RE NEARING STALINGRAD." : GOTO 1320
    goto Lbl_01320;

  Lbl_01300:
    // 01300 PRINT "NEARING LONDON.  BE CAREFUL, THEY'VE GOT RADAR." : GOTO 1320
    goto Lbl_01320;

  Lbl_01310:
    // 01310 PRINT "NEARING VERSAILLES.  DUCK SOUP.  THEY'RE NEARLY DEFENSELESS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NEARING VERSAILLES.  DUCK SOUP.  THEY'RE NEARLY DEFENSELESS.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01320:
    // 01320 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01330:
    // 01330 INPUT "HOW MANY MISSIONS HAVE YOU FLOWN";D
    // Start of Basic INPUT statement 01330
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"HOW MANY MISSIONS HAVE YOU FLOWN");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&D_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01330
    // 01340 IF D<160 THEN 1380
    if(D_int<160)goto Lbl_01380;
    // 01350 PRINT "MISSIONS, NOT MILES..." 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MISSIONS, NOT MILES...");strcat(buf,"\n");fputs(buf,fh); };
    // 01360 PRINT "150 MISSIONS IS HIGH EVEN FOR OLD-TIMERS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"150 MISSIONS IS HIGH EVEN FOR OLD-TIMERS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01370 PRINT "NOW THEN, "; : GOTO 1330
    goto Lbl_01330;

  Lbl_01380:
    // 01380 PRINT:IF D<100 THEN 1400
    if(D_int<100)goto Lbl_01400;
    // 01390 PRINT "THAT'S PUSHING THE ODDS!" : GOTO 1410
    goto Lbl_01410;

  Lbl_01400:
    // 01400 IF D<25 THEN PRINT "FRESH OUT OF TRAINING, EH?"
    if(D_int<25) {
    }

  Lbl_01410:
    // 01410 PRINT : IF D<160*RND(1) THEN 1440
    if(D_int<160*RND(1))goto Lbl_01440;
    // 01420 PRINT "DIRECT HIT!!!! "INT(100*RND(1))"KILLED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DIRECT HIT!!!! ");b2c_INT(buf,INT(100*RND(1)));strcat(buf,"KILLED.");strcat(buf,"\n");fputs(buf,fh); };
    // 01430 PRINT "MISSION SUCCESSFUL." : GOTO 1600
    goto Lbl_01600;

  Lbl_01440:
    // 01440 PRINT "MISSED TARGET BY"INT(2+30*RND(1))"MILES!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MISSED TARGET BY");b2c_INT(buf,INT(2+30*RND(1)));strcat(buf,"MILES!");strcat(buf,"\n");fputs(buf,fh); };
    // 01450 PRINT "NOW YOU'RE REALLY IN FOR IT !!" : PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01460:
    // 01460 INPUT "DOES THE ENEMY HAVE GUNS(1), MISSILES(2), OR BOTH(3)";R
    // Start of Basic INPUT statement 01460
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"DOES THE ENEMY HAVE GUNS(1), MISSILES(2), OR BOTH(3)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&R_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01460
    // 01470 IF R>0 AND R<4 THEN 1490
    if(R_int>0&&R_int<4)goto Lbl_01490;
    // 01480 PRINT "TRY AGAIN..." : GOTO 1460
    goto Lbl_01460;

  Lbl_01490:
    // 01490 PRINT : T=0 : IF R=2 THEN 1530
    if(R_int==2)goto Lbl_01530;
    // 01500 INPUT "WHAT'S THE PERCENT HIT RATE OF ENEMY GUNNERS (10 TO 50)";S
    // Start of Basic INPUT statement 01500
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"WHAT'S THE PERCENT HIT RATE OF ENEMY GUNNERS (10 TO 50)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&S_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01500
    // 01510 IF S<10 THEN PRINT "YOU LIE, BUT YOU'LL PAY...": GOTO 1560
    goto Lbl_01560;

  Lbl_01520:
    // 01520 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01530:
    // 01530 PRINT : IF R>1 THEN T=35
    if(R_int>1) {
    }
    // 01540 IF S+T>100*RND(1) THEN 1560
    if(S_int+T_int>100*RND(1))goto Lbl_01560;
    // 01550 PRINT "YOU MADE IT THROUGH TREMENDOUS FLAK!!" : GOTO 1600
    goto Lbl_01600;

  Lbl_01560:
    // 01560 PRINT "* * * * BOOM * * * *"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"* * * * BOOM * * * *");strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINT "YOU HAVE BEEN SHOT DOWN....."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE BEEN SHOT DOWN.....");strcat(buf,"\n");fputs(buf,fh); };
    // 01580 PRINT "DEARLY BELOVED, WE ARE GATHERED HERE TODAY TO PAY OUR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DEARLY BELOVED, WE ARE GATHERED HERE TODAY TO PAY OUR");strcat(buf,"\n");fputs(buf,fh); };
    // 01590 PRINT "LAST TRIBUTE..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LAST TRIBUTE...");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01600:
    // 01600 PRINT:PRINT:PRINT:INPUT "ANOTHER MISSION (Y OR N)";U$
    // Start of Basic INPUT statement 01600
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"ANOTHER MISSION (Y OR N)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&U_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01600
    // 01610 IF U$="Y" THEN 1000
    if(strcmp(U_str,"Y")==0)goto Lbl_01000;
    // 01620 PRINT "CHICKEN !!!" : PRINT : END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
