/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/litquiz.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f3e7a0c9ac0 ---------A   00001 PRINT TAB(25);"LITERATURE QUIZ"
    0x5f3e7a0cae70 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5f3e7a0caff0 ---------A   00003 PRINT:PRINT:PRINT
    0x5f3e7a0c8730 ---------A   00005 R=0
    0x5f3e7a0c8d80 ---------A   00010 PRINT "TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x5f3e7a0ca630 ---------A   00012 PRINT: PRINT "THIS IS A MULTIPLE-CHOICE QUIZ."
    0x5f3e7a0cb040 ---------A   00013 PRINT "TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x5f3e7a0c9640 ---------A   00015 PRINT: PRINT "GOOD LUCK!": PRINT: PRINT
    0x5f3e7a0c97d0 ---------A   00040 PRINT "IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT"
    0x5f3e7a0c8dd0 ---------A   00042 PRINT "1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x5f3e7a0c85b0 ---------A   00043 INPUT A: IF A=3 THEN 46
    0x5f3e7a0d0d50 ---------A   00044 PRINT "SORRY...FIGARO WAS HIS NAME.": GOTO 50
    0x5f3e7a0d0e50 ---------A T 00046 PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x5f3e7a0d1120 ---------A   00047 R=R+1
    0x5f3e7a0d1210 ---------A T 00050 PRINT: PRINT
    0x5f3e7a0d13b0 ---------A   00051 PRINT "FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?"
    0x5f3e7a0d1510 ---------A   00052 PRINT "1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x5f3e7a0d1890 ---------A   00053 INPUT A: IF A=2 THEN 56
    0x5f3e7a0d1a20 ---------A   00054 PRINT "TOO BAD...IT WAS ELMER FUDD'S GARDEN.": GOTO 60
    0x5f3e7a0d1b60 ---------A T 00056 PRINT "PRETTY GOOD!"
    0x5f3e7a0d1e90 ---------A   00057 R=R+1
    0x5f3e7a0d1f70 ---------A T 00060 PRINT: PRINT
    0x5f3e7a0d2100 ---------A   00061 PRINT "IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED"
    0x5f3e7a0d2260 ---------A   00062 PRINT "1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO";
    0x5f3e7a0d2620 ---------A   00063 INPUT A: IF A=4 THEN 66
    0x5f3e7a0d2810 ---------A   00064 PRINT "BACK TO THE BOOKS,...TOTO WAS HIS NAME.": GOTO 70
    0x5f3e7a0d2960 ---------A T 00066 PRINT "YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x5f3e7a0d2c90 ---------A   00067 R=R+1
    0x5f3e7a0d2d80 ---------A T 00070 PRINT:PRINT
    0x5f3e7a0d2f20 ---------A   00071 PRINT "WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE"
    0x5f3e7a0d30d0 ---------A   00072 PRINT "1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x5f3e7a0d3480 ---------A   00073 INPUT A: IF A=3 THEN 76
    0x5f3e7a0d35f0 ---------A   00074 PRINT "OH, COME ON NOW...IT WAS SNOW WHITE."
    0x5f3e7a0d3870 ---------A   00075 GOTO 80
    0x5f3e7a0d39b0 ---------A T 00076 PRINT "GOOD MEMORY!"
    0x5f3e7a0d3ce0 ---------A   00077 R=R+1
    0x5f3e7a0d3da0 ---------A T 00080 PRINT:PRINT
    0x5f3e7a0d3ff0 ---------A   00085 IF R=4 THEN 100
    0x5f3e7a0d4280 ---------A   00090 IF R<2 THEN 200
    0x5f3e7a0d4410 ---------A   00092 PRINT "NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x5f3e7a0d4570 ---------A   00094 PRINT "READING THE NURSERY GREATS."
    0x5f3e7a0d45c0 ---------A   00096 STOP
    0x5f3e7a0d47a0 ---------A T 00100 PRINT "WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY"
    0x5f3e7a0d4920 ---------A   00110 PRINT "YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x5f3e7a0d4a80 ---------A   00120 PRINT "LITERATURE (HA, HA, HA)"
    0x5f3e7a0d4ad0 ---------A   00130 STOP
    0x5f3e7a0d4ca0 ---------A T 00200 PRINT "UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x5f3e7a0d4e00 ---------A   00205 PRINT "NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x5f3e7a0d4e50 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00046      00043T
     00050      00044T
     00056      00053T
     00060      00054T
     00066      00063T
     00070      00064T
     00076      00073T
     00080      00075T
     00100      00085T
     00200      00090T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5f3e7a0c9ac0 (00001)   0x000000000000 (00000)   0x5f3e7a0d4e50 (00999)   0x5f3e7a0d4e50 (00999)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01490 - 10000    8520 

 */



