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
char*  A_str_arr[7];                              // Basic: A$ 
int    A0_int;                                    // Basic: A0 
int    A9_int;                                    // Basic: A9 
int    B_int;                                     // Basic: B 
char*  B_str;                                     // Basic: B$ 
int    B1_int;                                    // Basic: B1 
int    B3_int;                                    // Basic: B3 
int    B4_int;                                    // Basic: B4 
int    B5_int_arr[7];                             // Basic: B5 
int    B6_int;                                    // Basic: B6 
int    B7_int;                                    // Basic: B7 
int    B8_int_arr[7];                             // Basic: B8 
int    B9_int;                                    // Basic: B9 
int    C_int_arr[5];                              // Basic: C 
int    E_int;                                     // Basic: E 
int    E1_int;                                    // Basic: E1 
int    F_int_arr[4];                              // Basic: F 
int    F1_int;                                    // Basic: F1 
int    F2_int;                                    // Basic: F2 
int    F3_int;                                    // Basic: F3 
int    G_int;                                     // Basic: G 
int    G1_int;                                    // Basic: G1 
int    H_int;                                     // Basic: H 
int    H1_int;                                    // Basic: H1 
int    H2_int_arr[6];                             // Basic: H2 
int    H3_int;                                    // Basic: H3 
int    H4_int;                                    // Basic: H4 
int    I_int;                                     // Basic: I 
int    I0_int;                                    // Basic: I0 
int    K_int_arr[14][7];                          // Basic: K 
int    L_int;                                     // Basic: L 
int    L1_int;                                    // Basic: L1 
int    L2_int_arr[6];                             // Basic: L2 
int    L3_int;                                    // Basic: L3 
int    L4_int;                                    // Basic: L4 
int    L5_int;                                    // Basic: L5 
int    M1_int;                                    // Basic: M1 
int    M2_int;                                    // Basic: M2 
int    N_int;                                     // Basic: N 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    T_int;                                     // Basic: T 
int    V4_int;                                    // Basic: V4 
int    X_int;                                     // Basic: X 
char*  XX_str;                                    // Basic: XX$ 
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
char*  YN_str;                                    // Basic: YN$ 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03120();
void Routine_03140();

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

