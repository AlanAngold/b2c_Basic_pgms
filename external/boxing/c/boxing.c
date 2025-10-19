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
int    B_int;                                     // Basic: B 
int    B1_int;                                    // Basic: B1 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    D1_int;                                    // Basic: D1 
int    D5_int;                                    // Basic: D5 
int    H1_int;                                    // Basic: H1 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
char*  J_str;                                     // Basic: J$ 
int    J7_int;                                    // Basic: J7 
int    L_int;                                     // Basic: L 
char*  L_str;                                     // Basic: L$ 
int    P_int;                                     // Basic: P 
int    Q4_int;                                    // Basic: Q4 
int    R_int;                                     // Basic: R 
int    R1_int;                                    // Basic: R1 
int    R6_int;                                    // Basic: R6 
int    X_int;                                     // Basic: X 
int    X3_int;                                    // Basic: X3 
int    Y_int;                                     // Basic: Y 
int    Z4_int;                                    // Basic: Z4 
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
    // 01000 PRINT TAB(33);"BOXING"
    b2c_printf("Boxing\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "BOXING OLYMPIC STYLE (3 ROUNDS -- 2 OUT OF 3 WINS)"
    b2c_printf("Boxing olympic style (3 rounds -- 2 out of 3 wins)\n");
    // 01040 J=0
    J_int = 0;
    // 01050 L=0
    L_int = 0;
    // 01060 PRINT
    b2c_printf("");
    // 01070 PRINT "WHAT IS YOUR OPPONENT'S NAME";
    b2c_printf("What is your opponent's name");
    // 01080 INPUT J$
    // Start of Basic INPUT statement 01080
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&J_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01080
    // 01090 PRINT "INPUT YOUR MAN'S NAME";
    b2c_printf("Input your man's name");
    // 01100 INPUT L$
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
                (err += b2c_strtos(&L_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01100
    // 01110 PRINT "DIFFERENT PUNCHES ARE: (1) FULL SWING; (2) HOOK; (3) UPPERCUT; (4) JAB."
    b2c_printf("Different punches are: (1) full swing; (2) hook; (3) uppercut; (4) jab.\n");
    // 01120 PRINT "WHAT IS YOUR MANS BEST";
    b2c_printf("What is your mans best");
    // 01130 INPUT B
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
                (err += b2c_strtoi(&B_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01130
    // 01140 PRINT "WHAT IS HIS VULNERABILITY";
    b2c_printf("What is his vulnerability");
    // 01150 INPUT D
    // Start of Basic INPUT statement 01150
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&D_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01150

  Lbl_01160:
    // 01160 B1=INT(4*RND(1)+1)
    B1_int = INT(4*RND(1)+1);
    // 01170 D1=INT(4*RND(1)+1)
    D1_int = INT(4*RND(1)+1);
    // 01180 IF B1=D1 THEN 1160
    if(B1_int==D1_int)goto Lbl_01160;
    // 01190 PRINT J$;"'S ADVANTAGE IS";B1;"AND VULNERABILITY IS SECRET.":PRINT
    b2c_printf("");
    // 01200 FOR R=1 TO 3
    for(R_int=1;R_int<=3;R_int++){
        // 01210 IF J>= 2 THEN 2330
        if(J_int>=2)goto Lbl_02330;
        // 01220 IF L>=2 THEN 2350
        if(L_int>=2)goto Lbl_02350;
        // 01230 X=0
        X_int = 0;
        // 01240 Y=0
        Y_int = 0;
        // 01250 PRINT "ROUND";R;"BEGINS..."
        b2c_printf("Round %d RoundBegins...\n",R_int);
        // 01260 FOR R1= 1 TO 7
        for(R1_int=1;R1_int<=7;R1_int++){
            // 01270 I=INT(10*RND(1)+1)
            I_int = INT(10*RND(1)+1);
            // 01280 IF I>5 THEN 1770
            if(I_int>5)goto Lbl_01770;
            // 01290 PRINT L$;"'S PUNCH";
            b2c_printf("%sÖ“†‹V's punch's punch\n",L_str);
            // 01300 INPUT P
            // Start of Basic INPUT statement 01300
            {
                int numargs=1;
                char *args[numargs+1];
                bool echoeol=true;
                while(true){
                    fprintf(stdout," ? ");
                    int err=input(args,numargs,echoeol);
                    if(err==0x03) break;
                    if(err || 
                        (err += b2c_strtoi(&P_int,args,0)) ){
                         printf("?Redo from start\n");
                    }else{
                        break;
                    };
                };
            }; // End of Basic INPUT statement 01300
            // 01310 IF P=B THEN 1330
            if(P_int==B_int)goto Lbl_01330;
            // 01320 GOTO 1340
            goto Lbl_01340;

  Lbl_01330:
            // 01330 X=X+2
            X_int = X_int+2;

  Lbl_01340:
            // 01340 IF P=1 THEN 1450
            if(P_int==1)goto Lbl_01450;
            // 01350 IF P=2 THEN 1590
            if(P_int==2)goto Lbl_01590;
            // 01360 IF P=3 THEN 1680
            if(P_int==3)goto Lbl_01680;
            // 01370 PRINT L$;" JABS AT ";J$"'S HEAD ";
            b2c_printf("%sÉ“†‹V jabs at  jabs at %s jabs at 's head 's head \n",L_str,J_str);
            // 01380 IF D1=4 THEN 1410
            if(D1_int==4)goto Lbl_01410;
            // 01390 C=INT(8*RND(1)+1)
            C_int = INT(8*RND(1)+1);
            // 01400 IF C<4 THEN 1430
            if(C_int<4)goto Lbl_01430;

  Lbl_01410:
            // 01410 X=X+3
            X_int = X_int+3;

  Lbl_01420:
            // 01420 GOTO 2190
            goto Lbl_02190;

  Lbl_01430:
            // 01430 PRINT "IT'S BLOCKED."
            b2c_printf("It's blocked.\n");
            // 01440 GOTO 2190
            goto Lbl_02190;

  Lbl_01450:
            // 01450 PRINT L$ " SWINGS AND ";
            b2c_printf("%srÏùˇ swings and  swings and \n",L_str);
            // 01460 IF D1=4 THEN 1550
            if(D1_int==4)goto Lbl_01550;
            // 01470 X3=INT(30*RND(1)+1)
            X3_int = INT(30*RND(1)+1);
            // 01480 IF X3<10 THEN 1550
            if(X3_int<10)goto Lbl_01550;
            // 01490 PRINT "HE MISSES ";
            b2c_printf("He misses ");
            // 01500 PRINT
            b2c_printf("");
            // 01510 IF X=1 THEN 2190
            if(X_int==1)goto Lbl_02190;
            // 01520 PRINT
            b2c_printf("");
            // 01530 PRINT
            b2c_printf("");
            // 01540 GOTO 1420
            goto Lbl_01420;

  Lbl_01550:
            // 01550 PRINT "HE CONNECTS!"
            b2c_printf("He connects!\n");
            // 01560 IF X>35 THEN 2290
            if(X_int>35)goto Lbl_02290;
            // 01570 X=X+15
            X_int = X_int+15;
            // 01580 GOTO 1420
            goto Lbl_01420;

  Lbl_01590:
            // 01590 PRINT L$;" GIVES THE HOOK... ";
            b2c_printf("%srÏùˇ gives the hook...  gives the hook... \n",L_str);
            // 01600 IF D1=2 THEN 1640
            if(D1_int==2)goto Lbl_01640;
            // 01610 H1=INT(2*RND(1)+1)
            H1_int = INT(2*RND(1)+1);
            // 01620 IF H1=1 THEN 1660
            if(H1_int==1)goto Lbl_01660;
            // 01630 PRINT "CONNECTS..."
            b2c_printf("Connects...\n");

  Lbl_01640:
            // 01640 X=X+7
            X_int = X_int+7;
            // 01650 GOTO 1420
            goto Lbl_01420;

  Lbl_01660:
            // 01660 PRINT "BUT IT'S BLOCKED!!!!!!!!!!!!!"
            b2c_printf("But it's blocked!!!!!!!!!!!!!\n");
            // 01670 GOTO 1420
            goto Lbl_01420;

  Lbl_01680:
            // 01680 PRINT L$ " TRIES AN UPPERCUT ";
            b2c_printf("%srÏùˇ tries an uppercut  tries an uppercut \n",L_str);
            // 01690 IF D1=3 THEN 1740
            if(D1_int==3)goto Lbl_01740;
            // 01700 D5=INT(100*RND(1)+1)
            D5_int = INT(100*RND(1)+1);
            // 01710 IF D5<51 THEN 1740
            if(D5_int<51)goto Lbl_01740;
            // 01720 PRINT "AND IT'S BLOCKED (LUCKY BLOCK!)"
            b2c_printf("And it's blocked (lucky block!)\n");
            // 01730 GOTO 1420
            goto Lbl_01420;

  Lbl_01740:
            // 01740 PRINT "AND HE CONNECTS!"
            b2c_printf("And he connects!\n");
            // 01750 X=X+4
            X_int = X_int+4;
            // 01760 GOTO 1420
            goto Lbl_01420;

  Lbl_01770:
            // 01770 J7=INT(4*RND(1)+1)
            J7_int = INT(4*RND(1)+1);
            // 01780 IF J7 =B1 THEN 1800
            if(J7_int==B1_int)goto Lbl_01800;
            // 01790 GOTO 1810
            goto Lbl_01810;

  Lbl_01800:
            // 01800 Y=Y+2
            Y_int = Y_int+2;

  Lbl_01810:
            // 01810 IF J7=1 THEN 1930
            if(J7_int==1)goto Lbl_01930;
            // 01820 IF J7=2 THEN 2030
            if(J7_int==2)goto Lbl_02030;
            // 01830 IF J7 =3 THEN 2090
            if(J7_int==3)goto Lbl_02090;
            // 01840 PRINT J$;" JABS AND ";
            b2c_printf("%sè“†‹V jabs and  jabs and \n",J_str);
            // 01850 IF D=4 THEN 1910
            if(D_int==4)goto Lbl_01910;
            // 01860 Z4=INT(7*RND(1)+1)
            Z4_int = INT(7*RND(1)+1);
            // 01870 IF Z4>4 THEN 1900
            if(Z4_int>4)goto Lbl_01900;
            // 01880 PRINT "IT'S BLOCKED!"
            b2c_printf("It's blocked!\n");
            // 01890 GOTO 1420
            goto Lbl_01420;

  Lbl_01900:
            // 01900 PRINT " BLOOD SPILLS !!!"
            b2c_printf(" blood spills !!!\n");

  Lbl_01910:
            // 01910 Y=Y+5
            Y_int = Y_int+5;
            // 01920 GOTO 1420
            goto Lbl_01420;

  Lbl_01930:
            // 01930 PRINT J$" TAKES A FULL SWING AND";
            b2c_printf("%srÏùˇ takes a full swing and takes a full swing and\n",J_str);
            // 01940 IF D=1 THEN 1990
            if(D_int==1)goto Lbl_01990;
            // 01950 R6=INT(60*RND(1)+1)
            R6_int = INT(60*RND(1)+1);
            // 01960 IF R6 <30 THEN 1990
            if(R6_int<30)goto Lbl_01990;
            // 01970 PRINT " IT'S BLOCKED!"
            b2c_printf(" it's blocked!\n");
            // 01980 GOTO 1420
            goto Lbl_01420;

  Lbl_01990:
            // 01990 PRINT " POW!!!!! HE HITS HIM RIGHT IN THE FACE!"
            b2c_printf(" pow!!!!! He hits him right in the face!\n");
            // 02000 IF Y>35 THEN 2310
            if(Y_int>35)goto Lbl_02310;
            // 02010 Y=Y+15
            Y_int = Y_int+15;
            // 02020 GOTO 1420
            goto Lbl_01420;

  Lbl_02030:
            // 02030 PRINT J$;" GETS ";L$;" IN THE JAW (OUCH!)"
            b2c_printf("%srÏùˇ gets  gets %s gets  in the jaw (ouch!)\n",J_str,L_str);
            // 02040 Y=Y+7
            Y_int = Y_int+7;
            // 02050 PRINT "....AND AGAIN!"
            b2c_printf("....And again!\n");
            // 02060 Y=Y+5
            Y_int = Y_int+5;
            // 02070 IF Y>35 THEN 2310
            if(Y_int>35)goto Lbl_02310;
            // 02080 PRINT
            b2c_printf("");

  Lbl_02090:
            // 02090 PRINT L$;" IS ATTACKED BY AN UPPERCUT (OH,OH)..."
            b2c_printf("%srÏùˇ is attacked by an uppercut (oh,oh)...\n",L_str);
            // 02100 IF D=3 THEN 2130
            if(D_int==3)goto Lbl_02130;
            // 02110 Q4=INT(200*RND(1)+1)
            Q4_int = INT(200*RND(1)+1);
            // 02120 IF Q4>75 THEN 2160
            if(Q4_int>75)goto Lbl_02160;

  Lbl_02130:
            // 02130 PRINT "AND ";J$;" CONNECTS..."
            b2c_printf("And %sAnd  connects...\n",J_str);
            // 02140 Y=Y+8
            Y_int = Y_int+8;
            // 02150 GOTO 1420
            goto Lbl_01420;

  Lbl_02160:
            // 02160 PRINT " BLOCKS AND HITS ";J$;" WITH A HOOK."
            b2c_printf(" blocks and hits %s blocks and hits  with a hook.\n",J_str);
            // 02170 X=X+5
            X_int = X_int+5;
            // 02180 GOTO 1420
            goto Lbl_01420;

  Lbl_02190:
            // 02190 NEXT R1
            int dummy_2190=0; // Ignore this line.
        }; // End-For(R1_int)
        // 02200 IF X>Y THEN 2240
        if(X_int>Y_int)goto Lbl_02240;
        // 02210 PRINT:PRINT J$" WINS ROUND" R
        b2c_printf("%sÀ“†‹V wins round wins round %d \n",J_str,R_int);
        // 02220 J=J+1
        J_int = J_int+1;
        // 02230 GOTO 2260
        goto Lbl_02260;

  Lbl_02240:
        // 02240 PRINT:PRINT L$" WINS ROUND"R
        b2c_printf("%srÏùˇ wins round wins round %d \n",L_str,R_int);
        // 02250 L=L+1
        L_int = L_int+1;

  Lbl_02260:
        // 02260 NEXT R
        int dummy_2260=0; // Ignore this line.
    }; // End-For(R_int)
    // 02270 IF J>= 2 THEN 2330
    if(J_int>=2)goto Lbl_02330;
    // 02280 IF L>=2 THEN 2350
    if(L_int>=2)goto Lbl_02350;

  Lbl_02290:
    // 02290 PRINT J$ " IS KNOCKED COLD AND " L$" IS THE WINNER AND CHAMP!";
    b2c_printf("%srÏùˇ is knocked cold and  is knocked cold and %s is knocked cold and  is the winner and champ! is the winner and champ!\n",J_str,L_str);

  Lbl_02300:
    // 02300 GOTO 2370
    goto Lbl_02370;

  Lbl_02310:
    // 02310 PRINT L$ " IS KNOCKED COLD AND " J$" IS THE WINNER AND CHAMP!";
    b2c_printf("%srÏùˇ is knocked cold and  is knocked cold and %s is knocked cold and  is the winner and champ! is the winner and champ!\n",L_str,J_str);
    // 02320 GOTO 2300
    goto Lbl_02300;

  Lbl_02330:
    // 02330 PRINT J$ " WINS (NICE GOING," J$;")."
    b2c_printf("%srÏùˇ wins (nice going, wins (nice going,%s wins (nice going,).\n",J_str,J_str);
    // 02340 GOTO 2300
    goto Lbl_02300;

  Lbl_02350:
    // 02350 PRINT L$ " AMAZINGLY WINS!!"
    b2c_printf("%srÏùˇ amazingly wins!!\n",L_str);
    // 02360 GOTO 2300
    goto Lbl_02300;

  Lbl_02370:
    // 02370 PRINT
    b2c_printf("");
    // 02380 PRINT
    b2c_printf("");
    // 02390 PRINT "AND NOW GOODBYE FROM THE OLYMPIC ARENA."
    b2c_printf("And now goodbye from the olympic arena.\n");
    // 02400 PRINT
    b2c_printf("");
    // 02410 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