/*
 *  Symbol Table Listing for 'basic/litquiz.bas'
 *
    A                        Float       
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
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
    R                        Float       
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

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/litquiz.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f3e7a0c9ac0 ---------A   01000 PRINT TAB(25);"LITERATURE QUIZ"
    0x5f3e7a0cae70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5f3e7a0caff0 ---------A   01020 PRINT:PRINT:PRINT
    0x5f3e7a0c8730 ---------A   01030 R=0
    0x5f3e7a0c8d80 ---------A   01040 PRINT "TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x5f3e7a0ca630 ---------A   01050 PRINT: PRINT "THIS IS A MULTIPLE-CHOICE QUIZ."
    0x5f3e7a0cb040 ---------A   01060 PRINT "TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x5f3e7a0c9640 ---------A   01070 PRINT: PRINT "GOOD LUCK!": PRINT: PRINT
    0x5f3e7a0c97d0 ---------A   01080 PRINT "IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT"
    0x5f3e7a0c8dd0 ---------A   01090 PRINT "1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x5f3e7a0c85b0 ---------A   01100 INPUT A: IF A=3 THEN 1120
    0x5f3e7a0d0d50 ---------A   01110 PRINT "SORRY...FIGARO WAS HIS NAME.": GOTO 1140
    0x5f3e7a0d0e50 ---------A T 01120 PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x5f3e7a0d1120 ---------A   01130 R=R+1
    0x5f3e7a0d1210 ---------A T 01140 PRINT: PRINT
    0x5f3e7a0d13b0 ---------A   01150 PRINT "FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?"
    0x5f3e7a0d1510 ---------A   01160 PRINT "1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x5f3e7a0d1890 ---------A   01170 INPUT A: IF A=2 THEN 1190
    0x5f3e7a0d1a20 ---------A   01180 PRINT "TOO BAD...IT WAS ELMER FUDD'S GARDEN.": GOTO 1210
    0x5f3e7a0d1b60 ---------A T 01190 PRINT "PRETTY GOOD!"
    0x5f3e7a0d1e90 ---------A   01200 R=R+1
    0x5f3e7a0d1f70 ---------A T 01210 PRINT: PRINT
    0x5f3e7a0d2100 ---------A   01220 PRINT "IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED"
    0x5f3e7a0d2260 ---------A   01230 PRINT "1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO";
    0x5f3e7a0d2620 ---------A   01240 INPUT A: IF A=4 THEN 1260
    0x5f3e7a0d2810 ---------A   01250 PRINT "BACK TO THE BOOKS,...TOTO WAS HIS NAME.": GOTO 1280
    0x5f3e7a0d2960 ---------A T 01260 PRINT "YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x5f3e7a0d2c90 ---------A   01270 R=R+1
    0x5f3e7a0d2d80 ---------A T 01280 PRINT:PRINT
    0x5f3e7a0d2f20 ---------A   01290 PRINT "WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE"
    0x5f3e7a0d30d0 ---------A   01300 PRINT "1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x5f3e7a0d3480 ---------A   01310 INPUT A: IF A=3 THEN 1340
    0x5f3e7a0d35f0 ---------A   01320 PRINT "OH, COME ON NOW...IT WAS SNOW WHITE."
    0x5f3e7a0d3870 ---------A   01330 GOTO 1360
    0x5f3e7a0d39b0 ---------A T 01340 PRINT "GOOD MEMORY!"
    0x5f3e7a0d3ce0 ---------A   01350 R=R+1
    0x5f3e7a0d3da0 ---------A T 01360 PRINT:PRINT
    0x5f3e7a0d3ff0 ---------A   01370 IF R=4 THEN 1420
    0x5f3e7a0d4280 ---------A   01380 IF R<2 THEN 1460
    0x5f3e7a0d4410 ---------A   01390 PRINT "NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x5f3e7a0d4570 ---------A   01400 PRINT "READING THE NURSERY GREATS."
    0x5f3e7a0d45c0 ---------A   01410 STOP
    0x5f3e7a0d47a0 ---------A T 01420 PRINT "WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY"
    0x5f3e7a0d4920 ---------A   01430 PRINT "YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x5f3e7a0d4a80 ---------A   01440 PRINT "LITERATURE (HA, HA, HA)"
    0x5f3e7a0d4ad0 ---------A   01450 STOP
    0x5f3e7a0d4ca0 ---------A T 01460 PRINT "UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x5f3e7a0d4e00 ---------A   01470 PRINT "NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x5f3e7a0d4e50 ---------A   01480 END
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
float  R_flt;                                     // Basic: R 
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
