/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/rusrou.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6381a8acf6d0 ---------A   00001  PRINT TAB(28);"RUSSIAN ROULETTE"
    0x6381a8acf670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6381a8ad1aa0 ---------A   00003  PRINT:PRINT:PRINT
    0x6381a8ad0040 ---------A   00005  PRINT "THIS IS A GAME OF >>>>>>>>>>RUSSIAN ROULETTE."
    0x6381a8ad0480 ---------A T 00010  PRINT:PRINT "HERE IS A REVOLVER."
    0x6381a8ad16a0 ---------A T 00020  PRINT "TYPE '1' TO SPIN CHAMBER AND PULL TRIGGER."
    0x6381a8acfbe0 ---------A   00022  PRINT "TYPE '2' TO GIVE UP."
    0x6381a8ad2160 ---------A   00023  PRINT "GO";
    0x6381a8ad1f30 ---------A   00025  N=0
    0x6381a8ad7980 ---------A T 00030  INPUT I
    0x6381a8ad7ba0 ---------A   00031  IF I<>2 THEN 35
    0x6381a8ad7cc0 ---------A   00032  PRINT "     CHICKEN!!!!!"
    0x6381a8ad0b80 ---------A   00033  GOTO 72
    0x6381a8ad1e70 ---------A T 00035  N=N+1
    0x6381a8ad8220 ---------A   00040  IF RND(1)>.833333 THEN 70
    0x6381a8ad8440 ---------A   00045  IF N>10 THEN 80
    0x6381a8ad85a0 ---------A   00050  PRINT "- CLICK -"
    0x6381a8ad1ff0 ---------A   00060  PRINT: GOTO 30
    0x6381a8ad87a0 ---------A T 00070  PRINT "     BANG!!!!!   YOU'RE DEAD!"
    0x6381a8ad8920 ---------A   00071  PRINT "CONDOLENCES WILL BE SENT TO YOUR RELATIVES."
    0x6381a8ad8a40 ---------A T 00072  PRINT:PRINT:PRINT
    0x6381a8ad20b0 ---------A   00075  PRINT "...NEXT VICTIM...":GOTO 20
    0x6381a8ad8d20 ---------A T 00080  PRINT "YOU WIN!!!!!"
    0x6381a8ad8e60 ---------A   00085  PRINT "LET SOMEONE ELSE BLOW HIS BRAINS OUT."
    0x6381a8ad8ee0 ---------A   00090  GOTO 10
    0x6381a8ad8f30 ---------A   00099  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00010      00090T
     00020      00075T
     00030      00060T
     00035      00031T
     00070      00040T
     00072      00033T
     00080      00045T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x6381a8acf6d0 (00001)   0x6381a8acf6d0 (00001)   0x6381a8ad8f30 (00099)   0x6381a8ad8f30 (00099)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/rusrou.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6381a8acf6d0 ---------A   00001  PRINT TAB(28);"RUSSIAN ROULETTE"
    0x6381a8acf670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6381a8ac02b0 ----------   00003  PRINT
    0x6381a8acf9e0 ----------        a PRINT
    0x6381a8ad1aa0 ---------A        b PRINT
    0x6381a8ad0040 ---------A   00005  PRINT "THIS IS A GAME OF >>>>>>>>>>RUSSIAN ROULETTE."
    0x6381a8ad00a0 ---------- T 00010  PRINT
    0x6381a8ad0480 ---------A T      a PRINT "HERE IS A REVOLVER."
    0x6381a8ad16a0 ---------A T 00020  PRINT "TYPE '1' TO SPIN CHAMBER AND PULL TRIGGER."
    0x6381a8acfbe0 ---------A   00022  PRINT "TYPE '2' TO GIVE UP."
    0x6381a8ad2160 ---------A   00023  PRINT "GO";
    0x6381a8ad1f30 ---------A   00025  N=0
    0x6381a8ad7980 ---------A T 00030  INPUT I
    0x6381a8ad7ba0 ---------A   00031  IF I<>2 THEN 35
    0x6381a8ad7cc0 ---------A   00032  PRINT "     CHICKEN!!!!!"
    0x6381a8ad0b80 ---------A   00033  GOTO 72
    0x6381a8ad1e70 ---------A T 00035  N=N+1
    0x6381a8ad8220 ---------A   00040  IF RND(1)>.833333 THEN 70
    0x6381a8ad8440 ---------A   00045  IF N>10 THEN 80
    0x6381a8ad85a0 ---------A   00050  PRINT "- CLICK -"
    0x6381a8ad8600 ----------   00060  PRINT
    0x6381a8ad1ff0 ---------A        a GOTO 30
    0x6381a8ad87a0 ---------A T 00070  PRINT "     BANG!!!!!   YOU'RE DEAD!"
    0x6381a8ad8920 ---------A   00071  PRINT "CONDOLENCES WILL BE SENT TO YOUR RELATIVES."
    0x6381a8ad8980 ---------- T 00072  PRINT
    0x6381a8ad89e0 ---------- T      a PRINT
    0x6381a8ad8a40 ---------A T      b PRINT
    0x6381a8ad8b80 ----------   00075  PRINT "...NEXT VICTIM..."
    0x6381a8ad20b0 ---------A        a GOTO 20
    0x6381a8ad8d20 ---------A T 00080  PRINT "YOU WIN!!!!!"
    0x6381a8ad8e60 ---------A   00085  PRINT "LET SOMEONE ELSE BLOW HIS BRAINS OUT."
    0x6381a8ad8ee0 ---------A   00090  GOTO 10
    0x6381a8ad8f30 ---------A   00099  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/rusrou.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6381a8acf6d0 ---------A   01000  PRINT TAB(28);"RUSSIAN ROULETTE"
    0x6381a8acf670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6381a8ac02b0 ----------   01020  PRINT
    0x6381a8acf9e0 ----------   01030  PRINT
    0x6381a8ad1aa0 ---------A   01040  PRINT
    0x6381a8ad0040 ---------A   01050  PRINT "THIS IS A GAME OF >>>>>>>>>>RUSSIAN ROULETTE."
    0x6381a8ad00a0 ----------   01060  PRINT
    0x6381a8ad0480 ---------A   01070  PRINT "HERE IS A REVOLVER."
    0x6381a8ad16a0 ---------A   01080  PRINT "TYPE '1' TO SPIN CHAMBER AND PULL TRIGGER."
    0x6381a8acfbe0 ---------A   01090  PRINT "TYPE '2' TO GIVE UP."
    0x6381a8ad2160 ---------A   01100  PRINT "GO";
    0x6381a8ad1f30 ---------A   01110  N=0
    0x6381a8ad7980 ---------A   01120  INPUT I
    0x6381a8ad7ba0 ---------A   01130  IF I<>2 THEN 1160
    0x6381a8ad7cc0 ---------A   01140  PRINT "     CHICKEN!!!!!"
    0x6381a8ad0b80 ---------A   01150  GOTO 1260
    0x6381a8ad1e70 ---------A   01160  N=N+1
    0x6381a8ad8220 ---------A   01170  IF RND(1)>.833333 THEN 1220
    0x6381a8ad8440 ---------A   01180  IF N>10 THEN 1290
    0x6381a8ad85a0 ---------A   01190  PRINT "- CLICK -"
    0x6381a8ad8600 ----------   01200  PRINT
    0x6381a8ad1ff0 ---------A   01210  GOTO 1120
    0x6381a8ad87a0 ---------A   01220  PRINT "     BANG!!!!!   YOU'RE DEAD!"
    0x6381a8ad8920 ---------A   01230  PRINT "CONDOLENCES WILL BE SENT TO YOUR RELATIVES."
    0x6381a8ad8980 ----------   01240  PRINT
    0x6381a8ad89e0 ----------   01250  PRINT
    0x6381a8ad8a40 ---------A   01260  PRINT
    0x6381a8ad8b80 ----------   01270  PRINT "...NEXT VICTIM..."
    0x6381a8ad20b0 ---------A   01280  GOTO 1080
    0x6381a8ad8d20 ---------A   01290  PRINT "YOU WIN!!!!!"
    0x6381a8ad8e60 ---------A   01300  PRINT "LET SOMEONE ELSE BLOW HIS BRAINS OUT."
    0x6381a8ad8ee0 ---------A   01310  GOTO 1070
    0x6381a8ad8f30 ---------A   01320  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01330 - 10000    8680 

 */



