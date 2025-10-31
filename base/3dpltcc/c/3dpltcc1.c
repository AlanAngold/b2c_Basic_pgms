/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/3dpltcc1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62e713751db0 ---------A   00001  REM NOTE: Basic language type forced to be:
    0x62e713751f30 ---------A   00002  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x62e713751e70 ---------A   00010  CLS
    0x62e71374f6d0 ---------A   00020  PRINT@283,"3-D PLOT"
    0x62e71374f670 ---------A   00030  PRINT@409,"COPYRIGHT BY"
    0x62e7137402b0 ---------A   00040  PRINT@534,"CREATIVE COMPUTING"
    0x62e71374f9e0 ---------A   00050  PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x62e713750040 ---------A   00060  FOR QZ=1 TO 1500
    0x62e7137520b0 ---------A   00070  NEXT
    0x62e713751ff0 ---------A   00080  CLS
    0x62e713751740 ---------A   00160  Q=0
    0x62e71374fc30 ---------A   00170  GOTO190
    0x62e7137521d0 ---------A T 00180  PRINT"THERE ARE ONLY SIX FUNCTIONS. ONE THROUGH SIX INCLUSIVE"
    0x62e713750720 ---------A T 00190  CLS:PRINT"WHICH FUNCTION WOULD YOU LIKE ME TO PRINT (1-6)"
    0x62e713757d00 ---------A   00200  INPUT A: IF A<1 OR A>6 THEN 180
    0x62e713757d60 ---------A   00210  CLS
    0x62e713758150 ---------A   00220  FOR X=-30 TO 30 STEP 1.5
    0x62e7137583f0 ---------A   00230  L=0
    0x62e713758cd0 ---------A   00240  Y1=5*INT(SQR(900-X*X)/5)
    0x62e713759160 ---------A   00250  FOR Y=Y1 TO -Y1 STEP -5
    0x62e7137598a0 ---------A   00260  P=SQR(X*X+Y*Y)
    0x62e713759910 ---------A   00270  GOSUB 390
    0x62e713759c40 ---------A   00280  IF Z<=L THEN 330
    0x62e713759e80 ---------A   00290  L=Z
    0x62e71375a0d0 ---------A   00300  IF Q=0 THEN 320
    0x62e71375a3b0 ---------A T 00320  PRINT TAB(Z);"*";
    0x62e71375a4f0 ---------A T 00330  NEXT Y
    0x62e71375a760 ---------A   00340  IF Q=0 THEN 360
    0x62e71375a7e0 ---------A T 00360  PRINT
    0x62e71375a920 ---------A   00370  NEXT X
    0x62e71375a9c0 ---------A   00380  GOTO 520
    0x62e71375afb0 ---------B G 00390  ON A GOTO 400,420,440,460,480,500
    0x62e71375bb30 ---------B T 00400  Z=INT(25+(SQR(900.01-P*P)*.9-2)-.7*Y)
    0x62e71375bdd0 ---------B   00410  GOTO510
    0x62e71375c840 ---------B T 00420  Z=INT(25+(30*CSNG(-P*P/100))-.7*Y)
    0x62e71375c8c0 ---------B   00430  GOTO510
    0x62e71375d350 ---------B T 00440  Z=INT(25+(30*(COS(P/16)^2))-.7*Y)
    0x62e71375d3d0 ---------B   00450  GOTO510
    0x62e71375de20 ---------B T 00460  Z=INT(25+(30-30*SIN(P/19))-.7*Y)
    0x62e71375deb0 ---------B   00470  GOTO510
    0x62e71375e9e0 ---------B T 00480  Z=INT(25+(30*CSNG(-COS(P/16))-30)-.7*Y)
    0x62e71375ea60 ---------B   00490  GOTO510
    0x62e71375f4b0 ---------B T 00500  Z=INT(25+(30+4*SIN(P/15))-.7*Y)
    0x62e71375f500 ---------B T 00510  RETURN
    0x62e71375f6e0 ---------A T 00520  PRINT"WOULD YOU LIKE ME TO PRINT ANOTHER FUNCTION";
    0x62e71375fd00 ---------A   00530  INPUTB$:IF LEFT$(B$,1)="Y"THEN190
    0x62e71375fd60 ---------A   00540  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00180      00200T
     00190      00170T, 00530T
     00320      00300T
     00330      00280T
     00360      00340T
     00390      00270G
     00400      00390T
     00420      00390T
     00440      00390T
     00460      00390T
     00480      00390T
     00500      00390T
     00510      00410T, 00430T, 00450T, 00470T, 00490T
     00520      00380T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x62e713751db0 (00001)   0x62e713751db0 (00001)   0x62e71375fd60 (00540)   0x62e71375fd60 (00540)   
   B) 0x62e71375afb0 (00390)   0x62e71375afb0 (00390)   0x62e71375f500 (00510)   0x62e71375f500 (00510)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/3dpltcc1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62e713751db0 ---------A   00001  REM NOTE
    0x62e713751f30 ---------A   00002  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x62e713751e70 ---------A   00010  CLS
    0x62e71374f6d0 ---------A   00020  PRINT@283,"3-D PLOT"
    0x62e71374f670 ---------A   00030  PRINT@409,"COPYRIGHT BY"
    0x62e7137402b0 ---------A   00040  PRINT@534,"CREATIVE COMPUTING"
    0x62e71374f9e0 ---------A   00050  PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x62e713750040 ---------A   00060  FOR QZ=1 TO 1500
    0x62e7137520b0 ---------A   00070  NEXT
    0x62e713751ff0 ---------A   00080  CLS
    0x62e713751740 ---------A   00160  Q=0
    0x62e71374fc30 ---------A   00170  GOTO190
    0x62e7137521d0 ---------A T 00180  PRINT"THERE ARE ONLY SIX FUNCTIONS. ONE THROUGH SIX INCLUSIVE"
    0x62e713752230 ---------- T 00190  CLS
    0x62e713750720 ---------A T      a PRINT"WHICH FUNCTION WOULD YOU LIKE ME TO PRINT (1-6)"
    0x62e713750880 ----------   00200  INPUT A
    0x62e713757d00 ---------A        a IF A<1 OR A>6 THEN 180
    0x62e713757d60 ---------A   00210  CLS
    0x62e713758150 ---------A   00220  FOR X=-30 TO 30 STEP 1.5
    0x62e7137583f0 ---------A   00230  L=0
    0x62e713758cd0 ---------A   00240  Y1=5*INT(SQR(900-X*X)/5)
    0x62e713759160 ---------A   00250  FOR Y=Y1 TO -Y1 STEP -5
    0x62e7137598a0 ---------A   00260  P=SQR(X*X+Y*Y)
    0x62e713759910 ---------A   00270  GOSUB 390
    0x62e713759c40 ---------A   00280  IF Z<=L THEN 330
    0x62e713759e80 ---------A   00290  L=Z
    0x62e71375a0d0 ---------A   00300  IF Q=0 THEN 320
    0x62e71375a3b0 ---------A T 00320  PRINT TAB(Z);"*";
    0x62e71375a4f0 ---------A T 00330  NEXT Y
    0x62e71375a760 ---------A   00340  IF Q=0 THEN 360
    0x62e71375a7e0 ---------A T 00360  PRINT
    0x62e71375a920 ---------A   00370  NEXT X
    0x62e71375a9c0 ---------A   00380  GOTO 520
    0x62e71375afb0 ---------B G 00390  ON A GOTO 400,420,440,460,480,500
    0x62e71375bb30 ---------B T 00400  Z=INT(25+(SQR(900.01-P*P)*.9-2)-.7*Y)
    0x62e71375bdd0 ---------B   00410  GOTO510
    0x62e71375c840 ---------B T 00420  Z=INT(25+(30*CSNG(-P*P/100))-.7*Y)
    0x62e71375c8c0 ---------B   00430  GOTO510
    0x62e71375d350 ---------B T 00440  Z=INT(25+(30*(COS(P/16)^2))-.7*Y)
    0x62e71375d3d0 ---------B   00450  GOTO510
    0x62e71375de20 ---------B T 00460  Z=INT(25+(30-30*SIN(P/19))-.7*Y)
    0x62e71375deb0 ---------B   00470  GOTO510
    0x62e71375e9e0 ---------B T 00480  Z=INT(25+(30*CSNG(-COS(P/16))-30)-.7*Y)
    0x62e71375ea60 ---------B   00490  GOTO510
    0x62e71375f4b0 ---------B T 00500  Z=INT(25+(30+4*SIN(P/15))-.7*Y)
    0x62e71375f500 ---------B T 00510  RETURN
    0x62e71375f6e0 ---------A T 00520  PRINT"WOULD YOU LIKE ME TO PRINT ANOTHER FUNCTION";
    0x62e71375f8e0 ----------   00530  INPUTB$
    0x62e71375fd00 ---------A        a IF LEFT$(B$,1)="Y"THEN190
    0x62e71375fd60 ---------A   00540  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/3dpltcc1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62e713751db0 ---------A   01000  REM NOTE
    0x62e713751f30 ---------A   01010  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x62e713751e70 ---------A   01020  CLS
    0x62e71374f6d0 ---------A   01030  PRINT@283,"3-D PLOT"
    0x62e71374f670 ---------A   01040  PRINT@409,"COPYRIGHT BY"
    0x62e7137402b0 ---------A   01050  PRINT@534,"CREATIVE COMPUTING"
    0x62e71374f9e0 ---------A   01060  PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x62e713750040 ---------A   01070  FOR QZ=1 TO 1500
    0x62e7137520b0 ---------A   01080  NEXT
    0x62e713751ff0 ---------A   01090  CLS
    0x62e713751740 ---------A   01100  Q=0
    0x62e71374fc30 ---------A   01110  GOTO1140
    0x62e7137521d0 ---------A   01120  PRINT"THERE ARE ONLY SIX FUNCTIONS. ONE THROUGH SIX INCLUSIVE"
    0x62e713752230 ----------   01130  CLS
    0x62e713750720 ---------A   01140  PRINT"WHICH FUNCTION WOULD YOU LIKE ME TO PRINT (1-6)"
    0x62e713750880 ----------   01150  INPUT A
    0x62e713757d00 ---------A   01160  IF A<1 OR A>6 THEN 1120
    0x62e713757d60 ---------A   01170  CLS
    0x62e713758150 ---------A   01180  FOR X=-30 TO 30 STEP 1.5
    0x62e7137583f0 ---------A   01190  L=0
    0x62e713758cd0 ---------A   01200  Y1=5*INT(SQR(900-X*X)/5)
    0x62e713759160 ---------A   01210  FOR Y=Y1 TO -Y1 STEP -5
    0x62e7137598a0 ---------A   01220  P=SQR(X*X+Y*Y)
    0x62e713759910 ---------A   01230  GOSUB 1330
    0x62e713759c40 ---------A   01240  IF Z<=L THEN 1280
    0x62e713759e80 ---------A   01250  L=Z
    0x62e71375a0d0 ---------A   01260  IF Q=0 THEN 1270
    0x62e71375a3b0 ---------A   01270  PRINT TAB(Z);"*";
    0x62e71375a4f0 ---------A   01280  NEXT Y
    0x62e71375a760 ---------A   01290  IF Q=0 THEN 1300
    0x62e71375a7e0 ---------A   01300  PRINT
    0x62e71375a920 ---------A   01310  NEXT X
    0x62e71375a9c0 ---------A   01320  GOTO 1460
    0x62e71375afb0 ---------B   01330  ON A GOTO 1340,1360,1380,1400,1420,1440
    0x62e71375bb30 ---------B   01340  Z=INT(25+(SQR(900.01-P*P)*.9-2)-.7*Y)
    0x62e71375bdd0 ---------B   01350  GOTO1450
    0x62e71375c840 ---------B   01360  Z=INT(25+(30*CSNG(-P*P/100))-.7*Y)
    0x62e71375c8c0 ---------B   01370  GOTO1450
    0x62e71375d350 ---------B   01380  Z=INT(25+(30*(COS(P/16)^2))-.7*Y)
    0x62e71375d3d0 ---------B   01390  GOTO1450
    0x62e71375de20 ---------B   01400  Z=INT(25+(30-30*SIN(P/19))-.7*Y)
    0x62e71375deb0 ---------B   01410  GOTO1450
    0x62e71375e9e0 ---------B   01420  Z=INT(25+(30*CSNG(-COS(P/16))-30)-.7*Y)
    0x62e71375ea60 ---------B   01430  GOTO1450
    0x62e71375f4b0 ---------B   01440  Z=INT(25+(30+4*SIN(P/15))-.7*Y)
    0x62e71375f500 ---------B   01450  RETURN
    0x62e71375f6e0 ---------A   01460  PRINT"WOULD YOU LIKE ME TO PRINT ANOTHER FUNCTION";
    0x62e71375f8e0 ----------   01470  INPUTB$
    0x62e71375fd00 ---------A   01480  IF LEFT$(B$,1)="Y"THEN1140
    0x62e71375fd60 ---------A   01490  END
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
 *  Symbol Table Listing for 'basic/3dpltcc1.bas'
 *
    A                        Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$                       String      
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
    L                        Integer     
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
    P                        Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    QZ                       Integer     
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
    Y1                       Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/3dpltcc1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62e713751db0 ---------A   01000  REM NOTE
    0x62e713751f30 ---------A   01010  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x62e713751e70 ---------A   01020  CLS
    0x62e71374f6d0 ---------A   01030  PRINT@283,"3-D PLOT"
    0x62e71374f670 ---------A   01040  PRINT@409,"COPYRIGHT BY"
    0x62e7137402b0 ---------A   01050  PRINT@534,"CREATIVE COMPUTING"
    0x62e71374f9e0 ---------A   01060  PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x62e713750040 ---------A   01070  FOR QZ=1 TO 1500
    0x62e7137520b0 ---------A   01080  NEXT
    0x62e713751ff0 ---------A   01090  CLS
    0x62e713751740 ---------A   01100  Q=0
    0x62e71374fc30 ---------A   01110  GOTO1140
    0x62e7137521d0 ---------A T 01120  PRINT"THERE ARE ONLY SIX FUNCTIONS. ONE THROUGH SIX INCLUSIVE"
    0x62e713752230 ---------A   01130  CLS
    0x62e713750720 ---------A T 01140  PRINT"WHICH FUNCTION WOULD YOU LIKE ME TO PRINT (1-6)"
    0x62e713750880 ---------A   01150  INPUT A
    0x62e713757d00 ---------A   01160  IF A<1 OR A>6 THEN 1120
    0x62e713757d60 ---------A   01170  CLS
    0x62e713758150 ---------A   01180  FOR X=-30 TO 30 STEP 1.5
    0x62e7137583f0 ---------A   01190  L=0
    0x62e713758cd0 ---------A   01200  Y1=5*INT(SQR(900-X*X)/5)
    0x62e713759160 ---------A   01210  FOR Y=Y1 TO -Y1 STEP -5
    0x62e7137598a0 ---------A   01220  P=SQR(X*X+Y*Y)
    0x62e713759910 ---------A   01230  GOSUB 1370
    0x62e713759c40 ---------A   01240  IF Z<=L THEN 1280
    0x62e713759e80 ---------A   01250  L=Z
    0x62e71375a0d0 ---------A   01260  IF Q=0 THEN 1270
    0x62e71375a3b0 ---------A T 01270  PRINT TAB(Z);"*";
    0x62e71375a4f0 ---------A T 01280  NEXT Y
    0x62e71375a760 ---------A   01290  IF Q=0 THEN 1300
    0x62e71375a7e0 ---------A T 01300  PRINT
    0x62e71375a920 ---------A   01310  NEXT X
    0x62e71375a9c0 ---------A   01320  GOTO 1330
    0x62e71375f6e0 ---------A T 01330  PRINT"WOULD YOU LIKE ME TO PRINT ANOTHER FUNCTION";
    0x62e71375f8e0 ---------A   01340  INPUTB$
    0x62e71375fd00 ---------A   01350  IF LEFT$(B$,1)="Y"THEN1140
    0x62e71375fd60 ---------A   01360  END
    0x62e71375afb0 ---------B G 01370  ON A GOTO 1460,1480,1380,1400,1420,1440
    0x62e71375bb30 ---------B T 01380  Z=INT(25+(SQR(900.01-P*P)*.9-2)-.7*Y)
    0x62e71375bdd0 ---------B   01390  GOTO1490
    0x62e71375c840 ---------B T 01400  Z=INT(25+(30*CSNG(-P*P/100))-.7*Y)
    0x62e71375c8c0 ---------B   01410  GOTO1490
    0x62e71375d350 ---------B T 01420  Z=INT(25+(30*(COS(P/16)^2))-.7*Y)
    0x62e71375d3d0 ---------B   01430  GOTO1490
    0x62e71375de20 ---------B T 01440  Z=INT(25+(30-30*SIN(P/19))-.7*Y)
    0x62e71375deb0 ---------B   01450  GOTO1490
    0x62e71375e9e0 ---------B T 01460  Z=INT(25+(30*CSNG(-COS(P/16))-30)-.7*Y)
    0x62e71375ea60 ---------B   01470  GOTO1490
    0x62e71375f4b0 ---------B T 01480  Z=INT(25+(30+4*SIN(P/15))-.7*Y)
    0x62e71375fdc0 ---------B T 01490  GOTO 01500
    0x62e713764990 ---------B T 01500  RETURN
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
char*  B_str;                                     // Basic: B$ 
int    L_int;                                     // Basic: L 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    QZ_int;                                    // Basic: QZ 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01370();

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

