/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/number.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ab762edcb80 ---------A   00001 PRINT TAB(33);"NUMBER"
    0x5ab762eddf30 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5ab762ecc2b0 ---------A   00003 PRINT:PRINT:PRINT
    0x5ab762eddaa0 ---------A   00004 PRINT "YOU HAVE 100 POINTS.  BY GUESSING NUMBERS FROM 1 TO 5, YOU"
    0x5ab762edc090 ---------A   00005 PRINT "CAN GAIN OR LOSE POINTS DEPENDING UPON HOW CLOSE YOU GET TO"
    0x5ab762edd6a0 ---------A   00006 PRINT "A RANDOM NUMBER SELECTED BY THE COMPUTER.": PRINT
    0x5ab762edbc60 ---------A   00007 PRINT "YOU OCCASIONALLY WILL GET A JACKPOT WHICH WILL DOUBLE(!)"
    0x5ab762ede1c0 ---------A   00008 PRINT "YOUR POINT COUNT.  YOU WIN WHEN YOU GET 500 POINTS."
    0x5ab762edc840 ---------A   00009 PRINT: P=100
    0x5ab762edbe40 ---------A   00010 DEF FNR(X)=INT(5*RND(1)+1)
    0x5ab762edb6d0 ---------A T 00012 INPUT "GUESS A NUMBER FROM 1 TO 5";G
    0x5ab762ee4400 ---------A   00015 R=FNR(1)
    0x5ab762ee47b0 ---------A   00016 S=FNR(1)
    0x5ab762ee4b60 ---------A   00017 T=FNR(1)
    0x5ab762ee4f10 ---------A   00018 U=FNR(1)
    0x5ab762ee52c0 ---------A   00019 V=FNR(1)
    0x5ab762edb670 ---------A   00020 IF G=R THEN 30
    0x5ab762ee5750 ---------A   00021 IF G=S THEN 40
    0x5ab762ee59d0 ---------A   00022 IF G=T THEN 50
    0x5ab762ee5c50 ---------A   00023 IF G=U THEN 60
    0x5ab762ee5ed0 ---------A   00024 IF G=V THEN 70
    0x5ab762ee6130 ---------A   00025 IF G>5 THEN 12
    0x5ab762ee6470 ---------A T 00030 P=P-5
    0x5ab762ee64e0 ---------A   00035 GOTO 80
    0x5ab762ee6800 ---------A T 00040 P=P+5
    0x5ab762ee6870 ---------A   00045 GOTO 80
    0x5ab762ee6b90 ---------A T 00050 P=P+P
    0x5ab762ee6cc0 ---------A   00053 PRINT "YOU HIT THE JACKPOT!!!"
    0x5ab762ee6d30 ---------A   00055 GOTO 80
    0x5ab762ee7050 ---------A T 00060 P=P+1
    0x5ab762ee70c0 ---------A   00065 GOTO 80
    0x5ab762ee7540 ---------A T 00070 P=P-(P*.5)
    0x5ab762ee7770 ---------A T 00080 IF P>500 THEN 90
    0x5ab762ee7d30 ---------A   00082 PRINT "YOU HAVE";P;"POINTS.":PRINT
    0x5ab762ee7dc0 ---------A   00085 GOTO 12
    0x5ab762ee8100 ---------A T 00090 PRINT "!!!!YOU WIN!!!! WITH ";P;"POINTS."
    0x5ab762ee8150 ---------A   00099 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00012      00025T, 00085T
     00030      00020T
     00040      00021T
     00050      00022T
     00060      00023T
     00070      00024T
     00080      00035T, 00045T, 00055T, 00065T
     00090      00080T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5ab762edcb80 (00001)   0x5ab762edcb80 (00001)   0x5ab762ee8150 (00099)   0x5ab762ee8150 (00099)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01370 - 10000    8640 

 */



