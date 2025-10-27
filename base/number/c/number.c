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
    0x618709232590 ---------A   01000 REM THE COMPUTER CHOOSES A NUMBER FROM
    0x618709242fc0 ---------A   01010 REM 1 TO 10,000 AT RANDOM, THE OBJECT OF
    0x618709242910 ---------A   01020 REM THE GAME IS TO GUESS THE CHOSEN
    0x6187092435e0 ---------A   01030 REM NUMBER IN AS FEW GUESSES AS POSSIBLE
    0x618709243db0 ---------A T 01040 LET R=1+INT(10000*RND)
    0x618709243f30 ---------A   01050 LET Y=0
    0x618709243e70 ---------A   01060 PRINT"A RANDOM NUMBER HAS BEEN PICKED"
    0x618709243ff0 ---------A   01070 PRINT"TRY GUESSING IT, HINT THE NUMBER"
    0x6187092440b0 ---------A   01080 PRINT" IS FROM 1 TO 10,000"
    0x618709242b80 ---------A   01090 PRINT"GOOD LUCK!!!!!!!"
    0x618709241ca0 ---------A   01100 PRINT
    0x618709242740 ---------A T 01110 PRINT"YOUR GUESS IS = ";
    0x6187092416d0 ---------A   01120 INPUT X
    0x618709249c00 ---------A   01130 LET Y=Y+1
    0x618709241670 ---------A   01140 IF X=R THEN 1170
    0x61870924a090 ---------A   01150 IF X>R THEN 1270
    0x61870924a0f0 ---------A   01160 GOTO 1290
    0x61870924a230 ---------A T 01170 PRINT"NOT BAD!!!!-YOU GOT IT!!!!"
    0x61870924a460 ---------A   01180 PRINT"YOUR NUMBER OF TRIES WERE ";Y
    0x61870924a4f0 ---------A   01190 PRINT
    0x61870924a600 ---------A   01200 PRINT"IF YOU WANT TO TRY AGAIN, TYPE '1'"
    0x61870924a750 ---------A   01210 PRINT"IF NOT TYPE '0'"
    0x61870924a960 ---------A   01220 INPUT L
    0x61870924abc0 ---------A   01230 IF L=1 THEN 1250
    0x61870924ac20 ---------A   01240 STOP
    0x61870924aca0 ---------A T 01250 PRINT
    0x61870924acf0 ---------A   01260 GOTO 1040
    0x61870924ae30 ---------A T 01270 PRINT"TOO HIGH, TRY AGAIN"
    0x61870924ae80 ---------A   01280 GOTO 1110
    0x61870924afc0 ---------A T 01290 PRINT"TOO LOW, TRY AGAIN"
    0x61870924b030 ---------A   01300 GOTO 1110
    0x61870924b070 ---------A   01310 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01040      01260T
     01110      01280T, 01300T
     01170      01140T
     01250      01230T
     01270      01150T
     01290      01160T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x618709232590 (01000)   0x618709232590 (01000)   0x61870924b070 (01310)   0x61870924b070 (01310)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01320 - 10000    8690 

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
    FRE             Function Integer         args=1, char*  
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
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Integer     
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
 *  Listing of basic/number.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x618709232590 ---------A   01000 REM THE COMPUTER CHOOSES A NUMBER FROM
    0x618709242fc0 ---------A   01010 REM 1 TO 10,000 AT RANDOM, THE OBJECT OF
    0x618709242910 ---------A   01020 REM THE GAME IS TO GUESS THE CHOSEN
    0x6187092435e0 ---------A   01030 REM NUMBER IN AS FEW GUESSES AS POSSIBLE
    0x618709243db0 ---------A T 01040 LET R=1+INT(10000*RND)
    0x618709243f30 ---------A   01050 LET Y=0
    0x618709243e70 ---------A   01060 PRINT"A RANDOM NUMBER HAS BEEN PICKED"
    0x618709243ff0 ---------A   01070 PRINT"TRY GUESSING IT, HINT THE NUMBER"
    0x6187092440b0 ---------A   01080 PRINT" IS FROM 1 TO 10,000"
    0x618709242b80 ---------A   01090 PRINT"GOOD LUCK!!!!!!!"
    0x618709241ca0 ---------A   01100 PRINT
    0x618709242740 ---------A T 01110 PRINT"YOUR GUESS IS = ";
    0x6187092416d0 ---------A   01120 INPUT X
    0x618709249c00 ---------A   01130 LET Y=Y+1
    0x618709241670 ---------A   01140 IF X=R THEN 1170
    0x61870924a090 ---------A   01150 IF X>R THEN 1270
    0x61870924a0f0 ---------A   01160 GOTO 1290
    0x61870924a230 ---------A T 01170 PRINT"NOT BAD!!!!-YOU GOT IT!!!!"
    0x61870924a460 ---------A   01180 PRINT"YOUR NUMBER OF TRIES WERE ";Y
    0x61870924a4f0 ---------A   01190 PRINT
    0x61870924a600 ---------A   01200 PRINT"IF YOU WANT TO TRY AGAIN, TYPE '1'"
    0x61870924a750 ---------A   01210 PRINT"IF NOT TYPE '0'"
    0x61870924a960 ---------A   01220 INPUT L
    0x61870924abc0 ---------A   01230 IF L=1 THEN 1250
    0x61870924ac20 ---------A   01240 STOP
    0x61870924aca0 ---------A T 01250 PRINT
    0x61870924acf0 ---------A   01260 GOTO 1040
    0x61870924ae30 ---------A T 01270 PRINT"TOO HIGH, TRY AGAIN"
    0x61870924ae80 ---------A   01280 GOTO 1110
    0x61870924afc0 ---------A T 01290 PRINT"TOO LOW, TRY AGAIN"
    0x61870924b030 ---------A   01300 GOTO 1110
    0x61870924b070 ---------A   01310 END
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
int    L_int;                                     // Basic: L 
int    R_int;                                     // Basic: R 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
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
    // 01000 REM THE COMPUTER CHOOSES A NUMBER FROM
    // 01010 REM 1 TO 10,000 AT RANDOM, THE OBJECT OF
    // 01020 REM THE GAME IS TO GUESS THE CHOSEN
    // 01030 REM NUMBER IN AS FEW GUESSES AS POSSIBLE

  Lbl_01040:
    // 01040 LET R=1+INT(10000*RND)
    R_int = 1+INT(10000*RND());
    // 01050 LET Y=0
    Y_int = 0;
    // 01060 PRINT"A RANDOM NUMBER HAS BEEN PICKED"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A RANDOM NUMBER HAS BEEN PICKED");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT"TRY GUESSING IT, HINT THE NUMBER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY GUESSING IT, HINT THE NUMBER");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT" IS FROM 1 TO 10,000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," IS FROM 1 TO 10,000");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT"GOOD LUCK!!!!!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD LUCK!!!!!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01110:
    // 01110 PRINT"YOUR GUESS IS = ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR GUESS IS = ");fputs(buf,fh); };
    // 01120 INPUT X
    // Start of Basic INPUT statement 01120
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01120
    // 01130 LET Y=Y+1
    Y_int = Y_int+1;
    // 01140 IF X=R THEN 1170
    if(X_int==R_int)goto Lbl_01170;
    // 01150 IF X>R THEN 1270
    if(X_int>R_int)goto Lbl_01270;
    // 01160 GOTO 1290
    goto Lbl_01290;

  Lbl_01170:
    // 01170 PRINT"NOT BAD!!!!-YOU GOT IT!!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOT BAD!!!!-YOU GOT IT!!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT"YOUR NUMBER OF TRIES WERE ";Y
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR NUMBER OF TRIES WERE "); b2c_INT(buf,Y_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT"IF YOU WANT TO TRY AGAIN, TYPE '1'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF YOU WANT TO TRY AGAIN, TYPE '1'");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT"IF NOT TYPE '0'"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF NOT TYPE '0'");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 INPUT L
    // Start of Basic INPUT statement 01220
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&L_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01220
    // 01230 IF L=1 THEN 1250
    if(L_int==1)goto Lbl_01250;
    // 01240 STOP
    exit(1);

  Lbl_01250:
    // 01250 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01260 GOTO 1040
    goto Lbl_01040;

  Lbl_01270:
    // 01270 PRINT"TOO HIGH, TRY AGAIN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO HIGH, TRY AGAIN");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 GOTO 1110
    goto Lbl_01110;

  Lbl_01290:
    // 01290 PRINT"TOO LOW, TRY AGAIN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO LOW, TRY AGAIN");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 GOTO 1110
    goto Lbl_01110;
    // 01310 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
