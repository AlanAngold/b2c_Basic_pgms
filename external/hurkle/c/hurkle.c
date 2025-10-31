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
    0x604bced016d0 ---------A   00010  PRINT TAB(33);"HURKLE"
    0x604bced01670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x604bced017f0 ---------A   00030  PRINT:PRINT:PRINT
    0x604bced02b80 ---------A   00110  N=5
    0x604bced03f30 ---------A   00120  G=10
    0x604bced01ea0 ---------A   00210  PRINT
    0x604bced027e0 ---------A   00220  PRINT "A HURKLE IS HIDING ON A";G;"BY";G;"GRID. HOMEBASE"
    0x604bced09920 ---------A   00230  PRINT "ON THE GRID IS POINT 0,0 IN THE SOUTHWEST CORNER,"
    0x604bced09ad0 ---------A   00235  PRINT "AND ANY POINT ON THE GRID IS DESIGNATED BY A"
    0x604bced09c30 ---------A   00240  PRINT "PAIR OF WHOLE NUMBERS SEPERATED BY A COMMA. THE FIRST"
    0x604bced09de0 ---------A   00245  PRINT "NUMBER IS THE HORIZONTAL POSITION AND THE SECOND NUMBER"
    0x604bced09f90 ---------A   00246  PRINT "IS THE VERTICAL POSITION. YOU MUST TRY TO"
    0x604bced0a280 ---------A   00250  PRINT "GUESS THE HURKLE'S GRIDPOINT. YOU GET";N;"TRIES."
    0x604bced0a420 ---------A   00260  PRINT "AFTER EACH TRY, I WILL TELL YOU THE APPROXIMATE"
    0x604bced0a580 ---------A   00270  PRINT "DIRECTION TO GO TO LOOK FOR THE HURKLE."
    0x604bced0a5e0 ---------A   00280  PRINT
    0x604bced0ab80 ---------A T 00285  A=INT(G*RND(1))
    0x604bced0b130 ---------A   00286  B=INT(G*RND(1))
    0x604bced0b4e0 ---------A   00310  FOR K=1 TO N
    0x604bced0b760 ---------A   00320  PRINT "GUESS #";K;
    0x604bced0bb00 ---------A   00330  INPUT X,Y
    0x604bced0c280 ---------A   00340  IF ABS(X-A)+ABS(Y-B)=0 THEN 500
    0x604bced0c300 ---------A   00350  REM PRINT INFO
    0x604bced0c390 ---------A   00360  GOSUB 610
    0x604bced0c400 ---------A   00370  PRINT
    0x604bced0c540 ---------A   00380  NEXT K
    0x604bced0c5b0 ---------A   00410  PRINT
    0x604bced0c8f0 ---------A   00420  PRINT "SORRY, THAT'S";N;"GUESSES."
    0x604bced0cd50 ---------A   00430  PRINT "THE HURKLE IS AT ";A;",";B
    0x604bced0cdf0 ---------A T 00440  PRINT
    0x604bced0cf30 ---------A   00450  PRINT "LET'S PLAY AGAIN, HURKLE IS HIDING."
    0x604bced0cfb0 ---------A   00460  PRINT
    0x604bced0d030 ---------A   00470  GOTO 285
    0x604bced0d2b0 ---------A T 00500  REM
    0x604bced0d360 ---------A   00510  PRINT
    0x604bced0d6c0 ---------A   00520  PRINT "YOU FOUND HIM IN";K;"GUESSES!"
    0x604bced0d740 ---------A   00540  GOTO 440
    0x604bced0d8b0 ---------B G 00610  PRINT "GO ";
    0x604bced0db30 ---------B   00620  IF Y=B THEN 670
    0x604bced0ddb0 ---------B   00630  IF Y<B THEN 660
    0x604bced0df30 ---------B   00640  PRINT "SOUTH";
    0x604bced0dfb0 ---------B   00650  GOTO 670
    0x604bced0e120 ---------B T 00660  PRINT "NORTH";
    0x604bced0e3a0 ---------B T 00670  IF X=A THEN 720
    0x604bced0e620 ---------B   00680  IF X<A THEN 710
    0x604bced0e7a0 ---------B   00690  PRINT "WEST";
    0x604bced0e820 ---------B   00700  GOTO 720
    0x604bced0e990 ---------B T 00710  PRINT "EAST";
    0x604bced0ea10 ---------B T 00720  PRINT
    0x604bced0ea70 ---------B   00730  RETURN
    0x604bced0ead0 ---------A   00999  END
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
   A) 0x604bced016d0 (00010)   0x604bced016d0 (00010)   0x604bced0ead0 (00999)   0x604bced0ead0 (00999)   
   B) 0x604bced0d8b0 (00610)   0x604bced0d8b0 (00610)   0x604bced0ea70 (00730)   0x604bced0ea70 (00730)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/hurkle.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x604bced016d0 ---------A   00010  PRINT TAB(33);"HURKLE"
    0x604bced01670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x604bcecf22b0 ----------   00030  PRINT
    0x604bced019e0 ----------        a PRINT
    0x604bced017f0 ---------A        b PRINT
    0x604bced02b80 ---------A   00110  N=5
    0x604bced03f30 ---------A   00120  G=10
    0x604bced01ea0 ---------A   00210  PRINT
    0x604bced027e0 ---------A   00220  PRINT "A HURKLE IS HIDING ON A";G;"BY";G;"GRID. HOMEBASE"
    0x604bced09920 ---------A   00230  PRINT "ON THE GRID IS POINT 0,0 IN THE SOUTHWEST CORNER,"
    0x604bced09ad0 ---------A   00235  PRINT "AND ANY POINT ON THE GRID IS DESIGNATED BY A"
    0x604bced09c30 ---------A   00240  PRINT "PAIR OF WHOLE NUMBERS SEPERATED BY A COMMA. THE FIRST"
    0x604bced09de0 ---------A   00245  PRINT "NUMBER IS THE HORIZONTAL POSITION AND THE SECOND NUMBER"
    0x604bced09f90 ---------A   00246  PRINT "IS THE VERTICAL POSITION. YOU MUST TRY TO"
    0x604bced0a280 ---------A   00250  PRINT "GUESS THE HURKLE'S GRIDPOINT. YOU GET";N;"TRIES."
    0x604bced0a420 ---------A   00260  PRINT "AFTER EACH TRY, I WILL TELL YOU THE APPROXIMATE"
    0x604bced0a580 ---------A   00270  PRINT "DIRECTION TO GO TO LOOK FOR THE HURKLE."
    0x604bced0a5e0 ---------A   00280  PRINT
    0x604bced0ab80 ---------A T 00285  A=INT(G*RND(1))
    0x604bced0b130 ---------A   00286  B=INT(G*RND(1))
    0x604bced0b4e0 ---------A   00310  FOR K=1 TO N
    0x604bced0b760 ---------A   00320  PRINT "GUESS #";K;
    0x604bced0bb00 ---------A   00330  INPUT X,Y
    0x604bced0c280 ---------A   00340  IF ABS(X-A)+ABS(Y-B)=0 THEN 500
    0x604bced0c300 ---------A   00350  REM PRINT INFO
    0x604bced0c390 ---------A   00360  GOSUB 610
    0x604bced0c400 ---------A   00370  PRINT
    0x604bced0c540 ---------A   00380  NEXT K
    0x604bced0c5b0 ---------A   00410  PRINT
    0x604bced0c8f0 ---------A   00420  PRINT "SORRY, THAT'S";N;"GUESSES."
    0x604bced0cd50 ---------A   00430  PRINT "THE HURKLE IS AT ";A;",";B
    0x604bced0cdf0 ---------A T 00440  PRINT
    0x604bced0cf30 ---------A   00450  PRINT "LET'S PLAY AGAIN, HURKLE IS HIDING."
    0x604bced0cfb0 ---------A   00460  PRINT
    0x604bced0d030 ---------A   00470  GOTO 285
    0x604bced0d2b0 ---------A T 00500  REM
    0x604bced0d360 ---------A   00510  PRINT
    0x604bced0d6c0 ---------A   00520  PRINT "YOU FOUND HIM IN";K;"GUESSES!"
    0x604bced0d740 ---------A   00540  GOTO 440
    0x604bced0d8b0 ---------B G 00610  PRINT "GO ";
    0x604bced0db30 ---------B   00620  IF Y=B THEN 670
    0x604bced0ddb0 ---------B   00630  IF Y<B THEN 660
    0x604bced0df30 ---------B   00640  PRINT "SOUTH";
    0x604bced0dfb0 ---------B   00650  GOTO 670
    0x604bced0e120 ---------B T 00660  PRINT "NORTH";
    0x604bced0e3a0 ---------B T 00670  IF X=A THEN 720
    0x604bced0e620 ---------B   00680  IF X<A THEN 710
    0x604bced0e7a0 ---------B   00690  PRINT "WEST";
    0x604bced0e820 ---------B   00700  GOTO 720
    0x604bced0e990 ---------B T 00710  PRINT "EAST";
    0x604bced0ea10 ---------B T 00720  PRINT
    0x604bced0ea70 ---------B   00730  RETURN
    0x604bced0ead0 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/hurkle.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x604bced016d0 ---------A   01000  PRINT TAB(33);"HURKLE"
    0x604bced01670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x604bcecf22b0 ----------   01020  PRINT
    0x604bced019e0 ----------   01030  PRINT
    0x604bced017f0 ---------A   01040  PRINT
    0x604bced02b80 ---------A   01050  N=5
    0x604bced03f30 ---------A   01060  G=10
    0x604bced01ea0 ---------A   01070  PRINT
    0x604bced027e0 ---------A   01080  PRINT "A HURKLE IS HIDING ON A";G;"BY";G;"GRID. HOMEBASE"
    0x604bced09920 ---------A   01090  PRINT "ON THE GRID IS POINT 0,0 IN THE SOUTHWEST CORNER,"
    0x604bced09ad0 ---------A   01100  PRINT "AND ANY POINT ON THE GRID IS DESIGNATED BY A"
    0x604bced09c30 ---------A   01110  PRINT "PAIR OF WHOLE NUMBERS SEPERATED BY A COMMA. THE FIRST"
    0x604bced09de0 ---------A   01120  PRINT "NUMBER IS THE HORIZONTAL POSITION AND THE SECOND NUMBER"
    0x604bced09f90 ---------A   01130  PRINT "IS THE VERTICAL POSITION. YOU MUST TRY TO"
    0x604bced0a280 ---------A   01140  PRINT "GUESS THE HURKLE'S GRIDPOINT. YOU GET";N;"TRIES."
    0x604bced0a420 ---------A   01150  PRINT "AFTER EACH TRY, I WILL TELL YOU THE APPROXIMATE"
    0x604bced0a580 ---------A   01160  PRINT "DIRECTION TO GO TO LOOK FOR THE HURKLE."
    0x604bced0a5e0 ---------A   01170  PRINT
    0x604bced0ab80 ---------A   01180  A=INT(G*RND(1))
    0x604bced0b130 ---------A   01190  B=INT(G*RND(1))
    0x604bced0b4e0 ---------A   01200  FOR K=1 TO N
    0x604bced0b760 ---------A   01210  PRINT "GUESS #";K;
    0x604bced0bb00 ---------A   01220  INPUT X,Y
    0x604bced0c280 ---------A   01230  IF ABS(X-A)+ABS(Y-B)=0 THEN 1350
    0x604bced0c300 ---------A   01240  REM PRINT INFO
    0x604bced0c390 ---------A   01250  GOSUB 1390
    0x604bced0c400 ---------A   01260  PRINT
    0x604bced0c540 ---------A   01270  NEXT K
    0x604bced0c5b0 ---------A   01280  PRINT
    0x604bced0c8f0 ---------A   01290  PRINT "SORRY, THAT'S";N;"GUESSES."
    0x604bced0cd50 ---------A   01300  PRINT "THE HURKLE IS AT ";A;",";B
    0x604bced0cdf0 ---------A   01310  PRINT
    0x604bced0cf30 ---------A   01320  PRINT "LET'S PLAY AGAIN, HURKLE IS HIDING."
    0x604bced0cfb0 ---------A   01330  PRINT
    0x604bced0d030 ---------A   01340  GOTO 1180
    0x604bced0d2b0 ---------A   01350  REM
    0x604bced0d360 ---------A   01360  PRINT
    0x604bced0d6c0 ---------A   01370  PRINT "YOU FOUND HIM IN";K;"GUESSES!"
    0x604bced0d740 ---------A   01380  GOTO 1310
    0x604bced0d8b0 ---------B   01390  PRINT "GO ";
    0x604bced0db30 ---------B   01400  IF Y=B THEN 1450
    0x604bced0ddb0 ---------B   01410  IF Y<B THEN 1440
    0x604bced0df30 ---------B   01420  PRINT "SOUTH";
    0x604bced0dfb0 ---------B   01430  GOTO 1450
    0x604bced0e120 ---------B   01440  PRINT "NORTH";
    0x604bced0e3a0 ---------B   01450  IF X=A THEN 1500
    0x604bced0e620 ---------B   01460  IF X<A THEN 1490
    0x604bced0e7a0 ---------B   01470  PRINT "WEST";
    0x604bced0e820 ---------B   01480  GOTO 1500
    0x604bced0e990 ---------B   01490  PRINT "EAST";
    0x604bced0ea10 ---------B   01500  PRINT
    0x604bced0ea70 ---------B   01510  RETURN
    0x604bced0ead0 ---------A   01520  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01540 - 10000    8470 

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
    0x604bced016d0 ---------A   01000  PRINT TAB(33);"HURKLE"
    0x604bced01670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x604bcecf22b0 ---------A   01020  PRINT
    0x604bced019e0 ---------A   01030  PRINT
    0x604bced017f0 ---------A   01040  PRINT
    0x604bced02b80 ---------A   01050  N=5
    0x604bced03f30 ---------A   01060  G=10
    0x604bced01ea0 ---------A   01070  PRINT
    0x604bced027e0 ---------A   01080  PRINT "A HURKLE IS HIDING ON A";G;"BY";G;"GRID. HOMEBASE"
    0x604bced09920 ---------A   01090  PRINT "ON THE GRID IS POINT 0,0 IN THE SOUTHWEST CORNER,"
    0x604bced09ad0 ---------A   01100  PRINT "AND ANY POINT ON THE GRID IS DESIGNATED BY A"
    0x604bced09c30 ---------A   01110  PRINT "PAIR OF WHOLE NUMBERS SEPERATED BY A COMMA. THE FIRST"
    0x604bced09de0 ---------A   01120  PRINT "NUMBER IS THE HORIZONTAL POSITION AND THE SECOND NUMBER"
    0x604bced09f90 ---------A   01130  PRINT "IS THE VERTICAL POSITION. YOU MUST TRY TO"
    0x604bced0a280 ---------A   01140  PRINT "GUESS THE HURKLE'S GRIDPOINT. YOU GET";N;"TRIES."
    0x604bced0a420 ---------A   01150  PRINT "AFTER EACH TRY, I WILL TELL YOU THE APPROXIMATE"
    0x604bced0a580 ---------A   01160  PRINT "DIRECTION TO GO TO LOOK FOR THE HURKLE."
    0x604bced0a5e0 ---------A   01170  PRINT
    0x604bced0ab80 ---------A T 01180  A=INT(G*RND(1))
    0x604bced0b130 ---------A   01190  B=INT(G*RND(1))
    0x604bced0b4e0 ---------A   01200  FOR K=1 TO N
    0x604bced0b760 ---------A   01210  PRINT "GUESS #";K;
    0x604bced0bb00 ---------A   01220  INPUT X,Y
    0x604bced0c280 ---------A   01230  IF ABS(X-A)+ABS(Y-B)=0 THEN 1350
    0x604bced0c300 ---------A   01240  REM PRINT INFO
    0x604bced0c390 ---------A   01250  GOSUB 1400
    0x604bced0c400 ---------A   01260  PRINT
    0x604bced0c540 ---------A   01270  NEXT K
    0x604bced0c5b0 ---------A   01280  PRINT
    0x604bced0c8f0 ---------A   01290  PRINT "SORRY, THAT'S";N;"GUESSES."
    0x604bced0cd50 ---------A   01300  PRINT "THE HURKLE IS AT ";A;",";B
    0x604bced0cdf0 ---------A T 01310  PRINT
    0x604bced0cf30 ---------A   01320  PRINT "LET'S PLAY AGAIN, HURKLE IS HIDING."
    0x604bced0cfb0 ---------A   01330  PRINT
    0x604bced0d030 ---------A   01340  GOTO 1180
    0x604bced0d2b0 ---------A T 01350  REM
    0x604bced0d360 ---------A   01360  PRINT
    0x604bced0d6c0 ---------A   01370  PRINT "YOU FOUND HIM IN";K;"GUESSES!"
    0x604bced0d740 ---------A   01380  GOTO 1310
    0x604bced0ead0 ---------A   01390  END
    0x604bced0d8b0 ---------B G 01400  PRINT "GO ";
    0x604bced0db30 ---------B   01410  IF Y=B THEN 1460
    0x604bced0ddb0 ---------B   01420  IF Y<B THEN 1450
    0x604bced0df30 ---------B   01430  PRINT "SOUTH";
    0x604bced0dfb0 ---------B   01440  GOTO 1460
    0x604bced0e120 ---------B T 01450  PRINT "NORTH";
    0x604bced0e3a0 ---------B T 01460  IF X=A THEN 1510
    0x604bced0e620 ---------B   01470  IF X<A THEN 1500
    0x604bced0e7a0 ---------B   01480  PRINT "WEST";
    0x604bced0e820 ---------B   01490  GOTO 1510
    0x604bced0e990 ---------B T 01500  PRINT "EAST";
    0x604bced0ea10 ---------B T 01510  PRINT
    0x604bced0ee20 ---------B   01520  GOTO 01530
    0x604bced139a0 ---------B T 01530  RETURN
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
void Routine_01400();

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

