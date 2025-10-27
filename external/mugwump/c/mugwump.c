/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/mugwump.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ddbfff53b80 ---------A   00001 PRINT TAB(33);"MUGWUMP"
    0x5ddbfff54f30 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5ddbfff550b0 ---------A   00003 PRINT:PRINT:PRINT
    0x5ddbfff529e0 ---------A   00004 REM     COURTESY PEOPLE'S COMPUTER COMPANY
    0x5ddbfff52e40 ---------A   00010 DIM P(4,2)
    0x5ddbfff54730 ---------A   00020 PRINT "THE OBJECT OF THIS GAME IS TO FIND FOUR MUGWUMPS"
    0x5ddbfff55150 ---------A   00030 PRINT "HIDDEN ON A 10 BY 10 GRID.  HOMEBASE IS POSITION 0,0."
    0x5ddbfff536b0 ---------A   00040 PRINT "ANY GUESS YOU MAKE MUST BE TWO NUMBERS WITH EACH"
    0x5ddbfff53850 ---------A   00050 PRINT "NUMBER BETWEEN 0 AND 9, INCLUSIVE.  FIRST NUMBER"
    0x5ddbfff52e80 ---------A   00060 PRINT "IS DISTANCE TO RIGHT OF HOMEBASE AND SECOND NUMBER"
    0x5ddbfff5aa20 ---------A   00070 PRINT "IS DISTANCE ABOVE HOMEBASE."
    0x5ddbfff5aac0 ---------A   00080 PRINT
    0x5ddbfff5ac50 ---------A   00090 PRINT "YOU GET 10 TRIES.  AFTER EACH TRY, I WILL TELL"
    0x5ddbfff5ada0 ---------A   00100 PRINT "YOU HOW FAR YOU ARE FROM EACH MUGWUMP."
    0x5ddbfff5adf0 ---------A   00110 PRINT
    0x5ddbfff5ae40 ---------A T 00240 GOSUB 1000
    0x5ddbfff5b0a0 ---------A   00250 T=0
    0x5ddbfff5b370 ---------A T 00260 T=T+1
    0x5ddbfff5b3c0 ---------A   00270 PRINT
    0x5ddbfff5b450 ---------A   00275 PRINT
    0x5ddbfff5b760 ---------A   00290 PRINT "TURN NO.";T;"-- WHAT IS YOUR GUESS";
    0x5ddbfff526d0 ---------A   00300 INPUT M,N
    0x5ddbfff52670 ---------A   00310 FOR I=1 TO 4
    0x5ddbfff5c1b0 ---------A   00320 IF P(I,1)=-1 THEN 400
    0x5ddbfff5c5b0 ---------A   00330 IF P(I,1)<>M THEN 380
    0x5ddbfff5c9d0 ---------A   00340 IF P(I,2)<>N THEN 380
    0x5ddbfff5cd70 ---------A   00350 P(I,1)=-1
    0x5ddbfff5cfa0 ---------A   00360 PRINT "YOU HAVE FOUND MUGWUMP";I
    0x5ddbfff5cff0 ---------A   00370 GOTO 400
    0x5ddbfff5dd00 ---------A T 00380 D=SQR((P(I,1)-M)^2+(P(I,2)-N)^2)
    0x5ddbfff5e470 ---------A   00390 PRINT "YOU ARE";(INT(D*10))/10;"UNITS FROM MUGWUMP";I
    0x5ddbfff5e5a0 ---------A T 00400 NEXT I
    0x5ddbfff5e950 ---------A   00410 FOR J=1 TO 4
    0x5ddbfff5ef60 ---------A   00420 IF P(J,1)<>-1 THEN 470
    0x5ddbfff5f0a0 ---------A   00430 NEXT J
    0x5ddbfff5f140 ---------A   00440 PRINT
    0x5ddbfff5f490 ---------A   00450 PRINT "YOU GOT THEM ALL IN";T;"TURNS!"
    0x5ddbfff5f500 ---------A   00460 GOTO 580
    0x5ddbfff5f740 ---------A T 00470 IF T<10 THEN 260
    0x5ddbfff5f7f0 ---------A   00480 PRINT
    0x5ddbfff5f970 ---------A   00490 PRINT "SORRY, THAT'S 10 TRIES.  HERE IS WHERE THEY'RE HIDING:"
    0x5ddbfff5fc50 ---------A   00540 FOR I=1 TO 4
    0x5ddbfff60070 ---------A   00550 IF P(I,1)=-1 THEN 570
    0x5ddbfff60b10 ---------A   00560 PRINT "MUGWUMP";I;"IS AT (";P(I,1);",";P(I,2);")"
    0x5ddbfff60c40 ---------A T 00570 NEXT I
    0x5ddbfff60ce0 ---------A T 00580 PRINT
    0x5ddbfff60e60 ---------A   00600 PRINT "THAT WAS FUN! LET'S PLAY AGAIN......."
    0x5ddbfff60fc0 ---------A   00610 PRINT "FOUR MORE MUGWUMPS ARE NOW IN HIDING."
    0x5ddbfff61030 ---------A   00630 GOTO 240
    0x5ddbfff612f0 ---------B G 01000 FOR J=1 TO 2
    0x5ddbfff615e0 ---------B   01010 FOR I=1 TO 4
    0x5ddbfff61c80 ---------B   01020 P(I,J)=INT(10*RND(1))
    0x5ddbfff61db0 ---------B   01030 NEXT I
    0x5ddbfff61ef0 ---------B   01040 NEXT J
    0x5ddbfff61f50 ---------B   01050 RETURN
    0x5ddbfff61fb0 ---------A   01099 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00240      00630T
     00260      00470T
     00380      00330T, 00340T
     00400      00320T, 00370T
     00470      00420T
     00570      00550T
     00580      00460T
     01000      00240G

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5ddbfff53b80 (00001)   0x5ddbfff53b80 (00001)   0x5ddbfff61fb0 (01099)   0x5ddbfff61fb0 (01099)   
   B) 0x5ddbfff612f0 (01000)   0x5ddbfff612f0 (01000)   0x5ddbfff61f50 (01050)   0x5ddbfff61f50 (01050)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01570 - 10000    8440 

 */



