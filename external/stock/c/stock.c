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
int    B5_int;                                    // Basic: B5 
int    C_int_arr[5];                              // Basic: C 
int    C5_int;                                    // Basic: C5 
int    D_int;                                     // Basic: D 
int    E1_int;                                    // Basic: E1 
int    E2_int;                                    // Basic: E2 
int    I_int;                                     // Basic: I 
int    I1_int;                                    // Basic: I1 
int    I2_int;                                    // Basic: I2 
int    N1_int;                                    // Basic: N1 
int    N2_int;                                    // Basic: N2 
int    P_int_arr[5];                              // Basic: P 
int    P5_int;                                    // Basic: P5 
int    Q9_int;                                    // Basic: Q9 
int    S_int_arr[5];                              // Basic: S 
int    S4_int;                                    // Basic: S4 
int    S5_int;                                    // Basic: S5 
int    T_int;                                     // Basic: T 
int    T5_int;                                    // Basic: T5 
int    T8_int;                                    // Basic: T8 
int    W3_int;                                    // Basic: W3 
int    X_int;                                     // Basic: X 
int    X1_int;                                    // Basic: X1 
int    X9_int;                                    // Basic: X9 
int    Z_int_arr[5];                              // Basic: Z 
int    Z4_int;                                    // Basic: Z4 
int    Z5_int;                                    // Basic: Z5 
int    Z6_int;                                    // Basic: Z6 
int    Z9_int;                                    // Basic: Z9 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02750();

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
    // 02680 REM NEW STOCK VALUES - SUBROUTINE
    // 02690 REM RANDOMLY PRODUCE NEW STOCK VALUES BASED ON PREVIOUS
    // 02700 REM DAY'S VALUES 
    // 02710 REM N1,N2 ARE RANDOM NUMBERS OF DAYS WHICH RESPECTIVELY
    // 02720 REM DETERMINE WHEN STOCK I1 WILL INCREASE 10 PTS. AND STOCK
    // 02730 REM I2 WILL DECREASE 10 PTS. 
    // 02740 REM IF N1 DAYS HAVE PASSED, PICK AN I1, SET E1, DETERMINE NEW N1 

