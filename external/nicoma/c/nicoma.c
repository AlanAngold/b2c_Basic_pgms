/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/nicoma.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f88887d56d0 ---------A   00002  PRINT TAB(33);"NICOMA"
    0x5f88887d5670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5f88887d57f0 ---------A   00006  PRINT: PRINT: PRINT
    0x5f88887d7ae0 ---------A   00010  PRINT "BOOMERANG PUZZLE FROM ARITHMETICA OF NICOMACHUS -- A.D. 90!"
    0x5f88887d6080 ---------A T 00020  PRINT
    0x5f88887d6480 ---------A   00030  PRINT "PLEASE THINK OF A NUMBER BETWEEN 1 AND 100."
    0x5f88887d76a0 ---------A   00040  PRINT "YOUR NUMBER DIVIDED BY 3 HAS A REMAINDER OF";
    0x5f88887d81a0 ---------A   00045  INPUT A
    0x5f88887d66a0 ---------A   00050  PRINT "YOUR NUMBER DIVIDED BY 5 HAS A REMAINDER OF";
    0x5f88887dd8a0 ---------A   00055  INPUT B
    0x5f88887dda00 ---------A   00060  PRINT "YOUR NUMBER DIVIDED BY 7 HAS A REMAINDER OF";
    0x5f88887ddbc0 ---------A   00065  INPUT C
    0x5f88887ddc20 ---------A   00070  PRINT
    0x5f88887ddd40 ---------A   00080  PRINT "LET ME THINK A MOMENT..."
    0x5f88887ddda0 ---------A   00085  PRINT
    0x5f88887d7e70 ---------A   00090  FOR I=1 TO 1500: NEXT I
    0x5f88887d7ff0 ---------A   00100  D=70*A+21*B+15*C
    0x5f88887deba0 ---------A T 00110  IF D<=105 THEN 140
    0x5f88887d80b0 ---------A   00120  D=D-105
    0x5f88887def20 ---------A   00130  GOTO 110
    0x5f88887df290 ---------A T 00140  PRINT "YOUR NUMBER WAS";D;", RIGHT";
    0x5f88887df4b0 ---------A T 00160  INPUT A$
    0x5f88887df510 ---------A   00165  PRINT
    0x5f88887df790 ---------A   00170  IF A$="YES" THEN 220
    0x5f88887dfa40 ---------A   00180  IF A$="NO" THEN 240
    0x5f88887dfd80 ---------A   00190  PRINT "EH?  I DON'T UNDERSTAND '";A$;"'  TRY 'YES' OR 'NO'."
    0x5f88887dfde0 ---------A   00200  GOTO 160
    0x5f88887dff30 ---------A T 00220  PRINT "HOW ABOUT THAT!!"
    0x5f88887dffd0 ---------A   00230  GOTO 250
    0x5f88887e0100 ---------A T 00240  PRINT "I FEEL YOUR ARITHMETIC IS IN ERROR."
    0x5f88887e0160 ---------A T 00250  PRINT
    0x5f88887e02c0 ---------A   00260  PRINT "LET'S TRY ANOTHER."
    0x5f88887e0340 ---------A   00270  GOTO 20
    0x5f88887e05a0 ---------A   00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00020      00270T
     00110      00130T
     00140      00110T
     00160      00200T
     00220      00170T
     00240      00180T
     00250      00230T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5f88887d56d0 (00002)   0x5f88887d56d0 (00002)   0x5f88887e05a0 (00999)   0x5f88887e05a0 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/nicoma.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f88887d56d0 ---------A   00002  PRINT TAB(33);"NICOMA"
    0x5f88887d5670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5f88887c62b0 ----------   00006  PRINT
    0x5f88887d59e0 ----------        a PRINT
    0x5f88887d57f0 ---------A        b PRINT
    0x5f88887d7ae0 ---------A   00010  PRINT "BOOMERANG PUZZLE FROM ARITHMETICA OF NICOMACHUS -- A.D. 90!"
    0x5f88887d6080 ---------A T 00020  PRINT
    0x5f88887d6480 ---------A   00030  PRINT "PLEASE THINK OF A NUMBER BETWEEN 1 AND 100."
    0x5f88887d76a0 ---------A   00040  PRINT "YOUR NUMBER DIVIDED BY 3 HAS A REMAINDER OF";
    0x5f88887d81a0 ---------A   00045  INPUT A
    0x5f88887d66a0 ---------A   00050  PRINT "YOUR NUMBER DIVIDED BY 5 HAS A REMAINDER OF";
    0x5f88887dd8a0 ---------A   00055  INPUT B
    0x5f88887dda00 ---------A   00060  PRINT "YOUR NUMBER DIVIDED BY 7 HAS A REMAINDER OF";
    0x5f88887ddbc0 ---------A   00065  INPUT C
    0x5f88887ddc20 ---------A   00070  PRINT
    0x5f88887ddd40 ---------A   00080  PRINT "LET ME THINK A MOMENT..."
    0x5f88887ddda0 ---------A   00085  PRINT
    0x5f88887de0e0 ----------   00090  FOR I=1 TO 1500
    0x5f88887d7e70 ---------A        a NEXT I
    0x5f88887d7ff0 ---------A   00100  D=70*A+21*B+15*C
    0x5f88887deba0 ---------A T 00110  IF D<=105 THEN 140
    0x5f88887d80b0 ---------A   00120  D=D-105
    0x5f88887def20 ---------A   00130  GOTO 110
    0x5f88887df290 ---------A T 00140  PRINT "YOUR NUMBER WAS";D;", RIGHT";
    0x5f88887df4b0 ---------A T 00160  INPUT A$
    0x5f88887df510 ---------A   00165  PRINT
    0x5f88887df790 ---------A   00170  IF A$="YES" THEN 220
    0x5f88887dfa40 ---------A   00180  IF A$="NO" THEN 240
    0x5f88887dfd80 ---------A   00190  PRINT "EH?  I DON'T UNDERSTAND '";A$;"'  TRY 'YES' OR 'NO'."
    0x5f88887dfde0 ---------A   00200  GOTO 160
    0x5f88887dff30 ---------A T 00220  PRINT "HOW ABOUT THAT!!"
    0x5f88887dffd0 ---------A   00230  GOTO 250
    0x5f88887e0100 ---------A T 00240  PRINT "I FEEL YOUR ARITHMETIC IS IN ERROR."
    0x5f88887e0160 ---------A T 00250  PRINT
    0x5f88887e02c0 ---------A   00260  PRINT "LET'S TRY ANOTHER."
    0x5f88887e0340 ---------A   00270  GOTO 20
    0x5f88887e05a0 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/nicoma.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f88887d56d0 ---------A   01000  PRINT TAB(33);"NICOMA"
    0x5f88887d5670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5f88887c62b0 ----------   01020  PRINT
    0x5f88887d59e0 ----------   01030  PRINT
    0x5f88887d57f0 ---------A   01040  PRINT
    0x5f88887d7ae0 ---------A   01050  PRINT "BOOMERANG PUZZLE FROM ARITHMETICA OF NICOMACHUS -- A.D. 90!"
    0x5f88887d6080 ---------A   01060  PRINT
    0x5f88887d6480 ---------A   01070  PRINT "PLEASE THINK OF A NUMBER BETWEEN 1 AND 100."
    0x5f88887d76a0 ---------A   01080  PRINT "YOUR NUMBER DIVIDED BY 3 HAS A REMAINDER OF";
    0x5f88887d81a0 ---------A   01090  INPUT A
    0x5f88887d66a0 ---------A   01100  PRINT "YOUR NUMBER DIVIDED BY 5 HAS A REMAINDER OF";
    0x5f88887dd8a0 ---------A   01110  INPUT B
    0x5f88887dda00 ---------A   01120  PRINT "YOUR NUMBER DIVIDED BY 7 HAS A REMAINDER OF";
    0x5f88887ddbc0 ---------A   01130  INPUT C
    0x5f88887ddc20 ---------A   01140  PRINT
    0x5f88887ddd40 ---------A   01150  PRINT "LET ME THINK A MOMENT..."
    0x5f88887ddda0 ---------A   01160  PRINT
    0x5f88887de0e0 ----------   01170  FOR I=1 TO 1500
    0x5f88887d7e70 ---------A   01180  NEXT I
    0x5f88887d7ff0 ---------A   01190  D=70*A+21*B+15*C
    0x5f88887deba0 ---------A   01200  IF D<=105 THEN 1230
    0x5f88887d80b0 ---------A   01210  D=D-105
    0x5f88887def20 ---------A   01220  GOTO 1200
    0x5f88887df290 ---------A   01230  PRINT "YOUR NUMBER WAS";D;", RIGHT";
    0x5f88887df4b0 ---------A   01240  INPUT A$
    0x5f88887df510 ---------A   01250  PRINT
    0x5f88887df790 ---------A   01260  IF A$="YES" THEN 1300
    0x5f88887dfa40 ---------A   01270  IF A$="NO" THEN 1320
    0x5f88887dfd80 ---------A   01280  PRINT "EH?  I DON'T UNDERSTAND '";A$;"'  TRY 'YES' OR 'NO'."
    0x5f88887dfde0 ---------A   01290  GOTO 1240
    0x5f88887dff30 ---------A   01300  PRINT "HOW ABOUT THAT!!"
    0x5f88887dffd0 ---------A   01310  GOTO 1330
    0x5f88887e0100 ---------A   01320  PRINT "I FEEL YOUR ARITHMETIC IS IN ERROR."
    0x5f88887e0160 ---------A   01330  PRINT
    0x5f88887e02c0 ---------A   01340  PRINT "LET'S TRY ANOTHER."
    0x5f88887e0340 ---------A   01350  GOTO 1060
    0x5f88887e05a0 ---------A   01360  END
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
 *  Symbol Table Listing for 'basic/nicoma.bas'
 *
    A                        Integer     
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
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
 *  Listing of basic/nicoma.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5f88887d56d0 ---------A   01000  PRINT TAB(33);"NICOMA"
    0x5f88887d5670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5f88887c62b0 ---------A   01020  PRINT
    0x5f88887d59e0 ---------A   01030  PRINT
    0x5f88887d57f0 ---------A   01040  PRINT
    0x5f88887d7ae0 ---------A   01050  PRINT "BOOMERANG PUZZLE FROM ARITHMETICA OF NICOMACHUS -- A.D. 90!"
    0x5f88887d6080 ---------A T 01060  PRINT
    0x5f88887d6480 ---------A   01070  PRINT "PLEASE THINK OF A NUMBER BETWEEN 1 AND 100."
    0x5f88887d76a0 ---------A   01080  PRINT "YOUR NUMBER DIVIDED BY 3 HAS A REMAINDER OF";
    0x5f88887d81a0 ---------A   01090  INPUT A
    0x5f88887d66a0 ---------A   01100  PRINT "YOUR NUMBER DIVIDED BY 5 HAS A REMAINDER OF";
    0x5f88887dd8a0 ---------A   01110  INPUT B
    0x5f88887dda00 ---------A   01120  PRINT "YOUR NUMBER DIVIDED BY 7 HAS A REMAINDER OF";
    0x5f88887ddbc0 ---------A   01130  INPUT C
    0x5f88887ddc20 ---------A   01140  PRINT
    0x5f88887ddd40 ---------A   01150  PRINT "LET ME THINK A MOMENT..."
    0x5f88887ddda0 ---------A   01160  PRINT
    0x5f88887de0e0 ---------A   01170  FOR I=1 TO 1500
    0x5f88887d7e70 ---------A   01180  NEXT I
    0x5f88887d7ff0 ---------A   01190  D=70*A+21*B+15*C
    0x5f88887deba0 ---------A T 01200  IF D<=105 THEN 1230
    0x5f88887d80b0 ---------A   01210  D=D-105
    0x5f88887def20 ---------A   01220  GOTO 1200
    0x5f88887df290 ---------A T 01230  PRINT "YOUR NUMBER WAS";D;", RIGHT";
    0x5f88887df4b0 ---------A T 01240  INPUT A$
    0x5f88887df510 ---------A   01250  PRINT
    0x5f88887df790 ---------A   01260  IF A$="YES" THEN 1300
    0x5f88887dfa40 ---------A   01270  IF A$="NO" THEN 1320
    0x5f88887dfd80 ---------A   01280  PRINT "EH?  I DON'T UNDERSTAND '";A$;"'  TRY 'YES' OR 'NO'."
    0x5f88887dfde0 ---------A   01290  GOTO 1240
    0x5f88887dff30 ---------A T 01300  PRINT "HOW ABOUT THAT!!"
    0x5f88887dffd0 ---------A   01310  GOTO 1330
    0x5f88887e0100 ---------A T 01320  PRINT "I FEEL YOUR ARITHMETIC IS IN ERROR."
    0x5f88887e0160 ---------A T 01330  PRINT
    0x5f88887e02c0 ---------A   01340  PRINT "LET'S TRY ANOTHER."
    0x5f88887e0340 ---------A   01350  GOTO 1060
    0x5f88887e05a0 ---------A   01360  END
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
int    B_int;                                     // Basic: B 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    I_int;                                     // Basic: I 
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
    // 01000 PRINT TAB(33);"NICOMA"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"NICOMA");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "BOOMERANG PUZZLE FROM ARITHMETICA OF NICOMACHUS -- A.D. 90!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BOOMERANG PUZZLE FROM ARITHMETICA OF NICOMACHUS -- A.D. 90!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01060:
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "PLEASE THINK OF A NUMBER BETWEEN 1 AND 100."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE THINK OF A NUMBER BETWEEN 1 AND 100.");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "YOUR NUMBER DIVIDED BY 3 HAS A REMAINDER OF";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR NUMBER DIVIDED BY 3 HAS A REMAINDER OF");fputs(buf,fh); };
    // 01090 INPUT A
    // Start of Basic INPUT statement 01090
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&A_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01090
    // 01100 PRINT "YOUR NUMBER DIVIDED BY 5 HAS A REMAINDER OF";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR NUMBER DIVIDED BY 5 HAS A REMAINDER OF");fputs(buf,fh); };
    // 01110 INPUT B
    // Start of Basic INPUT statement 01110
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&B_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01110
    // 01120 PRINT "YOUR NUMBER DIVIDED BY 7 HAS A REMAINDER OF";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR NUMBER DIVIDED BY 7 HAS A REMAINDER OF");fputs(buf,fh); };
    // 01130 INPUT C
    // Start of Basic INPUT statement 01130
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01130
    // 01140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "LET ME THINK A MOMENT..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LET ME THINK A MOMENT...");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01170 FOR I=1 TO 1500
    for(I_int=1;I_int<=1500;I_int++){
        // 01180 NEXT I
        int dummy_1180=0; // Ignore this line.
    }; // End-For(I_int)
    // 01190 D=70*A+21*B+15*C
    D_int = 70*A_int+21*B_int+15*C_int;

  Lbl_01200:
    // 01200 IF D<=105 THEN 1230
    if(D_int<=105)goto Lbl_01230;
    // 01210 D=D-105
    D_int = D_int-105;
    // 01220 GOTO 1200
    goto Lbl_01200;

  Lbl_01230:
    // 01230 PRINT "YOUR NUMBER WAS";D;", RIGHT";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR NUMBER WAS"); b2c_INT(buf,D_int);strcat(buf,", RIGHT");fputs(buf,fh); };

  Lbl_01240:
    // 01240 INPUT A$
    // Start of Basic INPUT statement 01240
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
    }; // End of Basic INPUT statement 01240
    // 01250 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01260 IF A$="YES" THEN 1300
    if(strcmp(A_str,"YES")==0)goto Lbl_01300;
    // 01270 IF A$="NO" THEN 1320
    if(strcmp(A_str,"NO")==0)goto Lbl_01320;
    // 01280 PRINT "EH?  I DON'T UNDERSTAND '";A$;"'  TRY 'YES' OR 'NO'."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"EH?  I DON'T UNDERSTAND '"); strcat(buf,A_str);strcat(buf,"'  TRY 'YES' OR 'NO'.");strcat(buf,"\n");fputs(buf,fh); };
    // 01290 GOTO 1240
    goto Lbl_01240;

  Lbl_01300:
    // 01300 PRINT "HOW ABOUT THAT!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW ABOUT THAT!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01310 GOTO 1330
    goto Lbl_01330;

  Lbl_01320:
    // 01320 PRINT "I FEEL YOUR ARITHMETIC IS IN ERROR."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I FEEL YOUR ARITHMETIC IS IN ERROR.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01330:
    // 01330 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT "LET'S TRY ANOTHER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LET'S TRY ANOTHER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01350 GOTO 1060
    goto Lbl_01060;
    // 01360 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
