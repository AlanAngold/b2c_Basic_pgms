/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/rocket.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c291c994b80 ---------A   00010 PRINT TAB(30); "ROCKET"
    0x5c291c995f30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c291c9960b0 ---------A   00030 PRINT:PRINT:PRINT
    0x5c291c9939e0 ---------A   00070 PRINT "LUNAR LANDING SIMULATION"
    0x5c291c995aa0 ---------A   00080 PRINT "----- ------- ----------": PRINT
    0x5c291c9936d0 ---------A   00100 INPUT "DO YOU WANT INSTRUCTIONS (YES OR NO)";A$
    0x5c291c993670 ---------A   00110 IF A$="NO" THEN 390
    0x5c291c993c30 ---------A   00160 PRINT
    0x5c291c996220 ---------A   00200 PRINT"YOU ARE LANDING ON THE MOON AND AND HAVE TAKEN OVER MANUAL"
    0x5c291c994730 ---------A   00210 PRINT"CONTROL 1000 FEET ABOVE A GOOD LANDING SPOT. YOU HAVE A DOWN-"
    0x5c291c994890 ---------A   00220 PRINT"WARD VELOCITY OF 50 FEET/SEC. 150 UNITS OF FUEL REMAIN."
    0x5c291c99b900 ---------A   00225 PRINT
    0x5c291c99bb10 ---------A   00230 PRINT"HERE ARE THE RULES THAT GOVERN YOUR APOLLO SPACE-CRAFT:": PRINT
    0x5c291c99bcc0 ---------A   00240 PRINT"(1) AFTER EACH SECOND THE HEIGHT, VELOCITY, AND REMAINING FUEL"
    0x5c291c99be70 ---------A   00250 PRINT"    WILL BE REPORTED VIA DIGBY YOUR ON-BOARD COMPUTER."
    0x5c291c99c020 ---------A   00260 PRINT"(2) AFTER THE REPORT A '?' WILL APPEAR. ENTER THE NUMBER"
    0x5c291c99c1c0 ---------A   00270 PRINT"    OF UNITS OF FUEL YOU WISH TO BURN DURING THE NEXT"
    0x5c291c99c320 ---------A   00280 PRINT"    SECOND. EACH UNIT OF FUEL WILL SLOW YOUR DESCENT BY"
    0x5c291c99c480 ---------A   00290 PRINT"    1 FOOT/SEC."
    0x5c291c99c620 ---------A   00310 PRINT"(3) THE MAXIMUM THRUST OF YOUR ENGINE IS 30 FEET/SEC/SEC"
    0x5c291c99c780 ---------A   00320 PRINT"    OR 30 UNITS OF FUEL PER SECOND."
    0x5c291c99c930 ---------A   00330 PRINT"(4) WHEN YOU CONTACT THE LUNAR SURFACE. YOUR DESCENT ENGINE"
    0x5c291c99cae0 ---------A   00340 PRINT"    WILL AUTOMATICALLY SHUT DOWN AND YOU WILL BE GIVEN A"
    0x5c291c99cc80 ---------A   00350 PRINT"    REPORT OF YOUR LANDING SPEED AND REMAINING FUEL."
    0x5c291c99ce30 ---------A   00360 PRINT"(5) IF YOU RUN OUT OF FUEL THE '?' WILL NO LONGER APPEAR"
    0x5c291c99cfd0 ---------A   00370 PRINT"    BUT YOUR SECOND BY SECOND REPORT WILL CONTINUE UNTIL"
    0x5c291c99d170 ---------A   00380 PRINT"    YOU CONTACT THE LUNAR SURFACE.":PRINT
    0x5c291c99d2d0 ---------A T 00390 PRINT"BEGINNING LANDING PROCEDURE..........":PRINT
    0x5c291c99d3e0 ---------A   00400 PRINT"G O O D  L U C K ! ! !"
    0x5c291c99d4d0 ---------A   00420 PRINT:PRINT
    0x5c291c99d640 ---------A   00430 PRINT"SEC  FEET      SPEED     FUEL     PLOT OF DISTANCE"
    0x5c291c99d690 ---------A   00450 PRINT
    0x5c291c99e1a0 ---------A   00455 T=0:H=1000:V=50:F=150
    0x5c291c99f160 ---------A T 00490 PRINT T;TAB(6);H;TAB(16);V;TAB(26);F;TAB(35);"I";TAB(H/15);"*"
    0x5c291c99f370 ---------A   00500 INPUT B
    0x5c291c99f5d0 ---------A   00510 IF B<0 THEN 650
    0x5c291c99fa20 ---------A   00520 IF B>30 THEN B=30
    0x5c291c99feb0 ---------A   00530 IF B>F THEN B=F
    0x5c291c9a03d0 ---------A T 00540 V1=V-B+5
    0x5c291c9a0720 ---------A   00560 F=F-B
    0x5c291c9a0cd0 ---------A   00570 H=H- .5*(V+V1)
    0x5c291c9a0f20 ---------A   00580 IF H<=0 THEN 670
    0x5c291c9a1260 ---------A   00590 T=T+1
    0x5c291c9a1490 ---------A   00600 V=V1
    0x5c291c9a16e0 ---------A   00610 IF F>0 THEN 490
    0x5c291c9a1920 ---------A   00615 IF B=0 THEN 640
    0x5c291c9a1ab0 ---------A   00620 PRINT"**** OUT OF FUEL ****"
    0x5c291c9a2960 ---------A T 00640 PRINT T;TAB(4);H;TAB(12);V;TAB(20);F;TAB(29);"I";TAB(H/12+29);"*"
    0x5c291c9a2b70 ---------A T 00650 B=0
    0x5c291c9a2bc0 ---------A   00660 GOTO 540
    0x5c291c9a2d00 ---------A T 00670 PRINT"***** CONTACT *****"
    0x5c291c9a32b0 ---------A   00680 H=H+ .5*(V1+V)
    0x5c291c9a34e0 ---------A   00690 IF B=5 THEN 720
    0x5c291c9a4220 ---------A   00700 D=(-V+SQR(V*V+H*(10-2*B)))/(5-B)
    0x5c291c9a4290 ---------A   00710 GOTO 730
    0x5c291c9a45d0 ---------A T 00720 D=H/V
    0x5c291c9a4b60 ---------A T 00730 V1=V+(5-B)*D
    0x5c291c9a4ff0 ---------A   00760 PRINT"TOUCHDOWN AT";T+D;"SECONDS."
    0x5c291c9a5320 ---------A   00770 PRINT"LANDING VELOCITY=";V1;"FEET/SEC."
    0x5c291c9a5580 ---------A   00780 PRINT F;"UNITS OF FUEL REMAINING."
    0x5c291c9a57f0 ---------A   00790 IF V1<>0 THEN 810
    0x5c291c9a5980 ---------A   00800 PRINT"CONGRATULATIONS! A PERFECT LANDING!!"
    0x5c291c9a5b00 ---------A   00805 PRINT"YOUR LICENSE WILL BE RENEWED.......LATER."
    0x5c291c9a5e50 ---------A T 00810 IF ABS(V1)<2 THEN 840
    0x5c291c9a5ff0 ---------A   00820 PRINT"***** SORRY, BUT YOU BLEW IT!!!!"
    0x5c291c9a6580 ---------A   00830 PRINT"APPROPRIATE CONDOLENCES WILL BE SENT TO YOUR NEXT OF KIN."
    0x5c291c9a66a0 ---------A T 00840 PRINT:PRINT:PRINT
    0x5c291c9a6820 ---------A   00850 INPUT "ANOTHER MISSION";A$
    0x5c291c9a6ab0 ---------A   00860 IF A$="YES" THEN 390
    0x5c291c9a6cb0 ---------A   00870 PRINT: PRINT "CONTROL OUT.": PRINT
    0x5c291c9a6d00 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00390      00110T, 00860T
     00490      00610T
     00540      00660T
     00640      00615T
     00650      00510T
     00670      00580T
     00720      00690T
     00730      00710T
     00810      00790T
     00840      00810T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5c291c994b80 (00010)   0x5c291c994b80 (00010)   0x5c291c9a6d00 (00999)   0x5c291c9a6d00 (00999)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01710 - 10000    8300 

 */



