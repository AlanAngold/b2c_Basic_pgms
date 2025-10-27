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
    0x647e5e420b80 ---------A   00010 PRINT TAB(33);"KINEMA"
    0x647e5e421f30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x647e5e4220b0 ---------A   00030 PRINT: PRINT: PRINT
    0x647e5e4102b0 ---------A T 00100 PRINT
    0x647e5e41f9e0 ---------A   00105 PRINT
    0x647e5e420040 ---------A   00106 Q=0
    0x647e5e4206b0 ---------A   00110 V=5+INT(35*RND(1))
    0x647e5e427920 ---------A   00111 PRINT "A BALL IS THROWN UPWARDS AT";V;"METERS PER SECOND."
    0x647e5e427970 ---------A   00112 PRINT
    0x647e5e41f7f0 ---------A   00115 A=.05*V^2
    0x647e5e427f40 ---------A   00116 PRINT "HOW HIGH WILL IT GO (IN METERS)";
    0x647e5e427fb0 ---------A   00117 GOSUB 500
    0x647e5e4282f0 ---------A   00120 A=V/5
    0x647e5e428480 ---------A   00122 PRINT "HOW LONG UNTIL IT RETURNS (IN SECONDS)";
    0x647e5e4284d0 ---------A   00124 GOSUB 500
    0x647e5e428d70 ---------A   00130 T=1+INT(2*V*RND(1))/10
    0x647e5e4291f0 ---------A   00132 A=V-10*T
    0x647e5e429540 ---------A   00134 PRINT "WHAT WILL ITS VELOCITY BE AFTER";T;"SECONDS";
    0x647e5e4295b0 ---------A   00136 GOSUB 500
    0x647e5e4295f0 ---------A   00140 PRINT
    0x647e5e429860 ---------A   00150 PRINT Q;"RIGHT OUT OF 3.";
    0x647e5e41f6d0 ---------A   00160 IF Q<2 THEN 100
    0x647e5e429bb0 ---------A   00170 PRINT "  NOT BAD."
    0x647e5e429c20 ---------A   00180 GOTO 100
    0x647e5e41f670 ---------B G 00500 INPUT G
    0x647e5e42a340 ---------B   00502 IF ABS((G-A)/A)<.15 THEN 510
    0x647e5e42a4a0 ---------B   00504 PRINT "NOT EVEN CLOSE...."
    0x647e5e42a4f0 ---------B   00506 GOTO 512
    0x647e5e42a630 ---------B T 00510 PRINT "CLOSE ENOUGH."
    0x647e5e42a970 ---------B   00511 Q=Q+1
    0x647e5e42abc0 ---------B T 00512 PRINT "CORRECT ANSWER IS ";A
    0x647e5e42ac30 ---------B   00520 PRINT
    0x647e5e42ac80 ---------B   00530 RETURN
    0x647e5e42aef0 ---------A   00999 END
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
   A) 0x647e5e420b80 (00010)   0x647e5e420b80 (00010)   0x647e5e42aef0 (00999)   0x647e5e42aef0 (00999)   
   B) 0x647e5e41f670 (00500)   0x647e5e41f670 (00500)   0x647e5e42ac80 (00530)   0x647e5e42ac80 (00530)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

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
    0x647e5e420b80 ---------A   01000 PRINT TAB(33);"KINEMA"
    0x647e5e421f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x647e5e4220b0 ---------A   01020 PRINT: PRINT: PRINT
    0x647e5e4102b0 ---------A T 01030 PRINT
    0x647e5e41f9e0 ---------A   01040 PRINT
    0x647e5e420040 ---------A   01050 Q=0
    0x647e5e4206b0 ---------A   01060 V=5+INT(35*RND(1))
    0x647e5e427920 ---------A   01070 PRINT "A BALL IS THROWN UPWARDS AT";V;"METERS PER SECOND."
    0x647e5e427970 ---------A   01080 PRINT
    0x647e5e41f7f0 ---------A   01090 A=.05*V^2
    0x647e5e427f40 ---------A   01100 PRINT "HOW HIGH WILL IT GO (IN METERS)";
    0x647e5e427fb0 ---------A   01110 GOSUB 1250
    0x647e5e4282f0 ---------A   01120 A=V/5
    0x647e5e428480 ---------A   01130 PRINT "HOW LONG UNTIL IT RETURNS (IN SECONDS)";
    0x647e5e4284d0 ---------A   01140 GOSUB 1250
    0x647e5e428d70 ---------A   01150 T=1+INT(2*V*RND(1))/10
    0x647e5e4291f0 ---------A   01160 A=V-10*T
    0x647e5e429540 ---------A   01170 PRINT "WHAT WILL ITS VELOCITY BE AFTER";T;"SECONDS";
    0x647e5e4295b0 ---------A   01180 GOSUB 1250
    0x647e5e4295f0 ---------A   01190 PRINT
    0x647e5e429860 ---------A   01200 PRINT Q;"RIGHT OUT OF 3.";
    0x647e5e41f6d0 ---------A   01210 IF Q<2 THEN 1030
    0x647e5e429bb0 ---------A   01220 PRINT "  NOT BAD."
    0x647e5e429c20 ---------A   01230 GOTO 1030
    0x647e5e42aef0 ---------A   01240 END
    0x647e5e41f670 ---------B G 01250 INPUT G
    0x647e5e42a340 ---------B   01260 IF ABS((G-A)/A)<.15 THEN 1290
    0x647e5e42a4a0 ---------B   01270 PRINT "NOT EVEN CLOSE...."
    0x647e5e42a4f0 ---------B   01280 GOTO 1310
    0x647e5e42a630 ---------B T 01290 PRINT "CLOSE ENOUGH."
    0x647e5e42a970 ---------B   01300 Q=Q+1
    0x647e5e42abc0 ---------B T 01310 PRINT "CORRECT ANSWER IS ";A
    0x647e5e42ac30 ---------B   01320 PRINT
    0x647e5e42cd40 ---------B   01330 GOTO 01340
    0x647e5e42cd80 ---------B T 01340 RETURN
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
void Routine_01250();

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

void Routine_01250(){
    // 01250 INPUT G
    // Start of Basic INPUT statement 01250
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
    }; // End of Basic INPUT statement 01250
    // 01260 IF ABS((G-A)/A)<.15 THEN 1290
    if(ABS((G_int-A_int)/A_int)<0.15)goto Lbl_01290;
    // 01270 PRINT "NOT EVEN CLOSE...."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOT EVEN CLOSE....");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 GOTO 1310
    goto Lbl_01310;

  Lbl_01290:
    // 01290 PRINT "CLOSE ENOUGH."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CLOSE ENOUGH.");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 Q=Q+1
    Q_int = Q_int+1;

  Lbl_01310:
    // 01310 PRINT "CORRECT ANSWER IS ";A
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CORRECT ANSWER IS "); b2c_INT(buf,A_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01320 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01330 GOTO 01340
    goto Lbl_01340;

  Lbl_01340:
    // 01340 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