/*
 *  Symbol Table Listing for 'basic/rusrou.bas'
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
 *  Listing of basic/rusrou.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6381a8acf6d0 ---------A   01000  PRINT TAB(28);"RUSSIAN ROULETTE"
    0x6381a8acf670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6381a8ac02b0 ---------A   01020  PRINT
    0x6381a8acf9e0 ---------A   01030  PRINT
    0x6381a8ad1aa0 ---------A   01040  PRINT
    0x6381a8ad0040 ---------A   01050  PRINT "THIS IS A GAME OF >>>>>>>>>>RUSSIAN ROULETTE."
    0x6381a8ad00a0 ---------A   01060  PRINT
    0x6381a8ad0480 ---------A T 01070  PRINT "HERE IS A REVOLVER."
    0x6381a8ad16a0 ---------A T 01080  PRINT "TYPE '1' TO SPIN CHAMBER AND PULL TRIGGER."
    0x6381a8acfbe0 ---------A   01090  PRINT "TYPE '2' TO GIVE UP."
    0x6381a8ad2160 ---------A   01100  PRINT "GO";
    0x6381a8ad1f30 ---------A   01110  N=0
    0x6381a8ad7980 ---------A T 01120  INPUT I
    0x6381a8ad7ba0 ---------A   01130  IF I<>2 THEN 1160
    0x6381a8ad7cc0 ---------A   01140  PRINT "     CHICKEN!!!!!"
    0x6381a8ad0b80 ---------A   01150  GOTO 1260
    0x6381a8ad1e70 ---------A T 01160  N=N+1
    0x6381a8ad8220 ---------A   01170  IF RND(1)>.833333 THEN 1220
    0x6381a8ad8440 ---------A   01180  IF N>10 THEN 1290
    0x6381a8ad85a0 ---------A   01190  PRINT "- CLICK -"
    0x6381a8ad8600 ---------A   01200  PRINT
    0x6381a8ad1ff0 ---------A   01210  GOTO 1120
    0x6381a8ad87a0 ---------A T 01220  PRINT "     BANG!!!!!   YOU'RE DEAD!"
    0x6381a8ad8920 ---------A   01230  PRINT "CONDOLENCES WILL BE SENT TO YOUR RELATIVES."
    0x6381a8ad8980 ---------A   01240  PRINT
    0x6381a8ad89e0 ---------A   01250  PRINT
    0x6381a8ad8a40 ---------A T 01260  PRINT
    0x6381a8ad8b80 ---------A   01270  PRINT "...NEXT VICTIM..."
    0x6381a8ad20b0 ---------A   01280  GOTO 1080
    0x6381a8ad8d20 ---------A T 01290  PRINT "YOU WIN!!!!!"
    0x6381a8ad8e60 ---------A   01300  PRINT "LET SOMEONE ELSE BLOW HIS BRAINS OUT."
    0x6381a8ad8ee0 ---------A   01310  GOTO 1070
    0x6381a8ad8f30 ---------A   01320  END
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
int    I_int;                                     // Basic: I 
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
    // 01000 PRINT TAB(28);"RUSSIAN ROULETTE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,28);strcat(buf,"RUSSIAN ROULETTE");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "THIS IS A GAME OF >>>>>>>>>>RUSSIAN ROULETTE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS A GAME OF >>>>>>>>>>RUSSIAN ROULETTE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01070:
    // 01070 PRINT "HERE IS A REVOLVER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HERE IS A REVOLVER.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01080:
    // 01080 PRINT "TYPE '1' TO SPIN CHAMBER AND PULL TRIGGER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TYPE '1' TO SPIN CHAMBER AND PULL TRIGGER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "TYPE '2' TO GIVE UP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TYPE '2' TO GIVE UP.");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "GO";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GO");fputs(buf,fh); };
    // 01110 N=0
    N_int = 0;

  Lbl_01120:
    // 01120 INPUT I
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
                (err += b2c_strtoi(&I_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01120
    // 01130 IF I<>2 THEN 1160
    if(I_int!=2)goto Lbl_01160;
    // 01140 PRINT "     CHICKEN!!!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     CHICKEN!!!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 GOTO 1260
    goto Lbl_01260;

  Lbl_01160:
    // 01160 N=N+1
    N_int = N_int+1;
    // 01170 IF RND(1)>.833333 THEN 1220
    if(RND(1)>0.83)goto Lbl_01220;
    // 01180 IF N>10 THEN 1290
    if(N_int>10)goto Lbl_01290;
    // 01190 PRINT "- CLICK -"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"- CLICK -");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01210 GOTO 1120
    goto Lbl_01120;

  Lbl_01220:
    // 01220 PRINT "     BANG!!!!!   YOU'RE DEAD!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     BANG!!!!!   YOU'RE DEAD!");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT "CONDOLENCES WILL BE SENT TO YOUR RELATIVES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONDOLENCES WILL BE SENT TO YOUR RELATIVES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01260:
    // 01260 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT "...NEXT VICTIM..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"...NEXT VICTIM...");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 GOTO 1080
    goto Lbl_01080;

  Lbl_01290:
    // 01290 PRINT "YOU WIN!!!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU WIN!!!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 PRINT "LET SOMEONE ELSE BLOW HIS BRAINS OUT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"LET SOMEONE ELSE BLOW HIS BRAINS OUT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01310 GOTO 1070
    goto Lbl_01070;
    // 01320 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