/*
 *  Symbol Table Listing for 'basic/rocket.bas'
 *
    A$                       String      
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
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Integer     
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
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    V                        Integer     
    V1                       Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/rocket.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c291c994b80 ---------A   01000 PRINT TAB(30); "ROCKET"
    0x5c291c995f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c291c9960b0 ---------A   01020 PRINT:PRINT:PRINT
    0x5c291c9939e0 ---------A   01030 PRINT "LUNAR LANDING SIMULATION"
    0x5c291c995aa0 ---------A   01040 PRINT "----- ------- ----------": PRINT
    0x5c291c9936d0 ---------A   01050 INPUT "DO YOU WANT INSTRUCTIONS (YES OR NO)";A$
    0x5c291c993670 ---------A   01060 IF A$="NO" THEN 1270
    0x5c291c993c30 ---------A   01070 PRINT
    0x5c291c996220 ---------A   01080 PRINT"YOU ARE LANDING ON THE MOON AND AND HAVE TAKEN OVER MANUAL"
    0x5c291c994730 ---------A   01090 PRINT"CONTROL 1000 FEET ABOVE A GOOD LANDING SPOT. YOU HAVE A DOWN-"
    0x5c291c994890 ---------A   01100 PRINT"WARD VELOCITY OF 50 FEET/SEC. 150 UNITS OF FUEL REMAIN."
    0x5c291c99b900 ---------A   01110 PRINT
    0x5c291c99bb10 ---------A   01120 PRINT"HERE ARE THE RULES THAT GOVERN YOUR APOLLO SPACE-CRAFT:": PRINT
    0x5c291c99bcc0 ---------A   01130 PRINT"(1) AFTER EACH SECOND THE HEIGHT, VELOCITY, AND REMAINING FUEL"
    0x5c291c99be70 ---------A   01140 PRINT"    WILL BE REPORTED VIA DIGBY YOUR ON-BOARD COMPUTER."
    0x5c291c99c020 ---------A   01150 PRINT"(2) AFTER THE REPORT A '?' WILL APPEAR. ENTER THE NUMBER"
    0x5c291c99c1c0 ---------A   01160 PRINT"    OF UNITS OF FUEL YOU WISH TO BURN DURING THE NEXT"
    0x5c291c99c320 ---------A   01170 PRINT"    SECOND. EACH UNIT OF FUEL WILL SLOW YOUR DESCENT BY"
    0x5c291c99c480 ---------A   01180 PRINT"    1 FOOT/SEC."
    0x5c291c99c620 ---------A   01190 PRINT"(3) THE MAXIMUM THRUST OF YOUR ENGINE IS 30 FEET/SEC/SEC"
    0x5c291c99c780 ---------A   01200 PRINT"    OR 30 UNITS OF FUEL PER SECOND."
    0x5c291c99c930 ---------A   01210 PRINT"(4) WHEN YOU CONTACT THE LUNAR SURFACE. YOUR DESCENT ENGINE"
    0x5c291c99cae0 ---------A   01220 PRINT"    WILL AUTOMATICALLY SHUT DOWN AND YOU WILL BE GIVEN A"
    0x5c291c99cc80 ---------A   01230 PRINT"    REPORT OF YOUR LANDING SPEED AND REMAINING FUEL."
    0x5c291c99ce30 ---------A   01240 PRINT"(5) IF YOU RUN OUT OF FUEL THE '?' WILL NO LONGER APPEAR"
    0x5c291c99cfd0 ---------A   01250 PRINT"    BUT YOUR SECOND BY SECOND REPORT WILL CONTINUE UNTIL"
    0x5c291c99d170 ---------A   01260 PRINT"    YOU CONTACT THE LUNAR SURFACE.":PRINT
    0x5c291c99d2d0 ---------A T 01270 PRINT"BEGINNING LANDING PROCEDURE..........":PRINT
    0x5c291c99d3e0 ---------A   01280 PRINT"G O O D  L U C K ! ! !"
    0x5c291c99d4d0 ---------A   01290 PRINT:PRINT
    0x5c291c99d640 ---------A   01300 PRINT"SEC  FEET      SPEED     FUEL     PLOT OF DISTANCE"
    0x5c291c99d690 ---------A   01310 PRINT
    0x5c291c99e1a0 ---------A   01320 T=0:H=1000:V=50:F=150
    0x5c291c99f160 ---------A T 01330 PRINT T;TAB(6);H;TAB(16);V;TAB(26);F;TAB(35);"I";TAB(H/15);"*"
    0x5c291c99f370 ---------A   01340 INPUT B
    0x5c291c99f5d0 ---------A   01350 IF B<0 THEN 1480
    0x5c291c99fa20 ---------A   01360 IF B>30 THEN B=30
    0x5c291c99feb0 ---------A   01370 IF B>F THEN B=F
    0x5c291c9a03d0 ---------A T 01380 V1=V-B+5
    0x5c291c9a0720 ---------A   01390 F=F-B
    0x5c291c9a0cd0 ---------A   01400 H=H- .5*(V+V1)
    0x5c291c9a0f20 ---------A   01410 IF H<=0 THEN 1500
    0x5c291c9a1260 ---------A   01420 T=T+1
    0x5c291c9a1490 ---------A   01430 V=V1
    0x5c291c9a16e0 ---------A   01440 IF F>0 THEN 1330
    0x5c291c9a1920 ---------A   01450 IF B=0 THEN 1470
    0x5c291c9a1ab0 ---------A   01460 PRINT"**** OUT OF FUEL ****"
    0x5c291c9a2960 ---------A T 01470 PRINT T;TAB(4);H;TAB(12);V;TAB(20);F;TAB(29);"I";TAB(H/12+29);"*"
    0x5c291c9a2b70 ---------A T 01480 B=0
    0x5c291c9a2bc0 ---------A   01490 GOTO 1380
    0x5c291c9a2d00 ---------A T 01500 PRINT"***** CONTACT *****"
    0x5c291c9a32b0 ---------A   01510 H=H+ .5*(V1+V)
    0x5c291c9a34e0 ---------A   01520 IF B=5 THEN 1550
    0x5c291c9a4220 ---------A   01530 D=(-V+SQR(V*V+H*(10-2*B)))/(5-B)
    0x5c291c9a4290 ---------A   01540 GOTO 1560
    0x5c291c9a45d0 ---------A T 01550 D=H/V
    0x5c291c9a4b60 ---------A T 01560 V1=V+(5-B)*D
    0x5c291c9a4ff0 ---------A   01570 PRINT"TOUCHDOWN AT";T+D;"SECONDS."
    0x5c291c9a5320 ---------A   01580 PRINT"LANDING VELOCITY=";V1;"FEET/SEC."
    0x5c291c9a5580 ---------A   01590 PRINT F;"UNITS OF FUEL REMAINING."
    0x5c291c9a57f0 ---------A   01600 IF V1<>0 THEN 1630
    0x5c291c9a5980 ---------A   01610 PRINT"CONGRATULATIONS! A PERFECT LANDING!!"
    0x5c291c9a5b00 ---------A   01620 PRINT"YOUR LICENSE WILL BE RENEWED.......LATER."
    0x5c291c9a5e50 ---------A T 01630 IF ABS(V1)<2 THEN 1660
    0x5c291c9a5ff0 ---------A   01640 PRINT"***** SORRY, BUT YOU BLEW IT!!!!"
    0x5c291c9a6580 ---------A   01650 PRINT"APPROPRIATE CONDOLENCES WILL BE SENT TO YOUR NEXT OF KIN."
    0x5c291c9a66a0 ---------A T 01660 PRINT:PRINT:PRINT
    0x5c291c9a6820 ---------A   01670 INPUT "ANOTHER MISSION";A$
    0x5c291c9a6ab0 ---------A   01680 IF A$="YES" THEN 1270
    0x5c291c9a6cb0 ---------A   01690 PRINT: PRINT "CONTROL OUT.": PRINT
    0x5c291c9a6d00 ---------A   01700 END
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
char*  A_str;                                     // Basic: A$ 
int    B_int;                                     // Basic: B 
int    D_int;                                     // Basic: D 
int    F_int;                                     // Basic: F 
int    H_int;                                     // Basic: H 
int    T_int;                                     // Basic: T 
int    V_int;                                     // Basic: V 
int    V1_int;                                    // Basic: V1 
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
