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
    0x560dfcae0db0 ---------A   01000 PRINT "DATALINE SYSTEMS LIMITED  25-JULY-70"
    0x560dfcadfb80 ---------A   01010 PRINT "B A S I C  USER LIBRARY PROGRAM--GUNNER"
    0x560dfcae0e70 ---------A   01020 PRINT"THIS TIME-SHARING DEMONSTRATION SIMULATES"
    0x560dfcae0ff0 ---------A   01030 PRINT"THE RESULTS OF FIRING A FIELD ARTILLERY WEAPON."
    0x560dfcae0620 ---------A   01040 PRINT
    0x560dfcae0af0 ---------A   01050 PRINT"YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO THE GUN"
    0x560dfcadee40 ---------A   01060 PRINT"CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    0x560dfcadf500 ---------A   01070 PRINT"WILL PLACE THE PROJECTILE ON TARGET. A HIT WITHIN 100"
    0x560dfcadebe0 ---------A   01080 PRINT"YARDS OF THE TARGET WILL DESTROY IT."
    0x560dfcade9e0 ---------A   01090 PRINT
    0x560dfcadecb0 ---------A   01100 PRINT"MAXIMUM RANGE OF YOUR GUN IS 46500 YARDS."
    0x560dfcae11c0 ---------A   01110 REM T=DISTANCE TO TARGET
    0x560dfcae1200 ---------A   01120 REM I=DISTANCE OF SHOT
    0x560dfcadf670 ---------A   01130 REM E=DISTANCE OVER(NEGATIVE), OR UNDER (POSITIVE) TARGET
    0x560dfcae6c00 ---------A T 01140 LET T=43000-30000*RND(X)
    0x560dfcae6e70 ---------A   01150 LET S=0
    0x560dfcae6f00 ---------A   01160 GOTO 1410
    0x560dfcae7000 ---------A T 01170 PRINT"MIN. ELEVTION OF GUN IS ONE DEGREE."
    0x560dfcae7090 ---------A   01180 GOTO 1430
    0x560dfcae71b0 ---------A T 01190 PRINT"MAX. ELEVATION OF GUN IS 89 DEGREES."
    0x560dfcae7240 ---------A   01200 GOTO 1430
    0x560dfcae7720 ---------A T 01210 PRINT"OVER TARGET BY";ABS(E);"YARDS."
    0x560dfcae77b0 ---------A   01220 GOTO 1430
    0x560dfcae7bd0 ---------A T 01230 PRINT"SHORT OF TARGET BY";ABS(E);"YARDS."
    0x560dfcae7c40 ---------A   01240 GOTO 1430
    0x560dfcae7cd0 ---------A T 01250 GOTO 1260
    0x560dfcae7ff0 ---------A T 01260 PRINT"***TARGET DESTROYED***  ";S;"ROUNDS EXPENDED"
    0x560dfcae8060 ---------A   01270 PRINT
    0x560dfcae80d0 ---------A   01280 PRINT
    0x560dfcae8140 ---------A   01290 PRINT
    0x560dfcae81b0 ---------A   01300 PRINT
    0x560dfcae8220 ---------A   01310 PRINT
    0x560dfcae8290 ---------A   01320 PRINT
    0x560dfcae8510 ---------A   01330 PRINT
    0x560dfcae8580 ---------A   01340 PRINT
    0x560dfcae85f0 ---------A   01350 PRINT
    0x560dfcae8660 ---------A   01360 PRINT
    0x560dfcae86d0 ---------A   01370 PRINT
    0x560dfcae8770 ---------A   01380 PRINT
    0x560dfcae88e0 ---------A   01390 PRINT"THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY."
    0x560dfcae8970 ---------A   01400 GOTO 1140
    0x560dfcae8d70 ---------A T 01410 PRINT"   DISTANCE TO THE TARGET IS";INT(T);"YARDS"
    0x560dfcae8de0 ---------A   01420 PRINT
    0x560dfcae8e50 ---------A T 01430 PRINT
    0x560dfcae8fc0 ---------A   01440 PRINT"ELEVATION:";
    0x560dfcade6d0 ---------A   01450 INPUT B!
    0x560dfcade670 ---------A   01460 IF B!>89 THEN 1190
    0x560dfcae95d0 ---------A   01470 IF B!<1 THEN 1170
    0x560dfcae9910 ---------A   01480 LET S=S+1
    0x560dfcae9de0 ---------A   01490 LET B2=2*B!/57.3
    0x560dfcaea2b0 ---------A   01500 LET I=46500*SIN(B2)
    0x560dfcaea600 ---------A   01510 LET X=T-I
    0x560dfcaea8f0 ---------A   01520 LET E=INT(X)
    0x560dfcaeac20 ---------A   01530 IF ABS(E)<100 THEN 1250
    0x560dfcaeae90 ---------A   01540 IF E>100 THEN 1230
    0x560dfcaeb0f0 ---------A   01550 IF E<-100 THEN 1210
    0x560dfcaeb150 ---------A   01560 END
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
   A) 0x560dfcae0db0 (01000)   0x560dfcae0db0 (01000)   0x560dfcaeb150 (01560)   0x560dfcaeb150 (01560)   


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
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     

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
    0x560dfcae0db0 ---------A   01000 PRINT "DATALINE SYSTEMS LIMITED  25-JULY-70"
    0x560dfcadfb80 ---------A   01010 PRINT "B A S I C  USER LIBRARY PROGRAM--GUNNER"
    0x560dfcae0e70 ---------A   01020 PRINT"THIS TIME-SHARING DEMONSTRATION SIMULATES"
    0x560dfcae0ff0 ---------A   01030 PRINT"THE RESULTS OF FIRING A FIELD ARTILLERY WEAPON."
    0x560dfcae0620 ---------A   01040 PRINT
    0x560dfcae0af0 ---------A   01050 PRINT"YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO THE GUN"
    0x560dfcadee40 ---------A   01060 PRINT"CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    0x560dfcadf500 ---------A   01070 PRINT"WILL PLACE THE PROJECTILE ON TARGET. A HIT WITHIN 100"
    0x560dfcadebe0 ---------A   01080 PRINT"YARDS OF THE TARGET WILL DESTROY IT."
    0x560dfcade9e0 ---------A   01090 PRINT
    0x560dfcadecb0 ---------A   01100 PRINT"MAXIMUM RANGE OF YOUR GUN IS 46500 YARDS."
    0x560dfcae11c0 ---------A   01110 REM T=DISTANCE TO TARGET
    0x560dfcae1200 ---------A   01120 REM I=DISTANCE OF SHOT
    0x560dfcadf670 ---------A   01130 REM E=DISTANCE OVER(NEGATIVE), OR UNDER (POSITIVE) TARGET
    0x560dfcae6c00 ---------A T 01140 LET T=43000-30000*RND(X)
    0x560dfcae6e70 ---------A   01150 LET S=0
    0x560dfcae6f00 ---------A   01160 GOTO 1410
    0x560dfcae7000 ---------A T 01170 PRINT"MIN. ELEVTION OF GUN IS ONE DEGREE."
    0x560dfcae7090 ---------A   01180 GOTO 1430
    0x560dfcae71b0 ---------A T 01190 PRINT"MAX. ELEVATION OF GUN IS 89 DEGREES."
    0x560dfcae7240 ---------A   01200 GOTO 1430
    0x560dfcae7720 ---------A T 01210 PRINT"OVER TARGET BY";ABS(E);"YARDS."
    0x560dfcae77b0 ---------A   01220 GOTO 1430
    0x560dfcae7bd0 ---------A T 01230 PRINT"SHORT OF TARGET BY";ABS(E);"YARDS."
    0x560dfcae7c40 ---------A   01240 GOTO 1430
    0x560dfcae7cd0 ---------A T 01250 GOTO 1260
    0x560dfcae7ff0 ---------A T 01260 PRINT"***TARGET DESTROYED***  ";S;"ROUNDS EXPENDED"
    0x560dfcae8060 ---------A   01270 PRINT
    0x560dfcae80d0 ---------A   01280 PRINT
    0x560dfcae8140 ---------A   01290 PRINT
    0x560dfcae81b0 ---------A   01300 PRINT
    0x560dfcae8220 ---------A   01310 PRINT
    0x560dfcae8290 ---------A   01320 PRINT
    0x560dfcae8510 ---------A   01330 PRINT
    0x560dfcae8580 ---------A   01340 PRINT
    0x560dfcae85f0 ---------A   01350 PRINT
    0x560dfcae8660 ---------A   01360 PRINT
    0x560dfcae86d0 ---------A   01370 PRINT
    0x560dfcae8770 ---------A   01380 PRINT
    0x560dfcae88e0 ---------A   01390 PRINT"THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY."
    0x560dfcae8970 ---------A   01400 GOTO 1140
    0x560dfcae8d70 ---------A T 01410 PRINT"   DISTANCE TO THE TARGET IS";INT(T);"YARDS"
    0x560dfcae8de0 ---------A   01420 PRINT
    0x560dfcae8e50 ---------A T 01430 PRINT
    0x560dfcae8fc0 ---------A   01440 PRINT"ELEVATION:";
    0x560dfcade6d0 ---------A   01450 INPUT B!
    0x560dfcade670 ---------A   01460 IF B!>89 THEN 1190
    0x560dfcae95d0 ---------A   01470 IF B!<1 THEN 1170
    0x560dfcae9910 ---------A   01480 LET S=S+1
    0x560dfcae9de0 ---------A   01490 LET B2=2*B!/57.3
    0x560dfcaea2b0 ---------A   01500 LET I=46500*SIN(B2)
    0x560dfcaea600 ---------A   01510 LET X=T-I
    0x560dfcaea8f0 ---------A   01520 LET E=INT(X)
    0x560dfcaeac20 ---------A   01530 IF ABS(E)<100 THEN 1250
    0x560dfcaeae90 ---------A   01540 IF E>100 THEN 1230
    0x560dfcaeb0f0 ---------A   01550 IF E<-100 THEN 1210
    0x560dfcaeb150 ---------A   01560 END
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
int    B2_int;                                    // Basic: B2 
int    E_int;                                     // Basic: E 
int    I_int;                                     // Basic: I 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
int    X_int;                                     // Basic: X 
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
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DATALINE SYSTEMS LIMITED  25-JULY-70");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT "B A S I C  USER LIBRARY PROGRAM--GUNNER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"B A S I C  USER LIBRARY PROGRAM--GUNNER");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT"THIS TIME-SHARING DEMONSTRATION SIMULATES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS TIME-SHARING DEMONSTRATION SIMULATES");strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT"THE RESULTS OF FIRING A FIELD ARTILLERY WEAPON."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE RESULTS OF FIRING A FIELD ARTILLERY WEAPON.");strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT"YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO THE GUN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE THE OFFICER-IN-CHARGE, GIVING ORDERS TO THE GUN");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT"CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CREW, TELLING THEM THE DEGREES OF ELEVATION YOU ESTIMATE");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT"WILL PLACE THE PROJECTILE ON TARGET. A HIT WITHIN 100"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WILL PLACE THE PROJECTILE ON TARGET. A HIT WITHIN 100");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT"YARDS OF THE TARGET WILL DESTROY IT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YARDS OF THE TARGET WILL DESTROY IT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT"MAXIMUM RANGE OF YOUR GUN IS 46500 YARDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MAXIMUM RANGE OF YOUR GUN IS 46500 YARDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 REM T=DISTANCE TO TARGET
    // 01120 REM I=DISTANCE OF SHOT
    // 01130 REM E=DISTANCE OVER(NEGATIVE), OR UNDER (POSITIVE) TARGET

  Lbl_01140:
    // 01140 LET T=43000-30000*RND(X)
    T_int = 43000-30000*RND(X_int);
    // 01150 LET S=0
    S_int = 0;
    // 01160 GOTO 1410
    goto Lbl_01410;

  Lbl_01170:
    // 01170 PRINT"MIN. ELEVTION OF GUN IS ONE DEGREE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MIN. ELEVTION OF GUN IS ONE DEGREE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 GOTO 1430
    goto Lbl_01430;

  Lbl_01190:
    // 01190 PRINT"MAX. ELEVATION OF GUN IS 89 DEGREES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MAX. ELEVATION OF GUN IS 89 DEGREES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 GOTO 1430
    goto Lbl_01430;

  Lbl_01210:
    // 01210 PRINT"OVER TARGET BY";ABS(E);"YARDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OVER TARGET BY");b2c_INT(buf,ABS(E_int));strcat(buf,"YARDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 GOTO 1430
    goto Lbl_01430;

  Lbl_01230:
    // 01230 PRINT"SHORT OF TARGET BY";ABS(E);"YARDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SHORT OF TARGET BY");b2c_INT(buf,ABS(E_int));strcat(buf,"YARDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 GOTO 1430
    goto Lbl_01430;

  Lbl_01250:
    // 01250 GOTO 1260
    goto Lbl_01260;

  Lbl_01260:
    // 01260 PRINT"***TARGET DESTROYED***  ";S;"ROUNDS EXPENDED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"***TARGET DESTROYED***  "); b2c_INT(buf,S_int);strcat(buf,"ROUNDS EXPENDED");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01290 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01300 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01310 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01320 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01350 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01360 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01370 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01380 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01390 PRINT"THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE FORWARD OBSERVER HAS SIGHTED MORE ENEMY ACTIVITY.");strcat(buf,"\n");fputs(buf,fh); };
    // 01400 GOTO 1140
    goto Lbl_01140;

  Lbl_01410:
    // 01410 PRINT"   DISTANCE TO THE TARGET IS";INT(T);"YARDS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   DISTANCE TO THE TARGET IS");b2c_INT(buf,INT(T_int));strcat(buf,"YARDS");strcat(buf,"\n");fputs(buf,fh); };
    // 01420 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01430:
    // 01430 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01440 PRINT"ELEVATION:";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ELEVATION:");fputs(buf,fh); };
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
    S_int = S_int+1;
    // 01490 LET B2=2*B!/57.3
    B2_int = 2*B_flt/57.3;
    // 01500 LET I=46500*SIN(B2)
    I_int = 46500*SIN(B2_int);
    // 01510 LET X=T-I
    X_int = T_int-I_int;
    // 01520 LET E=INT(X)
    E_int = INT(X_int);
    // 01530 IF ABS(E)<100 THEN 1250
    if(ABS(E_int)<100)goto Lbl_01250;
    // 01540 IF E>100 THEN 1230
    if(E_int>100)goto Lbl_01230;
    // 01550 IF E<-100 THEN 1210
    if(E_int<-100)goto Lbl_01210;
    // 01560 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
