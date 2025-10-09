/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/guess.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x61c631e44ac0 ---------A T 00001 PRINT TAB(33);"GUESS"
    0x61c631e45e10 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x61c631e45f90 ---------A   00003 PRINT:PRINT:PRINT
    0x61c631e454c0 ---------A   00004 PRINT "THIS IS A NUMBER GUESSING GAME. I'LL THINK"
    0x61c631e45980 ---------A   00005 PRINT "OF A NUMBER BETWEEN 1 AND ANY LIMIT YOU WANT."
    0x61c631e43fc0 ---------A   00006 PRINT "THEN YOU HAVE TO GUESS WHAT IT IS."
    0x61c631e43d80 ---------A   00007 PRINT
    0x61c631e43dd0 ---------A   00008 PRINT "WHAT LIMIT DO YOU WANT";
    0x61c631e43610 ---------A   00009 INPUT L
    0x61c631e459d0 ---------A   00010 PRINT
    0x61c631e4ba00 ---------A   00011 L1=INT(LOG(L)/LOG(2))+1
    0x61c631e4bc10 ---------A T 00012 PRINT "I'M THINKING OF A NUMBER BETWEEN 1 AND";L
    0x61c631e4bf00 ---------A   00013 G=1
    0x61c631e4c030 ---------A   00014 PRINT "NOW YOU TRY TO GUESS WHAT IT IS."
    0x61c631e4c6e0 ---------A   00015 M=INT(L*RND(1)+1)
    0x61c631e435b0 ---------A T 00020 INPUT N
    0x61c631e4caf0 ---------A   00021 IF N>0 THEN 25
    0x61c631e4cb70 ---------A   00022 GOSUB 70
    0x61c631e4cbd0 ---------A   00023 GOTO 1
    0x61c631e4ce30 ---------A T 00025 IF N=M THEN 50
    0x61c631e4d170 ---------A   00030 G=G+1
    0x61c631e4d400 ---------A   00031 IF N>M THEN 40
    0x61c631e4d540 ---------A   00032 PRINT "TOO LOW. TRY A BIGGER ANSWER."
    0x61c631e4d5d0 ---------A   00033 GOTO 20
    0x61c631e4d6f0 ---------A T 00040 PRINT "TOO HIGH. TRY A SMALLER ANSWER."
    0x61c631e4d780 ---------A   00042 GOTO 20
    0x61c631e4dad0 ---------A T 00050 PRINT "THAT'S IT! YOU GOT IT IN";G;"TRIES."
    0x61c631e4dd40 ---------A   00052 IF G<L1 THEN 58
    0x61c631e4dff0 ---------A   00054 IF G=L1 THEN 60
    0x61c631e4e270 ---------A   00056 PRINT "YOU SHOULD HAVE BEEN ABLE TO GET IT IN ONLY";L1
    0x61c631e4e2e0 ---------A   00057 GOTO 65
    0x61c631e4e440 ---------A T 00058 PRINT "VERY ";
    0x61c631e4e590 ---------A T 00060 PRINT "GOOD."
    0x61c631e4e810 ---------A T 00065 GOSUB 70
    0x61c631e4e870 ---------A   00066 GOTO 12
    0x61c631e4ebf0 ---------B G 00070 FOR H=1 TO 5
    0x61c631e4ec70 ---------B   00071 PRINT
    0x61c631e4eda0 ---------B   00072 NEXT H
    0x61c631e4ee00 ---------B   00073 RETURN
    0x61c631e4ee60 ---------A   00099 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00001      00023T
     00012      00066T
     00020      00033T, 00042T
     00025      00021T
     00040      00031T
     00050      00025T
     00058      00052T
     00060      00054T
     00065      00057T
     00070      00022G, 00065G

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x61c631e44ac0 (00001)   0x000000000000 (00000)   0x61c631e4ee60 (00099)   0x61c631e4ee60 (00099)   
   B) 0x61c631e4ebf0 (00070)   0x61c631e4ebf0 (00070)   0x61c631e4ee00 (00073)   0x61c631e4ee00 (00073)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01410 - 10000    8600 

 */



