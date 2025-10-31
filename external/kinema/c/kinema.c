/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/kinema.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e50752e76d0 ---------A   00010  PRINT TAB(33);"KINEMA"
    0x5e50752e7670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e50752e77f0 ---------A   00030  PRINT: PRINT: PRINT
    0x5e50752e9aa0 ---------A T 00100  PRINT
    0x5e50752e8040 ---------A   00105  PRINT
    0x5e50752e9f30 ---------A   00106  Q=0
    0x5e50752e9ff0 ---------A   00110  V=5+INT(35*RND(1))
    0x5e50752ef960 ---------A   00111  PRINT "A BALL IS THROWN UPWARDS AT";V;"METERS PER SECOND."
    0x5e50752ef9c0 ---------A   00112  PRINT
    0x5e50752e8b80 ---------A   00115  A=.05*V^2
    0x5e50752eff80 ---------A   00116  PRINT "HOW HIGH WILL IT GO (IN METERS)";
    0x5e50752ea0b0 ---------A   00117  GOSUB 500
    0x5e50752f0300 ---------A   00120  A=V/5
    0x5e50752f0490 ---------A   00122  PRINT "HOW LONG UNTIL IT RETURNS (IN SECONDS)";
    0x5e50752f04f0 ---------A   00124  GOSUB 500
    0x5e50752f0da0 ---------A   00130  T=1+INT(2*V*RND(1))/10
    0x5e50752f1220 ---------A   00132  A=V-10*T
    0x5e50752f1570 ---------A   00134  PRINT "WHAT WILL ITS VELOCITY BE AFTER";T;"SECONDS";
    0x5e50752f15f0 ---------A   00136  GOSUB 500
    0x5e50752f1640 ---------A   00140  PRINT
    0x5e50752f18c0 ---------A   00150  PRINT Q;"RIGHT OUT OF 3.";
    0x5e50752f1b20 ---------A   00160  IF Q<2 THEN 100
    0x5e50752f1c80 ---------A   00170  PRINT "  NOT BAD."
    0x5e50752f1d00 ---------A   00180  GOTO 100
    0x5e50752f1ef0 ---------B G 00500  INPUT G
    0x5e50752f2490 ---------B   00502  IF ABS((G-A)/A)<.15 THEN 510
    0x5e50752f25f0 ---------B   00504  PRINT "NOT EVEN CLOSE...."
    0x5e50752f2650 ---------B   00506  GOTO 512
    0x5e50752f27a0 ---------B T 00510  PRINT "CLOSE ENOUGH."
    0x5e50752f2af0 ---------B   00511  Q=Q+1
    0x5e50752f2d40 ---------B T 00512  PRINT "CORRECT ANSWER IS ";A
    0x5e50752f2dc0 ---------B   00520  PRINT
    0x5e50752f2e20 ---------B   00530  RETURN
    0x5e50752f3090 ---------A   00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00100      00160T, 00180T
     00500      00117G, 00124G, 00136G
     00510      00502T
     00512      00506T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5e50752e76d0 (00010)   0x5e50752e76d0 (00010)   0x5e50752f3090 (00999)   0x5e50752f3090 (00999)   
   B) 0x5e50752f1ef0 (00500)   0x5e50752f1ef0 (00500)   0x5e50752f2e20 (00530)   0x5e50752f2e20 (00530)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/kinema.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e50752e76d0 ---------A   00010  PRINT TAB(33);"KINEMA"
    0x5e50752e7670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e50752d82b0 ----------   00030  PRINT
    0x5e50752e79e0 ----------        a PRINT
    0x5e50752e77f0 ---------A        b PRINT
    0x5e50752e9aa0 ---------A T 00100  PRINT
    0x5e50752e8040 ---------A   00105  PRINT
    0x5e50752e9f30 ---------A   00106  Q=0
    0x5e50752e9ff0 ---------A   00110  V=5+INT(35*RND(1))
    0x5e50752ef960 ---------A   00111  PRINT "A BALL IS THROWN UPWARDS AT";V;"METERS PER SECOND."
    0x5e50752ef9c0 ---------A   00112  PRINT
    0x5e50752e8b80 ---------A   00115  A=.05*V^2
    0x5e50752eff80 ---------A   00116  PRINT "HOW HIGH WILL IT GO (IN METERS)";
    0x5e50752ea0b0 ---------A   00117  GOSUB 500
    0x5e50752f0300 ---------A   00120  A=V/5
    0x5e50752f0490 ---------A   00122  PRINT "HOW LONG UNTIL IT RETURNS (IN SECONDS)";
    0x5e50752f04f0 ---------A   00124  GOSUB 500
    0x5e50752f0da0 ---------A   00130  T=1+INT(2*V*RND(1))/10
    0x5e50752f1220 ---------A   00132  A=V-10*T
    0x5e50752f1570 ---------A   00134  PRINT "WHAT WILL ITS VELOCITY BE AFTER";T;"SECONDS";
    0x5e50752f15f0 ---------A   00136  GOSUB 500
    0x5e50752f1640 ---------A   00140  PRINT
    0x5e50752f18c0 ---------A   00150  PRINT Q;"RIGHT OUT OF 3.";
    0x5e50752f1b20 ---------A   00160  IF Q<2 THEN 100
    0x5e50752f1c80 ---------A   00170  PRINT "  NOT BAD."
    0x5e50752f1d00 ---------A   00180  GOTO 100
    0x5e50752f1ef0 ---------B G 00500  INPUT G
    0x5e50752f2490 ---------B   00502  IF ABS((G-A)/A)<.15 THEN 510
    0x5e50752f25f0 ---------B   00504  PRINT "NOT EVEN CLOSE...."
    0x5e50752f2650 ---------B   00506  GOTO 512
    0x5e50752f27a0 ---------B T 00510  PRINT "CLOSE ENOUGH."
    0x5e50752f2af0 ---------B   00511  Q=Q+1
    0x5e50752f2d40 ---------B T 00512  PRINT "CORRECT ANSWER IS ";A
    0x5e50752f2dc0 ---------B   00520  PRINT
    0x5e50752f2e20 ---------B   00530  RETURN
    0x5e50752f3090 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/kinema.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e50752e76d0 ---------A   01000  PRINT TAB(33);"KINEMA"
    0x5e50752e7670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e50752d82b0 ----------   01020  PRINT
    0x5e50752e79e0 ----------   01030  PRINT
    0x5e50752e77f0 ---------A   01040  PRINT
    0x5e50752e9aa0 ---------A   01050  PRINT
    0x5e50752e8040 ---------A   01060  PRINT
    0x5e50752e9f30 ---------A   01070  Q=0
    0x5e50752e9ff0 ---------A   01080  V=5+INT(35*RND(1))
    0x5e50752ef960 ---------A   01090  PRINT "A BALL IS THROWN UPWARDS AT";V;"METERS PER SECOND."
    0x5e50752ef9c0 ---------A   01100  PRINT
    0x5e50752e8b80 ---------A   01110  A=.05*V^2
    0x5e50752eff80 ---------A   01120  PRINT "HOW HIGH WILL IT GO (IN METERS)";
    0x5e50752ea0b0 ---------A   01130  GOSUB 1260
    0x5e50752f0300 ---------A   01140  A=V/5
    0x5e50752f0490 ---------A   01150  PRINT "HOW LONG UNTIL IT RETURNS (IN SECONDS)";
    0x5e50752f04f0 ---------A   01160  GOSUB 1260
    0x5e50752f0da0 ---------A   01170  T=1+INT(2*V*RND(1))/10
    0x5e50752f1220 ---------A   01180  A=V-10*T
    0x5e50752f1570 ---------A   01190  PRINT "WHAT WILL ITS VELOCITY BE AFTER";T;"SECONDS";
    0x5e50752f15f0 ---------A   01200  GOSUB 1260
    0x5e50752f1640 ---------A   01210  PRINT
    0x5e50752f18c0 ---------A   01220  PRINT Q;"RIGHT OUT OF 3.";
    0x5e50752f1b20 ---------A   01230  IF Q<2 THEN 1050
    0x5e50752f1c80 ---------A   01240  PRINT "  NOT BAD."
    0x5e50752f1d00 ---------A   01250  GOTO 1050
    0x5e50752f1ef0 ---------B   01260  INPUT G
    0x5e50752f2490 ---------B   01270  IF ABS((G-A)/A)<.15 THEN 1300
    0x5e50752f25f0 ---------B   01280  PRINT "NOT EVEN CLOSE...."
    0x5e50752f2650 ---------B   01290  GOTO 1320
    0x5e50752f27a0 ---------B   01300  PRINT "CLOSE ENOUGH."
    0x5e50752f2af0 ---------B   01310  Q=Q+1
    0x5e50752f2d40 ---------B   01320  PRINT "CORRECT ANSWER IS ";A
    0x5e50752f2dc0 ---------B   01330  PRINT
    0x5e50752f2e20 ---------B   01340  RETURN
    0x5e50752f3090 ---------A   01350  END
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
 *  Symbol Table Listing for 'basic/kinema.bas'
 *
    A                        Integer     
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
    V                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/kinema.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e50752e76d0 ---------A   01000  PRINT TAB(33);"KINEMA"
    0x5e50752e7670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e50752d82b0 ---------A   01020  PRINT
    0x5e50752e79e0 ---------A   01030  PRINT
    0x5e50752e77f0 ---------A   01040  PRINT
    0x5e50752e9aa0 ---------A T 01050  PRINT
    0x5e50752e8040 ---------A   01060  PRINT
    0x5e50752e9f30 ---------A   01070  Q=0
    0x5e50752e9ff0 ---------A   01080  V=5+INT(35*RND(1))
    0x5e50752ef960 ---------A   01090  PRINT "A BALL IS THROWN UPWARDS AT";V;"METERS PER SECOND."
    0x5e50752ef9c0 ---------A   01100  PRINT
    0x5e50752e8b80 ---------A   01110  A=.05*V^2
    0x5e50752eff80 ---------A   01120  PRINT "HOW HIGH WILL IT GO (IN METERS)";
    0x5e50752ea0b0 ---------A   01130  GOSUB 1270
    0x5e50752f0300 ---------A   01140  A=V/5
    0x5e50752f0490 ---------A   01150  PRINT "HOW LONG UNTIL IT RETURNS (IN SECONDS)";
    0x5e50752f04f0 ---------A   01160  GOSUB 1270
    0x5e50752f0da0 ---------A   01170  T=1+INT(2*V*RND(1))/10
    0x5e50752f1220 ---------A   01180  A=V-10*T
    0x5e50752f1570 ---------A   01190  PRINT "WHAT WILL ITS VELOCITY BE AFTER";T;"SECONDS";
    0x5e50752f15f0 ---------A   01200  GOSUB 1270
    0x5e50752f1640 ---------A   01210  PRINT
    0x5e50752f18c0 ---------A   01220  PRINT Q;"RIGHT OUT OF 3.";
    0x5e50752f1b20 ---------A   01230  IF Q<2 THEN 1050
    0x5e50752f1c80 ---------A   01240  PRINT "  NOT BAD."
    0x5e50752f1d00 ---------A   01250  GOTO 1050
    0x5e50752f3090 ---------A   01260  END
    0x5e50752f1ef0 ---------B G 01270  INPUT G
    0x5e50752f2490 ---------B   01280  IF ABS((G-A)/A)<.15 THEN 1310
    0x5e50752f25f0 ---------B   01290  PRINT "NOT EVEN CLOSE...."
    0x5e50752f2650 ---------B   01300  GOTO 1330
    0x5e50752f27a0 ---------B T 01310  PRINT "CLOSE ENOUGH."
    0x5e50752f2af0 ---------B   01320  Q=Q+1
    0x5e50752f2d40 ---------B T 01330  PRINT "CORRECT ANSWER IS ";A
    0x5e50752f2dc0 ---------B   01340  PRINT
    0x5e50752f3a70 ---------B   01350  GOTO 01360
    0x5e50752f6b40 ---------B T 01360  RETURN
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
int    G_int;                                     // Basic: G 
int    Q_int;                                     // Basic: Q 
int    T_int;                                     // Basic: T 
int    V_int;                                     // Basic: V 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01270();

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

