/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/mathdice.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x61dbe2f0ab80 ---------A   00010 PRINT TAB(31);"MATH DICE"
    0x61dbe2f0bf30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x61dbe2efa2b0 ---------A   00030 PRINT:PRINT:PRINT
    0x61dbe2f0baa0 ---------A   00040 PRINT "THIS PROGRAM GENERATES SUCCESIVE PICTURES OF TWO DICE."
    0x61dbe2f0a090 ---------A   00050 PRINT "WHEN TWO DICE AND AN EQUAL SIGN FOLLOWED BY A QUESTION"
    0x61dbe2f0a4d0 ---------A   00060 PRINT "MARK HAVE BEEN PRINTED, TYPE YOUR ANSWER AND THE RETURN KEY."
    0x61dbe2f09be0 ---------A   00070 PRINT "TO CONCLUDE THE LESSON, TYPE CONTROL-C AS YOUR ANSWER."
    0x61dbe2f09c30 ---------A   00080 PRINT
    0x61dbe2f09c80 ---------A   00090 PRINT
    0x61dbe2f09e40 ---------A T 00100 N=N+1
    0x61dbe2f11d80 ---------A   00110 D=INT(6*RND(1)+1)
    0x61dbe2f11e90 ---------A   00120 PRINT" ----- "
    0x61dbe2f096d0 ---------A   00130 IF D=1 THEN 200
    0x61dbe2f09670 ---------A   00140 IF D=2 THEN 180
    0x61dbe2f12480 ---------A   00150 IF D=3 THEN 180
    0x61dbe2f125e0 ---------A   00160 PRINT "I * * I"
    0x61dbe2f12650 ---------A   00170 GOTO 210
    0x61dbe2f12790 ---------A T 00180 PRINT "I *   I"
    0x61dbe2f12800 ---------A   00190 GOTO 210
    0x61dbe2f12940 ---------A T 00200 PRINT "I     I"
    0x61dbe2f12b90 ---------A T 00210 IF D=2 THEN 260
    0x61dbe2f12df0 ---------A   00220 IF D=4 THEN 260
    0x61dbe2f13050 ---------A   00230 IF D=6 THEN 270
    0x61dbe2f131b0 ---------A   00240 PRINT "I  *  I"
    0x61dbe2f13220 ---------A   00250 GOTO 280
    0x61dbe2f13360 ---------A T 00260 PRINT "I     I"
    0x61dbe2f133d0 ---------A   00265 GOTO 280
    0x61dbe2f13510 ---------A T 00270 PRINT "I * * I"
    0x61dbe2f13760 ---------A T 00280 IF D=1 THEN 350
    0x61dbe2f139c0 ---------A   00290 IF D=2 THEN 330
    0x61dbe2f13c20 ---------A   00300 IF D=3 THEN 330
    0x61dbe2f13d80 ---------A   00310 PRINT "I * * I"
    0x61dbe2f13df0 ---------A   00320 GOTO 360
    0x61dbe2f14140 ---------A T 00330 PRINT "I   * I"
    0x61dbe2f141b0 ---------A   00340 GOTO 360
    0x61dbe2f142f0 ---------A T 00350 PRINT "I     I"
    0x61dbe2f14440 ---------A T 00360 PRINT " ----- "
    0x61dbe2f144b0 ---------A   00370 PRINT
    0x61dbe2f14700 ---------A   00375 IF N=2 THEN 500
    0x61dbe2f14860 ---------A   00380 PRINT "   +"
    0x61dbe2f148d0 ---------A   00381 PRINT
    0x61dbe2f14bc0 ---------A   00400 A=D
    0x61dbe2f14c30 ---------A   00410 GOTO 100
    0x61dbe2f15030 ---------A T 00500 T=D+A
    0x61dbe2f151a0 ---------A   00510 PRINT "      =";
    0x61dbe2f153b0 ---------A   00520 INPUT T1
    0x61dbe2f15660 ---------A   00530 IF T1=T THEN 590
    0x61dbe2f157e0 ---------A   00540 PRINT "NO, COUNT THE SPOTS AND GIVE ANOTHER ANSWER."
    0x61dbe2f15950 ---------A   00541 PRINT "      =";
    0x61dbe2f15b60 ---------A   00550 INPUT T2
    0x61dbe2f15dc0 ---------A   00560 IF T2=T THEN 590
    0x61dbe2f16020 ---------A   00570 PRINT "NO, THE ANSWER IS";T
    0x61dbe2f16090 ---------A   00580 GOTO 600
    0x61dbe2f161d0 ---------A T 00590 PRINT "RIGHT!"
    0x61dbe2f16220 ---------A T 00600 PRINT
    0x61dbe2f16350 ---------A   00601 PRINT "THE DICE ROLL AGAIN..."
    0x61dbe2f163c0 ---------A   00610 PRINT
    0x61dbe2f165d0 ---------A   00615 N=0
    0x61dbe2f16640 ---------A   00620 GOTO 100
    0x61dbe2f16680 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00100      00410T, 00620T
     00180      00140T, 00150T
     00200      00130T
     00210      00170T, 00190T
     00260      00210T, 00220T
     00270      00230T
     00280      00250T, 00265T
     00330      00290T, 00300T
     00350      00280T
     00360      00320T, 00340T
     00500      00375T
     00590      00530T, 00560T
     00600      00580T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x61dbe2f0ab80 (00010)   0x61dbe2f0ab80 (00010)   0x61dbe2f16680 (00999)   0x61dbe2f16680 (00999)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01600 - 10000    8410 

 */



