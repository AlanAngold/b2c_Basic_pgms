/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/chief.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x619fd62edac0 ---------A   00002 PRINT TAB(30) "CHIEF"
    0x619fd62eee10 ---------A   00004 PRINT TAB(15) "CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x619fd62ed210 ---------A   00006 PRINT:PRINT:PRINT
    0x619fd62ee4c0 ---------A   00010 PRINT "I AM CHIEF NUMBERS FREEK, THE GREAT INDIAN MATH GOD."
    0x619fd62ee130 ---------A   00020 PRINT "ARE YOU READY TO TAKE THE TEST YOU CALLED ME OUT FOR";
    0x619fd62ec610 ---------A   00030 INPUT A$
    0x619fd62ec5b0 ---------A   00040 IF A$="YES" THEN 60
    0x619fd62ee600 ---------A   00050 PRINT "SHUT UP, PALE FACE WITH WISE TONGUE."
    0x619fd62ed560 ---------A T 00060 PRINT " TAKE A NUMBER AND ADD 3. DIVIDE THIS NUMBER BY 5 AND"
    0x619fd62ed630 ---------A   00070 PRINT "MULTIPLY BY 8. DIVIDE BY 5 AND ADD THE SAME. SUBTRACT 1."
    0x619fd62ed760 ---------A   00080 PRINT "  WHAT DO YOU HAVE";
    0x619fd62f48c0 ---------A   00090 INPUT B
    0x619fd62f5220 ---------A   00100 LET C = (B+1-5)*5/8*5-3
    0x619fd62f5590 ---------A   00110 PRINT "I BET YOUR NUMBER WAS" C". AM I RIGHT";
    0x619fd62f5780 ---------A   00120 INPUT D$
    0x619fd62f5a20 ---------A   00130 IF D$="YES" THEN 500
    0x619fd62f5b80 ---------A   00140 PRINT "WHAT WAS YOUR ORIGINAL NUMBER";
    0x619fd62f5d90 ---------A   00150 INPUT K
    0x619fd62f6190 ---------A   00155 LET F=K+3
    0x619fd62f6580 ---------A   00160 LET G=F/5
    0x619fd62f6970 ---------A   00170 LET H=G*8
    0x619fd62f6e60 ---------A   00180 LET I=H/5+5
    0x619fd62f7270 ---------A   00190 LET J=I-1
    0x619fd62f73a0 ---------A   00200 PRINT "SO YOU THINK YOU'RE SO SMART, EH?"
    0x619fd62f7520 ---------A   00210 PRINT "NOW WATCH."
    0x619fd62f7b80 ---------A   00230 PRINT K"PLUS 3 EQUALS"F". THIS DIVIDED BY 5 EQUALS"G";"
    0x619fd62f7f00 ---------A   00240 PRINT "THIS TIMES 8 EQUALS"H". IF WE DIVIDE BY 5 AND ADD 5,"
    0x619fd62f8470 ---------A   00250 PRINT "WE GET"I", WHICH, MINUS 1, EQUALS"J"."
    0x619fd62f85e0 ---------A   00260 PRINT "NOW DO YOU BELIEVE ME";
    0x619fd62f8800 ---------A   00270 INPUT Z$
    0x619fd62f8a90 ---------A   00290 IF Z$="YES" THEN 500
    0x619fd62f8c20 ---------A   00295 PRINT "YOU HAVE MADE ME MAD!!!"
    0x619fd62f8d80 ---------A   00300 PRINT "THERE MUST BE A GREAT LIGHTNING BOLT!"
    0x619fd62f9060 ---------A   00310 PRINT:PRINT
    0x619fd62f94b0 ---------A   00330 FOR X=30 TO 22 STEP -1
    0x619fd62f9770 ---------A   00340 PRINT TAB(X) "X X"
    0x619fd62f98a0 ---------A   00350 NEXT X
    0x619fd62f9b60 ---------A   00360 PRINT TAB(21) "X XXX"
    0x619fd62f9e00 ---------A   00370 PRINT TAB(20) "X   X"
    0x619fd62fa0a0 ---------A   00380 PRINT TAB(19) "XX X"
    0x619fd62fa4f0 ---------A   00390 FOR Y=20 TO 13 STEP -1
    0x619fd62fa7b0 ---------A   00400 PRINT TAB(Y) "X X"
    0x619fd62fa8e0 ---------A   00410 NEXT Y
    0x619fd62fab80 ---------A   00420 PRINT TAB(12) "XX"
    0x619fd62fae10 ---------A   00430 PRINT TAB(11) "X"
    0x619fd62fb0c0 ---------A   00440 PRINT TAB(10) "*"
    0x619fd62fb2e0 ---------A   00450 PRINT:PRINT"#########################":PRINT
    0x619fd62fb450 ---------A   00470 PRINT "I HOPE YOU BELIEVE ME NOW, FOR YOUR SAKE!!"
    0x619fd62fb4c0 ---------A   00480 GOTO 520
    0x619fd62fb600 ----------   00510 PRINT "BYE!!!"
    0x619fd62fb650 ---------A T 00520 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00060      00040T
     00500      00130T, 00290T
     00520      00480T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x619fd62edac0 (00002)   0x000000000000 (00000)   0x619fd62fb650 (00520)   0x619fd62fb650 (00520)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01500 - 10000    8510 

 */



