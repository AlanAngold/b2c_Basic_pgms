/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/hurkle.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5dcd4c81ab80 ---------A   00010 PRINT TAB(33);"HURKLE"
    0x5dcd4c81bf30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5dcd4c81c0b0 ---------A   00030 PRINT:PRINT:PRINT
    0x5dcd4c819a20 ---------A   00110 N=5
    0x5dcd4c81a480 ---------A   00120 G=10
    0x5dcd4c81b6f0 ---------A   00210 PRINT
    0x5dcd4c81a830 ---------A   00220 PRINT "A HURKLE IS HIDING ON A";G;"BY";G;"GRID. HOMEBASE"
    0x5dcd4c821970 ---------A   00230 PRINT "ON THE GRID IS POINT 0,0 IN THE SOUTHWEST CORNER,"
    0x5dcd4c821b10 ---------A   00235 PRINT "AND ANY POINT ON THE GRID IS DESIGNATED BY A"
    0x5dcd4c821c60 ---------A   00240 PRINT "PAIR OF WHOLE NUMBERS SEPERATED BY A COMMA. THE FIRST"
    0x5dcd4c821e00 ---------A   00245 PRINT "NUMBER IS THE HORIZONTAL POSITION AND THE SECOND NUMBER"
    0x5dcd4c821fa0 ---------A   00246 PRINT "IS THE VERTICAL POSITION. YOU MUST TRY TO"
    0x5dcd4c822280 ---------A   00250 PRINT "GUESS THE HURKLE'S GRIDPOINT. YOU GET";N;"TRIES."
    0x5dcd4c822410 ---------A   00260 PRINT "AFTER EACH TRY, I WILL TELL YOU THE APPROXIMATE"
    0x5dcd4c822560 ---------A   00270 PRINT "DIRECTION TO GO TO LOOK FOR THE HURKLE."
    0x5dcd4c8225b0 ---------A   00280 PRINT
    0x5dcd4c822b20 ---------A T 00285 A=INT(G*RND(1))
    0x5dcd4c8230d0 ---------A   00286 B=INT(G*RND(1))
    0x5dcd4c8196d0 ---------A   00310 FOR K=1 TO N
    0x5dcd4c8236a0 ---------A   00320 PRINT "GUESS #";K;
    0x5dcd4c819670 ---------A   00330 INPUT X,Y
    0x5dcd4c824150 ---------A   00340 IF ABS(X-A)+ABS(Y-B)=0 THEN 500
    0x5dcd4c8241d0 ---------A   00350 REM PRINT INFO
    0x5dcd4c824250 ---------A   00360 GOSUB 610
    0x5dcd4c8242b0 ---------A   00370 PRINT
    0x5dcd4c8243e0 ---------A   00380 NEXT K
    0x5dcd4c824440 ---------A   00410 PRINT
    0x5dcd4c824770 ---------A   00420 PRINT "SORRY, THAT'S";N;"GUESSES."
    0x5dcd4c824bc0 ---------A   00430 PRINT "THE HURKLE IS AT ";A;",";B
    0x5dcd4c824c50 ---------A T 00440 PRINT
    0x5dcd4c824d80 ---------A   00450 PRINT "LET'S PLAY AGAIN, HURKLE IS HIDING."
    0x5dcd4c824df0 ---------A   00460 PRINT
    0x5dcd4c824e60 ---------A   00470 GOTO 285
    0x5dcd4c8250d0 ---------A T 00500 REM
    0x5dcd4c825170 ---------A   00510 PRINT
    0x5dcd4c8254c0 ---------A   00520 PRINT "YOU FOUND HIM IN";K;"GUESSES!"
    0x5dcd4c825530 ---------A   00540 GOTO 440
    0x5dcd4c825690 ---------B G 00610 PRINT "GO ";
    0x5dcd4c825900 ---------B   00620 IF Y=B THEN 670
    0x5dcd4c825b80 ---------B   00630 IF Y<B THEN 660
    0x5dcd4c825d00 ---------B   00640 PRINT "SOUTH";
    0x5dcd4c825d70 ---------B   00650 GOTO 670
    0x5dcd4c825ed0 ---------B T 00660 PRINT "NORTH";
    0x5dcd4c826140 ---------B T 00670 IF X=A THEN 720
    0x5dcd4c8263c0 ---------B   00680 IF X<A THEN 710
    0x5dcd4c826540 ---------B   00690 PRINT "WEST";
    0x5dcd4c8265b0 ---------B   00700 GOTO 720
    0x5dcd4c826710 ---------B T 00710 PRINT "EAST";
    0x5dcd4c826780 ---------B T 00720 PRINT
    0x5dcd4c8267d0 ---------B   00730 RETURN
    0x5dcd4c826830 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00285      00470T
     00440      00540T
     00500      00340T
     00610      00360G
     00660      00630T
     00670      00620T, 00650T
     00710      00680T
     00720      00670T, 00700T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5dcd4c81ab80 (00010)   0x5dcd4c81ab80 (00010)   0x5dcd4c826830 (00999)   0x5dcd4c826830 (00999)   
   B) 0x5dcd4c825690 (00610)   0x5dcd4c825690 (00610)   0x5dcd4c8267d0 (00730)   0x5dcd4c8267d0 (00730)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01520 - 10000    8490 

 */



