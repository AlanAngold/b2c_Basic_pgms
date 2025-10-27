/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/calendar.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x58cecfe03b80 ---------A   00010 PRINT TAB(32);"CALENDAR"
    0x58cecfe04f30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x58cecfe050b0 ---------A   00030 PRINT:PRINT:PRINT
    0x58cecfdf32b0 ---------A   00100 REM     VALUES FOR 1979 - SEE NOTES
    0x58cecfe02830 ---------A   00110 DIM M(12)
    0x58cecfe036e0 ---------A   00120 FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
    0x58cecfe0a9c0 ---------A   00130 D=1: REM 1979 STARTS ON MONDAY (0=SUN, -1=MON, -2=TUES...)
    0x58cecfe0ac20 ---------A   00140 S=0
    0x58cecfe0ac70 ---------A   00150 REM     READ DAYS OF EACH MONTH
    0x58cecfe0b210 ---------A   00160 FOR N=0 TO 12: READ M(N): NEXT N
    0x58cecfe0b250 ---------A   00170 REM
    0x58cecfe0b4f0 ---------A   00180 FOR N=1 TO 12
    0x58cecfe0ba60 ---------A   00190 PRINT: PRINT: S=S+M(N-1)
    0x58cecfe0bdf0 ---------A   00200 PRINT "**";S;TAB(7);
    0x58cecfe0c330 ---------A   00210 FOR I=1 TO 18: PRINT "*";: NEXT I
    0x58cecfe0cdd0 ---------A   00220 ON N GOTO 230,240,250,260,270,280,290,300,310,320,330,340
    0x58cecfe0cfa0 ---------A T 00230 PRINT " JANUARY ";: GOTO 350
    0x58cecfe0d160 ---------A T 00240 PRINT " FEBRUARY";: GOTO 350
    0x58cecfe0d320 ---------A T 00250 PRINT "  MARCH  ";: GOTO 350
    0x58cecfe0d4e0 ---------A T 00260 PRINT "  APRIL  ";: GOTO 350
    0x58cecfe0d6a0 ---------A T 00270 PRINT "   MAY   ";: GOTO 350
    0x58cecfe0d860 ---------A T 00280 PRINT "   JUNE  ";: GOTO 350
    0x58cecfe0da20 ---------A T 00290 PRINT "   JULY  ";: GOTO 350
    0x58cecfe0dbe0 ---------A T 00300 PRINT "  AUGUST ";: GOTO 350
    0x58cecfe0dda0 ---------A T 00310 PRINT "SEPTEMBER";: GOTO 350
    0x58cecfe0df60 ---------A T 00320 PRINT " OCTOBER ";: GOTO 350
    0x58cecfe0e110 ---------A T 00330 PRINT " NOVEMBER";: GOTO 350
    0x58cecfe0e280 ---------A T 00340 PRINT " DECEMBER";
    0x58cecfe0e7c0 ---------A T 00350 FOR I=1 TO 18: PRINT "*";: NEXT I
    0x58cecfe0eb50 ---------A   00360 PRINT 365-S;"**";
    0x58cecfe0ebd0 ---------A   00370 REM   366-S;     ON LEAP YEARS
    0x58cecfe0ef90 ---------A   00380 PRINT CHR$(10): PRINT "     S       M       T       W";
    0x58cecfe0f0f0 ---------A   00390 PRINT "       T       F       S"
    0x58cecfe0f380 ---------A   00400 PRINT
    0x58cecfe0f8c0 ---------A   00410 FOR I=1 TO 59: PRINT "*";: NEXT I
    0x58cecfe0f940 ---------A   00420 REM
    0x58cecfe0fce0 ---------A   00430 FOR W=1 TO 6
    0x58cecfe0ff00 ---------A   00440 PRINT CHR$(10)
    0x58cecfe10090 ---------A   00450 PRINT TAB(4)
    0x58cecfe10100 ---------A   00460 REM
    0x58cecfe104a0 ---------A   00470 FOR G=1 TO 7
    0x58cecfe107e0 ---------A   00480 D=D+1
    0x58cecfe10bf0 ---------A   00490 D2=D-S
    0x58cecfe10f50 ---------A   00500 IF D2>M(N) THEN 580
    0x58cecfe11300 ---------A   00510 IF D2>0 THEN PRINT D2;
    0x58cecfe116e0 ---------A   00520 PRINT TAB(4+8*G);
    0x58cecfe11810 ---------A   00530 NEXT G
    0x58cecfe11890 ---------A   00540 REM
    0x58cecfe11bf0 ---------A   00550 IF D2=M(N) THEN 590
    0x58cecfe11d30 ---------A   00560 NEXT W
    0x58cecfe11db0 ---------A   00570 REM
    0x58cecfe12110 ---------A T 00580 D=D-G
    0x58cecfe12240 ---------A T 00590 NEXT N
    0x58cecfe122c0 ---------A   00600 REM
    0x58cecfe128f0 ---------A   00610 FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
    0x58cecfe13500 ---------A   00620 DATA 0,31,28,31,30,31,30,31,31,30,31,30,31
    0x58cecfe13580 ---------A   00630 REM  0,31,29,  ..., ON LEAP YEARS
    0x58cecfe13600 ---------A   00640 RUN "MENU"
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00230      00220T
     00240      00220T
     00250      00220T
     00260      00220T
     00270      00220T
     00280      00220T
     00290      00220T
     00300      00220T
     00310      00220T
     00320      00220T
     00330      00220T
     00340      00220T
     00350      00230T, 00240T, 00250T, 00260T, 00270T, 00280T, 00290T, 00300T, 
                00310T, 00320T, 00330T
     00580      00500T
     00590      00550T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x58cecfe03b80 (00010)   0x58cecfe03b80 (00010)   0x58cecfe13600 (00640)   0x58cecfe13600 (00640)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01580 - 10000    8430 

 */



