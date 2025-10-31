/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/hilo.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62be3af596d0 ---------A   00010  PRINT TAB(34);"HI LO"
    0x62be3af59670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x62be3af4a2b0 ---------A   00030  PRINT:PRINT:PRINT
    0x62be3af5baa0 ---------A   00100  PRINT "THIS IS THE GAME OF HI LO.":PRINT
    0x62be3af5a040 ---------A   00110  PRINT "YOU WILL HAVE 6 TRIES TO GUESS THE AMOUNT OF MONEY IN THE"
    0x62be3af59e90 ---------A   00120  PRINT "HI LO JACKPOT, WHICH IS BETWEEN 1 AND 100 DOLLARS.  IF YOU"
    0x62be3af5b6d0 ---------A   00130  PRINT "GUESS THE AMOUNT, YOU WIN ALL THE MONEY IN THE JACKPOT!"
    0x62be3af5c0f0 ---------A   00140  PRINT "THEN YOU GET ANOTHER CHANCE TO WIN MORE MONEY.  HOWEVER,"
    0x62be3af5a6c0 ---------A   00150  PRINT "IF YOU DO NOT GUESS THE AMOUNT, THE GAME ENDS.":PRINT
    0x62be3af5bf90 ---------A   00160  R=0
    0x62be3af61b30 ---------A T 00170  B=0:PRINT
    0x62be3af62190 ---------A   00180  Y=INT(100*RND(1)+1)
    0x62be3af62300 ---------A T 00200  PRINT "YOUR GUESS";
    0x62be3af62520 ---------A   00210  INPUT A
    0x62be3af62860 ---------A   00220  B=B+1
    0x62be3af62ad0 ---------A   00230  IF A=Y THEN 300
    0x62be3af62d70 ---------A   00240  IF A>Y THEN 270
    0x62be3af62ef0 ---------A   00250  PRINT "YOUR GUESS IS TOO LOW.":GOTO 280
    0x62be3af63000 ---------A T 00270  PRINT "YOUR GUESS IS TOO HIGH."
    0x62be3af632e0 ---------A T 00280  PRINT:IF B<6 THEN 200
    0x62be3af63560 ---------A   00290  PRINT "YOU BLEW IT...TOO BAD...THE NUMBER WAS";Y
    0x62be3af637f0 ---------A   00295  R=0:GOTO 350
    0x62be3af63b20 ---------A T 00300  PRINT "GOT IT!!!!!!!!!!   YOU WIN";Y;"DOLLARS."
    0x62be3af63ea0 ---------A   00310  R=R+Y
    0x62be3af641f0 ---------A   00320  PRINT "YOUR TOTAL WINNINGS ARE NOW";R;"DOLLARS."
    0x62be3af643f0 ---------A T 00350  PRINT:PRINT "PLAY AGAIN (YES OR NO)";
    0x62be3af648a0 ---------A   00360  INPUT A$:IF A$="YES" THEN 170
    0x62be3af64a80 ---------A   00380  PRINT:PRINT "SO LONG.  HOPE YOU ENJOYED YOURSELF!!!"
    0x62be3af64ae0 ---------A   00390  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00170      00360T
     00200      00280T
     00270      00240T
     00280      00250T
     00300      00230T
     00350      00295T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x62be3af596d0 (00010)   0x62be3af596d0 (00010)   0x62be3af64ae0 (00390)   0x62be3af64ae0 (00390)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/hilo.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62be3af596d0 ---------A   00010  PRINT TAB(34);"HI LO"
    0x62be3af59670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x62be3af5afc0 ----------   00030  PRINT
    0x62be3af5a2d0 ----------        a PRINT
    0x62be3af4a2b0 ---------A        b PRINT
    0x62be3af5ba40 ----------   00100  PRINT "THIS IS THE GAME OF HI LO."
    0x62be3af5baa0 ---------A        a PRINT
    0x62be3af5a040 ---------A   00110  PRINT "YOU WILL HAVE 6 TRIES TO GUESS THE AMOUNT OF MONEY IN THE"
    0x62be3af59e90 ---------A   00120  PRINT "HI LO JACKPOT, WHICH IS BETWEEN 1 AND 100 DOLLARS.  IF YOU"
    0x62be3af5b6d0 ---------A   00130  PRINT "GUESS THE AMOUNT, YOU WIN ALL THE MONEY IN THE JACKPOT!"
    0x62be3af5c0f0 ---------A   00140  PRINT "THEN YOU GET ANOTHER CHANCE TO WIN MORE MONEY.  HOWEVER,"
    0x62be3af5a660 ----------   00150  PRINT "IF YOU DO NOT GUESS THE AMOUNT, THE GAME ENDS."
    0x62be3af5a6c0 ---------A        a PRINT
    0x62be3af5bf90 ---------A   00160  R=0
    0x62be3af61ae0 ---------- T 00170  B=0
    0x62be3af61b30 ---------A T      a PRINT
    0x62be3af62190 ---------A   00180  Y=INT(100*RND(1)+1)
    0x62be3af62300 ---------A T 00200  PRINT "YOUR GUESS";
    0x62be3af62520 ---------A   00210  INPUT A
    0x62be3af62860 ---------A   00220  B=B+1
    0x62be3af62ad0 ---------A   00230  IF A=Y THEN 300
    0x62be3af62d70 ---------A   00240  IF A>Y THEN 270
    0x62be3af62e90 ----------   00250  PRINT "YOUR GUESS IS TOO LOW."
    0x62be3af62ef0 ---------A        a GOTO 280
    0x62be3af63000 ---------A T 00270  PRINT "YOUR GUESS IS TOO HIGH."
    0x62be3af63060 ---------- T 00280  PRINT
    0x62be3af632e0 ---------A T      a IF B<6 THEN 200
    0x62be3af63560 ---------A   00290  PRINT "YOU BLEW IT...TOO BAD...THE NUMBER WAS";Y
    0x62be3af63760 ----------   00295  R=0
    0x62be3af637f0 ---------A        a GOTO 350
    0x62be3af63b20 ---------A T 00300  PRINT "GOT IT!!!!!!!!!!   YOU WIN";Y;"DOLLARS."
    0x62be3af63ea0 ---------A   00310  R=R+Y
    0x62be3af641f0 ---------A   00320  PRINT "YOUR TOTAL WINNINGS ARE NOW";R;"DOLLARS."
    0x62be3af64250 ---------- T 00350  PRINT
    0x62be3af643f0 ---------A T      a PRINT "PLAY AGAIN (YES OR NO)";
    0x62be3af645f0 ----------   00360  INPUT A$
    0x62be3af648a0 ---------A        a IF A$="YES" THEN 170
    0x62be3af64900 ----------   00380  PRINT
    0x62be3af64a80 ---------A        a PRINT "SO LONG.  HOPE YOU ENJOYED YOURSELF!!!"
    0x62be3af64ae0 ---------A   00390  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/hilo.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62be3af596d0 ---------A   01000  PRINT TAB(34);"HI LO"
    0x62be3af59670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x62be3af5afc0 ----------   01020  PRINT
    0x62be3af5a2d0 ----------   01030  PRINT
    0x62be3af4a2b0 ---------A   01040  PRINT
    0x62be3af5ba40 ----------   01050  PRINT "THIS IS THE GAME OF HI LO."
    0x62be3af5baa0 ---------A   01060  PRINT
    0x62be3af5a040 ---------A   01070  PRINT "YOU WILL HAVE 6 TRIES TO GUESS THE AMOUNT OF MONEY IN THE"
    0x62be3af59e90 ---------A   01080  PRINT "HI LO JACKPOT, WHICH IS BETWEEN 1 AND 100 DOLLARS.  IF YOU"
    0x62be3af5b6d0 ---------A   01090  PRINT "GUESS THE AMOUNT, YOU WIN ALL THE MONEY IN THE JACKPOT!"
    0x62be3af5c0f0 ---------A   01100  PRINT "THEN YOU GET ANOTHER CHANCE TO WIN MORE MONEY.  HOWEVER,"
    0x62be3af5a660 ----------   01110  PRINT "IF YOU DO NOT GUESS THE AMOUNT, THE GAME ENDS."
    0x62be3af5a6c0 ---------A   01120  PRINT
    0x62be3af5bf90 ---------A   01130  R=0
    0x62be3af61ae0 ----------   01140  B=0
    0x62be3af61b30 ---------A   01150  PRINT
    0x62be3af62190 ---------A   01160  Y=INT(100*RND(1)+1)
    0x62be3af62300 ---------A   01170  PRINT "YOUR GUESS";
    0x62be3af62520 ---------A   01180  INPUT A
    0x62be3af62860 ---------A   01190  B=B+1
    0x62be3af62ad0 ---------A   01200  IF A=Y THEN 1300
    0x62be3af62d70 ---------A   01210  IF A>Y THEN 1240
    0x62be3af62e90 ----------   01220  PRINT "YOUR GUESS IS TOO LOW."
    0x62be3af62ef0 ---------A   01230  GOTO 1260
    0x62be3af63000 ---------A   01240  PRINT "YOUR GUESS IS TOO HIGH."
    0x62be3af63060 ----------   01250  PRINT
    0x62be3af632e0 ---------A   01260  IF B<6 THEN 1170
    0x62be3af63560 ---------A   01270  PRINT "YOU BLEW IT...TOO BAD...THE NUMBER WAS";Y
    0x62be3af63760 ----------   01280  R=0
    0x62be3af637f0 ---------A   01290  GOTO 1340
    0x62be3af63b20 ---------A   01300  PRINT "GOT IT!!!!!!!!!!   YOU WIN";Y;"DOLLARS."
    0x62be3af63ea0 ---------A   01310  R=R+Y
    0x62be3af641f0 ---------A   01320  PRINT "YOUR TOTAL WINNINGS ARE NOW";R;"DOLLARS."
    0x62be3af64250 ----------   01330  PRINT
    0x62be3af643f0 ---------A   01340  PRINT "PLAY AGAIN (YES OR NO)";
    0x62be3af645f0 ----------   01350  INPUT A$
    0x62be3af648a0 ---------A   01360  IF A$="YES" THEN 1150
    0x62be3af64900 ----------   01370  PRINT
    0x62be3af64a80 ---------A   01380  PRINT "SO LONG.  HOPE YOU ENJOYED YOURSELF!!!"
    0x62be3af64ae0 ---------A   01390  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01400 - 10000    8610 

 */