/*
 *  Symbol Table Listing for 'basic/chief.bas'
 *
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Float       
    C                        Float       
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D$                       String      
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Float       
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Float       
    H                        Float       
    HEX$            Function String          args=1, int    
    I                        Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Float       
    K                        Float       
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
    X                        Float       
    Y                        Float       
    Z$                       String      

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/chief.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x619fd62edac0 ---------A   01000 PRINT TAB(30) "CHIEF"
    0x619fd62eee10 ---------A   01010 PRINT TAB(15) "CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x619fd62ed210 ---------A   01020 PRINT:PRINT:PRINT
    0x619fd62ee4c0 ---------A   01030 PRINT "I AM CHIEF NUMBERS FREEK, THE GREAT INDIAN MATH GOD."
    0x619fd62ee130 ---------A   01040 PRINT "ARE YOU READY TO TAKE THE TEST YOU CALLED ME OUT FOR";
    0x619fd62ec610 ---------A   01050 INPUT A$
    0x619fd62ec5b0 ---------A   01060 IF A$="YES" THEN 1080
    0x619fd62ee600 ---------A   01070 PRINT "SHUT UP, PALE FACE WITH WISE TONGUE."
    0x619fd62ed560 ---------A T 01080 PRINT " TAKE A NUMBER AND ADD 3. DIVIDE THIS NUMBER BY 5 AND"
    0x619fd62ed630 ---------A   01090 PRINT "MULTIPLY BY 8. DIVIDE BY 5 AND ADD THE SAME. SUBTRACT 1."
    0x619fd62ed760 ---------A   01100 PRINT "  WHAT DO YOU HAVE";
    0x619fd62f48c0 ---------A   01110 INPUT B
    0x619fd62f5220 ---------A   01120 LET C = (B+1-5)*5/8*5-3
    0x619fd62f5590 ---------A   01130 PRINT "I BET YOUR NUMBER WAS" C". AM I RIGHT";
    0x619fd62f5780 ---------A   01140 INPUT D$
    0x619fd62f5a20 ---------A   01150 IF D$="YES" THEN 500
    0x619fd62f5b80 ---------A   01160 PRINT "WHAT WAS YOUR ORIGINAL NUMBER";
    0x619fd62f5d90 ---------A   01170 INPUT K
    0x619fd62f6190 ---------A   01180 LET F=K+3
    0x619fd62f6580 ---------A   01190 LET G=F/5
    0x619fd62f6970 ---------A   01200 LET H=G*8
    0x619fd62f6e60 ---------A   01210 LET I=H/5+5
    0x619fd62f7270 ---------A   01220 LET J=I-1
    0x619fd62f73a0 ---------A   01230 PRINT "SO YOU THINK YOU'RE SO SMART, EH?"
    0x619fd62f7520 ---------A   01240 PRINT "NOW WATCH."
    0x619fd62f7b80 ---------A   01250 PRINT K"PLUS 3 EQUALS"F". THIS DIVIDED BY 5 EQUALS"G";"
    0x619fd62f7f00 ---------A   01260 PRINT "THIS TIMES 8 EQUALS"H". IF WE DIVIDE BY 5 AND ADD 5,"
    0x619fd62f8470 ---------A   01270 PRINT "WE GET"I", WHICH, MINUS 1, EQUALS"J"."
    0x619fd62f85e0 ---------A   01280 PRINT "NOW DO YOU BELIEVE ME";
    0x619fd62f8800 ---------A   01290 INPUT Z$
    0x619fd62f8a90 ---------A   01300 IF Z$="YES" THEN 500
    0x619fd62f8c20 ---------A   01310 PRINT "YOU HAVE MADE ME MAD!!!"
    0x619fd62f8d80 ---------A   01320 PRINT "THERE MUST BE A GREAT LIGHTNING BOLT!"
    0x619fd62f9060 ---------A   01330 PRINT:PRINT
    0x619fd62f94b0 ---------A   01340 FOR X=30 TO 22 STEP -1
    0x619fd62f9770 ---------A   01350 PRINT TAB(X) "X X"
    0x619fd62f98a0 ---------A   01360 NEXT X
    0x619fd62f9b60 ---------A   01370 PRINT TAB(21) "X XXX"
    0x619fd62f9e00 ---------A   01380 PRINT TAB(20) "X   X"
    0x619fd62fa0a0 ---------A   01390 PRINT TAB(19) "XX X"
    0x619fd62fa4f0 ---------A   01400 FOR Y=20 TO 13 STEP -1
    0x619fd62fa7b0 ---------A   01410 PRINT TAB(Y) "X X"
    0x619fd62fa8e0 ---------A   01420 NEXT Y
    0x619fd62fab80 ---------A   01430 PRINT TAB(12) "XX"
    0x619fd62fae10 ---------A   01440 PRINT TAB(11) "X"
    0x619fd62fb0c0 ---------A   01450 PRINT TAB(10) "*"
    0x619fd62fb2e0 ---------A   01460 PRINT:PRINT"#########################":PRINT
    0x619fd62fb450 ---------A   01470 PRINT "I HOPE YOU BELIEVE ME NOW, FOR YOUR SAKE!!"
    0x619fd62fb4c0 ---------A   01480 GOTO 1490
    0x619fd62fb650 ---------A T 01490 END
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
char*  A_str;                                     // Basic: A$ 
float  B_flt;                                     // Basic: B 
float  C_flt;                                     // Basic: C 
char*  D_str;                                     // Basic: D$ 
float  F_flt;                                     // Basic: F 
float  G_flt;                                     // Basic: G 
float  H_flt;                                     // Basic: H 
float  I_flt;                                     // Basic: I 
float  J_flt;                                     // Basic: J 
float  K_flt;                                     // Basic: K 
float  X_flt;                                     // Basic: X 
float  Y_flt;                                     // Basic: Y 
char*  Z_str;                                     // Basic: Z$ 
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