/*
 *  Symbol Table Listing for 'basic/number.bas'
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
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FNR             Array    Integer         {0,9} 
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
    OCT$            Function String          args=1, float  
    P                        Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Integer     
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
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U                        Integer     
    V                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/number.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ab762edcb80 ---------A   01000 PRINT TAB(33);"NUMBER"
    0x5ab762eddf30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5ab762ecc2b0 ---------A   01020 PRINT:PRINT:PRINT
    0x5ab762eddaa0 ---------A   01030 PRINT "YOU HAVE 100 POINTS.  BY GUESSING NUMBERS FROM 1 TO 5, YOU"
    0x5ab762edc090 ---------A   01040 PRINT "CAN GAIN OR LOSE POINTS DEPENDING UPON HOW CLOSE YOU GET TO"
    0x5ab762edd6a0 ---------A   01050 PRINT "A RANDOM NUMBER SELECTED BY THE COMPUTER.": PRINT
    0x5ab762edbc60 ---------A   01060 PRINT "YOU OCCASIONALLY WILL GET A JACKPOT WHICH WILL DOUBLE(!)"
    0x5ab762ede1c0 ---------A   01070 PRINT "YOUR POINT COUNT.  YOU WIN WHEN YOU GET 500 POINTS."
    0x5ab762edc840 ---------A   01080 PRINT: P=100
    0x5ab762edbe40 ---------A   01090 DEF FNR(X)=INT(5*RND(1)+1)
    0x5ab762edb6d0 ---------A T 01100 INPUT "GUESS A NUMBER FROM 1 TO 5";G
    0x5ab762ee4400 ---------A   01110 R=FNR(1)
    0x5ab762ee47b0 ---------A   01120 S=FNR(1)
    0x5ab762ee4b60 ---------A   01130 T=FNR(1)
    0x5ab762ee4f10 ---------A   01140 U=FNR(1)
    0x5ab762ee52c0 ---------A   01150 V=FNR(1)
    0x5ab762edb670 ---------A   01160 IF G=R THEN 1220
    0x5ab762ee5750 ---------A   01170 IF G=S THEN 1240
    0x5ab762ee59d0 ---------A   01180 IF G=T THEN 1260
    0x5ab762ee5c50 ---------A   01190 IF G=U THEN 1290
    0x5ab762ee5ed0 ---------A   01200 IF G=V THEN 1310
    0x5ab762ee6130 ---------A   01210 IF G>5 THEN 1100
    0x5ab762ee6470 ---------A T 01220 P=P-5
    0x5ab762ee64e0 ---------A   01230 GOTO 1320
    0x5ab762ee6800 ---------A T 01240 P=P+5
    0x5ab762ee6870 ---------A   01250 GOTO 1320
    0x5ab762ee6b90 ---------A T 01260 P=P+P
    0x5ab762ee6cc0 ---------A   01270 PRINT "YOU HIT THE JACKPOT!!!"
    0x5ab762ee6d30 ---------A   01280 GOTO 1320
    0x5ab762ee7050 ---------A T 01290 P=P+1
    0x5ab762ee70c0 ---------A   01300 GOTO 1320
    0x5ab762ee7540 ---------A T 01310 P=P-(P*.5)
    0x5ab762ee7770 ---------A T 01320 IF P>500 THEN 1350
    0x5ab762ee7d30 ---------A   01330 PRINT "YOU HAVE";P;"POINTS.":PRINT
    0x5ab762ee7dc0 ---------A   01340 GOTO 1100
    0x5ab762ee8100 ---------A T 01350 PRINT "!!!!YOU WIN!!!! WITH ";P;"POINTS."
    0x5ab762ee8150 ---------A   01360 END
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
int    FNR_int_arr[10];                           // Basic: FNR 
int    G_int;                                     // Basic: G 
int    P_int;                                     // Basic: P 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
int    U_int;                                     // Basic: U 
int    V_int;                                     // Basic: V 
int    X_int;                                     // Basic: X 
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
#pragma argsused X
int FNR(int X){
    int rtn=INT(5*RND(1)+1);
    return(rtn);
}

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
