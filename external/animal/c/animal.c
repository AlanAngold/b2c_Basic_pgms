/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/animal.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56fe0a273ac0 ---------A   00010 PRINT TAB(32);"ANIMAL"
    0x56fe0a274e70 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56fe0a274ff0 ---------A   00030 PRINT: PRINT: PRINT
    0x56fe0a2632f0 ---------A   00040 PRINT "PLAY 'GUESS THE ANIMAL'"
    0x56fe0a272730 ---------A   00045 PRINT
    0x56fe0a272f80 ---------A   00050 PRINT "THINK OF AN ANIMAL AND THE COMPUTER WILL TRY TO GUESS IT."
    0x56fe0a272ff0 ---------A   00060 PRINT
    0x56fe0a273460 ---------A   00070 DIM A$(200)
    0x56fe0a272610 ---------A   00080 FOR I=0 TO 3
    0x56fe0a273700 ---------A   00090 READ A$(I)
    0x56fe0a27a7e0 ---------A   00100 NEXT I
    0x56fe0a2749e0 ---------A   00110 N=VAL(A$(0))
    0x56fe0a27abc0 ---------A T 00120 REM          MAIN CONTROL SECTION
    0x56fe0a2725b0 ---------A   00130 INPUT "ARE YOU THINKING OF AN ANIMAL";A$
    0x56fe0a27af20 ---------A   00140 IF A$="LIST" THEN 600
    0x56fe0a27b340 ---------A   00150 IF LEFT$(A$,1)<>"Y" THEN 120
    0x56fe0a27b620 ---------A   00160 K=1
    0x56fe0a27b670 ---------A T 00170 GOSUB 390
    0x56fe0a27ba80 ---------A   00180 IF LEN(A$(K))=0 THEN 999
    0x56fe0a27bfa0 ---------A   00190 IF LEFT$(A$(K),2)="\Q" THEN 170
    0x56fe0a27c780 ---------A   00200 PRINT "IS IT A ";RIGHT$(A$(K),LEN(A$(K))-2);
    0x56fe0a27c8d0 ---------A   00210 INPUT A$
    0x56fe0a27ccf0 ---------A   00220 A$=LEFT$(A$,1)
    0x56fe0a27d2c0 ---------A   00230 IF LEFT$(A$,1)="Y" THEN PRINT "WHY NOT TRY ANOTHER ANIMAL?": GOTO 120
    0x56fe0a27d530 ----------   00240 INPUT "THE ANIMAL YOU WERE THINKING OF WAS A ";V$
    0x56fe0a27d6d0 ----------   00250 PRINT "PLEASE TYPE IN A QUESTION THAT WOULD DISTINGUISH A"
    0x56fe0a27df80 ----------   00260 PRINT V$;" FROM A ";RIGHT$(A$(K),LEN(A$(K))-2)
    0x56fe0a27e1b0 ----------   00270 INPUT X$
    0x56fe0a27e530 ---------- T 00280 PRINT "FOR A ";V$;" THE ANSWER WOULD BE ";
    0x56fe0a27e6a0 ----------   00290 INPUT A$
    0x56fe0a27ef20 ----------   00300 A$=LEFT$(A$,1): IF A$<>"Y" AND A$<>"N" THEN 280
    0x56fe0a27f480 ----------   00310 IF A$="Y" THEN B$="N"
    0x56fe0a27f910 ----------   00320 IF A$="N" THEN B$="Y"
    0x56fe0a27ffc0 ----------   00330 Z1=VAL(A$(0))
    0x56fe0a280490 ----------   00340 A$(0)=STR$(Z1+2)
    0x56fe0a280880 ----------   00350 A$(Z1)=A$(K)
    0x56fe0a280dd0 ----------   00360 A$(Z1+1)="\A"+V$
    0x56fe0a281ca0 ----------   00370 A$(K)="\Q"+X$+"\"+A$+STR$(Z1+1)+"\"+B$+STR$(Z1)+"\"
    0x56fe0a281d30 ----------   00380 GOTO 120
    0x56fe0a281da0 ---------B G 00390 REM     SUBROUTINE TO PRINT QUESTIONS
    0x56fe0a282180 ---------B   00400 Q$=A$(K)
    0x56fe0a282630 ---------B T 00410 FOR Z=3 TO LEN(Q$)
    0x56fe0a282f00 ---------B   00415 IF MID$(Q$,Z,1)<>"\" THEN PRINT MID$(Q$,Z,1);
    0x56fe0a283040 ---------B   00417 NEXT Z
    0x56fe0a283260 ---------B   00420 INPUT C$
    0x56fe0a283650 ---------B   00430 C$=LEFT$(C$,1)
    0x56fe0a283b00 ---------B   00440 IF C$<>"Y" AND C$<>"N" THEN 410
    0x56fe0a283f30 ---------B   00450 T$="\"+C$
    0x56fe0a2844d0 ---------B   00455 FOR X=3 TO LEN(Q$)-1
    0x56fe0a2849d0 ---------B   00460 IF MID$(Q$,X,2)=T$ THEN 480
    0x56fe0a284b10 ---------B   00470 NEXT X
    0x56fe0a284b70 ---------B   00475 STOP
    0x56fe0a285150 ---------B T 00480 FOR Y=X+1 TO LEN(Q$)
    0x56fe0a285650 ---------B   00490 IF MID$(Q$,Y,1)="\" THEN 510
    0x56fe0a285790 ---------B   00500 NEXT Y
    0x56fe0a2857f0 ---------B   00505 STOP
    0x56fe0a2860e0 ---------B T 00510 K=VAL(MID$(Q$,X+2,Y-X-2))
    0x56fe0a286130 ---------B   00520 RETURN
    0x56fe0a286570 ---------A   00530 DATA "4","\QDOES IT SWIM\Y2\N3\","\AFISH","\ABIRD"
    0x56fe0a286720 ---------A T 00600 PRINT:PRINT "ANIMALS I ALREADY KNOW ARE:"
    0x56fe0a286930 ---------A   00605 X=0
    0x56fe0a286c10 ---------A   00610 FOR I=1 TO 200
    0x56fe0a287110 ---------A   00620 IF LEFT$(A$(I),2)<>"\A" THEN 650
    0x56fe0a287400 ---------A   00624 PRINT TAB(15*X);
    0x56fe0a2878d0 ---------A   00630 FOR Z=3 TO LEN(A$(I))
    0x56fe0a288770 ---------A   00640 IF MID$(A$(I),Z,1)<>"\" THEN PRINT MID$(A$(I),Z,1);
    0x56fe0a2888b0 ---------A   00642 NEXT Z
    0x56fe0a289080 ---------A   00645 X=X+1: IF X=4 THEN X=0: PRINT
    0x56fe0a2891b0 ---------A T 00650 NEXT I
    0x56fe0a289230 ---------A   00660 PRINT
    0x56fe0a2892a0 ---------A   00670 PRINT
    0x56fe0a289310 ---------A   00680 GOTO 120
    0x56fe0a289350 ---------A T 00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00120      00150T, 00230T, 00380T, 00680T
     00170      00190T
     00280      00300T
     00390      00170G
     00410      00440T
     00480      00460T
     00510      00490T
     00600      00140T
     00650      00620T
     00999      00180T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x56fe0a273ac0 (00010)   0x000000000000 (00000)   0x56fe0a289350 (00999)   0x56fe0a289350 (00999)   
   B) 0x56fe0a281da0 (00390)   0x56fe0a281da0 (00390)   0x56fe0a286130 (00520)   0x56fe0a286130 (00520)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01590 - 10000    8420 

 */



