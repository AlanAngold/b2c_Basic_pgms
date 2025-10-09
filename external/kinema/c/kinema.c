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
    0x5668f20eaac0 ---------A   00010 PRINT TAB(33);"KINEMA"
    0x5668f20ebe70 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5668f20ebff0 ---------A   00030 PRINT: PRINT: PRINT
    0x5668f20da2b0 ---------A T 00100 PRINT
    0x5668f20e9920 ---------A   00105 PRINT
    0x5668f20e9f80 ---------A   00106 Q=0
    0x5668f20ea5f0 ---------A   00110 V=5+INT(35*RND(1))
    0x5668f20f1860 ---------A   00111 PRINT "A BALL IS THROWN UPWARDS AT";V;"METERS PER SECOND."
    0x5668f20f18b0 ---------A   00112 PRINT
    0x5668f20e9730 ---------A   00115 A=.05*V^2
    0x5668f20f1e80 ---------A   00116 PRINT "HOW HIGH WILL IT GO (IN METERS)";
    0x5668f20f1ef0 ---------A   00117 GOSUB 500
    0x5668f20f2230 ---------A   00120 A=V/5
    0x5668f20f23c0 ---------A   00122 PRINT "HOW LONG UNTIL IT RETURNS (IN SECONDS)";
    0x5668f20f2410 ---------A   00124 GOSUB 500
    0x5668f20f2cb0 ---------A   00130 T=1+INT(2*V*RND(1))/10
    0x5668f20f3130 ---------A   00132 A=V-10*T
    0x5668f20f3480 ---------A   00134 PRINT "WHAT WILL ITS VELOCITY BE AFTER";T;"SECONDS";
    0x5668f20f34f0 ---------A   00136 GOSUB 500
    0x5668f20f3530 ---------A   00140 PRINT
    0x5668f20f37a0 ---------A   00150 PRINT Q;"RIGHT OUT OF 3.";
    0x5668f20e9610 ---------A   00160 IF Q<2 THEN 100
    0x5668f20f3af0 ---------A   00170 PRINT "  NOT BAD."
    0x5668f20f3b60 ---------A   00180 GOTO 100
    0x5668f20e95b0 ---------B G 00500 INPUT G
    0x5668f20f4280 ---------B   00502 IF ABS((G-A)/A)<.15 THEN 510
    0x5668f20f43e0 ---------B   00504 PRINT "NOT EVEN CLOSE...."
    0x5668f20f4430 ---------B   00506 GOTO 512
    0x5668f20f4570 ---------B T 00510 PRINT "CLOSE ENOUGH."
    0x5668f20f48b0 ---------B   00511 Q=Q+1
    0x5668f20f4b00 ---------B T 00512 PRINT "CORRECT ANSWER IS ";A
    0x5668f20f4b70 ---------B   00520 PRINT
    0x5668f20f4bc0 ---------B   00530 RETURN
    0x5668f20f4e30 ---------A   00999 END
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
   A) 0x5668f20eaac0 (00010)   0x000000000000 (00000)   0x5668f20f4e30 (00999)   0x5668f20f4e30 (00999)   
   B) 0x5668f20e95b0 (00500)   0x5668f20e95b0 (00500)   0x5668f20f4bc0 (00530)   0x5668f20f4bc0 (00530)   

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
    A                        Float       
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
    G                        Float       
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
    Q                        Float       
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Float       
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    V                        Float       
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
    0x5668f20eaac0 ---------A   01000 PRINT TAB(33);"KINEMA"
    0x5668f20ebe70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5668f20ebff0 ---------A   01020 PRINT: PRINT: PRINT
    0x5668f20da2b0 ---------A T 01030 PRINT
    0x5668f20e9920 ---------A   01040 PRINT
    0x5668f20e9f80 ---------A   01050 Q=0
    0x5668f20ea5f0 ---------A   01060 V=5+INT(35*RND(1))
    0x5668f20f1860 ---------A   01070 PRINT "A BALL IS THROWN UPWARDS AT";V;"METERS PER SECOND."
    0x5668f20f18b0 ---------A   01080 PRINT
    0x5668f20e9730 ---------A   01090 A=.05*V^2
    0x5668f20f1e80 ---------A   01100 PRINT "HOW HIGH WILL IT GO (IN METERS)";
    0x5668f20f1ef0 ---------A   01110 GOSUB 1250
    0x5668f20f2230 ---------A   01120 A=V/5
    0x5668f20f23c0 ---------A   01130 PRINT "HOW LONG UNTIL IT RETURNS (IN SECONDS)";
    0x5668f20f2410 ---------A   01140 GOSUB 1250
    0x5668f20f2cb0 ---------A   01150 T=1+INT(2*V*RND(1))/10
    0x5668f20f3130 ---------A   01160 A=V-10*T
    0x5668f20f3480 ---------A   01170 PRINT "WHAT WILL ITS VELOCITY BE AFTER";T;"SECONDS";
    0x5668f20f34f0 ---------A   01180 GOSUB 1250
    0x5668f20f3530 ---------A   01190 PRINT
    0x5668f20f37a0 ---------A   01200 PRINT Q;"RIGHT OUT OF 3.";
    0x5668f20e9610 ---------A   01210 IF Q<2 THEN 1030
    0x5668f20f3af0 ---------A   01220 PRINT "  NOT BAD."
    0x5668f20f3b60 ---------A   01230 GOTO 1030
    0x5668f20f4e30 ---------A   01240 END
    0x5668f20e95b0 ---------B G 01250 INPUT G
    0x5668f20f4280 ---------B   01260 IF ABS((G-A)/A)<.15 THEN 1290
    0x5668f20f43e0 ---------B   01270 PRINT "NOT EVEN CLOSE...."
    0x5668f20f4430 ---------B   01280 GOTO 1310
    0x5668f20f4570 ---------B T 01290 PRINT "CLOSE ENOUGH."
    0x5668f20f48b0 ---------B   01300 Q=Q+1
    0x5668f20f4b00 ---------B T 01310 PRINT "CORRECT ANSWER IS ";A
    0x5668f20f4b70 ---------B   01320 PRINT
    0x5668f20f6c80 ---------B   01330 GOTO 01340
    0x5668f20f6cc0 ---------B T 01340 RETURN
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
float  A_flt;                                     // Basic: A 
float  G_flt;                                     // Basic: G 
float  Q_flt;                                     // Basic: Q 
float  T_flt;                                     // Basic: T 
float  V_flt;                                     // Basic: V 
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
                (err += b2c_strtof(&G_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01250
    // 01260 IF ABS((G-A)/A)<.15 THEN 1290
    if(ABS((G_flt-A_flt)/A_flt)<0.15)goto Lbl_01290;
    // 01270 PRINT "NOT EVEN CLOSE...."
    b2c_printf("Not even close....\n");
    // 01280 GOTO 1310
    goto Lbl_01310;

  Lbl_01290:
    // 01290 PRINT "CLOSE ENOUGH."
    b2c_printf("Close enough.\n");
    // 01300 Q=Q+1
    Q_flt = Q_flt+1;

  Lbl_01310:
    // 01310 PRINT "CORRECT ANSWER IS ";A
    b2c_printf("Correct answer is  %.2f \n",A_flt);
    // 01320 PRINT
    b2c_printf("\n");
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
