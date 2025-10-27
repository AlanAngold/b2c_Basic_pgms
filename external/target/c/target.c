/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/target.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x617b1ab9db80 ---------A   00010 PRINT TAB(33);"TARGET"
    0x617b1ab9ef30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x617b1ab9f0b0 ---------A   00030 PRINT: PRINT: PRINT
    0x617b1ab9f100 ---------A   00100 R=1: R1=57.296: P=3.14159
    0x617b1ab9d670 ---------A   00110 PRINT "YOU ARE THE WEAPONS OFFICER ON THE STARSHIP ENTERPRISE"
    0x617b1ab9d860 ---------A   00120 PRINT "AND THIS IS A TEST TO SEE HOW ACCURATE A SHOT YOU"
    0x617b1aba49f0 ---------A   00130 PRINT "ARE IN A THREE-DIMENSIONAL RANGE.  YOU WILL BE TOLD"
    0x617b1aba4b90 ---------A   00140 PRINT "THE RADIAN OFFSET FOR THE X AND Z AXES, THE LOCATION"
    0x617b1aba4d40 ---------A   00150 PRINT "OF THE TARGET IN THREE DIMENSIONAL RECTANGULAR COORDINATES,"
    0x617b1aba4e90 ---------A   00160 PRINT "THE APPROXIMATE NUMBER OF DEGREES FROM THE X AND Z"
    0x617b1aba5030 ---------A   00170 PRINT "AXES, AND THE APPROXIMATE DISTANCE TO THE TARGET."
    0x617b1aba51e0 ---------A   00180 PRINT "YOU WILL THEN PROCEEED TO SHOOT AT THE TARGET UNTIL IT IS"
    0x617b1aba5540 ---------A   00190 PRINT "DESTROYED!": PRINT: PRINT "GOOD LUCK!!":PRINT: PRINT
    0x617b1aba6950 ---------A T 00220 A=RND(1)*2*P: B=RND(1)*2*P: Q=INT(A*R1): W=INT(B*R1)
    0x617b1aba6dd0 ---------A   00260 PRINT "RADIANS FROM X AXIS =";A;"   FROM Z AXIS =";B
    0x617b1aba8200 ---------A   00280 P1=100000*RND(1)+RND(1): X=SIN(B)*COS(A)*P1: Y=SIN(B)*SIN(A)*P1
    0x617b1aba86d0 ---------A   00290 Z=COS(B)*P1
    0x617b1aba8d20 ---------A   00340 PRINT "TARGET SIGHTED: APPROXIMATE COORDINATES:  X=";X;"  Y=";Y;"  Z=";Z
    0x617b1ab9c670 ---------A T 00345 R=R+1: IF R>5 THEN 390
    0x617b1aba9700 ---------A   00350 ON R GOTO 355,360,365,370,375
    0x617b1aba9d00 ---------A T 00355 P3=INT(P1*.05)*20: GOTO 390
    0x617b1abaa230 ---------A T 00360 P3=INT(P1*.1)*10: GOTO 390
    0x617b1abaa760 ---------A T 00365 P3=INT(P1*.5)*2: GOTO 390
    0x617b1abaaab0 ---------A T 00370 P3=INT(P1): GOTO 390
    0x617b1abaacb0 ---------A T 00375 P3=P1
    0x617b1abaaf50 ---------A T 00390 PRINT "     ESTIMATED DISTANCE:";P3
    0x617b1abab140 ---------A   00400 PRINT:PRINT "INPUT ANGLE DEVIATION FROM X, DEVIATION FROM Z, DISTANCE";
    0x617b1abab6c0 ---------A   00405 INPUT A1,B1,P2
    0x617b1ababb40 ---------A   00410 PRINT: IF P2<20 THEN PRINT "YOU BLEW YOURSELF UP!!": GOTO 580
    0x617b1abac510 ----------   00420 A1=A1/R1: B1=B1/R1: PRINT "RADIANS FROM X AXIS =";A1;"  ";
    0x617b1abac790 ----------   00425 PRINT "FROM Z AXIS =";B1
    0x617b1abada40 ----------   00480 X1=P2*SIN(B1)*COS(A1): Y1=P2*SIN(B1)*SIN(A1): Z1=P2*COS(B1)
    0x617b1abae910 ----------   00510 D=((X1-X)^2+(Y1-Y)^2+(Z1-Z)^2)^(1/2)
    0x617b1abaeda0 ----------   00520 IF D>20 THEN 670
    0x617b1abaeff0 ----------   00530 PRINT: PRINT " * * * HIT * * *   TARGET IS NON-FUNCTIONAL": PRINT
    0x617b1abaf370 ----------   00550 PRINT "DISTANCE OF EXPLOSION FROM TARGET WAS";D;"KILOMETERS."
    0x617b1abaf750 ----------   00570 PRINT: PRINT "MISSION ACCOMPLISHED IN ";R;" SHOTS."
    0x617b1abaffd0 ---------A T 00580 R=0: FOR I=1 TO 5: PRINT: NEXT I: PRINT "NEXT TARGET...": PRINT
    0x617b1abb0060 ---------A   00590 GOTO 220
    0x617b1abb0ea0 ---------- T 00670 X2=X1-X: Y2=Y1-Y: Z2=Z1-Z: IF X2<0 THEN 730
    0x617b1abb1280 ----------   00710 PRINT "SHOT IN FRONT OF TARGET";X2;"KILOMETERS.": GOTO 740
    0x617b1abb15c0 ---------- T 00730 PRINT "SHOT BEHIND TARGET";-X2;"KILOMETERS."
    0x617b1abb1840 ---------- T 00740 IF Y2<0 THEN 770
    0x617b1abb1c20 ----------   00750 PRINT "SHOT TO LEFT OF TARGET";Y2;"KILOMETERS.": GOTO 780
    0x617b1abb1f70 ---------- T 00770 PRINT "SHOT TO RIGHT OF TARGET";-Y2;"KILOMETERS."
    0x617b1abb21f0 ---------- T 00780 IF Z2<0 THEN 810
    0x617b1abb25c0 ----------   00790 PRINT "SHOT ABOVE TARGET";Z2;"KILOMETERS.": GOTO 820
    0x617b1abb2930 ---------- T 00810 PRINT "SHOT BELOW TARGET";-Z2;"KILOMETERS."
    0x617b1abb2fd0 ---------- T 00820 PRINT "APPROX POSITION OF EXPLOSION:  X=";X1;"   Y=";Y1;"   Z=";Z1
    0x617b1abb3370 ----------   00830 PRINT "     DISTANCE FROM TARGET =";D: PRINT: PRINT: PRINT: GOTO 345
    0x617b1abb33b0 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00220      00590T
     00345      00830T
     00355      00350T
     00360      00350T
     00365      00350T
     00370      00350T
     00375      00350T
     00390      00345T, 00355T, 00360T, 00365T, 00370T
     00580      00410T
     00670      00520T
     00730      00670T
     00740      00710T
     00770      00740T
     00780      00750T
     00810      00780T
     00820      00790T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x617b1ab9db80 (00010)   0x617b1ab9db80 (00010)   0x617b1abb33b0 (00999)   0x617b1abb33b0 (00999)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01320 - 10000    8690 

 */