void Routine_01270(){
    // 01270 INPUT G
    // Start of Basic INPUT statement 01270
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&G_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01270
    // 01280 IF ABS((G-A)/A)<.15 THEN 1310
    if(ABS((G_int-A_int)/A_int)<0.15)goto Lbl_01310;
    // 01290 PRINT "NOT EVEN CLOSE...."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOT EVEN CLOSE....");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 GOTO 1330
    goto Lbl_01330;

  Lbl_01310:
    // 01310 PRINT "CLOSE ENOUGH."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CLOSE ENOUGH.");strcat(buf,"\n");fputs(buf,fh); };
    // 01320 Q=Q+1
    Q_int = Q_int+1;

  Lbl_01330:
    // 01330 PRINT "CORRECT ANSWER IS ";A
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CORRECT ANSWER IS "); b2c_INT(buf,A_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01350 GOTO 01360
    goto Lbl_01360;

  Lbl_01360:
    // 01360 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"KINEMA"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"KINEMA");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01050:
    // 01050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 Q=0
    Q_int = 0;
    // 01080 V=5+INT(35*RND(1))
    V_int = 5+INT(35*RND(1));
    // 01090 PRINT "A BALL IS THROWN UPWARDS AT";V;"METERS PER SECOND."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A BALL IS THROWN UPWARDS AT"); b2c_INT(buf,V_int);strcat(buf,"METERS PER SECOND.");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01110 A=.05*V^2
    A_int = 0.05*IPower(V_int,2);
    // 01120 PRINT "HOW HIGH WILL IT GO (IN METERS)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW HIGH WILL IT GO (IN METERS)");fputs(buf,fh); };
    // 01130 GOSUB 1270
    Routine_01270();
    // 01140 A=V/5
    A_int = V_int/5;
    // 01150 PRINT "HOW LONG UNTIL IT RETURNS (IN SECONDS)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW LONG UNTIL IT RETURNS (IN SECONDS)");fputs(buf,fh); };
    // 01160 GOSUB 1270
    Routine_01270();
    // 01170 T=1+INT(2*V*RND(1))/10
    T_int = 1+INT(2*V_int*RND(1))/10;
    // 01180 A=V-10*T
    A_int = V_int-10*T_int;
    // 01190 PRINT "WHAT WILL ITS VELOCITY BE AFTER";T;"SECONDS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT WILL ITS VELOCITY BE AFTER"); b2c_INT(buf,T_int);strcat(buf,"SECONDS");fputs(buf,fh); };
    // 01200 GOSUB 1270
    Routine_01270();
    // 01210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT Q;"RIGHT OUT OF 3.";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,Q_int);strcat(buf,"RIGHT OUT OF 3.");fputs(buf,fh); };
    // 01230 IF Q<2 THEN 1050
    if(Q_int<2)goto Lbl_01050;
    // 01240 PRINT "  NOT BAD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  NOT BAD.");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 GOTO 1050
    goto Lbl_01050;
    // 01260 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