/*
 *  Symbol Table Listing for 'basic/hurkle.bas'
 *
    A                        Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
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
    G                        Integer     
    HEX$            Function String          args=1, int    
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K                        Integer     
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

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/hurkle.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5dcd4c81ab80 ---------A   01000 PRINT TAB(33);"HURKLE"
    0x5dcd4c81bf30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5dcd4c81c0b0 ---------A   01020 PRINT:PRINT:PRINT
    0x5dcd4c819a20 ---------A   01030 N=5
    0x5dcd4c81a480 ---------A   01040 G=10
    0x5dcd4c81b6f0 ---------A   01050 PRINT
    0x5dcd4c81a830 ---------A   01060 PRINT "A HURKLE IS HIDING ON A";G;"BY";G;"GRID. HOMEBASE"
    0x5dcd4c821970 ---------A   01070 PRINT "ON THE GRID IS POINT 0,0 IN THE SOUTHWEST CORNER,"
    0x5dcd4c821b10 ---------A   01080 PRINT "AND ANY POINT ON THE GRID IS DESIGNATED BY A"
    0x5dcd4c821c60 ---------A   01090 PRINT "PAIR OF WHOLE NUMBERS SEPERATED BY A COMMA. THE FIRST"
    0x5dcd4c821e00 ---------A   01100 PRINT "NUMBER IS THE HORIZONTAL POSITION AND THE SECOND NUMBER"
    0x5dcd4c821fa0 ---------A   01110 PRINT "IS THE VERTICAL POSITION. YOU MUST TRY TO"
    0x5dcd4c822280 ---------A   01120 PRINT "GUESS THE HURKLE'S GRIDPOINT. YOU GET";N;"TRIES."
    0x5dcd4c822410 ---------A   01130 PRINT "AFTER EACH TRY, I WILL TELL YOU THE APPROXIMATE"
    0x5dcd4c822560 ---------A   01140 PRINT "DIRECTION TO GO TO LOOK FOR THE HURKLE."
    0x5dcd4c8225b0 ---------A   01150 PRINT
    0x5dcd4c822b20 ---------A T 01160 A=INT(G*RND(1))
    0x5dcd4c8230d0 ---------A   01170 B=INT(G*RND(1))
    0x5dcd4c8196d0 ---------A   01180 FOR K=1 TO N
    0x5dcd4c8236a0 ---------A   01190 PRINT "GUESS #";K;
    0x5dcd4c819670 ---------A   01200 INPUT X,Y
    0x5dcd4c824150 ---------A   01210 IF ABS(X-A)+ABS(Y-B)=0 THEN 1340
    0x5dcd4c8241d0 ---------A   01220 REM PRINT INFO
    0x5dcd4c824250 ---------A   01230 GOSUB 1380
    0x5dcd4c8242b0 ---------A   01240 PRINT
    0x5dcd4c8243e0 ---------A   01250 NEXT K
    0x5dcd4c824440 ---------A   01260 PRINT
    0x5dcd4c824770 ---------A   01270 PRINT "SORRY, THAT'S";N;"GUESSES."
    0x5dcd4c824bc0 ---------A   01280 PRINT "THE HURKLE IS AT ";A;",";B
    0x5dcd4c824c50 ---------A T 01290 PRINT
    0x5dcd4c824d80 ---------A   01300 PRINT "LET'S PLAY AGAIN, HURKLE IS HIDING."
    0x5dcd4c824df0 ---------A   01310 PRINT
    0x5dcd4c824e60 ---------A   01320 GOTO 1160
    0x5dcd4c8250d0 ---------A   01330 REM
    0x5dcd4c825170 ---------A T 01340 PRINT
    0x5dcd4c8254c0 ---------A   01350 PRINT "YOU FOUND HIM IN";K;"GUESSES!"
    0x5dcd4c825530 ---------A   01360 GOTO 1290
    0x5dcd4c826830 ---------A   01370 END
    0x5dcd4c825690 ---------B G 01380 PRINT "GO ";
    0x5dcd4c825900 ---------B   01390 IF Y=B THEN 1440
    0x5dcd4c825b80 ---------B   01400 IF Y<B THEN 1430
    0x5dcd4c825d00 ---------B   01410 PRINT "SOUTH";
    0x5dcd4c825d70 ---------B   01420 GOTO 1440
    0x5dcd4c825ed0 ---------B T 01430 PRINT "NORTH";
    0x5dcd4c826140 ---------B T 01440 IF X=A THEN 1490
    0x5dcd4c8263c0 ---------B   01450 IF X<A THEN 1480
    0x5dcd4c826540 ---------B   01460 PRINT "WEST";
    0x5dcd4c8265b0 ---------B   01470 GOTO 1490
    0x5dcd4c826710 ---------B T 01480 PRINT "EAST";
    0x5dcd4c826780 ---------B T 01490 PRINT
    0x5dcd4c828bf0 ---------B   01500 GOTO 01510
    0x5dcd4c828c30 ---------B T 01510 RETURN
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
int    B_int;                                     // Basic: B 
int    G_int;                                     // Basic: G 
int    K_int;                                     // Basic: K 
int    N_int;                                     // Basic: N 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01380();

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

void Routine_01380(){
    // 01380 PRINT "GO ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GO ");fputs(buf,fh); };
    // 01390 IF Y=B THEN 1440
    if(Y_int==B_int)goto Lbl_01440;
    // 01400 IF Y<B THEN 1430
    if(Y_int<B_int)goto Lbl_01430;
    // 01410 PRINT "SOUTH";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SOUTH");fputs(buf,fh); };
    // 01420 GOTO 1440
    goto Lbl_01440;

  Lbl_01430:
    // 01430 PRINT "NORTH";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NORTH");fputs(buf,fh); };

  Lbl_01440:
    // 01440 IF X=A THEN 1490
    if(X_int==A_int)goto Lbl_01490;
    // 01450 IF X<A THEN 1480
    if(X_int<A_int)goto Lbl_01480;
    // 01460 PRINT "WEST";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WEST");fputs(buf,fh); };
    // 01470 GOTO 1490
    goto Lbl_01490;

  Lbl_01480:
    // 01480 PRINT "EAST";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"EAST");fputs(buf,fh); };

  Lbl_01490:
    // 01490 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01500 GOTO 01510
    goto Lbl_01510;

  Lbl_01510:
    // 01510 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
