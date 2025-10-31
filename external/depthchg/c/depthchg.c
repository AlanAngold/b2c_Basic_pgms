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
    0x57558ab336d0 ---------A   00002  PRINT TAB(30);"DEPTH CHARGE"
    0x57558ab33670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57558ab35aa0 ---------A   00006  PRINT: PRINT: PRINT
    0x57558ab33e40 ---------A   00020  INPUT "DIMENSION OF SEARCH AREA";G: PRINT
    0x57558ab35f30 ---------A   00030  N=INT(LOG(G)/LOG(2))+1
    0x57558ab34820 ---------A   00040  PRINT "YOU ARE THE CAPTAIN OF THE DESTROYER USS COMPUTER"
    0x57558ab3b960 ---------A   00050  PRINT "AN ENEMY SUB HAS BEEN CAUSING YOU TROUBLE.  YOUR"
    0x57558ab3bc40 ---------A   00060  PRINT "MISSION IS TO DESTROY IT.  YOU HAVE";N;"SHOTS."
    0x57558ab3bde0 ---------A   00070  PRINT "SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A"
    0x57558ab3bf80 ---------A   00080  PRINT "TRIO OF NUMBERS -- THE FIRST TWO ARE THE"
    0x57558ab3c0e0 ---------A   00090  PRINT "SURFACE COORDINATES; THE THIRD IS THE DEPTH."
    0x57558ab3c300 ---------A T 00100  PRINT : PRINT "GOOD LUCK !": PRINT
    0x57558ab3d360 ---------A   00110  A=INT(G*RND(1)) : B=INT(G*RND(1)) : C=INT(G*RND(1))
    0x57558ab3df30 ---------A   00120  FOR D=1 TO N : PRINT : PRINT "TRIAL #";D; : INPUT X,Y,Z
    0x57558ab3e9b0 ---------A   00130  IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 300
    0x57558ab3eba0 ---------A   00140  GOSUB 500 : PRINT : NEXT D
    0x57558ab3edf0 ---------A   00200  PRINT : PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    0x57558ab3f500 ---------A   00210  PRINT "THE SUBMARINE WAS AT";A;",";B;",";C : GOTO 400
    0x57558ab3f8b0 ---------A T 00300  PRINT : PRINT "B O O M ! ! YOU FOUND IT IN";D;"TRIES!"
    0x57558ab3fbb0 ---------A T 00400  PRINT : PRINT: INPUT "ANOTHER GAME (Y OR N)";A$
    0x57558ab3fe50 ---------A   00410  IF A$="Y" THEN 100
    0x57558ab3fff0 ---------A   00420  PRINT "OK.  HOPE YOU ENJOYED YOURSELF." : GOTO 600
    0x57558ab40180 ----------   00500  PRINT "SONAR REPORTS SHOT WAS ";
    0x57558ab40570 ----------   00510  IF Y>B THEN PRINT "NORTH";
    0x57558ab40960 ----------   00520  IF Y<B THEN PRINT "SOUTH";
    0x57558ab40d50 ----------   00530  IF X>A THEN PRINT "EAST";
    0x57558ab41140 ----------   00540  IF X<A THEN PRINT "WEST";
    0x57558ab41770 ----------   00550  IF Y<>B OR X<>A THEN PRINT " AND";
    0x57558ab41b40 ----------   00560  IF Z>C THEN PRINT " TOO LOW."
    0x57558ab41f10 ----------   00570  IF Z<C THEN PRINT " TOO HIGH."
    0x57558ab422d0 ----------   00580  IF Z=C THEN PRINT " DEPTH OK."
    0x57558ab42330 ----------   00590  RETURN
    0x57558ab42390 ---------A T 00600  END
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
   A) 0x57558ab336d0 (00002)   0x57558ab336d0 (00002)   0x57558ab42390 (00600)   0x57558ab42390 (00600)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/depthchg.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57558ab336d0 ---------A   00002  PRINT TAB(30);"DEPTH CHARGE"
    0x57558ab33670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57558ab242b0 ----------   00006  PRINT
    0x57558ab339e0 ----------        a PRINT
    0x57558ab35aa0 ---------A        b PRINT
    0x57558ab35b00 ----------   00020  INPUT "DIMENSION OF SEARCH AREA";G
    0x57558ab33e40 ---------A        a PRINT
    0x57558ab35f30 ---------A   00030  N=INT(LOG(G)/LOG(2))+1
    0x57558ab34820 ---------A   00040  PRINT "YOU ARE THE CAPTAIN OF THE DESTROYER USS COMPUTER"
    0x57558ab3b960 ---------A   00050  PRINT "AN ENEMY SUB HAS BEEN CAUSING YOU TROUBLE.  YOUR"
    0x57558ab3bc40 ---------A   00060  PRINT "MISSION IS TO DESTROY IT.  YOU HAVE";N;"SHOTS."
    0x57558ab3bde0 ---------A   00070  PRINT "SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A"
    0x57558ab3bf80 ---------A   00080  PRINT "TRIO OF NUMBERS -- THE FIRST TWO ARE THE"
    0x57558ab3c0e0 ---------A   00090  PRINT "SURFACE COORDINATES; THE THIRD IS THE DEPTH."
    0x57558ab3c140 ---------- T 00100  PRINT 
    0x57558ab3c260 ---------- T      a PRINT "GOOD LUCK !"
    0x57558ab3c300 ---------A T      b PRINT
    0x57558ab35e70 ----------   00110  A=INT(G*RND(1)) 
    0x57558ab3cd80 ----------        a B=INT(G*RND(1)) 
    0x57558ab3d360 ---------A        b C=INT(G*RND(1))
    0x57558ab3d6f0 ----------   00120  FOR D=1 TO N 
    0x57558ab3d750 ----------        a PRINT 
    0x57558ab3d9b0 ----------        b PRINT "TRIAL #";D; 
    0x57558ab3df30 ---------A        c INPUT X,Y,Z
    0x57558ab3e9b0 ---------A   00130  IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 300
    0x57558ab3ea10 ----------   00140  GOSUB 500 
    0x57558ab3ea60 ----------        a PRINT 
    0x57558ab3eba0 ---------A        b NEXT D
    0x57558ab3ec40 ----------   00200  PRINT 
    0x57558ab3edf0 ---------A        a PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    0x57558ab3f450 ----------   00210  PRINT "THE SUBMARINE WAS AT";A;",";B;",";C 
    0x57558ab3f500 ---------A        a GOTO 400
    0x57558ab3f550 ---------- T 00300  PRINT 
    0x57558ab3f8b0 ---------A T      a PRINT "B O O M ! ! YOU FOUND IT IN";D;"TRIES!"
    0x57558ab3f910 ---------- T 00400  PRINT 
    0x57558ab3f970 ---------- T      a PRINT
    0x57558ab3fbb0 ---------A T      b INPUT "ANOTHER GAME (Y OR N)";A$
    0x57558ab3fe50 ---------A   00410  IF A$="Y" THEN 100
    0x57558ab3ff90 ----------   00420  PRINT "OK.  HOPE YOU ENJOYED YOURSELF." 
    0x57558ab3fff0 ---------A        a GOTO 600
    0x57558ab40180 ----------   00500  PRINT "SONAR REPORTS SHOT WAS ";
    0x57558ab40570 ----------   00510  IF Y>B THEN PRINT "NORTH";
    0x57558ab40960 ----------   00520  IF Y<B THEN PRINT "SOUTH";
    0x57558ab40d50 ----------   00530  IF X>A THEN PRINT "EAST";
    0x57558ab41140 ----------   00540  IF X<A THEN PRINT "WEST";
    0x57558ab41770 ----------   00550  IF Y<>B OR X<>A THEN PRINT " AND";
    0x57558ab41b40 ----------   00560  IF Z>C THEN PRINT " TOO LOW."
    0x57558ab41f10 ----------   00570  IF Z<C THEN PRINT " TOO HIGH."
    0x57558ab422d0 ----------   00580  IF Z=C THEN PRINT " DEPTH OK."
    0x57558ab42330 ----------   00590  RETURN
    0x57558ab42390 ---------A T 00600  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/depthchg.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57558ab336d0 ---------A   01000  PRINT TAB(30);"DEPTH CHARGE"
    0x57558ab33670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57558ab242b0 ----------   01020  PRINT
    0x57558ab339e0 ----------   01030  PRINT
    0x57558ab35aa0 ---------A   01040  PRINT
    0x57558ab35b00 ----------   01050  INPUT "DIMENSION OF SEARCH AREA";G
    0x57558ab33e40 ---------A   01060  PRINT
    0x57558ab35f30 ---------A   01070  N=INT(LOG(G)/LOG(2))+1
    0x57558ab34820 ---------A   01080  PRINT "YOU ARE THE CAPTAIN OF THE DESTROYER USS COMPUTER"
    0x57558ab3b960 ---------A   01090  PRINT "AN ENEMY SUB HAS BEEN CAUSING YOU TROUBLE.  YOUR"
    0x57558ab3bc40 ---------A   01100  PRINT "MISSION IS TO DESTROY IT.  YOU HAVE";N;"SHOTS."
    0x57558ab3bde0 ---------A   01110  PRINT "SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A"
    0x57558ab3bf80 ---------A   01120  PRINT "TRIO OF NUMBERS -- THE FIRST TWO ARE THE"
    0x57558ab3c0e0 ---------A   01130  PRINT "SURFACE COORDINATES; THE THIRD IS THE DEPTH."
    0x57558ab3c140 ----------   01140  PRINT 
    0x57558ab3c260 ----------   01150  PRINT "GOOD LUCK !"
    0x57558ab3c300 ---------A   01160  PRINT
    0x57558ab35e70 ----------   01170  A=INT(G*RND(1)) 
    0x57558ab3cd80 ----------   01180  B=INT(G*RND(1)) 
    0x57558ab3d360 ---------A   01190  C=INT(G*RND(1))
    0x57558ab3d6f0 ----------   01200  FOR D=1 TO N 
    0x57558ab3d750 ----------   01210  PRINT 
    0x57558ab3d9b0 ----------   01220  PRINT "TRIAL #";D; 
    0x57558ab3df30 ---------A   01230  INPUT X,Y,Z
    0x57558ab3e9b0 ---------A   01240  IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 1330
    0x57558ab3ea10 ----------   01250  GOSUB 1400 
    0x57558ab3ea60 ----------   01260  PRINT 
    0x57558ab3eba0 ---------A   01270  NEXT D
    0x57558ab3ec40 ----------   01280  PRINT 
    0x57558ab3edf0 ---------A   01290  PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    0x57558ab3f450 ----------   01300  PRINT "THE SUBMARINE WAS AT";A;",";B;",";C 
    0x57558ab3f500 ---------A   01310  GOTO 1360
    0x57558ab3f550 ----------   01320  PRINT 
    0x57558ab3f8b0 ---------A   01330  PRINT "B O O M ! ! YOU FOUND IT IN";D;"TRIES!"
    0x57558ab3f910 ----------   01340  PRINT 
    0x57558ab3f970 ----------   01350  PRINT
    0x57558ab3fbb0 ---------A   01360  INPUT "ANOTHER GAME (Y OR N)";A$
    0x57558ab3fe50 ---------A   01370  IF A$="Y" THEN 1160
    0x57558ab3ff90 ----------   01380  PRINT "OK.  HOPE YOU ENJOYED YOURSELF." 
    0x57558ab3fff0 ---------A   01390  GOTO 1500
    0x57558ab40180 ----------   01400  PRINT "SONAR REPORTS SHOT WAS ";
    0x57558ab40570 ----------   01410  IF Y>B THEN PRINT "NORTH";
    0x57558ab40960 ----------   01420  IF Y<B THEN PRINT "SOUTH";
    0x57558ab40d50 ----------   01430  IF X>A THEN PRINT "EAST";
    0x57558ab41140 ----------   01440  IF X<A THEN PRINT "WEST";
    0x57558ab41770 ----------   01450  IF Y<>B OR X<>A THEN PRINT " AND";
    0x57558ab41b40 ----------   01460  IF Z>C THEN PRINT " TOO LOW."
    0x57558ab41f10 ----------   01470  IF Z<C THEN PRINT " TOO HIGH."
    0x57558ab422d0 ----------   01480  IF Z=C THEN PRINT " DEPTH OK."
    0x57558ab42330 ----------   01490  RETURN
    0x57558ab42390 ---------A   01500  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01510 - 10000    8500 

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
    0x57558ab336d0 ---------A   01000  PRINT TAB(30);"DEPTH CHARGE"
    0x57558ab33670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57558ab242b0 ---------A   01020  PRINT
    0x57558ab339e0 ---------A   01030  PRINT
    0x57558ab35aa0 ---------A   01040  PRINT
    0x57558ab35b00 ---------A   01050  INPUT "DIMENSION OF SEARCH AREA";G
    0x57558ab33e40 ---------A   01060  PRINT
    0x57558ab35f30 ---------A   01070  N=INT(LOG(G)/LOG(2))+1
    0x57558ab34820 ---------A   01080  PRINT "YOU ARE THE CAPTAIN OF THE DESTROYER USS COMPUTER"
    0x57558ab3b960 ---------A   01090  PRINT "AN ENEMY SUB HAS BEEN CAUSING YOU TROUBLE.  YOUR"
    0x57558ab3bc40 ---------A   01100  PRINT "MISSION IS TO DESTROY IT.  YOU HAVE";N;"SHOTS."
    0x57558ab3bde0 ---------A   01110  PRINT "SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A"
    0x57558ab3bf80 ---------A   01120  PRINT "TRIO OF NUMBERS -- THE FIRST TWO ARE THE"
    0x57558ab3c0e0 ---------A   01130  PRINT "SURFACE COORDINATES; THE THIRD IS THE DEPTH."
    0x57558ab3c140 ---------A   01140  PRINT 
    0x57558ab3c260 ---------A   01150  PRINT "GOOD LUCK !"
    0x57558ab3c300 ---------A T 01160  PRINT
    0x57558ab35e70 ---------A   01170  A=INT(G*RND(1)) 
    0x57558ab3cd80 ---------A   01180  B=INT(G*RND(1)) 
    0x57558ab3d360 ---------A   01190  C=INT(G*RND(1))
    0x57558ab3d6f0 ---------A   01200  FOR D=1 TO N 
    0x57558ab3d750 ---------A   01210  PRINT 
    0x57558ab3d9b0 ---------A   01220  PRINT "TRIAL #";D; 
    0x57558ab3df30 ---------A   01230  INPUT X,Y,Z
    0x57558ab3e9b0 ---------A   01240  IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 1320
    0x57558ab3ea10 ---------A   01250  GOSUB 1400 
    0x57558ab3ea60 ---------A   01260  PRINT 
    0x57558ab3eba0 ---------A   01270  NEXT D
    0x57558ab3ec40 ---------A   01280  PRINT 
    0x57558ab3edf0 ---------A   01290  PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    0x57558ab3f450 ---------A   01300  PRINT "THE SUBMARINE WAS AT";A;",";B;",";C 
    0x57558ab3f500 ---------A   01310  GOTO 1350
    0x57558ab3f8b0 ---------A T 01320  PRINT "B O O M ! ! YOU FOUND IT IN";D;"TRIES!"
    0x57558ab3f910 ---------A   01330  PRINT 
    0x57558ab3f970 ---------A   01340  PRINT
    0x57558ab3fbb0 ---------A T 01350  INPUT "ANOTHER GAME (Y OR N)";A$
    0x57558ab3fe50 ---------A   01360  IF A$="Y" THEN 1160
    0x57558ab3ff90 ---------A   01370  PRINT "OK.  HOPE YOU ENJOYED YOURSELF." 
    0x57558ab3fff0 ---------A   01380  GOTO 1390
    0x57558ab42390 ---------A T 01390  END
    0x57558ab40180 ---------B G 01400  PRINT "SONAR REPORTS SHOT WAS ";
    0x57558ab40570 ---------B   01410  IF Y>B THEN PRINT "NORTH";
    0x57558ab40960 ---------B   01420  IF Y<B THEN PRINT "SOUTH";
    0x57558ab40d50 ---------B   01430  IF X>A THEN PRINT "EAST";
    0x57558ab41140 ---------B   01440  IF X<A THEN PRINT "WEST";
    0x57558ab41770 ---------B   01450  IF Y<>B OR X<>A THEN PRINT " AND";
    0x57558ab41b40 ---------B   01460  IF Z>C THEN PRINT " TOO LOW."
    0x57558ab41f10 ---------B   01470  IF Z<C THEN PRINT " TOO HIGH."
    0x57558ab422d0 ---------B   01480  IF Z=C THEN PRINT " DEPTH OK."
    0x57558ab45d70 ---------B   01490  GOTO 01500
    0x57558ab46a30 ---------B T 01500  RETURN
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
void Routine_01400();

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