void Routine_03120(){
    // 03120 GOTO 03130
    goto Lbl_03130;

  Lbl_03130:
    // 03130 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_03140(){
    // 03140 PRINT "TOTALS WILL BE DISPLAYED IF YOU RESPOND TO "
    b2c_printf("Totals will be displayed if you respond to \n");
    // 03150 PRINT "'SCOREBOARD NUMBER?' WITH A NUMBER GREATER THAN 13."
    b2c_printf("'scoreboard number?' With a number greater than 13.\n");
    // 03160 PRINT "TO SEE WHAT SCOREBOARD OPTIONS YOU HAVE NOT USED,"
    b2c_printf("To see what scoreboard options you have not used,\n");
    // 03170 PRINT "RESPOND TO 'HOW MANY' OR 'SCOREBOARD NUMBER' WITH 25."
    b2c_printf("Respond to 'how many' or 'scoreboard number' with 25.\n");
    // 03180 GOTO 03190
    goto Lbl_03190;

  Lbl_03190:
    // 03190 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT CHR$(26)
    b2c_printf("");
    // 01010 PRINT TAB(25);"YAHTZEE"
    b2c_printf("Yahtzee\n");
    // 01020 PRINT TAB(20);"CREATIVE COMPUTING"
    b2c_printf("Creative computing\n");
    // 01030 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    b2c_printf("Morristown, new jersey\n");
    // 01040 PRINT:PRINT "MODIFIED FOR THE OSBORNE-1 WITH PRINTER"
    b2c_printf("Modified for the osborne-1 with printer\n");
    // 01050 PRINT "BY PETER FLEMING, SFOG, 2/9/82"
    b2c_printf("By peter fleming, sfog, 2/9/82\n");
    // 01060 DIM C(5),K(14,7),F(4),H2(6),L2(6),B5(7),B8(7),A$(7)
    // 01070 PRINT CHR$(7):PRINT CHR$(7):PRINT CHR$(7)
    b2c_printf("");

  Lbl_01080:
    // 01080 PRINT "THIS IS THE GAME OF YAHTZEE. DO YOU WANT COMMENTS";
    b2c_printf("This is the game of yahtzee. Do you want comments");
    // 01090 INPUT B$:IF LEFT$(B$,1)="N" THEN 1130
    if(LEFT$(B_str,1)=='N')goto Lbl_01130;
    // 01100 IF LEFT$(B$,1)="Y" THEN 1120
    if(LEFT$(B_str,1)=='Y')goto Lbl_01120;
    // 01110 GOSUB 91110: GOTO 1080
    goto Lbl_01080;

  Lbl_01120:
    // 01120 GOSUB 3140
    Routine_03140();

  Lbl_01130:
    // 01130 PRINT:PRINT "HOW MANY PLAYERS";:INPUT N
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
                (err += b2c_strtoi(&N_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01130
    // 01140 IF N<1 THEN 1130
    if(N_int<1)goto Lbl_01130;
    // 01150 IF N<=7 THEN 1180
    if(N_int<=7)goto Lbl_01180;
    // 01160 PRINT "THE MAXIMUM NUMBER OF PLAYERS IS 7."
    b2c_printf("The maximum number of players is 7.\n");
    // 01170 GOTO 1130
    goto Lbl_01130;

  Lbl_01180:
    // 01180 FOR A0=1 TO N
    for(A0_int=1;A0_int<=N_int;A0_int++){
        // 01190 PRINT "NAME OF PLAYER #";A0;:INPUT A$(A0):NEXT A0
        int dummy_1190=0; // Ignore this line.
    }; // End-For(A0_int)

  Lbl_01200:
    // 01200 PRINT:PRINT "WOULD YOU LIKE A PRINTED SCORECARD";:INPUT B$
    // Start of Basic INPUT statement 01200
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&B_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01200
    // 01210 IF LEFT$(B$,1)="N" THEN 1240
    if(LEFT$(B_str,1)=='N')goto Lbl_01240;
    // 01220 IF LEFT$(B$,1)="Y" THEN 2930
    if(LEFT$(B_str,1)=='Y')goto Lbl_02930;
    // 01230 GOSUB 935:GOTO 1200
    goto Lbl_01200;

  Lbl_01240:
    // 01240 H=0:PRINT:A=A+1:IF A<>N+1 THEN 1260
    if(A_int!=N_int+1)goto Lbl_01260;
    // 01250 A=1
    A_int = 1;

  Lbl_01260:
    // 01260 FOR B=1 TO 5:C(B)=INT(6*RND(1))+1:NEXT B:PRINT
    b2c_printf("");

  Lbl_01270:
    // 01270 PRINT:PRINT A$(A);"'S NUMBERS:  ";:H=H+1
    H_int = H_int+1;
    // 01280 PRINT C(1);C(2);C(3);C(4);C(5):IF H=3 THEN 1510
    if(H_int==3)goto Lbl_01510;

  Lbl_01290:
    // 01290 PRINT "HOW MANY DICE TO CHANGE";:INPUT E
    // Start of Basic INPUT statement 01290
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&E_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01290
    // 01300 IF E<>25 THEN 1320
    if(E_int!=25)goto Lbl_01320;
    // 01310 GOSUB 1020:GOTO 1290
    goto Lbl_01290;

  Lbl_01320:
    // 01320 IF E>5 THEN 1290
    if(E_int>5)goto Lbl_01290;
    // 01330 IF E<0 THEN 1290
    if(E_int<0)goto Lbl_01290;
    // 01340 IF INT(E)<>E THEN 1290
    if(INT(E_int)!=E_int)goto Lbl_01290;
    // 01350 IF E=0 THEN 1510
    if(E_int==0)goto Lbl_01510;
    // 01360 IF E=5 THEN 1260
    if(E_int==5)goto Lbl_01260;
    // 01370 FOR F3=1 TO 4:F(F3)=0:NEXT F3
    int dummy_1370=0; // Ignore this line.
}; // End-For(F3_int)

  Lbl_01380:
// 01380 PRINT "WHICH DICE TO CHANGE";
b2c_printf("Which dice to change");
// 01390 ON E GOTO 1400,1410,1420,1430
switch((int)(E_int)){
    case 1: goto Lbl_01400;
    case 2: goto Lbl_01410;
    case 3: goto Lbl_01420;
    case 4: goto Lbl_01430;
    default: break; 
};

  Lbl_01400:
// 01400 INPUT F(1):GOTO 1440
goto Lbl_01440;

  Lbl_01410:
// 01410 INPUT F(1),F(2):GOTO 1440
goto Lbl_01440;

  Lbl_01420:
// 01420 INPUT F(1),F(2),F(3):GOTO 1440
goto Lbl_01440;

  Lbl_01430:
// 01430 INPUT F(1),F(2),F(3),F(4)
// Start of Basic INPUT statement 01430
{
    int numargs=4;
    char *args[numargs+1];
    bool echoeol=true;
    while(true){
        fprintf(stdout," ? ");
        int err=input(args,numargs,echoeol);
        if(err==0x03) break;
        if(err || 
            (err += b2c_strtoi(&F_int_arr[1],args,0)) ||
            (err += b2c_strtoi(&F_int_arr[2],args,1)) ||
            (err += b2c_strtoi(&F_int_arr[3],args,2)) ||
            (err += b2c_strtoi(&F_int_arr[4],args,3)) ){
             printf("?Redo from start\n");
        }else{
            break;
        };
    };
}; // End of Basic INPUT statement 01430

  Lbl_01440:
// 01440 FOR F1=1 TO 4:F(F1)=INT(F(F1)):IF F(F1)>5 THEN 1380
if(F_int_arr[F1_int]>5)goto Lbl_01380;
// 01450 IF F(F1)<0 THEN 1380
if(F_int_arr[F1_int]<0)goto Lbl_01380;
// 01460 NEXT F1
int dummy_1460=0; // Ignore this line.
r* CName(const char*)}; // End-For(F1_int)
r* CName(const char*)// 01470 FOR F2=1 TO 4:IF F(F2)=0 THEN 1490
r* CName(const char*)if(F_int_arr[F2_int]==0)goto Lbl_01490;
r* CName(const char*)// 01480 C(F(F2))=INT(6*RND(1))+1
r* CName(const char*)C_int_arr[F_int_arr[F2_int]] = INT(6*RND(1))+1;

  Lbl_01490:
r* CName(const char*)// 01490 NEXT F2
r* CName(const char*)int dummy_1490=0; // Ignore this line.
Name(const char*)}; // End-For(F2_int)
Name(const char*)// 01500 GOTO 1270
Name(const char*)goto Lbl_01270;

  Lbl_01510:
