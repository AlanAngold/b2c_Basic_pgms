/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/lovepst1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ea6609685d0 ---------A   00001 REM NOTE: Basic language type forced to be:
    0x5ea660978f00 ---------A   00002 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5ea660978850 ---------A   00010 CLS: CLEAR 1500
    0x5ea660978ac0 ---------A   00020 PRINT @ 285, "Love"
    0x5ea660979e70 ---------A   00030 PRINT @ 409, "Copyright By"
    0x5ea660979f30 ---------A   00040 PRINT @ 534, "Creative Computing"
    0x5ea660979ff0 ---------A   00050 PRINT @ 657, "Morristown, New Jersey 07960"
    0x5ea660977d80 ---------A   00060 FOR D= 1 TO 1500: NEXT D
    0x5ea660977dc0 ---------A   00070 CLS
    0x5ea6609795e0 ---------A   00080 PRINT @ 194, "A Tribute to The Great American Artist, Robert Indiana."
    0x5ea660979680 ---------A   00090 PRINT @ 325, "His greatest work will be reproduced with a message of"
    0x5ea660978560 ---------A   00100 PRINT @ 389, "Your choice up to 60 Characters.  If you can't think of"
    0x5ea660978700 ---------A   00110 PRINT @ 460, "a message, simply enter the word `LOVE'"
    0x5ea66097fd10 ---------A   00120 PRINT @ 595,"";:INPUT "YOUR MESSAGE PLEASE..";A$: L = LEN(A$)
    0x5ea660980000 ---------A   00130 DIM B$(120)
    0x5ea660980100 ---------A   00140 PRINT @ 719, "HIT ANY KEY WHEN PRINTER IS READY"
    0x5ea660980710 ---------A T 00150 D$=INKEY$: IF D$="" THEN 150
    0x5ea660980cb0 ---------A   00160 FOR J=0 TO INT(60/L)
    0x5ea660981080 ---------A   00170 FOR I=1 TO L
    0x5ea660981860 ---------A   00180 B$(J*L+I)=MID$(A$,I,1)
    0x5ea660981ab0 ---------A   00190 NEXT I: NEXT J
    0x5ea660981db0 ---------A   00200 C=0
    0x5ea660982850 ---------A T 00210 A1=1: P=1: C=C+1: IF C=37 GOTO 640
    0x5ea6609829e0 ---------A   00220 LPRINT" "
    0x5ea660983120 ---------A T 00230 READ A: A1=A1+A: IF P=1 GOTO 250
    0x5ea660983940 ---------A   00240 FOR I=1 TO A: LPRINT" ";: NEXT I: P=1: GOTO 260
    0x5ea6609843b0 ---------A T 00250 FOR I=A1-A TO A1-1: LPRINT B$(I);: NEXT I: P=0
    0x5ea6609845e0 ---------A T 00260 IF A1<61 GOTO 230
    0x5ea660984680 ---------A   00270 GOTO 210
    0x5ea6609847d0 ---------A   00280 DATA 60
    0x5ea660984cb0 ---------A   00290 DATA  1, 12, 26,  9, 12
    0x5ea660985190 ---------A   00300 DATA  3,  8, 24, 17,  8
    0x5ea660985670 ---------A   00310 DATA  4,  6, 23, 21,  6
    0x5ea660985f20 ---------A   00320 DATA  4,  6, 22, 12,  5,  6,  5
    0x5ea6609865c0 ---------A   00330 DATA  4,  6, 21, 11,  8,  6,  4
    0x5ea660986c60 ---------A   00340 DATA  4,  6, 21, 10, 10,  5,  4
    0x5ea660987300 ---------A   00350 DATA  4,  6, 21,  9, 11,  5,  4
    0x5ea6609879a0 ---------A   00360 DATA  4,  6, 21,  8, 11,  6,  4
    0x5ea660988040 ---------A   00370 DATA  4,  6, 21,  7, 11,  7,  4
    0x5ea6609886f0 ---------A   00380 DATA  4,  6, 21,  6, 11,  8,  4
    0x5ea660988f60 ---------A   00390 DATA  4,  6, 19,  1,  1,  5, 11,  9,  4
    0x5ea6609897d0 ---------A   00400 DATA  4,  6, 19,  1,  1,  5, 10, 10,  4
    0x5ea66098a040 ---------A   00410 DATA  4,  6, 18,  2,  1,  6,  8, 11,  4
    0x5ea66098a8a0 ---------A   00420 DATA  4,  6, 17,  3,  1,  7,  5, 13,  4
    0x5ea66098af40 ---------A   00430 DATA  4,  6, 15,  5,  2, 23,  5
    0x5ea66098b420 ---------A   00440 DATA  1, 29,  5, 17,  8
    0x5ea66098b900 ---------A   00450 DATA  1, 29,  9,  9, 12
    0x5ea66098bde0 ---------A   00460 DATA  1, 13,  5, 40,  1
    0x5ea66098c2d0 ---------A   00470 DATA  1, 13,  5, 40,  1
    0x5ea66098cb40 ---------A   00480 DATA  4,  6, 13,  3, 10,  6, 12,  5,  1
    0x5ea66098d3b0 ---------A   00490 DATA  5,  6, 11,  3, 11,  6, 14,  3,  1
    0x5ea66098dc20 ---------A   00500 DATA  5,  6, 11,  3, 11,  6, 15,  2,  1
    0x5ea66098e490 ---------A   00510 DATA  6,  6,  9,  3, 12,  6, 16,  1,  1
    0x5ea66098ed00 ---------A   00520 DATA  6,  6,  9,  3, 12,  6,  7,  1, 10
    0x5ea66098f560 ---------A   00530 DATA  7,  6,  7,  3, 13,  6,  6,  2, 10
    0x5ea66098fc10 ---------A   00540 DATA  7,  6,  7,  3, 13, 14, 10
    0x5ea660990480 ---------A   00550 DATA  8,  6,  5,  3, 14,  6,  6,  2, 10
    0x5ea660990cf0 ---------A   00560 DATA  8,  6,  5,  3, 14,  6,  7,  1, 10
    0x5ea660991560 ---------A   00570 DATA  9,  6,  3,  3, 15,  6, 16,  1,  1
    0x5ea660991dd0 ---------A   00580 DATA  9,  6,  3,  3, 15,  6, 15,  2,  1
    0x5ea660992630 ---------A   00590 DATA 10,  6,  1,  3, 16,  6, 14,  3,  1
    0x5ea660992cd0 ---------A   00600 DATA 10, 10, 16,  6, 12,  5,  1
    0x5ea6609931b0 ---------A   00610 DATA 11,  8, 13, 27,  1
    0x5ea660993680 ---------A   00620 DATA 11,  8, 13, 27,  1
    0x5ea6609937e0 ---------A   00630 DATA 60
    0x5ea660994110 ---------A T 00640 FOR I=1 TO 9: LPRINT" ": NEXT I
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00150      00150T
     00210      00270T
     00230      00260T
     00250      00230T
     00260      00240T
     00640      00210T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5ea6609685d0 (00001)   0x000000000000 (00000)   0x5ea660994110 (00640)   0x5ea660994110 (00640)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01660 - 10000    8350 

 */



