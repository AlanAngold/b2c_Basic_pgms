/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/train.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x64df24c1e6d0 ---------A   00001  PRINT TAB(33);"TRAIN"
    0x64df24c1e670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x64df24c20580 ---------A   00003  PRINT: PRINT: PRINT
    0x64df24c20a40 ---------A   00004  PRINT "TIME - SPEED DISTANCE EXERCISE": PRINT
    0x64df24c1fb80 ---------A T 00010  C=INT(25*RND(1))+40
    0x64df24c20e10 ---------A   00015  D=INT(15*RND(1))+5
    0x64df24c21050 ---------A   00020  T=INT(19*RND(1))+20
    0x64df24c27370 ---------A   00025  PRINT " A CAR TRAVELING";C;"MPH CAN MAKE A CERTAIN TRIP IN"
    0x64df24c277d0 ---------A   00030  PRINT D;"HOURS LESS THAN A TRAIN TRAVELING AT";T;"MPH."
    0x64df24c27930 ---------A   00035  PRINT "HOW LONG DOES THE TRIP TAKE BY CAR";
    0x64df24c27b50 ---------A   00040  INPUT A
    0x64df24c20ed0 ---------A   00045  V=D*T/(C-T)
    0x64df24c28ab0 ---------A   00050  E=INT(ABS((V-A)*100/A)+.5)
    0x64df24c28d20 ---------A   00055  IF E>5 THEN 70
    0x64df24c29080 ---------A   00060  PRINT "GOOD! ANSWER WITHIN";E;"PERCENT."
    0x64df24c29120 ---------A   00065  GOTO 80
    0x64df24c29430 ---------A T 00070  PRINT "SORRY.  YOU WERE OFF BY";E;"PERCENT."
    0x64df24c29790 ---------A T 00080  PRINT "CORRECT ANSWER IS";V;"HOURS."
    0x64df24c29820 ---------A   00090  PRINT
    0x64df24c299b0 ---------A   00095  PRINT "ANOTHER PROBLEM (YES OR NO)";
    0x64df24c29bd0 ---------A   00100  INPUT A$
    0x64df24c29c50 ---------A   00105  PRINT
    0x64df24c29ed0 ---------A   00110  IF A$="YES" THEN 10
    0x64df24c29f30 ---------A   00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00010      00110T
     00070      00055T
     00080      00065T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x64df24c1e6d0 (00001)   0x64df24c1e6d0 (00001)   0x64df24c29f30 (00999)   0x64df24c29f30 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/train.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x64df24c1e6d0 ---------A   00001  PRINT TAB(33);"TRAIN"
    0x64df24c1e670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x64df24c1f2d0 ----------   00003  PRINT
    0x64df24c1f910 ----------        a PRINT
    0x64df24c20580 ---------A        b PRINT
    0x64df24c201b0 ----------   00004  PRINT "TIME - SPEED DISTANCE EXERCISE"
    0x64df24c20a40 ---------A        a PRINT
    0x64df24c1fb80 ---------A T 00010  C=INT(25*RND(1))+40
    0x64df24c20e10 ---------A   00015  D=INT(15*RND(1))+5
    0x64df24c21050 ---------A   00020  T=INT(19*RND(1))+20
    0x64df24c27370 ---------A   00025  PRINT " A CAR TRAVELING";C;"MPH CAN MAKE A CERTAIN TRIP IN"
    0x64df24c277d0 ---------A   00030  PRINT D;"HOURS LESS THAN A TRAIN TRAVELING AT";T;"MPH."
    0x64df24c27930 ---------A   00035  PRINT "HOW LONG DOES THE TRIP TAKE BY CAR";
    0x64df24c27b50 ---------A   00040  INPUT A
    0x64df24c20ed0 ---------A   00045  V=D*T/(C-T)
    0x64df24c28ab0 ---------A   00050  E=INT(ABS((V-A)*100/A)+.5)
    0x64df24c28d20 ---------A   00055  IF E>5 THEN 70
    0x64df24c29080 ---------A   00060  PRINT "GOOD! ANSWER WITHIN";E;"PERCENT."
    0x64df24c29120 ---------A   00065  GOTO 80
    0x64df24c29430 ---------A T 00070  PRINT "SORRY.  YOU WERE OFF BY";E;"PERCENT."
    0x64df24c29790 ---------A T 00080  PRINT "CORRECT ANSWER IS";V;"HOURS."
    0x64df24c29820 ---------A   00090  PRINT
    0x64df24c299b0 ---------A   00095  PRINT "ANOTHER PROBLEM (YES OR NO)";
    0x64df24c29bd0 ---------A   00100  INPUT A$
    0x64df24c29c50 ---------A   00105  PRINT
    0x64df24c29ed0 ---------A   00110  IF A$="YES" THEN 10
    0x64df24c29f30 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/train.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x64df24c1e6d0 ---------A   01000  PRINT TAB(33);"TRAIN"
    0x64df24c1e670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x64df24c1f2d0 ----------   01020  PRINT
    0x64df24c1f910 ----------   01030  PRINT
    0x64df24c20580 ---------A   01040  PRINT
    0x64df24c201b0 ----------   01050  PRINT "TIME - SPEED DISTANCE EXERCISE"
    0x64df24c20a40 ---------A   01060  PRINT
    0x64df24c1fb80 ---------A   01070  C=INT(25*RND(1))+40
    0x64df24c20e10 ---------A   01080  D=INT(1080*RND(1))+5
    0x64df24c21050 ---------A   01090  T=INT(19*RND(1))+1090
    0x64df24c27370 ---------A   01100  PRINT " A CAR TRAVELING";C;"MPH CAN MAKE A CERTAIN TRIP IN"
    0x64df24c277d0 ---------A   01110  PRINT D;"HOURS LESS THAN A TRAIN TRAVELING AT";T;"MPH."
    0x64df24c27930 ---------A   01120  PRINT "HOW LONG DOES THE TRIP TAKE BY CAR";
    0x64df24c27b50 ---------A   01130  INPUT A
    0x64df24c20ed0 ---------A   01140  V=D*T/(C-T)
    0x64df24c28ab0 ---------A   01150  E=INT(ABS((V-A)*100/A)+.5)
    0x64df24c28d20 ---------A   01160  IF E>5 THEN 1190
    0x64df24c29080 ---------A   01170  PRINT "GOOD! ANSWER WITHIN";E;"PERCENT."
    0x64df24c29120 ---------A   01180  GOTO 1200
    0x64df24c29430 ---------A   01190  PRINT "SORRY.  YOU WERE OFF BY";E;"PERCENT."
    0x64df24c29790 ---------A   01200  PRINT "CORRECT ANSWER IS";V;"HOURS."
    0x64df24c29820 ---------A   01210  PRINT
    0x64df24c299b0 ---------A   01220  PRINT "ANOTHER PROBLEM (YES OR NO)";
    0x64df24c29bd0 ---------A   01230  INPUT A$
    0x64df24c29c50 ---------A   01240  PRINT
    0x64df24c29ed0 ---------A   01250  IF A$="YES" THEN 1070
    0x64df24c29f30 ---------A   01260  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01270 - 10000    8740 

 */



