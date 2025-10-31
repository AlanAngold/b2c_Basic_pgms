/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/letter.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5af06c9396d0 ---------A   00010  PRINT TAB(33);"LETTER"
    0x5af06c939670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5af06c9397f0 ---------A   00030  PRINT:PRINT:PRINT
    0x5af06c93a040 ---------A   00100  PRINT "LETTER GUESSING GAME": PRINT
    0x5af06c939e80 ---------A   00210  PRINT "I'LL THINK OF A LETTER OF THE ALPHABET, A TO Z."
    0x5af06c93a500 ---------A   00220  PRINT "TRY TO GUESS MY LETTER AND I'LL GIVE YOU CLUES"
    0x5af06c939c20 ---------A   00230  PRINT "AS TO HOW CLOSE YOU'RE GETTING TO MY LETTER."
    0x5af06c93c0b0 ---------A T 00310  L=65+INT(RND(1)*26)
    0x5af06c941c50 ---------A   00320  G=0
    0x5af06c941e00 ---------A   00340  PRINT: PRINT "O.K., I HAVE A LETTER.  START GUESSING."
    0x5af06c941f80 ---------A T 00410  PRINT: PRINT "WHAT IS YOUR GUESS";
    0x5af06c93be70 ---------A   00420  G=G+1
    0x5af06c942790 ---------A   00430  INPUT A$: A=ASC(A$): PRINT
    0x5af06c942a10 ---------A   00440  IF A=L THEN 500
    0x5af06c942cb0 ---------A   00450  IF A>L THEN 480
    0x5af06c942e70 ---------A   00460  PRINT "TOO LOW.  TRY A HIGHER LETTER.": GOTO 410
    0x5af06c943020 ---------A T 00480  PRINT "TOO HIGH.  TRY A LOWER LETTER.": GOTO 410
    0x5af06c9433d0 ---------A T 00500  PRINT: PRINT "YOU GOT IT IN";G;"GUESSES!!"
    0x5af06c943660 ---------A   00504  IF G<=5 THEN 508
    0x5af06c943820 ---------A   00506  PRINT "BUT IT SHOULDN'T TAKE MORE THAN 5 GUESSES!": GOTO 515
    0x5af06c943990 ---------A T 00508  PRINT "GOOD JOB !!!!!"
    0x5af06c944070 ---------A   00510  FOR N=1 TO 15: PRINT CHR$(7);: NEXT N
    0x5af06c9440e0 ---------A T 00515  PRINT
    0x5af06c944240 ---------A   00520  PRINT "LET'S PLAN AGAIN....."
    0x5af06c9442c0 ---------A   00530  GOTO 310
    0x5af06c944310 ---------A   00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00310      00530T
     00410      00460T, 00480T
     00480      00450T
     00500      00440T
     00508      00504T
     00515      00506T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5af06c9396d0 (00010)   0x5af06c9396d0 (00010)   0x5af06c944310 (00999)   0x5af06c944310 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/letter.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5af06c9396d0 ---------A   00010  PRINT TAB(33);"LETTER"
    0x5af06c939670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5af06c92a2b0 ----------   00030  PRINT
    0x5af06c9399e0 ----------        a PRINT
    0x5af06c9397f0 ---------A        b PRINT
    0x5af06c93bae0 ----------   00100  PRINT "LETTER GUESSING GAME"
    0x5af06c93a040 ---------A        a PRINT
    0x5af06c939e80 ---------A   00210  PRINT "I'LL THINK OF A LETTER OF THE ALPHABET, A TO Z."
    0x5af06c93a500 ---------A   00220  PRINT "TRY TO GUESS MY LETTER AND I'LL GIVE YOU CLUES"
    0x5af06c939c20 ---------A   00230  PRINT "AS TO HOW CLOSE YOU'RE GETTING TO MY LETTER."
    0x5af06c93c0b0 ---------A T 00310  L=65+INT(RND(1)*26)
    0x5af06c941c50 ---------A   00320  G=0
    0x5af06c941ca0 ----------   00340  PRINT
    0x5af06c941e00 ---------A        a PRINT "O.K., I HAVE A LETTER.  START GUESSING."
    0x5af06c941e60 ---------- T 00410  PRINT
    0x5af06c941f80 ---------A T      a PRINT "WHAT IS YOUR GUESS";
    0x5af06c93be70 ---------A   00420  G=G+1
    0x5af06c9423c0 ----------   00430  INPUT A$
    0x5af06c942720 ----------        a A=ASC(A$)
    0x5af06c942790 ---------A        b PRINT
    0x5af06c942a10 ---------A   00440  IF A=L THEN 500
    0x5af06c942cb0 ---------A   00450  IF A>L THEN 480
    0x5af06c942dd0 ----------   00460  PRINT "TOO LOW.  TRY A HIGHER LETTER."
    0x5af06c942e70 ---------A        a GOTO 410
    0x5af06c942f80 ---------- T 00480  PRINT "TOO HIGH.  TRY A LOWER LETTER."
    0x5af06c943020 ---------A T      a GOTO 410
    0x5af06c943070 ---------- T 00500  PRINT
    0x5af06c9433d0 ---------A T      a PRINT "YOU GOT IT IN";G;"GUESSES!!"
    0x5af06c943660 ---------A   00504  IF G<=5 THEN 508
    0x5af06c9437c0 ----------   00506  PRINT "BUT IT SHOULDN'T TAKE MORE THAN 5 GUESSES!"
    0x5af06c943820 ---------A        a GOTO 515
    0x5af06c943990 ---------A T 00508  PRINT "GOOD JOB !!!!!"
    0x5af06c943d10 ----------   00510  FOR N=1 TO 15
    0x5af06c943f30 ----------        a PRINT CHR$(7);
    0x5af06c944070 ---------A        b NEXT N
    0x5af06c9440e0 ---------A T 00515  PRINT
    0x5af06c944240 ---------A   00520  PRINT "LET'S PLAN AGAIN....."
    0x5af06c9442c0 ---------A   00530  GOTO 310
    0x5af06c944310 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/letter.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5af06c9396d0 ---------A   01000  PRINT TAB(33);"LETTER"
    0x5af06c939670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5af06c92a2b0 ----------   01020  PRINT
    0x5af06c9399e0 ----------   01030  PRINT
    0x5af06c9397f0 ---------A   01040  PRINT
    0x5af06c93bae0 ----------   01050  PRINT "LETTER GUESSING GAME"
    0x5af06c93a040 ---------A   01060  PRINT
    0x5af06c939e80 ---------A   01070  PRINT "I'LL THINK OF A LETTER OF THE ALPHABET, A TO Z."
    0x5af06c93a500 ---------A   01080  PRINT "TRY TO GUESS MY LETTER AND I'LL GIVE YOU CLUES"
    0x5af06c939c20 ---------A   01090  PRINT "AS TO HOW CLOSE YOU'RE GETTING TO MY LETTER."
    0x5af06c93c0b0 ---------A   01100  L=65+INT(RND(1)*26)
    0x5af06c941c50 ---------A   01110  G=0
    0x5af06c941ca0 ----------   01120  PRINT
    0x5af06c941e00 ---------A   01130  PRINT "O.K., I HAVE A LETTER.  START GUESSING."
    0x5af06c941e60 ----------   01140  PRINT
    0x5af06c941f80 ---------A   01150  PRINT "WHAT IS YOUR GUESS";
    0x5af06c93be70 ---------A   01160  G=G+1
    0x5af06c9423c0 ----------   01170  INPUT A$
    0x5af06c942720 ----------   01180  A=ASC(A$)
    0x5af06c942790 ---------A   01190  PRINT
    0x5af06c942a10 ---------A   01200  IF A=L THEN 1270
    0x5af06c942cb0 ---------A   01210  IF A>L THEN 1250
    0x5af06c942dd0 ----------   01220  PRINT "TOO LOW.  TRY A HIGHER LETTER."
    0x5af06c942e70 ---------A   01230  GOTO 1150
    0x5af06c942f80 ----------   01240  PRINT "TOO HIGH.  TRY A LOWER LETTER."
    0x5af06c943020 ---------A   01250  GOTO 1150
    0x5af06c943070 ----------   01260  PRINT
    0x5af06c9433d0 ---------A   01270  PRINT "YOU GOT IT IN";G;"GUESSES!!"
    0x5af06c943660 ---------A   01280  IF G<=5 THEN 1310
    0x5af06c9437c0 ----------   01290  PRINT "BUT IT SHOULDN'T TAKE MORE THAN 5 GUESSES!"
    0x5af06c943820 ---------A   01300  GOTO 1350
    0x5af06c943990 ---------A   01310  PRINT "GOOD JOB !!!!!"
    0x5af06c943d10 ----------   01320  FOR N=1 TO 15
    0x5af06c943f30 ----------   01330  PRINT CHR$(7);
    0x5af06c944070 ---------A   01340  NEXT N
    0x5af06c9440e0 ---------A   01350  PRINT
    0x5af06c944240 ---------A   01360  PRINT "LET'S PLAN AGAIN....."
    0x5af06c9442c0 ---------A   01370  GOTO 1100
    0x5af06c944310 ---------A   01380  END
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
 *  Symbol Table Listing for 'basic/letter.bas'
 *
    A                        Integer     
    A$                       String      
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
    G                        Integer     
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

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/letter.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5af06c9396d0 ---------A   01000  PRINT TAB(33);"LETTER"
    0x5af06c939670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5af06c92a2b0 ---------A   01020  PRINT
    0x5af06c9399e0 ---------A   01030  PRINT
    0x5af06c9397f0 ---------A   01040  PRINT
    0x5af06c93bae0 ---------A   01050  PRINT "LETTER GUESSING GAME"
    0x5af06c93a040 ---------A   01060  PRINT
    0x5af06c939e80 ---------A   01070  PRINT "I'LL THINK OF A LETTER OF THE ALPHABET, A TO Z."
    0x5af06c93a500 ---------A   01080  PRINT "TRY TO GUESS MY LETTER AND I'LL GIVE YOU CLUES"
    0x5af06c939c20 ---------A   01090  PRINT "AS TO HOW CLOSE YOU'RE GETTING TO MY LETTER."
    0x5af06c93c0b0 ---------A T 01100  L=65+INT(RND(1)*26)
    0x5af06c941c50 ---------A   01110  G=0
    0x5af06c941ca0 ---------A   01120  PRINT
    0x5af06c941e00 ---------A   01130  PRINT "O.K., I HAVE A LETTER.  START GUESSING."
    0x5af06c941e60 ---------A   01140  PRINT
    0x5af06c941f80 ---------A T 01150  PRINT "WHAT IS YOUR GUESS";
    0x5af06c93be70 ---------A   01160  G=G+1
    0x5af06c9423c0 ---------A   01170  INPUT A$
    0x5af06c942720 ---------A   01180  A=ASC(A$)
    0x5af06c942790 ---------A   01190  PRINT
    0x5af06c942a10 ---------A   01200  IF A=L THEN 1250
    0x5af06c942cb0 ---------A   01210  IF A>L THEN 1240
    0x5af06c942dd0 ---------A   01220  PRINT "TOO LOW.  TRY A HIGHER LETTER."
    0x5af06c942e70 ---------A   01230  GOTO 1150
    0x5af06c943020 ---------A T 01240  GOTO 1150
    0x5af06c9433d0 ---------A T 01250  PRINT "YOU GOT IT IN";G;"GUESSES!!"
    0x5af06c943660 ---------A   01260  IF G<=5 THEN 1290
    0x5af06c9437c0 ---------A   01270  PRINT "BUT IT SHOULDN'T TAKE MORE THAN 5 GUESSES!"
    0x5af06c943820 ---------A   01280  GOTO 1330
    0x5af06c943990 ---------A T 01290  PRINT "GOOD JOB !!!!!"
    0x5af06c943d10 ---------A   01300  FOR N=1 TO 15
    0x5af06c943f30 ---------A   01310  PRINT CHR$(7);
    0x5af06c944070 ---------A   01320  NEXT N
    0x5af06c9440e0 ---------A T 01330  PRINT
    0x5af06c944240 ---------A   01340  PRINT "LET'S PLAN AGAIN....."
    0x5af06c9442c0 ---------A   01350  GOTO 1100
    0x5af06c944310 ---------A   01360  END
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
char*  A_str;                                     // Basic: A$ 
int    G_int;                                     // Basic: G 
int    L_int;                                     // Basic: L 
int    N_int;                                     // Basic: N 
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
    // 01000 PRINT TAB(33);"LETTER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"LETTER");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "LETTER GUESSING GAME"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LETTER GUESSING GAME");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "I'LL THINK OF A LETTER OF THE ALPHABET, A TO Z."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I'LL THINK OF A LETTER OF THE ALPHABET, A TO Z.");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "TRY TO GUESS MY LETTER AND I'LL GIVE YOU CLUES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY TO GUESS MY LETTER AND I'LL GIVE YOU CLUES");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "AS TO HOW CLOSE YOU'RE GETTING TO MY LETTER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AS TO HOW CLOSE YOU'RE GETTING TO MY LETTER.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01100:
    // 01100 L=65+INT(RND(1)*26)
    L_int = 65+INT(RND(1)*26);
    // 01110 G=0
    G_int = 0;
    // 01120 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "O.K., I HAVE A LETTER.  START GUESSING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"O.K., I HAVE A LETTER.  START GUESSING.");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01150:
    // 01150 PRINT "WHAT IS YOUR GUESS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT IS YOUR GUESS");fputs(buf,fh); };
    // 01160 G=G+1
    G_int = G_int+1;
    // 01170 INPUT A$
    // Start of Basic INPUT statement 01170
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01170
    // 01180 A=ASC(A$)
    A_int = ASC(A_str);
    // 01190 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01200 IF A=L THEN 1250
    if(A_int==L_int)goto Lbl_01250;
    // 01210 IF A>L THEN 1240
    if(A_int>L_int)goto Lbl_01240;
    // 01220 PRINT "TOO LOW.  TRY A HIGHER LETTER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO LOW.  TRY A HIGHER LETTER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 GOTO 1150
    goto Lbl_01150;

  Lbl_01240:
    // 01240 GOTO 1150
    goto Lbl_01150;

  Lbl_01250:
    // 01250 PRINT "YOU GOT IT IN";G;"GUESSES!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU GOT IT IN"); b2c_INT(buf,G_int);strcat(buf,"GUESSES!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 IF G<=5 THEN 1290
    if(G_int<=5)goto Lbl_01290;
    // 01270 PRINT "BUT IT SHOULDN'T TAKE MORE THAN 5 GUESSES!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BUT IT SHOULDN'T TAKE MORE THAN 5 GUESSES!");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 GOTO 1330
    goto Lbl_01330;

  Lbl_01290:
    // 01290 PRINT "GOOD JOB !!!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD JOB !!!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 FOR N=1 TO 15
    for(N_int=1;N_int<=15;N_int++){
        // 01310 PRINT CHR$(7);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(7));fputs(buf,fh); };
        // 01320 NEXT N
        int dummy_1320=0; // Ignore this line.
    }; // End-For(N_int)

  Lbl_01330:
    // 01330 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT "LET'S PLAN AGAIN....."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LET'S PLAN AGAIN.....");strcat(buf,"\n");fputs(buf,fh); };
    // 01350 GOTO 1100
    goto Lbl_01100;
    // 01360 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