/*
 *  Symbol Table Listing for 'basic/hilo.bas'
 *
    A                        Integer     
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
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
    R                        Integer     
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
    Y                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/hilo.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62be3af596d0 ---------A   01000  PRINT TAB(34);"HI LO"
    0x62be3af59670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x62be3af5afc0 ---------A   01020  PRINT
    0x62be3af5a2d0 ---------A   01030  PRINT
    0x62be3af4a2b0 ---------A   01040  PRINT
    0x62be3af5ba40 ---------A   01050  PRINT "THIS IS THE GAME OF HI LO."
    0x62be3af5baa0 ---------A   01060  PRINT
    0x62be3af5a040 ---------A   01070  PRINT "YOU WILL HAVE 6 TRIES TO GUESS THE AMOUNT OF MONEY IN THE"
    0x62be3af59e90 ---------A   01080  PRINT "HI LO JACKPOT, WHICH IS BETWEEN 1 AND 100 DOLLARS.  IF YOU"
    0x62be3af5b6d0 ---------A   01090  PRINT "GUESS THE AMOUNT, YOU WIN ALL THE MONEY IN THE JACKPOT!"
    0x62be3af5c0f0 ---------A   01100  PRINT "THEN YOU GET ANOTHER CHANCE TO WIN MORE MONEY.  HOWEVER,"
    0x62be3af5a660 ---------A   01110  PRINT "IF YOU DO NOT GUESS THE AMOUNT, THE GAME ENDS."
    0x62be3af5a6c0 ---------A   01120  PRINT
    0x62be3af5bf90 ---------A   01130  R=0
    0x62be3af61ae0 ---------A   01140  B=0
    0x62be3af61b30 ---------A T 01150  PRINT
    0x62be3af62190 ---------A   01160  Y=INT(100*RND(1)+1)
    0x62be3af62300 ---------A T 01170  PRINT "YOUR GUESS";
    0x62be3af62520 ---------A   01180  INPUT A
    0x62be3af62860 ---------A   01190  B=B+1
    0x62be3af62ad0 ---------A   01200  IF A=Y THEN 1300
    0x62be3af62d70 ---------A   01210  IF A>Y THEN 1240
    0x62be3af62e90 ---------A   01220  PRINT "YOUR GUESS IS TOO LOW."
    0x62be3af62ef0 ---------A   01230  GOTO 1260
    0x62be3af63000 ---------A T 01240  PRINT "YOUR GUESS IS TOO HIGH."
    0x62be3af63060 ---------A   01250  PRINT
    0x62be3af632e0 ---------A T 01260  IF B<6 THEN 1170
    0x62be3af63560 ---------A   01270  PRINT "YOU BLEW IT...TOO BAD...THE NUMBER WAS";Y
    0x62be3af63760 ---------A   01280  R=0
    0x62be3af637f0 ---------A   01290  GOTO 1340
    0x62be3af63b20 ---------A T 01300  PRINT "GOT IT!!!!!!!!!!   YOU WIN";Y;"DOLLARS."
    0x62be3af63ea0 ---------A   01310  R=R+Y
    0x62be3af641f0 ---------A   01320  PRINT "YOUR TOTAL WINNINGS ARE NOW";R;"DOLLARS."
    0x62be3af64250 ---------A   01330  PRINT
    0x62be3af643f0 ---------A T 01340  PRINT "PLAY AGAIN (YES OR NO)";
    0x62be3af645f0 ---------A   01350  INPUT A$
    0x62be3af648a0 ---------A   01360  IF A$="YES" THEN 1150
    0x62be3af64900 ---------A   01370  PRINT
    0x62be3af64a80 ---------A   01380  PRINT "SO LONG.  HOPE YOU ENJOYED YOURSELF!!!"
    0x62be3af64ae0 ---------A   01390  END
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
int    R_int;                                     // Basic: R 
int    Y_int;                                     // Basic: Y 
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
    // 01000 PRINT TAB(34);"HI LO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,34);strcat(buf,"HI LO");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "THIS IS THE GAME OF HI LO."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS THE GAME OF HI LO.");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "YOU WILL HAVE 6 TRIES TO GUESS THE AMOUNT OF MONEY IN THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU WILL HAVE 6 TRIES TO GUESS THE AMOUNT OF MONEY IN THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "HI LO JACKPOT, WHICH IS BETWEEN 1 AND 100 DOLLARS.  IF YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HI LO JACKPOT, WHICH IS BETWEEN 1 AND 100 DOLLARS.  IF YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "GUESS THE AMOUNT, YOU WIN ALL THE MONEY IN THE JACKPOT!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GUESS THE AMOUNT, YOU WIN ALL THE MONEY IN THE JACKPOT!");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "THEN YOU GET ANOTHER CHANCE TO WIN MORE MONEY.  HOWEVER,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THEN YOU GET ANOTHER CHANCE TO WIN MORE MONEY.  HOWEVER,");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "IF YOU DO NOT GUESS THE AMOUNT, THE GAME ENDS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF YOU DO NOT GUESS THE AMOUNT, THE GAME ENDS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01130 R=0
    R_int = 0;
    // 01140 B=0
    B_int = 0;

  Lbl_01150:
    // 01150 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01160 Y=INT(100*RND(1)+1)
    Y_int = INT(100*RND(1)+1);

  Lbl_01170:
    // 01170 PRINT "YOUR GUESS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR GUESS");fputs(buf,fh); };
    // 01180 INPUT A
    // Start of Basic INPUT statement 01180
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
    }; // End of Basic INPUT statement 01180
    // 01190 B=B+1
    B_int = B_int+1;
    // 01200 IF A=Y THEN 1300
    if(A_int==Y_int)goto Lbl_01300;
    // 01210 IF A>Y THEN 1240
    if(A_int>Y_int)goto Lbl_01240;
    // 01220 PRINT "YOUR GUESS IS TOO LOW."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR GUESS IS TOO LOW.");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 GOTO 1260
    goto Lbl_01260;

  Lbl_01240:
    // 01240 PRINT "YOUR GUESS IS TOO HIGH."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR GUESS IS TOO HIGH.");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01260:
    // 01260 IF B<6 THEN 1170
    if(B_int<6)goto Lbl_01170;
    // 01270 PRINT "YOU BLEW IT...TOO BAD...THE NUMBER WAS";Y
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU BLEW IT...TOO BAD...THE NUMBER WAS"); b2c_INT(buf,Y_int);strcat(buf,"\n");fputs(buf,fh); };
    // 01280 R=0
    R_int = 0;
    // 01290 GOTO 1340
    goto Lbl_01340;

  Lbl_01300:
    // 01300 PRINT "GOT IT!!!!!!!!!!   YOU WIN";Y;"DOLLARS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOT IT!!!!!!!!!!   YOU WIN"); b2c_INT(buf,Y_int);strcat(buf,"DOLLARS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01310 R=R+Y
    R_int = R_int+Y_int;
    // 01320 PRINT "YOUR TOTAL WINNINGS ARE NOW";R;"DOLLARS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR TOTAL WINNINGS ARE NOW"); b2c_INT(buf,R_int);strcat(buf,"DOLLARS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01340:
    // 01340 PRINT "PLAY AGAIN (YES OR NO)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLAY AGAIN (YES OR NO)");fputs(buf,fh); };
    // 01350 INPUT A$
    // Start of Basic INPUT statement 01350
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
    }; // End of Basic INPUT statement 01350
    // 01360 IF A$="YES" THEN 1150
    if(strcmp(A_str,"YES")==0)goto Lbl_01150;
    // 01370 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01380 PRINT "SO LONG.  HOPE YOU ENJOYED YOURSELF!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SO LONG.  HOPE YOU ENJOYED YOURSELF!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01390 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