/*
 *  Symbol Table Listing for 'basic/mugwump.bas'
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
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
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
    P               Array    Integer         {0,3} {0,1} 
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
 *  Listing of basic/mugwump.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5ddbfff53b80 ---------A   01000 PRINT TAB(33);"MUGWUMP"
    0x5ddbfff54f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5ddbfff550b0 ---------A   01020 PRINT:PRINT:PRINT
    0x5ddbfff529e0 ---------A   01030 REM     COURTESY PEOPLE'S COMPUTER COMPANY
    0x5ddbfff52e40 ---------A   01040 DIM P(4,2)
    0x5ddbfff54730 ---------A   01050 PRINT "THE OBJECT OF THIS GAME IS TO FIND FOUR MUGWUMPS"
    0x5ddbfff55150 ---------A   01060 PRINT "HIDDEN ON A 10 BY 10 GRID.  HOMEBASE IS POSITION 0,0."
    0x5ddbfff536b0 ---------A   01070 PRINT "ANY GUESS YOU MAKE MUST BE TWO NUMBERS WITH EACH"
    0x5ddbfff53850 ---------A   01080 PRINT "NUMBER BETWEEN 0 AND 9, INCLUSIVE.  FIRST NUMBER"
    0x5ddbfff52e80 ---------A   01090 PRINT "IS DISTANCE TO RIGHT OF HOMEBASE AND SECOND NUMBER"
    0x5ddbfff5aa20 ---------A   01100 PRINT "IS DISTANCE ABOVE HOMEBASE."
    0x5ddbfff5aac0 ---------A   01110 PRINT
    0x5ddbfff5ac50 ---------A   01120 PRINT "YOU GET 10 TRIES.  AFTER EACH TRY, I WILL TELL"
    0x5ddbfff5ada0 ---------A   01130 PRINT "YOU HOW FAR YOU ARE FROM EACH MUGWUMP."
    0x5ddbfff5adf0 ---------A   01140 PRINT
    0x5ddbfff5ae40 ---------A T 01150 GOSUB 1500
    0x5ddbfff5b0a0 ---------A   01160 T=0
    0x5ddbfff5b370 ---------A T 01170 T=T+1
    0x5ddbfff5b3c0 ---------A   01180 PRINT
    0x5ddbfff5b450 ---------A   01190 PRINT
    0x5ddbfff5b760 ---------A   01200 PRINT "TURN NO.";T;"-- WHAT IS YOUR GUESS";
    0x5ddbfff526d0 ---------A   01210 INPUT M,N
    0x5ddbfff52670 ---------A   01220 FOR I=1 TO 4
    0x5ddbfff5c1b0 ---------A   01230 IF P(I,1)=-1 THEN 1310
    0x5ddbfff5c5b0 ---------A   01240 IF P(I,1)<>M THEN 1290
    0x5ddbfff5c9d0 ---------A   01250 IF P(I,2)<>N THEN 1290
    0x5ddbfff5cd70 ---------A   01260 P(I,1)=-1
    0x5ddbfff5cfa0 ---------A   01270 PRINT "YOU HAVE FOUND MUGWUMP";I
    0x5ddbfff5cff0 ---------A   01280 GOTO 1310
    0x5ddbfff5dd00 ---------A T 01290 D=SQR((P(I,1)-M)^2+(P(I,2)-N)^2)
    0x5ddbfff5e470 ---------A   01300 PRINT "YOU ARE";(INT(D*10))/10;"UNITS FROM MUGWUMP";I
    0x5ddbfff5e5a0 ---------A T 01310 NEXT I
    0x5ddbfff5e950 ---------A   01320 FOR J=1 TO 4
    0x5ddbfff5ef60 ---------A   01330 IF P(J,1)<>-1 THEN 1380
    0x5ddbfff5f0a0 ---------A   01340 NEXT J
    0x5ddbfff5f140 ---------A   01350 PRINT
    0x5ddbfff5f490 ---------A   01360 PRINT "YOU GOT THEM ALL IN";T;"TURNS!"
    0x5ddbfff5f500 ---------A   01370 GOTO 1450
    0x5ddbfff5f740 ---------A T 01380 IF T<10 THEN 1170
    0x5ddbfff5f7f0 ---------A   01390 PRINT
    0x5ddbfff5f970 ---------A   01400 PRINT "SORRY, THAT'S 10 TRIES.  HERE IS WHERE THEY'RE HIDING:"
    0x5ddbfff5fc50 ---------A   01410 FOR I=1 TO 4
    0x5ddbfff60070 ---------A   01420 IF P(I,1)=-1 THEN 1440
    0x5ddbfff60b10 ---------A   01430 PRINT "MUGWUMP";I;"IS AT (";P(I,1);",";P(I,2);")"
    0x5ddbfff60c40 ---------A T 01440 NEXT I
    0x5ddbfff60ce0 ---------A T 01450 PRINT
    0x5ddbfff60e60 ---------A   01460 PRINT "THAT WAS FUN! LET'S PLAY AGAIN......."
    0x5ddbfff60fc0 ---------A   01470 PRINT "FOUR MORE MUGWUMPS ARE NOW IN HIDING."
    0x5ddbfff61030 ---------A   01480 GOTO 1150
    0x5ddbfff61fb0 ---------A   01490 END
    0x5ddbfff612f0 ---------B G 01500 FOR J=1 TO 2
    0x5ddbfff615e0 ---------B   01510 FOR I=1 TO 4
    0x5ddbfff61c80 ---------B   01520 P(I,J)=INT(10*RND(1))
    0x5ddbfff61db0 ---------B   01530 NEXT I
    0x5ddbfff61ef0 ---------B   01540 NEXT J
    0x5ddbfff64550 ---------B   01550 GOTO 01560
    0x5ddbfff64590 ---------B T 01560 RETURN
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
int    D_int;                                     // Basic: D 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int_arr[4][2];                           // Basic: P 
int    T_int;                                     // Basic: T 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01500();

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

void Routine_01500(){
    // 01500 FOR J=1 TO 2
    for(J_int=1;J_int<=2;J_int++){
        // 01510 FOR I=1 TO 4
        for(I_int=1;I_int<=4;I_int++){
            // 01520 P(I,J)=INT(10*RND(1))
            P_int_arr[I_int][J_int] = INT(10*RND(1));
            // 01530 NEXT I
            int dummy_1530=0; // Ignore this line.
        }; // End-For(I_int)
        // 01540 NEXT J
        int dummy_1540=0; // Ignore this line.
    }; // End-For(J_int)
    // 01550 GOTO 01560
    goto Lbl_01560;

  Lbl_01560:
    // 01560 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
