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
int    Submarine_East;                            // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    Submarine_North;                           // Basic: B 
int    Submarine_Depth;                           // Basic: C 
int    Turn;                                      // Basic: D 
int    VolSide;                                   // Basic: G 
int    NumTurns;                                  // Basic: N 
int    Grid_East;                                 // Basic: X 
int    Grid_North;                                // Basic: Y 
int    Grid_Depth;                                // Basic: Z 
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
    if(Grid_North>Submarine_North)goto Err_North;
    // 01420 IF Y<B THEN 1500
    if(Grid_North<Submarine_North)goto Err_South;

  Sonar_Test_East:
    // 01430 IF X>A THEN 1520
    if(Grid_East>Submarine_East)goto Err_East;
    // 01440 IF X<A THEN 1540
    if(Grid_East<Submarine_East)goto Err_West;

  Test_For_Conjunction:
    // 01450 IF Y<>B THEN 1560
    if(Grid_North!=Submarine_North)goto Add_Conjunction;
    // 01460 IF X<>A THEN 1560
    if(Grid_East!=Submarine_East)goto Add_Conjunction;
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
    if(Grid_Depth>Submarine_Depth)goto Err_Low;
    // 01580 IF Z<C THEN 1620
    if(Grid_Depth<Submarine_Depth)goto Err_High;
    // 01590 IF Z=C THEN 1640
    if(Grid_Depth==Submarine_Depth)goto Err_DepthOK;

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
    b2c_printf("");
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
                (err += b2c_strtoi(&VolSide,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01030
    // 01040 PRINT
    b2c_printf("");
    // 01050 N=INT(LOG(G)/LOG(2))+1 
    NumTurns = INT(LOG(VolSide)/LOG(2))+1;
    // 01060 RANDOMIZE
    RANDOMIZE();
    // 01070 PRINT "YOU ARE CAPTAIN OF THE DESTROYER USS DIGITAL AND AN ENEMY SUB HAS"
    b2c_printf("You are captain of the destroyer uss digital and an enemy sub has\n");
    // 01080 PRINT "BEEN CAUSING  YOU  TROUBLE,  YOUR MISSION  IS TO DESTROY IT.  YOU"
    b2c_printf("Been causing  you  trouble,  your mission  is to destroy it.  You\n");
    // 01090 PRINT "HAVE "N" SHOTS.  SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A TRIO "
    b2c_printf("Have  %d Have  shots.  Specify depth charge explosion point with a trio \n",NumTurns);
    // 01100 PRINT "OF NUMBERS (DISTANCE NORTH, DISTANCE EAST, DEPTH FROM SURFACE)."
    b2c_printf("Of numbers (distance north, distance east, depth from surface).\n");
    // 01110 PRINT 
    b2c_printf("");
    // 01120 PRINT "GOOD LUCK !" 
    b2c_printf("Good luck !\n");
    // 01130 PRINT
    b2c_printf("");
    // 01140 A=INT(G*RND) 
    Submarine_East = INT(VolSide*RND());
    // 01150 B=INT(G*RND) 
    Submarine_North = INT(VolSide*RND());
    // 01160 C=INT(G*RND)
    Submarine_Depth = INT(VolSide*RND());
    // 01170 FOR D=1 TO N 
    for(Turn=1;Turn<=NumTurns;Turn++){
        // 01180 PRINT 
        b2c_printf("");
        // 01190 PRINT "TRIAL NUMBER ";D 
        b2c_printf("Trial number  %d \n",Turn);
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
                    (err += b2c_strtoi(&Grid_North,args,0)) ||
                    (err += b2c_strtoi(&Grid_East,args,1)) ||
                    (err += b2c_strtoi(&Grid_Depth,args,2)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01210
        // 01220 IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 1300
        if(ABS(Grid_East-Submarine_East)+ABS(Grid_North-Submarine_North)+ABS(Grid_Depth-Submarine_Depth)==0)goto SubmarineHit;
        // 01230 GOSUB 1400
        SonarReport();
        // 01240 PRINT 
        b2c_printf("");
        // 01250 NEXT D
        int dummy_1250=0; // Ignore this line.
    }; // End-For(Turn)
    // 01260 PRINT 
    b2c_printf("");
    // 01270 PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    b2c_printf("You have been torpedoed!  Abandon ship!\n");
    // 01280 PRINT "THE SUBMARINE WAS AT ";B,",";A,",";C
    b2c_printf("The submarine was at  %d The submarine was at ,, %d ,,, %d \n",Submarine_North,Submarine_East,Submarine_Depth);
    // 01290 GOTO 1340
    goto QAnotherGame;

  SubmarineHit:
    // 01300 PRINT 
    b2c_printf("");
    // 01310 PRINT "B O O M ! !  YOU FOUND IT IN ";D;"TRIES!"
    b2c_printf("B o o m ! !  You found it in  %d B o o m ! !  You found it in Tries!\n",Turn);
    // 01320 PRINT 
    b2c_printf("");
    // 01330 PRINT 
    b2c_printf("");

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
