/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/dice.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56bf793996d0 ---------A   00002  PRINT TAB(34);"DICE"
    0x56bf79399670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56bf7938a2b0 ---------A   00006  PRINT:PRINT:PRINT
    0x56bf7939ab80 ---------A   00010  DIM F(12)
    0x56bf7939bed0 ---------A   00020  REM  DANNY FREIDUS
    0x56bf7939a080 ---------A   00030  PRINT "THIS PROGRAM SIMULATES THE ROLLING OF A"
    0x56bf7939a480 ---------A   00040  PRINT "PAIR OF DICE."
    0x56bf7939b6d0 ---------A   00050  PRINT "YOU ENTER THE NUMBER OF TIMES YOU WANT THE COMPUTER TO"
    0x56bf7939c0f0 ---------A   00060  PRINT "'ROLL' THE DICE.  WATCH OUT, VERY LARGE NUMBERS TAKE"
    0x56bf7939a660 ---------A   00070  PRINT "A LONG TIME.  IN PARTICULAR, NUMBERS OVER 5000."
    0x56bf793a1940 ---------A T 00080  FOR Q=1 TO 12
    0x56bf7939be10 ---------A   00090  F(Q)=0
    0x56bf793a1d20 ---------A   00100  NEXT Q
    0x56bf793a1ef0 ---------A   00110  PRINT:PRINT "HOW MANY ROLLS";
    0x56bf793a2110 ---------A   00120  INPUT X
    0x56bf793a24d0 ---------A   00130  FOR S=1 TO X
    0x56bf793a2b70 ---------A   00140  A=INT(6*RND(1)+1)
    0x56bf793a3200 ---------A   00150  B=INT(6*RND(1)+1)
    0x56bf793a3610 ---------A   00160  R=A+B
    0x56bf793a3b00 ---------A   00170  F(R)=F(R)+1
    0x56bf793a3c30 ---------A   00180  NEXT S
    0x56bf793a3ce0 ---------A   00185  PRINT
    0x56bf793a3f40 ---------A   00190  PRINT "TOTAL SPOTS","NUMBER OF TIMES"
    0x56bf793a42e0 ---------A   00200  FOR V=2 TO 12
    0x56bf793a4620 ---------A   00210  PRINT V,F(V)
    0x56bf793a4760 ---------A   00220  NEXT V
    0x56bf793a47d0 ---------A   00221  PRINT
    0x56bf793a49b0 ---------A   00222  PRINT:PRINT "TRY AGAIN";
    0x56bf793a4bd0 ---------A   00223  INPUT Z$
    0x56bf793a4e50 ---------A   00224  IF Z$="YES" THEN 80
    0x56bf793a4eb0 ---------A   00240  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00080      00224T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x56bf793996d0 (00002)   0x56bf793996d0 (00002)   0x56bf793a4eb0 (00240)   0x56bf793a4eb0 (00240)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/dice.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56bf793996d0 ---------A   00002  PRINT TAB(34);"DICE"
    0x56bf79399670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56bf7939a2d0 ----------   00006  PRINT
    0x56bf7939a910 ----------        a PRINT
    0x56bf7938a2b0 ---------A        b PRINT
    0x56bf7939ab80 ---------A   00010  DIM F(12)
    0x56bf7939bed0 ---------A   00020  REM  DANNY FREIDUS
    0x56bf7939a080 ---------A   00030  PRINT "THIS PROGRAM SIMULATES THE ROLLING OF A"
    0x56bf7939a480 ---------A   00040  PRINT "PAIR OF DICE."
    0x56bf7939b6d0 ---------A   00050  PRINT "YOU ENTER THE NUMBER OF TIMES YOU WANT THE COMPUTER TO"
    0x56bf7939c0f0 ---------A   00060  PRINT "'ROLL' THE DICE.  WATCH OUT, VERY LARGE NUMBERS TAKE"
    0x56bf7939a660 ---------A   00070  PRINT "A LONG TIME.  IN PARTICULAR, NUMBERS OVER 5000."
    0x56bf793a1940 ---------A T 00080  FOR Q=1 TO 12
    0x56bf7939be10 ---------A   00090  F(Q)=0
    0x56bf793a1d20 ---------A   00100  NEXT Q
    0x56bf793a1d70 ----------   00110  PRINT
    0x56bf793a1ef0 ---------A        a PRINT "HOW MANY ROLLS";
    0x56bf793a2110 ---------A   00120  INPUT X
    0x56bf793a24d0 ---------A   00130  FOR S=1 TO X
    0x56bf793a2b70 ---------A   00140  A=INT(6*RND(1)+1)
    0x56bf793a3200 ---------A   00150  B=INT(6*RND(1)+1)
    0x56bf793a3610 ---------A   00160  R=A+B
    0x56bf793a3b00 ---------A   00170  F(R)=F(R)+1
    0x56bf793a3c30 ---------A   00180  NEXT S
    0x56bf793a3ce0 ---------A   00185  PRINT
    0x56bf793a3f40 ---------A   00190  PRINT "TOTAL SPOTS","NUMBER OF TIMES"
    0x56bf793a42e0 ---------A   00200  FOR V=2 TO 12
    0x56bf793a4620 ---------A   00210  PRINT V,F(V)
    0x56bf793a4760 ---------A   00220  NEXT V
    0x56bf793a47d0 ---------A   00221  PRINT
    0x56bf793a4830 ----------   00222  PRINT
    0x56bf793a49b0 ---------A        a PRINT "TRY AGAIN";
    0x56bf793a4bd0 ---------A   00223  INPUT Z$
    0x56bf793a4e50 ---------A   00224  IF Z$="YES" THEN 80
    0x56bf793a4eb0 ---------A   00240  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/dice.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56bf793996d0 ---------A   01000  PRINT TAB(34);"DICE"
    0x56bf79399670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56bf7939a2d0 ----------   01020  PRINT
    0x56bf7939a910 ----------   01030  PRINT
    0x56bf7938a2b0 ---------A   01040  PRINT
    0x56bf7939ab80 ---------A   01050  DIM F(12)
    0x56bf7939bed0 ---------A   01060  REM  DANNY FREIDUS
    0x56bf7939a080 ---------A   01070  PRINT "THIS PROGRAM SIMULATES THE ROLLING OF A"
    0x56bf7939a480 ---------A   01080  PRINT "PAIR OF DICE."
    0x56bf7939b6d0 ---------A   01090  PRINT "YOU ENTER THE NUMBER OF TIMES YOU WANT THE COMPUTER TO"
    0x56bf7939c0f0 ---------A   01100  PRINT "'ROLL' THE DICE.  WATCH OUT, VERY LARGE NUMBERS TAKE"
    0x56bf7939a660 ---------A   01110  PRINT "A LONG TIME.  IN PARTICULAR, NUMBERS OVER 5000."
    0x56bf793a1940 ---------A   01120  FOR Q=1 TO 12
    0x56bf7939be10 ---------A   01130  F(Q)=0
    0x56bf793a1d20 ---------A   01140  NEXT Q
    0x56bf793a1d70 ----------   01150  PRINT
    0x56bf793a1ef0 ---------A   01160  PRINT "HOW MANY ROLLS";
    0x56bf793a2110 ---------A   01170  INPUT X
    0x56bf793a24d0 ---------A   01180  FOR S=1 TO X
    0x56bf793a2b70 ---------A   01190  A=INT(6*RND(1)+1)
    0x56bf793a3200 ---------A   01200  B=INT(6*RND(1)+1)
    0x56bf793a3610 ---------A   01210  R=A+B
    0x56bf793a3b00 ---------A   01220  F(R)=F(R)+1
    0x56bf793a3c30 ---------A   01230  NEXT S
    0x56bf793a3ce0 ---------A   01240  PRINT
    0x56bf793a3f40 ---------A   01250  PRINT "TOTAL SPOTS","NUMBER OF TIMES"
    0x56bf793a42e0 ---------A   01260  FOR V=2 TO 12
    0x56bf793a4620 ---------A   01270  PRINT V,F(V)
    0x56bf793a4760 ---------A   01280  NEXT V
    0x56bf793a47d0 ---------A   01290  PRINT
    0x56bf793a4830 ----------   01300  PRINT
    0x56bf793a49b0 ---------A   01310  PRINT "TRY AGAIN";
    0x56bf793a4bd0 ---------A   01320  INPUT Z$
    0x56bf793a4e50 ---------A   01330  IF Z$="YES" THEN 1120
    0x56bf793a4eb0 ---------A   01340  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01350 - 10000    8660 

 */