void Routine_02750(){
    // 02750 IF N1>0 THEN 2800
    if(N1_int>0)goto Lbl_02800;
    // 02760 LET I1=INT(4.99*RND(X)+1) 
    I1_int = INT(4.99*RND(X_int)+1);
    // 02770 LET N1=INT(4.99*RND(X)+1) 
    N1_int = INT(4.99*RND(X_int)+1);
    // 02780 LET E1=1
    E1_int = 1;
    // 02790 REM IF N2 DAYS HAVE PASSED, PICK AN I2, SET E2, DETERMINE NEW N2 

  Lbl_02800:
    // 02800 IF N2>0 THEN 2850
    if(N2_int>0)goto Lbl_02850;
    // 02810 LET I2=INT(4.99*RND(X)+1) 
    I2_int = INT(4.99*RND(X_int)+1);
    // 02820 LET N2=INT(4.99*RND(X)+1) 
    N2_int = INT(4.99*RND(X_int)+1);
    // 02830 LET E2=1
    E2_int = 1;
    // 02840 REM DEDUCT ONE DAY FROM N1 AND N2

  Lbl_02850:
    // 02850 LET N1=N1-1 
    N1_int = N1_int-1;
    // 02860 LET N2=N2-1 
    N2_int = N2_int-1;
    // 02870 REM LOOP THROUGH ALL STOCKS
    // 02880 FOR I=1 TO 5
    for(I_int=1;I_int<=5;I_int++){
        // 02890 LET X1=RND(X) 
        X1_int = RND(X_int);
        // 02900 IF X1>.25 THEN 2930
        if(X1_int>0.25)goto Lbl_02930;
        // 02910 LET X1=.25
        X1_int = 0.25;
        // 02920 GOTO 3010 
        goto Lbl_03010;

  Lbl_02930:
        // 02930 IF X1>.5 THEN 2960
        if(X1_int>0.5)goto Lbl_02960;
        // 02940 LET X1=.5
        X1_int = 0.5;
        // 02950 GOTO 3010 
        goto Lbl_03010;

  Lbl_02960:
        // 02960 IF X1>.75 THEN 2990
        if(X1_int>0.75)goto Lbl_02990;
        // 02970 LET X1=.75  
        X1_int = 0.75;
        // 02980 GOTO 3010 
        goto Lbl_03010;

  Lbl_02990:
        // 02990 LET X1=0.0
        X1_int = 0.;
        // 03000 REM BIG CHANGE CONSTANT:W3  (SET TO ZERO INITIALLY)

  Lbl_03010:
        // 03010 LET W3=0
        W3_int = 0;
        // 03020 IF E1<1 THEN 3070
        if(E1_int<1)goto Lbl_03070;
        // 03030 IF INT(I1+.5)<>INT(I+.5) THEN 3070 
        if(INT(I1_int+0.5)!=INT(I_int+0.5))goto Lbl_03070;
        // 03040 REM ADD 10 PTS. TO THIS STOCK;  RESET E1 
        // 03050 LET W3=10 
        W3_int = 10;
        // 03060 LET E1=0
        E1_int = 0;

  Lbl_03070:
        // 03070 IF E2<1 THEN 3130
        if(E2_int<1)goto Lbl_03130;
        // 03080 IF INT(I2+.5)<>INT(I+.5) THEN 3130 
        if(INT(I2_int+0.5)!=INT(I_int+0.5))goto Lbl_03130;
        // 03090 REM SUBTRACT 10 PTS. FROM THIS STOCK;  RESET E2
        // 03100 LET W3=W3-10
        W3_int = W3_int-10;
        // 03110 LET E2=0
        E2_int = 0;
        // 03120 REM C(I) IS CHANGE IN STOCK VALUE

  Lbl_03130:
        // 03130 LET C(I)=INT(A*S(I))+X1+INT(3-6*RND(X)+.5)+W3 
        C_int_arr[I_int] = INT(A_int*S_int_arr[I_int])+X1_int+INT(3-6*RND(X_int)+0.5)+W3_int;
        // 03140 LET C(I)=INT(100*C(I)+.5)/100 
        C_int_arr[I_int] = INT(100*C_int_arr[I_int]+0.5)/100;
        // 03150 LET S(I)=S(I)+C(I)
        S_int_arr[I_int] = S_int_arr[I_int]+C_int_arr[I_int];
        // 03160 IF S(I)>0 THEN 3200
        if(S_int_arr[I_int]>0)goto Lbl_03200;
        // 03170 LET C(I)=0
        C_int_arr[I_int] = 0;
        // 03180 LET S(I)=0
        S_int_arr[I_int] = 0;
        // 03190 GOTO 3210 
        goto Lbl_03210;

  Lbl_03200:
        // 03200 LET S(I)=INT(100*S(I)+.5)/100 
        S_int_arr[I_int] = INT(100*S_int_arr[I_int]+0.5)/100;

  Lbl_03210:
        // 03210 NEXT I
        int dummy_3210=0; // Ignore this line.
    }; // End-For(I_int)
    // 03220 REM AFTER T8 DAYS RANDOMLY CHANGE TREND SIGN AND SLOPE 
    // 03230 LET T8=T8-1 
    T8_int = T8_int-1;
    // 03240 IF T8<1 THEN 3260
    if(T8_int<1)goto Lbl_03260;
    // 03250 GOTO 03320
    goto Lbl_03320;

  Lbl_03260:
    // 03260 LET T8=INT(4.99*RND(X)+1) 
    T8_int = INT(4.99*RND(X_int)+1);
    // 03270 LET A=INT((RND(X)/10)*100+.5)/100 
    A_int = INT((RND(X_int)/10)*100+0.5)/100;
    // 03280 LET S4=RND(X) 
    S4_int = RND(X_int);
    // 03290 IF S4<=.5 THEN 3310
    if(S4_int<=0.5)goto Lbl_03310;
    // 03300 LET A=-A
    A_int = A_int;

  Lbl_03310:
    // 03310 GOTO 03320
    goto Lbl_03320;

  Lbl_03320:
    // 03320 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(30);"STOCK MARKET"
    b2c_printf("Stock market\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT: PRINT: PRINT
    b2c_printf("");
    // 01030 REM STOCK MARKET SIMULATION     -STOCK-
    // 01040 REM REVISED 8/18/70 (D. PESSEL, L. BRAUN, C. LOSIK)  
    // 01050 REM IMP VRBLS: A-MRKT TRND SLP; B5-BRKRGE FEE; C-TTL CSH ASSTS;    
    // 01060 REM C5-TTL CSH ASSTS (TEMP); C(I)-CHNG IN STK VAL; D-TTL ASSTS;
    // 01070 REM E1,E2-LRG CHNG MISC; I-STCK #; I1,I2-STCKS W LRG CHNG; 
    // 01080 REM N1,N2-LRG CHNG DAY CNTS; P5-TTL DAYS PRCHSS; P(I)-PRTFL CNTNTS;
    // 01090 REM Q9-NEW CYCL?; S4-SGN OF A; S5-TTL DYS SLS; S(I)-VALUE/SHR; 
    // 01100 REM T-TTL STCK ASSTS; T5-TTL VAL OF TRNSCTNS;
    // 01110 REM W3-LRG CHNG; X1-SMLL CHNG(<$1); Z4,Z5,Z6-NYSE AVE.; Z(I)-TRNSCT
    // 01120 DIM S(5),P(5),Z(5),C(5) 
    // 01130 REM SLOPE OF MARKET TREND:A  (SAME FOR ALL STOCKS) 
    // 01140 LET X=1
    X_int = 1;
    // 01150 LET A=INT((RND(X)/10)*100+.5)/100 
    A_int = INT((RND(X_int)/10)*100+0.5)/100;
    // 01160 LET T5=0
    T5_int = 0;
    // 01170 LET X9=0
    X9_int = 0;
    // 01180 LET N1=0
    N1_int = 0;
    // 01190 LET N2=0
    N2_int = 0;
    // 01200 LET E1=0
    E1_int = 0;
    // 01210 LET E2=0
    E2_int = 0;
    // 01220 REM INTRODUCTION 
    // 01230 PRINT "DO YOU WANT THE INSTRUCTIONS (YES-TYPE 1, NO-TYPE 0)"; 
    b2c_printf("Do you want the instructions (yes-type 1, no-type 0)");
    // 01240 INPUT Z9
    // Start of Basic INPUT statement 01240
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Z9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01240
    // 01250 PRINT 
    b2c_printf("");
    // 01260 PRINT 
    b2c_printf("");
    // 01270 IF Z9<1 THEN 1460
    if(Z9_int<1)goto Lbl_01460;
    // 01280 PRINT "THIS PROGRAM PLAYS THE STOCK MARKET.  YOU WILL BE GIVEN" 
    b2c_printf("This program plays the stock market.  You will be given\n");
    // 01290 PRINT "$10,000 AND MAY BUY OR SELL STOCKS.  THE STOCK PRICES WILL"
    b2c_printf("$10,000 and may buy or sell stocks.  The stock prices will\n");
    // 01300 PRINT "BE GENERATED RANDOMLY AND THEREFORE THIS MODEL DOES NOT" 
    b2c_printf("Be generated randomly and therefore this model does not\n");
    // 01310 PRINT "REPRESENT EXACTLY WHAT HAPPENS ON THE EXCHANGE.  A TABLE"
    b2c_printf("Represent exactly what happens on the exchange.  A table\n");
    // 01320 PRINT "OF AVAILABLE STOCKS, THEIR PRICES, AND THE NUMBER OF SHARES"
    b2c_printf("Of available stocks, their prices, and the number of shares\n");
    // 01330 PRINT "IN YOUR PORTFOLIO WILL BE PRINTED.  FOLLOWING THIS, THE" 
    b2c_printf("In your portfolio will be printed.  Following this, the\n");
    // 01340 PRINT "INITIALS OF EACH STOCK WILL BE PRINTED WITH A QUESTION"
    b2c_printf("Initials of each stock will be printed with a question\n");
    // 01350 PRINT "MARK.  HERE YOU INDICATE A TRANSACTION.  TO BUY A STOCK" 
    b2c_printf("Mark.  Here you indicate a transaction.  To buy a stock\n");
    // 01360 PRINT "TYPE +NNN, TO SELL A STOCK TYPE -NNN, WHERE NNN IS THE"  
    b2c_printf("Type +nnn, to sell a stock type -nnn, where nnn is the");
    // 01370 PRINT "NUMBER OF SHARES.  A BROKERAGE FEE OF 1% WILL BE CHARGED"
    b2c_printf("Number of shares.  A brokerage fee of 1%% will be charged\n");
    // 01380 PRINT "ON ALL TRANSACTIONS.  NOTE THAT IF A STOCK'S VALUE DROPS"
    b2c_printf("On all transactions.  Note that if a stock's value drops\n");
    // 01390 PRINT "TO ZERO IT MAY REBOUND TO A POSITIVE VALUE AGAIN.  YOU"
    b2c_printf("To zero it may rebound to a positive value again.  You\n");
    // 01400 PRINT "HAVE $10,000 TO INVEST.  USE INTEGERS FOR ALL YOUR INPUTS."
    b2c_printf("Have $10,000 to invest.  Use integers for all your inputs.\n");
    // 01410 PRINT "(NOTE:  TO GET A 'FEEL' FOR THE MARKET RUN FOR AT LEAST" 
    b2c_printf("(note:  to get a 'feel' for the market run for at least\n");
    // 01420 PRINT "10 DAYS)"
    b2c_printf("10 days)\n");
    // 01430 PRINT "-----GOOD LUCK!-----"
    b2c_printf("-----good luck!-----\n");
    // 01440 REM GENERATION OF STOCK TABLE; INPUT REQUESTS  
    // 01450 REM INITIAL STOCK VALUES 

  Lbl_01460:
    // 01460 LET S(1)=100
    S_int_arr[1] = 100;
    // 01470 LET S(2)=85 
    S_int_arr[2] = 85;
    // 01480 LET S(3)=150
    S_int_arr[3] = 150;
    // 01490 LET S(4)=140
    S_int_arr[4] = 140;
    // 01500 LET S(5)=110
    S_int_arr[5] = 110;
    // 01510 REM INITIAL T8 - # DAYS FOR FIRST TREND SLOPE (A)
    // 01520 LET T8=INT(4.99*RND(X)+1) 
    T8_int = INT(4.99*RND(X_int)+1);
    // 01530 REM RANDOMIZE SIGN OF FIRST TREND SLOPE (A)
    // 01540 IF RND(X)>.5 THEN 1570 
    if(RND(X_int)>0.5)goto Lbl_01570;
    // 01550 LET A=-A
    A_int = A_int;
    // 01560 REM RANDOMIZE INITIAL VALUES 

  Lbl_01570:
    // 01570 GOSUB 2750 
    Routine_02750();
    // 01580 REM INITIAL PORTFOLIO CONTENTS 
    // 01590 FOR I=1 TO 5
    for(I_int=1;I_int<=5;I_int++){
        // 01600 LET P(I)=0
        P_int_arr[I_int] = 0;
        // 01610 LET Z(I)=0
        Z_int_arr[I_int] = 0;
        // 01620 NEXT I
        int dummy_1620=0; // Ignore this line.
    }; // End-For(I_int)
    // 01630 PRINT 
    b2c_printf("");
    // 01640 PRINT 
    b2c_printf("");
    // 01650 REM INITIALIZE CASH ASSETS:C 
    // 01660 LET C=10000 
    C_int_arr[0] = 10000;
    // 01670 REM PRINT INITIAL PORTFOLIO
    // 01680 PRINT "STOCK"," ","INITIALS","PRICE/SHARE"
    b2c_printf("Stock InitialsPrice/share\n");
    // 01690 PRINT "INT. BALLISTIC MISSILES","  IBM",S(1)
    b2c_printf("Int. Ballistic missiles  ibm %d \n",S_int_arr[1]);
    // 01700 PRINT "RED CROSS OF AMERICA","  RCA",S(2) 
    b2c_printf("Red cross of america  rca %d \n",S_int_arr[2]);
    // 01710 PRINT "LICHTENSTEIN, BUMRAP & JOKE","  LBJ",S(3)
    b2c_printf("Lichtenstein, bumrap & joke  lbj %d \n",S_int_arr[3]);
    // 01720 PRINT "AMERICAN BANKRUPT CO.","  ABC",S(4)
    b2c_printf("American bankrupt co.  abc %d \n",S_int_arr[4]);
    // 01730 PRINT "CENSURED BOOKS STORE","  CBS",S(5) 
    b2c_printf("Censured books store  cbs %d \n",S_int_arr[5]);

  Lbl_01740:
    // 01740 PRINT 
    b2c_printf("");
    // 01750 REM NYSE AVERAGE:Z5; TEMP. VALUE:Z4; NET CHANGE:Z6 
    // 01760 LET Z4=Z5 
    Z4_int = Z5_int;
    // 01770 LET Z5=0
    Z5_int = 0;
    // 01780 LET T=0 
    T_int = 0;
    // 01790 FOR I=1 TO 5
    for(I_int=1;I_int<=5;I_int++){
        // 01800 LET Z5=Z5+S(I)
        Z5_int = Z5_int+S_int_arr[I_int];
        // 01810 LET T=T+S(I)*P(I) 
        T_int = T_int+S_int_arr[I_int]*P_int_arr[I_int];
        // 01820 NEXT I
        int dummy_1820=0; // Ignore this line.
    }; // End-For(I_int)
    // 01830 LET Z5=INT(100*(Z5/5)+.5)/100 
    Z5_int = INT(100*(Z5_int/5)+0.5)/100;
    // 01840 LET Z6=INT((Z5-Z4)*100+.5)/100
    Z6_int = INT((Z5_int-Z4_int)*100+0.5)/100;
    // 01850 REM TOTAL ASSETS:D 
    // 01860 LET D=T+C 
    D_int = T_int+C_int_arr[0];
    // 01870 IF X9>0 THEN 1900
    if(X9_int>0)goto Lbl_01900;
    // 01880 PRINT "NEW YORK STOCK EXCHANGE AVERAGE: "Z5 
    b2c_printf("New york stock exchange average:  %d \n",Z5_int);
    // 01890 GOTO 1910 
    goto Lbl_01910;

  Lbl_01900:
    // 01900 PRINT "NEW YORK STOCK EXCHANGE AVERAGE: "Z5"NET CHANGE"Z6
    b2c_printf("New york stock exchange average:  %d New york stock exchange average: Net changeNet change %d \n",Z5_int,Z6_int);

  Lbl_01910:
    // 01910 PRINT 
    b2c_printf("");
    // 01920 LET T=INT(100*T+.5)/100 
    T_int = INT(100*T_int+0.5)/100;
    // 01930 PRINT "TOTAL STOCK ASSETS ARE   $";T
    b2c_printf("Total stock assets are   $ %d \n",T_int);
    // 01940 LET C=INT(100*C+.5)/100 
    C_int_arr[0] = INT(100*C_int_arr[0]+0.5)/100;
    // 01950 PRINT "TOTAL CASH ASSETS ARE    $";C
    b2c_printf("Total cash assets are    $ %d \n",C_int_arr[0]);
    // 01960 LET D=INT(100*D+.5)/100 
    D_int = INT(100*D_int+0.5)/100;
    // 01970 PRINT "TOTAL ASSETS ARE         $";D
    b2c_printf("Total assets are         $ %d \n",D_int);
    // 01980 PRINT 
    b2c_printf("");
    // 01990 IF X9=0 THEN 2040
    if(X9_int==0)goto Lbl_02040;
    // 02000 PRINT "DO YOU WISH TO CONTINUE (YES-TYPE 1, NO-TYPE 0)";
    b2c_printf("Do you wish to continue (yes-type 1, no-type 0)");
    // 02010 INPUT Q9
    // Start of Basic INPUT statement 02010
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Q9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02010
    // 02020 IF Q9<1 THEN 2660
    if(Q9_int<1)goto Lbl_02660;
    // 02030 REM INPUT TRANSACTIONS 

  Lbl_02040:
    // 02040 PRINT "WHAT IS YOUR TRANSACTION IN" 
    b2c_printf("What is your transaction in\n");
    // 02050 PRINT "IBM";
    b2c_printf("Ibm");
    // 02060 INPUT Z(1)
    // Start of Basic INPUT statement 02060
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Z_int_arr[1],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02060
    // 02070 PRINT "RCA";
    b2c_printf("Rca");
    // 02080 INPUT Z(2)
    // Start of Basic INPUT statement 02080
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Z_int_arr[2],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02080
    // 02090 PRINT "LBJ";
    b2c_printf("Lbj");
    // 02100 INPUT Z(3)
    // Start of Basic INPUT statement 02100
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Z_int_arr[3],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02100
    // 02110 PRINT "ABC";
    b2c_printf("Abc");
    // 02120 INPUT Z(4)
    // Start of Basic INPUT statement 02120
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Z_int_arr[4],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02120
    // 02130 PRINT "CBS";
    b2c_printf("Cbs");
    // 02140 INPUT Z(5)
    // Start of Basic INPUT statement 02140
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Z_int_arr[5],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02140
    // 02150 PRINT 
    b2c_printf("");
    // 02160 REM TOTAL DAY'S PURCHASES IN $:P5
    // 02170 LET P5=0
    P5_int = 0;
    // 02180 REM TOTAL DAY'S SALES IN $:S5
    // 02190 LET S5=0
    S5_int = 0;
    // 02200 FOR I=1 TO 5
    for(I_int=1;I_int<=5;I_int++){
        // 02210 LET Z(I)=INT(Z(I)+.5) 
        Z_int_arr[I_int] = INT(Z_int_arr[I_int]+0.5);
        // 02220 IF Z(I)<=0 THEN 2250 
        if(Z_int_arr[I_int]<=0)goto Lbl_02250;
        // 02230 LET P5=P5+Z(I)*S(I) 
        P5_int = P5_int+Z_int_arr[I_int]*S_int_arr[I_int];
        // 02240 GOTO 2290 
        goto Lbl_02290;

  Lbl_02250:
        // 02250 LET S5=S5-Z(I)*S(I) 
        S5_int = S5_int-Z_int_arr[I_int]*S_int_arr[I_int];
        // 02260 IF -Z(I)<=P(I) THEN 2290 
        if(-Z_int_arr[I_int]<=P_int_arr[I_int])goto Lbl_02290;
        // 02270 PRINT "YOU HAVE OVERSOLD A STOCK; TRY AGAIN." 
        b2c_printf("You have oversold a stock; try again.\n");
        // 02280 GOTO 2040 
        goto Lbl_02040;

  Lbl_02290:
        // 02290 NEXT I
        int dummy_2290=0; // Ignore this line.
    }; // End-For(I_int)
    // 02300 REM TOTAL VALUE OF TRANSACTIONS:T5 
    // 02310 LET T5=P5+S5
    T5_int = P5_int+S5_int;
    // 02320 REM BROKERAGE FEE:B5 
    // 02330 LET B5=INT(.01*T5*100+.5)/100 
    B5_int = INT(0.01*T5_int*100+0.5)/100;
    // 02340 REM CASH ASSETS=OLD CASH ASSETS-TOTAL PURCHASES
    // 02350 REM -BROKERAGE FEES+TOTAL SALES:C5 
    // 02360 LET C5=C-P5-B5+S5 
    C5_int = C_int_arr[0]-P5_int-B5_int+S5_int;
    // 02370 IF C5>=0 THEN 2400 
    if(C5_int>=0)goto Lbl_02400;
    // 02380 PRINT "YOU HAVE USED $";-C5;" MORE THAN YOU HAVE." 
    b2c_printf("You have used $ %d You have used $ more than you have.\n",C5_int);
    // 02390 GOTO 2040
    goto Lbl_02040;

  Lbl_02400:
    // 02400 LET C=C5
    C_int_arr[0] = C5_int;
    // 02410 REM CALCULATE NEW PORTFOLIO  
    // 02420 FOR I=1 TO 5
    for(I_int=1;I_int<=5;I_int++){
        // 02430 LET P(I)=P(I)+Z(I)
        P_int_arr[I_int] = P_int_arr[I_int]+Z_int_arr[I_int];
        // 02440 NEXT I
        int dummy_2440=0; // Ignore this line.
    }; // End-For(I_int)
    // 02450 REM CALCULATE NEW STOCK VALUES 
    // 02460 GOSUB 2750 
    Routine_02750();
    // 02470 REM PRINT PORTFOLIO
    // 02480 REM BELL RINGING-DIFFERENT ON MANY COMPUTERS 
    // 02490 PRINT 
    b2c_printf("");
    // 02500 PRINT "**********     END OF DAY'S TRADING     **********"
    b2c_printf("**********     end of day's trading     **********\n");
    // 02510 PRINT 
    b2c_printf("");
    // 02520 PRINT 
    b2c_printf("");
    // 02530 IF X9<1 THEN 2540
    if(X9_int<1)goto Lbl_02540;

  Lbl_02540:
    // 02540 PRINT "STOCK","PRICE/SHARE","HOLDINGS", "VALUE", "NET PRICE CHANGE"
    b2c_printf("StockPrice/shareHoldingsValueNet price change\n");
    // 02550 PRINT "IBM", S(1), P(1), S(1)*P(1), C(1)
    b2c_printf("Ibm %d Ibm %d Ibm_int_arr[1]*P_int_arr[1]_int_arr[1]*P_int_arr[1] %d \n",S_int_arr[1],P_int_arr[1],C_int_arr[1]);
    // 02560 PRINT "RCA", S(2), P(2), S(2)*P(2), C(2)
    b2c_printf("Rca %d Rca %d Rca_int_arr[2]*P_int_arr[2]_int_arr[2]*P_int_arr[2] %d \n",S_int_arr[2],P_int_arr[2],C_int_arr[2]);
    // 02570 PRINT "LBJ", S(3), P(3), S(3)*P(3), C(3)
    b2c_printf("Lbj %d Lbj %d Lbj_int_arr[3]*P_int_arr[3]_int_arr[3]*P_int_arr[3] %d \n",S_int_arr[3],P_int_arr[3],C_int_arr[3]);
    // 02580 PRINT "ABC", S(4), P(4), S(4)*P(4), C(4)
    b2c_printf("Abc %d Abc %d Abc_int_arr[4]*P_int_arr[4]_int_arr[4]*P_int_arr[4] %d \n",S_int_arr[4],P_int_arr[4],C_int_arr[4]);
    // 02590 PRINT "CBS", S(5), P(5), S(5)*P(5), C(5)
    b2c_printf("Cbs %d Cbs %d Cbs_int_arr[5]*P_int_arr[5]_int_arr[5]*P_int_arr[5] %d \n",S_int_arr[5],P_int_arr[5],C_int_arr[5]);
    // 02600 LET X9=1
    X9_int = 1;
    // 02610 PRINT 
    b2c_printf("");
    // 02620 PRINT 
    b2c_printf("");
    // 02630 GOTO 1740 
    goto Lbl_01740;
    // 02640 REM RANDOMLY CHANGE TREND SIGN AND SLOPE (A), AND DURATION 
    // 02650 REM OF TREND (T8)

  Lbl_02660:
    // 02660 PRINT "HOPE YOU HAD FUN!!"
    b2c_printf("Hope you had fun!!\n");
    // 02670 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
