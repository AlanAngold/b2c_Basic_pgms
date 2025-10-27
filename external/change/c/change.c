/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/change.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x58ad41c2ab80 ---------A   00002 PRINT TAB(33);"CHANGE"
    0x58ad41c2bf30 ---------A   00004 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x58ad41c1a2b0 ---------A   00005 PRINT:PRINT:PRINT
    0x58ad41c297f0 ---------A   00006 PRINT "I, YOUR FRIENDLY MICROCOMPUTER, WILL DETERMINE"
    0x58ad41c2bae0 ---------A   00008 PRINT "THE CORRECT CHANGE FOR ITEMS COSTING UP TO $100."
    0x58ad41c29e90 ---------A   00009 PRINT:PRINT
    0x58ad41c29670 ---------A T 00010 PRINT "COST OF ITEM";:INPUT A:PRINT "AMOUNT OF PAYMENT";:INPUT P
    0x58ad41c31ec0 ---------A   00020 C=P-A:M=C:IF C<>0 THEN 90
    0x58ad41c31fe0 ---------A   00025 PRINT "CORRECT AMOUNT, THANK YOU."
    0x58ad41c32030 ---------A   00030 GOTO 400
    0x58ad41c32270 ---------A T 00090 IF C>0 THEN 120
    0x58ad41c2a040 ---------A   00095 PRINT "SORRY, YOU HAVE SHORT-CHANGED ME $";A-P
    0x58ad41c32590 ---------A   00100 GOTO 10
    0x58ad41c327d0 ---------A T 00120 PRINT "YOUR CHANGE, $";C
    0x58ad41c32ca0 ---------A   00130 D=INT(C/10)
    0x58ad41c32ed0 ---------A   00140 IF D=0 THEN 155
    0x58ad41c33130 ---------A   00150 PRINT D;"TEN DOLLAR BILL(S)"
    0x58ad41c335c0 ---------A T 00155 C=M-(D*10)
    0x58ad41c33a90 ---------A   00160 E=INT(C/5)
    0x58ad41c33cc0 ---------A   00170 IF E=0 THEN 185
    0x58ad41c33f20 ---------A   00180 PRINT E;"FIVE DOLLARS BILL(S)"
    0x58ad41c345d0 ---------A T 00185 C=M-(D*10+E*5)
    0x58ad41c349a0 ---------A   00190 F=INT(C)
    0x58ad41c34bd0 ---------A   00200 IF F=0 THEN 215
    0x58ad41c34e30 ---------A   00210 PRINT F;"ONE DOLLAR BILL(S)"
    0x58ad41c35600 ---------A T 00215 C=M-(D*10+E*5+F)
    0x58ad41c35930 ---------A   00220 C=C*100
    0x58ad41c35c20 ---------A   00225 N=C
    0x58ad41c360f0 ---------A   00230 G=INT(C/50)
    0x58ad41c36350 ---------A   00240 IF G=0 THEN 255
    0x58ad41c365b0 ---------A   00250 PRINT G;"ONE HALF DOLLAR(S)"
    0x58ad41c36a40 ---------A T 00255 C=N-(G*50)
    0x58ad41c36f10 ---------A   00260 H=INT(C/25)
    0x58ad41c37380 ---------A   00270 IF H=0 THEN 285
    0x58ad41c375e0 ---------A   00280 PRINT H;"QUARTER(S)"
    0x58ad41c37c90 ---------A T 00285 C=N-(G*50+H*25)
    0x58ad41c38160 ---------A   00290 I=INT(C/10)
    0x58ad41c383b0 ---------A   00300 IF I=0 THEN 315
    0x58ad41c38620 ---------A   00310 PRINT I;"DIME(S)"
    0x58ad41c38ef0 ---------A T 00315 C=N-(G*50+H*25+I*10)
    0x58ad41c393c0 ---------A   00320 J=INT(C/5)
    0x58ad41c39610 ---------A   00330 IF J=0 THEN 345
    0x58ad41c39880 ---------A   00340 PRINT J;"NICKEL(S)"
    0x58ad41c3a370 ---------A T 00345 C=N-(G*50+H*25+I*10+J*5)
    0x58ad41c3a840 ---------A   00350 K=INT(C+.5)
    0x58ad41c3aa90 ---------A   00360 IF K=0 THEN 380
    0x58ad41c3ad00 ---------A   00370 PRINT K;"PENNY(S)"
    0x58ad41c3ae60 ---------A T 00380 PRINT "THANK YOU, COME AGAIN."
    0x58ad41c3af20 ---------A   00390 PRINT:PRINT
    0x58ad41c3af90 ---------A T 00400 GOTO 10
    0x58ad41c3afd0 ---------A   00410 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00010      00100T, 00400T
     00090      00020T
     00120      00090T
     00155      00140T
     00185      00170T
     00215      00200T
     00255      00240T
     00285      00270T
     00315      00300T
     00345      00330T
     00380      00360T
     00400      00030T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x58ad41c2ab80 (00002)   0x58ad41c2ab80 (00002)   0x58ad41c3afd0 (00410)   0x58ad41c3afd0 (00410)   


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
 *  Symbol Table Listing for 'basic/change.bas'
 *
    A                        Integer     
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
    D                        Integer     
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
    H                        Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    K                        Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
    OCT$            Function String          args=1, float  
    P                        Integer     
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
 *  Listing of basic/change.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x58ad41c2ab80 ---------A   01000 PRINT TAB(33);"CHANGE"
    0x58ad41c2bf30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x58ad41c1a2b0 ---------A   01020 PRINT:PRINT:PRINT
    0x58ad41c297f0 ---------A   01030 PRINT "I, YOUR FRIENDLY MICROCOMPUTER, WILL DETERMINE"
    0x58ad41c2bae0 ---------A   01040 PRINT "THE CORRECT CHANGE FOR ITEMS COSTING UP TO $100."
    0x58ad41c29e90 ---------A   01050 PRINT:PRINT
    0x58ad41c29670 ---------A T 01060 PRINT "COST OF ITEM";:INPUT A:PRINT "AMOUNT OF PAYMENT";:INPUT P
    0x58ad41c31ec0 ---------A   01070 C=P-A:M=C:IF C<>0 THEN 1100
    0x58ad41c31fe0 ---------A   01080 PRINT "CORRECT AMOUNT, THANK YOU."
    0x58ad41c32030 ---------A   01090 GOTO 1490
    0x58ad41c32270 ---------A T 01100 IF C>0 THEN 1130
    0x58ad41c2a040 ---------A   01110 PRINT "SORRY, YOU HAVE SHORT-CHANGED ME $";A-P
    0x58ad41c32590 ---------A   01120 GOTO 1060
    0x58ad41c327d0 ---------A T 01130 PRINT "YOUR CHANGE, $";C
    0x58ad41c32ca0 ---------A   01140 D=INT(C/10)
    0x58ad41c32ed0 ---------A   01150 IF D=0 THEN 1170
    0x58ad41c33130 ---------A   01160 PRINT D;"TEN DOLLAR BILL(S)"
    0x58ad41c335c0 ---------A T 01170 C=M-(D*10)
    0x58ad41c33a90 ---------A   01180 E=INT(C/5)
    0x58ad41c33cc0 ---------A   01190 IF E=0 THEN 1210
    0x58ad41c33f20 ---------A   01200 PRINT E;"FIVE DOLLARS BILL(S)"
    0x58ad41c345d0 ---------A T 01210 C=M-(D*10+E*5)
    0x58ad41c349a0 ---------A   01220 F=INT(C)
    0x58ad41c34bd0 ---------A   01230 IF F=0 THEN 1250
    0x58ad41c34e30 ---------A   01240 PRINT F;"ONE DOLLAR BILL(S)"
    0x58ad41c35600 ---------A T 01250 C=M-(D*10+E*5+F)
    0x58ad41c35930 ---------A   01260 C=C*100
    0x58ad41c35c20 ---------A   01270 N=C
    0x58ad41c360f0 ---------A   01280 G=INT(C/50)
    0x58ad41c36350 ---------A   01290 IF G=0 THEN 1310
    0x58ad41c365b0 ---------A   01300 PRINT G;"ONE HALF DOLLAR(S)"
    0x58ad41c36a40 ---------A T 01310 C=N-(G*50)
    0x58ad41c36f10 ---------A   01320 H=INT(C/25)
    0x58ad41c37380 ---------A   01330 IF H=0 THEN 1350
    0x58ad41c375e0 ---------A   01340 PRINT H;"QUARTER(S)"
    0x58ad41c37c90 ---------A T 01350 C=N-(G*50+H*25)
    0x58ad41c38160 ---------A   01360 I=INT(C/10)
    0x58ad41c383b0 ---------A   01370 IF I=0 THEN 1390
    0x58ad41c38620 ---------A   01380 PRINT I;"DIME(S)"
    0x58ad41c38ef0 ---------A T 01390 C=N-(G*50+H*25+I*10)
    0x58ad41c393c0 ---------A   01400 J=INT(C/5)
    0x58ad41c39610 ---------A   01410 IF J=0 THEN 1430
    0x58ad41c39880 ---------A   01420 PRINT J;"NICKEL(S)"
    0x58ad41c3a370 ---------A T 01430 C=N-(G*50+H*25+I*10+J*5)
    0x58ad41c3a840 ---------A   01440 K=INT(C+.5)
    0x58ad41c3aa90 ---------A   01450 IF K=0 THEN 1470
    0x58ad41c3ad00 ---------A   01460 PRINT K;"PENNY(S)"
    0x58ad41c3ae60 ---------A T 01470 PRINT "THANK YOU, COME AGAIN."
    0x58ad41c3af20 ---------A   01480 PRINT:PRINT
    0x58ad41c3af90 ---------A T 01490 GOTO 1060
    0x58ad41c3afd0 ---------A   01500 END
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
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
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
