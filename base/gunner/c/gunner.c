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
    0x58422bd59cf0 ---------A   01000 PRINT "DATALINE SYSTEMS LIMITED  25-JULY-70"
    0x58422bd58ac0 ---------A   01010 PRINT "B A S I C  USER LIBRARY PROGRAM--GUNNER"
    0x58422bd59db0 ---------A   01020 PRINT"THIS TIME-SHARING DEMONSTRATION SIMULATES"
    0x58422bd59f30 ---------A   01030 PRINT"THE RESULTS OF FIRING A FIELD ARTILLERY WEAPON."
    0x58422bd59560 ---------A   01040 PRINT
    0x58422bd59a30 ---------A   01050 PRINT"YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO THE GUN"
    0x58422bd57d80 ---------A   01060 PRINT"CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    0x58422bd58440 ---------A   01070 PRINT"WILL PLACE THE PROJECTILE ON TARGET. A HIT WITHIN 100"
    0x58422bd57b20 ---------A   01080 PRINT"YARDS OF THE TARGET WILL DESTROY IT."
    0x58422bd57920 ---------A   01090 PRINT
    0x58422bd57bf0 ---------A   01100 PRINT"MAXIMUM RANGE OF YOUR GUN IS 46500 YARDS."
    0x58422bd5a100 ---------A   01110 REM T=DISTANCE TO TARGET
    0x58422bd5a140 ---------A   01120 REM I=DISTANCE OF SHOT
    0x58422bd585b0 ---------A   01130 REM E=DISTANCE OVER(NEGATIVE), OR UNDER (POSITIVE) TARGET
    0x58422bd5fb40 ---------A T 01140 LET T=43000-30000*RND(X)
    0x58422bd5fdb0 ---------A   01150 LET S=0
    0x58422bd5fe40 ---------A   01160 GOTO 1410
    0x58422bd5ff40 ---------A T 01170 PRINT"MIN. ELEVTION OF GUN IS ONE DEGREE."
    0x58422bd5ffd0 ---------A   01180 GOTO 1430
    0x58422bd600f0 ---------A T 01190 PRINT"MAX. ELEVATION OF GUN IS 89 DEGREES."
    0x58422bd60180 ---------A   01200 GOTO 1430
    0x58422bd60660 ---------A T 01210 PRINT"OVER TARGET BY";ABS(E);"YARDS."
    0x58422bd606f0 ---------A   01220 GOTO 1430
    0x58422bd60b10 ---------A T 01230 PRINT"SHORT OF TARGET BY";ABS(E);"YARDS."
    0x58422bd60b80 ---------A   01240 GOTO 1430
    0x58422bd60c10 ---------A T 01250 GOTO 1260
    0x58422bd60f30 ---------A T 01260 PRINT"***TARGET DESTROYED***  ";S;"ROUNDS EXPENDED"
    0x58422bd60fa0 ---------A   01270 PRINT
    0x58422bd61010 ---------A   01280 PRINT
    0x58422bd61080 ---------A   01290 PRINT
    0x58422bd610f0 ---------A   01300 PRINT
    0x58422bd61160 ---------A   01310 PRINT
    0x58422bd611d0 ---------A   01320 PRINT
    0x58422bd61450 ---------A   01330 PRINT
    0x58422bd614c0 ---------A   01340 PRINT
    0x58422bd61530 ---------A   01350 PRINT
    0x58422bd615a0 ---------A   01360 PRINT
    0x58422bd61610 ---------A   01370 PRINT
    0x58422bd616b0 ---------A   01380 PRINT
    0x58422bd61820 ---------A   01390 PRINT"THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY."
    0x58422bd618b0 ---------A   01400 GOTO 1140
    0x58422bd61cb0 ---------A T 01410 PRINT"   DISTANCE TO THE TARGET IS";INT(T);"YARDS"
    0x58422bd61d20 ---------A   01420 PRINT
    0x58422bd61d90 ---------A T 01430 PRINT
    0x58422bd61f00 ---------A   01440 PRINT"ELEVATION:";
    0x58422bd57610 ---------A   01450 INPUT B!
    0x58422bd575b0 ---------A   01460 IF B!>89 THEN 1190
    0x58422bd62510 ---------A   01470 IF B!<1 THEN 1170
    0x58422bd62850 ---------A   01480 LET S=S+1
    0x58422bd62d20 ---------A   01490 LET B2=2*B!/57.3
    0x58422bd631f0 ---------A   01500 LET I=46500*SIN(B2)
    0x58422bd63540 ---------A   01510 LET X=T-I
    0x58422bd63830 ---------A   01520 LET E=INT(X)
    0x58422bd63b60 ---------A   01530 IF ABS(E)<100 THEN 1250
    0x58422bd63dd0 ---------A   01540 IF E>100 THEN 1230
    0x58422bd64030 ---------A   01550 IF E<-100 THEN 1210
    0x58422bd64090 ---------A   01560 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01140      01400T
     01170      01470T
     01190      01460T
     01210      01550T
     01230      01540T
     01250      01530T
     01260      01250T
     01410      01160T
     01430      01180T, 01200T, 01220T, 01240T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x58422bd59cf0 (01000)   0x000000000000 (00000)   0x58422bd64090 (01560)   0x58422bd64090 (01560)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01570 - 10000    8440 

 */



