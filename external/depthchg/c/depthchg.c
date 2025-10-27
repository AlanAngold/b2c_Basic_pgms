/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/depthchg.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cc26aa5db80 ---------A   00002 PRINT TAB(30);"DEPTH CHARGE"
    0x5cc26aa5ef30 ---------A   00004 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cc26aa5f0b0 ---------A   00006 PRINT: PRINT: PRINT
    0x5cc26aa5c9e0 ---------A   00020 INPUT "DIMENSION OF SEARCH AREA";G: PRINT
    0x5cc26aa5cca0 ---------A   00030 N=INT(LOG(G)/LOG(2))+1
    0x5cc26aa5d780 ---------A   00040 PRINT "YOU ARE THE CAPTAIN OF THE DESTROYER USS COMPUTER"
    0x5cc26aa648f0 ---------A   00050 PRINT "AN ENEMY SUB HAS BEEN CAUSING YOU TROUBLE.  YOUR"
    0x5cc26aa64bc0 ---------A   00060 PRINT "MISSION IS TO DESTROY IT.  YOU HAVE";N;"SHOTS."
    0x5cc26aa64d50 ---------A   00070 PRINT "SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A"
    0x5cc26aa5d620 ---------A   00080 PRINT "TRIO OF NUMBERS -- THE FIRST TWO ARE THE"
    0x5cc26aa64fe0 ---------A   00090 PRINT "SURFACE COORDINATES; THE THIRD IS THE DEPTH."
    0x5cc26aa651d0 ---------A T 00100 PRINT : PRINT "GOOD LUCK !": PRINT
    0x5cc26aa662d0 ---------A   00110 A=INT(G*RND(1)) : B=INT(G*RND(1)) : C=INT(G*RND(1))
    0x5cc26aa66e20 ---------A   00120 FOR D=1 TO N : PRINT : PRINT "TRIAL #";D; : INPUT X,Y,Z
    0x5cc26aa678a0 ---------A   00130 IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 300
    0x5cc26aa67a70 ---------A   00140 GOSUB 500 : PRINT : NEXT D
    0x5cc26aa67ca0 ---------A   00200 PRINT : PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    0x5cc26aa68390 ---------A   00210 PRINT "THE SUBMARINE WAS AT";A;",";B;",";C : GOTO 400
    0x5cc26aa68720 ---------A T 00300 PRINT : PRINT "B O O M ! ! YOU FOUND IT IN";D;"TRIES!"
    0x5cc26aa689f0 ---------A T 00400 PRINT : PRINT: INPUT "ANOTHER GAME (Y OR N)";A$
    0x5cc26aa68c90 ---------A   00410 IF A$="Y" THEN 100
    0x5cc26aa68e20 ---------A   00420 PRINT "OK.  HOPE YOU ENJOYED YOURSELF." : GOTO 600
    0x5cc26aa68fa0 ----------   00500 PRINT "SONAR REPORTS SHOT WAS ";
    0x5cc26aa69370 ----------   00510 IF Y>B THEN PRINT "NORTH";
    0x5cc26aa69750 ----------   00520 IF Y<B THEN PRINT "SOUTH";
    0x5cc26aa69b30 ----------   00530 IF X>A THEN PRINT "EAST";
    0x5cc26aa69f10 ----------   00540 IF X<A THEN PRINT "WEST";
    0x5cc26aa6a530 ----------   00550 IF Y<>B OR X<>A THEN PRINT " AND";
    0x5cc26aa6a8f0 ----------   00560 IF Z>C THEN PRINT " TOO LOW."
    0x5cc26aa6acb0 ----------   00570 IF Z<C THEN PRINT " TOO HIGH."
    0x5cc26aa6b060 ----------   00580 IF Z=C THEN PRINT " DEPTH OK."
    0x5cc26aa6b0c0 ----------   00590 RETURN
    0x5cc26aa6b120 ---------A T 00600 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00100      00410T
     00300      00130T
     00400      00210T
     00600      00420T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5cc26aa5db80 (00002)   0x5cc26aa5db80 (00002)   0x5cc26aa6b120 (00600)   0x5cc26aa6b120 (00600)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01230 - 10000    8780 

 */



/*
 *  Symbol Table Listing for 'basic/depthchg.bas'
 *
    A                        Integer     
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    C                        Integer     
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
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
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
    X                        Integer     
    Y                        Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/depthchg.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cc26aa5db80 ---------A   01000 PRINT TAB(30);"DEPTH CHARGE"
    0x5cc26aa5ef30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cc26aa5f0b0 ---------A   01020 PRINT: PRINT: PRINT
    0x5cc26aa5c9e0 ---------A   01030 INPUT "DIMENSION OF SEARCH AREA";G: PRINT
    0x5cc26aa5cca0 ---------A   01040 N=INT(LOG(G)/LOG(2))+1
    0x5cc26aa5d780 ---------A   01050 PRINT "YOU ARE THE CAPTAIN OF THE DESTROYER USS COMPUTER"
    0x5cc26aa648f0 ---------A   01060 PRINT "AN ENEMY SUB HAS BEEN CAUSING YOU TROUBLE.  YOUR"
    0x5cc26aa64bc0 ---------A   01070 PRINT "MISSION IS TO DESTROY IT.  YOU HAVE";N;"SHOTS."
    0x5cc26aa64d50 ---------A   01080 PRINT "SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A"
    0x5cc26aa5d620 ---------A   01090 PRINT "TRIO OF NUMBERS -- THE FIRST TWO ARE THE"
    0x5cc26aa64fe0 ---------A   01100 PRINT "SURFACE COORDINATES; THE THIRD IS THE DEPTH."
    0x5cc26aa651d0 ---------A T 01110 PRINT : PRINT "GOOD LUCK !": PRINT
    0x5cc26aa662d0 ---------A   01120 A=INT(G*RND(1)) : B=INT(G*RND(1)) : C=INT(G*RND(1))
    0x5cc26aa66e20 ---------A   01130 FOR D=1 TO N : PRINT : PRINT "TRIAL #";D; : INPUT X,Y,Z
    0x5cc26aa678a0 ---------A   01140 IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 1180
    0x5cc26aa67a70 ---------A   01150 GOSUB 500 : PRINT : NEXT D
    0x5cc26aa67ca0 ---------A   01160 PRINT : PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    0x5cc26aa68390 ---------A   01170 PRINT "THE SUBMARINE WAS AT";A;",";B;",";C : GOTO 1190
    0x5cc26aa68720 ---------A T 01180 PRINT : PRINT "B O O M ! ! YOU FOUND IT IN";D;"TRIES!"
    0x5cc26aa689f0 ---------A T 01190 PRINT : PRINT: INPUT "ANOTHER GAME (Y OR N)";A$
    0x5cc26aa68c90 ---------A   01200 IF A$="Y" THEN 1110
    0x5cc26aa68e20 ---------A   01210 PRINT "OK.  HOPE YOU ENJOYED YOURSELF." : GOTO 1220
    0x5cc26aa6b120 ---------A T 01220 END
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
char*  A_str;                                     // Basic: A$ 
int    B_int;                                     // Basic: B 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    G_int;                                     // Basic: G 
int    N_int;                                     // Basic: N 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
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
