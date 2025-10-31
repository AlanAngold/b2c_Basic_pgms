/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/rocksp.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5fa5fb0c86d0 ---------A   00010  PRINT TAB(21);"GAME OF ROCK, SCISSORS, PAPER"
    0x5fa5fb0c8670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5fa5fb0c87f0 ---------A   00025  PRINT:PRINT:PRINT
    0x5fa5fb0c9040 ---------A T 00030  INPUT "HOW MANY GAMES";Q
    0x5fa5fb0c9480 ---------A   00040  IF Q<11 THEN 60
    0x5fa5fb0cae70 ---------A   00050  PRINT "SORRY, BUT WE AREN'T ALLOWED TO PLAY THAT MANY.": GOTO 30
    0x5fa5fb0c96e0 ---------A T 00060  FOR G=1 TO Q
    0x5fa5fb0d0920 ---------A   00070  PRINT: PRINT "GAME NUMBER";G
    0x5fa5fb0caff0 ---------A   00080  X=INT(RND(1)*3+1)
    0x5fa5fb0d1020 ---------A T 00090  PRINT "3=ROCK...2=SCISSORS...1=PAPER"
    0x5fa5fb0d11e0 ---------A   00100  INPUT "1...2...3...WHAT'S YOUR CHOICE";K
    0x5fa5fb0cb0b0 ---------A   00110  IF (K-1)*(K-2)*(K-3)<>0 THEN PRINT "INVALID.": GOTO 90
    0x5fa5fb0d1c80 ----------   00120  PRINT "THIS IS MY CHOICE..."
    0x5fa5fb0d2030 ----------   00130  ON X GOTO 140,150,160
    0x5fa5fb0d2200 ---------- T 00140  PRINT "...PAPER": GOTO 170
    0x5fa5fb0d23b0 ---------- T 00150  PRINT "...SCISSORS": GOTO 170
    0x5fa5fb0d2500 ---------- T 00160  PRINT "...ROCK"
    0x5fa5fb0d2780 ---------- T 00170  IF X=K THEN 250
    0x5fa5fb0d2a00 ----------   00180  IF X>K THEN 230
    0x5fa5fb0d2c70 ----------   00190  IF X=1 THEN 210
    0x5fa5fb0d3200 ---------- T 00200  PRINT "YOU WIN!!!":H=H+1: GOTO 260
    0x5fa5fb0d3470 ---------- T 00210  IF K<>3 THEN 200
    0x5fa5fb0d3a10 ---------- T 00220  PRINT "WOW!  I WIN!!!":C=C+1:GOTO 260
    0x5fa5fb0d3e80 ---------- T 00230  IF K<>1 OR X<>3 THEN 220
    0x5fa5fb0d3f10 ----------   00240  GOTO 200
    0x5fa5fb0d4060 ---------- T 00250  PRINT "TIE GAME.  NO WINNER."
    0x5fa5fb0d41a0 ---------- T 00260  NEXT G
    0x5fa5fb0d43b0 ----------   00270  PRINT: PRINT "HERE IS THE FINAL GAME SCORE:"
    0x5fa5fb0d4720 ----------   00280  PRINT "I HAVE WON";C;"GAME(S)."
    0x5fa5fb0d4aa0 ----------   00290  PRINT "YOU HAVE WON";H;"GAME(S)."
    0x5fa5fb0d50a0 ----------   00300  PRINT "AND";Q-(C+H);"GAME(S) ENDED IN A TIE."
    0x5fa5fb0d5260 ----------   00310  PRINT: PRINT "THANKS FOR PLAYING!!"
    0x5fa5fb0d52c0 ---------A   00320  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00030      00050T
     00060      00040T
     00090      00110T
     00140      00130T
     00150      00130T
     00160      00130T
     00170      00140T, 00150T
     00200      00210T, 00240T
     00210      00190T
     00220      00230T
     00230      00180T
     00250      00170T
     00260      00200T, 00220T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5fa5fb0c86d0 (00010)   0x5fa5fb0c86d0 (00010)   0x5fa5fb0d52c0 (00320)   0x5fa5fb0d52c0 (00320)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/rocksp.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5fa5fb0c86d0 ---------A   00010  PRINT TAB(21);"GAME OF ROCK, SCISSORS, PAPER"
    0x5fa5fb0c8670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5fa5fb0ca5e0 ----------   00025  PRINT
    0x5fa5fb0c89e0 ----------        a PRINT
    0x5fa5fb0c87f0 ---------A        b PRINT
    0x5fa5fb0c9040 ---------A T 00030  INPUT "HOW MANY GAMES";Q
    0x5fa5fb0c9480 ---------A   00040  IF Q<11 THEN 60
    0x5fa5fb0ca6e0 ----------   00050  PRINT "SORRY, BUT WE AREN'T ALLOWED TO PLAY THAT MANY."
    0x5fa5fb0cae70 ---------A        a GOTO 30
    0x5fa5fb0c96e0 ---------A T 00060  FOR G=1 TO Q
    0x5fa5fb0c9740 ----------   00070  PRINT
    0x5fa5fb0d0920 ---------A        a PRINT "GAME NUMBER";G
    0x5fa5fb0caff0 ---------A   00080  X=INT(RND(1)*3+1)
    0x5fa5fb0d1020 ---------A T 00090  PRINT "3=ROCK...2=SCISSORS...1=PAPER"
    0x5fa5fb0d11e0 ---------A   00100  INPUT "1...2...3...WHAT'S YOUR CHOICE";K
    0x5fa5fb0d1b40 ----------   00110  IF (K-1)*(K-2)*(K-3)<>0 THEN PRINT "INVALID."
    0x5fa5fb0cb0b0 ---------A        a GOTO 90
    0x5fa5fb0d1c80 ----------   00120  PRINT "THIS IS MY CHOICE..."
    0x5fa5fb0d2030 ----------   00130  ON X GOTO 140,150,160
    0x5fa5fb0d2170 ---------- T 00140  PRINT "...PAPER"
    0x5fa5fb0d2200 ---------- T      a GOTO 170
    0x5fa5fb0d2330 ---------- T 00150  PRINT "...SCISSORS"
    0x5fa5fb0d23b0 ---------- T      a GOTO 170
    0x5fa5fb0d2500 ---------- T 00160  PRINT "...ROCK"
    0x5fa5fb0d2780 ---------- T 00170  IF X=K THEN 250
    0x5fa5fb0d2a00 ----------   00180  IF X>K THEN 230
    0x5fa5fb0d2c70 ----------   00190  IF X=1 THEN 210
    0x5fa5fb0d2db0 ---------- T 00200  PRINT "YOU WIN!!!"
    0x5fa5fb0d3190 ---------- T      a H=H+1
    0x5fa5fb0d3200 ---------- T      b GOTO 260
    0x5fa5fb0d3470 ---------- T 00210  IF K<>3 THEN 200
    0x5fa5fb0d35b0 ---------- T 00220  PRINT "WOW!  I WIN!!!"
    0x5fa5fb0d3990 ---------- T      a C=C+1
    0x5fa5fb0d3a10 ---------- T      b GOTO 260
    0x5fa5fb0d3e80 ---------- T 00230  IF K<>1 OR X<>3 THEN 220
    0x5fa5fb0d3f10 ----------   00240  GOTO 200
    0x5fa5fb0d4060 ---------- T 00250  PRINT "TIE GAME.  NO WINNER."
    0x5fa5fb0d41a0 ---------- T 00260  NEXT G
    0x5fa5fb0d4230 ----------   00270  PRINT
    0x5fa5fb0d43b0 ----------        a PRINT "HERE IS THE FINAL GAME SCORE:"
    0x5fa5fb0d4720 ----------   00280  PRINT "I HAVE WON";C;"GAME(S)."
    0x5fa5fb0d4aa0 ----------   00290  PRINT "YOU HAVE WON";H;"GAME(S)."
    0x5fa5fb0d50a0 ----------   00300  PRINT "AND";Q-(C+H);"GAME(S) ENDED IN A TIE."
    0x5fa5fb0d5100 ----------   00310  PRINT
    0x5fa5fb0d5260 ----------        a PRINT "THANKS FOR PLAYING!!"
    0x5fa5fb0d52c0 ---------A   00320  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/rocksp.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5fa5fb0c86d0 ---------A   01000  PRINT TAB(21);"GAME OF ROCK, SCISSORS, PAPER"
    0x5fa5fb0c8670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5fa5fb0ca5e0 ----------   01020  PRINT
    0x5fa5fb0c89e0 ----------   01030  PRINT
    0x5fa5fb0c87f0 ---------A   01040  PRINT
    0x5fa5fb0c9040 ---------A   01050  INPUT "HOW MANY GAMES";Q
    0x5fa5fb0c9480 ---------A   01060  IF Q<11 THEN 1090
    0x5fa5fb0ca6e0 ----------   01070  PRINT "SORRY, BUT WE AREN'T ALLOWED TO PLAY THAT MANY."
    0x5fa5fb0cae70 ---------A   01080  GOTO 1050
    0x5fa5fb0c96e0 ---------A   01090  FOR G=1 TO Q
    0x5fa5fb0c9740 ----------   01100  PRINT
    0x5fa5fb0d0920 ---------A   01110  PRINT "GAME NUMBER";G
    0x5fa5fb0caff0 ---------A   01120  X=INT(RND(1)*3+1)
    0x5fa5fb0d1020 ---------A   01130  PRINT "3=ROCK...2=SCISSORS...1=PAPER"
    0x5fa5fb0d11e0 ---------A   01140  INPUT "1...2...3...WHAT'S YOUR CHOICE";K
    0x5fa5fb0d1b40 ----------   01150  IF (K-1)*(K-2)*(K-3)<>0 THEN PRINT "INVALID."
    0x5fa5fb0cb0b0 ---------A   01160  GOTO 1130
    0x5fa5fb0d1c80 ----------   01170  PRINT "THIS IS MY CHOICE..."
    0x5fa5fb0d2030 ----------   01180  ON X GOTO 1200,1220,1230
    0x5fa5fb0d2170 ----------   01190  PRINT "...PAPER"
    0x5fa5fb0d2200 ----------   01200  GOTO 1240
    0x5fa5fb0d2330 ----------   01210  PRINT "...SCISSORS"
    0x5fa5fb0d23b0 ----------   01220  GOTO 1240
    0x5fa5fb0d2500 ----------   01230  PRINT "...ROCK"
    0x5fa5fb0d2780 ----------   01240  IF X=K THEN 1360
    0x5fa5fb0d2a00 ----------   01250  IF X>K THEN 1340
    0x5fa5fb0d2c70 ----------   01260  IF X=1 THEN 1300
    0x5fa5fb0d2db0 ----------   01270  PRINT "YOU WIN!!!"
    0x5fa5fb0d3190 ----------   01280  H=H+1
    0x5fa5fb0d3200 ----------   01290  GOTO 1370
    0x5fa5fb0d3470 ----------   01300  IF K<>3 THEN 1290
    0x5fa5fb0d35b0 ----------   01310  PRINT "WOW!  I WIN!!!"
    0x5fa5fb0d3990 ----------   01320  C=C+1
    0x5fa5fb0d3a10 ----------   01330  GOTO 1370
    0x5fa5fb0d3e80 ----------   01340  IF K<>1 OR X<>3 THEN 1330
    0x5fa5fb0d3f10 ----------   01350  GOTO 1290
    0x5fa5fb0d4060 ----------   01360  PRINT "TIE GAME.  NO WINNER."
    0x5fa5fb0d41a0 ----------   01370  NEXT G
    0x5fa5fb0d4230 ----------   01380  PRINT
    0x5fa5fb0d43b0 ----------   01390  PRINT "HERE IS THE FINAL GAME SCORE:"
    0x5fa5fb0d4720 ----------   01400  PRINT "I HAVE WON";C;"GAME(S)."
    0x5fa5fb0d4aa0 ----------   01410  PRINT "YOU HAVE WON";H;"GAME(S)."
    0x5fa5fb0d50a0 ----------   01420  PRINT "AND";Q-(C+H);"GAME(S) ENDED IN A TIE."
    0x5fa5fb0d5100 ----------   01430  PRINT
    0x5fa5fb0d5260 ----------   01440  PRINT "THANKS FOR PLAYING!!"
    0x5fa5fb0d52c0 ---------A   01450  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01180 - 10000    8830 

 */