/*
 *  Symbol Table Listing for 'basic/guess.bas'
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
    FRE             Function Integer         args=1, char*  
    G                        Float       
    H                        Float       
    HEX$            Function String          args=1, int    
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    L                        Float       
    L1                       Float       
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Float       
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
 *  Listing of basic/guess.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x61c631e44ac0 ---------A T 01000 PRINT TAB(33);"GUESS"
    0x61c631e45e10 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x61c631e45f90 ---------A   01020 PRINT:PRINT:PRINT
    0x61c631e454c0 ---------A   01030 PRINT "THIS IS A NUMBER GUESSING GAME. I'LL THINK"
    0x61c631e45980 ---------A   01040 PRINT "OF A NUMBER BETWEEN 1 AND ANY LIMIT YOU WANT."
    0x61c631e43fc0 ---------A   01050 PRINT "THEN YOU HAVE TO GUESS WHAT IT IS."
    0x61c631e43d80 ---------A   01060 PRINT
    0x61c631e43dd0 ---------A   01070 PRINT "WHAT LIMIT DO YOU WANT";
    0x61c631e43610 ---------A   01080 INPUT L
    0x61c631e459d0 ---------A   01090 PRINT
    0x61c631e4ba00 ---------A   01100 L1=INT(LOG(L)/LOG(2))+1
    0x61c631e4bc10 ---------A T 01110 PRINT "I'M THINKING OF A NUMBER BETWEEN 1 AND";L
    0x61c631e4bf00 ---------A   01120 G=1
    0x61c631e4c030 ---------A   01130 PRINT "NOW YOU TRY TO GUESS WHAT IT IS."
    0x61c631e4c6e0 ---------A   01140 M=INT(L*RND(1)+1)
    0x61c631e435b0 ---------A T 01150 INPUT N
    0x61c631e4caf0 ---------A   01160 IF N>0 THEN 1190
    0x61c631e4cb70 ---------A   01170 GOSUB 1360
    0x61c631e4cbd0 ---------A   01180 GOTO 1000
    0x61c631e4ce30 ---------A T 01190 IF N=M THEN 1260
    0x61c631e4d170 ---------A   01200 G=G+1
    0x61c631e4d400 ---------A   01210 IF N>M THEN 1240
    0x61c631e4d540 ---------A   01220 PRINT "TOO LOW. TRY A BIGGER ANSWER."
    0x61c631e4d5d0 ---------A   01230 GOTO 1150
    0x61c631e4d6f0 ---------A T 01240 PRINT "TOO HIGH. TRY A SMALLER ANSWER."
    0x61c631e4d780 ---------A   01250 GOTO 1150
    0x61c631e4dad0 ---------A T 01260 PRINT "THAT'S IT! YOU GOT IT IN";G;"TRIES."
    0x61c631e4dd40 ---------A   01270 IF G<L1 THEN 1310
    0x61c631e4dff0 ---------A   01280 IF G=L1 THEN 1320
    0x61c631e4e270 ---------A   01290 PRINT "YOU SHOULD HAVE BEEN ABLE TO GET IT IN ONLY";L1
    0x61c631e4e2e0 ---------A   01300 GOTO 1330
    0x61c631e4e440 ---------A T 01310 PRINT "VERY ";
    0x61c631e4e590 ---------A T 01320 PRINT "GOOD."
    0x61c631e4e810 ---------A T 01330 GOSUB 1360
    0x61c631e4e870 ---------A   01340 GOTO 1110
    0x61c631e4ee60 ---------A   01350 END
    0x61c631e4ebf0 ---------B G 01360 FOR H=1 TO 5
    0x61c631e4ec70 ---------B   01370 PRINT
    0x61c631e4eda0 ---------B   01380 NEXT H
    0x61c631e50f40 ---------B   01390 GOTO 01400
    0x61c631e50f80 ---------B T 01400 RETURN
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
float  G_flt;                                     // Basic: G 
float  H_flt;                                     // Basic: H 
float  L_flt;                                     // Basic: L 
float  L1_flt;                                    // Basic: L1 
float  M_flt;                                     // Basic: M 
float  N_flt;                                     // Basic: N 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01360();

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

void Routine_01360(){
    // 01360 FOR H=1 TO 5
    for(H_flt=1;H_flt<=5;H_flt++){
        // 01370 PRINT
        b2c_printf("\n");
        // 01380 NEXT H
        int dummy_1380=0; // Ignore this line.
    }; // End-For(H_flt)
    // 01390 GOTO 01400
    goto Lbl_01400;

  Lbl_01400:
    // 01400 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
