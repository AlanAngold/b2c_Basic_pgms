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
char* data_02580s[]={"17","8","4","14","19","3","10","1","7","11","15","9","5","20","13","18","16","2","12","6"};
char* data_02590s[]={"20","2","17","5","8","18","12","11","1","4","19","14","10","7","9","15","6","13","16","3"};
char* data_02600s[]={"PITCHOUT","TRIPLE REVERSE","DRAW","QB SNEAK","END AROUND"};
char* data_02610s[]={"DOUBLE REVERSE","LEFT SWEEP","RIGHT SWEEP","OFF TACKLE"};
char* data_02620s[]={"WISHBONE OPTION","FLARE PASS","SCREEN PASS"};
char* data_02630s[]={"ROLL OUT OPTION","RIGHT CURL","LEFT CURL","WISHBONE OPTION"};
char* data_02640s[]={"SIDELINE PASS","HALF-BACK OPTION","RAZZLE-DAZZLE","BOMB!!!!"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 2580, 20,data_02580s},
    { 2590, 20,data_02590s},
    { 2600,  5,data_02600s},
    { 2610,  4,data_02610s},
    { 2620,  3,data_02620s},
    { 2630,  4,data_02630s},
    { 2640,  4,data_02640s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int_arr[20];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    B_int_arr[20];                             // Basic: B 
int    C_int_arr[40];                             // Basic: C 
int    D_int_arr[2];                              // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int_arr[2];                              // Basic: H 
int    I_int;                                     // Basic: I 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
char*  M_str_arr[2];                              // Basic: M$ 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
char*  P_str_arr[20];                             // Basic: P$ 
int    P1_int;                                    // Basic: P1 
int    P2_int;                                    // Basic: P2 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    T_int_arr[2];                              // Basic: T 
int    U_int;                                     // Basic: U 
int    W_int_arr[2];                              // Basic: W 
int    X_int_arr[2];                              // Basic: X 
int    Y_int_arr[2];                              // Basic: Y 
int    Z_int_arr[2];                              // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02730();

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

void Routine_02730(){
    // 02730 PRINT TAB(D(T)+5+P/2);M$(T)
    b2c_printf("%s\n",M_str_arr[T_int_arr[0]]);

void Routine_02740(){
    // 02740 PRINT "TEAM 1 [0   10   20   30   40   50   60   70   80   90";
    b2c_printf("Team 1 [0   10   20   30   40   50   60   70   80   90");
    // 02750 PRINT "   100] TEAM 2"
    b2c_printf("   100] team 2\n");
    // 02760 PRINT
    b2c_printf("");
    // 02770 GOTO 02780
    goto Lbl_02780;

  Lbl_02780:
    // 02780 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(32);"FOOTBALL"
    b2c_printf("Football\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 REM
    // 01040 DIM A(20),B(20),C(40),H(2),T(2),W(2),X(2),Y(2),Z(2)
    // 01050 DIM M$(2),D(2),P$(20)
    // 01060 PRINT "PRESENTING N.F.U. FOOTBALL (NO FORTRAN USED)"
    b2c_printf("Presenting n.F.U. Football (no fortran used)\n");
    // 01070 PRINT:PRINT
    b2c_printf("");

  Lbl_01080:
    // 01080 INPUT "DO YOU WANT INSTRUCTIONS";A$
    // Start of Basic INPUT statement 01080
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""DO YOU WANT INSTRUCTIONS"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01080
    // 01090 IF A$="NO" THEN 1270
    if(strcmp(A_str,"No")==0)goto Lbl_01270;
    // 01100 IF A$<>"YES" THEN 1080
    if(strcmp(A_str,"Yes")!=0)goto Lbl_01080;
    // 01110 PRINT "THIS IS A FOOTBALL GAME FOR TWO TEAMS IN WHICH PLAYERS MUST"
    b2c_printf("This is a football game for two teams in which players must\n");
    // 01120 PRINT "PREPARE A TAPE WITH A DATA STATEMENT (1770 FOR TEAM 1,"
    b2c_printf("Prepare a tape with a data statement (1770 for team 1,\n");
    // 01130 PRINT "1780 FOR TEAM 2) IN WHICH EACH TEAM SCRAMBLES NOS. 1-20"
    b2c_printf("1780 for team 2) in which each team scrambles nos. 1-20\n");
    // 01140 PRINT "THESE NUMBERS ARE THEN ASSIGNED TO TWENTY GIVEN PLAYS."
    b2c_printf("These numbers are then assigned to twenty given plays.\n");
    // 01150 PRINT"A LIST OF NOS. AND THEIR PLAYS IS PROVIDED WITH"
    b2c_printf("A list of nos. And their plays is provided with\n");
    // 01160 PRINT "BOTH TEAMS HAVING THE SAME PLAYS. THE MORE SIMILAR THE"
    b2c_printf("Both teams having the same plays. The more similar the\n");
    // 01170 PRINT "PLAYS THE LESS YARDAGE GAINED.  SCORES ARE GIVEN"
    b2c_printf("Plays the less yardage gained.  Scores are given\n");
    // 01180 PRINT "WHENEVER SCORES ARE MADE. SCORES MAY ALSO BE OBTAINED"
    b2c_printf("Whenever scores are made. Scores may also be obtained\n");
    // 01190 PRINT "BY INPUTTING 99,99 FOR PLAY NOS. TO PUNT OR ATTEMPT A"
    b2c_printf("By inputting 99,99 for play nos. To punt or attempt a\n");
    // 01200 PRINT "FIELD GOAL, INPUT 77,77 FOR PLAY NUMBERS. QUESTIONS WILL BE"
    b2c_printf("Field goal, input 77,77 for play numbers. Questions will be\n");
    // 01210 PRINT "ASKED THEN. ON 4TH DOWN, YOU WILL ALSO BE ASKED WHETHER"
    b2c_printf("Asked then. On 4th down, you will also be asked whether\n");
    // 01220 PRINT "YOU WANT TO PUNT OR ATTEMPT A FIELD GOAL. IF THE ANSWER TO"
    b2c_printf("You want to punt or attempt a field goal. If the answer to\n");
    // 01230 PRINT "BOTH QUESTIONS IS NO IT WILL BE ASSUMED YOU WANT TO"
    b2c_printf("Both questions is no it will be assumed you want to\n");
    // 01240 PRINT "TRY AND GAIN YARDAGE. ANSWER ALL QUESTIONS YES OR NO."
    b2c_printf("Try and gain yardage. Answer all questions yes or no.\n");
    // 01250 PRINT "THE GAME IS PLAYED UNTIL PLAYERS TERMINATE (CONTROL-C)."
    b2c_printf("The game is played until players terminate (control-c).\n");
    // 01260 PRINT "PLEASE PREPARE A TAPE AND RUN.": STOP
    exit(1);

  Lbl_01270:
    // 01270 PRINT:PRINT "PLEASE INPUT SCORE LIMIT ON GAME";:INPUT E
    // Start of Basic INPUT statement 01270
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
    }; // End of Basic INPUT statement 01270
    // 01280 FOR I=1 TO 40: READ N: IF I>20 THEN 1300
    if(I_int>20)goto Lbl_01300;
    // 01290 A(N)=I: GOTO 1310
    goto Lbl_01310;

  Lbl_01300:
    // 01300 B(N)=I-20
    B_int_arr[N_int] = I_int-20;

  Lbl_01310:
    // 01310 C(I)=N: NEXT I
    int dummy_1310=0; // Ignore this line.
}; // End-For(I_int)
// 01320 FOR I=1 TO 20: READ P$(I): NEXT I
int dummy_1320=0; // Ignore this line.
r* CName(const char*)}; // End-For(I_int)
r* CName(const char*)// 01330 L=0: T=1
r* CName(const char*)T_int_arr[0] = 1;

  Lbl_01340:
r* CName(const char*)// 01340 PRINT "TEAM";T;"PLAY CHART"
r* CName(const char*)b2c_printf("Team %d TeamPlay chart\n",T_int_arr[0]);
r* CName(const char*)// 01350 PRINT "NO.      PLAY"
r* CName(const char*)b2c_printf("No.      Play\n");
r* CName(const char*)// 01360 FOR I=1 TO 20
r* CName(const char*)for(I_int=1;I_int<=20;I_int++){
// 01370 REM
// 01380 PRINT C(I+L);TAB(6);P$(I)
b2c_printf(" %d ½:(X½:(X%s\n",C_int_arr[I_int+L_int],P_str_arr[I_int]);
// 01390 NEXT I
int dummy_1390=0; // Ignore this line.
r* CName(const char*)}; // End-For(I_int)
r* CName(const char*)// 01400 L=L+20:T=2
r* CName(const char*)T_int_arr[0] = 2;
r* CName(const char*)// 01410 PRINT
r* CName(const char*)b2c_printf("");
r* CName(const char*)// 01420 PRINT "TEAR OFF HERE----------------------------------------------"
r* CName(const char*)b2c_printf("Tear off here----------------------------------------------\n");
r* CName(const char*)// 01430 FOR X=1 TO 11: PRINT: NEXT X
r* CName(const char*)int dummy_1430=0; // Ignore this line.
Name(const char*)}; // End-For(X_int_arr[0])
Name(const char*)// 01440 FOR Z=1 TO 3000: NEXT Z
Name(const char*)int dummy_1440=0; // Ignore this line.
(const char*)}; // End-For(Z_int_arr[0])
(const char*)// 01450 IF L=20 THEN 1340
(const char*)if(L_int==20)goto Lbl_01340;
(const char*)// 01460 D(1)=0: D(2)=3: M$(1)="--->": M$(2)="<---"
(const char*)GLBpStr="<---";
(const char*)M_str_arr[2] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
(const char*)// 01470 H(1)=0: H(2)=0: T(1)=2: T(2)=1
(const char*)T_int_arr[2] = 1;
(const char*)// 01480 W(1)=-1: W(2)=1: X(1)=100: X(2)=0
(const char*)X_int_arr[2] = 0;
(const char*)// 01490 Y(1)=1: Y(2)=-1: Z(1)=0: Z(2)=100
(const char*)Z_int_arr[2] = 100;
(const char*)// 01500 GOSUB 2740
(const char*)Routine_02740();
(const char*)// 01510 PRINT "TEAM 1 DEFENDS 0 YD GOAL -- TEAM 2 DEFENDS 100 YD GOAL."
(const char*)b2c_printf("Team 1 defends 0 yd goal -- team 2 defends 100 yd goal.\n");
(const char*)// 01520 T=INT(2*RND(1)+1)
(const char*)T_int_arr[0] = INT(2*RND(1)+1);
(const char*)// 01530 PRINT: PRINT "THE COIN IS FLIPPED"
(const char*)b2c_printf("The coin is flipped\n");

  Lbl_01540:
(const char*)// 01540 P=X(T)-Y(T)*40
(const char*)P_int = X_int_arr[T_int_arr[0]]-Y_int_arr[T_int_arr[0]]*40;
(const char*)// 01550 GOSUB 1860: PRINT : PRINT "TEAM";T;"RECEIVES KICK-OFF"
(const char*)b2c_printf("Team %d TeamReceives kick-off\n",T_int_arr[0]);
(const char*)// 01560 K=INT(26*RND(1)+40)
(const char*)K_int = INT(26*RND(1)+40);

  Lbl_01570:
(const char*)// 01570 P=P-Y(T)*K
(const char*)P_int = P_int-Y_int_arr[T_int_arr[0]]*K_int;

  Lbl_01580:
(const char*)// 01580 IF W(T)*P<Z(T)+10 THEN 1610
(const char*)if(W_int_arr[T_int_arr[0]]*P_int<Z_int_arr[T_int_arr[0]]+10)goto Lbl_01610;
(const char*)// 01590 PRINT: PRINT "BALL WENT OUT OF ENDZONE --AUTOMATIC TOUCHBACK--"
(const char*)b2c_printf("Ball went out of endzone --automatic touchback--\n");
(const char*)// 01600 GOTO 1660 
(const char*)goto Lbl_01660;

  Lbl_01610:
(const char*)// 01610 PRINT "BALL WENT";K;"YARDS.  NOW ON";P:GOSUB 2730
(const char*)Routine_02730();

  Lbl_01620:
(const char*)// 01620 PRINT "TEAM";T;"DO YOU WANT TO RUNBACK";:INPUT A$
(const char*)// Start of Basic INPUT statement 01620
(const char*){
Name(const char*)int numargs=1;
Name(const char*)char *args[numargs+1];
Name(const char*)bool echoeol=true;
Name(const char*)while(true){
r* CName(const char*)fprintf(stdout," ? ");
r* CName(const char*)int err=input(args,numargs,echoeol);
r* CName(const char*)if(err==0x03) break;
r* CName(const char*)if(err || 
(err += b2c_strtos(&A_str,args,0)) ){
 printf("?Redo from start\n");
r* CName(const char*)}else{
r* CName(const char*)    break;
r* CName(const char*)};
Name(const char*)};
(const char*)}; // End of Basic INPUT statement 01620
(const char*)// 01630 IF A$="YES" THEN 2350
(const char*)if(strcmp(A_str,"Yes")==0)goto Lbl_02350;
(const char*)// 01640 IF A$<>"NO" THEN 1620
(const char*)if(strcmp(A_str,"No")!=0)goto Lbl_01620;
(const char*)// 01650 IF W(T)*P<Z(T) THEN 1670
(const char*)if(W_int_arr[T_int_arr[0]]*P_int<Z_int_arr[T_int_arr[0]])goto Lbl_01670;

  Lbl_01660:
(const char*)// 01660 P=Z(T)-W(T)*20
(const char*)P_int = Z_int_arr[T_int_arr[0]]-W_int_arr[T_int_arr[0]]*20;

  Lbl_01670:
(const char*)// 01670 D=1: S=P
(const char*)S_int = P_int;

  Lbl_01680:
(const char*)// 01680 FOR I=1 TO 72: PRINT "=";: NEXT I
(const char*)int dummy_1680=0; // Ignore this line.
st char*)}; // End-For(I_int)
st char*)// 01690 PRINT: PRINT "TEAM";T;"DOWN";D;"ON";P
st char*)b2c_printf("Team %d TeamDownDown %d DownOnOn %d \n",T_int_arr[0],D_int_arr[0],P_int);
st char*)// 01700 IF D<>1 THEN 1740
st char*)if(D_int_arr[0]!=1)goto Lbl_01740;
st char*)// 01710 IF Y(T)*(P+Y(T)*10)>=X(T) THEN 1730
st char*)if(Y_int_arr[T_int_arr[0]]*(P_int+Y_int_arr[T_int_arr[0]]*10)>=X_int_arr[T_int_arr[0]])goto Lbl_01730;
st char*)// 01720 C=4: GOTO 1740
st char*)goto Lbl_01740;

  Lbl_01730:
st char*)// 01730 C=8
st char*)C_int_arr[0] = 8;

  Lbl_01740:
st char*)// 01740 IF C=8 THEN 1770
st char*)if(C_int_arr[0]==8)goto Lbl_01770;
st char*)// 01750 PRINT TAB(27);10-(Y(T)*P-Y(T)*S);"YARDS TO 1ST DOWN"
st char*)b2c_printf("Yards to 1st down\n");
st char*)// 01760 GOTO 1780
st char*)goto Lbl_01780;

  Lbl_01770:
st char*)// 01770 PRINT TAB(27);X(T)-Y(T)*P;"YARDS"
st char*)b2c_printf("Yards\n");

  Lbl_01780:
st char*)// 01780 GOSUB 1900: IF D=4 THEN 2160
st char*)if(D_int_arr[0]==4)goto Lbl_02160;
st char*)// 01790 REM

  Lbl_01800:
st char*)// 01800 U=INT(3*RND(0)-1): GOTO 1820
st char*)goto Lbl_01820;

  Lbl_01810:
st char*)// 01810 PRINT "ILLEGAL PLAY NUMBER, CHECK AND"
st char*)b2c_printf("Illegal play number, check and\n");

  Lbl_01820:
st char*)// 01820 PRINT "INPUT OFFENSIVE PLAY, DEFENSIVE PLAY";
st char*)b2c_printf("Input offensive play, defensive play");
st char*)// 01830 IF T=2 THEN 1850
st char*)if(T_int_arr[0]==2)goto Lbl_01850;
st char*)// 01840 INPUT P1,P2: GOTO 1860
st char*)goto Lbl_01860;

  Lbl_01850:
st char*)// 01850 INPUT P2,P1
st char*)// Start of Basic INPUT statement 01850
st char*){
(const char*)int numargs=2;
(const char*)char *args[numargs+1];
(const char*)bool echoeol=true;
(const char*)while(true){
Name(const char*)fprintf(stdout," ? ");
Name(const char*)int err=input(args,numargs,echoeol);
Name(const char*)if(err==0x03) break;
Name(const char*)if(err || 
r* CName(const char*)(err += b2c_strtoi(&P2_int,args,0)) ||
r* CName(const char*)(err += b2c_strtoi(&P1_int,args,1)) ){
r* CName(const char*) printf("?Redo from start\n");
Name(const char*)}else{
Name(const char*)    break;
Name(const char*)};
(const char*)};
st char*)}; // End of Basic INPUT statement 01850

  Lbl_01860:
st char*)// 01860 IF P1=77 THEN 2160
st char*)if(P1_int==77)goto Lbl_02160;
st char*)// 01870 IF P1>20 THEN 2650
st char*)if(P1_int>20)goto Lbl_02650;
st char*)// 01880 IF P1<1 THEN 2650
st char*)if(P1_int<1)goto Lbl_02650;
st char*)// 01890 IF P2>20 THEN 2650
st char*)if(P2_int>20)goto Lbl_02650;
st char*)// 01900 IF P2<1 THEN 2650
st char*)if(P2_int<1)goto Lbl_02650;
st char*)// 01910 P1=INT(P1): P2=INT(P2)
st char*)P2_int = INT(P2_int);
st char*)// 01920 Y=INT(ABS(A(P1)-B(P2))/19*((X(T)-Y(T)*P+25)*RND(1)-15))
st char*)Y_int_arr[0] = INT(ABS(A_int_arr[P1_int]-B_int_arr[P2_int])/19*((X_int_arr[T_int_arr[0]]-Y_int_arr[T_int_arr[0]]*P_int+25)*RND(1)-15));
st char*)// 01930 PRINT: IF T=2 THEN 1960
st char*)if(T_int_arr[0]==2)goto Lbl_01960;
st char*)// 01940 IF A(P1)<11 THEN 2040
st char*)if(A_int_arr[P1_int]<11)goto Lbl_02040;
st char*)// 01950 GOTO 1970
st char*)goto Lbl_01970;

  Lbl_01960:
st char*)// 01960 IF B(P2)<11 THEN 2040
st char*)if(B_int_arr[P2_int]<11)goto Lbl_02040;

  Lbl_01970:
st char*)// 01970 IF U<>0 THEN 2000
st char*)if(U_int!=0)goto Lbl_02000;
st char*)// 01980 PRINT "PASS INCOMPLETE TEAM";T
st char*)b2c_printf("Pass incomplete team %d \n",T_int_arr[0]);
st char*)// 01990 Y=0: GOTO 2050
st char*)goto Lbl_02050;

  Lbl_02000:
st char*)// 02000 G=RND(1): IF G>.025 THEN 2020
st char*)if(G_int>0.03)goto Lbl_02020;
st char*)// 02010 IF Y>2 THEN 2030
st char*)if(Y_int_arr[0]>2)goto Lbl_02030;

  Lbl_02020:
st char*)// 02020 PRINT "QUARTERBACK SCRAMBLED": GOTO 2050
st char*)goto Lbl_02050;

  Lbl_02030:
st char*)// 02030 PRINT "PASS COMPLETED": GOTO 2050
st char*)goto Lbl_02050;

  Lbl_02040:
st char*)// 02040 PRINT "THE BALL WAS RUN"
st char*)b2c_printf("The ball was run\n");

  Lbl_02050:
st char*)// 02050 P=P-W(T)*Y
st char*)P_int = P_int-W_int_arr[T_int_arr[0]]*Y_int_arr[0];
st char*)// 02060 PRINT: PRINT "NET YARDS GAINED ON DOWN";D;"ARE ";Y
st char*)b2c_printf("Net yards gained on down %d Net yards gained on downAre Are  %d \n",D_int_arr[0],Y_int_arr[0]);
st char*)// 02070 G=RND(1): IF G>.025 THEN 2100
st char*)if(G_int>0.03)goto Lbl_02100;

  Lbl_02080:
st char*)// 02080 PRINT: PRINT "** LOSS OF POSSESSION FROM TEAM";T;"TO TEAM";T(T)
st char*)b2c_printf("** loss of possession from team %d ** loss of possession from teamTo teamTo team %d \n",T_int_arr[0],T_int_arr[T_int_arr[0]]);
st char*)// 02090 GOSUB 1850: PRINT: T=T(T): GOTO 1620
st char*)goto Lbl_01620;

  Lbl_02100:
st char*)// 02100 IF Y(T)*P>=X(T) THEN 2290
st char*)if(Y_int_arr[T_int_arr[0]]*P_int>=X_int_arr[T_int_arr[0]])goto Lbl_02290;
st char*)// 02110 IF W(T)*P>=Z(T) THEN 2250
st char*)if(W_int_arr[T_int_arr[0]]*P_int>=Z_int_arr[T_int_arr[0]])goto Lbl_02250;
st char*)// 02120 IF Y(T)*P-Y(T)*S>=10 THEN 1670
st char*)if(Y_int_arr[T_int_arr[0]]*P_int-Y_int_arr[T_int_arr[0]]*S_int>=10)goto Lbl_01670;
st char*)// 02130 D=D+1: IF D<>5 THEN 1680
st char*)if(D_int_arr[0]!=5)goto Lbl_01680;
st char*)// 02140 PRINT: PRINT "CONVERSION UNSUCCESSFUL TEAM";T:T=T(T)
st char*)T_int_arr[0] = T_int_arr[T_int_arr[0]];
st char*)// 02150 GOSUB 1850: GOTO 1670
st char*)goto Lbl_01670;

  Lbl_02160:
st char*)// 02160 PRINT "DOES TEAM";T;"WANT TO PUNT";: INPUT A$
st char*)// Start of Basic INPUT statement 02160
st char*){
(const char*)int numargs=1;
(const char*)char *args[numargs+1];
(const char*)bool echoeol=true;
(const char*)while(true){
Name(const char*)fprintf(stdout," ? ");
Name(const char*)int err=input(args,numargs,echoeol);
Name(const char*)if(err==0x03) break;
Name(const char*)if(err || 
r* CName(const char*)(err += b2c_strtos(&A_str,args,0)) ){
r* CName(const char*) printf("?Redo from start\n");
Name(const char*)}else{
Name(const char*)    break;
Name(const char*)};
(const char*)};
st char*)}; // End of Basic INPUT statement 02160
st char*)// 02170 IF A$="NO" THEN 2210
st char*)if(strcmp(A_str,"No")==0)goto Lbl_02210;
st char*)// 02180 IF A$<>"YES" THEN 2160
st char*)if(strcmp(A_str,"Yes")!=0)goto Lbl_02160;

  Lbl_02190:
st char*)// 02190 PRINT:PRINT "TEAM";T;"WILL PUNT": G=RND(1): IF G<.025 THEN 2080
st char*)if(G_int<0.03)goto Lbl_02080;
st char*)// 02200 GOSUB 1850: K=INT(25*RND(1)+35): T=T(T): GOTO 1570
st char*)goto Lbl_01570;

  Lbl_02210:
st char*)// 02210 PRINT "DOES TEAM";T;"WANT TO ATTEMPT A FIELD GOAL";: INPUT A$
st char*)// Start of Basic INPUT statement 02210
st char*){
(const char*)int numargs=1;
(const char*)char *args[numargs+1];
(const char*)bool echoeol=true;
(const char*)while(true){
Name(const char*)fprintf(stdout," ? ");
Name(const char*)int err=input(args,numargs,echoeol);
Name(const char*)if(err==0x03) break;
Name(const char*)if(err || 
r* CName(const char*)(err += b2c_strtos(&A_str,args,0)) ){
r* CName(const char*) printf("?Redo from start\n");
Name(const char*)}else{
Name(const char*)    break;
Name(const char*)};
(const char*)};
st char*)}; // End of Basic INPUT statement 02210
st char*)// 02220 IF A$="YES" THEN 2430
st char*)if(strcmp(A_str,"Yes")==0)goto Lbl_02430;
st char*)// 02230 IF A$<>"NO" THEN 2210
st char*)if(strcmp(A_str,"No")!=0)goto Lbl_02210;
st char*)// 02240 GOTO 1800
st char*)goto Lbl_01800;

  Lbl_02250:
st char*)// 02250 PRINT: PRINT "SAFETY AGAINST TEAM";T;"**********************OH-OH"
st char*)b2c_printf("Safety against team %d Safety against team**********************oh-oh\n",T_int_arr[0]);
st char*)// 02260 H(T(T))=H(T(T))+2: GOSUB 2660
st char*)Routine_02660();
st char*)// 02270 PRINT"TEAM";T;"DO YOU WANT TO PUNT INSTEAD OF A KICKOFF";:INPUT A$
st char*)// Start of Basic INPUT statement 02270
st char*){
(const char*)int numargs=1;
(const char*)char *args[numargs+1];
(const char*)bool echoeol=true;
(const char*)while(true){
Name(const char*)fprintf(stdout," ? ");
Name(const char*)int err=input(args,numargs,echoeol);
Name(const char*)if(err==0x03) break;
Name(const char*)if(err || 
r* CName(const char*)(err += b2c_strtos(&A_str,args,0)) ){
r* CName(const char*) printf("?Redo from start\n");
Name(const char*)}else{
Name(const char*)    break;
Name(const char*)};
(const char*)};
st char*)}; // End of Basic INPUT statement 02270
st char*)// 02280 P=Z(T)-W(T)*20: IF A$="YES" THEN 2190
st char*)if(strcmp(A_str,"Yes")==0)goto Lbl_02190;

  Lbl_02290:
st char*)// 02290 PRINT: PRINT "TOUCHDOWN BY TEAM";T;"*********************YEA TEAM"
st char*)b2c_printf("Touchdown by team %d Touchdown by team*********************yea team\n",T_int_arr[0]);
st char*)// 02300 Q=7: G=RND(1): IF G>.1 THEN 2320
st char*)if(G_int>0.1)goto Lbl_02320;
st char*)// 02310 Q=6: PRINT "EXTRA POINT NO GOOD": GOTO 2330
st char*)goto Lbl_02330;

  Lbl_02320:
st char*)// 02320 PRINT "EXTRA POINT GOOD"
st char*)b2c_printf("Extra point good\n");

  Lbl_02330:
st char*)// 02330 H(T)=H(T)+Q: GOSUB 2660
st char*)Routine_02660();
st char*)// 02340 T=T(T): GOTO 1540
st char*)goto Lbl_01540;

  Lbl_02350:
st char*)// 02350 K=INT(9*RND(0)+1)
st char*)K_int = INT(9*RND(0)+1);
st char*)// 02360 R=INT(((X(T)-Y(T)*P+25)*RND(1)-15)/K)
st char*)R_int = INT(((X_int_arr[T_int_arr[0]]-Y_int_arr[T_int_arr[0]]*P_int+25)*RND(1)-15)/K_int);
st char*)// 02370 P=P-W(T)*R
st char*)P_int = P_int-W_int_arr[T_int_arr[0]]*R_int;
st char*)// 02380 PRINT:PRINT "RUNBACK TEAM";T;R;"YARDS"
st char*)b2c_printf("Runback team %d Runback team %d Runback teamYards\n",T_int_arr[0],R_int);
st char*)// 02390 G=RND(1): IF G<.025 THEN 2080
st char*)if(G_int<0.03)goto Lbl_02080;
st char*)// 02400 IF Y(T)*P>=X(T) THEN 2290
st char*)if(Y_int_arr[T_int_arr[0]]*P_int>=X_int_arr[T_int_arr[0]])goto Lbl_02290;
st char*)// 02410 IF W(T)*P>=Z(T) THEN 2250
st char*)if(W_int_arr[T_int_arr[0]]*P_int>=Z_int_arr[T_int_arr[0]])goto Lbl_02250;
st char*)// 02420 GOTO 1670
st char*)goto Lbl_01670;

  Lbl_02430:
st char*)// 02430 PRINT: PRINT "TEAM";T;"WILL ATTEMPT A FIELD GOAL"
st char*)b2c_printf("Team %d TeamWill attempt a field goal\n",T_int_arr[0]);
st char*)// 02440 G=RND(1): IF G<.025 THEN 2080
st char*)if(G_int<0.03)goto Lbl_02080;
st char*)// 02450 F=INT(35*RND(1)+20)
st char*)F_int = INT(35*RND(1)+20);
st char*)// 02460 PRINT: PRINT "KICK IS";F;"YARDS LONG"
st char*)b2c_printf("Kick is %d Kick isYards long\n",F_int);
st char*)// 02470 P=P-W(T)*F: G=RND(1)
st char*)G_int = RND(1);
st char*)// 02480 IF G<.35 THEN 2520
st char*)if(G_int<0.35)goto Lbl_02520;
st char*)// 02490 IF Y(T)*P<X(T) THEN 2530
st char*)if(Y_int_arr[T_int_arr[0]]*P_int<X_int_arr[T_int_arr[0]])goto Lbl_02530;
st char*)// 02500 PRINT "FIELD GOAL GOOD FOR TEAM";T;"*********************YEA"
st char*)b2c_printf("Field goal good for team %d Field goal good for team*********************yea\n",T_int_arr[0]);
st char*)// 02510 Q=3: GOTO 2330
st char*)goto Lbl_02330;

  Lbl_02520:
st char*)// 02520 PRINT "BALL WENT WIDE"
st char*)b2c_printf("Ball went wide\n");

  Lbl_02530:
st char*)// 02530 PRINT "FIELD GOAL UNSUCCESFUL TEAM";T;"-----------------TOO BAD"
st char*)b2c_printf("Field goal unsuccesful team %d Field goal unsuccesful team-----------------too bad\n",T_int_arr[0]);
st char*)// 02540 GOSUB 1850: IF Y(T)*P<X(T)+10 THEN 2560
st char*)if(Y_int_arr[T_int_arr[0]]*P_int<X_int_arr[T_int_arr[0]]+10)goto Lbl_02560;
st char*)// 02550 T=T(T): GOTO 1580
st char*)goto Lbl_01580;

  Lbl_02560:
st char*)// 02560 PRINT: PRINT "BALL NOW ON";P
st char*)b2c_printf("Ball now on %d \n",P_int);
st char*)// 02570 T=T(T): GOSUB 1900: GOTO 1620
st char*)goto Lbl_01620;
st char*)// 02580 DATA 17,8,4,14,19,3,10,1,7,11,15,9,5,20,13,18,16,2,12,6
st char*)// 02590 DATA 20,2,17,5,8,18,12,11,1,4,19,14,10,7,9,15,6,13,16,3
st char*)// 02600 DATA "PITCHOUT","TRIPLE REVERSE","DRAW","QB SNEAK","END AROUND"
st char*)// 02610 DATA "DOUBLE REVERSE","LEFT SWEEP","RIGHT SWEEP","OFF TACKLE"
st char*)// 02620 DATA "WISHBONE OPTION","FLARE PASS","SCREEN PASS"
st char*)// 02630 DATA "ROLL OUT OPTION","RIGHT CURL","LEFT CURL","WISHBONE OPTION"
st char*)// 02640 DATA "SIDELINE PASS","HALF-BACK OPTION","RAZZLE-DAZZLE","BOMB!!!!"

  Lbl_02650:
st char*)// 02650 IF P1<>99 THEN 1810
st char*)if(P1_int!=99)goto Lbl_01810;

void Routine_02660(){
st char*)// 02660 PRINT: PRINT "TEAM 1 SCORE IS";H(1)
st char*)b2c_printf("Team 1 score is %d \n",H_int_arr[1]);
st char*)// 02670 PRINT "TEAM 2 SCORE IS";H(2): PRINT
st char*)b2c_printf("");
st char*)// 02680 IF H(T)<E THEN 2700
st char*)if(H_int_arr[T_int_arr[0]]<E_int)goto Lbl_02700;
st char*)// 02690 PRINT "TEAM";T;"WINS*******************": GOTO 2720
st char*)goto Lbl_02720;

  Lbl_02700:
st char*)// 02700 IF P1=99 THEN 1820
st char*)if(P1_int==99)goto Lbl_01820;
st char*)// 02710 GOTO 09900
st char*)goto Lbl_09900;

  Lbl_02720:
st char*)// 02720 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