/*
 *  Symbol Table Listing for 'basic/rocksp.bas'
 *
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
    K                        Integer     
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
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/rocksp.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5fa5fb0c86d0 ---------A   01000  PRINT TAB(21);"GAME OF ROCK, SCISSORS, PAPER"
    0x5fa5fb0c8670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5fa5fb0ca5e0 ---------A   01020  PRINT
    0x5fa5fb0c89e0 ---------A   01030  PRINT
    0x5fa5fb0c87f0 ---------A   01040  PRINT
    0x5fa5fb0c9040 ---------A T 01050  INPUT "HOW MANY GAMES";Q
    0x5fa5fb0c9480 ---------A   01060  IF Q<11 THEN 1090
    0x5fa5fb0ca6e0 ---------A   01070  PRINT "SORRY, BUT WE AREN'T ALLOWED TO PLAY THAT MANY."
    0x5fa5fb0cae70 ---------A   01080  GOTO 1050
    0x5fa5fb0c96e0 ---------A T 01090  FOR G=1 TO Q
    0x5fa5fb0c9740 ---------A   01100  PRINT
    0x5fa5fb0d0920 ---------A   01110  PRINT "GAME NUMBER";G
    0x5fa5fb0caff0 ---------A   01120  X=INT(RND(1)*3+1)
    0x5fa5fb0d1020 ---------A T 01130  PRINT "3=ROCK...2=SCISSORS...1=PAPER"
    0x5fa5fb0d11e0 ---------A   01140  INPUT "1...2...3...WHAT'S YOUR CHOICE";K
    0x5fa5fb0d1b40 ---------A   01150  IF (K-1)*(K-2)*(K-3)<>0 THEN PRINT "INVALID."
    0x5fa5fb0cb0b0 ---------A   01160  GOTO 1130
    0x5fa5fb0d52c0 ---------A   01170  END
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
int    C_int;                                     // Basic: C 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    K_int;                                     // Basic: K 
int    Q_int;                                     // Basic: Q 
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
    // 01000 PRINT TAB(21);"GAME OF ROCK, SCISSORS, PAPER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,21);strcat(buf,"GAME OF ROCK, SCISSORS, PAPER");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01050:
    // 01050 INPUT "HOW MANY GAMES";Q
    // Start of Basic INPUT statement 01050
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"HOW MANY GAMES");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Q_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01050
    // 01060 IF Q<11 THEN 1090
    if(Q_int<11)goto Lbl_01090;
    // 01070 PRINT "SORRY, BUT WE AREN'T ALLOWED TO PLAY THAT MANY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY, BUT WE AREN'T ALLOWED TO PLAY THAT MANY.");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 GOTO 1050
    goto Lbl_01050;

  Lbl_01090:
    // 01090 FOR G=1 TO Q
    for(G_int=1;G_int<=Q_int;G_int++){
        // 01100 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01110 PRINT "GAME NUMBER";G
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GAME NUMBER"); b2c_INT(buf,G_int);strcat(buf,"\n");fputs(buf,fh); };
        // 01120 X=INT(RND(1)*3+1)
        X_int = INT(RND(1)*3+1);

  Lbl_01130:
        // 01130 PRINT "3=ROCK...2=SCISSORS...1=PAPER"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"3=ROCK...2=SCISSORS...1=PAPER");strcat(buf,"\n");fputs(buf,fh); };
        // 01140 INPUT "1...2...3...WHAT'S YOUR CHOICE";K
        // Start of Basic INPUT statement 01140
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout,"1...2...3...WHAT'S YOUR CHOICE");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&K_int,args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01140
        // 01150 IF (K-1)*(K-2)*(K-3)<>0 THEN PRINT "INVALID."
        if((K_int-1)*(K_int-2)*(K_int-3)!=0) {
        }
        // 01160 GOTO 1130
        goto Lbl_01130;
        // 01170 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
