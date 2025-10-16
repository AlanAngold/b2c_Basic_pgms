/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/craps.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x58d0fd5b25d0 ---------A   01000 REM THIS PROGRAM SIMULATES THE GAME OF CRAPS
    0x58d0fd5c2ac0 ---------A   01010 RANDOMIZE
    0x58d0fd5c3e10 ---------A T 01020 PRINT"FOR RULES, TYPE 'RULES', OTHERWISE TYPE 'GO'"
    0x58d0fd5c1610 ---------A   01030 INPUT R$
    0x58d0fd5c15b0 ---------A   01040 IF R$="RULES" THEN 1080
    0x58d0fd5c30f0 ---------A   01050 IF R$="GO" THEN 1130
    0x58d0fd5c3ed0 ---------A   01060 PRINT"INVALID COMMAND"
    0x58d0fd5c1f80 ---------A   01070 GOTO 1020
    0x58d0fd5c3f90 ---------A T 01080 PRINT"A 7 OR 11 ON THE FIRST THROW WINS"
    0x58d0fd5c3d50 ---------A   01090 PRINT"YOU CAN ALSO WIN BY THROWING A 4,5,6,8,9,10"
    0x58d0fd5c3600 ---------A   01100 PRINT"AND MATCHING IT BEFORE THROWING A 7, IF ON"
    0x58d0fd5c40e0 ---------A   01110 PRINT"THE FIRST THROW A 2,3, OR A 12 COMES UP"
    0x58d0fd5c25e0 ---------A   01120 PRINT"YOU LOSE AUTOMATICALLY"
    0x58d0fd5c97c0 ---------A T 01130 LET J=0
    0x58d0fd5c9810 ---------A T 01140 GOSUB 1480
    0x58d0fd5c9b90 ---------A   01150 LET D1=N
    0x58d0fd5c9c00 ---------A   01160 GOSUB 1480
    0x58d0fd5c9ee0 ---------A   01170 LET D2=N
    0x58d0fd5ca2f0 ---------A   01180 LET D3=D1+D2
    0x58d0fd5ca620 ---------A   01190 LET J=J+1
    0x58d0fd5ca870 ---------A   01200 IF J=1 THEN 1250
    0x58d0fd5cabb0 ---------A   01210 IF D3=D4 THEN 1440
    0x58d0fd5cadf0 ---------A   01220 IF D3=7 THEN 1460
    0x58d0fd5cb050 ---------A T 01230 PRINT"YOU THROW A ";D3
    0x58d0fd5cb0c0 ---------A   01240 GOTO 1140
    0x58d0fd5cb300 ---------A T 01250 IF D3=7 THEN 1320
    0x58d0fd5cb560 ---------A   01260 IF D3=2 THEN 1340
    0x58d0fd5cb7c0 ---------A   01270 IF D3=3 THEN 1340
    0x58d0fd5cba20 ---------A   01280 IF D3=12 THEN 1340
    0x58d0fd5cbc80 ---------A   01290 IF D3=11 THEN 1320
    0x58d0fd5cbec0 ---------A   01300 LET D4=D3
    0x58d0fd5cbf40 ---------A   01310 GOTO 1230
    0x58d0fd5cc280 ---------A T 01320 PRINT"YOU THROW A ";D3;" YOU WIN"
    0x58d0fd5cc510 ---------A   01330 GOTO 1350
    0x58d0fd5cc850 ---------A T 01340 PRINT"YOU THROW A ";D3;" YOU LOSE"
    0x58d0fd5cc8e0 ---------A T 01350 PRINT
    0x58d0fd5cca40 ---------A   01360 PRINT"TO CONTINUE TYPE 'Y', IF NOT TYPE'N'"
    0x58d0fd5ccc60 ---------A   01370 INPUT L$
    0x58d0fd5ccef0 ---------A   01380 IF L$="Y" THEN 1420
    0x58d0fd5cd190 ---------A   01390 IF L$="N" THEN 1400
    0x58d0fd5cd310 ---------A T 01400 PRINT"WHAT? QUITTING ALREADY, CRAP OUT DID YOU?"
    0x58d0fd5cd360 ---------A   01410 STOP
    0x58d0fd5cd3e0 ---------A T 01420 PRINT
    0x58d0fd5cd470 ---------A   01430 GOTO 1130
    0x58d0fd5cd7b0 ---------A T 01440 PRINT"YOU THROW A ";D3;" YOU WIN BY MATCHING"
    0x58d0fd5cd840 ---------A   01450 GOTO 1350
    0x58d0fd5cdb80 ---------A T 01460 PRINT"YOU THROW A ";D3;" SORRY, YOU LOSE"
    0x58d0fd5cdbf0 ---------A   01470 GOTO 1350
    0x58d0fd5ce0f0 ---------B G 01480 LET N=1+INT(6*RND)
    0x58d0fd5ce140 ---------B   01490 RETURN
    0x58d0fd5ce1a0 ---------A   01500 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01020      01070T
     01080      01040T
     01130      01050T, 01430T
     01140      01240T
     01230      01310T
     01250      01200T
     01320      01250T, 01290T
     01340      01260T, 01270T, 01280T
     01350      01330T, 01450T, 01470T
     01400      01390T
     01420      01380T
     01440      01210T
     01460      01220T
     01480      01140G, 01160G

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x58d0fd5b25d0 (01000)   0x000000000000 (00000)   0x58d0fd5ce1a0 (01500)   0x58d0fd5ce1a0 (01500)   
   B) 0x58d0fd5ce0f0 (01480)   0x58d0fd5ce0f0 (01480)   0x58d0fd5ce140 (01490)   0x58d0fd5ce140 (01490)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01520 - 10000    8490 

 */



