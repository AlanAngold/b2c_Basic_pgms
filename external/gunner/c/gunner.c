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
    0x62fe2161fac0 ---------A   00010 PRINT TAB(30);"GUNNER"
    0x62fe21620e70 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x62fe2160f2b0 ---------A   00030 PRINT:PRINT:PRINT
    0x62fe2161e730 ---------A   00130 PRINT "YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO A GUN"
    0x62fe2161ef80 ---------A   00140 PRINT "CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    0x62fe2161f400 ---------A   00150 PRINT "WILL PLACE A PROJECTILE ON TARGET.  A HIT WITHIN 100 YARDS"
    0x62fe2161eb20 ---------A   00160 PRINT "OF THE TARGET WILL DESTROY IT." : PRINT
    0x62fe216268e0 ---------A T 00170 R=INT(40000*RND(1)+20000)
    0x62fe21626b70 ---------A   00180 PRINT "MAXIMUM RANGE OF YOUR GUN IS";R;" YARDS."
    0x62fe2161efd0 ---------A   00185 Z=0
    0x62fe21626de0 ---------A   00190 PRINT
    0x62fe21627090 ---------A   00195 S1=0
    0x62fe21627880 ---------A T 00200 T=INT(R*(.1+.8*RND(1)))
    0x62fe21627b50 ---------A   00210 S=0
    0x62fe21627be0 ---------A   00220 GOTO 370
    0x62fe21627d00 ---------A T 00230 PRINT "MINIMUM ELEVATION IS ONE DEGREE."
    0x62fe21627d90 ---------A   00240 GOTO 390
    0x62fe21627eb0 ---------A T 00250 PRINT "MAXIMUM ELEVATION IS 89 DEGREES."
    0x62fe21627f40 ---------A   00260 GOTO 390
    0x62fe21628420 ---------A T 00270 PRINT "OVER TARGET BY ";ABS(E);"YARDS."
    0x62fe216284b0 ---------A   00280 GOTO 390
    0x62fe216288d0 ---------A T 00290 PRINT "SHORT OF TARGET BY "ABS(E);"YARDS."
    0x62fe21628920 ---------A   00300 GOTO 390
    0x62fe21628c20 ---------A T 00320 PRINT "*** TARGET DESTROYED ***  ";S;"ROUNDS OF AMMUNITION EXPENDED."
    0x62fe21628f70 ---------A   00325 S1=S1+S
    0x62fe2161e5b0 ---------A   00330 IF Z=4 THEN 490
    0x62fe216294a0 ---------A   00340 Z=Z+1
    0x62fe21629540 ---------A   00345 PRINT
    0x62fe216296c0 ---------A   00350 PRINT "THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY..."
    0x62fe21629750 ---------A   00360 GOTO 200
    0x62fe21629aa0 ---------A T 00370 PRINT "DISTANCE TO THE TARGET IS "T;" YARDS."
    0x62fe21629b10 ---------A   00380 PRINT
    0x62fe21629b80 ---------A T 00390 PRINT
    0x62fe21629fc0 ---------A   00400 INPUT "ELEVATION";B
    0x62fe2162a220 ---------A   00420 IF B>89 THEN 250
    0x62fe2162a480 ---------A   00430 IF B<1 THEN 230
    0x62fe2162a7c0 ---------A   00440 S=S+1
    0x62fe2162aa40 ---------A   00442 IF S<6 THEN 450
    0x62fe2162ac60 ---------A   00444 PRINT:PRINT "BOOM !!!!   YOU HAVE JUST BEEN DESTROYED ";
    0x62fe2162af30 ---------A   00446 PRINT "BY THE ENEMY." : PRINT : PRINT : PRINT : GOTO 495
    0x62fe2162bfd0 ---------A T 00450 B2=2*B/57.3 : I=R*SIN(B2) : X=T-I : E=INT(X)
    0x62fe2162c300 ---------A   00460 IF ABS(E)<100 THEN 320
    0x62fe2162c560 ---------A   00470 IF E>100 THEN 290
    0x62fe2162c610 ---------A   00480 GOTO 270
    0x62fe2162c900 ---------A T 00490 PRINT : PRINT : PRINT "TOTAL ROUNDS EXPENDED WERE:";S1
    0x62fe2162cb60 ---------A   00492 IF S1>18 THEN 495
    0x62fe2162cd60 ---------A   00493 PRINT "NICE SHOOTING !!" : GOTO 500
    0x62fe2162cee0 ---------A T 00495 PRINT "BETTER GO BACK TO FORT SILL FOR REFRESHER TRAINING!"
    0x62fe2162d160 ---------A T 00500 PRINT : INPUT "TRY AGAIN (Y OR N)";Z$
    0x62fe2162d400 ---------A   00510 IF Z$="Y" THEN 170
    0x62fe2162d5c0 ---------A   00520 PRINT:PRINT "OK.  RETURN TO BASE CAMP."
    0x62fe2162d610 ---------A   00999 END
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
   A) 0x62fe2161fac0 (00010)   0x000000000000 (00000)   0x62fe2162d610 (00999)   0x62fe2162d610 (00999)   


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
    B                        Float       
    B2                       Float       
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    E                        Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Float       
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
    R                        Float       
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Float       
    S1                       Float       
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Float       
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Float       
    Z                        Float       
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
    0x62fe2161fac0 ---------A   01000 PRINT TAB(30);"GUNNER"
    0x62fe21620e70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x62fe2160f2b0 ---------A   01020 PRINT:PRINT:PRINT
    0x62fe2161e730 ---------A   01030 PRINT "YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO A GUN"
    0x62fe2161ef80 ---------A   01040 PRINT "CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    0x62fe2161f400 ---------A   01050 PRINT "WILL PLACE A PROJECTILE ON TARGET.  A HIT WITHIN 100 YARDS"
    0x62fe2161eb20 ---------A   01060 PRINT "OF THE TARGET WILL DESTROY IT." : PRINT
    0x62fe216268e0 ---------A T 01070 R=INT(40000*RND(1)+20000)
    0x62fe21626b70 ---------A   01080 PRINT "MAXIMUM RANGE OF YOUR GUN IS";R;" YARDS."
    0x62fe2161efd0 ---------A   01090 Z=0
    0x62fe21626de0 ---------A   01100 PRINT
    0x62fe21627090 ---------A   01110 S1=0
    0x62fe21627880 ---------A T 01120 T=INT(R*(.1+.8*RND(1)))
    0x62fe21627b50 ---------A   01130 S=0
    0x62fe21627be0 ---------A   01140 GOTO 1300
    0x62fe21627d00 ---------A T 01150 PRINT "MINIMUM ELEVATION IS ONE DEGREE."
    0x62fe21627d90 ---------A   01160 GOTO 1320
    0x62fe21627eb0 ---------A T 01170 PRINT "MAXIMUM ELEVATION IS 89 DEGREES."
    0x62fe21627f40 ---------A   01180 GOTO 1320
    0x62fe21628420 ---------A T 01190 PRINT "OVER TARGET BY ";ABS(E);"YARDS."
    0x62fe216284b0 ---------A   01200 GOTO 1320
    0x62fe216288d0 ---------A T 01210 PRINT "SHORT OF TARGET BY "ABS(E);"YARDS."
    0x62fe21628920 ---------A   01220 GOTO 1320
    0x62fe21628c20 ---------A T 01230 PRINT "*** TARGET DESTROYED ***  ";S;"ROUNDS OF AMMUNITION EXPENDED."
    0x62fe21628f70 ---------A   01240 S1=S1+S
    0x62fe2161e5b0 ---------A   01250 IF Z=4 THEN 1440
    0x62fe216294a0 ---------A   01260 Z=Z+1
    0x62fe21629540 ---------A   01270 PRINT
    0x62fe216296c0 ---------A   01280 PRINT "THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY..."
    0x62fe21629750 ---------A   01290 GOTO 1120
    0x62fe21629aa0 ---------A T 01300 PRINT "DISTANCE TO THE TARGET IS "T;" YARDS."
    0x62fe21629b10 ---------A   01310 PRINT
    0x62fe21629b80 ---------A T 01320 PRINT
    0x62fe21629fc0 ---------A   01330 INPUT "ELEVATION";B
    0x62fe2162a220 ---------A   01340 IF B>89 THEN 1170
    0x62fe2162a480 ---------A   01350 IF B<1 THEN 1150
    0x62fe2162a7c0 ---------A   01360 S=S+1
    0x62fe2162aa40 ---------A   01370 IF S<6 THEN 1400
    0x62fe2162ac60 ---------A   01380 PRINT:PRINT "BOOM !!!!   YOU HAVE JUST BEEN DESTROYED ";
    0x62fe2162af30 ---------A   01390 PRINT "BY THE ENEMY." : PRINT : PRINT : PRINT : GOTO 1470
    0x62fe2162bfd0 ---------A T 01400 B2=2*B/57.3 : I=R*SIN(B2) : X=T-I : E=INT(X)
    0x62fe2162c300 ---------A   01410 IF ABS(E)<100 THEN 1230
    0x62fe2162c560 ---------A   01420 IF E>100 THEN 1210
    0x62fe2162c610 ---------A   01430 GOTO 1190
    0x62fe2162c900 ---------A T 01440 PRINT : PRINT : PRINT "TOTAL ROUNDS EXPENDED WERE:";S1
    0x62fe2162cb60 ---------A   01450 IF S1>18 THEN 1470
    0x62fe2162cd60 ---------A   01460 PRINT "NICE SHOOTING !!" : GOTO 1480
    0x62fe2162cee0 ---------A T 01470 PRINT "BETTER GO BACK TO FORT SILL FOR REFRESHER TRAINING!"
    0x62fe2162d160 ---------A T 01480 PRINT : INPUT "TRY AGAIN (Y OR N)";Z$
    0x62fe2162d400 ---------A   01490 IF Z$="Y" THEN 1070
    0x62fe2162d5c0 ---------A   01500 PRINT:PRINT "OK.  RETURN TO BASE CAMP."
    0x62fe2162d610 ---------A   01510 END
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
float  B_flt;                                     // Basic: B 
float  B2_flt;                                    // Basic: B2 
float  E_flt;                                     // Basic: E 
float  I_flt;                                     // Basic: I 
float  R_flt;                                     // Basic: R 
float  S_flt;                                     // Basic: S 
float  S1_flt;                                    // Basic: S1 
float  T_flt;                                     // Basic: T 
float  X_flt;                                     // Basic: X 
float  Z_flt;                                     // Basic: Z 
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