Name(const char*)// 01510 PRINT A$(A);" -- SCOREBOARD NUMBER";
Name(const char*)b2c_printf("%s­õçü -- scoreboard number -- scoreboard number\n",A_str_arr[A_int]);
Name(const char*)// 01520 INPUT I
Name(const char*)// Start of Basic INPUT statement 01520
Name(const char*){
r* CName(const char*)int numargs=1;
r* CName(const char*)char *args[numargs+1];
r* CName(const char*)bool echoeol=true;
r* CName(const char*)while(true){
fprintf(stdout," ? ");
int err=input(args,numargs,echoeol);
if(err==0x03) break;
if(err || 
    (err += b2c_strtoi(&I_int,args,0)) ){
     printf("?Redo from start\n");
}else{
    break;
};
r* CName(const char*)};
Name(const char*)}; // End of Basic INPUT statement 01520
Name(const char*)// 01530 IF I<>25 THEN 1550 
Name(const char*)if(I_int!=25)goto Lbl_01550;
Name(const char*)// 01540 GOSUB 1020:GOTO 1510
Name(const char*)goto Lbl_01510;

  Lbl_01550:
Name(const char*)// 01550 IF I<1 THEN 1510
Name(const char*)if(I_int<1)goto Lbl_01510;
Name(const char*)// 01560 I=INT(I):IF I<14 THEN 1610
Name(const char*)if(I_int<14)goto Lbl_01610;

  Lbl_01570:
Name(const char*)// 01570 PRINT "CONFIRM";:INPUT B$
Name(const char*)// Start of Basic INPUT statement 01570
Name(const char*){
r* CName(const char*)int numargs=1;
r* CName(const char*)char *args[numargs+1];
r* CName(const char*)bool echoeol=true;
r* CName(const char*)while(true){
fprintf(stdout," ? ");
int err=input(args,numargs,echoeol);
if(err==0x03) break;
if(err || 
    (err += b2c_strtos(&B_str,args,0)) ){
     printf("?Redo from start\n");
}else{
    break;
};
r* CName(const char*)};
Name(const char*)}; // End of Basic INPUT statement 01570
Name(const char*)// 01580 IF LEFT$(B$,1)="N" THEN 1510
Name(const char*)if(LEFT$(B_str,1)=='N')goto Lbl_01510;
Name(const char*)// 01590 IF LEFT$(B$,1)="Y" THEN 2540
Name(const char*)if(LEFT$(B_str,1)=='Y')goto Lbl_02540;
Name(const char*)// 01600 GOSUB 935:GOTO 1570
Name(const char*)goto Lbl_01570;

  Lbl_01610:
Name(const char*)// 01610 IF K(I,A)=0 THEN 1640
Name(const char*)if(K_int_arr[I_int][A_int]==0)goto Lbl_01640;
Name(const char*)// 01620 PRINT A$(A);", YOU HAVE ALREADY USED ROW #";I;
Name(const char*)b2c_printf("%sà9¯çX, you have already used row #, you have already used row # %d , you have already used row #\n",A_str_arr[A_int],I_int);
Name(const char*)// 01630 PRINT "YOU HAVE"K(I,A);"POINTS IN ROW #";I:GOTO 1510
Name(const char*)goto Lbl_01510;

  Lbl_01640:
Name(const char*)// 01640 IF I>6 THEN 1750
Name(const char*)if(I_int>6)goto Lbl_01750;
Name(const char*)// 01650 REM***CATEGORIES ONE THOUGH SIX
Name(const char*)// 01660 K=0
Name(const char*)K_int_arr[0] = 0;
Name(const char*)// 01670 FOR G=1 TO 5:IF C(G)<>I THEN 1690
Name(const char*)if(C_int_arr[G_int]!=I_int)goto Lbl_01690;
Name(const char*)// 01680 K=K+I
Name(const char*)K_int_arr[0] = K_int_arr[0]+I_int;

  Lbl_01690:
Name(const char*)// 01690 NEXT G:IF K=0 THEN 1730
Name(const char*)if(K_int_arr[0]==0)goto Lbl_01730;
Name(const char*)// 01700 IF K<>1 THEN 1740
Name(const char*)if(K_int_arr[0]!=1)goto Lbl_01740;
Name(const char*)// 01710 PRINT A$(A);", YOU HAVE 1 POINT IN ROW # 1 (ACES)"
Name(const char*)b2c_printf("%s¸9¯çX, you have 1 point in row # 1 (aces)\n",A_str_arr[A_int]);
Name(const char*)// 01720 K(1,A)=1:GOTO 2510
Name(const char*)goto Lbl_02510;

  Lbl_01730:
Name(const char*)// 01730 K(I,A)=.4:GOTO 2300
Name(const char*)goto Lbl_02300;

  Lbl_01740:
Name(const char*)// 01740 K(I,A)=K:GOTO 2300
Name(const char*)goto Lbl_02300;

  Lbl_01750:
Name(const char*)// 01750 ON I-6 GOTO 1770,1780,1950,2110,485,1790,2280
Name(const char*)switch((int)(I_int-6)){
r* CName(const char*)case 1: goto Lbl_01770;
r* CName(const char*)case 2: goto Lbl_01780;
r* CName(const char*)case 3: goto Lbl_01950;
r* CName(const char*)case 4: goto Lbl_02110;
r* CName(const char*)case 5: goto Lbl_02110;
r* CName(const char*)case 6: goto Lbl_01790;
r* CName(const char*)case 7: goto Lbl_02280;
r* CName(const char*)default: break; 
Name(const char*)};
Name(const char*)// 01760 REM ***3 OF A KIND, 4 OF A KIND, YAHTZEE

  Lbl_01770:
Name(const char*)// 01770 R=3:T=C(1)+C(2)+C(3)+C(4)+C(5):GOTO 1800
Name(const char*)goto Lbl_01800;

  Lbl_01780:
Name(const char*)// 01780 R=4:T=C(1)+C(2)+C(3)+C(4)+C(5):GOTO 1800
Name(const char*)goto Lbl_01800;

  Lbl_01790:
Name(const char*)// 01790 R=5:T=50
Name(const char*)T_int = 50;

  Lbl_01800:
Name(const char*)// 01800 FOR H3=1 TO 6:H2(H3)=0:NEXT H3
Name(const char*)int dummy_1800=0; // Ignore this line.
(const char*)}; // End-For(H3_int)
(const char*)// 01810 FOR H=1 TO 6:FOR H1=1 TO 5
(const char*)for(H1_int=1;H1_int<=5;H1_int++){
Name(const char*)// 01820 IF C(H1)<>H THEN 1840
Name(const char*)if(C_int_arr[H1_int]!=H_int)goto Lbl_01840;
Name(const char*)// 01830 H2(H)=H2(H)+1
Name(const char*)H2_int_arr[H_int] = H2_int_arr[H_int]+1;

  Lbl_01840:
Name(const char*)// 01840 NEXT H1:NEXT H
Name(const char*)int dummy_1840=0; // Ignore this line.
(const char*)}; // End-For(H_int)
(const char*)// 01850 FOR H4=1 TO 6
(const char*)for(H4_int=1;H4_int<=6;H4_int++){
Name(const char*)// 01860 IF H2(H4)>=R THEN 1880
Name(const char*)if(H2_int_arr[H4_int]>=R_int)goto Lbl_01880;
Name(const char*)// 01870 NEXT H4:K(I,A)=.4:GOTO 2300
Name(const char*)goto Lbl_02300;

  Lbl_01880:
Name(const char*)// 01880 IF K(I,A)=50 THEN 1900
Name(const char*)if(K_int_arr[I_int][A_int]==50)goto Lbl_01900;
Name(const char*)// 01890 K(I,A)=T:IF I<>12 THEN 1930
Name(const char*)if(I_int!=12)goto Lbl_01930;

  Lbl_01900:
Name(const char*)// 01900 PRINT CHR$(7):PRINT CHR$(7):FOR V4=1 TO 7:PRINT CHR$(7);:NEXT V4
Name(const char*)int dummy_1900=0; // Ignore this line.
(const char*)}; // End-For(V4_int)
(const char*)// 01910 PRINT "CONGRATULATIONS, ";A$(A);", YOU HAVE A YAHTZEE!!!"
(const char*)b2c_printf("Congratulations, %sCongratulations, , you have a yahtzee!!!\n",A_str_arr[A_int]);
(const char*)// 01920 PRINT CHR$(7):PRINT CHR$(7):FOR V4=1 TO 7:PRINT CHR$(7);:NEXT V4
(const char*)int dummy_1920=0; // Ignore this line.
st char*)}; // End-For(V4_int)

  Lbl_01930:
