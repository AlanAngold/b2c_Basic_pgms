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
    0x5de02fc546d0 ---------A   00001  PRINT TAB(33);"NUMBER"
    0x5de02fc54670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5de02fc547f0 ---------A   00003  PRINT:PRINT:PRINT
    0x5de02fc56ae0 ---------A   00004  PRINT "YOU HAVE 100 POINTS.  BY GUESSING NUMBERS FROM 1 TO 5, YOU"
    0x5de02fc55080 ---------A   00005  PRINT "CAN GAIN OR LOSE POINTS DEPENDING UPON HOW CLOSE YOU GET TO"
    0x5de02fc566f0 ---------A   00006  PRINT "A RANDOM NUMBER SELECTED BY THE COMPUTER.": PRINT
    0x5de02fc57100 ---------A   00007  PRINT "YOU OCCASIONALLY WILL GET A JACKPOT WHICH WILL DOUBLE(!)"
    0x5de02fc57220 ---------A   00008  PRINT "YOUR POINT COUNT.  YOU WIN WHEN YOU GET 500 POINTS."
    0x5de02fc5c8a0 ---------A   00009  PRINT: P=100
    0x5de02fc54e40 ---------A   00010  DEF FNR(X)=INT(5*RND(1)+1)
    0x5de02fc5d110 ---------A T 00012  INPUT "GUESS A NUMBER FROM 1 TO 5";G
    0x5de02fc5d470 ---------A   00015  R=FNR(1)
    0x5de02fc5d820 ---------A   00016  S=FNR(1)
    0x5de02fc5dbd0 ---------A   00017  T=FNR(1)
    0x5de02fc5df80 ---------A   00018  U=FNR(1)
    0x5de02fc5e330 ---------A   00019  V=FNR(1)
    0x5de02fc5e5a0 ---------A   00020  IF G=R THEN 30
    0x5de02fc5e820 ---------A   00021  IF G=S THEN 40
    0x5de02fc5eaa0 ---------A   00022  IF G=T THEN 50
    0x5de02fc5ed20 ---------A   00023  IF G=U THEN 60
    0x5de02fc5efa0 ---------A   00024  IF G=V THEN 70
    0x5de02fc5f200 ---------A   00025  IF G>5 THEN 12
    0x5de02fc5f540 ---------A T 00030  P=P-5
    0x5de02fc5f5b0 ---------A   00035  GOTO 80
    0x5de02fc5f8e0 ---------A T 00040  P=P+5
    0x5de02fc5f950 ---------A   00045  GOTO 80
    0x5de02fc5fc80 ---------A T 00050  P=P+P
    0x5de02fc5fdb0 ---------A   00053  PRINT "YOU HIT THE JACKPOT!!!"
    0x5de02fc5fe30 ---------A   00055  GOTO 80
    0x5de02fc60160 ---------A T 00060  P=P+1
    0x5de02fc601d0 ---------A   00065  GOTO 80
    0x5de02fc60660 ---------A T 00070  P=P-(P*.5)
    0x5de02fc60890 ---------A T 00080  IF P>500 THEN 90
    0x5de02fc60e60 ---------A   00082  PRINT "YOU HAVE";P;"POINTS.":PRINT
    0x5de02fc60f00 ---------A   00085  GOTO 12
    0x5de02fc61250 ---------A T 00090  PRINT "!!!!YOU WIN!!!! WITH ";P;"POINTS."
    0x5de02fc612b0 ---------A   00099  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00012      00025T, 00085T
     00030      00020T
     00040      00021T
     00050      00022T
     00060      00023T
     00070      00024T
     00080      00035T, 00045T, 00055T, 00065T
     00090      00080T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5de02fc546d0 (00001)   0x5de02fc546d0 (00001)   0x5de02fc612b0 (00099)   0x5de02fc612b0 (00099)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/number.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5de02fc546d0 ---------A   00001  PRINT TAB(33);"NUMBER"
    0x5de02fc54670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5de02fc452b0 ----------   00003  PRINT
    0x5de02fc549e0 ----------        a PRINT
    0x5de02fc547f0 ---------A        b PRINT
    0x5de02fc56ae0 ---------A   00004  PRINT "YOU HAVE 100 POINTS.  BY GUESSING NUMBERS FROM 1 TO 5, YOU"
    0x5de02fc55080 ---------A   00005  PRINT "CAN GAIN OR LOSE POINTS DEPENDING UPON HOW CLOSE YOU GET TO"
    0x5de02fc554c0 ----------   00006  PRINT "A RANDOM NUMBER SELECTED BY THE COMPUTER."
    0x5de02fc566f0 ---------A        a PRINT
    0x5de02fc57100 ---------A   00007  PRINT "YOU OCCASIONALLY WILL GET A JACKPOT WHICH WILL DOUBLE(!)"
    0x5de02fc57220 ---------A   00008  PRINT "YOUR POINT COUNT.  YOU WIN WHEN YOU GET 500 POINTS."
    0x5de02fc55620 ----------   00009  PRINT
    0x5de02fc5c8a0 ---------A        a P=100
    0x5de02fc54e40 ---------A   00010  DEF FNR(X)=INT(5*RND(1)+1)
    0x5de02fc5d110 ---------A T 00012  INPUT "GUESS A NUMBER FROM 1 TO 5";G
    0x5de02fc5d470 ---------A   00015  R=FNR(1)
    0x5de02fc5d820 ---------A   00016  S=FNR(1)
    0x5de02fc5dbd0 ---------A   00017  T=FNR(1)
    0x5de02fc5df80 ---------A   00018  U=FNR(1)
    0x5de02fc5e330 ---------A   00019  V=FNR(1)
    0x5de02fc5e5a0 ---------A   00020  IF G=R THEN 30
    0x5de02fc5e820 ---------A   00021  IF G=S THEN 40
    0x5de02fc5eaa0 ---------A   00022  IF G=T THEN 50
    0x5de02fc5ed20 ---------A   00023  IF G=U THEN 60
    0x5de02fc5efa0 ---------A   00024  IF G=V THEN 70
    0x5de02fc5f200 ---------A   00025  IF G>5 THEN 12
    0x5de02fc5f540 ---------A T 00030  P=P-5
    0x5de02fc5f5b0 ---------A   00035  GOTO 80
    0x5de02fc5f8e0 ---------A T 00040  P=P+5
    0x5de02fc5f950 ---------A   00045  GOTO 80
    0x5de02fc5fc80 ---------A T 00050  P=P+P
    0x5de02fc5fdb0 ---------A   00053  PRINT "YOU HIT THE JACKPOT!!!"
    0x5de02fc5fe30 ---------A   00055  GOTO 80
    0x5de02fc60160 ---------A T 00060  P=P+1
    0x5de02fc601d0 ---------A   00065  GOTO 80
    0x5de02fc60660 ---------A T 00070  P=P-(P*.5)
    0x5de02fc60890 ---------A T 00080  IF P>500 THEN 90
    0x5de02fc60de0 ----------   00082  PRINT "YOU HAVE";P;"POINTS."
    0x5de02fc60e60 ---------A        a PRINT
    0x5de02fc60f00 ---------A   00085  GOTO 12
    0x5de02fc61250 ---------A T 00090  PRINT "!!!!YOU WIN!!!! WITH ";P;"POINTS."
    0x5de02fc612b0 ---------A   00099  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/number.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5de02fc546d0 ---------A   01000  PRINT TAB(33);"NUMBER"
    0x5de02fc54670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5de02fc452b0 ----------   01020  PRINT
    0x5de02fc549e0 ----------   01030  PRINT
    0x5de02fc547f0 ---------A   01040  PRINT
    0x5de02fc56ae0 ---------A   01050  PRINT "YOU HAVE 100 POINTS.  BY GUESSING NUMBERS FROM 1 TO 5, YOU"
    0x5de02fc55080 ---------A   01060  PRINT "CAN GAIN OR LOSE POINTS DEPENDING UPON HOW CLOSE YOU GET TO"
    0x5de02fc554c0 ----------   01070  PRINT "A RANDOM NUMBER SELECTED BY THE COMPUTER."
    0x5de02fc566f0 ---------A   01080  PRINT
    0x5de02fc57100 ---------A   01090  PRINT "YOU OCCASIONALLY WILL GET A JACKPOT WHICH WILL DOUBLE(!)"
    0x5de02fc57220 ---------A   01100  PRINT "YOUR POINT COUNT.  YOU WIN WHEN YOU GET 500 POINTS."
    0x5de02fc55620 ----------   01110  PRINT
    0x5de02fc5c8a0 ---------A   01120  P=100
    0x5de02fc54e40 ---------A   01130  DEF FNR(X)=INT(5*RND(1)+1)
    0x5de02fc5d110 ---------A   01140  INPUT "GUESS A NUMBER FROM 1 TO 5";G
    0x5de02fc5d470 ---------A   01150  R=FNR(1)
    0x5de02fc5d820 ---------A   01160  S=FNR(1)
    0x5de02fc5dbd0 ---------A   01170  T=FNR(1)
    0x5de02fc5df80 ---------A   01180  U=FNR(1)
    0x5de02fc5e330 ---------A   01190  V=FNR(1)
    0x5de02fc5e5a0 ---------A   01200  IF G=R THEN 1260
    0x5de02fc5e820 ---------A   01210  IF G=S THEN 1280
    0x5de02fc5eaa0 ---------A   01220  IF G=T THEN 1300
    0x5de02fc5ed20 ---------A   01230  IF G=U THEN 1330
    0x5de02fc5efa0 ---------A   01240  IF G=V THEN 1350
    0x5de02fc5f200 ---------A   01250  IF G>5 THEN 1140
    0x5de02fc5f540 ---------A   01260  P=P-5
    0x5de02fc5f5b0 ---------A   01270  GOTO 1360
    0x5de02fc5f8e0 ---------A   01280  P=P+5
    0x5de02fc5f950 ---------A   01290  GOTO 1360
    0x5de02fc5fc80 ---------A   01300  P=P+P
    0x5de02fc5fdb0 ---------A   01310  PRINT "YOU HIT THE JACKPOT!!!"
    0x5de02fc5fe30 ---------A   01320  GOTO 1360
    0x5de02fc60160 ---------A   01330  P=P+1
    0x5de02fc601d0 ---------A   01340  GOTO 1360
    0x5de02fc60660 ---------A   01350  P=P-(P*.5)
    0x5de02fc60890 ---------A   01360  IF P>500 THEN 1400
    0x5de02fc60de0 ----------   01370  PRINT "YOU HAVE";P;"POINTS."
    0x5de02fc60e60 ---------A   01380  PRINT
    0x5de02fc60f00 ---------A   01390  GOTO 1140
    0x5de02fc61250 ---------A   01400  PRINT "!!!!YOU WIN!!!! WITH ";P;"POINTS."
    0x5de02fc612b0 ---------A   01410  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01420 - 10000    8590 

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
    FNR             Array    Integer         {0,9} 
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
    P                        Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
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
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U                        Integer     
    V                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     

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
    0x5de02fc546d0 ---------A   01000  PRINT TAB(33);"NUMBER"
    0x5de02fc54670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5de02fc452b0 ---------A   01020  PRINT
    0x5de02fc549e0 ---------A   01030  PRINT
    0x5de02fc547f0 ---------A   01040  PRINT
    0x5de02fc56ae0 ---------A   01050  PRINT "YOU HAVE 100 POINTS.  BY GUESSING NUMBERS FROM 1 TO 5, YOU"
    0x5de02fc55080 ---------A   01060  PRINT "CAN GAIN OR LOSE POINTS DEPENDING UPON HOW CLOSE YOU GET TO"
    0x5de02fc554c0 ---------A   01070  PRINT "A RANDOM NUMBER SELECTED BY THE COMPUTER."
    0x5de02fc566f0 ---------A   01080  PRINT
    0x5de02fc57100 ---------A   01090  PRINT "YOU OCCASIONALLY WILL GET A JACKPOT WHICH WILL DOUBLE(!)"
    0x5de02fc57220 ---------A   01100  PRINT "YOUR POINT COUNT.  YOU WIN WHEN YOU GET 500 POINTS."
    0x5de02fc55620 ---------A   01110  PRINT
    0x5de02fc5c8a0 ---------A   01120  P=100
    0x5de02fc54e40 ---------A   01130  DEF FNR(X)=INT(5*RND(1)+1)
    0x5de02fc5d110 ---------A T 01140  INPUT "GUESS A NUMBER FROM 1 TO 5";G
    0x5de02fc5d470 ---------A   01150  R=FNR(1)
    0x5de02fc5d820 ---------A   01160  S=FNR(1)
    0x5de02fc5dbd0 ---------A   01170  T=FNR(1)
    0x5de02fc5df80 ---------A   01180  U=FNR(1)
    0x5de02fc5e330 ---------A   01190  V=FNR(1)
    0x5de02fc5e5a0 ---------A   01200  IF G=R THEN 1260
    0x5de02fc5e820 ---------A   01210  IF G=S THEN 1280
    0x5de02fc5eaa0 ---------A   01220  IF G=T THEN 1300
    0x5de02fc5ed20 ---------A   01230  IF G=U THEN 1330
    0x5de02fc5efa0 ---------A   01240  IF G=V THEN 1350
    0x5de02fc5f200 ---------A   01250  IF G>5 THEN 1140
    0x5de02fc5f540 ---------A T 01260  P=P-5
    0x5de02fc5f5b0 ---------A   01270  GOTO 1360
    0x5de02fc5f8e0 ---------A T 01280  P=P+5
    0x5de02fc5f950 ---------A   01290  GOTO 1360
    0x5de02fc5fc80 ---------A T 01300  P=P+P
    0x5de02fc5fdb0 ---------A   01310  PRINT "YOU HIT THE JACKPOT!!!"
    0x5de02fc5fe30 ---------A   01320  GOTO 1360
    0x5de02fc60160 ---------A T 01330  P=P+1
    0x5de02fc601d0 ---------A   01340  GOTO 1360
    0x5de02fc60660 ---------A T 01350  P=P-(P*.5)
    0x5de02fc60890 ---------A T 01360  IF P>500 THEN 1400
    0x5de02fc60de0 ---------A   01370  PRINT "YOU HAVE";P;"POINTS."
    0x5de02fc60e60 ---------A   01380  PRINT
    0x5de02fc60f00 ---------A   01390  GOTO 1140
    0x5de02fc61250 ---------A T 01400  PRINT "!!!!YOU WIN!!!! WITH ";P;"POINTS."
    0x5de02fc612b0 ---------A   01410  END
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
int    FNR_int_arr[10];                           // Basic: FNR 
int    G_int;                                     // Basic: G 
int    P_int;                                     // Basic: P 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
int    U_int;                                     // Basic: U 
int    V_int;                                     // Basic: V 
int    X_int;                                     // Basic: X 
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
#pragma argsused X
int FNR(int X){
    int rtn=INT(5*RND(1)+1);
    return(rtn);
}

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
    // 01000 PRINT TAB(33);"NUMBER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"NUMBER");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "YOU HAVE 100 POINTS.  BY GUESSING NUMBERS FROM 1 TO 5, YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE 100 POINTS.  BY GUESSING NUMBERS FROM 1 TO 5, YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "CAN GAIN OR LOSE POINTS DEPENDING UPON HOW CLOSE YOU GET TO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CAN GAIN OR LOSE POINTS DEPENDING UPON HOW CLOSE YOU GET TO");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "A RANDOM NUMBER SELECTED BY THE COMPUTER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"A RANDOM NUMBER SELECTED BY THE COMPUTER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "YOU OCCASIONALLY WILL GET A JACKPOT WHICH WILL DOUBLE(!)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU OCCASIONALLY WILL GET A JACKPOT WHICH WILL DOUBLE(!)");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "YOUR POINT COUNT.  YOU WIN WHEN YOU GET 500 POINTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR POINT COUNT.  YOU WIN WHEN YOU GET 500 POINTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01120 P=100
    P_int = 100;
    // 01130 DEF FNR(X)=INT(5*RND(1)+1)

  Lbl_01140:
    // 01140 INPUT "GUESS A NUMBER FROM 1 TO 5";G
    // Start of Basic INPUT statement 01140
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"GUESS A NUMBER FROM 1 TO 5");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&G_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01140
    // 01150 R=FNR(1)
    R_int = FNR_int_arr[1];
    // 01160 S=FNR(1)
    S_int = FNR_int_arr[1];
    // 01170 T=FNR(1)
    T_int = FNR_int_arr[1];
    // 01180 U=FNR(1)
    U_int = FNR_int_arr[1];
    // 01190 V=FNR(1)
    V_int = FNR_int_arr[1];
    // 01200 IF G=R THEN 1260
    if(G_int==R_int)goto Lbl_01260;
    // 01210 IF G=S THEN 1280
    if(G_int==S_int)goto Lbl_01280;
    // 01220 IF G=T THEN 1300
    if(G_int==T_int)goto Lbl_01300;
    // 01230 IF G=U THEN 1330
    if(G_int==U_int)goto Lbl_01330;
    // 01240 IF G=V THEN 1350
    if(G_int==V_int)goto Lbl_01350;
    // 01250 IF G>5 THEN 1140
    if(G_int>5)goto Lbl_01140;

  Lbl_01260:
    // 01260 P=P-5
    P_int = P_int-5;
    // 01270 GOTO 1360
    goto Lbl_01360;

  Lbl_01280:
    // 01280 P=P+5
    P_int = P_int+5;
    // 01290 GOTO 1360
    goto Lbl_01360;

  Lbl_01300:
    // 01300 P=P+P
    P_int = P_int+P_int;
    // 01310 PRINT "YOU HIT THE JACKPOT!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HIT THE JACKPOT!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01320 GOTO 1360
    goto Lbl_01360;

  Lbl_01330:
    // 01330 P=P+1
    P_int = P_int+1;
    // 01340 GOTO 1360
    goto Lbl_01360;

  Lbl_01350:
    // 01350 P=P-(P*.5)
    P_int = P_int-(P_int*0.5);

  Lbl_01360:
    // 01360 IF P>500 THEN 1400
    if(P_int>500)goto Lbl_01400;
    // 01370 PRINT "YOU HAVE";P;"POINTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE"); b2c_INT(buf,P_int);strcat(buf,"POINTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01380 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01390 GOTO 1140
    goto Lbl_01140;

  Lbl_01400:
    // 01400 PRINT "!!!!YOU WIN!!!! WITH ";P;"POINTS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"!!!!YOU WIN!!!! WITH "); b2c_INT(buf,P_int);strcat(buf,"POINTS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01410 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
