/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/depth.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x561df1345c90 ---------A   01000 PRINT "DEPTH CHARGE GAME" 
    0x561df1344ac0 ---------A T 01010 PRINT
    0x561df1345e10 ---------A   01020 PRINT "DIMENSION OF SEARCH AREA"; 
    0x561df1343610 ---------A   01030 INPUT G
    0x561df1345d50 ---------A   01040 PRINT
    0x561df1345f90 ---------A   01050 N=INT(LOG(G)/LOG(2))+1 
    0x561df1343940 ---------A   01060 RANDOMIZE
    0x561df1343ff0 ---------A   01070 PRINT "YOU ARE CAPTAIN OF THE DESTROYER USS DIGITAL AND AN ENEMY SUB HAS"
    0x561df1343730 ---------A   01080 PRINT "BEEN CAUSING  YOU  TROUBLE,  YOUR MISSION  IS TO DESTROY IT.  YOU"
    0x561df13480d0 ---------A   01090 PRINT "HAVE "N" SHOTS.  SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A TRIO "
    0x561df1348250 ---------A   01100 PRINT "OF NUMBERS (DISTANCE NORTH, DISTANCE EAST, DEPTH FROM SURFACE)."
    0x561df13482a0 ---------A   01110 PRINT 
    0x561df13483f0 ---------A   01120 PRINT "GOOD LUCK !" 
    0x561df1348460 ---------A   01130 PRINT
    0x561df134caa0 ---------A   01140 A=INT(G*RND) 
    0x561df134cf70 ---------A   01150 B=INT(G*RND) 
    0x561df134d460 ---------A   01160 C=INT(G*RND)
    0x561df134d810 ---------A   01170 FOR D=1 TO N 
    0x561df134d8a0 ---------A   01180 PRINT 
    0x561df134db10 ---------A   01190 PRINT "TRIAL NUMBER ";D 
    0x561df134dc90 ---------A   01200 PRINT "ENTER COORDINATES (N,E,D) : ";
    0x561df134e200 ---------A   01210 INPUT Y,X,Z
    0x561df134eca0 ---------A   01220 IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 1300
    0x561df134ed20 ---------A   01230 GOSUB 1390
    0x561df134ed80 ---------A   01240 PRINT 
    0x561df134eeb0 ---------A   01250 NEXT D
    0x561df134ef50 ---------A   01260 PRINT 
    0x561df134f0e0 ---------A   01270 PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    0x561df134f730 ---------A   01280 PRINT "THE SUBMARINE WAS AT ";B,",";A,",";C
    0x561df134f7a0 ---------A   01290 GOTO 1340
    0x561df134f820 ---------A T 01300 PRINT 
    0x561df134fb80 ---------A   01310 PRINT "B O O M ! !  YOU FOUND IT IN ";D;"TRIES!"
    0x561df134fbf0 ---------A   01320 PRINT 
    0x561df134fe80 ---------A   01330 PRINT 
    0x561df134fff0 ---------A T 01340 PRINT "ANOTHER GAME (Y OR N)";
    0x561df1350210 ---------A   01350 INPUT A$
    0x561df13504b0 ---------A   01360 IF A$="Y" THEN 1010
    0x561df1350620 ---------A   01370 PRINT "OK.  HOPE YOU ENJOYED YOURSELF " 
    0x561df13506a0 ---------A   01380 GOTO 1650
    0x561df1350810 ---------B G 01390 PRINT "SONAR REPORTS SHOT WAS ";
    0x561df1350a80 ---------B   01400 IF Y>B THEN 1470
    0x561df1350d00 ---------B   01410 IF Y<B THEN 1490
    0x561df1350f80 ---------B T 01420 IF X>A THEN 1510
    0x561df1351200 ---------B   01430 IF X<A THEN 1530
    0x561df1351480 ---------B T 01440 IF Y<>B THEN 1550
    0x561df1351700 ---------B   01450 IF X<>A THEN 1550
    0x561df1351780 ---------B   01460 GOTO 1560
    0x561df13518e0 ---------B T 01470 PRINT "NORTH";
    0x561df1351950 ---------B   01480 GOTO 1420
    0x561df1351ab0 ---------B T 01490 PRINT "SOUTH";
    0x561df1351b20 ---------B   01500 GOTO 1420
    0x561df1351c80 ---------B T 01510 PRINT "EAST";
    0x561df1351cf0 ---------B   01520 GOTO 1440
    0x561df1351e50 ---------B T 01530 PRINT "WEST";
    0x561df1351ec0 ---------B   01540 GOTO 1440
    0x561df1352020 ---------B T 01550 PRINT " AND ";
    0x561df1352290 ---------B T 01560 IF Z>C THEN 1590
    0x561df1352510 ---------B   01570 IF Z<C THEN 1610
    0x561df1352790 ---------B   01580 IF Z=C THEN 1630
    0x561df13528f0 ---------B T 01590 PRINT "TOO LOW"
    0x561df1352960 ---------B   01600 GOTO 1640
    0x561df1352aa0 ---------B T 01610 PRINT "TOO HIGH"
    0x561df1352b10 ---------B   01620 GOTO 1640
    0x561df1352c50 ---------B T 01630 PRINT "DEPTH OK"
    0x561df1352ca0 ---------B T 01640 RETURN
    0x561df1353110 ---------A T 01650 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01010      01360T
     01300      01220T
     01340      01290T
     01390      01230G
     01420      01480T, 01500T
     01440      01520T, 01540T
     01470      01400T
     01490      01410T
     01510      01420T
     01530      01430T
     01550      01440T, 01450T
     01560      01460T
     01590      01560T
     01610      01570T
     01630      01580T
     01640      01600T, 01620T
     01650      01380T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x561df1345c90 (01000)   0x000000000000 (00000)   0x561df1353110 (01650)   0x561df1353110 (01650)   
   B) 0x561df1350810 (01390)   0x561df1350810 (01390)   0x561df1352ca0 (01640)   0x561df1352ca0 (01640)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01670 - 10000    8340 

 */