/*
 *  Symbol Table Listing for 'basic/animal.bas'
 *
    A$              Array    String          {0,199} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$                       String      
    C$                       String      
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
    I                        Float       
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K                        Float       
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
    Q$                       String      
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
    T$                       String      
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    V$                       String      
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Float       
    X$                       String      
    Y                        Float       
    Z                        Float       
    Z1                       Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/animal.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x56fe0a273ac0 ---------A   01000 PRINT TAB(32);"ANIMAL"
    0x56fe0a274e70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x56fe0a274ff0 ---------A   01020 PRINT: PRINT: PRINT
    0x56fe0a2632f0 ---------A   01030 PRINT "PLAY 'GUESS THE ANIMAL'"
    0x56fe0a272730 ---------A   01040 PRINT
    0x56fe0a272f80 ---------A   01050 PRINT "THINK OF AN ANIMAL AND THE COMPUTER WILL TRY TO GUESS IT."
    0x56fe0a272ff0 ---------A   01060 PRINT
    0x56fe0a273460 ---------A   01070 DIM A$(200)
    0x56fe0a272610 ---------A   01080 FOR I=0 TO 3
    0x56fe0a273700 ---------A   01090 READ A$(I)
    0x56fe0a27a7e0 ---------A   01100 NEXT I
    0x56fe0a2749e0 ---------A   01110 N=VAL(A$(0))
    0x56fe0a27abc0 ---------A   01120 REM          MAIN CONTROL SECTION
    0x56fe0a2725b0 ---------A T 01130 INPUT "ARE YOU THINKING OF AN ANIMAL";A$
    0x56fe0a27af20 ---------A   01140 IF A$="LIST" THEN 1250
    0x56fe0a27b340 ---------A   01150 IF LEFT$(A$,1)<>"Y" THEN 1130
    0x56fe0a27b620 ---------A   01160 K=1
    0x56fe0a27b670 ---------A T 01170 GOSUB 1400
    0x56fe0a27ba80 ---------A   01180 IF LEN(A$(K))=0 THEN 1380
    0x56fe0a27bfa0 ---------A   01190 IF LEFT$(A$(K),2)="\Q" THEN 1170
    0x56fe0a27c780 ---------A   01200 PRINT "IS IT A ";RIGHT$(A$(K),LEN(A$(K))-2);
    0x56fe0a27c8d0 ---------A   01210 INPUT A$
    0x56fe0a27ccf0 ---------A   01220 A$=LEFT$(A$,1)
    0x56fe0a27d2c0 ---------A   01230 IF LEFT$(A$,1)="Y" THEN PRINT "WHY NOT TRY ANOTHER ANIMAL?": GOTO 1130
    0x56fe0a286570 ---------A   01240 DATA "4","\QDOES IT SWIM\Y2\N3\","\AFISH","\ABIRD"
    0x56fe0a286720 ---------A T 01250 PRINT:PRINT "ANIMALS I ALREADY KNOW ARE:"
    0x56fe0a286930 ---------A   01260 X=0
    0x56fe0a286c10 ---------A   01270 FOR I=1 TO 200
    0x56fe0a287110 ---------A   01280 IF LEFT$(A$(I),2)<>"\A" THEN 1340
    0x56fe0a287400 ---------A   01290 PRINT TAB(15*X);
    0x56fe0a2878d0 ---------A   01300 FOR Z=3 TO LEN(A$(I))
    0x56fe0a288770 ---------A   01310 IF MID$(A$(I),Z,1)<>"\" THEN PRINT MID$(A$(I),Z,1);
    0x56fe0a2888b0 ---------A   01320 NEXT Z
    0x56fe0a289080 ---------A   01330 X=X+1: IF X=4 THEN X=0: PRINT
    0x56fe0a2891b0 ---------A T 01340 NEXT I
    0x56fe0a289230 ---------A   01350 PRINT
    0x56fe0a2892a0 ---------A   01360 PRINT
    0x56fe0a289310 ---------A   01370 GOTO 1130
    0x56fe0a289350 ---------A T 01380 END
    0x56fe0a281da0 ---------B   01390 REM     SUBROUTINE TO PRINT QUESTIONS
    0x56fe0a282180 ---------B G 01400 Q$=A$(K)
    0x56fe0a282630 ---------B T 01410 FOR Z=3 TO LEN(Q$)
    0x56fe0a282f00 ---------B   01420 IF MID$(Q$,Z,1)<>"\" THEN PRINT MID$(Q$,Z,1);
    0x56fe0a283040 ---------B   01430 NEXT Z
    0x56fe0a283260 ---------B   01440 INPUT C$
    0x56fe0a283650 ---------B   01450 C$=LEFT$(C$,1)
    0x56fe0a283b00 ---------B   01460 IF C$<>"Y" AND C$<>"N" THEN 1410
    0x56fe0a283f30 ---------B   01470 T$="\"+C$
    0x56fe0a2844d0 ---------B   01480 FOR X=3 TO LEN(Q$)-1
    0x56fe0a2849d0 ---------B   01490 IF MID$(Q$,X,2)=T$ THEN 1520
    0x56fe0a284b10 ---------B   01500 NEXT X
    0x56fe0a284b70 ---------B   01510 STOP
    0x56fe0a285150 ---------B T 01520 FOR Y=X+1 TO LEN(Q$)
    0x56fe0a285650 ---------B   01530 IF MID$(Q$,Y,1)="\" THEN 1560
    0x56fe0a285790 ---------B   01540 NEXT Y
    0x56fe0a2857f0 ---------B   01550 STOP
    0x56fe0a2860e0 ---------B T 01560 K=VAL(MID$(Q$,X+2,Y-X-2))
    0x56fe0a28bc80 ---------B   01570 GOTO 01580
    0x56fe0a28bcc0 ---------B T 01580 RETURN
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
char* data_01240s[]={"4","\QDOES IT SWIM\Y2\N3\","\AFISH","\ABIRD"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1240,  4,data_01240s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char*  A_str_arr[200];                            // Basic: A$ 
char*  B_str;                                     // Basic: B$ 
char*  C_str;                                     // Basic: C$ 
float  I_flt;                                     // Basic: I 
float  K_flt;                                     // Basic: K 
float  N_flt;                                     // Basic: N 
char*  Q_str;                                     // Basic: Q$ 
char*  T_str;                                     // Basic: T$ 
char*  V_str;                                     // Basic: V$ 
float  X_flt;                                     // Basic: X 
char*  X_str;                                     // Basic: X$ 
float  Y_flt;                                     // Basic: Y 
float  Z_flt;                                     // Basic: Z 
float  Z1_flt;                                    // Basic: Z1 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01400();

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
    // 01390 REM     SUBROUTINE TO PRINT QUESTIONS

void Routine_01400(){
    // 01400 Q$=A$(K)
    GLBpStr=A_str_arr[(int)K_flt];
    Q_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01410:
    // 01410 FOR Z=3 TO LEN(Q$)
    for(Z_flt=3;Z_flt<=LEN(Q_str);Z_flt++){
        // 01420 IF MID$(Q$,Z,1)<>"\" THEN PRINT MID$(Q$,Z,1);
        if(MID$(Q_str,Z_flt,1)=='\') {
        }
        // 01430 NEXT Z
        int dummy_1430=0; // Ignore this line.
    }; // End-For(Z_flt)
    // 01440 INPUT C$
    // Start of Basic INPUT statement 01440
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&C_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01440
    // 01450 C$=LEFT$(C$,1)
    GLBpStr=LEFT$(C_str,1);
    C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01460 IF C$<>"Y" AND C$<>"N" THEN 1410
    if(strcmp(C_str,"Y")!=0&&strcmp(C_str,"N")!=0)goto Lbl_01410;
    // 01470 T$="\"+C$
    GLBpStr=StringCat("\",C_str);
    T_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01480 FOR X=3 TO LEN(Q$)-1
    for(X_flt=3;X_flt<=LEN(Q_str)-1;X_flt++){
        // 01490 IF MID$(Q$,X,2)=T$ THEN 1520
        if(MID$(Q_str,X_flt,2)==T_str)goto Lbl_01520;
        // 01500 NEXT X
        int dummy_1500=0; // Ignore this line.
    }; // End-For(X_flt)
    // 01510 STOP
    exit(1);

  Lbl_01520:
    // 01520 FOR Y=X+1 TO LEN(Q$)
    for(Y_flt=X_flt+1;Y_flt<=LEN(Q_str);Y_flt++){
        // 01530 IF MID$(Q$,Y,1)="\" THEN 1560
        if(MID$(Q_str,Y_flt,1)=='\')goto Lbl_01560;
        // 01540 NEXT Y
        int dummy_1540=0; // Ignore this line.
    }; // End-For(Y_flt)
    // 01550 STOP
    exit(1);

  Lbl_01560:
    // 01560 K=VAL(MID$(Q$,X+2,Y-X-2))
    K_flt = VAL(MID$(Q_str,X_flt+2,Y_flt-X_flt-2));
    // 01570 GOTO 01580
    goto Lbl_01580;

  Lbl_01580:
    // 01580 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