/*
 *  Symbol Table Listing for 'basic/lovepst1.bas'
 *
    A                        Float       
    A$                       String      
    A1                       Float       
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$              Array    String          {0,119} 
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
    D$                       String      
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Float       
    INKEY$                   String      
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Float       
    L                        Float       
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
    P                        Float       
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

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/lovepst1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ea6609685d0 ---------A   01000 REM NOTE: Basic language type forced to be:
    0x5ea660978f00 ---------A   01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5ea660978850 ---------A   01020 CLS: CLEAR 1500
    0x5ea660978ac0 ---------A   01030 PRINT @ 285, "Love"
    0x5ea660979e70 ---------A   01040 PRINT @ 409, "Copyright By"
    0x5ea660979f30 ---------A   01050 PRINT @ 534, "Creative Computing"
    0x5ea660979ff0 ---------A   01060 PRINT @ 657, "Morristown, New Jersey 07960"
    0x5ea660977d80 ---------A   01070 FOR D= 1 TO 1500: NEXT D
    0x5ea660977dc0 ---------A   01080 CLS
    0x5ea6609795e0 ---------A   01090 PRINT @ 194, "A Tribute to The Great American Artist, Robert Indiana."
    0x5ea660979680 ---------A   01100 PRINT @ 325, "His greatest work will be reproduced with a message of"
    0x5ea660978560 ---------A   01110 PRINT @ 389, "Your choice up to 60 Characters.  If you can't think of"
    0x5ea660978700 ---------A   01120 PRINT @ 460, "a message, simply enter the word `LOVE'"
    0x5ea66097fd10 ---------A   01130 PRINT @ 595,"";:INPUT "YOUR MESSAGE PLEASE..";A$: L = LEN(A$)
    0x5ea660980000 ---------A   01140 DIM B$(120)
    0x5ea660980100 ---------A   01150 PRINT @ 719, "HIT ANY KEY WHEN PRINTER IS READY"
    0x5ea660980710 ---------A T 01160 D$=INKEY$: IF D$="" THEN 1160
    0x5ea660980cb0 ---------A   01170 FOR J=0 TO INT(60/L)
    0x5ea660981080 ---------A   01180 FOR I=1 TO L
    0x5ea660981860 ---------A   01190 B$(J*L+I)=MID$(A$,I,1)
    0x5ea660981ab0 ---------A   01200 NEXT I: NEXT J
    0x5ea660981db0 ---------A   01210 C=0
    0x5ea660982850 ---------A T 01220 A1=1: P=1: C=C+1: IF C=37 GOTO 1650
    0x5ea6609829e0 ---------A   01230 LPRINT" "
    0x5ea660983120 ---------A T 01240 READ A: A1=A1+A: IF P=1 GOTO 1260
    0x5ea660983940 ---------A   01250 FOR I=1 TO A: LPRINT" ";: NEXT I: P=1: GOTO 1270
    0x5ea6609843b0 ---------A T 01260 FOR I=A1-A TO A1-1: LPRINT B$(I);: NEXT I: P=0
    0x5ea6609845e0 ---------A T 01270 IF A1<61 GOTO 1240
    0x5ea660984680 ---------A   01280 GOTO 1220
    0x5ea6609847d0 ---------A   01290 DATA 60
    0x5ea660984cb0 ---------A   01300 DATA  1, 12, 26,  9, 12
    0x5ea660985190 ---------A   01310 DATA  3,  8, 24, 17,  8
    0x5ea660985670 ---------A   01320 DATA  4,  6, 23, 21,  6
    0x5ea660985f20 ---------A   01330 DATA  4,  6, 22, 12,  5,  6,  5
    0x5ea6609865c0 ---------A   01340 DATA  4,  6, 21, 11,  8,  6,  4
    0x5ea660986c60 ---------A   01350 DATA  4,  6, 21, 10, 10,  5,  4
    0x5ea660987300 ---------A   01360 DATA  4,  6, 21,  9, 11,  5,  4
    0x5ea6609879a0 ---------A   01370 DATA  4,  6, 21,  8, 11,  6,  4
    0x5ea660988040 ---------A   01380 DATA  4,  6, 21,  7, 11,  7,  4
    0x5ea6609886f0 ---------A   01390 DATA  4,  6, 21,  6, 11,  8,  4
    0x5ea660988f60 ---------A   01400 DATA  4,  6, 19,  1,  1,  5, 11,  9,  4
    0x5ea6609897d0 ---------A   01410 DATA  4,  6, 19,  1,  1,  5, 10, 10,  4
    0x5ea66098a040 ---------A   01420 DATA  4,  6, 18,  2,  1,  6,  8, 11,  4
    0x5ea66098a8a0 ---------A   01430 DATA  4,  6, 17,  3,  1,  7,  5, 13,  4
    0x5ea66098af40 ---------A   01440 DATA  4,  6, 15,  5,  2, 23,  5
    0x5ea66098b420 ---------A   01450 DATA  1, 29,  5, 17,  8
    0x5ea66098b900 ---------A   01460 DATA  1, 29,  9,  9, 12
    0x5ea66098bde0 ---------A   01470 DATA  1, 13,  5, 40,  1
    0x5ea66098c2d0 ---------A   01480 DATA  1, 13,  5, 40,  1
    0x5ea66098cb40 ---------A   01490 DATA  4,  6, 13,  3, 10,  6, 12,  5,  1
    0x5ea66098d3b0 ---------A   01500 DATA  5,  6, 11,  3, 11,  6, 14,  3,  1
    0x5ea66098dc20 ---------A   01510 DATA  5,  6, 11,  3, 11,  6, 15,  2,  1
    0x5ea66098e490 ---------A   01520 DATA  6,  6,  9,  3, 12,  6, 16,  1,  1
    0x5ea66098ed00 ---------A   01530 DATA  6,  6,  9,  3, 12,  6,  7,  1, 10
    0x5ea66098f560 ---------A   01540 DATA  7,  6,  7,  3, 13,  6,  6,  2, 10
    0x5ea66098fc10 ---------A   01550 DATA  7,  6,  7,  3, 13, 14, 10
    0x5ea660990480 ---------A   01560 DATA  8,  6,  5,  3, 14,  6,  6,  2, 10
    0x5ea660990cf0 ---------A   01570 DATA  8,  6,  5,  3, 14,  6,  7,  1, 10
    0x5ea660991560 ---------A   01580 DATA  9,  6,  3,  3, 15,  6, 16,  1,  1
    0x5ea660991dd0 ---------A   01590 DATA  9,  6,  3,  3, 15,  6, 15,  2,  1
    0x5ea660992630 ---------A   01600 DATA 10,  6,  1,  3, 16,  6, 14,  3,  1
    0x5ea660992cd0 ---------A   01610 DATA 10, 10, 16,  6, 12,  5,  1
    0x5ea6609931b0 ---------A   01620 DATA 11,  8, 13, 27,  1
    0x5ea660993680 ---------A   01630 DATA 11,  8, 13, 27,  1
    0x5ea6609937e0 ---------A   01640 DATA 60
    0x5ea660994110 ---------A T 01650 FOR I=1 TO 9: LPRINT" ": NEXT I
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
char* data_01290s[]={"60"};
char* data_01300s[]={"1","12","26","9","12"};
char* data_01310s[]={"3","8","24","17","8"};
char* data_01320s[]={"4","6","23","21","6"};
char* data_01330s[]={"4","6","22","12","5","6","5"};
char* data_01340s[]={"4","6","21","11","8","6","4"};
char* data_01350s[]={"4","6","21","10","10","5","4"};
char* data_01360s[]={"4","6","21","9","11","5","4"};
char* data_01370s[]={"4","6","21","8","11","6","4"};
char* data_01380s[]={"4","6","21","7","11","7","4"};
char* data_01390s[]={"4","6","21","6","11","8","4"};
char* data_01400s[]={"4","6","19","1","1","5","11","9","4"};
char* data_01410s[]={"4","6","19","1","1","5","10","10","4"};
char* data_01420s[]={"4","6","18","2","1","6","8","11","4"};
char* data_01430s[]={"4","6","17","3","1","7","5","13","4"};
char* data_01440s[]={"4","6","15","5","2","23","5"};
char* data_01450s[]={"1","29","5","17","8"};
char* data_01460s[]={"1","29","9","9","12"};
char* data_01470s[]={"1","13","5","40","1"};
char* data_01480s[]={"1","13","5","40","1"};
char* data_01490s[]={"4","6","13","3","10","6","12","5","1"};
char* data_01500s[]={"5","6","11","3","11","6","14","3","1"};
char* data_01510s[]={"5","6","11","3","11","6","15","2","1"};
char* data_01520s[]={"6","6","9","3","12","6","16","1","1"};
char* data_01530s[]={"6","6","9","3","12","6","7","1","10"};
char* data_01540s[]={"7","6","7","3","13","6","6","2","10"};
char* data_01550s[]={"7","6","7","3","13","14","10"};
char* data_01560s[]={"8","6","5","3","14","6","6","2","10"};
char* data_01570s[]={"8","6","5","3","14","6","7","1","10"};
char* data_01580s[]={"9","6","3","3","15","6","16","1","1"};
char* data_01590s[]={"9","6","3","3","15","6","15","2","1"};
char* data_01600s[]={"10","6","1","3","16","6","14","3","1"};
char* data_01610s[]={"10","10","16","6","12","5","1"};
char* data_01620s[]={"11","8","13","27","1"};
char* data_01630s[]={"11","8","13","27","1"};
char* data_01640s[]={"60"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1290,  1,data_01290s},
    { 1300,  5,data_01300s},
    { 1310,  5,data_01310s},
    { 1320,  5,data_01320s},
    { 1330,  7,data_01330s},
    { 1340,  7,data_01340s},
    { 1350,  7,data_01350s},
    { 1360,  7,data_01360s},
    { 1370,  7,data_01370s},
    { 1380,  7,data_01380s},
    { 1390,  7,data_01390s},
    { 1400,  9,data_01400s},
    { 1410,  9,data_01410s},
    { 1420,  9,data_01420s},
    { 1430,  9,data_01430s},
    { 1440,  7,data_01440s},
    { 1450,  5,data_01450s},
    { 1460,  5,data_01460s},
    { 1470,  5,data_01470s},
    { 1480,  5,data_01480s},
    { 1490,  9,data_01490s},
    { 1500,  9,data_01500s},
    { 1510,  9,data_01510s},
    { 1520,  9,data_01520s},
    { 1530,  9,data_01530s},
    { 1540,  9,data_01540s},
    { 1550,  7,data_01550s},
    { 1560,  9,data_01560s},
    { 1570,  9,data_01570s},
    { 1580,  9,data_01580s},
    { 1590,  9,data_01590s},
    { 1600,  9,data_01600s},
    { 1610,  7,data_01610s},
    { 1620,  5,data_01620s},
    { 1630,  5,data_01630s},
    { 1640,  1,data_01640s},
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
float  A1_flt;                                    // Basic: A1 
char*  B_str_arr[120];                            // Basic: B$ 
float  C_flt;                                     // Basic: C 
float  D_flt;                                     // Basic: D 
char*  D_str;                                     // Basic: D$ 
float  I_flt;                                     // Basic: I 
char*  INKEY_str;                                 // Basic: INKEY$ 
float  J_flt;                                     // Basic: J 
float  L_flt;                                     // Basic: L 
float  P_flt;                                     // Basic: P 
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
    // 01000 REM NOTE: Basic language type forced to be:
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 CLS: CLEAR 1500
    ClearMemory(1500,4294967295);
    // 01030 PRINT @ 285, "Love"
    b2c_printf("Love\n");
    // 01040 PRINT @ 409, "Copyright By"
    b2c_printf("Copyright by\n");
    // 01050 PRINT @ 534, "Creative Computing"
    b2c_printf("Creative computing\n");
    // 01060 PRINT @ 657, "Morristown, New Jersey 07960"
    b2c_printf("Morristown, new jersey 07960\n");
    // 01070 FOR D= 1 TO 1500: NEXT D
    int dummy_1070=0; // Ignore this line.
}; // End-For(D_flt)
// 01080 CLS
ClearScreen(0);
// 01090 PRINT @ 194, "A Tribute to The Great American Artist, Robert Indiana."
b2c_printf("A tribute to the great american artist, robert indiana.\n");
// 01100 PRINT @ 325, "His greatest work will be reproduced with a message of"
b2c_printf("His greatest work will be reproduced with a message of\n");
// 01110 PRINT @ 389, "Your choice up to 60 Characters.  If you can't think of"
b2c_printf("Your choice up to 60 characters.  If you can't think of\n");
// 01120 PRINT @ 460, "a message, simply enter the word `LOVE'"
b2c_printf("A message, simply enter the word `love'\n");
// 01130 PRINT @ 595,"";:INPUT "YOUR MESSAGE PLEASE..";A$: L = LEN(A$)
L_flt = LEN(A_str);
// 01140 DIM B$(120)
// 01150 PRINT @ 719, "HIT ANY KEY WHEN PRINTER IS READY"
b2c_printf("Hit any key when printer is ready\n");

  Lbl_01160:
// 01160 D$=INKEY$: IF D$="" THEN 1160
if(strcmp(D_str,"")==0)goto Lbl_01160;
// 01170 FOR J=0 TO INT(60/L)
for(J_flt=0;J_flt<=INT(60/L_flt);J_flt++){
    // 01180 FOR I=1 TO L
    for(I_flt=1;I_flt<=L_flt;I_flt++){
        // 01190 B$(J*L+I)=MID$(A$,I,1)
        GLBpStr=MID$(A_str,I_flt,1);
        B_str_arr[(int)J_flt*L_flt+I_flt] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01200 NEXT I: NEXT J
        int dummy_1200=0; // Ignore this line.
    }; // End-For(J_flt)
    // 01210 C=0
    C_flt = 0;

  Lbl_01220:
    // 01220 A1=1: P=1: C=C+1: IF C=37 GOTO 1650
    if(C_flt==37)goto Lbl_01650;
    // 01230 LPRINT" "
    b2c_printf(" \n");

  Lbl_01240:
    // 01240 READ A: A1=A1+A: IF P=1 GOTO 1260
    if(P_flt==1)goto Lbl_01260;
    // 01250 FOR I=1 TO A: LPRINT" ";: NEXT I: P=1: GOTO 1270
    goto Lbl_01270;

  Lbl_01260:
    // 01260 FOR I=A1-A TO A1-1: LPRINT B$(I);: NEXT I: P=0
    P_flt = 0;

  Lbl_01270:
    // 01270 IF A1<61 GOTO 1240
    if(A1_flt<61)goto Lbl_01240;
    // 01280 GOTO 1220
    goto Lbl_01220;
    // 01290 DATA 60
    // 01300 DATA  1, 12, 26,  9, 12
    // 01310 DATA  3,  8, 24, 17,  8
    // 01320 DATA  4,  6, 23, 21,  6
    // 01330 DATA  4,  6, 22, 12,  5,  6,  5
    // 01340 DATA  4,  6, 21, 11,  8,  6,  4
    // 01350 DATA  4,  6, 21, 10, 10,  5,  4
    // 01360 DATA  4,  6, 21,  9, 11,  5,  4
    // 01370 DATA  4,  6, 21,  8, 11,  6,  4
    // 01380 DATA  4,  6, 21,  7, 11,  7,  4
    // 01390 DATA  4,  6, 21,  6, 11,  8,  4
    // 01400 DATA  4,  6, 19,  1,  1,  5, 11,  9,  4
    // 01410 DATA  4,  6, 19,  1,  1,  5, 10, 10,  4
    // 01420 DATA  4,  6, 18,  2,  1,  6,  8, 11,  4
    // 01430 DATA  4,  6, 17,  3,  1,  7,  5, 13,  4
    // 01440 DATA  4,  6, 15,  5,  2, 23,  5
    // 01450 DATA  1, 29,  5, 17,  8
    // 01460 DATA  1, 29,  9,  9, 12
    // 01470 DATA  1, 13,  5, 40,  1
    // 01480 DATA  1, 13,  5, 40,  1
    // 01490 DATA  4,  6, 13,  3, 10,  6, 12,  5,  1
    // 01500 DATA  5,  6, 11,  3, 11,  6, 14,  3,  1
    // 01510 DATA  5,  6, 11,  3, 11,  6, 15,  2,  1
    // 01520 DATA  6,  6,  9,  3, 12,  6, 16,  1,  1
    // 01530 DATA  6,  6,  9,  3, 12,  6,  7,  1, 10
    // 01540 DATA  7,  6,  7,  3, 13,  6,  6,  2, 10
    // 01550 DATA  7,  6,  7,  3, 13, 14, 10
    // 01560 DATA  8,  6,  5,  3, 14,  6,  6,  2, 10
    // 01570 DATA  8,  6,  5,  3, 14,  6,  7,  1, 10
    // 01580 DATA  9,  6,  3,  3, 15,  6, 16,  1,  1
    // 01590 DATA  9,  6,  3,  3, 15,  6, 15,  2,  1
    // 01600 DATA 10,  6,  1,  3, 16,  6, 14,  3,  1
    // 01610 DATA 10, 10, 16,  6, 12,  5,  1
    // 01620 DATA 11,  8, 13, 27,  1
    // 01630 DATA 11,  8, 13, 27,  1
    // 01640 DATA 60

  Lbl_01650:
    // 01650 FOR I=1 TO 9: LPRINT" ": NEXT I
    int dummy_1650=0; // Ignore this line.
}; // End-For(I_flt)
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