/*
 *  Symbol Table Listing for 'basic/depth.bas'
 *
    A                        Float       
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Float       
    C                        Float       
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Float       
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
    N                        Float       
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
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Float       
    Y                        Float       
    Z                        Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/depth.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x561df1345c90 ---------A   01000 PRINT "DEPTH CHARGE GAME" 
    0x561df1344ac0 ---------A T 01010 PRINT
    0x561df1345e10 ---------A   01020 PRINT "DIMENSION OF SEARCH AREA"; 
    0x561df1343610 ---------A   01030 INPUT G
    0x561df1345d50 ---------A   01040 PRINT
    0x561df1345f90 ---------A   01050 N=INT(LOG(G)/LOG(2))+1 
    0x561df1343940 ---------A   01060 RANDOMIZE
    0x561df1343ff0 ---------A   01070 PRINT "YOU ARE CAPTAIN OF THE DESTROYER USS DIGITAL AND AN ENEMY SUB HAS"
    0x561df1343730 ---------A   01080 PRINT "BEEN CAUSING  YOU  TROUBLE,  YOUR MISSION  IS TO DESTROY IT.  YOU"
    0x561df13480d0 ---------A   01090 PRINT "HAVE "N" SHOTS.  SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A TRIO "
    0x561df1348250 ---------A   01100 PRINT "OF NUMBERS (DISTANCE NORTH, DISTANCE EAST, DEPTH FROM SURFACE)."
    0x561df13482a0 ---------A   01110 PRINT 
    0x561df13483f0 ---------A   01120 PRINT "GOOD LUCK !" 
    0x561df1348460 ---------A   01130 PRINT
    0x561df134caa0 ---------A   01140 A=INT(G*RND) 
    0x561df134cf70 ---------A   01150 B=INT(G*RND) 
    0x561df134d460 ---------A   01160 C=INT(G*RND)
    0x561df134d810 ---------A   01170 FOR D=1 TO N 
    0x561df134d8a0 ---------A   01180 PRINT 
    0x561df134db10 ---------A   01190 PRINT "TRIAL NUMBER ";D 
    0x561df134dc90 ---------A   01200 PRINT "ENTER COORDINATES (N,E,D) : ";
    0x561df134e200 ---------A   01210 INPUT Y,X,Z
    0x561df134eca0 ---------A   01220 IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 1300
    0x561df134ed20 ---------A   01230 GOSUB 1400
    0x561df134ed80 ---------A   01240 PRINT 
    0x561df134eeb0 ---------A   01250 NEXT D
    0x561df134ef50 ---------A   01260 PRINT 
    0x561df134f0e0 ---------A   01270 PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    0x561df134f730 ---------A   01280 PRINT "THE SUBMARINE WAS AT ";B,",";A,",";C
    0x561df134f7a0 ---------A   01290 GOTO 1340
    0x561df134f820 ---------A T 01300 PRINT 
    0x561df134fb80 ---------A   01310 PRINT "B O O M ! !  YOU FOUND IT IN ";D;"TRIES!"
    0x561df134fbf0 ---------A   01320 PRINT 
    0x561df134fe80 ---------A   01330 PRINT 
    0x561df134fff0 ---------A T 01340 PRINT "ANOTHER GAME (Y OR N)";
    0x561df1350210 ---------A   01350 INPUT A$
    0x561df13504b0 ---------A   01360 IF A$="Y" THEN 1010
    0x561df1350620 ---------A   01370 PRINT "OK.  HOPE YOU ENJOYED YOURSELF " 
    0x561df13506a0 ---------A   01380 GOTO 1390
    0x561df1353110 ---------A T 01390 END
    0x561df1350810 ---------B G 01400 PRINT "SONAR REPORTS SHOT WAS ";
    0x561df1350a80 ---------B   01410 IF Y>B THEN 1480
    0x561df1350d00 ---------B   01420 IF Y<B THEN 1500
    0x561df1350f80 ---------B T 01430 IF X>A THEN 1520
    0x561df1351200 ---------B   01440 IF X<A THEN 1540
    0x561df1351480 ---------B T 01450 IF Y<>B THEN 1560
    0x561df1351700 ---------B   01460 IF X<>A THEN 1560
    0x561df1351780 ---------B   01470 GOTO 1570
    0x561df13518e0 ---------B T 01480 PRINT "NORTH";
    0x561df1351950 ---------B   01490 GOTO 1430
    0x561df1351ab0 ---------B T 01500 PRINT "SOUTH";
    0x561df1351b20 ---------B   01510 GOTO 1430
    0x561df1351c80 ---------B T 01520 PRINT "EAST";
    0x561df1351cf0 ---------B   01530 GOTO 1450
    0x561df1351e50 ---------B T 01540 PRINT "WEST";
    0x561df1351ec0 ---------B   01550 GOTO 1450
    0x561df1352020 ---------B T 01560 PRINT " AND ";
    0x561df1352290 ---------B T 01570 IF Z>C THEN 1600
    0x561df1352510 ---------B   01580 IF Z<C THEN 1620
    0x561df1352790 ---------B   01590 IF Z=C THEN 1640
    0x561df13528f0 ---------B T 01600 PRINT "TOO LOW"
    0x561df1352960 ---------B   01610 GOTO 1650
    0x561df1352aa0 ---------B T 01620 PRINT "TOO HIGH"
    0x561df1352b10 ---------B   01630 GOTO 1650
    0x561df1352c50 ---------B T 01640 PRINT "DEPTH OK"
    0x561df1355cf0 ---------B T 01650 GOTO 01660
    0x561df1355d30 ---------B T 01660 RETURN
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
float  A_flt;                                     // Basic: A 
char*  A_str;                                     // Basic: A$ 
float  B_flt;                                     // Basic: B 
float  C_flt;                                     // Basic: C 
float  D_flt;                                     // Basic: D 
float  G_flt;                                     // Basic: G 
float  N_flt;                                     // Basic: N 
float  X_flt;                                     // Basic: X 
float  Y_flt;                                     // Basic: Y 
float  Z_flt;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void SonarReport();

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
// Routine B
//---------------------------------------------------------------------------

void SonarReport(){
    // 01400 PRINT "SONAR REPORTS SHOT WAS ";
    b2c_printf("Sonar reports shot was ");
    // 01410 IF Y>B THEN 1480
    if(Y_flt>B_flt)goto Err_North;
    // 01420 IF Y<B THEN 1500
    if(Y_flt<B_flt)goto Err_South;

  Sonar_Test_East:
    // 01430 IF X>A THEN 1520
    if(X_flt>A_flt)goto Err_East;
    // 01440 IF X<A THEN 1540
    if(X_flt<A_flt)goto Err_West;

  Test_For_Conjunction:
    // 01450 IF Y<>B THEN 1560
    if(Y_flt!=B_flt)goto Add_Conjunction;
    // 01460 IF X<>A THEN 1560
    if(X_flt!=A_flt)goto Add_Conjunction;
    // 01470 GOTO 1570
    goto Sonar_Test_Depth;

  Err_North:
    // 01480 PRINT "NORTH";
    b2c_printf("North");
    // 01490 GOTO 1430
    goto Sonar_Test_East;

  Err_South:
    // 01500 PRINT "SOUTH";
    b2c_printf("South");
    // 01510 GOTO 1430
    goto Sonar_Test_East;

  Err_East:
    // 01520 PRINT "EAST";
    b2c_printf("East");
    // 01530 GOTO 1450
    goto Test_For_Conjunction;

  Err_West:
    // 01540 PRINT "WEST";
    b2c_printf("West");
    // 01550 GOTO 1450
    goto Test_For_Conjunction;

  Add_Conjunction:
    // 01560 PRINT " AND ";
    b2c_printf(" and ");

  Sonar_Test_Depth:
    // 01570 IF Z>C THEN 1600
    if(Z_flt>C_flt)goto Err_Low;
    // 01580 IF Z<C THEN 1620
    if(Z_flt<C_flt)goto Err_High;
    // 01590 IF Z=C THEN 1640
    if(Z_flt==C_flt)goto Err_DepthOK;

  Err_Low:
    // 01600 PRINT "TOO LOW"
    b2c_printf("Too low\n");
    // 01610 GOTO 1650
    goto Sonar_Report_Complete;

  Err_High:
    // 01620 PRINT "TOO HIGH"
    b2c_printf("Too high\n");
    // 01630 GOTO 1650
    goto Sonar_Report_Complete;

  Err_DepthOK:
    // 01640 PRINT "DEPTH OK"
    b2c_printf("Depth ok\n");

  Sonar_Report_Complete:
    // 01650 GOTO 01660
    goto Lbl_01660;

  Lbl_01660:
    // 01660 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT "DEPTH CHARGE GAME" 
    b2c_printf("Depth charge game\n");

  StartGame:
    // 01010 PRINT
    b2c_printf("\n");
    // 01020 PRINT "DIMENSION OF SEARCH AREA"; 
    b2c_printf("Dimension of search area");
    // 01030 INPUT G
    // Start of Basic INPUT statement 01030
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtof(&G_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01030
    // 01040 PRINT
    b2c_printf("");
    // 01050 N=INT(LOG(G)/LOG(2))+1 
    N_flt = INT(LOG(G_flt)/LOG(2))+1;
    // 01060 RANDOMIZE
    RANDOMIZE();
    // 01070 PRINT "YOU ARE CAPTAIN OF THE DESTROYER USS DIGITAL AND AN ENEMY SUB HAS"
    b2c_printf("You are captain of the destroyer uss digital and an enemy sub has\n");
    // 01080 PRINT "BEEN CAUSING  YOU  TROUBLE,  YOUR MISSION  IS TO DESTROY IT.  YOU"
    b2c_printf("Been causing  you  trouble,  your mission  is to destroy it.  You\n");
    // 01090 PRINT "HAVE "N" SHOTS.  SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A TRIO "
    b2c_printf("Have  %.2f Have  shots.  Specify depth charge explosion point with a trio \n",N_flt);
    // 01100 PRINT "OF NUMBERS (DISTANCE NORTH, DISTANCE EAST, DEPTH FROM SURFACE)."
    b2c_printf("Of numbers (distance north, distance east, depth from surface).\n");
    // 01110 PRINT 
    b2c_printf("\n");
    // 01120 PRINT "GOOD LUCK !" 
    b2c_printf("Good luck !\n");
    // 01130 PRINT
    b2c_printf("\n");
    // 01140 A=INT(G*RND) 
    A_flt = INT(G_flt*RND());
    // 01150 B=INT(G*RND) 
    B_flt = INT(G_flt*RND());
    // 01160 C=INT(G*RND)
    C_flt = INT(G_flt*RND());
    // 01170 FOR D=1 TO N 
    for(D_flt=1;D_flt<=N_flt;D_flt++){
        // 01180 PRINT 
        b2c_printf("\n");
        // 01190 PRINT "TRIAL NUMBER ";D 
        b2c_printf("Trial number  %.2f \n",D_flt);
        // 01200 PRINT "ENTER COORDINATES (N,E,D) : ";
        b2c_printf("Enter coordinates (n,e,d) : ");
        // 01210 INPUT Y,X,Z
        // Start of Basic INPUT statement 01210
        {
            int numargs=3;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtof(&Y_flt,args,0)) ||
                    (err += b2c_strtof(&X_flt,args,1)) ||
                    (err += b2c_strtof(&Z_flt,args,2)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01210
        // 01220 IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 1300
        if(ABS(X_flt-A_flt)+ABS(Y_flt-B_flt)+ABS(Z_flt-C_flt)==0)goto SubmarineHit;
        // 01230 GOSUB 1400
        SonarReport();
        // 01240 PRINT 
        b2c_printf("\n");
        // 01250 NEXT D
        int dummy_1250=0; // Ignore this line.
    }; // End-For(D_flt)
    // 01260 PRINT 
    b2c_printf("\n");
    // 01270 PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    b2c_printf("You have been torpedoed!  Abandon ship!\n");
    // 01280 PRINT "THE SUBMARINE WAS AT ";B,",";A,",";C
    b2c_printf("The submarine was at  %.2f The submarine was at ,, %.2f ,,, %.2f \n",B_flt,A_flt,C_flt);
    // 01290 GOTO 1340
    goto QAnotherGame;

  SubmarineHit:
    // 01300 PRINT 
    b2c_printf("\n");
    // 01310 PRINT "B O O M ! !  YOU FOUND IT IN ";D;"TRIES!"
    b2c_printf("B o o m ! !  You found it in  %.2f B o o m ! !  You found it in Tries!\n",D_flt);
    // 01320 PRINT 
    b2c_printf("\n");
    // 01330 PRINT 
    b2c_printf("\n");

  QAnotherGame:
    // 01340 PRINT "ANOTHER GAME (Y OR N)";
    b2c_printf("Another game (y or n)");
    // 01350 INPUT A$
    // Start of Basic INPUT statement 01350
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01350
    // 01360 IF A$="Y" THEN 1010
    if(strcmp(A_str,"Y")==0)goto StartGame;
    // 01370 PRINT "OK.  HOPE YOU ENJOYED YOURSELF " 
    b2c_printf("Ok.  Hope you enjoyed yourself \n");
    // 01380 GOTO 1390
    goto ExitGame;

  ExitGame:
    // 01390 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
