/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/3dpltcc/basic/3dpltcc1.bas: 
 *
                   ++---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   || +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    || |
        Address    vv v Original BASIC statement
    -------------- -- - ------------------------------------------------------------------------------
    0x5615b1593d10 ---------A   00001 REM NOTE: Basic language type forced to be:
    0x5615b1593e00 ---------A   00002 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5615b1593eb0 ---------A   00010 CLS
    0x5615b1593ff0 ---------A   00020 PRINT@283,"3-D PLOT"
    0x5615b1594110 ---------A   00030 PRINT@409,"COPYRIGHT BY"
    0x5615b15942b0 ---------A   00040 PRINT@534,"CREATIVE COMPUTING"
    0x5615b15943c0 ---------A   00050 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x5615b1594650 ---------A   00060 FOR QZ=1 TO 1500
    0x5615b15946d0 ---------A   00070 NEXT
    0x5615b15947c0 ---------A   00080 CLS
    0x5615b1594160 ---------A   00160 Q=0
    0x5615b15949f0 ---------A   00170 GOTO190
    0x5615b1594b70 ---------A T 00180 PRINT"THERE ARE ONLY SIX FUNCTIONS. ONE THROUGH SIX INCLUSIVE"
    0x5615b1598f50 ---------A T 00190 CLS:PRINT"WHICH FUNCTION WOULD YOU LIKE ME TO PRINT (1-6)"
    0x5615b15993c0 ---------A   00200 INPUT A: IF A<1 OR A>6 THEN 180
    0x5615b1599450 ---------A   00210 CLS
    0x5615b1599770 ---------A   00220 FOR X=-30 TO 30 STEP 1.5
    0x5615b1599a90 ---------A   00230 L=0
    0x5615b159a150 ---------A   00240 Y1=5*INT(SQR(900-X*X)/5)
    0x5615b159a400 ---------A   00250 FOR Y=Y1 TO -Y1 STEP -5
    0x5615b159a800 ---------A   00260 P=SQR(X*X+Y*Y)
    0x5615b159a870 ---------A   00270 GOSUB 390
    0x5615b159aa50 ---------A   00280 IF Z<=L THEN 330
    0x5615b159ab90 ---------A   00290 L=Z
    0x5615b159ad40 ---------A   00300 IF Q=0 THEN 320
    0x5615b159b000 ---------A T 00320 PRINT TAB(Z);"*";
    0x5615b159b0b0 ---------A T 00330 NEXT Y
    0x5615b159b270 ---------A   00340 IF Q=0 THEN 360
    0x5615b159b2f0 ---------A T 00360 PRINT
    0x5615b159b3a0 ---------A   00370 NEXT X
    0x5615b159b430 ---------A   00380 GOTO 520
    0x5615b159b8d0 ---------B G 00390 ON A GOTO 400,420,440,460,480,500
    0x5615b159c0a0 ---------B T 00400 Z=INT(25+(SQR(900.01-P*P)*.9-2)-.7*Y)
    0x5615b159c340 ---------B   00410 GOTO510
    0x5615b159caa0 ---------B T 00420 Z=INT(25+(30*CSNG(-P*P/100))-.7*Y)
    0x5615b159cb20 ---------B   00430 GOTO510
    0x5615b159d300 ---------B T 00440 Z=INT(25+(30*(COS(P/16)^2))-.7*Y)
    0x5615b159d380 ---------B   00450 GOTO510
    0x5615b159db20 ---------B T 00460 Z=INT(25+(30-30*SIN(P/19))-.7*Y)
    0x5615b159dbb0 ---------B   00470 GOTO510
    0x5615b159e330 ---------B T 00480 Z=INT(25+(30*CSNG(-COS(P/16))-30)-.7*Y)
    0x5615b159e3b0 ---------B   00490 GOTO510
    0x5615b159ead0 ---------B T 00500 Z=INT(25+(30+4*SIN(P/15))-.7*Y)
    0x5615b159eb20 ---------B T 00510 RETURN
    0x5615b159ece0 ---------A T 00520 PRINT"WOULD YOU LIKE ME TO PRINT ANOTHER FUNCTION";
    0x5615b159f170 ---------A   00530 INPUTB$:IF LEFT$(B$,1)="Y"THEN190
    0x5615b159f1d0 ---------A   00540 END
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

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x5615b1593d10   0x5615b1593d10   0x5615b159f1d0   0x5615b159f1d0 
   B) 0x5615b159b8d0   0x5615b159b8d0   0x5615b159eb20   0x5615b159eb20 

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01470 - 10000    8540 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/3dpltcc/basic/3dpltcc1.bas'
 *
    A              Integer 
    B$             String  
    COS   Function Integer     args=1, float 
    CSNG  Function Integer     args=1, int   
    INT   Function Integer     args=1, float 
    L              Integer 
    LEFT$ Function String      args=2, char* int   
    P              Integer 
    Q              Integer 
    QZ             Integer 
    SIN   Function Integer     args=1, float 
    SQR   Function Integer     args=1, float 
    TAB   Function String      args=1, 
    X              Integer 
    Y              Integer 
    Y1             Integer 
    Z              Integer 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/3dpltcc/basic/3dpltcc1.bas: 
 *
                   ++---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   || +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    || |
        Address    vv v Original BASIC statement
    -------------- -- - ------------------------------------------------------------------------------
    0x5615b1593d10 ---------A   01000 REM NOTE: Basic language type forced to be:
    0x5615b1593e00 ---------A   01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5615b1593eb0 ---------A   01020 CLS
    0x5615b1593ff0 ---------A   01030 PRINT@283,"3-D PLOT"
    0x5615b1594110 ---------A   01040 PRINT@409,"COPYRIGHT BY"
    0x5615b15942b0 ---------A   01050 PRINT@534,"CREATIVE COMPUTING"
    0x5615b15943c0 ---------A   01060 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x5615b1594650 ---------A   01070 FOR QZ=1 TO 1500
    0x5615b15946d0 ---------A   01080 NEXT
    0x5615b15947c0 ---------A   01090 CLS
    0x5615b1594160 ---------A   01100 Q=0
    0x5615b15949f0 ---------A   01110 GOTO1130
    0x5615b1594b70 ---------A T 01120 PRINT"THERE ARE ONLY SIX FUNCTIONS. ONE THROUGH SIX INCLUSIVE"
    0x5615b1598f50 ---------A T 01130 CLS:PRINT"WHICH FUNCTION WOULD YOU LIKE ME TO PRINT (1-6)"
    0x5615b15993c0 ---------A   01140 INPUT A: IF A<1 OR A>6 THEN 1120
    0x5615b1599450 ---------A   01150 CLS
    0x5615b1599770 ---------A   01160 FOR X=-30 TO 30 STEP 1.5
    0x5615b1599a90 ---------A   01170 L=0
    0x5615b159a150 ---------A   01180 Y1=5*INT(SQR(900-X*X)/5)
    0x5615b159a400 ---------A   01190 FOR Y=Y1 TO -Y1 STEP -5
    0x5615b159a800 ---------A   01200 P=SQR(X*X+Y*Y)
    0x5615b159a870 ---------A   01210 GOSUB 1340
    0x5615b159aa50 ---------A   01220 IF Z<=L THEN 1260
    0x5615b159ab90 ---------A   01230 L=Z
    0x5615b159ad40 ---------A   01240 IF Q=0 THEN 1250
    0x5615b159b000 ---------A T 01250 PRINT TAB(Z);"*";
    0x5615b159b0b0 ---------A T 01260 NEXT Y
    0x5615b159b270 ---------A   01270 IF Q=0 THEN 1280
    0x5615b159b2f0 ---------A T 01280 PRINT
    0x5615b159b3a0 ---------A   01290 NEXT X
    0x5615b159b430 ---------A   01300 GOTO 1310
    0x5615b159ece0 ---------A T 01310 PRINT"WOULD YOU LIKE ME TO PRINT ANOTHER FUNCTION";
    0x5615b159f170 ---------A   01320 INPUTB$:IF LEFT$(B$,1)="Y"THEN1130
    0x5615b159f1d0 ---------A   01330 END
    0x5615b159b8d0 ---------B G 01340 ON A GOTO 1350,1370,1390,1410,1430,1450
    0x5615b159c0a0 ---------B T 01350 Z=INT(25+(SQR(900.01-P*P)*.9-2)-.7*Y)
    0x5615b159c340 ---------B   01360 GOTO1460
    0x5615b159caa0 ---------B T 01370 Z=INT(25+(30*CSNG(-P*P/100))-.7*Y)
    0x5615b159cb20 ---------B   01380 GOTO1460
    0x5615b159d300 ---------B T 01390 Z=INT(25+(30*(COS(P/16)^2))-.7*Y)
    0x5615b159d380 ---------B   01400 GOTO1460
    0x5615b159db20 ---------B T 01410 Z=INT(25+(30-30*SIN(P/19))-.7*Y)
    0x5615b159dbb0 ---------B   01420 GOTO1460
    0x5615b159e330 ---------B T 01430 Z=INT(25+(30*CSNG(-COS(P/16))-30)-.7*Y)
    0x5615b159e3b0 ---------B   01440 GOTO1460
    0x5615b159ead0 ---------B T 01450 Z=INT(25+(30+4*SIN(P/15))-.7*Y)
    0x5615b159eb20 ---------B T 01460 RETURN
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
int   A_int;        // Comments?
char* B_str;        // Comments?
int   L_int;        // Comments?
int   P_int;        // Comments?
int   Q_int;        // Comments?
int   QZ_int;       // Comments?
int   X_int;        // Comments?
int   Y_int;        // Comments?
int   Y1_int;       // Comments?
int   Z_int;        // Comments?
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
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------

