/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/guess.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57351277a6d0 ---------A T 00001  PRINT TAB(33);"GUESS"
    0x57351277a670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57351277c580 ---------A   00003  PRINT:PRINT:PRINT
    0x57351277ca40 ---------A   00004  PRINT "THIS IS A NUMBER GUESSING GAME. I'LL THINK"
    0x57351277ae40 ---------A   00005  PRINT "OF A NUMBER BETWEEN 1 AND ANY LIMIT YOU WANT."
    0x57351277aea0 ---------A   00006  PRINT "THEN YOU HAVE TO GUESS WHAT IT IS."
    0x57351277b480 ---------A   00007  PRINT
    0x57351277c680 ---------A   00008  PRINT "WHAT LIMIT DO YOU WANT";
    0x57351277d140 ---------A   00009  INPUT L
    0x57351277d1a0 ---------A   00010  PRINT
    0x57351277bb80 ---------A   00011  L1=INT(LOG(L)/LOG(2))+1
    0x573512782e60 ---------A T 00012  PRINT "I'M THINKING OF A NUMBER BETWEEN 1 AND";L
    0x57351277ced0 ---------A   00013  G=1
    0x573512783240 ---------A   00014  PRINT "NOW YOU TRY TO GUESS WHAT IT IS."
    0x57351277ce10 ---------A   00015  M=INT(L*RND(1)+1)
    0x573512783ac0 ---------A T 00020  INPUT N
    0x573512783d20 ---------A   00021  IF N>0 THEN 25
    0x57351277cf90 ---------A   00022  GOSUB 70
    0x57351277d050 ---------A   00023  GOTO 1
    0x573512783fe0 ---------A T 00025  IF N=M THEN 50
    0x573512784320 ---------A   00030  G=G+1
    0x5735127845b0 ---------A   00031  IF N>M THEN 40
    0x5735127846f0 ---------A   00032  PRINT "TOO LOW. TRY A BIGGER ANSWER."
    0x573512784790 ---------A   00033  GOTO 20
    0x5735127848c0 ---------A T 00040  PRINT "TOO HIGH. TRY A SMALLER ANSWER."
    0x573512784960 ---------A   00042  GOTO 20
    0x573512784cc0 ---------A T 00050  PRINT "THAT'S IT! YOU GOT IT IN";G;"TRIES."
    0x573512784f40 ---------A   00052  IF G<L1 THEN 58
    0x5735127851f0 ---------A   00054  IF G=L1 THEN 60
    0x573512785470 ---------A   00056  PRINT "YOU SHOULD HAVE BEEN ABLE TO GET IT IN ONLY";L1
    0x5735127854f0 ---------A   00057  GOTO 65
    0x573512785660 ---------A T 00058  PRINT "VERY ";
    0x5735127857c0 ---------A T 00060  PRINT "GOOD."
    0x573512785a50 ---------A T 00065  GOSUB 70
    0x573512785ac0 ---------A   00066  GOTO 12
    0x573512785e50 ---------B G 00070  FOR H=1 TO 5
    0x573512785ed0 ---------B   00071  PRINT
    0x573512786010 ---------B   00072  NEXT H
    0x573512786080 ---------B   00073  RETURN
    0x5735127860e0 ---------A   00099  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00001      00023T
     00012      00066T
     00020      00033T, 00042T
     00025      00021T
     00040      00031T
     00050      00025T
     00058      00052T
     00060      00054T
     00065      00057T
     00070      00022G, 00065G

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x57351277a6d0 (00001)   0x57351277a6d0 (00001)   0x5735127860e0 (00099)   0x5735127860e0 (00099)   
   B) 0x573512785e50 (00070)   0x573512785e50 (00070)   0x573512786080 (00073)   0x573512786080 (00073)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/guess.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57351277a6d0 ---------A T 00001  PRINT TAB(33);"GUESS"
    0x57351277a670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57351277b2d0 ----------   00003  PRINT
    0x57351277b910 ----------        a PRINT
    0x57351277c580 ---------A        b PRINT
    0x57351277ca40 ---------A   00004  PRINT "THIS IS A NUMBER GUESSING GAME. I'LL THINK"
    0x57351277ae40 ---------A   00005  PRINT "OF A NUMBER BETWEEN 1 AND ANY LIMIT YOU WANT."
    0x57351277aea0 ---------A   00006  PRINT "THEN YOU HAVE TO GUESS WHAT IT IS."
    0x57351277b480 ---------A   00007  PRINT
    0x57351277c680 ---------A   00008  PRINT "WHAT LIMIT DO YOU WANT";
    0x57351277d140 ---------A   00009  INPUT L
    0x57351277d1a0 ---------A   00010  PRINT
    0x57351277bb80 ---------A   00011  L1=INT(LOG(L)/LOG(2))+1
    0x573512782e60 ---------A T 00012  PRINT "I'M THINKING OF A NUMBER BETWEEN 1 AND";L
    0x57351277ced0 ---------A   00013  G=1
    0x573512783240 ---------A   00014  PRINT "NOW YOU TRY TO GUESS WHAT IT IS."
    0x57351277ce10 ---------A   00015  M=INT(L*RND(1)+1)
    0x573512783ac0 ---------A T 00020  INPUT N
    0x573512783d20 ---------A   00021  IF N>0 THEN 25
    0x57351277cf90 ---------A   00022  GOSUB 70
    0x57351277d050 ---------A   00023  GOTO 1
    0x573512783fe0 ---------A T 00025  IF N=M THEN 50
    0x573512784320 ---------A   00030  G=G+1
    0x5735127845b0 ---------A   00031  IF N>M THEN 40
    0x5735127846f0 ---------A   00032  PRINT "TOO LOW. TRY A BIGGER ANSWER."
    0x573512784790 ---------A   00033  GOTO 20
    0x5735127848c0 ---------A T 00040  PRINT "TOO HIGH. TRY A SMALLER ANSWER."
    0x573512784960 ---------A   00042  GOTO 20
    0x573512784cc0 ---------A T 00050  PRINT "THAT'S IT! YOU GOT IT IN";G;"TRIES."
    0x573512784f40 ---------A   00052  IF G<L1 THEN 58
    0x5735127851f0 ---------A   00054  IF G=L1 THEN 60
    0x573512785470 ---------A   00056  PRINT "YOU SHOULD HAVE BEEN ABLE TO GET IT IN ONLY";L1
    0x5735127854f0 ---------A   00057  GOTO 65
    0x573512785660 ---------A T 00058  PRINT "VERY ";
    0x5735127857c0 ---------A T 00060  PRINT "GOOD."
    0x573512785a50 ---------A T 00065  GOSUB 70
    0x573512785ac0 ---------A   00066  GOTO 12
    0x573512785e50 ---------B G 00070  FOR H=1 TO 5
    0x573512785ed0 ---------B   00071  PRINT
    0x573512786010 ---------B   00072  NEXT H
    0x573512786080 ---------B   00073  RETURN
    0x5735127860e0 ---------A   00099  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/guess.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57351277a6d0 ---------A   01000  PRINT TAB(33);"GUESS"
    0x57351277a670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57351277b2d0 ----------   01020  PRINT
    0x57351277b910 ----------   01030  PRINT
    0x57351277c580 ---------A   01040  PRINT
    0x57351277ca40 ---------A   01050  PRINT "THIS IS A NUMBER GUESSING GAME. I'LL THINK"
    0x57351277ae40 ---------A   01060  PRINT "OF A NUMBER BETWEEN 1 AND ANY LIMIT YOU WANT."
    0x57351277aea0 ---------A   01070  PRINT "THEN YOU HAVE TO GUESS WHAT IT IS."
    0x57351277b480 ---------A   01080  PRINT
    0x57351277c680 ---------A   01090  PRINT "WHAT LIMIT DO YOU WANT";
    0x57351277d140 ---------A   01100  INPUT L
    0x57351277d1a0 ---------A   01110  PRINT
    0x57351277bb80 ---------A   01120  L1=INT(LOG(L)/LOG(2))+1
    0x573512782e60 ---------A   01130  PRINT "I'M THINKING OF A NUMBER BETWEEN 1 AND";L
    0x57351277ced0 ---------A   01140  G=1
    0x573512783240 ---------A   01150  PRINT "NOW YOU TRY TO GUESS WHAT IT IS."
    0x57351277ce10 ---------A   01160  M=INT(L*RND(1)+1)
    0x573512783ac0 ---------A   01170  INPUT N
    0x573512783d20 ---------A   01180  IF N>0 THEN 1210
    0x57351277cf90 ---------A   01190  GOSUB 1370
    0x57351277d050 ---------A   01200  GOTO 1000
    0x573512783fe0 ---------A   01210  IF N=M THEN 1280
    0x573512784320 ---------A   01220  G=G+1
    0x5735127845b0 ---------A   01230  IF N>M THEN 1260
    0x5735127846f0 ---------A   01240  PRINT "TOO LOW. TRY A BIGGER ANSWER."
    0x573512784790 ---------A   01250  GOTO 1170
    0x5735127848c0 ---------A   01260  PRINT "TOO HIGH. TRY A SMALLER ANSWER."
    0x573512784960 ---------A   01270  GOTO 1170
    0x573512784cc0 ---------A   01280  PRINT "THAT'S IT! YOU GOT IT IN";G;"TRIES."
    0x573512784f40 ---------A   01290  IF G<L1 THEN 1330
    0x5735127851f0 ---------A   01300  IF G=L1 THEN 1340
    0x573512785470 ---------A   01310  PRINT "YOU SHOULD HAVE BEEN ABLE TO GET IT IN ONLY";L1
    0x5735127854f0 ---------A   01320  GOTO 1350
    0x573512785660 ---------A   01330  PRINT "VERY ";
    0x5735127857c0 ---------A   01340  PRINT "GOOD."
    0x573512785a50 ---------A   01350  GOSUB 1370
    0x573512785ac0 ---------A   01360  GOTO 1130
    0x573512785e50 ---------B   01370  FOR H=1 TO 5
    0x573512785ed0 ---------B   01380  PRINT
    0x573512786010 ---------B   01390  NEXT H
    0x573512786080 ---------B   01400  RETURN
    0x5735127860e0 ---------A   01410  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01430 - 10000    8580 

 */



