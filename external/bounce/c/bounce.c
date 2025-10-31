/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/bounce.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6478f74746d0 ---------A   00010  PRINT TAB(33);"BOUNCE"
    0x6478f7474670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6478f74747f0 ---------A   00030  PRINT:PRINT:PRINT
    0x6478f7476f30 ---------A   00090  DIM T(20)
    0x6478f7474e80 ---------A   00100  PRINT "THIS SIMULATION LETS YOU SPECIFY THE INITIAL VELOCITY"
    0x6478f74766e0 ---------A   00110  PRINT "OF A BALL THROWN STRAIGHT UP, AND THE COEFFICIENT OF"
    0x6478f7474ca0 ---------A   00120  PRINT "ELASTICITY OF THE BALL.  PLEASE USE A DECIMAL FRACTION"
    0x6478f74771c0 ---------A   00130  PRINT "COEFFICIENCY (LESS THAN 1)."
    0x6478f7475620 ---------A   00131  PRINT
    0x6478f7475780 ---------A   00132  PRINT "YOU ALSO SPECIFY THE TIME INCREMENT TO BE USED IN"
    0x6478f747c8a0 ---------A   00133  PRINT "'STROBING' THE BALL'S FLIGHT (TRY .1 INITIALLY)."
    0x6478f747c900 ---------A   00134  PRINT
    0x6478f747cac0 ---------A T 00135  INPUT "TIME INCREMENT (SEC)";S2
    0x6478f747cb20 ---------A   00140  PRINT
    0x6478f747cce0 ---------A   00150  INPUT "VELOCITY (FPS)";V
    0x6478f747cd40 ---------A   00160  PRINT
    0x6478f747cf20 ---------A   00170  INPUT "COEFFICIENT";C
    0x6478f747cfa0 ---------A   00180  PRINT
    0x6478f747d100 ---------A   00182  PRINT "FEET"
    0x6478f747d160 ---------A   00184  PRINT
    0x6478f747d8e0 ---------A   00186  S1=INT(70/(V/(16*S2)))
    0x6478f747dc90 ---------A   00190  FOR I=1 TO S1
    0x6478f747e430 ---------A   00200  T(I)=V*C^(I-1)/16
    0x6478f747e560 ---------A   00210  NEXT I
    0x6478f747f230 ---------A   00220  FOR H=INT(-16*(V/32)^2+V^2/32+.5) TO 0 STEP -.5
    0x6478f747f590 ---------A   00221  IF INT(H)<>H THEN 225
    0x6478f747f710 ---------A   00222  PRINT H;
    0x6478f747f9f0 ---------A T 00225  L=0
    0x6478f747fcc0 ---------A   00230  FOR I=1 TO S1
    0x6478f7480180 ---------A   00240  FOR T=0 TO T(I) STEP S2
    0x6478f7480500 ---------A   00245  L=L+S2
    0x6478f74812a0 ---------A   00250  IF ABS(H-(.5*(-32)*T^2+V*C^(I-1)*T))>.25 THEN 270
    0x6478f74816a0 ---------A   00260  PRINT TAB(L/S2);"0";
    0x6478f74819f0 ---------A T 00270  NEXT T
    0x6478f7481f30 ---------A   00275  T=T(I+1)/2
    0x6478f7482960 ---------A   00276  IF -16*T^2+V*C^(I-1)*T<H THEN 290
    0x6478f7482aa0 ---------A   00280  NEXT I
    0x6478f7482b30 ---------A T 00290  PRINT
    0x6478f7482c70 ---------A   00300  NEXT H
    0x6478f7482e50 ---------A   00310  PRINT TAB(1);
    0x6478f7483550 ---------A   00320  FOR I=1 TO INT(L+1)/S2+1
    0x6478f74836d0 ---------A   00330  PRINT ".";
    0x6478f7483810 ---------A   00340  NEXT I
    0x6478f74838a0 ---------A   00350  PRINT
    0x6478f7483a30 ---------A   00355  PRINT " 0";
    0x6478f7483f20 ---------A   00360  FOR I=1 TO INT(L+.9995)
    0x6478f7484400 ---------A   00380  PRINT TAB(INT(I/S2));I;
    0x6478f7484540 ---------A   00390  NEXT I
    0x6478f74845f0 ---------A   00400  PRINT
    0x6478f7484df0 ---------A   00410  PRINT TAB(INT(L+1)/(2*S2)-2);"SECONDS"
    0x6478f7484e70 ---------A   00420  PRINT
    0x6478f7484ef0 ---------A   00430  GOTO 135
    0x6478f7484f40 ---------A   00440  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00135      00430T
     00225      00221T
     00270      00250T
     00290      00276T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x6478f74746d0 (00010)   0x6478f74746d0 (00010)   0x6478f7484f40 (00440)   0x6478f7484f40 (00440)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/bounce.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6478f74746d0 ---------A   00010  PRINT TAB(33);"BOUNCE"
    0x6478f7474670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6478f74652b0 ----------   00030  PRINT
    0x6478f74749e0 ----------        a PRINT
    0x6478f74747f0 ---------A        b PRINT
    0x6478f7476f30 ---------A   00090  DIM T(20)
    0x6478f7474e80 ---------A   00100  PRINT "THIS SIMULATION LETS YOU SPECIFY THE INITIAL VELOCITY"
    0x6478f74766e0 ---------A   00110  PRINT "OF A BALL THROWN STRAIGHT UP, AND THE COEFFICIENT OF"
    0x6478f7474ca0 ---------A   00120  PRINT "ELASTICITY OF THE BALL.  PLEASE USE A DECIMAL FRACTION"
    0x6478f74771c0 ---------A   00130  PRINT "COEFFICIENCY (LESS THAN 1)."
    0x6478f7475620 ---------A   00131  PRINT
    0x6478f7475780 ---------A   00132  PRINT "YOU ALSO SPECIFY THE TIME INCREMENT TO BE USED IN"
    0x6478f747c8a0 ---------A   00133  PRINT "'STROBING' THE BALL'S FLIGHT (TRY .1 INITIALLY)."
    0x6478f747c900 ---------A   00134  PRINT
    0x6478f747cac0 ---------A T 00135  INPUT "TIME INCREMENT (SEC)";S2
    0x6478f747cb20 ---------A   00140  PRINT
    0x6478f747cce0 ---------A   00150  INPUT "VELOCITY (FPS)";V
    0x6478f747cd40 ---------A   00160  PRINT
    0x6478f747cf20 ---------A   00170  INPUT "COEFFICIENT";C
    0x6478f747cfa0 ---------A   00180  PRINT
    0x6478f747d100 ---------A   00182  PRINT "FEET"
    0x6478f747d160 ---------A   00184  PRINT
    0x6478f747d8e0 ---------A   00186  S1=INT(70/(V/(16*S2)))
    0x6478f747dc90 ---------A   00190  FOR I=1 TO S1
    0x6478f747e430 ---------A   00200  T(I)=V*C^(I-1)/16
    0x6478f747e560 ---------A   00210  NEXT I
    0x6478f747f230 ---------A   00220  FOR H=INT(-16*(V/32)^2+V^2/32+.5) TO 0 STEP -.5
    0x6478f747f590 ---------A   00221  IF INT(H)<>H THEN 225
    0x6478f747f710 ---------A   00222  PRINT H;
    0x6478f747f9f0 ---------A T 00225  L=0
    0x6478f747fcc0 ---------A   00230  FOR I=1 TO S1
    0x6478f7480180 ---------A   00240  FOR T=0 TO T(I) STEP S2
    0x6478f7480500 ---------A   00245  L=L+S2
    0x6478f74812a0 ---------A   00250  IF ABS(H-(.5*(-32)*T^2+V*C^(I-1)*T))>.25 THEN 270
    0x6478f74816a0 ---------A   00260  PRINT TAB(L/S2);"0";
    0x6478f74819f0 ---------A T 00270  NEXT T
    0x6478f7481f30 ---------A   00275  T=T(I+1)/2
    0x6478f7482960 ---------A   00276  IF -16*T^2+V*C^(I-1)*T<H THEN 290
    0x6478f7482aa0 ---------A   00280  NEXT I
    0x6478f7482b30 ---------A T 00290  PRINT
    0x6478f7482c70 ---------A   00300  NEXT H
    0x6478f7482e50 ---------A   00310  PRINT TAB(1);
    0x6478f7483550 ---------A   00320  FOR I=1 TO INT(L+1)/S2+1
    0x6478f74836d0 ---------A   00330  PRINT ".";
    0x6478f7483810 ---------A   00340  NEXT I
    0x6478f74838a0 ---------A   00350  PRINT
    0x6478f7483a30 ---------A   00355  PRINT " 0";
    0x6478f7483f20 ---------A   00360  FOR I=1 TO INT(L+.9995)
    0x6478f7484400 ---------A   00380  PRINT TAB(INT(I/S2));I;
    0x6478f7484540 ---------A   00390  NEXT I
    0x6478f74845f0 ---------A   00400  PRINT
    0x6478f7484df0 ---------A   00410  PRINT TAB(INT(L+1)/(2*S2)-2);"SECONDS"
    0x6478f7484e70 ---------A   00420  PRINT
    0x6478f7484ef0 ---------A   00430  GOTO 135
    0x6478f7484f40 ---------A   00440  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/bounce.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6478f74746d0 ---------A   01000  PRINT TAB(33);"BOUNCE"
    0x6478f7474670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6478f74652b0 ----------   01020  PRINT
    0x6478f74749e0 ----------   01030  PRINT
    0x6478f74747f0 ---------A   01040  PRINT
    0x6478f7476f30 ---------A   01050  DIM T(20)
    0x6478f7474e80 ---------A   01060  PRINT "THIS SIMULATION LETS YOU SPECIFY THE INITIAL VELOCITY"
    0x6478f74766e0 ---------A   01070  PRINT "OF A BALL THROWN STRAIGHT UP, AND THE COEFFICIENT OF"
    0x6478f7474ca0 ---------A   01080  PRINT "ELASTICITY OF THE BALL.  PLEASE USE A DECIMAL FRACTION"
    0x6478f74771c0 ---------A   01090  PRINT "COEFFICIENCY (LESS THAN 1)."
    0x6478f7475620 ---------A   01100  PRINT
    0x6478f7475780 ---------A   01110  PRINT "YOU ALSO SPECIFY THE TIME INCREMENT TO BE USED IN"
    0x6478f747c8a0 ---------A   01120  PRINT "'STROBING' THE BALL'S FLIGHT (TRY .1 INITIALLY)."
    0x6478f747c900 ---------A   01130  PRINT
    0x6478f747cac0 ---------A   01140  INPUT "TIME INCREMENT (SEC)";S2
    0x6478f747cb20 ---------A   01150  PRINT
    0x6478f747cce0 ---------A   01160  INPUT "VELOCITY (FPS)";V
    0x6478f747cd40 ---------A   01170  PRINT
    0x6478f747cf20 ---------A   01180  INPUT "COEFFICIENT";C
    0x6478f747cfa0 ---------A   01190  PRINT
    0x6478f747d100 ---------A   01200  PRINT "FEET"
    0x6478f747d160 ---------A   01210  PRINT
    0x6478f747d8e0 ---------A   01220  S1=INT(70/(V/(16*S2)))
    0x6478f747dc90 ---------A   01230  FOR I=1 TO S1
    0x6478f747e430 ---------A   01240  T(I)=V*C^(I-1)/16
    0x6478f747e560 ---------A   01250  NEXT I
    0x6478f747f230 ---------A   01260  FOR H=INT(-16*(V/32)^2+V^2/32+.5) TO 0 STEP -.5
    0x6478f747f590 ---------A   01270  IF INT(H)<>H THEN 1290
    0x6478f747f710 ---------A   01280  PRINT H;
    0x6478f747f9f0 ---------A   01290  L=0
    0x6478f747fcc0 ---------A   01300  FOR I=1 TO S1
    0x6478f7480180 ---------A   01310  FOR T=0 TO T(I) STEP S2
    0x6478f7480500 ---------A   01320  L=L+S2
    0x6478f74812a0 ---------A   01330  IF ABS(H-(.5*(-32)*T^2+V*C^(I-1)*T))>.25 THEN 1350
    0x6478f74816a0 ---------A   01340  PRINT TAB(L/S2);"0";
    0x6478f74819f0 ---------A   01350  NEXT T
    0x6478f7481f30 ---------A   01360  T=T(I+1)/2
    0x6478f7482960 ---------A   01370  IF -16*T^2+V*C^(I-1)*T<H THEN 1390
    0x6478f7482aa0 ---------A   01380  NEXT I
    0x6478f7482b30 ---------A   01390  PRINT
    0x6478f7482c70 ---------A   01400  NEXT H
    0x6478f7482e50 ---------A   01410  PRINT TAB(1);
    0x6478f7483550 ---------A   01420  FOR I=1 TO INT(L+1)/S2+1
    0x6478f74836d0 ---------A   01430  PRINT ".";
    0x6478f7483810 ---------A   01440  NEXT I
    0x6478f74838a0 ---------A   01450  PRINT
    0x6478f7483a30 ---------A   01460  PRINT " 0";
    0x6478f7483f20 ---------A   01470  FOR I=1 TO INT(L+.9995)
    0x6478f7484400 ---------A   01480  PRINT TAB(INT(I/S2));I;
    0x6478f7484540 ---------A   01490  NEXT I
    0x6478f74845f0 ---------A   01500  PRINT
    0x6478f7484df0 ---------A   01510  PRINT TAB(INT(L+1)/(2*S2)-2);"SECONDS"
    0x6478f7484e70 ---------A   01520  PRINT
    0x6478f7484ef0 ---------A   01530  GOTO 1140
    0x6478f7484f40 ---------A   01540  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01550 - 10000    8460 

 */



