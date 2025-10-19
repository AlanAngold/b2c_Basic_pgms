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
int    I_int;                                     // Basic: I 
int    K_int;                                     // Basic: K 
int    N_int;                                     // Basic: N 
char*  Q_str;                                     // Basic: Q$ 
char*  T_str;                                     // Basic: T$ 
char*  V_str;                                     // Basic: V$ 
int    X_int;                                     // Basic: X 
char*  X_str;                                     // Basic: X$ 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
int    Z1_int;                                    // Basic: Z1 
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
    GLBpStr=A_str_arr[K_int];
    Q_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01410:
    // 01410 FOR Z=3 TO LEN(Q$)
    for(Z_int=3;Z_int<=LEN(Q_str);Z_int++){
        // 01420 IF MID$(Q$,Z,1)<>"\" THEN PRINT MID$(Q$,Z,1);
        if(MID$(Q_str,Z_int,1)=='\') {
        }
        // 01430 NEXT Z
        int dummy_1430=0; // Ignore this line.
    }; // End-For(Z_int)
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
    for(X_int=3;X_int<=LEN(Q_str)-1;X_int++){
        // 01490 IF MID$(Q$,X,2)=T$ THEN 1520
        if(MID$(Q_str,X_int,2)==T_str)goto Lbl_01520;
        // 01500 NEXT X
        int dummy_1500=0; // Ignore this line.
    }; // End-For(X_int)
    // 01510 STOP
    exit(1);

  Lbl_01520:
    // 01520 FOR Y=X+1 TO LEN(Q$)
    for(Y_int=X_int+1;Y_int<=LEN(Q_str);Y_int++){
        // 01530 IF MID$(Q$,Y,1)="\" THEN 1560
        if(MID$(Q_str,Y_int,1)=='\')goto Lbl_01560;
        // 01540 NEXT Y
        int dummy_1540=0; // Ignore this line.
    }; // End-For(Y_int)
    // 01550 STOP
    exit(1);

  Lbl_01560:
    // 01560 K=VAL(MID$(Q$,X+2,Y-X-2))
    K_int = VAL(MID$(Q_str,X_int+2,Y_int-X_int-2));
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
    // 01000 PRINT TAB(32);"ANIMAL"
    b2c_printf("Animal\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT: PRINT: PRINT
    b2c_printf("");
    // 01030 PRINT "PLAY 'GUESS THE ANIMAL'"
    b2c_printf("Play 'guess the animal'\n");
    // 01040 PRINT
    b2c_printf("");
    // 01050 PRINT "THINK OF AN ANIMAL AND THE COMPUTER WILL TRY TO GUESS IT."
    b2c_printf("Think of an animal and the computer will try to guess it.\n");
    // 01060 PRINT
    b2c_printf("");
    // 01070 DIM A$(200)
    // 01080 FOR I=0 TO 3
    for(I_int=0;I_int<=3;I_int++){
        // 01090 READ A$(I)
        A_str_arr[I_int] = Get_Data_String();
        // 01100 NEXT I
        int dummy_1100=0; // Ignore this line.
    }; // End-For(I_int)
    // 01110 N=VAL(A$(0))
    N_int = VAL(A_str_arr[0]);
    // 01120 REM          MAIN CONTROL SECTION

  Lbl_01130:
    // 01130 INPUT "ARE YOU THINKING OF AN ANIMAL";A$
    // Start of Basic INPUT statement 01130
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""ARE YOU THINKING OF AN ANIMAL"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01130
    // 01140 IF A$="LIST" THEN 1250
    if(strcmp(A_str_arr[0],"List")==0)goto Lbl_01250;
    // 01150 IF LEFT$(A$,1)<>"Y" THEN 1130
    if(LEFT$(A_str_arr[0],1)=='Y')goto Lbl_01130;
    // 01160 K=1
    K_int = 1;

  Lbl_01170:
    // 01170 GOSUB 1400
    Routine_01400();
    // 01180 IF LEN(A$(K))=0 THEN 1380
    if(LEN(A_str_arr[K_int])==0)goto Lbl_01380;
    // 01190 IF LEFT$(A$(K),2)="\Q" THEN 1170
    if(LEFT$(A_str_arr[K_int],2)=='\q')goto Lbl_01170;
    // 01200 PRINT "IS IT A ";RIGHT$(A$(K),LEN(A$(K))-2);
    b2c_printf("Is it a ");
    // 01210 INPUT A$
    // Start of Basic INPUT statement 01210
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str_arr[0],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01210
    // 01220 A$=LEFT$(A$,1)
    GLBpStr=LEFT$(A_str_arr[0],1);
    A_str_arr[0] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01230 IF LEFT$(A$,1)="Y" THEN PRINT "WHY NOT TRY ANOTHER ANIMAL?": GOTO 1130
    goto Lbl_01130;
    // 01240 DATA "4","\QDOES IT SWIM\Y2\N3\","\AFISH","\ABIRD"

  Lbl_01250:
    // 01250 PRINT:PRINT "ANIMALS I ALREADY KNOW ARE:"
    b2c_printf("Animals i already know are:\n");
    // 01260 X=0
    X_int = 0;
    // 01270 FOR I=1 TO 200
    for(I_int=1;I_int<=200;I_int++){
        // 01280 IF LEFT$(A$(I),2)<>"\A" THEN 1340
        if(LEFT$(A_str_arr[I_int],2)=='\a')goto Lbl_01340;
        // 01290 PRINT TAB(15*X);
        b2c_printf("");
        // 01300 FOR Z=3 TO LEN(A$(I))
        for(Z_int=3;Z_int<=LEN(A_str_arr[I_int]);Z_int++){
            // 01310 IF MID$(A$(I),Z,1)<>"\" THEN PRINT MID$(A$(I),Z,1);
            if(MID$(A_str_arr[I_int],Z_int,1)=='\') {
            }
            // 01320 NEXT Z
            int dummy_1320=0; // Ignore this line.
        }; // End-For(Z_int)
        // 01330 X=X+1: IF X=4 THEN X=0: PRINT
        b2c_printf("");

  Lbl_01340:
        // 01340 NEXT I
        int dummy_1340=0; // Ignore this line.
    }; // End-For(I_int)
    // 01350 PRINT
    b2c_printf("");
    // 01360 PRINT
    b2c_printf("");
    // 01370 GOTO 1130
    goto Lbl_01130;

  Lbl_01380:
    // 01380 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