void Routine_01370(){
    // 01370 ON A GOTO 1460,1480,1380,1400,1420,1440
    switch((int)(A_int)){
        case 1: goto Lbl_01380;
        case 2: goto Lbl_01400;
        case 3: goto Lbl_01420;
        case 4: goto Lbl_01440;
        case 5: goto Lbl_01460;
        case 6: goto Lbl_01480;
        default: break; 
    };

  Lbl_01380:
    // 01380 Z=INT(25+(SQR(900.01-P*P)*.9-2)-.7*Y)
    Z_int = INT(25+(SQR(900.01-P_int*P_int)*0.9-2)-0.7*Y_int);
    // 01390 GOTO1490
    goto Lbl_01490;

  Lbl_01400:
    // 01400 Z=INT(25+(30*CSNG(-P*P/100))-.7*Y)
    Z_int = INT(25+(30*CSNG(P_int*P_int/100))-0.7*Y_int);
    // 01410 GOTO1490
    goto Lbl_01490;

  Lbl_01420:
    // 01420 Z=INT(25+(30*(COS(P/16)^2))-.7*Y)
    Z_int = INT(25+(30*(IPower(COS(P_int/16),2)))-0.7*Y_int);
    // 01430 GOTO1490
    goto Lbl_01490;

  Lbl_01440:
    // 01440 Z=INT(25+(30-30*SIN(P/19))-.7*Y)
    Z_int = INT(25+(30-30*SIN(P_int/19))-0.7*Y_int);
    // 01450 GOTO1490
    goto Lbl_01490;

  Lbl_01460:
    // 01460 Z=INT(25+(30*CSNG(-COS(P/16))-30)-.7*Y)
    Z_int = INT(25+(30*CSNG(-COS(P_int/16))-30)-0.7*Y_int);
    // 01470 GOTO1490
    goto Lbl_01490;

  Lbl_01480:
    // 01480 Z=INT(25+(30+4*SIN(P/15))-.7*Y)
    Z_int = INT(25+(30+4*SIN(P_int/15))-0.7*Y_int);

  Lbl_01490:
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
    // 01000 REM NOTE
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 CLS
    ClearScreen(0);
    // 01030 PRINT@283,"3-D PLOT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"3-D PLOT");strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT@409,"COPYRIGHT BY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COPYRIGHT BY");strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT@534,"CREATIVE COMPUTING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CREATIVE COMPUTING");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MORRISTOWN, NEW JERSEY 07960");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 FOR QZ=1 TO 1500
    for(QZ_int=1;QZ_int<=1500;QZ_int++){
        // 01080 NEXT
        int dummy_1080=0; // Ignore this line.
    };
    // 01090 CLS
    ClearScreen(0);
    // 01100 Q=0
    Q_int = 0;
    // 01110 GOTO1140
    goto Lbl_01140;

  Lbl_01120:
    // 01120 PRINT"THERE ARE ONLY SIX FUNCTIONS. ONE THROUGH SIX INCLUSIVE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THERE ARE ONLY SIX FUNCTIONS. ONE THROUGH SIX INCLUSIVE");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 CLS
    ClearScreen(0);

  Lbl_01140:
    // 01140 PRINT"WHICH FUNCTION WOULD YOU LIKE ME TO PRINT (1-6)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHICH FUNCTION WOULD YOU LIKE ME TO PRINT (1-6)");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 INPUT A
    // Start of Basic INPUT statement 01150
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&A_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01150
    // 01160 IF A<1 OR A>6 THEN 1120
    if(A_int<1||A_int>6)goto Lbl_01120;
    // 01170 CLS
    ClearScreen(0);
    // 01180 FOR X=-30 TO 30 STEP 1.5
    for(X_int=-30;X_int<=30;X_int+=1.5){
        // 01190 L=0
        L_int = 0;
        // 01200 Y1=5*INT(SQR(900-X*X)/5)
        Y1_int = 5*INT(SQR(900-X_int*X_int)/5);
        // 01210 FOR Y=Y1 TO -Y1 STEP -5
        for(Y_int=Y1_int;Y_int>=Y1_int;Y_int+=-5){
            // 01220 P=SQR(X*X+Y*Y)
            P_int = SQR(X_int*X_int+Y_int*Y_int);
            // 01230 GOSUB 1370
            Routine_01370();
            // 01240 IF Z<=L THEN 1280
            if(Z_int<=L_int)goto Lbl_01280;
            // 01250 L=Z
            L_int = Z_int;
            // 01260 IF Q=0 THEN 1270
            if(Q_int==0)goto Lbl_01270;

  Lbl_01270:
            // 01270 PRINT TAB(Z);"*";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,Z_int;strcat(buf,"*");fputs(buf,fh); };

  Lbl_01280:
            // 01280 NEXT Y
            int dummy_1280=0; // Ignore this line.
        }; // End-For(Y_int)
        // 01290 IF Q=0 THEN 1300
        if(Q_int==0)goto Lbl_01300;

  Lbl_01300:
        // 01300 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01310 NEXT X
        int dummy_1310=0; // Ignore this line.
    }; // End-For(X_int)
    // 01320 GOTO 1330
    goto Lbl_01330;

  Lbl_01330:
    // 01330 PRINT"WOULD YOU LIKE ME TO PRINT ANOTHER FUNCTION";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WOULD YOU LIKE ME TO PRINT ANOTHER FUNCTION");fputs(buf,fh); };
    // 01340 INPUTB$
    // Start of Basic INPUT statement 01340
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&B_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01340
    // 01350 IF LEFT$(B$,1)="Y"THEN1140
    if(LEFT$(B_str,1)=='Y')goto Lbl_01140;
    // 01360 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