st char*)// 01930 GOTO 2300
st char*)goto Lbl_02300;
st char*)// 01940 REM ***FULL HOUSE

  Lbl_01950:
st char*)// 01950 L4=0:L5=0:FOR L=1 TO 6:L2(L)=0:NEXT L
st char*)int dummy_1950=0; // Ignore this line.
har*)}; // End-For(L_int)
har*)// 01960 FOR L=1 TO 6:FOR L1=1 TO 5
har*)for(L1_int=1;L1_int<=5;L1_int++){
st char*)// 01970 IF C(L1)<>L THEN 1990
st char*)if(C_int_arr[L1_int]!=L_int)goto Lbl_01990;
st char*)// 01980 L2(L)=L2(L)+1
st char*)L2_int_arr[L_int] = L2_int_arr[L_int]+1;

  Lbl_01990:
st char*)// 01990 NEXT L1:NEXT L
st char*)int dummy_1990=0; // Ignore this line.
har*)}; // End-For(L_int)
har*)// 02000 FOR L3=1 TO 6
har*)for(L3_int=1;L3_int<=6;L3_int++){
st char*)// 02010 IF L5=1 THEN 2040
st char*)if(L5_int==1)goto Lbl_02040;
st char*)// 02020 IF L2(L3)<>2 THEN 2040
st char*)if(L2_int_arr[L3_int]!=2)goto Lbl_02040;
st char*)// 02030 L5=L5+1:GOTO 2050
st char*)goto Lbl_02050;

  Lbl_02040:
st char*)// 02040 IF L2(L3)<>3 THEN 2060
st char*)if(L2_int_arr[L3_int]!=3)goto Lbl_02060;

  Lbl_02050:
st char*)// 02050 L4=L4+1
st char*)L4_int = L4_int+1;

  Lbl_02060:
st char*)// 02060 NEXT L3
st char*)int dummy_2060=0; // Ignore this line.
har*)}; // End-For(L3_int)
har*)// 02070 IF L4=2 THEN 2090
har*)if(L4_int==2)goto Lbl_02090;
har*)// 02080 K(9,A)=.4:GOTO 2300
har*)goto Lbl_02300;

  Lbl_02090:
har*)// 02090 K(9,A)=25:GOTO 2300
har*)goto Lbl_02300;
har*)// 02100 REM ***PUT NUMBERS IN ORDER, STRAIGHTS

  Lbl_02110:
har*)// 02110 FOR M2=1 TO 4:FOR M1=1 TO 4
har*)for(M1_int=1;M1_int<=4;M1_int++){
st char*)// 02120 IF C(M1+1)>=C(M1) THEN 2140
st char*)if(C_int_arr[M1_int+1]>=C_int_arr[M1_int])goto Lbl_02140;
st char*)// 02130 Z=C(M1):C(M1)=C(M1+1):C(M1+1)=Z
st char*)C_int_arr[M1_int+1] = Z_int;

  Lbl_02140:
st char*)// 02140 NEXT M1:NEXT M2
st char*)int dummy_2140=0; // Ignore this line.
har*)}; // End-For(M2_int)
har*)// 02150 G1=1
har*)G1_int = 1;
har*)// 02160 FOR X=2 TO 5
har*)for(X_int=2;X_int<=5;X_int++){
st char*)// 02170 K(13,A)=Y1
st char*)K_int_arr[13][A_int] = Y1_int;
st char*)// 02180 IF C(X-1)+1<>C(X) THEN 2200
st char*)if(C_int_arr[X_int-1]+1!=C_int_arr[X_int])goto Lbl_02200;
st char*)// 02190 G1=G1+1
st char*)G1_int = G1_int+1;

  Lbl_02200:
st char*)// 02200 NEXT X
st char*)int dummy_2200=0; // Ignore this line.
har*)}; // End-For(X_int)
har*)// 02210 IF I=11 THEN 2240
har*)if(I_int==11)goto Lbl_02240;
har*)// 02220 IF G1<4 THEN 2260
har*)if(G1_int<4)goto Lbl_02260;
har*)// 02230 K(I,A)=30:GOTO 2300
har*)goto Lbl_02300;

  Lbl_02240:
har*)// 02240 IF G1<>5 THEN 2260
har*)if(G1_int!=5)goto Lbl_02260;
har*)// 02250 K(I,A)=40:GOTO 2300
har*)goto Lbl_02300;

  Lbl_02260:
har*)// 02260 K(I,A)=.4:GOTO 2300
har*)goto Lbl_02300;
har*)// 02270 REM ***CHANCE

  Lbl_02280:
har*)// 02280 Y1=0
har*)Y1_int = 0;
har*)// 02290 FOR Y=1 TO 5:Y1=C(Y)+Y1:NEXT Y:K(13,A)=Y1
har*)K_int_arr[13][A_int] = Y1_int;

  Lbl_02300:
har*)// 02300 PRINT A$(A);", YOU NOW HAVE";INT(K(I,A));"POINTS IN ROW #";I;", ";
har*)b2c_printf("%s­õçü, you now have, you now have, you now havePoints in row #Points in row # %d Points in row #, , \n",A_str_arr[A_int],I_int);
har*)// 02310 PRINT "(";
har*)b2c_printf("(");
har*)// 02320 IF I>6 THEN 2340
har*)if(I_int>6)goto Lbl_02340;
har*)// 02330 ON I GOTO 2350,2360,2370,2380,2390,2400
har*)switch((int)(I_int)){
st char*)case 1: goto Lbl_02350;
st char*)case 2: goto Lbl_02360;
st char*)case 3: goto Lbl_02370;
st char*)case 4: goto Lbl_02380;
st char*)case 5: goto Lbl_02390;
st char*)case 6: goto Lbl_02400;
st char*)default: break; 
har*)};

  Lbl_02340:
har*)// 02340 ON I-6 GOTO 2410,2420,2430,2440,2450,2460,2470
har*)switch((int)(I_int-6)){
st char*)case 1: goto Lbl_02410;
st char*)case 2: goto Lbl_02420;
st char*)case 3: goto Lbl_02430;
st char*)case 4: goto Lbl_02440;
st char*)case 5: goto Lbl_02450;
st char*)case 6: goto Lbl_02460;
st char*)case 7: goto Lbl_02470;
st char*)default: break; 
har*)};

  Lbl_02350:
har*)// 02350 PRINT "(1)ACES";:GOTO 2480
har*)goto Lbl_02480;

  Lbl_02360:
har*)// 02360 PRINT "(2)TWOS";:GOTO 2480
har*)goto Lbl_02480;

  Lbl_02370:
har*)// 02370 PRINT "(3)THREES";:GOTO 2480
har*)goto Lbl_02480;

  Lbl_02380:
har*)// 02380 PRINT "(4)FOURS";:GOTO 2480
har*)goto Lbl_02480;

  Lbl_02390:
har*)// 02390 PRINT "(5)FIVES";:GOTO 2480
har*)goto Lbl_02480;

  Lbl_02400:
har*)// 02400 PRINT "(6)SIXES";:GOTO 2480
har*)goto Lbl_02480;

  Lbl_02410:
har*)// 02410 PRINT "(7)3 OF A KIND";:GOTO 2480
har*)goto Lbl_02480;

  Lbl_02420:
har*)// 02420 PRINT "(8)4 OF A KIND";:GOTO 2480
har*)goto Lbl_02480;

  Lbl_02430:
har*)// 02430 PRINT "(9)FULL HOUSE";:GOTO 2480
har*)goto Lbl_02480;

  Lbl_02440:
har*)// 02440 PRINT "(10)SMALL STRAIGHT";:RESTORE:GOTO 2480
har*)goto Lbl_02480;

  Lbl_02450:
har*)// 02450 PRINT "(11)LARGE STRAIGHT";:GOTO 2480
har*)goto Lbl_02480;

  Lbl_02460:
har*)// 02460 PRINT "(12)YAHTZEE";:GOTO 2480
har*)goto Lbl_02480;

  Lbl_02470:
har*)// 02470 PRINT "(13)CHANCE";
har*)b2c_printf("(13)chance");

  Lbl_02480:
har*)// 02480 IF E=25 THEN 3030
har*)if(E_int==25)goto Lbl_03030;
har*)// 02490 IF I0=25 THEN 3030
har*)if(I0_int==25)goto Lbl_03030;
har*)// 02500 PRINT ")"
har*)b2c_printf(")\n");

  Lbl_02510:
har*)// 02510 FOR B=1 TO N:FOR B1=1 TO 13
har*)for(B1_int=1;B1_int<=13;B1_int++){
st char*)// 02520 IF K(B1,B)=0 THEN 1240
st char*)if(K_int_arr[B1_int][B_int]==0)goto Lbl_01240;
st char*)// 02530 NEXT B1:NEXT B
st char*)int dummy_2530=0; // Ignore this line.
har*)}; // End-For(B_int)

  Lbl_02540:
har*)// 02540 FOR B3=1 TO N:B5(B3)=0:B8(B3)=0:NEXT B3
har*)int dummy_2540=0; // Ignore this line.
)}; // End-For(B3_int)
)// 02550 PRINT
)b2c_printf("");
)// 02560 FOR B3=1 TO N:FOR B4=1 TO 6
)for(B4_int=1;B4_int<=6;B4_int++){
har*)// 02570 B5(B3)=B5(B3)+INT(K(B4,B3))
har*)B5_int_arr[B3_int] = B5_int_arr[B3_int]+INT(K_int_arr[B4_int][B3_int]);
har*)// 02580 NEXT B4:NEXT B3
har*)int dummy_2580=0; // Ignore this line.
)}; // End-For(B3_int)
)// 02590 FOR B6=1 TO N:FOR B7=7 TO 13
)for(B7_int=7;B7_int<=13;B7_int++){
har*)// 02600 B8(B6)=B8(B6)+INT(K(B7,B6))
har*)B8_int_arr[B6_int] = B8_int_arr[B6_int]+INT(K_int_arr[B7_int][B6_int]);
har*)// 02610 NEXT B7:NEXT B6
har*)int dummy_2610=0; // Ignore this line.
)}; // End-For(B6_int)
)// 02620 FOR B3=1 TO N
)for(B3_int=1;B3_int<=N_int;B3_int++){
har*)// 02630 IF B5(B3)<63 THEN 2650
har*)if(B5_int_arr[B3_int]<63)goto Lbl_02650;
har*)// 02640 K(14,B3)=35
har*)K_int_arr[14][B3_int] = 35;

  Lbl_02650:
har*)// 02650 NEXT B3
har*)int dummy_2650=0; // Ignore this line.
)}; // End-For(B3_int)
)// 02660 LINE INPUT "ENTER 'RETURN' WHEN PRINTER IS READY. ";XX$:GOSUB 3120
)Routine_03120();
)// 02670 FOR A9=1 TO N
)for(A9_int=1;A9_int<=N_int;A9_int++){
har*)// 02680 LPRINT TAB(19);A$(A9);"'S TOTALS":LPRINT TAB(19);"***************"
har*)b2c_printf("***************\n");
har*)// 02690 LPRINT
har*)b2c_printf("");
har*)// 02700 LPRINT "ACES-----------";INT(K(1,A9))
har*)b2c_printf("Aces-----------");
har*)// 02710 LPRINT "TWOS-----------";INT(K(2,A9))
har*)b2c_printf("Twos-----------");
har*)// 02720 LPRINT "THREES---------";INT(K(3,A9))
har*)b2c_printf("Threes---------");
har*)// 02730 LPRINT "FOURS----------";INT(K(4,A9))
har*)b2c_printf("Fours----------");
har*)// 02740 LPRINT "FIVES----------";INT(K(5,A9))
har*)b2c_printf("Fives----------");
har*)// 02750 LPRINT "SIXES----------";INT(K(6,A9))
har*)b2c_printf("Sixes----------");
har*)// 02760 LPRINT "3 OF A KIND----";INT(K(7,A9))
har*)b2c_printf("3 of a kind----");
har*)// 02770 LPRINT "4 OF A KIND----";INT(K(8,A9))
har*)b2c_printf("4 of a kind----");
har*)// 02780 LPRINT "FULL HOUSE-----";INT(K(9,A9))
har*)b2c_printf("Full house-----");
har*)// 02790 LPRINT "SM. STRAIGHT---";INT(K(10,A9))
har*)b2c_printf("Sm. Straight---");
har*)// 02800 LPRINT "LG. STRAIGHT---";INT(K(11,A9))
har*)b2c_printf("Lg. Straight---");
har*)// 02810 LPRINT "YAHTZEE--------";INT(K(12,A9))
har*)b2c_printf("Yahtzee--------");
har*)// 02820 LPRINT "CHANCE---------";INT(K(13,A9))
har*)b2c_printf("Chance---------");
har*)// 02830 LPRINT:LPRINT "TOTAL OF UPPER HALF------";B5(A9)
har*)b2c_printf("Total of upper half------ %d \n",B5_int_arr[A9_int]);
har*)// 02840 LPRINT:LPRINT "BONUS--------------------";K(14,A9)
har*)b2c_printf("Bonus-------------------- %d \n",K_int_arr[14][A9_int]);
har*)// 02850 LPRINT:LPRINT "TOTAL OF LOWER HALF------";B8(A9)
har*)b2c_printf("Total of lower half------ %d \n",B8_int_arr[A9_int]);
har*)// 02860 LPRINT
har*)b2c_printf("");
har*)// 02870 B9=B5(A9)+B8(A9)+K(14,A9)
har*)B9_int = B5_int_arr[A9_int]+B8_int_arr[A9_int]+K_int_arr[14][A9_int];
har*)// 02880 LPRINT A$(A9);"'S GRAND TOTAL--------------------------";B9
har*)b2c_printf("%sð9¯çX's grand total--------------------------'s grand total-------------------------- %d \n",A_str_arr[A9_int],B9_int);
har*)// 02890 GOSUB 3120
har*)Routine_03120();
har*)// 02900 NEXT A9
har*)int dummy_2900=0; // Ignore this line.
)}; // End-For(A9_int)
)// 02910 IF I>13 THEN 1510
)if(I_int>13)goto Lbl_01510;
)// 02920 GOTO 3060
)goto Lbl_03060;

  Lbl_02930:
)// 02930 GOSUB 3120
)Routine_03120();
)// 02940 LPRINT "1**ACES":GOSUB 3120:LPRINT "2**TWOS":GOSUB 940
)Routine_03120();
)// 02950 LPRINT "3**THREES":GOSUB 3120:LPRINT "4**FOURS":GOSUB 940
)Routine_03120();
)// 02960 LPRINT "5**FIVES":GOSUB 3120:LPRINT "6**SIXES":GOSUB 940
)Routine_03120();
)// 02970 LPRINT "7**3 OF A KIND":GOSUB 3120:LPRINT "8**4 OF A KIND":GOSUB 940
)Routine_03120();
)// 02980 LPRINT "9**FULL HOUSE":GOSUB 3120:LPRINT "10**SM. STRAIGHT":GOSUB 940
)Routine_03120();
)// 02990 LPRINT "11**LG. STRAIGHT":GOSUB 3120:LPRINT "12**YAHTZEE":GOSUB 940
)Routine_03120();
)// 03000 LPRINT "13**CHANCE":GOSUB 3120
)Routine_03120();
)// 03010 FOR E1=1 TO 8:LPRINT:NEXT E1:PRINT CHR$(26):PRINT "TEAR OFF SCORECARD"
)b2c_printf("Tear off scorecard\n");
)// 03020 PRINT "AND HIT 'RETURN'!":INPUT Q:GOTO 1240
)goto Lbl_01240;

  Lbl_03030:
)// 03030 PRINT "  ";
)b2c_printf("  ");
)// 03040 IF POS(0) > 50 THEN PRINT
)if(POS(0)>50) {
)}
)// 03050 GOTO 09900
)goto Lbl_09900;

  Lbl_03060:
)// 03060 PRINT CHR$(26):PRINT
)b2c_printf("");

  Lbl_03070:
)// 03070 PRINT:PRINT "ANOTHER GAME?===> ":INPUT YN$
)// Start of Basic INPUT statement 03070
){
har*)int numargs=1;
har*)char *args[numargs+1];
har*)bool echoeol=true;
har*)while(true){
st char*)fprintf(stdout," ? ");
st char*)int err=input(args,numargs,echoeol);
st char*)if(err==0x03) break;
st char*)if(err || 
(const char*)(err += b2c_strtos(&YN_str,args,0)) ){
(const char*) printf("?Redo from start\n");
st char*)}else{
st char*)    break;
st char*)};
har*)};
)}; // End of Basic INPUT statement 03070
)// 03080 IF LEFT$(YN$,1)="Y" THEN 1130
)if(LEFT$(YN_str,1)=='Y')goto Lbl_01130;
)// 03090 IF LEFT$(YN$,1)="N" THEN 3110
)if(LEFT$(YN_str,1)=='N')goto Lbl_03110;
)// 03100 GOSUB 935:GOTO 3070
)goto Lbl_03070;

  Lbl_03110:
)// 03110 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
