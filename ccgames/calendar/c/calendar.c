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
    0x56c225273ac0 ---------A   00010 PRINT TAB(32);"CALENDAR"
    0x56c225274e70 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56c225274ff0 ---------A   00030 PRINT:PRINT:PRINT
    0x56c2252632b0 ---------A   00100 REM     VALUES FOR 1979 - SEE NOTES
    0x56c225272770 ---------A   00110 DIM M(12)
    0x56c225273620 ---------A   00120 FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
    0x56c22527a900 ---------A   00130 D=1: REM 1979 STARTS ON MONDAY (0=SUN, -1=MON, -2=TUES...)
    0x56c22527ab60 ---------A   00140 S=0
    0x56c22527abb0 ---------A   00150 REM     READ DAYS OF EACH MONTH
    0x56c22527b150 ---------A   00160 FOR N=0 TO 12: READ M(N): NEXT N
    0x56c22527b190 ---------A   00170 REM
    0x56c22527b430 ---------A   00180 FOR N=1 TO 12
    0x56c22527b9a0 ---------A   00190 PRINT: PRINT: S=S+M(N-1)
    0x56c22527bd30 ---------A   00200 PRINT "**";S;TAB(7);
    0x56c22527c270 ---------A   00210 FOR I=1 TO 18: PRINT "*";: NEXT I
    0x56c22527cd10 ---------A   00220 ON N GOTO 230,240,250,260,270,280,290,300,310,320,330,340
    0x56c22527cee0 ---------A T 00230 PRINT " JANUARY ";: GOTO 350
    0x56c22527d0a0 ---------A T 00240 PRINT " FEBRUARY";: GOTO 350
    0x56c22527d260 ---------A T 00250 PRINT "  MARCH  ";: GOTO 350
    0x56c22527d420 ---------A T 00260 PRINT "  APRIL  ";: GOTO 350
    0x56c22527d5e0 ---------A T 00270 PRINT "   MAY   ";: GOTO 350
    0x56c22527d7a0 ---------A T 00280 PRINT "   JUNE  ";: GOTO 350
    0x56c22527d960 ---------A T 00290 PRINT "   JULY  ";: GOTO 350
    0x56c22527db20 ---------A T 00300 PRINT "  AUGUST ";: GOTO 350
    0x56c22527dce0 ---------A T 00310 PRINT "SEPTEMBER";: GOTO 350
    0x56c22527dea0 ---------A T 00320 PRINT " OCTOBER ";: GOTO 350
    0x56c22527e050 ---------A T 00330 PRINT " NOVEMBER";: GOTO 350
    0x56c22527e1c0 ---------A T 00340 PRINT " DECEMBER";
    0x56c22527e700 ---------A T 00350 FOR I=1 TO 18: PRINT "*";: NEXT I
    0x56c22527ea90 ---------A   00360 PRINT 365-S;"**";
    0x56c22527eb10 ---------A   00370 REM   366-S;     ON LEAP YEARS
    0x56c22527eed0 ---------A   00380 PRINT CHR$(10): PRINT "     S       M       T       W";
    0x56c22527f030 ---------A   00390 PRINT "       T       F       S"
    0x56c22527f2c0 ---------A   00400 PRINT
    0x56c22527f800 ---------A   00410 FOR I=1 TO 59: PRINT "*";: NEXT I
    0x56c22527f880 ---------A   00420 REM
    0x56c22527fc20 ---------A   00430 FOR W=1 TO 6
    0x56c22527fe40 ---------A   00440 PRINT CHR$(10)
    0x56c22527ffd0 ---------A   00450 PRINT TAB(4)
    0x56c225280040 ---------A   00460 REM
    0x56c2252803e0 ---------A   00470 FOR G=1 TO 7
    0x56c225280720 ---------A   00480 D=D+1
    0x56c225280b30 ---------A   00490 D2=D-S
    0x56c225280e90 ---------A   00500 IF D2>M(N) THEN 580
    0x56c225281240 ---------A   00510 IF D2>0 THEN PRINT D2;
    0x56c225281620 ---------A   00520 PRINT TAB(4+8*G);
    0x56c225281750 ---------A   00530 NEXT G
    0x56c2252817d0 ---------A   00540 REM
    0x56c225281b30 ---------A   00550 IF D2=M(N) THEN 590
    0x56c225281c70 ---------A   00560 NEXT W
    0x56c225281cf0 ---------A   00570 REM
    0x56c225282050 ---------A T 00580 D=D-G
    0x56c225282180 ---------A T 00590 NEXT N
    0x56c225282200 ---------A   00600 REM
    0x56c225282830 ---------A   00610 FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
    0x56c225283440 ---------A   00620 DATA 0,31,28,31,30,31,30,31,31,30,31,30,31
    0x56c2252834c0 ---------A   00630 REM  0,31,29,  ..., ON LEAP YEARS
    0x56c225283540 ---------A   00640 RUN "MENU"
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
   A) 0x56c225273ac0 (00010)   0x000000000000 (00000)   0x56c225283540 (00640)   0x56c225283540 (00640)   


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
    D                        Float       
    D2                       Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Float       
    HEX$            Function String          args=1, int    
    I                        Float       
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
    M               Array    Float           {0,11} 
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
    S                        Float       
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
    W                        Float       

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
    0x56c225273ac0 ---------A   01000 PRINT TAB(32);"CALENDAR"
    0x56c225274e70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56c225274ff0 ---------A   01020 PRINT:PRINT:PRINT
    0x56c2252632b0 ---------A   01030 REM     VALUES FOR 1979 - SEE NOTES
    0x56c225272770 ---------A   01040 DIM M(12)
    0x56c225273620 ---------A   01050 FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
    0x56c22527a900 ---------A   01060 D=1: REM 1979 STARTS ON MONDAY (0=SUN, -1=MON, -2=TUES...)
    0x56c22527ab60 ---------A   01070 S=0
    0x56c22527abb0 ---------A   01080 REM     READ DAYS OF EACH MONTH
    0x56c22527b150 ---------A   01090 FOR N=0 TO 12: READ M(N): NEXT N
    0x56c22527b190 ---------A   01100 REM
    0x56c22527b430 ---------A   01110 FOR N=1 TO 12
    0x56c22527b9a0 ---------A   01120 PRINT: PRINT: S=S+M(N-1)
    0x56c22527bd30 ---------A   01130 PRINT "**";S;TAB(7);
    0x56c22527c270 ---------A   01140 FOR I=1 TO 18: PRINT "*";: NEXT I
    0x56c22527cd10 ---------A   01150 ON N GOTO 1160,1170,1180,1190,1200,1210,1220,1230,1240,1250,1260,1270
    0x56c22527cee0 ---------A T 01160 PRINT " JANUARY ";: GOTO 1280
    0x56c22527d0a0 ---------A T 01170 PRINT " FEBRUARY";: GOTO 1280
    0x56c22527d260 ---------A T 01180 PRINT "  MARCH  ";: GOTO 1280
    0x56c22527d420 ---------A T 01190 PRINT "  APRIL  ";: GOTO 1280
    0x56c22527d5e0 ---------A T 01200 PRINT "   MAY   ";: GOTO 1280
    0x56c22527d7a0 ---------A T 01210 PRINT "   JUNE  ";: GOTO 1280
    0x56c22527d960 ---------A T 01220 PRINT "   JULY  ";: GOTO 1280
    0x56c22527db20 ---------A T 01230 PRINT "  AUGUST ";: GOTO 1280
    0x56c22527dce0 ---------A T 01240 PRINT "SEPTEMBER";: GOTO 1280
    0x56c22527dea0 ---------A T 01250 PRINT " OCTOBER ";: GOTO 1280
    0x56c22527e050 ---------A T 01260 PRINT " NOVEMBER";: GOTO 1280
    0x56c22527e1c0 ---------A T 01270 PRINT " DECEMBER";
    0x56c22527e700 ---------A T 01280 FOR I=1 TO 18: PRINT "*";: NEXT I
    0x56c22527ea90 ---------A   01290 PRINT 365-S;"**";
    0x56c22527eb10 ---------A   01300 REM   366-S;     ON LEAP YEARS
    0x56c22527eed0 ---------A   01310 PRINT CHR$(10): PRINT "     S       M       T       W";
    0x56c22527f030 ---------A   01320 PRINT "       T       F       S"
    0x56c22527f2c0 ---------A   01330 PRINT
    0x56c22527f800 ---------A   01340 FOR I=1 TO 59: PRINT "*";: NEXT I
    0x56c22527f880 ---------A   01350 REM
    0x56c22527fc20 ---------A   01360 FOR W=1 TO 6
    0x56c22527fe40 ---------A   01370 PRINT CHR$(10)
    0x56c22527ffd0 ---------A   01380 PRINT TAB(4)
    0x56c225280040 ---------A   01390 REM
    0x56c2252803e0 ---------A   01400 FOR G=1 TO 7
    0x56c225280720 ---------A   01410 D=D+1
    0x56c225280b30 ---------A   01420 D2=D-S
    0x56c225280e90 ---------A   01430 IF D2>M(N) THEN 1510
    0x56c225281240 ---------A   01440 IF D2>0 THEN PRINT D2;
    0x56c225281620 ---------A   01450 PRINT TAB(4+8*G);
    0x56c225281750 ---------A   01460 NEXT G
    0x56c2252817d0 ---------A   01470 REM
    0x56c225281b30 ---------A   01480 IF D2=M(N) THEN 1520
    0x56c225281c70 ---------A   01490 NEXT W
    0x56c225281cf0 ---------A   01500 REM
    0x56c225282050 ---------A T 01510 D=D-G
    0x56c225282180 ---------A T 01520 NEXT N
    0x56c225282200 ---------A   01530 REM
    0x56c225282830 ---------A   01540 FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
    0x56c225283440 ---------A   01550 DATA 0,31,28,31,30,31,30,31,31,30,31,30,31
    0x56c2252834c0 ---------A   01560 REM  0,31,29,  ..., ON LEAP YEARS
    0x56c225283540 ---------A   01570 RUN "MENU"
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
float  D_flt;                                     // Basic: D 
float  D2_flt;                                    // Basic: D2 
float  G_flt;                                     // Basic: G 
float  I_flt;                                     // Basic: I 
float  M_flt_arr[12];                             // Basic: M 
float  N_flt;                                     // Basic: N 
float  S_flt;                                     // Basic: S 
float  W_flt;                                     // Basic: W 
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