/*
 *  Symbol Table Listing for 'basic/bounce.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    C                        Integer     
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
    H                        Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
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
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S1                       Integer     
    S2                       Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T               Array    Integer         {0,19} 
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    V                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/bounce.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6478f74746d0 ---------A   01000  PRINT TAB(33);"BOUNCE"
    0x6478f7474670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6478f74652b0 ---------A   01020  PRINT
    0x6478f74749e0 ---------A   01030  PRINT
    0x6478f74747f0 ---------A   01040  PRINT
    0x6478f7476f30 ---------A   01050  DIM T(20)
    0x6478f7474e80 ---------A   01060  PRINT "THIS SIMULATION LETS YOU SPECIFY THE INITIAL VELOCITY"
    0x6478f74766e0 ---------A   01070  PRINT "OF A BALL THROWN STRAIGHT UP, AND THE COEFFICIENT OF"
    0x6478f7474ca0 ---------A   01080  PRINT "ELASTICITY OF THE BALL.  PLEASE USE A DECIMAL FRACTION"
    0x6478f74771c0 ---------A   01090  PRINT "COEFFICIENCY (LESS THAN 1)."
    0x6478f7475620 ---------A   01100  PRINT
    0x6478f7475780 ---------A   01110  PRINT "YOU ALSO SPECIFY THE TIME INCREMENT TO BE USED IN"
    0x6478f747c8a0 ---------A   01120  PRINT "'STROBING' THE BALL'S FLIGHT (TRY .1 INITIALLY)."
    0x6478f747c900 ---------A   01130  PRINT
    0x6478f747cac0 ---------A T 01140  INPUT "TIME INCREMENT (SEC)";S2
    0x6478f747cb20 ---------A   01150  PRINT
    0x6478f747cce0 ---------A   01160  INPUT "VELOCITY (FPS)";V
    0x6478f747cd40 ---------A   01170  PRINT
    0x6478f747cf20 ---------A   01180  INPUT "COEFFICIENT";C
    0x6478f747cfa0 ---------A   01190  PRINT
    0x6478f747d100 ---------A   01200  PRINT "FEET"
    0x6478f747d160 ---------A   01210  PRINT
    0x6478f747d8e0 ---------A   01220  S1=INT(70/(V/(16*S2)))
    0x6478f747dc90 ---------A   01230  FOR I=1 TO S1
    0x6478f747e430 ---------A   01240  T(I)=V*C^(I-1)/16
    0x6478f747e560 ---------A   01250  NEXT I
    0x6478f747f230 ---------A   01260  FOR H=INT(-16*(V/32)^2+V^2/32+.5) TO 0 STEP -.5
    0x6478f747f590 ---------A   01270  IF INT(H)<>H THEN 1290
    0x6478f747f710 ---------A   01280  PRINT H;
    0x6478f747f9f0 ---------A T 01290  L=0
    0x6478f747fcc0 ---------A   01300  FOR I=1 TO S1
    0x6478f7480180 ---------A   01310  FOR T=0 TO T(I) STEP S2
    0x6478f7480500 ---------A   01320  L=L+S2
    0x6478f74812a0 ---------A   01330  IF ABS(H-(.5*(-32)*T^2+V*C^(I-1)*T))>.25 THEN 1350
    0x6478f74816a0 ---------A   01340  PRINT TAB(L/S2);"0";
    0x6478f74819f0 ---------A T 01350  NEXT T
    0x6478f7481f30 ---------A   01360  T=T(I+1)/2
    0x6478f7482960 ---------A   01370  IF -16*T^2+V*C^(I-1)*T<H THEN 1390
    0x6478f7482aa0 ---------A   01380  NEXT I
    0x6478f7482b30 ---------A T 01390  PRINT
    0x6478f7482c70 ---------A   01400  NEXT H
    0x6478f7482e50 ---------A   01410  PRINT TAB(1);
    0x6478f7483550 ---------A   01420  FOR I=1 TO INT(L+1)/S2+1
    0x6478f74836d0 ---------A   01430  PRINT ".";
    0x6478f7483810 ---------A   01440  NEXT I
    0x6478f74838a0 ---------A   01450  PRINT
    0x6478f7483a30 ---------A   01460  PRINT " 0";
    0x6478f7483f20 ---------A   01470  FOR I=1 TO INT(L+.9995)
    0x6478f7484400 ---------A   01480  PRINT TAB(INT(I/S2));I;
    0x6478f7484540 ---------A   01490  NEXT I
    0x6478f74845f0 ---------A   01500  PRINT
    0x6478f7484df0 ---------A   01510  PRINT TAB(INT(L+1)/(2*S2)-2);"SECONDS"
    0x6478f7484e70 ---------A   01520  PRINT
    0x6478f7484ef0 ---------A   01530  GOTO 1140
    0x6478f7484f40 ---------A   01540  END
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
int    C_int;                                     // Basic: C 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    L_int;                                     // Basic: L 
int    S1_int;                                    // Basic: S1 
int    S2_int;                                    // Basic: S2 
int    T_int_arr[20];                             // Basic: T 
int    V_int;                                     // Basic: V 
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
    // 01000 PRINT TAB(33);"BOUNCE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"BOUNCE");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 DIM T(20)
    // 01060 PRINT "THIS SIMULATION LETS YOU SPECIFY THE INITIAL VELOCITY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS SIMULATION LETS YOU SPECIFY THE INITIAL VELOCITY");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "OF A BALL THROWN STRAIGHT UP, AND THE COEFFICIENT OF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF A BALL THROWN STRAIGHT UP, AND THE COEFFICIENT OF");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "ELASTICITY OF THE BALL.  PLEASE USE A DECIMAL FRACTION"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ELASTICITY OF THE BALL.  PLEASE USE A DECIMAL FRACTION");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "COEFFICIENCY (LESS THAN 1)."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COEFFICIENCY (LESS THAN 1).");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "YOU ALSO SPECIFY THE TIME INCREMENT TO BE USED IN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ALSO SPECIFY THE TIME INCREMENT TO BE USED IN");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "'STROBING' THE BALL'S FLIGHT (TRY .1 INITIALLY)."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"'STROBING' THE BALL'S FLIGHT (TRY .1 INITIALLY).");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01140:
    // 01140 INPUT "TIME INCREMENT (SEC)";S2
    // Start of Basic INPUT statement 01140
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"TIME INCREMENT (SEC)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&S2_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01140
    // 01150 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01160 INPUT "VELOCITY (FPS)";V
    // Start of Basic INPUT statement 01160
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"VELOCITY (FPS)");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&V_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01160
    // 01170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01180 INPUT "COEFFICIENT";C
    // Start of Basic INPUT statement 01180
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"COEFFICIENT");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01180
    // 01190 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT "FEET"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FEET");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01220 S1=INT(70/(V/(16*S2)))
    S1_int = INT(70/(V_int/(16*S2_int)));
    // 01230 FOR I=1 TO S1
    for(I_int=1;I_int<=S1_int;I_int++){
        // 01240 T(I)=V*C^(I-1)/16
        T_int_arr[I_int] = V_int*IPower(C_int,(I_int-1))/16;
        // 01250 NEXT I
        int dummy_1250=0; // Ignore this line.
    }; // End-For(I_int)
    // 01260 FOR H=INT(-16*(V/32)^2+V^2/32+.5) TO 0 STEP -.5
    for(H_int=INT(-16*IPower((V_int/32),2)+IPower(V_int,2)/32+0.5);H_int>=0;H_int+=-0.5){
        // 01270 IF INT(H)<>H THEN 1290
        if(INT(H_int)!=H_int)goto Lbl_01290;
        // 01280 PRINT H;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,H_int);fputs(buf,fh); };

  Lbl_01290:
        // 01290 L=0
        L_int = 0;
        // 01300 FOR I=1 TO S1
        for(I_int=1;I_int<=S1_int;I_int++){
            // 01310 FOR T=0 TO T(I) STEP S2
            for(T_int_arr[0]=0;T_int_arr[0]<=T_int_arr[I_int];T_int_arr[0]+=S2_int){
                // 01320 L=L+S2
                L_int = L_int+S2_int;
                // 01330 IF ABS(H-(.5*(-32)*T^2+V*C^(I-1)*T))>.25 THEN 1350
                if(ABS(H_int-(0.5*(-32)*IPower(T_int_arr[0],2)+V_int*IPower(C_int,(I_int-1))*T_int_arr[0]))>0.25)goto Lbl_01350;
                // 01340 PRINT TAB(L/S2);"0";
                { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,L_intint);strcat(buf,"0");fputs(buf,fh); };

  Lbl_01350:
                // 01350 NEXT T
                int dummy_1350=0; // Ignore this line.
            }; // End-For(T_int_arr[0])
            // 01360 T=T(I+1)/2
            T_int_arr[0] = T_int_arr[I_int+1]/2;
            // 01370 IF -16*T^2+V*C^(I-1)*T<H THEN 1390
            if(-16*IPower(T_int_arr[0],2)+V_int*IPower(C_int,(I_int-1))*T_int_arr[0]<H_int)goto Lbl_01390;
            // 01380 NEXT I
            int dummy_1380=0; // Ignore this line.
        }; // End-For(I_int)

  Lbl_01390:
        // 01390 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01400 NEXT H
        int dummy_1400=0; // Ignore this line.
    }; // End-For(H_int)
    // 01410 PRINT TAB(1);
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,1);fputs(buf,fh); };
    // 01420 FOR I=1 TO INT(L+1)/S2+1
    for(I_int=1;I_int<=INT(L_int+1)/S2_int+1;I_int++){
        // 01430 PRINT ".";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,".");fputs(buf,fh); };
        // 01440 NEXT I
        int dummy_1440=0; // Ignore this line.
    }; // End-For(I_int)
    // 01450 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01460 PRINT " 0";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," 0");fputs(buf,fh); };
    // 01470 FOR I=1 TO INT(L+.9995)
    for(I_int=1;I_int<=INT(L_int+1.);I_int++){
        // 01480 PRINT TAB(INT(I/S2));I;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,INT(I/S2_int)); b2c_INT(buf,I_int);fputs(buf,fh); };
        // 01490 NEXT I
        int dummy_1490=0; // Ignore this line.
    }; // End-For(I_int)
    // 01500 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01510 PRINT TAB(INT(L+1)/(2*S2)-2);"SECONDS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,INT(L+1)/(2*S2_int)-2);strcat(buf,"SECONDS");strcat(buf,"\n");fputs(buf,fh); };
    // 01520 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01530 GOTO 1140
    goto Lbl_01140;
    // 01540 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