void Routine_01400(){
    // 01400 PRINT "SONAR REPORTS SHOT WAS ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SONAR REPORTS SHOT WAS ");fputs(buf,fh); };
    // 01410 IF Y>B THEN PRINT "NORTH";
    if(Y_int>B_int) {
    }
    // 01420 IF Y<B THEN PRINT "SOUTH";
    if(Y_int<B_int) {
    }
    // 01430 IF X>A THEN PRINT "EAST";
    if(X_int>A_int) {
    }
    // 01440 IF X<A THEN PRINT "WEST";
    if(X_int<A_int) {
    }
    // 01450 IF Y<>B OR X<>A THEN PRINT " AND";
    if(Y_int!=B_int||X_int!=A_int) {
    }
    // 01460 IF Z>C THEN PRINT " TOO LOW."
    if(Z_int>C_int) {
    }
    // 01470 IF Z<C THEN PRINT " TOO HIGH."
    if(Z_int<C_int) {
    }
    // 01480 IF Z=C THEN PRINT " DEPTH OK."
    if(Z_int==C_int) {
    }
    // 01490 GOTO 01500
    goto Lbl_01500;

  Lbl_01500:
    // 01500 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(30);"DEPTH CHARGE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,30);strcat(buf,"DEPTH CHARGE");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 INPUT "DIMENSION OF SEARCH AREA";G
    // Start of Basic INPUT statement 01050
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"DIMENSION OF SEARCH AREA");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&G_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01050
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 N=INT(LOG(G)/LOG(2))+1
    N_int = INT(LOG(G_int)/LOG(2))+1;
    // 01080 PRINT "YOU ARE THE CAPTAIN OF THE DESTROYER USS COMPUTER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE THE CAPTAIN OF THE DESTROYER USS COMPUTER");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "AN ENEMY SUB HAS BEEN CAUSING YOU TROUBLE.  YOUR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AN ENEMY SUB HAS BEEN CAUSING YOU TROUBLE.  YOUR");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "MISSION IS TO DESTROY IT.  YOU HAVE";N;"SHOTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MISSION IS TO DESTROY IT.  YOU HAVE"); b2c_INT(buf,N_int);strcat(buf,"SHOTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SPECIFY DEPTH CHARGE EXPLOSION POINT WITH A");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "TRIO OF NUMBERS -- THE FIRST TWO ARE THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRIO OF NUMBERS -- THE FIRST TWO ARE THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "SURFACE COORDINATES; THE THIRD IS THE DEPTH."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SURFACE COORDINATES; THE THIRD IS THE DEPTH.");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "GOOD LUCK !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD LUCK !");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01160:
    // 01160 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01170 A=INT(G*RND(1)) 
    A_int = INT(G_int*RND(1));
    // 01180 B=INT(G*RND(1)) 
    B_int = INT(G_int*RND(1));
    // 01190 C=INT(G*RND(1))
    C_int = INT(G_int*RND(1));
    // 01200 FOR D=1 TO N 
    for(D_int=1;D_int<=N_int;D_int++){
        // 01210 PRINT 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01220 PRINT "TRIAL #";D; 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRIAL #"); b2c_INT(buf,D_int);fputs(buf,fh); };
        // 01230 INPUT X,Y,Z
        // Start of Basic INPUT statement 01230
        {
            int numargs=3;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&X_int,args,0)) ||
                    (err += b2c_strtoi(&Y_int,args,1)) ||
                    (err += b2c_strtoi(&Z_int,args,2)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01230
        // 01240 IF ABS(X-A)+ABS(Y-B)+ABS(Z-C)=0 THEN 1320
        if(ABS(X_int-A_int)+ABS(Y_int-B_int)+ABS(Z_int-C_int)==0)goto Lbl_01320;
        // 01250 GOSUB 1400 
        Routine_01400();
        // 01260 PRINT 
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01270 NEXT D
        int dummy_1270=0; // Ignore this line.
    }; // End-For(D_int)
    // 01280 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01290 PRINT "YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE BEEN TORPEDOED!  ABANDON SHIP!");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 PRINT "THE SUBMARINE WAS AT";A;",";B;",";C 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE SUBMARINE WAS AT"); b2c_INT(buf,A_int);strcat(buf,","); b2c_INT(buf,B_int);strcat(buf,","); b2c_INT(buf,C_int);fputs(buf,fh); };
    // 01310 GOTO 1350
    goto Lbl_01350;

  Lbl_01320:
    // 01320 PRINT "B O O M ! ! YOU FOUND IT IN";D;"TRIES!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"B O O M ! ! YOU FOUND IT IN"); b2c_INT(buf,D_int);strcat(buf,"TRIES!");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01350:
    // 01350 INPUT "ANOTHER GAME (Y OR N)";A$
    // Start of Basic INPUT statement 01350
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"ANOTHER GAME (Y OR N)");
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
    // 01360 IF A$="Y" THEN 1160
    if(strcmp(A_str,"Y")==0)goto Lbl_01160;
    // 01370 PRINT "OK.  HOPE YOU ENJOYED YOURSELF." 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OK.  HOPE YOU ENJOYED YOURSELF.");fputs(buf,fh); };
    // 01380 GOTO 1390
    goto Lbl_01390;

  Lbl_01390:
    // 01390 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