/*
 *  Symbol Table Listing for 'basic/train.bas'
 *
    A                        Integer     
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
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
    E                        Integer     
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
 *  Listing of basic/train.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x64df24c1e6d0 ---------A   01000  PRINT TAB(33);"TRAIN"
    0x64df24c1e670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x64df24c1f2d0 ---------A   01020  PRINT
    0x64df24c1f910 ---------A   01030  PRINT
    0x64df24c20580 ---------A   01040  PRINT
    0x64df24c201b0 ---------A   01050  PRINT "TIME - SPEED DISTANCE EXERCISE"
    0x64df24c20a40 ---------A   01060  PRINT
    0x64df24c1fb80 ---------A T 01070  C=INT(25*RND(1))+40
    0x64df24c20e10 ---------A   01080  D=INT(1080*RND(1))+5
    0x64df24c21050 ---------A   01090  T=INT(19*RND(1))+1090
    0x64df24c27370 ---------A   01100  PRINT " A CAR TRAVELING";C;"MPH CAN MAKE A CERTAIN TRIP IN"
    0x64df24c277d0 ---------A   01110  PRINT D;"HOURS LESS THAN A TRAIN TRAVELING AT";T;"MPH."
    0x64df24c27930 ---------A   01120  PRINT "HOW LONG DOES THE TRIP TAKE BY CAR";
    0x64df24c27b50 ---------A   01130  INPUT A
    0x64df24c20ed0 ---------A   01140  V=D*T/(C-T)
    0x64df24c28ab0 ---------A   01150  E=INT(ABS((V-A)*100/A)+.5)
    0x64df24c28d20 ---------A   01160  IF E>5 THEN 1190
    0x64df24c29080 ---------A   01170  PRINT "GOOD! ANSWER WITHIN";E;"PERCENT."
    0x64df24c29120 ---------A   01180  GOTO 1200
    0x64df24c29430 ---------A T 01190  PRINT "SORRY.  YOU WERE OFF BY";E;"PERCENT."
    0x64df24c29790 ---------A T 01200  PRINT "CORRECT ANSWER IS";V;"HOURS."
    0x64df24c29820 ---------A   01210  PRINT
    0x64df24c299b0 ---------A   01220  PRINT "ANOTHER PROBLEM (YES OR NO)";
    0x64df24c29bd0 ---------A   01230  INPUT A$
    0x64df24c29c50 ---------A   01240  PRINT
    0x64df24c29ed0 ---------A   01250  IF A$="YES" THEN 1070
    0x64df24c29f30 ---------A   01260  END
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
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    T_int;                                     // Basic: T 
int    V_int;                                     // Basic: V 
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
    // 01000 PRINT TAB(33);"TRAIN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"TRAIN");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "TIME - SPEED DISTANCE EXERCISE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TIME - SPEED DISTANCE EXERCISE");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01070:
    // 01070 C=INT(25*RND(1))+40
    C_int = INT(25*RND(1))+40;
    // 01080 D=INT(1080*RND(1))+5
    D_int = INT(15*RND(1))+5;
    // 01090 T=INT(19*RND(1))+1090
    T_int = INT(19*RND(1))+20;
    // 01100 PRINT " A CAR TRAVELING";C;"MPH CAN MAKE A CERTAIN TRIP IN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," A CAR TRAVELING"); b2c_INT(buf,C_int);strcat(buf,"MPH CAN MAKE A CERTAIN TRIP IN");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT D;"HOURS LESS THAN A TRAIN TRAVELING AT";T;"MPH."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,D_int);strcat(buf,"HOURS LESS THAN A TRAIN TRAVELING AT"); b2c_INT(buf,T_int);strcat(buf,"MPH.");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "HOW LONG DOES THE TRIP TAKE BY CAR";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW LONG DOES THE TRIP TAKE BY CAR");fputs(buf,fh); };
    // 01130 INPUT A
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
                (err += b2c_strtoi(&A_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01130
    // 01140 V=D*T/(C-T)
    V_int = D_int*T_int/(C_int-T_int);
    // 01150 E=INT(ABS((V-A)*100/A)+.5)
    E_int = INT(ABS((V_int-A_int)*100/A_int)+0.5);
    // 01160 IF E>5 THEN 1190
    if(E_int>5)goto Lbl_01190;
    // 01170 PRINT "GOOD! ANSWER WITHIN";E;"PERCENT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD! ANSWER WITHIN"); b2c_INT(buf,E_int);strcat(buf,"PERCENT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 GOTO 1200
    goto Lbl_01200;

  Lbl_01190:
    // 01190 PRINT "SORRY.  YOU WERE OFF BY";E;"PERCENT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY.  YOU WERE OFF BY"); b2c_INT(buf,E_int);strcat(buf,"PERCENT.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01200:
    // 01200 PRINT "CORRECT ANSWER IS";V;"HOURS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CORRECT ANSWER IS"); b2c_INT(buf,V_int);strcat(buf,"HOURS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT "ANOTHER PROBLEM (YES OR NO)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ANOTHER PROBLEM (YES OR NO)");fputs(buf,fh); };
    // 01230 INPUT A$
    // Start of Basic INPUT statement 01230
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
    }; // End of Basic INPUT statement 01230
    // 01240 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01250 IF A$="YES" THEN 1070
    if(strcmp(A_str,"YES")==0)goto Lbl_01070;
    // 01260 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