void Routine_01400(){
    // 01400 PRINT "GO ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GO ");fputs(buf,fh); };
    // 01410 IF Y=B THEN 1460
    if(Y_int==B_int)goto Lbl_01460;
    // 01420 IF Y<B THEN 1450
    if(Y_int<B_int)goto Lbl_01450;
    // 01430 PRINT "SOUTH";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SOUTH");fputs(buf,fh); };
    // 01440 GOTO 1460
    goto Lbl_01460;

  Lbl_01450:
    // 01450 PRINT "NORTH";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NORTH");fputs(buf,fh); };

  Lbl_01460:
    // 01460 IF X=A THEN 1510
    if(X_int==A_int)goto Lbl_01510;
    // 01470 IF X<A THEN 1500
    if(X_int<A_int)goto Lbl_01500;
    // 01480 PRINT "WEST";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WEST");fputs(buf,fh); };
    // 01490 GOTO 1510
    goto Lbl_01510;

  Lbl_01500:
    // 01500 PRINT "EAST";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"EAST");fputs(buf,fh); };

  Lbl_01510:
    // 01510 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01520 GOTO 01530
    goto Lbl_01530;

  Lbl_01530:
    // 01530 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"HURKLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"HURKLE");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 N=5
    N_int = 5;
    // 01060 G=10
    G_int = 10;
    // 01070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "A HURKLE IS HIDING ON A";G;"BY";G;"GRID. HOMEBASE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A HURKLE IS HIDING ON A"); b2c_INT(buf,G_int);strcat(buf,"BY"); b2c_INT(buf,G_int);strcat(buf,"GRID. HOMEBASE");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "ON THE GRID IS POINT 0,0 IN THE SOUTHWEST CORNER,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ON THE GRID IS POINT 0,0 IN THE SOUTHWEST CORNER,");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "AND ANY POINT ON THE GRID IS DESIGNATED BY A"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND ANY POINT ON THE GRID IS DESIGNATED BY A");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "PAIR OF WHOLE NUMBERS SEPERATED BY A COMMA. THE FIRST"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PAIR OF WHOLE NUMBERS SEPERATED BY A COMMA. THE FIRST");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "NUMBER IS THE HORIZONTAL POSITION AND THE SECOND NUMBER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NUMBER IS THE HORIZONTAL POSITION AND THE SECOND NUMBER");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "IS THE VERTICAL POSITION. YOU MUST TRY TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IS THE VERTICAL POSITION. YOU MUST TRY TO");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "GUESS THE HURKLE'S GRIDPOINT. YOU GET";N;"TRIES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GUESS THE HURKLE'S GRIDPOINT. YOU GET"); b2c_INT(buf,N_int);strcat(buf,"TRIES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "AFTER EACH TRY, I WILL TELL YOU THE APPROXIMATE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AFTER EACH TRY, I WILL TELL YOU THE APPROXIMATE");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "DIRECTION TO GO TO LOOK FOR THE HURKLE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DIRECTION TO GO TO LOOK FOR THE HURKLE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01180:
    // 01180 A=INT(G*RND(1))
    A_int = INT(G_int*RND(1));
    // 01190 B=INT(G*RND(1))
    B_int = INT(G_int*RND(1));
    // 01200 FOR K=1 TO N
    for(K_int=1;K_int<=N_int;K_int++){
        // 01210 PRINT "GUESS #";K;
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GUESS #"); b2c_INT(buf,K_int);fputs(buf,fh); };
        // 01220 INPUT X,Y
        // Start of Basic INPUT statement 01220
        {
            int numargs=2;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&X_int,args,0)) ||
                    (err += b2c_strtoi(&Y_int,args,1)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01220
        // 01230 IF ABS(X-A)+ABS(Y-B)=0 THEN 1350
        if(ABS(X_int-A_int)+ABS(Y_int-B_int)==0)goto Lbl_01350;
        // 01240 REM PRINT INFO
        // 01250 GOSUB 1400
        Routine_01400();
        // 01260 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01270 NEXT K
        int dummy_1270=0; // Ignore this line.
    }; // End-For(K_int)
    // 01280 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01290 PRINT "SORRY, THAT'S";N;"GUESSES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY, THAT'S"); b2c_INT(buf,N_int);strcat(buf,"GUESSES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 PRINT "THE HURKLE IS AT ";A;",";B
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE HURKLE IS AT "); b2c_INT(buf,A_int);strcat(buf,","); b2c_INT(buf,B_int);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01310:
    // 01310 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01320 PRINT "LET'S PLAY AGAIN, HURKLE IS HIDING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LET'S PLAY AGAIN, HURKLE IS HIDING.");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01340 GOTO 1180
    goto Lbl_01180;

  Lbl_01350:
    // 01350 REM
    // 01360 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01370 PRINT "YOU FOUND HIM IN";K;"GUESSES!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU FOUND HIM IN"); b2c_INT(buf,K_int);strcat(buf,"GUESSES!");strcat(buf,"\n");fputs(buf,fh); };
    // 01380 GOTO 1310
    goto Lbl_01310;
    // 01390 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