/*
 *  Symbol Table Listing for 'basic/dice.bas'
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
    F               Array    Integer         {0,11} 
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
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
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
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
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    V                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     
    Z$                       String      

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/dice.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56bf793996d0 ---------A   01000  PRINT TAB(34);"DICE"
    0x56bf79399670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56bf7939a2d0 ---------A   01020  PRINT
    0x56bf7939a910 ---------A   01030  PRINT
    0x56bf7938a2b0 ---------A   01040  PRINT
    0x56bf7939ab80 ---------A   01050  DIM F(12)
    0x56bf7939bed0 ---------A   01060  REM  DANNY FREIDUS
    0x56bf7939a080 ---------A   01070  PRINT "THIS PROGRAM SIMULATES THE ROLLING OF A"
    0x56bf7939a480 ---------A   01080  PRINT "PAIR OF DICE."
    0x56bf7939b6d0 ---------A   01090  PRINT "YOU ENTER THE NUMBER OF TIMES YOU WANT THE COMPUTER TO"
    0x56bf7939c0f0 ---------A   01100  PRINT "'ROLL' THE DICE.  WATCH OUT, VERY LARGE NUMBERS TAKE"
    0x56bf7939a660 ---------A   01110  PRINT "A LONG TIME.  IN PARTICULAR, NUMBERS OVER 5000."
    0x56bf793a1940 ---------A T 01120  FOR Q=1 TO 12
    0x56bf7939be10 ---------A   01130  F(Q)=0
    0x56bf793a1d20 ---------A   01140  NEXT Q
    0x56bf793a1d70 ---------A   01150  PRINT
    0x56bf793a1ef0 ---------A   01160  PRINT "HOW MANY ROLLS";
    0x56bf793a2110 ---------A   01170  INPUT X
    0x56bf793a24d0 ---------A   01180  FOR S=1 TO X
    0x56bf793a2b70 ---------A   01190  A=INT(6*RND(1)+1)
    0x56bf793a3200 ---------A   01200  B=INT(6*RND(1)+1)
    0x56bf793a3610 ---------A   01210  R=A+B
    0x56bf793a3b00 ---------A   01220  F(R)=F(R)+1
    0x56bf793a3c30 ---------A   01230  NEXT S
    0x56bf793a3ce0 ---------A   01240  PRINT
    0x56bf793a3f40 ---------A   01250  PRINT "TOTAL SPOTS","NUMBER OF TIMES"
    0x56bf793a42e0 ---------A   01260  FOR V=2 TO 12
    0x56bf793a4620 ---------A   01270  PRINT V,F(V)
    0x56bf793a4760 ---------A   01280  NEXT V
    0x56bf793a47d0 ---------A   01290  PRINT
    0x56bf793a4830 ---------A   01300  PRINT
    0x56bf793a49b0 ---------A   01310  PRINT "TRY AGAIN";
    0x56bf793a4bd0 ---------A   01320  INPUT Z$
    0x56bf793a4e50 ---------A   01330  IF Z$="YES" THEN 1120
    0x56bf793a4eb0 ---------A   01340  END
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
int    F_int_arr[12];                             // Basic: F 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    V_int;                                     // Basic: V 
int    X_int;                                     // Basic: X 
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
    // 01000 PRINT TAB(34);"DICE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,34);strcat(buf,"DICE");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 DIM F(12)
    // 01060 REM  DANNY FREIDUS
    // 01070 PRINT "THIS PROGRAM SIMULATES THE ROLLING OF A"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS PROGRAM SIMULATES THE ROLLING OF A");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "PAIR OF DICE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PAIR OF DICE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "YOU ENTER THE NUMBER OF TIMES YOU WANT THE COMPUTER TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ENTER THE NUMBER OF TIMES YOU WANT THE COMPUTER TO");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "'ROLL' THE DICE.  WATCH OUT, VERY LARGE NUMBERS TAKE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"'ROLL' THE DICE.  WATCH OUT, VERY LARGE NUMBERS TAKE");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "A LONG TIME.  IN PARTICULAR, NUMBERS OVER 5000."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A LONG TIME.  IN PARTICULAR, NUMBERS OVER 5000.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01120:
    // 01120 FOR Q=1 TO 12
    for(Q_int=1;Q_int<=12;Q_int++){
        // 01130 F(Q)=0
        F_int_arr[Q_int] = 0;
        // 01140 NEXT Q
        int dummy_1140=0; // Ignore this line.
    }; // End-For(Q_int)
    // 01150 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "HOW MANY ROLLS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW MANY ROLLS");fputs(buf,fh); };
    // 01170 INPUT X
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
                (err += b2c_strtoi(&X_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01170
    // 01180 FOR S=1 TO X
    for(S_int=1;S_int<=X_int;S_int++){
        // 01190 A=INT(6*RND(1)+1)
        A_int = INT(6*RND(1)+1);
        // 01200 B=INT(6*RND(1)+1)
        B_int = INT(6*RND(1)+1);
        // 01210 R=A+B
        R_int = A_int+B_int;
        // 01220 F(R)=F(R)+1
        F_int_arr[R_int] = F_int_arr[R_int]+1;
        // 01230 NEXT S
        int dummy_1230=0; // Ignore this line.
    }; // End-For(S_int)
    // 01240 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT "TOTAL SPOTS","NUMBER OF TIMES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOTAL SPOTS");strcat(buf,"NUMBER OF TIMES");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 FOR V=2 TO 12
    for(V_int=2;V_int<=12;V_int++){
        // 01270 PRINT V,F(V)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,V_int); b2c_INT(buf,F_int_arr[V_int]);strcat(buf,"\n");fputs(buf,fh); };
        // 01280 NEXT V
        int dummy_1280=0; // Ignore this line.
    }; // End-For(V_int)
    // 01290 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01300 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01310 PRINT "TRY AGAIN";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TRY AGAIN");fputs(buf,fh); };
    // 01320 INPUT Z$
    // Start of Basic INPUT statement 01320
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Z_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01320
    // 01330 IF Z$="YES" THEN 1120
    if(strcmp(Z_str,"YES")==0)goto Lbl_01120;
    // 01340 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