void Routine_01340(){
    // 01340 ON A GOTO 1350,1370,1390,1410,1430,1450
    switch((int)(A_int)){
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
    Z_int = INT(25+(SQR(900.01001-P_int*P_int)*0.9-2)-0.7*Y_int);
    // 01360 GOTO1460
    goto Lbl_01460;

  Lbl_01370:
    // 01370 Z=INT(25+(30*CSNG(-P*P/100))-.7*Y)
    Z_int = INT(25+(30*CSNG(-P_int*P_int/100))-0.7*Y_int);
    // 01380 GOTO1460
    goto Lbl_01460;

  Lbl_01390:
    // 01390 Z=INT(25+(30*(COS(P/16)^2))-.7*Y)
    Z_int = INT(25+(30*(FPower(COS(P_int/16),2)))-0.7*Y_int);
    // 01400 GOTO1460
    goto Lbl_01460;

  Lbl_01410:
    // 01410 Z=INT(25+(30-30*SIN(P/19))-.7*Y)
    Z_int = INT(25+(30-30*SIN(P_int/19))-0.7*Y_int);
    // 01420 GOTO1460
    goto Lbl_01460;

  Lbl_01430:
    // 01430 Z=INT(25+(30*CSNG(-COS(P/16))-30)-.7*Y)
    Z_int = INT(25+(30*CSNG(-COS(P_int/16))-30)-0.7*Y_int);
    // 01440 GOTO1460
    goto Lbl_01460;

  Lbl_01450:
    // 01450 Z=INT(25+(30+4*SIN(P/15))-.7*Y)
    Z_int = INT(25+(30+4*SIN(P_int/15))-0.7*Y_int);

  Lbl_01460:
    // 01460 RETURN
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
    b2c_fprintf(stdout,"3-D PLOT"); b2c_fprintf(stdout,"\n");
    // 01040 PRINT@409,"COPYRIGHT BY"
    b2c_fprintf(stdout,"COPYRIGHT BY"); b2c_fprintf(stdout,"\n");
    // 01050 PRINT@534,"CREATIVE COMPUTING"
    b2c_fprintf(stdout,"CREATIVE COMPUTING"); b2c_fprintf(stdout,"\n");
    // 01060 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    b2c_fprintf(stdout,"MORRISTOWN, NEW JERSEY 07960"); b2c_fprintf(stdout,"\n");
    // 01070 FOR QZ=1 TO 1500
    for(QZ_int=1;QZ_int<=1500;QZ_int++){
        // 01080 NEXT
        int dummy_1080=0; // Ignore this line.
    };
    // 01090 CLS
    ClearScreen(0);
    // 01100 Q=0
    Q_int = 0;
    // 01110 GOTO1130
    goto Lbl_01130;

  Lbl_01120:
    // 01120 PRINT"THERE ARE ONLY SIX FUNCTIONS. ONE THROUGH SIX INCLUSIVE"
    b2c_fprintf(stdout,"THERE ARE ONLY SIX FUNCTIONS. ONE THROUGH SIX INCLUSIVE"); b2c_fprintf(stdout,"\n");

  Lbl_01130:
    // 01130 CLS:PRINT"WHICH FUNCTION WOULD YOU LIKE ME TO PRINT (1-6)"
    b2c_fprintf(stdout,"WHICH FUNCTION WOULD YOU LIKE ME TO PRINT (1-6)"); b2c_fprintf(stdout,"\n");
    // 01140 INPUT A: IF A<1 OR A>6 THEN 1120
    if(A_int<1||A_int>6)goto Lbl_01120;
    // 01150 CLS
    ClearScreen(0);
    // 01160 FOR X=-30 TO 30 STEP 1.5
    for(X_int=-30;X_int<=30;X_int+=1.5){
        // 01170 L=0
        L_int = 0;
        // 01180 Y1=5*INT(SQR(900-X*X)/5)
        Y1_int = 5*INT(SQR(900-X_int*X_int)/5);
        // 01190 FOR Y=Y1 TO -Y1 STEP -5
        for(Y_int=Y1_int;Y_int>=-Y1_int;Y_int+=-5){
            // 01200 P=SQR(X*X+Y*Y)
            P_int = SQR(X_int*X_int+Y_int*Y_int);
            // 01210 GOSUB 1340
            Routine_01340();
            // 01220 IF Z<=L THEN 1260
            if(Z_int<=L_int)goto Lbl_01260;
            // 01230 L=Z
            L_int = Z_int;
            // 01240 IF Q=0 THEN 1250
            if(Q_int==0)goto Lbl_01250;

  Lbl_01250:
            // 01250 PRINT TAB(Z);"*";
            b2c_fprintf(stdout,"%s*",TAB(Z_int)); 

  Lbl_01260:
            // 01260 NEXT Y
            int dummy_1260=0; // Ignore this line.
        }; // End-For(Y_int)
        // 01270 IF Q=0 THEN 1280
        if(Q_int==0)goto Lbl_01280;

  Lbl_01280:
        // 01280 PRINT
        b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
        // 01290 NEXT X
        int dummy_1290=0; // Ignore this line.
    }; // End-For(X_int)
    // 01300 GOTO 1310
    goto Lbl_01310;

  Lbl_01310:
    // 01310 PRINT"WOULD YOU LIKE ME TO PRINT ANOTHER FUNCTION";
    b2c_fprintf(stdout,"WOULD YOU LIKE ME TO PRINT ANOTHER FUNCTION"); 
    // 01320 INPUTB$:IF LEFT$(B$,1)="Y"THEN1130
    if(strcmp(LEFT(B_str,1),"Y")==0)goto Lbl_01130;
    // 01330 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
