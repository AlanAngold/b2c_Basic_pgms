/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/name.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6240264216d0 ---------A   00001  PRINT TAB(34);"NAME"
    0x624026421670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6240264122b0 ---------A   00003  PRINT: PRINT: PRINT
    0x624026423ed0 ---------A   00005  DIM B$(40)
    0x6240264220a0 ---------A   00010  PRINT "HELLO.": PRINT "MY NAME IS CREATIVE COMPUTER."
    0x624026424050 ---------A   00020  PRINT "WHAT'S YOUR NAME (FIRST AND LAST";: INPUT A$: L=LEN(A$)
    0x624026429900 ---------A   00030  PRINT: PRINT "THANK YOU, ";
    0x62402642a350 ---------A   00040  FOR I=1 TO L: B$(I)=MID$(A$,I,1): NEXT I
    0x62402642aaa0 ---------A   00050  FOR I=L TO 1 STEP -1: PRINT B$(I);: NEXT I
    0x62402642ad80 ---------A   00060  PRINT ".": PRINT "OOPS!  I GUESS I GOT IT BACKWARDS.  A SMART"
    0x62402642af90 ---------A   00070  PRINT "COMPUTER LIKE ME SHOULDN'T MAKE A MISTAKE LIKE THAT!": PRINT
    0x62402642b130 ---------A   00080  PRINT "BUT I JUST NOTICED YOUR LETTERS ARE OUT OF ORDER."
    0x62402642b270 ---------A   00090  PRINT "LET'S PUT THEM IN ORDER LIKE THIS: ";
    0x62402642bce0 ---------A   00100  FOR J=2 TO L: I=J-1: T$=B$(J)
    0x62402642c050 ---------A T 00110  IF T$>B$(I) THEN 130
    0x62402642ca90 ---------A   00120  B$(I+1)=B$(I): I=I-1: IF I>0 THEN 110
    0x62402642cfc0 ---------A T 00130  B$(I+1)=T$: NEXT J
    0x62402642d740 ---------A   00140  FOR I=1 TO L: PRINT B$(I);: NEXT I: PRINT: PRINT
    0x62402642dab0 ---------A   00150  PRINT "DON'T YOU LIKE THAT BETTER";: INPUT D$
    0x62402642dd60 ---------A   00160  IF D$="YES" THEN 180
    0x62402642dfa0 ---------A   00170  PRINT: PRINT "I'M SORRY YOU DON'T LIKE IT THAT WAY.": GOTO 200
    0x62402642e170 ---------A T 00180  PRINT: PRINT "I KNEW YOU'D AGREE!!"
    0x62402642e550 ---------A T 00200  PRINT: PRINT "I REALLY ENJOYED MEETING YOU ";A$;"."
    0x62402642e6b0 ---------A   00210  PRINT "HAVE A NICE DAY!"
    0x62402642e710 ---------A   00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00110      00120T
     00130      00110T
     00180      00160T
     00200      00170T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x6240264216d0 (00001)   0x6240264216d0 (00001)   0x62402642e710 (00999)   0x62402642e710 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/name.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6240264216d0 ---------A   00001  PRINT TAB(34);"NAME"
    0x624026421670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6240264222d0 ----------   00003  PRINT
    0x624026422910 ----------        a PRINT
    0x6240264122b0 ---------A        b PRINT
    0x624026423ed0 ---------A   00005  DIM B$(40)
    0x624026422040 ----------   00010  PRINT "HELLO."
    0x6240264220a0 ---------A        a PRINT "MY NAME IS CREATIVE COMPUTER."
    0x624026422500 ----------   00020  PRINT "WHAT'S YOUR NAME (FIRST AND LAST";
    0x624026421ca0 ----------        a INPUT A$
    0x624026424050 ---------A        b L=LEN(A$)
    0x624026422880 ----------   00030  PRINT
    0x624026429900 ---------A        a PRINT "THANK YOU, ";
    0x624026429ca0 ----------   00040  FOR I=1 TO L
    0x62402642a220 ----------        a B$(I)=MID$(A$,I,1)
    0x62402642a350 ---------A        b NEXT I
    0x62402642a720 ----------   00050  FOR I=L TO 1 STEP -1
    0x62402642a960 ----------        a PRINT B$(I);
    0x62402642aaa0 ---------A        b NEXT I
    0x62402642ac20 ----------   00060  PRINT "."
    0x62402642ad80 ---------A        a PRINT "OOPS!  I GUESS I GOT IT BACKWARDS.  A SMART"
    0x62402642aee0 ----------   00070  PRINT "COMPUTER LIKE ME SHOULDN'T MAKE A MISTAKE LIKE THAT!"
    0x62402642af90 ---------A        a PRINT
    0x62402642b130 ---------A   00080  PRINT "BUT I JUST NOTICED YOUR LETTERS ARE OUT OF ORDER."
    0x62402642b270 ---------A   00090  PRINT "LET'S PUT THEM IN ORDER LIKE THIS: ";
    0x62402642b610 ----------   00100  FOR J=2 TO L
    0x62402642b930 ----------        a I=J-1
    0x62402642bce0 ---------A        b T$=B$(J)
    0x62402642c050 ---------A T 00110  IF T$>B$(I) THEN 130
    0x62402642c530 ----------   00120  B$(I+1)=B$(I)
    0x62402642c840 ----------        a I=I-1
    0x62402642ca90 ---------A        b IF I>0 THEN 110
    0x62402642ce90 ---------- T 00130  B$(I+1)=T$
    0x62402642cfc0 ---------A T      a NEXT J
    0x62402642d2d0 ----------   00140  FOR I=1 TO L
    0x62402642d510 ----------        a PRINT B$(I);
    0x62402642d650 ----------        b NEXT I
    0x62402642d6a0 ----------        c PRINT
    0x62402642d740 ---------A        d PRINT
    0x62402642d880 ----------   00150  PRINT "DON'T YOU LIKE THAT BETTER";
    0x62402642dab0 ---------A        a INPUT D$
    0x62402642dd60 ---------A   00160  IF D$="YES" THEN 180
    0x62402642ddc0 ----------   00170  PRINT
    0x62402642df10 ----------        a PRINT "I'M SORRY YOU DON'T LIKE IT THAT WAY."
    0x62402642dfa0 ---------A        b GOTO 200
    0x62402642dff0 ---------- T 00180  PRINT
    0x62402642e170 ---------A T      a PRINT "I KNEW YOU'D AGREE!!"
    0x62402642e1d0 ---------- T 00200  PRINT
    0x62402642e550 ---------A T      a PRINT "I REALLY ENJOYED MEETING YOU ";A$;"."
    0x62402642e6b0 ---------A   00210  PRINT "HAVE A NICE DAY!"
    0x62402642e710 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/name.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6240264216d0 ---------A   01000  PRINT TAB(34);"NAME"
    0x624026421670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6240264222d0 ----------   01020  PRINT
    0x624026422910 ----------   01030  PRINT
    0x6240264122b0 ---------A   01040  PRINT
    0x624026423ed0 ---------A   01050  DIM B$(40)
    0x624026422040 ----------   01060  PRINT "HELLO."
    0x6240264220a0 ---------A   01070  PRINT "MY NAME IS CREATIVE COMPUTER."
    0x624026422500 ----------   01080  PRINT "WHAT'S YOUR NAME (FIRST AND LAST";
    0x624026421ca0 ----------   01090  INPUT A$
    0x624026424050 ---------A   01100  L=LEN(A$)
    0x624026422880 ----------   01110  PRINT
    0x624026429900 ---------A   01120  PRINT "THANK YOU, ";
    0x624026429ca0 ----------   01130  FOR I=1 TO L
    0x62402642a220 ----------   01140  B$(I)=MID$(A$,I,1)
    0x62402642a350 ---------A   01150  NEXT I
    0x62402642a720 ----------   01160  FOR I=L TO 1 STEP -1
    0x62402642a960 ----------   01170  PRINT B$(I);
    0x62402642aaa0 ---------A   01180  NEXT I
    0x62402642ac20 ----------   01190  PRINT "."
    0x62402642ad80 ---------A   01200  PRINT "OOPS!  I GUESS I GOT IT BACKWARDS.  A SMART"
    0x62402642aee0 ----------   01210  PRINT "COMPUTER LIKE ME SHOULDN'T MAKE A MISTAKE LIKE THAT!"
    0x62402642af90 ---------A   01220  PRINT
    0x62402642b130 ---------A   01230  PRINT "BUT I JUST NOTICED YOUR LETTERS ARE OUT OF ORDER."
    0x62402642b270 ---------A   01240  PRINT "LET'S PUT THEM IN ORDER LIKE THIS: ";
    0x62402642b610 ----------   01250  FOR J=2 TO L
    0x62402642b930 ----------   01260  I=J-1
    0x62402642bce0 ---------A   01270  T$=B$(J)
    0x62402642c050 ---------A   01280  IF T$>B$(I) THEN 1330
    0x62402642c530 ----------   01290  B$(I+1)=B$(I)
    0x62402642c840 ----------   01300  I=I-1
    0x62402642ca90 ---------A   01310  IF I>0 THEN 1280
    0x62402642ce90 ----------   01320  B$(I+1)=T$
    0x62402642cfc0 ---------A   01330  NEXT J
    0x62402642d2d0 ----------   01340  FOR I=1 TO L
    0x62402642d510 ----------   01350  PRINT B$(I);
    0x62402642d650 ----------   01360  NEXT I
    0x62402642d6a0 ----------   01370  PRINT
    0x62402642d740 ---------A   01380  PRINT
    0x62402642d880 ----------   01390  PRINT "DON'T YOU LIKE THAT BETTER";
    0x62402642dab0 ---------A   01400  INPUT D$
    0x62402642dd60 ---------A   01410  IF D$="YES" THEN 1460
    0x62402642ddc0 ----------   01420  PRINT
    0x62402642df10 ----------   01430  PRINT "I'M SORRY YOU DON'T LIKE IT THAT WAY."
    0x62402642dfa0 ---------A   01440  GOTO 1480
    0x62402642dff0 ----------   01450  PRINT
    0x62402642e170 ---------A   01460  PRINT "I KNEW YOU'D AGREE!!"
    0x62402642e1d0 ----------   01470  PRINT
    0x62402642e550 ---------A   01480  PRINT "I REALLY ENJOYED MEETING YOU ";A$;"."
    0x62402642e6b0 ---------A   01490  PRINT "HAVE A NICE DAY!"
    0x62402642e710 ---------A   01500  END
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
 *  Symbol Table Listing for 'basic/name.bas'
 *
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$              Array    String          {0,39} 
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
    T$                       String      
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
 *  Listing of basic/name.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6240264216d0 ---------A   01000  PRINT TAB(34);"NAME"
    0x624026421670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6240264222d0 ---------A   01020  PRINT
    0x624026422910 ---------A   01030  PRINT
    0x6240264122b0 ---------A   01040  PRINT
    0x624026423ed0 ---------A   01050  DIM B$(40)
    0x624026422040 ---------A   01060  PRINT "HELLO."
    0x6240264220a0 ---------A   01070  PRINT "MY NAME IS CREATIVE COMPUTER."
    0x624026422500 ---------A   01080  PRINT "WHAT'S YOUR NAME (FIRST AND LAST";
    0x624026421ca0 ---------A   01090  INPUT A$
    0x624026424050 ---------A   01100  L=LEN(A$)
    0x624026422880 ---------A   01110  PRINT
    0x624026429900 ---------A   01120  PRINT "THANK YOU, ";
    0x624026429ca0 ---------A   01130  FOR I=1 TO L
    0x62402642a220 ---------A   01140  B$(I)=MID$(A$,I,1)
    0x62402642a350 ---------A   01150  NEXT I
    0x62402642a720 ---------A   01160  FOR I=L TO 1 STEP -1
    0x62402642a960 ---------A   01170  PRINT B$(I);
    0x62402642aaa0 ---------A   01180  NEXT I
    0x62402642ac20 ---------A   01190  PRINT "."
    0x62402642ad80 ---------A   01200  PRINT "OOPS!  I GUESS I GOT IT BACKWARDS.  A SMART"
    0x62402642aee0 ---------A   01210  PRINT "COMPUTER LIKE ME SHOULDN'T MAKE A MISTAKE LIKE THAT!"
    0x62402642af90 ---------A   01220  PRINT
    0x62402642b130 ---------A   01230  PRINT "BUT I JUST NOTICED YOUR LETTERS ARE OUT OF ORDER."
    0x62402642b270 ---------A   01240  PRINT "LET'S PUT THEM IN ORDER LIKE THIS: ";
    0x62402642b610 ---------A   01250  FOR J=2 TO L
    0x62402642b930 ---------A   01260  I=J-1
    0x62402642bce0 ---------A   01270  T$=B$(J)
    0x62402642c050 ---------A T 01280  IF T$>B$(I) THEN 1330
    0x62402642c530 ---------A   01290  B$(I+1)=B$(I)
    0x62402642c840 ---------A   01300  I=I-1
    0x62402642ca90 ---------A   01310  IF I>0 THEN 1280
    0x62402642ce90 ---------A   01320  B$(I+1)=T$
    0x62402642cfc0 ---------A T 01330  NEXT J
    0x62402642d2d0 ---------A   01340  FOR I=1 TO L
    0x62402642d510 ---------A   01350  PRINT B$(I);
    0x62402642d650 ---------A   01360  NEXT I
    0x62402642d6a0 ---------A   01370  PRINT
    0x62402642d740 ---------A   01380  PRINT
    0x62402642d880 ---------A   01390  PRINT "DON'T YOU LIKE THAT BETTER";
    0x62402642dab0 ---------A   01400  INPUT D$
    0x62402642dd60 ---------A   01410  IF D$="YES" THEN 1450
    0x62402642ddc0 ---------A   01420  PRINT
    0x62402642df10 ---------A   01430  PRINT "I'M SORRY YOU DON'T LIKE IT THAT WAY."
    0x62402642dfa0 ---------A   01440  GOTO 1470
    0x62402642e170 ---------A T 01450  PRINT "I KNEW YOU'D AGREE!!"
    0x62402642e1d0 ---------A   01460  PRINT
    0x62402642e550 ---------A T 01470  PRINT "I REALLY ENJOYED MEETING YOU ";A$;"."
    0x62402642e6b0 ---------A   01480  PRINT "HAVE A NICE DAY!"
    0x62402642e710 ---------A   01490  END
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
char*  B_str_arr[40];                             // Basic: B$ 
char*  D_str;                                     // Basic: D$ 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    L_int;                                     // Basic: L 
char*  T_str;                                     // Basic: T$ 
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
    // 01000 PRINT TAB(34);"NAME"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,34);strcat(buf,"NAME");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 DIM B$(40)
    // 01060 PRINT "HELLO."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HELLO.");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "MY NAME IS CREATIVE COMPUTER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MY NAME IS CREATIVE COMPUTER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "WHAT'S YOUR NAME (FIRST AND LAST";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT'S YOUR NAME (FIRST AND LAST");fputs(buf,fh); };
    // 01090 INPUT A$
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
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01090
    // 01100 L=LEN(A$)
    L_int = LEN(A_str);
    // 01110 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "THANK YOU, ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THANK YOU, ");fputs(buf,fh); };
    // 01130 FOR I=1 TO L
    for(I_int=1;I_int<=L_int;I_int++){
        // 01140 B$(I)=MID$(A$,I,1)
        GLBpStr=MID$(A_str,I_int,1);
        B_str_arr[I_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01150 NEXT I
        int dummy_1150=0; // Ignore this line.
    }; // End-For(I_int)
    // 01160 FOR I=L TO 1 STEP -1
    for(I_int=L_int;I_int>=1;I_int+=-1){
        // 01170 PRINT B$(I);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,B_str_arr[I_int]);fputs(buf,fh); };
        // 01180 NEXT I
        int dummy_1180=0; // Ignore this line.
    }; // End-For(I_int)
    // 01190 PRINT "."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT "OOPS!  I GUESS I GOT IT BACKWARDS.  A SMART"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OOPS!  I GUESS I GOT IT BACKWARDS.  A SMART");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT "COMPUTER LIKE ME SHOULDN'T MAKE A MISTAKE LIKE THAT!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTER LIKE ME SHOULDN'T MAKE A MISTAKE LIKE THAT!");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT "BUT I JUST NOTICED YOUR LETTERS ARE OUT OF ORDER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BUT I JUST NOTICED YOUR LETTERS ARE OUT OF ORDER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "LET'S PUT THEM IN ORDER LIKE THIS: ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LET'S PUT THEM IN ORDER LIKE THIS: ");fputs(buf,fh); };
    // 01250 FOR J=2 TO L
    for(J_int=2;J_int<=L_int;J_int++){
        // 01260 I=J-1
        I_int = J_int-1;
        // 01270 T$=B$(J)
        GLBpStr=B_str_arr[J_int];
        T_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01280:
        // 01280 IF T$>B$(I) THEN 1330
        if(strcmp(T_str,B_str_arr[I_int])>0)goto Lbl_01330;
        // 01290 B$(I+1)=B$(I)
        GLBpStr=B_str_arr[I_int];
        B_str_arr[I_int+1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01300 I=I-1
        I_int = I_int-1;
        // 01310 IF I>0 THEN 1280
        if(I_int>0)goto Lbl_01280;
        // 01320 B$(I+1)=T$
        GLBpStr=T_str;
        B_str_arr[I_int+1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01330:
        // 01330 NEXT J
        int dummy_1330=0; // Ignore this line.
    }; // End-For(J_int)
    // 01340 FOR I=1 TO L
    for(I_int=1;I_int<=L_int;I_int++){
        // 01350 PRINT B$(I);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,B_str_arr[I_int]);fputs(buf,fh); };
        // 01360 NEXT I
        int dummy_1360=0; // Ignore this line.
    }; // End-For(I_int)
    // 01370 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01380 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01390 PRINT "DON'T YOU LIKE THAT BETTER";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DON'T YOU LIKE THAT BETTER");fputs(buf,fh); };
    // 01400 INPUT D$
    // Start of Basic INPUT statement 01400
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&D_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01400
    // 01410 IF D$="YES" THEN 1450
    if(strcmp(D_str,"YES")==0)goto Lbl_01450;
    // 01420 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01430 PRINT "I'M SORRY YOU DON'T LIKE IT THAT WAY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I'M SORRY YOU DON'T LIKE IT THAT WAY.");strcat(buf,"\n");fputs(buf,fh); };
    // 01440 GOTO 1470
    goto Lbl_01470;

  Lbl_01450:
    // 01450 PRINT "I KNEW YOU'D AGREE!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I KNEW YOU'D AGREE!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01460 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01470:
    // 01470 PRINT "I REALLY ENJOYED MEETING YOU ";A$;"."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I REALLY ENJOYED MEETING YOU "); strcat(buf,A_str);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 01480 PRINT "HAVE A NICE DAY!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAVE A NICE DAY!");strcat(buf,"\n");fputs(buf,fh); };
    // 01490 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