/*
 *  Symbol Table Listing for 'basic/calendar.bas'
 *
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
    D2                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
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
    M               Array    Integer         {0,11} 
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
    S                        Integer     
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
    W                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/calendar.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x58cecfe03b80 ---------A   01000 PRINT TAB(32);"CALENDAR"
    0x58cecfe04f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x58cecfe050b0 ---------A   01020 PRINT:PRINT:PRINT
    0x58cecfdf32b0 ---------A   01030 REM     VALUES FOR 1979 - SEE NOTES
    0x58cecfe02830 ---------A   01040 DIM M(12)
    0x58cecfe036e0 ---------A   01050 FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
    0x58cecfe0a9c0 ---------A   01060 D=1: REM 1979 STARTS ON MONDAY (0=SUN, -1=MON, -2=TUES...)
    0x58cecfe0ac20 ---------A   01070 S=0
    0x58cecfe0ac70 ---------A   01080 REM     READ DAYS OF EACH MONTH
    0x58cecfe0b210 ---------A   01090 FOR N=0 TO 12: READ M(N): NEXT N
    0x58cecfe0b250 ---------A   01100 REM
    0x58cecfe0b4f0 ---------A   01110 FOR N=1 TO 12
    0x58cecfe0ba60 ---------A   01120 PRINT: PRINT: S=S+M(N-1)
    0x58cecfe0bdf0 ---------A   01130 PRINT "**";S;TAB(7);
    0x58cecfe0c330 ---------A   01140 FOR I=1 TO 18: PRINT "*";: NEXT I
    0x58cecfe0cdd0 ---------A   01150 ON N GOTO 1160,1170,1180,1190,1200,1210,1220,1230,1240,1250,1260,1270
    0x58cecfe0cfa0 ---------A T 01160 PRINT " JANUARY ";: GOTO 1280
    0x58cecfe0d160 ---------A T 01170 PRINT " FEBRUARY";: GOTO 1280
    0x58cecfe0d320 ---------A T 01180 PRINT "  MARCH  ";: GOTO 1280
    0x58cecfe0d4e0 ---------A T 01190 PRINT "  APRIL  ";: GOTO 1280
    0x58cecfe0d6a0 ---------A T 01200 PRINT "   MAY   ";: GOTO 1280
    0x58cecfe0d860 ---------A T 01210 PRINT "   JUNE  ";: GOTO 1280
    0x58cecfe0da20 ---------A T 01220 PRINT "   JULY  ";: GOTO 1280
    0x58cecfe0dbe0 ---------A T 01230 PRINT "  AUGUST ";: GOTO 1280
    0x58cecfe0dda0 ---------A T 01240 PRINT "SEPTEMBER";: GOTO 1280
    0x58cecfe0df60 ---------A T 01250 PRINT " OCTOBER ";: GOTO 1280
    0x58cecfe0e110 ---------A T 01260 PRINT " NOVEMBER";: GOTO 1280
    0x58cecfe0e280 ---------A T 01270 PRINT " DECEMBER";
    0x58cecfe0e7c0 ---------A T 01280 FOR I=1 TO 18: PRINT "*";: NEXT I
    0x58cecfe0eb50 ---------A   01290 PRINT 365-S;"**";
    0x58cecfe0ebd0 ---------A   01300 REM   366-S;     ON LEAP YEARS
    0x58cecfe0ef90 ---------A   01310 PRINT CHR$(10): PRINT "     S       M       T       W";
    0x58cecfe0f0f0 ---------A   01320 PRINT "       T       F       S"
    0x58cecfe0f380 ---------A   01330 PRINT
    0x58cecfe0f8c0 ---------A   01340 FOR I=1 TO 59: PRINT "*";: NEXT I
    0x58cecfe0f940 ---------A   01350 REM
    0x58cecfe0fce0 ---------A   01360 FOR W=1 TO 6
    0x58cecfe0ff00 ---------A   01370 PRINT CHR$(10)
    0x58cecfe10090 ---------A   01380 PRINT TAB(4)
    0x58cecfe10100 ---------A   01390 REM
    0x58cecfe104a0 ---------A   01400 FOR G=1 TO 7
    0x58cecfe107e0 ---------A   01410 D=D+1
    0x58cecfe10bf0 ---------A   01420 D2=D-S
    0x58cecfe10f50 ---------A   01430 IF D2>M(N) THEN 1510
    0x58cecfe11300 ---------A   01440 IF D2>0 THEN PRINT D2;
    0x58cecfe116e0 ---------A   01450 PRINT TAB(4+8*G);
    0x58cecfe11810 ---------A   01460 NEXT G
    0x58cecfe11890 ---------A   01470 REM
    0x58cecfe11bf0 ---------A   01480 IF D2=M(N) THEN 1520
    0x58cecfe11d30 ---------A   01490 NEXT W
    0x58cecfe11db0 ---------A   01500 REM
    0x58cecfe12110 ---------A T 01510 D=D-G
    0x58cecfe12240 ---------A T 01520 NEXT N
    0x58cecfe122c0 ---------A   01530 REM
    0x58cecfe128f0 ---------A   01540 FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
    0x58cecfe13500 ---------A   01550 DATA 0,31,28,31,30,31,30,31,31,30,31,30,31
    0x58cecfe13580 ---------A   01560 REM  0,31,29,  ..., ON LEAP YEARS
    0x58cecfe13600 ---------A   01570 RUN "MENU"
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
char* data_01550s[]={"0","31","28","31","30","31","30","31","31","30","31","30","31"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1550, 13,data_01550s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    D_int;                                     // Basic: D 
int    D2_int;                                    // Basic: D2 
int    G_int;                                     // Basic: G 
int    I_int;                                     // Basic: I 
int    M_int_arr[12];                             // Basic: M 
int    N_int;                                     // Basic: N 
int    S_int;                                     // Basic: S 
int    W_int;                                     // Basic: W 
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
