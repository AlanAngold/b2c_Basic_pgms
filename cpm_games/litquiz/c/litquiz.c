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
    0x6181e916adb0 ---------A   00001 PRINT CHR$(26):PRINT TAB(25);"LITERATURE QUIZ":PRINT
    0x6181e916af30 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6181e9168730 ---------A   00003 PRINT:PRINT:PRINT
    0x6181e9168dd0 ---------A   00005 R=0
    0x6181e916a620 ---------A   00010 PRINT "TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x6181e916b090 ---------A   00012 PRINT: PRINT "THIS IS A MULTIPLE-CHOICE QUIZ."
    0x6181e91695e0 ---------A   00013 PRINT "TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x6181e91707e0 ---------A   00015 PRINT: PRINT "GOOD LUCK!": PRINT: PRINT
    0x6181e9170970 ---------A   00040 PRINT "IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT"
    0x6181e9170ac0 ---------A   00042 PRINT "1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x6181e9168610 ---------A   00043 INPUT A: IF A=3 THEN 46
    0x6181e9170f80 ---------A   00044 PRINT "SORRY...FIGARO WAS HIS NAME.": GOTO 50
    0x6181e9171080 ---------A T 00046 PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x6181e9171350 ---------A   00047 R=R+1
    0x6181e9171440 ---------A T 00050 PRINT: PRINT
    0x6181e91715e0 ---------A   00051 PRINT "FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?"
    0x6181e9171760 ---------A   00052 PRINT "1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x6181e9171ac0 ---------A   00053 INPUT A: IF A=2 THEN 56
    0x6181e9171c50 ---------A   00054 PRINT "TOO BAD...IT WAS ELMER FUDD'S GARDEN.": GOTO 60
    0x6181e9171d90 ---------A T 00056 PRINT "PRETTY GOOD!"
    0x6181e91720c0 ---------A   00057 R=R+1
    0x6181e91721a0 ---------A T 00060 PRINT: PRINT
    0x6181e9172330 ---------A   00061 PRINT "IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED"
    0x6181e9172490 ---------A   00062 PRINT "1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO";
    0x6181e9172850 ---------A   00063 INPUT A: IF A=4 THEN 66
    0x6181e9172a40 ---------A   00064 PRINT "BACK TO THE BOOKS,...TOTO WAS HIS NAME.": GOTO 70
    0x6181e9172b90 ---------A T 00066 PRINT "YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x6181e9172ec0 ---------A   00067 R=R+1
    0x6181e9172fb0 ---------A T 00070 PRINT:PRINT
    0x6181e9173150 ---------A   00071 PRINT "WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE"
    0x6181e9173300 ---------A   00072 PRINT "1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x6181e91736b0 ---------A   00073 INPUT A: IF A=3 THEN 76
    0x6181e9173820 ---------A   00074 PRINT "OH, COME ON NOW...IT WAS SNOW WHITE."
    0x6181e9173aa0 ---------A   00075 GOTO 80
    0x6181e9173be0 ---------A T 00076 PRINT "GOOD MEMORY!"
    0x6181e9173f10 ---------A   00077 R=R+1
    0x6181e9173fd0 ---------A T 00080 PRINT:PRINT
    0x6181e9174220 ---------A   00085 IF R=4 THEN 100
    0x6181e91744b0 ---------A   00090 IF R<2 THEN 200
    0x6181e9174640 ---------A   00092 PRINT "NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x6181e91747b0 ---------A   00094 PRINT "READING THE NURSERY GREATS."
    0x6181e9174be0 ---------A   00096 FOR XX=1 TO 2000:NEXT:RUN "MENU"
    0x6181e9174dc0 ---------A T 00100 PRINT "WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY"
    0x6181e9174f40 ---------A   00110 PRINT "YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x6181e91750b0 ---------A   00120 PRINT "LITERATURE (HA, HA, HA)"
    0x6181e9175420 ---------A   00130 FOR XX=1 TO 2000:NEXT:RUN "MENU"
    0x6181e91755f0 ---------A T 00200 PRINT "UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x6181e9175760 ---------A   00205 PRINT "NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x6181e9175ad0 ---------A   00999 FOR XX=1 TO 2000:NEXT:RUN "MENU"
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
   A) 0x6181e916adb0 (00001)   0x000000000000 (00000)   0x6181e9175ad0 (00999)   0x6181e9175ad0 (00999)   


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
    XX                       Float       

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
    0x6181e916adb0 ---------A   01000 PRINT CHR$(26):PRINT TAB(25);"LITERATURE QUIZ":PRINT
    0x6181e916af30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6181e9168730 ---------A   01020 PRINT:PRINT:PRINT
    0x6181e9168dd0 ---------A   01030 R=0
    0x6181e916a620 ---------A   01040 PRINT "TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    0x6181e916b090 ---------A   01050 PRINT: PRINT "THIS IS A MULTIPLE-CHOICE QUIZ."
    0x6181e91695e0 ---------A   01060 PRINT "TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    0x6181e91707e0 ---------A   01070 PRINT: PRINT "GOOD LUCK!": PRINT: PRINT
    0x6181e9170970 ---------A   01080 PRINT "IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT"
    0x6181e9170ac0 ---------A   01090 PRINT "1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    0x6181e9168610 ---------A   01100 INPUT A: IF A=3 THEN 1120
    0x6181e9170f80 ---------A   01110 PRINT "SORRY...FIGARO WAS HIS NAME.": GOTO 1140
    0x6181e9171080 ---------A T 01120 PRINT "VERY GOOD!  HERE'S ANOTHER."
    0x6181e9171350 ---------A   01130 R=R+1
    0x6181e9171440 ---------A T 01140 PRINT: PRINT
    0x6181e91715e0 ---------A   01150 PRINT "FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?"
    0x6181e9171760 ---------A   01160 PRINT "1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    0x6181e9171ac0 ---------A   01170 INPUT A: IF A=2 THEN 1190
    0x6181e9171c50 ---------A   01180 PRINT "TOO BAD...IT WAS ELMER FUDD'S GARDEN.": GOTO 1210
    0x6181e9171d90 ---------A T 01190 PRINT "PRETTY GOOD!"
    0x6181e91720c0 ---------A   01200 R=R+1
    0x6181e91721a0 ---------A T 01210 PRINT: PRINT
    0x6181e9172330 ---------A   01220 PRINT "IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED"
    0x6181e9172490 ---------A   01230 PRINT "1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO";
    0x6181e9172850 ---------A   01240 INPUT A: IF A=4 THEN 1260
    0x6181e9172a40 ---------A   01250 PRINT "BACK TO THE BOOKS,...TOTO WAS HIS NAME.": GOTO 1280
    0x6181e9172b90 ---------A T 01260 PRINT "YEA!  YOU'RE A REAL LITERATURE GIANT."
    0x6181e9172ec0 ---------A   01270 R=R+1
    0x6181e9172fb0 ---------A T 01280 PRINT:PRINT
    0x6181e9173150 ---------A   01290 PRINT "WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE"
    0x6181e9173300 ---------A   01300 PRINT "1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    0x6181e91736b0 ---------A   01310 INPUT A: IF A=3 THEN 1340
    0x6181e9173820 ---------A   01320 PRINT "OH, COME ON NOW...IT WAS SNOW WHITE."
    0x6181e9173aa0 ---------A   01330 GOTO 1360
    0x6181e9173be0 ---------A T 01340 PRINT "GOOD MEMORY!"
    0x6181e9173f10 ---------A   01350 R=R+1
    0x6181e9173fd0 ---------A T 01360 PRINT:PRINT
    0x6181e9174220 ---------A   01370 IF R=4 THEN 1420
    0x6181e91744b0 ---------A   01380 IF R<2 THEN 1460
    0x6181e9174640 ---------A   01390 PRINT "NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    0x6181e91747b0 ---------A   01400 PRINT "READING THE NURSERY GREATS."
    0x6181e9174be0 ---------A   01410 FOR XX=1 TO 2000:NEXT:RUN "MENU"
    0x6181e9174dc0 ---------A T 01420 PRINT "WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY"
    0x6181e9174f40 ---------A   01430 PRINT "YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    0x6181e91750b0 ---------A   01440 PRINT "LITERATURE (HA, HA, HA)"
    0x6181e9175420 ---------A   01450 FOR XX=1 TO 2000:NEXT:RUN "MENU"
    0x6181e91755f0 ---------A T 01460 PRINT "UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO"
    0x6181e9175760 ---------A   01470 PRINT "NURSERY SCHOOL FOR YOU, MY FRIEND."
    0x6181e9175ad0 ---------A   01480 FOR XX=1 TO 2000:NEXT:RUN "MENU"
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
float  XX_flt;                                    // Basic: XX 
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
    // 01000 PRINT CHR$(26):PRINT TAB(25);"LITERATURE QUIZ":PRINT
    b2c_printf("\n");