/*
 *  Symbol Table Listing for 'basic/craps.bas'
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
    D1                       Float       
    D2                       Float       
    D3                       Float       
    D4                       Float       
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
    J                        Float       
    L$                       String      
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
    N                        Float       
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R$                       String      
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
 *  Listing of basic/craps.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x58d0fd5b25d0 ---------A   01000 REM THIS PROGRAM SIMULATES THE GAME OF CRAPS
    0x58d0fd5c2ac0 ---------A   01010 RANDOMIZE
    0x58d0fd5c3e10 ---------A T 01020 PRINT"FOR RULES, TYPE 'RULES', OTHERWISE TYPE 'GO'"
    0x58d0fd5c1610 ---------A   01030 INPUT R$
    0x58d0fd5c15b0 ---------A   01040 IF R$="RULES" THEN 1080
    0x58d0fd5c30f0 ---------A   01050 IF R$="GO" THEN 1130
    0x58d0fd5c3ed0 ---------A   01060 PRINT"INVALID COMMAND"
    0x58d0fd5c1f80 ---------A   01070 GOTO 1020
    0x58d0fd5c3f90 ---------A T 01080 PRINT"A 7 OR 11 ON THE FIRST THROW WINS"
    0x58d0fd5c3d50 ---------A   01090 PRINT"YOU CAN ALSO WIN BY THROWING A 4,5,6,8,9,10"
    0x58d0fd5c3600 ---------A   01100 PRINT"AND MATCHING IT BEFORE THROWING A 7, IF ON"
    0x58d0fd5c40e0 ---------A   01110 PRINT"THE FIRST THROW A 2,3, OR A 12 COMES UP"
    0x58d0fd5c25e0 ---------A   01120 PRINT"YOU LOSE AUTOMATICALLY"
    0x58d0fd5c97c0 ---------A T 01130 LET J=0
    0x58d0fd5c9810 ---------A T 01140 GOSUB 1490
    0x58d0fd5c9b90 ---------A   01150 LET D1=N
    0x58d0fd5c9c00 ---------A   01160 GOSUB 1490
    0x58d0fd5c9ee0 ---------A   01170 LET D2=N
    0x58d0fd5ca2f0 ---------A   01180 LET D3=D1+D2
    0x58d0fd5ca620 ---------A   01190 LET J=J+1
    0x58d0fd5ca870 ---------A   01200 IF J=1 THEN 1250
    0x58d0fd5cabb0 ---------A   01210 IF D3=D4 THEN 1440
    0x58d0fd5cadf0 ---------A   01220 IF D3=7 THEN 1460
    0x58d0fd5cb050 ---------A T 01230 PRINT"YOU THROW A ";D3
    0x58d0fd5cb0c0 ---------A   01240 GOTO 1140
    0x58d0fd5cb300 ---------A T 01250 IF D3=7 THEN 1320
    0x58d0fd5cb560 ---------A   01260 IF D3=2 THEN 1340
    0x58d0fd5cb7c0 ---------A   01270 IF D3=3 THEN 1340
    0x58d0fd5cba20 ---------A   01280 IF D3=12 THEN 1340
    0x58d0fd5cbc80 ---------A   01290 IF D3=11 THEN 1320
    0x58d0fd5cbec0 ---------A   01300 LET D4=D3
    0x58d0fd5cbf40 ---------A   01310 GOTO 1230
    0x58d0fd5cc280 ---------A T 01320 PRINT"YOU THROW A ";D3;" YOU WIN"
    0x58d0fd5cc510 ---------A   01330 GOTO 1350
    0x58d0fd5cc850 ---------A T 01340 PRINT"YOU THROW A ";D3;" YOU LOSE"
    0x58d0fd5cc8e0 ---------A T 01350 PRINT
    0x58d0fd5cca40 ---------A   01360 PRINT"TO CONTINUE TYPE 'Y', IF NOT TYPE'N'"
    0x58d0fd5ccc60 ---------A   01370 INPUT L$
    0x58d0fd5ccef0 ---------A   01380 IF L$="Y" THEN 1420
    0x58d0fd5cd190 ---------A   01390 IF L$="N" THEN 1400
    0x58d0fd5cd310 ---------A T 01400 PRINT"WHAT? QUITTING ALREADY, CRAP OUT DID YOU?"
    0x58d0fd5cd360 ---------A   01410 STOP
    0x58d0fd5cd3e0 ---------A T 01420 PRINT
    0x58d0fd5cd470 ---------A   01430 GOTO 1130
    0x58d0fd5cd7b0 ---------A T 01440 PRINT"YOU THROW A ";D3;" YOU WIN BY MATCHING"
    0x58d0fd5cd840 ---------A   01450 GOTO 1350
    0x58d0fd5cdb80 ---------A T 01460 PRINT"YOU THROW A ";D3;" SORRY, YOU LOSE"
    0x58d0fd5cdbf0 ---------A   01470 GOTO 1350
    0x58d0fd5ce1a0 ---------A   01480 END
    0x58d0fd5ce0f0 ---------B G 01490 LET N=1+INT(6*RND)
    0x58d0fd5d0690 ---------B   01500 GOTO 01510
    0x58d0fd5d06d0 ---------B T 01510 RETURN
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
float  D1_flt;                                    // Basic: D1 
float  D2_flt;                                    // Basic: D2 
float  D3_flt;                                    // Basic: D3 
float  D4_flt;                                    // Basic: D4 
float  J_flt;                                     // Basic: J 
char*  L_str;                                     // Basic: L$ 
float  N_flt;                                     // Basic: N 
char*  R_str;                                     // Basic: R$ 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01490();

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

void Routine_01490(){
    // 01490 LET N=1+INT(6*RND)
    N_flt = 1+INT(6*RND());
    // 01500 GOTO 01510
    goto Lbl_01510;

  Lbl_01510:
    // 01510 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM THIS PROGRAM SIMULATES THE GAME OF CRAPS
    // 01010 RANDOMIZE
    RANDOMIZE();

  Lbl_01020:
    // 01020 PRINT"FOR RULES, TYPE 'RULES', OTHERWISE TYPE 'GO'"
    b2c_printf("For rules, type 'rules', otherwise type 'go'\n");
    // 01030 INPUT R$
    // Start of Basic INPUT statement 01030
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&R_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01030
    // 01040 IF R$="RULES" THEN 1080
    if(strcmp(R_str,"Rules")==0)goto Lbl_01080;
    // 01050 IF R$="GO" THEN 1130
    if(strcmp(R_str,"Go")==0)goto Lbl_01130;
    // 01060 PRINT"INVALID COMMAND"
    b2c_printf("Invalid command\n");
    // 01070 GOTO 1020
    goto Lbl_01020;

  Lbl_01080:
    // 01080 PRINT"A 7 OR 11 ON THE FIRST THROW WINS"
    b2c_printf("A 7 or 11 on the first throw wins\n");
    // 01090 PRINT"YOU CAN ALSO WIN BY THROWING A 4,5,6,8,9,10"
    b2c_printf("You can also win by throwing a 4,5,6,8,9,10\n");
    // 01100 PRINT"AND MATCHING IT BEFORE THROWING A 7, IF ON"
    b2c_printf("And matching it before throwing a 7, if on\n");
    // 01110 PRINT"THE FIRST THROW A 2,3, OR A 12 COMES UP"
    b2c_printf("The first throw a 2,3, or a 12 comes up\n");
    // 01120 PRINT"YOU LOSE AUTOMATICALLY"
    b2c_printf("You lose automatically\n");

  Lbl_01130:
    // 01130 LET J=0
    J_flt = 0;

  Lbl_01140:
    // 01140 GOSUB 1490
    Routine_01490();
    // 01150 LET D1=N
    D1_flt = N_flt;
    // 01160 GOSUB 1490
    Routine_01490();
    // 01170 LET D2=N
    D2_flt = N_flt;
    // 01180 LET D3=D1+D2
    D3_flt = D1_flt+D2_flt;
    // 01190 LET J=J+1
    J_flt = J_flt+1;
    // 01200 IF J=1 THEN 1250
    if(J_flt==1)goto Lbl_01250;
    // 01210 IF D3=D4 THEN 1440
    if(D3_flt==D4_flt)goto Lbl_01440;
    // 01220 IF D3=7 THEN 1460
    if(D3_flt==7)goto Lbl_01460;

  Lbl_01230:
    // 01230 PRINT"YOU THROW A ";D3
    b2c_printf("You throw a  %.2f \n",D3_flt);
    // 01240 GOTO 1140
    goto Lbl_01140;

  Lbl_01250:
    // 01250 IF D3=7 THEN 1320
    if(D3_flt==7)goto Lbl_01320;
    // 01260 IF D3=2 THEN 1340
    if(D3_flt==2)goto Lbl_01340;
    // 01270 IF D3=3 THEN 1340
    if(D3_flt==3)goto Lbl_01340;
    // 01280 IF D3=12 THEN 1340
    if(D3_flt==12)goto Lbl_01340;
    // 01290 IF D3=11 THEN 1320
    if(D3_flt==11)goto Lbl_01320;
    // 01300 LET D4=D3
    D4_flt = D3_flt;
    // 01310 GOTO 1230
    goto Lbl_01230;

  Lbl_01320:
    // 01320 PRINT"YOU THROW A ";D3;" YOU WIN"
    b2c_printf("You throw a  %.2f You throw a  you win\n",D3_flt);
    // 01330 GOTO 1350
    goto Lbl_01350;

  Lbl_01340:
    // 01340 PRINT"YOU THROW A ";D3;" YOU LOSE"
    b2c_printf("You throw a  %.2f You throw a  you lose\n",D3_flt);

  Lbl_01350:
    // 01350 PRINT
    b2c_printf("\n");
    // 01360 PRINT"TO CONTINUE TYPE 'Y', IF NOT TYPE'N'"
    b2c_printf("To continue type 'y', if not type'n'\n");
    // 01370 INPUT L$
    // Start of Basic INPUT statement 01370
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&L_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01370
    // 01380 IF L$="Y" THEN 1420
    if(strcmp(L_str,"Y")==0)goto Lbl_01420;
    // 01390 IF L$="N" THEN 1400
    if(strcmp(L_str,"N")==0)goto Lbl_01400;

  Lbl_01400:
    // 01400 PRINT"WHAT? QUITTING ALREADY, CRAP OUT DID YOU?"
    b2c_printf("What? Quitting already, crap out did you?\n");
    // 01410 STOP
    exit(1);

  Lbl_01420:
    // 01420 PRINT
    b2c_printf("\n");
    // 01430 GOTO 1130
    goto Lbl_01130;

  Lbl_01440:
    // 01440 PRINT"YOU THROW A ";D3;" YOU WIN BY MATCHING"
    b2c_printf("You throw a  %.2f You throw a  you win by matching\n",D3_flt);
    // 01450 GOTO 1350
    goto Lbl_01350;

  Lbl_01460:
    // 01460 PRINT"YOU THROW A ";D3;" SORRY, YOU LOSE"
    b2c_printf("You throw a  %.2f You throw a  sorry, you lose\n",D3_flt);
    // 01470 GOTO 1350
    goto Lbl_01350;
    // 01480 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