/*
 *  Symbol Table Listing for 'basic/guess.bas'
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
    G                        Integer     
    H                        Integer     
    HEX$            Function String          args=1, int    
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    L                        Integer     
    L1                       Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Integer     
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
 *  Listing of basic/guess.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x57351277a6d0 ---------A T 01000  PRINT TAB(33);"GUESS"
    0x57351277a670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x57351277b2d0 ---------A   01020  PRINT
    0x57351277b910 ---------A   01030  PRINT
    0x57351277c580 ---------A   01040  PRINT
    0x57351277ca40 ---------A   01050  PRINT "THIS IS A NUMBER GUESSING GAME. I'LL THINK"
    0x57351277ae40 ---------A   01060  PRINT "OF A NUMBER BETWEEN 1 AND ANY LIMIT YOU WANT."
    0x57351277aea0 ---------A   01070  PRINT "THEN YOU HAVE TO GUESS WHAT IT IS."
    0x57351277b480 ---------A   01080  PRINT
    0x57351277c680 ---------A   01090  PRINT "WHAT LIMIT DO YOU WANT";
    0x57351277d140 ---------A   01100  INPUT L
    0x57351277d1a0 ---------A   01110  PRINT
    0x57351277bb80 ---------A   01120  L1=INT(LOG(L)/LOG(2))+1
    0x573512782e60 ---------A T 01130  PRINT "I'M THINKING OF A NUMBER BETWEEN 1 AND";L
    0x57351277ced0 ---------A   01140  G=1
    0x573512783240 ---------A   01150  PRINT "NOW YOU TRY TO GUESS WHAT IT IS."
    0x57351277ce10 ---------A   01160  M=INT(L*RND(1)+1)
    0x573512783ac0 ---------A T 01170  INPUT N
    0x573512783d20 ---------A   01180  IF N>0 THEN 1210
    0x57351277cf90 ---------A   01190  GOSUB 1380
    0x57351277d050 ---------A   01200  GOTO 1000
    0x573512783fe0 ---------A T 01210  IF N=M THEN 1280
    0x573512784320 ---------A   01220  G=G+1
    0x5735127845b0 ---------A   01230  IF N>M THEN 1260
    0x5735127846f0 ---------A   01240  PRINT "TOO LOW. TRY A BIGGER ANSWER."
    0x573512784790 ---------A   01250  GOTO 1170
    0x5735127848c0 ---------A T 01260  PRINT "TOO HIGH. TRY A SMALLER ANSWER."
    0x573512784960 ---------A   01270  GOTO 1170
    0x573512784cc0 ---------A T 01280  PRINT "THAT'S IT! YOU GOT IT IN";G;"TRIES."
    0x573512784f40 ---------A   01290  IF G<L1 THEN 1330
    0x5735127851f0 ---------A   01300  IF G=L1 THEN 1340
    0x573512785470 ---------A   01310  PRINT "YOU SHOULD HAVE BEEN ABLE TO GET IT IN ONLY";L1
    0x5735127854f0 ---------A   01320  GOTO 1350
    0x573512785660 ---------A T 01330  PRINT "VERY ";
    0x5735127857c0 ---------A T 01340  PRINT "GOOD."
    0x573512785a50 ---------A T 01350  GOSUB 1380
    0x573512785ac0 ---------A   01360  GOTO 1130
    0x5735127860e0 ---------A   01370  END
    0x573512785e50 ---------B G 01380  FOR H=1 TO 5
    0x573512785ed0 ---------B   01390  PRINT
    0x573512786010 ---------B   01400  NEXT H
    0x573512786df0 ---------B   01410  GOTO 01420
    0x57351278a340 ---------B T 01420  RETURN
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
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    L_int;                                     // Basic: L 
int    L1_int;                                    // Basic: L1 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01380();

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

void Routine_01380(){
    // 01380 FOR H=1 TO 5
    for(H_int=1;H_int<=5;H_int++){
        // 01390 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01400 NEXT H
        int dummy_1400=0; // Ignore this line.
    }; // End-For(H_int)
    // 01410 GOTO 01420
    goto Lbl_01420;

  Lbl_01420:
    // 01420 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{

  Lbl_01000:
    // 01000 PRINT TAB(33);"GUESS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"GUESS");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "THIS IS A NUMBER GUESSING GAME. I'LL THINK"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS A NUMBER GUESSING GAME. I'LL THINK");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "OF A NUMBER BETWEEN 1 AND ANY LIMIT YOU WANT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OF A NUMBER BETWEEN 1 AND ANY LIMIT YOU WANT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "THEN YOU HAVE TO GUESS WHAT IT IS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THEN YOU HAVE TO GUESS WHAT IT IS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "WHAT LIMIT DO YOU WANT";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT LIMIT DO YOU WANT");fputs(buf,fh); };
    // 01100 INPUT L
    // Start of Basic INPUT statement 01100
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
    }; // End of Basic INPUT statement 01100
    // 01110 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01120 L1=INT(LOG(L)/LOG(2))+1
    L1_int = INT(LOG(L_int)/LOG(2))+1;

  Lbl_01130:
    // 01130 PRINT "I'M THINKING OF A NUMBER BETWEEN 1 AND";L
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I'M THINKING OF A NUMBER BETWEEN 1 AND"); b2c_INT(buf,L_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01140 G=1
    G_int = 1;
    // 01150 PRINT "NOW YOU TRY TO GUESS WHAT IT IS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOW YOU TRY TO GUESS WHAT IT IS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 M=INT(L*RND(1)+1)
    M_int = INT(L_int*RND(1)+1);

  Lbl_01170:
    // 01170 INPUT N
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
                (err += b2c_strtoi(&N_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01170
    // 01180 IF N>0 THEN 1210
    if(N_int>0)goto Lbl_01210;
    // 01190 GOSUB 1380
    Routine_01380();
    // 01200 GOTO 1000
    goto Lbl_01000;

  Lbl_01210:
    // 01210 IF N=M THEN 1280
    if(N_int==M_int)goto Lbl_01280;
    // 01220 G=G+1
    G_int = G_int+1;
    // 01230 IF N>M THEN 1260
    if(N_int>M_int)goto Lbl_01260;
    // 01240 PRINT "TOO LOW. TRY A BIGGER ANSWER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO LOW. TRY A BIGGER ANSWER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 GOTO 1170
    goto Lbl_01170;

  Lbl_01260:
    // 01260 PRINT "TOO HIGH. TRY A SMALLER ANSWER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TOO HIGH. TRY A SMALLER ANSWER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 GOTO 1170
    goto Lbl_01170;

  Lbl_01280:
    // 01280 PRINT "THAT'S IT! YOU GOT IT IN";G;"TRIES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THAT'S IT! YOU GOT IT IN"); b2c_INT(buf,G_int);strcat(buf,"TRIES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01290 IF G<L1 THEN 1330
    if(G_int<L1_int)goto Lbl_01330;
    // 01300 IF G=L1 THEN 1340
    if(G_int==L1_int)goto Lbl_01340;
    // 01310 PRINT "YOU SHOULD HAVE BEEN ABLE TO GET IT IN ONLY";L1
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU SHOULD HAVE BEEN ABLE TO GET IT IN ONLY"); b2c_INT(buf,L1_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01320 GOTO 1350
    goto Lbl_01350;

  Lbl_01330:
    // 01330 PRINT "VERY ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"VERY ");fputs(buf,fh); };

  Lbl_01340:
    // 01340 PRINT "GOOD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01350:
    // 01350 GOSUB 1380
    Routine_01380();
    // 01360 GOTO 1130
    goto Lbl_01130;
    // 01370 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