/*
 *  Symbol Table Listing for 'basic/target.bas'
 *
    A                        Integer     
    A1                       Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    B1                       Integer     
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
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
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
    OCT$            Function String          args=1, float  
    P                        Integer     
    P1                       Integer     
    P2                       Integer     
    P3                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    R                        Integer     
    R1                       Integer     
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
    W                        Integer     
    X                        Integer     
    X1                       Integer     
    X2                       Integer     
    Y                        Integer     
    Y1                       Integer     
    Y2                       Integer     
    Z                        Integer     
    Z1                       Integer     
    Z2                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/target.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x617b1ab9db80 ---------A   01000 PRINT TAB(33);"TARGET"
    0x617b1ab9ef30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x617b1ab9f0b0 ---------A   01020 PRINT: PRINT: PRINT
    0x617b1ab9f100 ---------A   01030 R=1: R1=57.296: P=3.14159
    0x617b1ab9d670 ---------A   01040 PRINT "YOU ARE THE WEAPONS OFFICER ON THE STARSHIP ENTERPRISE"
    0x617b1ab9d860 ---------A   01050 PRINT "AND THIS IS A TEST TO SEE HOW ACCURATE A SHOT YOU"
    0x617b1aba49f0 ---------A   01060 PRINT "ARE IN A THREE-DIMENSIONAL RANGE.  YOU WILL BE TOLD"
    0x617b1aba4b90 ---------A   01070 PRINT "THE RADIAN OFFSET FOR THE X AND Z AXES, THE LOCATION"
    0x617b1aba4d40 ---------A   01080 PRINT "OF THE TARGET IN THREE DIMENSIONAL RECTANGULAR COORDINATES,"
    0x617b1aba4e90 ---------A   01090 PRINT "THE APPROXIMATE NUMBER OF DEGREES FROM THE X AND Z"
    0x617b1aba5030 ---------A   01100 PRINT "AXES, AND THE APPROXIMATE DISTANCE TO THE TARGET."
    0x617b1aba51e0 ---------A   01110 PRINT "YOU WILL THEN PROCEEED TO SHOOT AT THE TARGET UNTIL IT IS"
    0x617b1aba5540 ---------A   01120 PRINT "DESTROYED!": PRINT: PRINT "GOOD LUCK!!":PRINT: PRINT
    0x617b1aba6950 ---------A T 01130 A=RND(1)*2*P: B=RND(1)*2*P: Q=INT(A*R1): W=INT(B*R1)
    0x617b1aba6dd0 ---------A   01140 PRINT "RADIANS FROM X AXIS =";A;"   FROM Z AXIS =";B
    0x617b1aba8200 ---------A   01150 P1=100000*RND(1)+RND(1): X=SIN(B)*COS(A)*P1: Y=SIN(B)*SIN(A)*P1
    0x617b1aba86d0 ---------A   01160 Z=COS(B)*P1
    0x617b1aba8d20 ---------A   01170 PRINT "TARGET SIGHTED: APPROXIMATE COORDINATES:  X=";X;"  Y=";Y;"  Z=";Z
    0x617b1ab9c670 ---------A   01180 R=R+1: IF R>5 THEN 1250
    0x617b1aba9700 ---------A   01190 ON R GOTO 1200,1210,1220,1230,1240
    0x617b1aba9d00 ---------A T 01200 P3=INT(P1*.05)*20: GOTO 1250
    0x617b1abaa230 ---------A T 01210 P3=INT(P1*.1)*10: GOTO 1250
    0x617b1abaa760 ---------A T 01220 P3=INT(P1*.5)*2: GOTO 1250
    0x617b1abaaab0 ---------A T 01230 P3=INT(P1): GOTO 1250
    0x617b1abaacb0 ---------A T 01240 P3=P1
    0x617b1abaaf50 ---------A T 01250 PRINT "     ESTIMATED DISTANCE:";P3
    0x617b1abab140 ---------A   01260 PRINT:PRINT "INPUT ANGLE DEVIATION FROM X, DEVIATION FROM Z, DISTANCE";
    0x617b1abab6c0 ---------A   01270 INPUT A1,B1,P2
    0x617b1ababb40 ---------A   01280 PRINT: IF P2<20 THEN PRINT "YOU BLEW YOURSELF UP!!": GOTO 1290
    0x617b1abaffd0 ---------A T 01290 R=0: FOR I=1 TO 5: PRINT: NEXT I: PRINT "NEXT TARGET...": PRINT
    0x617b1abb0060 ---------A   01300 GOTO 1130
    0x617b1abb33b0 ---------A   01310 END
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
int    A1_int;                                    // Basic: A1 
int    B_int;                                     // Basic: B 
int    B1_int;                                    // Basic: B1 
int    D_int;                                     // Basic: D 
int    I_int;                                     // Basic: I 
int    P_int;                                     // Basic: P 
int    P1_int;                                    // Basic: P1 
int    P2_int;                                    // Basic: P2 
int    P3_int;                                    // Basic: P3 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    R1_int;                                    // Basic: R1 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    X1_int;                                    // Basic: X1 
int    X2_int;                                    // Basic: X2 
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
int    Y2_int;                                    // Basic: Y2 
int    Z_int;                                     // Basic: Z 
int    Z1_int;                                    // Basic: Z1 
int    Z2_int;                                    // Basic: Z2 
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
