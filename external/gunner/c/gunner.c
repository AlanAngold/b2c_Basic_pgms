/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/gunner.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x600a94f5ab80 ---------A   00010 PRINT TAB(30);"GUNNER"
    0x600a94f5bf30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x600a94f4a2b0 ---------A   00030 PRINT:PRINT:PRINT
    0x600a94f597f0 ---------A   00130 PRINT "YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO A GUN"
    0x600a94f5a040 ---------A   00140 PRINT "CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    0x600a94f5a4c0 ---------A   00150 PRINT "WILL PLACE A PROJECTILE ON TARGET.  A HIT WITHIN 100 YARDS"
    0x600a94f59be0 ---------A   00160 PRINT "OF THE TARGET WILL DESTROY IT." : PRINT
    0x600a94f619a0 ---------A T 00170 R=INT(40000*RND(1)+20000)
    0x600a94f61c30 ---------A   00180 PRINT "MAXIMUM RANGE OF YOUR GUN IS";R;" YARDS."
    0x600a94f5a090 ---------A   00185 Z=0
    0x600a94f61ea0 ---------A   00190 PRINT
    0x600a94f62150 ---------A   00195 S1=0
    0x600a94f62940 ---------A T 00200 T=INT(R*(.1+.8*RND(1)))
    0x600a94f62c10 ---------A   00210 S=0
    0x600a94f62ca0 ---------A   00220 GOTO 370
    0x600a94f62dc0 ---------A T 00230 PRINT "MINIMUM ELEVATION IS ONE DEGREE."
    0x600a94f62e50 ---------A   00240 GOTO 390
    0x600a94f62f70 ---------A T 00250 PRINT "MAXIMUM ELEVATION IS 89 DEGREES."
    0x600a94f63000 ---------A   00260 GOTO 390
    0x600a94f634e0 ---------A T 00270 PRINT "OVER TARGET BY ";ABS(E);"YARDS."
    0x600a94f63570 ---------A   00280 GOTO 390
    0x600a94f63990 ---------A T 00290 PRINT "SHORT OF TARGET BY "ABS(E);"YARDS."
    0x600a94f639e0 ---------A   00300 GOTO 390
    0x600a94f63ce0 ---------A T 00320 PRINT "*** TARGET DESTROYED ***  ";S;"ROUNDS OF AMMUNITION EXPENDED."
    0x600a94f64030 ---------A   00325 S1=S1+S
    0x600a94f59670 ---------A   00330 IF Z=4 THEN 490
    0x600a94f64560 ---------A   00340 Z=Z+1
    0x600a94f64600 ---------A   00345 PRINT
    0x600a94f64780 ---------A   00350 PRINT "THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY..."
    0x600a94f64810 ---------A   00360 GOTO 200
    0x600a94f64b60 ---------A T 00370 PRINT "DISTANCE TO THE TARGET IS "T;" YARDS."
    0x600a94f64bd0 ---------A   00380 PRINT
    0x600a94f64c40 ---------A T 00390 PRINT
    0x600a94f65080 ---------A   00400 INPUT "ELEVATION";B
    0x600a94f652e0 ---------A   00420 IF B>89 THEN 250
    0x600a94f65540 ---------A   00430 IF B<1 THEN 230
    0x600a94f65880 ---------A   00440 S=S+1
    0x600a94f65b00 ---------A   00442 IF S<6 THEN 450
    0x600a94f65d20 ---------A   00444 PRINT:PRINT "BOOM !!!!   YOU HAVE JUST BEEN DESTROYED ";
    0x600a94f65ff0 ---------A   00446 PRINT "BY THE ENEMY." : PRINT : PRINT : PRINT : GOTO 495
    0x600a94f67090 ---------A T 00450 B2=2*B/57.3 : I=R*SIN(B2) : X=T-I : E=INT(X)
    0x600a94f673c0 ---------A   00460 IF ABS(E)<100 THEN 320
    0x600a94f67620 ---------A   00470 IF E>100 THEN 290
    0x600a94f676d0 ---------A   00480 GOTO 270
    0x600a94f679c0 ---------A T 00490 PRINT : PRINT : PRINT "TOTAL ROUNDS EXPENDED WERE:";S1
    0x600a94f67c20 ---------A   00492 IF S1>18 THEN 495
    0x600a94f67e20 ---------A   00493 PRINT "NICE SHOOTING !!" : GOTO 500
    0x600a94f67fa0 ---------A T 00495 PRINT "BETTER GO BACK TO FORT SILL FOR REFRESHER TRAINING!"
    0x600a94f68220 ---------A T 00500 PRINT : INPUT "TRY AGAIN (Y OR N)";Z$
    0x600a94f684c0 ---------A   00510 IF Z$="Y" THEN 170
    0x600a94f68680 ---------A   00520 PRINT:PRINT "OK.  RETURN TO BASE CAMP."
    0x600a94f686d0 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00170      00510T
     00200      00360T
     00230      00430T
     00250      00420T
     00270      00480T
     00290      00470T
     00320      00460T
     00370      00220T
     00390      00240T, 00260T, 00280T, 00300T
     00450      00442T
     00490      00330T
     00495      00446T, 00492T
     00500      00493T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x600a94f5ab80 (00010)   0x600a94f5ab80 (00010)   0x600a94f686d0 (00999)   0x600a94f686d0 (00999)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01520 - 10000    8490 

 */



