/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/3dpltcc1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5dac626a95d0 ---------A   00001 REM NOTE: Basic language type forced to be:
    0x5dac626b9f00 ---------A   00002 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5dac626b9210 ---------A   00010 CLS
    0x5dac626b9ac0 ---------A   00020 PRINT@283,"3-D PLOT"
    0x5dac626bae70 ---------A   00030 PRINT@409,"COPYRIGHT BY"
    0x5dac626baf30 ---------A   00040 PRINT@534,"CREATIVE COMPUTING"
    0x5dac626baff0 ---------A   00050 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x5dac626b8610 ---------A   00060 FOR QZ=1 TO 1500
    0x5dac626b8f80 ---------A   00070 NEXT
    0x5dac626b8fe0 ---------A   00080 CLS
    0x5dac626badb0 ---------A   00160 Q=0
    0x5dac626b8b20 ---------A   00170 GOTO190
    0x5dac626bb0d0 ---------A T 00180 PRINT"THERE ARE ONLY SIX FUNCTIONS. ONE THROUGH SIX INCLUSIVE"
    0x5dac626b9620 ---------A T 00190 CLS:PRINT"WHICH FUNCTION WOULD YOU LIKE ME TO PRINT (1-6)"
    0x5dac626c0ba0 ---------A   00200 INPUT A: IF A<1 OR A>6 THEN 180
    0x5dac626c0c00 ---------A   00210 CLS
    0x5dac626c0fe0 ---------A   00220 FOR X=-30 TO 30 STEP 1.5
    0x5dac626c1260 ---------A   00230 L=0
    0x5dac626c1b40 ---------A   00240 Y1=5*INT(SQR(900-X*X)/5)
    0x5dac626c1fd0 ---------A   00250 FOR Y=Y1 TO -Y1 STEP -5
    0x5dac626c2710 ---------A   00260 P=SQR(X*X+Y*Y)
    0x5dac626c2780 ---------A   00270 GOSUB 390
    0x5dac626c2aa0 ---------A   00280 IF Z<=L THEN 330
    0x5dac626c2ce0 ---------A   00290 L=Z
    0x5dac626c2f30 ---------A   00300 IF Q=0 THEN 320
    0x5dac626c3210 ---------A T 00320 PRINT TAB(Z);"*";
    0x5dac626c3340 ---------A T 00330 NEXT Y
    0x5dac626c35a0 ---------A   00340 IF Q=0 THEN 360
    0x5dac626c3620 ---------A T 00360 PRINT
    0x5dac626c3750 ---------A   00370 NEXT X
    0x5dac626c37e0 ---------A   00380 GOTO 520
    0x5dac626c3dc0 ---------B G 00390 ON A GOTO 400,420,440,460,480,500
    0x5dac626c4930 ---------B T 00400 Z=INT(25+(SQR(900.01-P*P)*.9-2)-.7*Y)
    0x5dac626c4bd0 ---------B   00410 GOTO510
    0x5dac626c5630 ---------B T 00420 Z=INT(25+(30*CSNG(-P*P/100))-.7*Y)
    0x5dac626c56b0 ---------B   00430 GOTO510
    0x5dac626c6130 ---------B T 00440 Z=INT(25+(30*(COS(P/16)^2))-.7*Y)
    0x5dac626c61b0 ---------B   00450 GOTO510
    0x5dac626c6bf0 ---------B T 00460 Z=INT(25+(30-30*SIN(P/19))-.7*Y)
    0x5dac626c6c80 ---------B   00470 GOTO510
    0x5dac626c77a0 ---------B T 00480 Z=INT(25+(30*CSNG(-COS(P/16))-30)-.7*Y)
    0x5dac626c7820 ---------B   00490 GOTO510
    0x5dac626c8260 ---------B T 00500 Z=INT(25+(30+4*SIN(P/15))-.7*Y)
    0x5dac626c82b0 ---------B T 00510 RETURN
    0x5dac626c8490 ---------A T 00520 PRINT"WOULD YOU LIKE ME TO PRINT ANOTHER FUNCTION";
    0x5dac626c8aa0 ---------A   00530 INPUTB$:IF LEFT$(B$,1)="Y"THEN190
    0x5dac626c8b00 ---------A   00540 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00180      00200T
     00190      00170T, 00530T
     00320      00300T
     00330      00280T
     00360      00340T
     00390      00270G
     00400      00390T
     00420      00390T
     00440      00390T
     00460      00390T
     00480      00390T
     00500      00390T
     00510      00410T, 00430T, 00450T, 00470T, 00490T
     00520      00380T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5dac626a95d0 (00001)   0x000000000000 (00000)   0x5dac626c8b00 (00540)   0x5dac626c8b00 (00540)   
   B) 0x5dac626c3dc0 (00390)   0x5dac626c3dc0 (00390)   0x5dac626c82b0 (00510)   0x5dac626c82b0 (00510)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01480 - 10000    8530 

 */