/*
 *  Symbol Table Listing for 'basic/mathdice.bas'
 *
    A                        Integer     
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
    D                        Integer     
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
    T                        Integer     
    T1                       Integer     
    T2                       Integer     
    TAB             Function Unknown (0)    args=1, int    
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
 *  Listing of basic/mathdice.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x61dbe2f0ab80 ---------A   01000 PRINT TAB(31);"MATH DICE"
    0x61dbe2f0bf30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x61dbe2efa2b0 ---------A   01020 PRINT:PRINT:PRINT
    0x61dbe2f0baa0 ---------A   01030 PRINT "THIS PROGRAM GENERATES SUCCESIVE PICTURES OF TWO DICE."
    0x61dbe2f0a090 ---------A   01040 PRINT "WHEN TWO DICE AND AN EQUAL SIGN FOLLOWED BY A QUESTION"
    0x61dbe2f0a4d0 ---------A   01050 PRINT "MARK HAVE BEEN PRINTED, TYPE YOUR ANSWER AND THE RETURN KEY."
    0x61dbe2f09be0 ---------A   01060 PRINT "TO CONCLUDE THE LESSON, TYPE CONTROL-C AS YOUR ANSWER."
    0x61dbe2f09c30 ---------A   01070 PRINT
    0x61dbe2f09c80 ---------A   01080 PRINT
    0x61dbe2f09e40 ---------A T 01090 N=N+1
    0x61dbe2f11d80 ---------A   01100 D=INT(6*RND(1)+1)
    0x61dbe2f11e90 ---------A   01110 PRINT" ----- "
    0x61dbe2f096d0 ---------A   01120 IF D=1 THEN 1190
    0x61dbe2f09670 ---------A   01130 IF D=2 THEN 1170
    0x61dbe2f12480 ---------A   01140 IF D=3 THEN 1170
    0x61dbe2f125e0 ---------A   01150 PRINT "I * * I"
    0x61dbe2f12650 ---------A   01160 GOTO 1200
    0x61dbe2f12790 ---------A T 01170 PRINT "I *   I"
    0x61dbe2f12800 ---------A   01180 GOTO 1200
    0x61dbe2f12940 ---------A T 01190 PRINT "I     I"
    0x61dbe2f12b90 ---------A T 01200 IF D=2 THEN 1250
    0x61dbe2f12df0 ---------A   01210 IF D=4 THEN 1250
    0x61dbe2f13050 ---------A   01220 IF D=6 THEN 1270
    0x61dbe2f131b0 ---------A   01230 PRINT "I  *  I"
    0x61dbe2f13220 ---------A   01240 GOTO 1280
    0x61dbe2f13360 ---------A T 01250 PRINT "I     I"
    0x61dbe2f133d0 ---------A   01260 GOTO 1280
    0x61dbe2f13510 ---------A T 01270 PRINT "I * * I"
    0x61dbe2f13760 ---------A T 01280 IF D=1 THEN 1350
    0x61dbe2f139c0 ---------A   01290 IF D=2 THEN 1330
    0x61dbe2f13c20 ---------A   01300 IF D=3 THEN 1330
    0x61dbe2f13d80 ---------A   01310 PRINT "I * * I"
    0x61dbe2f13df0 ---------A   01320 GOTO 1360
    0x61dbe2f14140 ---------A T 01330 PRINT "I   * I"
    0x61dbe2f141b0 ---------A   01340 GOTO 1360
    0x61dbe2f142f0 ---------A T 01350 PRINT "I     I"
    0x61dbe2f14440 ---------A T 01360 PRINT " ----- "
    0x61dbe2f144b0 ---------A   01370 PRINT
    0x61dbe2f14700 ---------A   01380 IF N=2 THEN 1430
    0x61dbe2f14860 ---------A   01390 PRINT "   +"
    0x61dbe2f148d0 ---------A   01400 PRINT
    0x61dbe2f14bc0 ---------A   01410 A=D
    0x61dbe2f14c30 ---------A   01420 GOTO 1090
    0x61dbe2f15030 ---------A T 01430 T=D+A
    0x61dbe2f151a0 ---------A   01440 PRINT "      =";
    0x61dbe2f153b0 ---------A   01450 INPUT T1
    0x61dbe2f15660 ---------A   01460 IF T1=T THEN 1530
    0x61dbe2f157e0 ---------A   01470 PRINT "NO, COUNT THE SPOTS AND GIVE ANOTHER ANSWER."
    0x61dbe2f15950 ---------A   01480 PRINT "      =";
    0x61dbe2f15b60 ---------A   01490 INPUT T2
    0x61dbe2f15dc0 ---------A   01500 IF T2=T THEN 1530
    0x61dbe2f16020 ---------A   01510 PRINT "NO, THE ANSWER IS";T
    0x61dbe2f16090 ---------A   01520 GOTO 1540
    0x61dbe2f161d0 ---------A T 01530 PRINT "RIGHT!"
    0x61dbe2f16220 ---------A T 01540 PRINT
    0x61dbe2f16350 ---------A   01550 PRINT "THE DICE ROLL AGAIN..."
    0x61dbe2f163c0 ---------A   01560 PRINT
    0x61dbe2f165d0 ---------A   01570 N=0
    0x61dbe2f16640 ---------A   01580 GOTO 1090
    0x61dbe2f16680 ---------A   01590 END
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
int    D_int;                                     // Basic: D 
int    N_int;                                     // Basic: N 
int    T_int;                                     // Basic: T 
int    T1_int;                                    // Basic: T1 
int    T2_int;                                    // Basic: T2 
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