/*
 *  Symbol Table Listing for 'basic/gunner.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    B2                       Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    E                        Integer     
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
    S1                       Integer     
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
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     
    Z                        Integer     
    Z$                       String      

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/gunner.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x600a94f5ab80 ---------A   01000 PRINT TAB(30);"GUNNER"
    0x600a94f5bf30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x600a94f4a2b0 ---------A   01020 PRINT:PRINT:PRINT
    0x600a94f597f0 ---------A   01030 PRINT "YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO A GUN"
    0x600a94f5a040 ---------A   01040 PRINT "CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    0x600a94f5a4c0 ---------A   01050 PRINT "WILL PLACE A PROJECTILE ON TARGET.  A HIT WITHIN 100 YARDS"
    0x600a94f59be0 ---------A   01060 PRINT "OF THE TARGET WILL DESTROY IT." : PRINT
    0x600a94f619a0 ---------A T 01070 R=INT(40000*RND(1)+20000)
    0x600a94f61c30 ---------A   01080 PRINT "MAXIMUM RANGE OF YOUR GUN IS";R;" YARDS."
    0x600a94f5a090 ---------A   01090 Z=0
    0x600a94f61ea0 ---------A   01100 PRINT
    0x600a94f62150 ---------A   01110 S1=0
    0x600a94f62940 ---------A T 01120 T=INT(R*(.1+.8*RND(1)))
    0x600a94f62c10 ---------A   01130 S=0
    0x600a94f62ca0 ---------A   01140 GOTO 1300
    0x600a94f62dc0 ---------A T 01150 PRINT "MINIMUM ELEVATION IS ONE DEGREE."
    0x600a94f62e50 ---------A   01160 GOTO 1320
    0x600a94f62f70 ---------A T 01170 PRINT "MAXIMUM ELEVATION IS 89 DEGREES."
    0x600a94f63000 ---------A   01180 GOTO 1320
    0x600a94f634e0 ---------A T 01190 PRINT "OVER TARGET BY ";ABS(E);"YARDS."
    0x600a94f63570 ---------A   01200 GOTO 1320
    0x600a94f63990 ---------A T 01210 PRINT "SHORT OF TARGET BY "ABS(E);"YARDS."
    0x600a94f639e0 ---------A   01220 GOTO 1320
    0x600a94f63ce0 ---------A T 01230 PRINT "*** TARGET DESTROYED ***  ";S;"ROUNDS OF AMMUNITION EXPENDED."
    0x600a94f64030 ---------A   01240 S1=S1+S
    0x600a94f59670 ---------A   01250 IF Z=4 THEN 1440
    0x600a94f64560 ---------A   01260 Z=Z+1
    0x600a94f64600 ---------A   01270 PRINT
    0x600a94f64780 ---------A   01280 PRINT "THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY..."
    0x600a94f64810 ---------A   01290 GOTO 1120
    0x600a94f64b60 ---------A T 01300 PRINT "DISTANCE TO THE TARGET IS "T;" YARDS."
    0x600a94f64bd0 ---------A   01310 PRINT
    0x600a94f64c40 ---------A T 01320 PRINT
    0x600a94f65080 ---------A   01330 INPUT "ELEVATION";B
    0x600a94f652e0 ---------A   01340 IF B>89 THEN 1170
    0x600a94f65540 ---------A   01350 IF B<1 THEN 1150
    0x600a94f65880 ---------A   01360 S=S+1
    0x600a94f65b00 ---------A   01370 IF S<6 THEN 1400
    0x600a94f65d20 ---------A   01380 PRINT:PRINT "BOOM !!!!   YOU HAVE JUST BEEN DESTROYED ";
    0x600a94f65ff0 ---------A   01390 PRINT "BY THE ENEMY." : PRINT : PRINT : PRINT : GOTO 1470
    0x600a94f67090 ---------A T 01400 B2=2*B/57.3 : I=R*SIN(B2) : X=T-I : E=INT(X)
    0x600a94f673c0 ---------A   01410 IF ABS(E)<100 THEN 1230
    0x600a94f67620 ---------A   01420 IF E>100 THEN 1210
    0x600a94f676d0 ---------A   01430 GOTO 1190
    0x600a94f679c0 ---------A T 01440 PRINT : PRINT : PRINT "TOTAL ROUNDS EXPENDED WERE:";S1
    0x600a94f67c20 ---------A   01450 IF S1>18 THEN 1470
    0x600a94f67e20 ---------A   01460 PRINT "NICE SHOOTING !!" : GOTO 1480
    0x600a94f67fa0 ---------A T 01470 PRINT "BETTER GO BACK TO FORT SILL FOR REFRESHER TRAINING!"
    0x600a94f68220 ---------A T 01480 PRINT : INPUT "TRY AGAIN (Y OR N)";Z$
    0x600a94f684c0 ---------A   01490 IF Z$="Y" THEN 1070
    0x600a94f68680 ---------A   01500 PRINT:PRINT "OK.  RETURN TO BASE CAMP."
    0x600a94f686d0 ---------A   01510 END
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
int    B_int;                                     // Basic: B 
int    B2_int;                                    // Basic: B2 
int    E_int;                                     // Basic: E 
int    I_int;                                     // Basic: I 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    S1_int;                                    // Basic: S1 
int    T_int;                                     // Basic: T 
int    X_int;                                     // Basic: X 
int    Z_int;                                     // Basic: Z 
char*  Z_str;                                     // Basic: Z$ 
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
