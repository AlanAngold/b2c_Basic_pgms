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
    0x5d49db627b80 ---------A   00010 PRINT TAB(33);"BOUNCE"
    0x5d49db628f30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5d49db6290b0 ---------A   00030 PRINT:PRINT:PRINT
    0x5d49db626a30 ---------A   00090 DIM T(20)
    0x5d49db627090 ---------A   00100 PRINT "THIS SIMULATION LETS YOU SPECIFY THE INITIAL VELOCITY"
    0x5d49db6286f0 ---------A   00110 PRINT "OF A BALL THROWN STRAIGHT UP, AND THE COEFFICIENT OF"
    0x5d49db626ca0 ---------A   00120 PRINT "ELASTICITY OF THE BALL.  PLEASE USE A DECIMAL FRACTION"
    0x5d49db6291c0 ---------A   00130 PRINT "COEFFICIENCY (LESS THAN 1)."
    0x5d49db627620 ---------A   00131 PRINT
    0x5d49db627770 ---------A   00132 PRINT "YOU ALSO SPECIFY THE TIME INCREMENT TO BE USED IN"
    0x5d49db62e8a0 ---------A   00133 PRINT "'STROBING' THE BALL'S FLIGHT (TRY .1 INITIALLY)."
    0x5d49db62e8f0 ---------A   00134 PRINT
    0x5d49db6266d0 ---------A T 00135 INPUT "TIME INCREMENT (SEC)";S2
    0x5d49db62eaa0 ---------A   00140 PRINT
    0x5d49db626670 ---------A   00150 INPUT "VELOCITY (FPS)";V
    0x5d49db62ec50 ---------A   00160 PRINT
    0x5d49db62ee40 ---------A   00170 INPUT "COEFFICIENT";C
    0x5d49db62eec0 ---------A   00180 PRINT
    0x5d49db62f010 ---------A   00182 PRINT "FEET"
    0x5d49db62f060 ---------A   00184 PRINT
    0x5d49db62f7d0 ---------A   00186 S1=INT(70/(V/(16*S2)))
    0x5d49db62fb80 ---------A   00190 FOR I=1 TO S1
    0x5d49db630320 ---------A   00200 T(I)=V*C^(I-1)/16
    0x5d49db630450 ---------A   00210 NEXT I
    0x5d49db631110 ---------A   00220 FOR H=INT(-16*(V/32)^2+V^2/32+.5) TO 0 STEP -.5
    0x5d49db631470 ---------A   00221 IF INT(H)<>H THEN 225
    0x5d49db6315f0 ---------A   00222 PRINT H;
    0x5d49db6318c0 ---------A T 00225 L=0
    0x5d49db631b90 ---------A   00230 FOR I=1 TO S1
    0x5d49db632050 ---------A   00240 FOR T=0 TO T(I) STEP S2
    0x5d49db6323d0 ---------A   00245 L=L+S2
    0x5d49db633170 ---------A   00250 IF ABS(H-(.5*(-32)*T^2+V*C^(I-1)*T))>.25 THEN 270
    0x5d49db633570 ---------A   00260 PRINT TAB(L/S2);"0";
    0x5d49db6338b0 ---------A T 00270 NEXT T
    0x5d49db633de0 ---------A   00275 T=T(I+1)/2
    0x5d49db634810 ---------A   00276 IF -16*T^2+V*C^(I-1)*T<H THEN 290
    0x5d49db634950 ---------A   00280 NEXT I
    0x5d49db6349d0 ---------A T 00290 PRINT
    0x5d49db634b00 ---------A   00300 NEXT H
    0x5d49db634cd0 ---------A   00310 PRINT TAB(1);
    0x5d49db6353c0 ---------A   00320 FOR I=1 TO INT(L+1)/S2+1
    0x5d49db635540 ---------A   00330 PRINT ".";
    0x5d49db635670 ---------A   00340 NEXT I
    0x5d49db6356f0 ---------A   00350 PRINT
    0x5d49db635870 ---------A   00355 PRINT " 0";
    0x5d49db635d50 ---------A   00360 FOR I=1 TO INT(L+.9995)
    0x5d49db636230 ---------A   00380 PRINT TAB(INT(I/S2));I;
    0x5d49db636360 ---------A   00390 NEXT I
    0x5d49db636400 ---------A   00400 PRINT
    0x5d49db636bf0 ---------A   00410 PRINT TAB(INT(L+1)/(2*S2)-2);"SECONDS"
    0x5d49db636c60 ---------A   00420 PRINT
    0x5d49db636cd0 ---------A   00430 GOTO 135
    0x5d49db636d10 ---------A   00440 END
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
   A) 0x5d49db627b80 (00010)   0x5d49db627b80 (00010)   0x5d49db636d10 (00440)   0x5d49db636d10 (00440)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01530 - 10000    8480 

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
    0x5d49db627b80 ---------A   01000 PRINT TAB(33);"BOUNCE"
    0x5d49db628f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5d49db6290b0 ---------A   01020 PRINT:PRINT:PRINT
    0x5d49db626a30 ---------A   01030 DIM T(20)
    0x5d49db627090 ---------A   01040 PRINT "THIS SIMULATION LETS YOU SPECIFY THE INITIAL VELOCITY"
    0x5d49db6286f0 ---------A   01050 PRINT "OF A BALL THROWN STRAIGHT UP, AND THE COEFFICIENT OF"
    0x5d49db626ca0 ---------A   01060 PRINT "ELASTICITY OF THE BALL.  PLEASE USE A DECIMAL FRACTION"
    0x5d49db6291c0 ---------A   01070 PRINT "COEFFICIENCY (LESS THAN 1)."
    0x5d49db627620 ---------A   01080 PRINT
    0x5d49db627770 ---------A   01090 PRINT "YOU ALSO SPECIFY THE TIME INCREMENT TO BE USED IN"
    0x5d49db62e8a0 ---------A   01100 PRINT "'STROBING' THE BALL'S FLIGHT (TRY .1 INITIALLY)."
    0x5d49db62e8f0 ---------A   01110 PRINT
    0x5d49db6266d0 ---------A T 01120 INPUT "TIME INCREMENT (SEC)";S2
    0x5d49db62eaa0 ---------A   01130 PRINT
    0x5d49db626670 ---------A   01140 INPUT "VELOCITY (FPS)";V
    0x5d49db62ec50 ---------A   01150 PRINT
    0x5d49db62ee40 ---------A   01160 INPUT "COEFFICIENT";C
    0x5d49db62eec0 ---------A   01170 PRINT
    0x5d49db62f010 ---------A   01180 PRINT "FEET"
    0x5d49db62f060 ---------A   01190 PRINT
    0x5d49db62f7d0 ---------A   01200 S1=INT(70/(V/(16*S2)))
    0x5d49db62fb80 ---------A   01210 FOR I=1 TO S1
    0x5d49db630320 ---------A   01220 T(I)=V*C^(I-1)/16
    0x5d49db630450 ---------A   01230 NEXT I
    0x5d49db631110 ---------A   01240 FOR H=INT(-16*(V/32)^2+V^2/32+.5) TO 0 STEP -.5
    0x5d49db631470 ---------A   01250 IF INT(H)<>H THEN 1270
    0x5d49db6315f0 ---------A   01260 PRINT H;
    0x5d49db6318c0 ---------A T 01270 L=0
    0x5d49db631b90 ---------A   01280 FOR I=1 TO S1
    0x5d49db632050 ---------A   01290 FOR T=0 TO T(I) STEP S2
    0x5d49db6323d0 ---------A   01300 L=L+S2
    0x5d49db633170 ---------A   01310 IF ABS(H-(.5*(-32)*T^2+V*C^(I-1)*T))>.25 THEN 1330
    0x5d49db633570 ---------A   01320 PRINT TAB(L/S2);"0";
    0x5d49db6338b0 ---------A T 01330 NEXT T
    0x5d49db633de0 ---------A   01340 T=T(I+1)/2
    0x5d49db634810 ---------A   01350 IF -16*T^2+V*C^(I-1)*T<H THEN 1370
    0x5d49db634950 ---------A   01360 NEXT I
    0x5d49db6349d0 ---------A T 01370 PRINT
    0x5d49db634b00 ---------A   01380 NEXT H
    0x5d49db634cd0 ---------A   01390 PRINT TAB(1);
    0x5d49db6353c0 ---------A   01400 FOR I=1 TO INT(L+1)/S2+1
    0x5d49db635540 ---------A   01410 PRINT ".";
    0x5d49db635670 ---------A   01420 NEXT I
    0x5d49db6356f0 ---------A   01430 PRINT
    0x5d49db635870 ---------A   01440 PRINT " 0";
    0x5d49db635d50 ---------A   01450 FOR I=1 TO INT(L+.9995)
    0x5d49db636230 ---------A   01460 PRINT TAB(INT(I/S2));I;
    0x5d49db636360 ---------A   01470 NEXT I
    0x5d49db636400 ---------A   01480 PRINT
    0x5d49db636bf0 ---------A   01490 PRINT TAB(INT(L+1)/(2*S2)-2);"SECONDS"
    0x5d49db636c60 ---------A   01500 PRINT
    0x5d49db636cd0 ---------A   01510 GOTO 1120
    0x5d49db636d10 ---------A   01520 END
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