/*
 *  Symbol Table Listing for 'basic/3dpltcc1.bas'
 *
    A                        Float       
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$                       String      
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
    L                        Float       
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
    P                        Float       
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Float       
    QZ                       Float       
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
    X                        Float       
    Y                        Float       
    Y1                       Float       
    Z                        Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/3dpltcc1.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5dac626a95d0 ---------A   01000 REM NOTE: Basic language type forced to be:
    0x5dac626b9f00 ---------A   01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5dac626b9210 ---------A   01020 CLS
    0x5dac626b9ac0 ---------A   01030 PRINT@283,"3-D PLOT"
    0x5dac626bae70 ---------A   01040 PRINT@409,"COPYRIGHT BY"
    0x5dac626baf30 ---------A   01050 PRINT@534,"CREATIVE COMPUTING"
    0x5dac626baff0 ---------A   01060 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x5dac626b8610 ---------A   01070 FOR QZ=1 TO 1500
    0x5dac626b8f80 ---------A   01080 NEXT
    0x5dac626b8fe0 ---------A   01090 CLS
    0x5dac626badb0 ---------A   01100 Q=0
    0x5dac626b8b20 ---------A   01110 GOTO1130
    0x5dac626bb0d0 ---------A T 01120 PRINT"THERE ARE ONLY SIX FUNCTIONS. ONE THROUGH SIX INCLUSIVE"
    0x5dac626b9620 ---------A T 01130 CLS:PRINT"WHICH FUNCTION WOULD YOU LIKE ME TO PRINT (1-6)"
    0x5dac626c0ba0 ---------A   01140 INPUT A: IF A<1 OR A>6 THEN 1120
    0x5dac626c0c00 ---------A   01150 CLS
    0x5dac626c0fe0 ---------A   01160 FOR X=-30 TO 30 STEP 1.5
    0x5dac626c1260 ---------A   01170 L=0
    0x5dac626c1b40 ---------A   01180 Y1=5*INT(SQR(900-X*X)/5)
    0x5dac626c1fd0 ---------A   01190 FOR Y=Y1 TO -Y1 STEP -5
    0x5dac626c2710 ---------A   01200 P=SQR(X*X+Y*Y)
    0x5dac626c2780 ---------A   01210 GOSUB 1340
    0x5dac626c2aa0 ---------A   01220 IF Z<=L THEN 1260
    0x5dac626c2ce0 ---------A   01230 L=Z
    0x5dac626c2f30 ---------A   01240 IF Q=0 THEN 1250
    0x5dac626c3210 ---------A T 01250 PRINT TAB(Z);"*";
    0x5dac626c3340 ---------A T 01260 NEXT Y
    0x5dac626c35a0 ---------A   01270 IF Q=0 THEN 1280
    0x5dac626c3620 ---------A T 01280 PRINT
    0x5dac626c3750 ---------A   01290 NEXT X
    0x5dac626c37e0 ---------A   01300 GOTO 1310
    0x5dac626c8490 ---------A T 01310 PRINT"WOULD YOU LIKE ME TO PRINT ANOTHER FUNCTION";
    0x5dac626c8aa0 ---------A   01320 INPUTB$:IF LEFT$(B$,1)="Y"THEN1130
    0x5dac626c8b00 ---------A   01330 END
    0x5dac626c3dc0 ---------B G 01340 ON A GOTO 1350,1370,1390,1410,1430,1450
    0x5dac626c4930 ---------B T 01350 Z=INT(25+(SQR(900.01-P*P)*.9-2)-.7*Y)
    0x5dac626c4bd0 ---------B   01360 GOTO1460
    0x5dac626c5630 ---------B T 01370 Z=INT(25+(30*CSNG(-P*P/100))-.7*Y)
    0x5dac626c56b0 ---------B   01380 GOTO1460
    0x5dac626c6130 ---------B T 01390 Z=INT(25+(30*(COS(P/16)^2))-.7*Y)
    0x5dac626c61b0 ---------B   01400 GOTO1460
    0x5dac626c6bf0 ---------B T 01410 Z=INT(25+(30-30*SIN(P/19))-.7*Y)
    0x5dac626c6c80 ---------B   01420 GOTO1460
    0x5dac626c77a0 ---------B T 01430 Z=INT(25+(30*CSNG(-COS(P/16))-30)-.7*Y)
    0x5dac626c7820 ---------B   01440 GOTO1460
    0x5dac626c8260 ---------B T 01450 Z=INT(25+(30+4*SIN(P/15))-.7*Y)
    0x5dac626caec0 ---------B T 01460 GOTO 01470
    0x5dac626caf00 ---------B T 01470 RETURN
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
char*  B_str;                                     // Basic: B$ 
float  L_flt;                                     // Basic: L 
float  P_flt;                                     // Basic: P 
float  Q_flt;                                     // Basic: Q 
float  QZ_flt;                                    // Basic: QZ 
float  X_flt;                                     // Basic: X 
float  Y_flt;                                     // Basic: Y 
float  Y1_flt;                                    // Basic: Y1 
float  Z_flt;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01340();

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

void Routine_01340(){
    // 01340 ON A GOTO 1350,1370,1390,1410,1430,1450
    switch((int)(A_flt)){
        case 1: goto Lbl_01350;
        case 2: goto Lbl_01370;
        case 3: goto Lbl_01390;
        case 4: goto Lbl_01410;
        case 5: goto Lbl_01430;
        case 6: goto Lbl_01450;
        default: break; 
    };

  Lbl_01350:
    // 01350 Z=INT(25+(SQR(900.01-P*P)*.9-2)-.7*Y)
    Z_flt = INT(25+(SQR(900.01-P_flt*P_flt)*0.9-2)-0.7*Y_flt);
    // 01360 GOTO1460
    goto Lbl_01460;

  Lbl_01370:
    // 01370 Z=INT(25+(30*CSNG(-P*P/100))-.7*Y)
    Z_flt = INT(25+(30*CSNG(P_flt*P_flt/100))-0.7*Y_flt);
    // 01380 GOTO1460
    goto Lbl_01460;

  Lbl_01390:
    // 01390 Z=INT(25+(30*(COS(P/16)^2))-.7*Y)
    Z_flt = INT(25+(30*(FPower(COS(P_flt/16),2)))-0.7*Y_flt);
    // 01400 GOTO1460
    goto Lbl_01460;

  Lbl_01410:
    // 01410 Z=INT(25+(30-30*SIN(P/19))-.7*Y)
    Z_flt = INT(25+(30-30*SIN(P_flt/19))-0.7*Y_flt);
    // 01420 GOTO1460
    goto Lbl_01460;

  Lbl_01430:
    // 01430 Z=INT(25+(30*CSNG(-COS(P/16))-30)-.7*Y)
    Z_flt = INT(25+(30*CSNG(-COS(P_flt/16))-30)-0.7*Y_flt);
    // 01440 GOTO1460
    goto Lbl_01460;

  Lbl_01450:
    // 01450 Z=INT(25+(30+4*SIN(P/15))-.7*Y)
    Z_flt = INT(25+(30+4*SIN(P_flt/15))-0.7*Y_flt);

  Lbl_01460:
    // 01460 GOTO 01470
    goto Lbl_01470;

  Lbl_01470:
    // 01470 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM NOTE: Basic language type forced to be:
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 CLS
    ClearScreen(0);
    // 01030 PRINT@283,"3-D PLOT"
    b2c_printf("3-d plot\n");
    // 01040 PRINT@409,"COPYRIGHT BY"
    b2c_printf("Copyright by\n");
    // 01050 PRINT@534,"CREATIVE COMPUTING"
    b2c_printf("Creative computing\n");
    // 01060 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    b2c_printf("Morristown, new jersey 07960\n");
    // 01070 FOR QZ=1 TO 1500
    for(QZ_flt=1;QZ_flt<=1500;QZ_flt++){
        // 01080 NEXT
        int dummy_1080=0; // Ignore this line.
    };
    // 01090 CLS
    ClearScreen(0);
    // 01100 Q=0
    Q_flt = 0;
    // 01110 GOTO1130
    goto Lbl_01130;

  Lbl_01120:
    // 01120 PRINT"THERE ARE ONLY SIX FUNCTIONS. ONE THROUGH SIX INCLUSIVE"
    b2c_printf("There are only six functions. One through six inclusive\n");

  Lbl_01130:
    // 01130 CLS:PRINT"WHICH FUNCTION WOULD YOU LIKE ME TO PRINT (1-6)"
    b2c_printf("Which function would you like me to print (1-6)\n");
    // 01140 INPUT A: IF A<1 OR A>6 THEN 1120
    if(A_flt<1||A_flt>6)goto Lbl_01120;
    // 01150 CLS
    ClearScreen(0);
    // 01160 FOR X=-30 TO 30 STEP 1.5
    for(X_flt=-30;X_flt<=30;X_flt+=1.5){
        // 01170 L=0
        L_flt = 0;
        // 01180 Y1=5*INT(SQR(900-X*X)/5)
        Y1_flt = 5*INT(SQR(900-X_flt*X_flt)/5);
        // 01190 FOR Y=Y1 TO -Y1 STEP -5
        for(Y_flt=Y1_flt;Y_flt>=Y1_flt;Y_flt+=-5){
            // 01200 P=SQR(X*X+Y*Y)
            P_flt = SQR(X_flt*X_flt+Y_flt*Y_flt);
            // 01210 GOSUB 1340
            Routine_01340();
            // 01220 IF Z<=L THEN 1260
            if(Z_flt<=L_flt)goto Lbl_01260;
            // 01230 L=Z
            L_flt = Z_flt;
            // 01240 IF Q=0 THEN 1250
            if(Q_flt==0)goto Lbl_01250;