/*
 *  Symbol Table Listing for 'basic/gunner.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B!                       Float       
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
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Float       
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
    0x58422bd59cf0 ---------A   01000 PRINT "DATALINE SYSTEMS LIMITED  25-JULY-70"
    0x58422bd58ac0 ---------A   01010 PRINT "B A S I C  USER LIBRARY PROGRAM--GUNNER"
    0x58422bd59db0 ---------A   01020 PRINT"THIS TIME-SHARING DEMONSTRATION SIMULATES"
    0x58422bd59f30 ---------A   01030 PRINT"THE RESULTS OF FIRING A FIELD ARTILLERY WEAPON."
    0x58422bd59560 ---------A   01040 PRINT
    0x58422bd59a30 ---------A   01050 PRINT"YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO THE GUN"
    0x58422bd57d80 ---------A   01060 PRINT"CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    0x58422bd58440 ---------A   01070 PRINT"WILL PLACE THE PROJECTILE ON TARGET. A HIT WITHIN 100"
    0x58422bd57b20 ---------A   01080 PRINT"YARDS OF THE TARGET WILL DESTROY IT."
    0x58422bd57920 ---------A   01090 PRINT
    0x58422bd57bf0 ---------A   01100 PRINT"MAXIMUM RANGE OF YOUR GUN IS 46500 YARDS."
    0x58422bd5a100 ---------A   01110 REM T=DISTANCE TO TARGET
    0x58422bd5a140 ---------A   01120 REM I=DISTANCE OF SHOT
    0x58422bd585b0 ---------A   01130 REM E=DISTANCE OVER(NEGATIVE), OR UNDER (POSITIVE) TARGET
    0x58422bd5fb40 ---------A T 01140 LET T=43000-30000*RND(X)
    0x58422bd5fdb0 ---------A   01150 LET S=0
    0x58422bd5fe40 ---------A   01160 GOTO 1410
    0x58422bd5ff40 ---------A T 01170 PRINT"MIN. ELEVTION OF GUN IS ONE DEGREE."
    0x58422bd5ffd0 ---------A   01180 GOTO 1430
    0x58422bd600f0 ---------A T 01190 PRINT"MAX. ELEVATION OF GUN IS 89 DEGREES."
    0x58422bd60180 ---------A   01200 GOTO 1430
    0x58422bd60660 ---------A T 01210 PRINT"OVER TARGET BY";ABS(E);"YARDS."
    0x58422bd606f0 ---------A   01220 GOTO 1430
    0x58422bd60b10 ---------A T 01230 PRINT"SHORT OF TARGET BY";ABS(E);"YARDS."
    0x58422bd60b80 ---------A   01240 GOTO 1430
    0x58422bd60c10 ---------A T 01250 GOTO 1260
    0x58422bd60f30 ---------A T 01260 PRINT"***TARGET DESTROYED***  ";S;"ROUNDS EXPENDED"
    0x58422bd60fa0 ---------A   01270 PRINT
    0x58422bd61010 ---------A   01280 PRINT
    0x58422bd61080 ---------A   01290 PRINT
    0x58422bd610f0 ---------A   01300 PRINT
    0x58422bd61160 ---------A   01310 PRINT
    0x58422bd611d0 ---------A   01320 PRINT
    0x58422bd61450 ---------A   01330 PRINT
    0x58422bd614c0 ---------A   01340 PRINT
    0x58422bd61530 ---------A   01350 PRINT
    0x58422bd615a0 ---------A   01360 PRINT
    0x58422bd61610 ---------A   01370 PRINT
    0x58422bd616b0 ---------A   01380 PRINT
    0x58422bd61820 ---------A   01390 PRINT"THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY."
    0x58422bd618b0 ---------A   01400 GOTO 1140
    0x58422bd61cb0 ---------A T 01410 PRINT"   DISTANCE TO THE TARGET IS";INT(T);"YARDS"
    0x58422bd61d20 ---------A   01420 PRINT
    0x58422bd61d90 ---------A T 01430 PRINT
    0x58422bd61f00 ---------A   01440 PRINT"ELEVATION:";
    0x58422bd57610 ---------A   01450 INPUT B!
    0x58422bd575b0 ---------A   01460 IF B!>89 THEN 1190
    0x58422bd62510 ---------A   01470 IF B!<1 THEN 1170
    0x58422bd62850 ---------A   01480 LET S=S+1
    0x58422bd62d20 ---------A   01490 LET B2=2*B!/57.3
    0x58422bd631f0 ---------A   01500 LET I=46500*SIN(B2)
    0x58422bd63540 ---------A   01510 LET X=T-I
    0x58422bd63830 ---------A   01520 LET E=INT(X)
    0x58422bd63b60 ---------A   01530 IF ABS(E)<100 THEN 1250
    0x58422bd63dd0 ---------A   01540 IF E>100 THEN 1230
    0x58422bd64030 ---------A   01550 IF E<-100 THEN 1210
    0x58422bd64090 ---------A   01560 END
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
float  B_flt;                                     // Basic: B! 
float  B2_flt;                                    // Basic: B2 
float  E_flt;                                     // Basic: E 
float  I_flt;                                     // Basic: I 
float  S_flt;                                     // Basic: S 
float  T_flt;                                     // Basic: T 
float  X_flt;                                     // Basic: X 
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
    // 01000 PRINT "DATALINE SYSTEMS LIMITED  25-JULY-70"
    b2c_printf("Dataline systems limited  25-july-70\n");
    // 01010 PRINT "B A S I C  USER LIBRARY PROGRAM--GUNNER"
    b2c_printf("B a s i c  user library program--gunner\n");
    // 01020 PRINT"THIS TIME-SHARING DEMONSTRATION SIMULATES"
    b2c_printf("This time-sharing demonstration simulates\n");
    // 01030 PRINT"THE RESULTS OF FIRING A FIELD ARTILLERY WEAPON."
    b2c_printf("The results of firing a field artillery weapon.\n");
    // 01040 PRINT
    b2c_printf("\n");
    // 01050 PRINT"YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO THE GUN"
    b2c_printf("You are the officer-in-charge, giving orders to the gun\n");
    // 01060 PRINT"CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    b2c_printf("Crew, telling them the degrees of elevation you estimate\n");
    // 01070 PRINT"WILL PLACE THE PROJECTILE ON TARGET. A HIT WITHIN 100"
    b2c_printf("Will place the projectile on target. A hit within 100\n");
    // 01080 PRINT"YARDS OF THE TARGET WILL DESTROY IT."
    b2c_printf("Yards of the target will destroy it.\n");
    // 01090 PRINT
    b2c_printf("\n");
    // 01100 PRINT"MAXIMUM RANGE OF YOUR GUN IS 46500 YARDS."
    b2c_printf("Maximum range of your gun is 46500 yards.\n");
    // 01110 REM T=DISTANCE TO TARGET
    // 01120 REM I=DISTANCE OF SHOT
    // 01130 REM E=DISTANCE OVER(NEGATIVE), OR UNDER (POSITIVE) TARGET

  Lbl_01140:
    // 01140 LET T=43000-30000*RND(X)
    T_flt = 43000-30000*RND(X_flt);
    // 01150 LET S=0
    S_flt = 0;
    // 01160 GOTO 1410
    goto Lbl_01410;

  Lbl_01170:
    // 01170 PRINT"MIN. ELEVTION OF GUN IS ONE DEGREE."
    b2c_printf("Min. Elevtion of gun is one degree.\n");
    // 01180 GOTO 1430
    goto Lbl_01430;

  Lbl_01190:
    // 01190 PRINT"MAX. ELEVATION OF GUN IS 89 DEGREES."
    b2c_printf("Max. Elevation of gun is 89 degrees.\n");
    // 01200 GOTO 1430
    goto Lbl_01430;

  Lbl_01210:
    // 01210 PRINT"OVER TARGET BY";ABS(E);"YARDS."
    b2c_printf("Over target byYards.\n");
    // 01220 GOTO 1430
    goto Lbl_01430;

  Lbl_01230:
    // 01230 PRINT"SHORT OF TARGET BY";ABS(E);"YARDS."
    b2c_printf("Short of target byYards.\n");
    // 01240 GOTO 1430
    goto Lbl_01430;

  Lbl_01250:
    // 01250 GOTO 1260
    goto Lbl_01260;

  Lbl_01260:
    // 01260 PRINT"***TARGET DESTROYED***  ";S;"ROUNDS EXPENDED"
    b2c_printf("***target destroyed***   %.2f ***target destroyed***  Rounds expended\n",S_flt);
    // 01270 PRINT
    b2c_printf("\n");
    // 01280 PRINT
    b2c_printf("\n");
    // 01290 PRINT
    b2c_printf("\n");
    // 01300 PRINT
    b2c_printf("\n");
    // 01310 PRINT
    b2c_printf("\n");
    // 01320 PRINT
    b2c_printf("\n");
    // 01330 PRINT
    b2c_printf("\n");
    // 01340 PRINT
    b2c_printf("\n");
    // 01350 PRINT
    b2c_printf("\n");
    // 01360 PRINT
    b2c_printf("\n");
    // 01370 PRINT
    b2c_printf("\n");
    // 01380 PRINT
    b2c_printf("\n");
    // 01390 PRINT"THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY."
    b2c_printf("The forward observer has sighted more enemy activity.\n");
    // 01400 GOTO 1140
    goto Lbl_01140;

  Lbl_01410:
    // 01410 PRINT"   DISTANCE TO THE TARGET IS";INT(T);"YARDS"
    b2c_printf("   distance to the target isYards\n");
    // 01420 PRINT
    b2c_printf("\n");

  Lbl_01430:
    // 01430 PRINT
    b2c_printf("\n");
    // 01440 PRINT"ELEVATION:";
    b2c_printf("Elevation:");
    // 01450 INPUT B!
    // Start of Basic INPUT statement 01450
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtof(&B_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01450
    // 01460 IF B!>89 THEN 1190
    if(B_flt>89)goto Lbl_01190;
    // 01470 IF B!<1 THEN 1170
    if(B_flt<1)goto Lbl_01170;
    // 01480 LET S=S+1
    S_flt = S_flt+1;
    // 01490 LET B2=2*B!/57.3
    B2_flt = 2*B_flt/57.3;
    // 01500 LET I=46500*SIN(B2)
    I_flt = 46500*SIN(B2_flt);
    // 01510 LET X=T-I
    X_flt = T_flt-I_flt;
    // 01520 LET E=INT(X)
    E_flt = INT(X_flt);
    // 01530 IF ABS(E)<100 THEN 1250
    if(ABS(E_flt)<100)goto Lbl_01250;
    // 01540 IF E>100 THEN 1230
    if(E_flt>100)goto Lbl_01230;
    // 01550 IF E<-100 THEN 1210
    if(E_flt<-100)goto Lbl_01210;
    // 01560 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
