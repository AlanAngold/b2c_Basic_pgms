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
char* data_03940s[]={"BULL RUN","18000","18500","1967","2708","1"};
char* data_03950s[]={"SHILOH","40000.","44894.","10699","13047","3"};
char* data_03960s[]={"SEVEN DAYS","95000.","115000.","20614","15849","3"};
char* data_03970s[]={"SECOND BULL RUN","54000.","63000.","10000","14000","2"};
char* data_03980s[]={"ANTIETAM","40000.","50000.","10000","12000","3"};
char* data_03990s[]={"FREDERICKSBURG","75000.","120000.","5377","12653","1"};
char* data_04000s[]={"MURFREESBORO","38000.","45000.","11000","12000","1"};
char* data_04010s[]={"CHANCELLORSVILLE","32000","90000.","13000","17197","2"};
char* data_04020s[]={"VICKSBURG","50000.","70000.","12000","19000","1"};
char* data_04030s[]={"GETTYSBURG","72500.","85000.","20000","23000","3"};
char* data_04040s[]={"CHICKAMAUGA","66000.","60000.","18000","16000","2"};
char* data_04050s[]={"CHATTANOOGA","37000.","60000.","36700.","5800","2"};
char* data_04060s[]={"SPOTSYLVANIA","62000.","110000.","17723","18000","2"};
char* data_04070s[]={"ATLANTA","65000.","100000.","8500","3700","1"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 3940,  6,data_03940s},
    { 3950,  6,data_03950s},
    { 3960,  6,data_03960s},
    { 3970,  6,data_03970s},
    { 3980,  6,data_03980s},
    { 3990,  6,data_03990s},
    { 4000,  6,data_04000s},
    { 4010,  6,data_04010s},
    { 4020,  6,data_04020s},
    { 4030,  6,data_04030s},
    { 4040,  6,data_04040s},
    { 4050,  6,data_04050s},
    { 4060,  6,data_04060s},
    { 4070,  6,data_04070s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int;                                     // Basic: A 
int    B_int_arr[10];                             // Basic: B 
char*  B_str;                                     // Basic: B$ 
char*  C_str_arr[14];                             // Basic: C$ 
int    C1_int_arr[14];                            // Basic: C1 
int    C2_int_arr[14];                            // Basic: C2 
int    C5_int;                                    // Basic: C5 
int    C6_int;                                    // Basic: C6 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    E2_int;                                    // Basic: E2 
int    F_int_arr[10];                             // Basic: F 
int    F1_int;                                    // Basic: F1 
int    H_int_arr[10];                             // Basic: H 
int    I_int;                                     // Basic: I 
int    I1_int;                                    // Basic: I1 
int    I2_int;                                    // Basic: I2 
int    L_int;                                     // Basic: L 
int    M_int_arr[14];                             // Basic: M 
int    M1_int_arr[14];                            // Basic: M1 
int    M2_int_arr[14];                            // Basic: M2 
int    M3_int;                                    // Basic: M3 
int    M4_int;                                    // Basic: M4 
int    M5_int;                                    // Basic: M5 
int    M6_int;                                    // Basic: M6 
int    N_int;                                     // Basic: N 
int    O_int;                                     // Basic: O 
int    O2_int;                                    // Basic: O2 
int    P1_int;                                    // Basic: P1 
int    P2_int;                                    // Basic: P2 
int    Q1_int;                                    // Basic: Q1 
int    Q2_int;                                    // Basic: Q2 
int    R_int;                                     // Basic: R 
int    R1_int;                                    // Basic: R1 
int    R2_int;                                    // Basic: R2 
int    S_int_arr[4];                              // Basic: S 
int    S0_int;                                    // Basic: S0 
int    S2_int_arr[10];                            // Basic: S2 
int    T1_int;                                    // Basic: T1 
int    T2_int;                                    // Basic: T2 
int    U_int;                                     // Basic: U 
int    U2_int;                                    // Basic: U2 
int    W_int;                                     // Basic: W 
int    W0_int;                                    // Basic: W0 
char*  X_str;                                     // Basic: X$ 
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
int    Y2_int;                                    // Basic: Y2 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_04560();
void Routine_04790();

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
    // 04550  REM - UNION STRATEGY IS COMPUTER CHOSEN

void Routine_04560(){
    // 04560  PRINT "UNION STRATEGY IS ";
    b2c_printf("Union strategy is ");
    // 04570  IF A <> 0 THEN 4630
    if(A_int!=0)goto Lbl_04630;

  Lbl_04580:
    // 04580  INPUT Y2
    // Start of Basic INPUT statement 04580
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Y2_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 04580
    // 04590  IF Y2 <=0 THEN 4610
    if(Y2_int<=0)goto Lbl_04610;
    // 04600  IF Y2<5 THEN 4740
    if(Y2_int<5)goto Lbl_04740;

  Lbl_04610:
    // 04610  PRINT "ENTER 1 , 2 ,3 , OR 4 (USUALLY PREVIOUS UNION STRATEGY)"
    b2c_printf("Enter 1 , 2 ,3 , or 4 (usually previous union strategy)\n");
    // 04620  GOTO 4580
    goto Lbl_04580;

  Lbl_04630:
    // 04630  LET S0=0
    S0_int = 0;
    // 04640  LET R=100*RND(0)
    R_int = 100*RND(0);
    // 04650  FOR I=1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 04660  LET S0=S0+S(I)
        S0_int = S0_int+S_int_arr[I_int];
        // 04670  REM - IF ACTUAL STRATEGY INFO IS IN PROGRAM DATA STATEMENTS
        // 04680  REM   THEN R-100 IS EXTRA WEIGHT GIVEN TO THAT STATEGY.
        // 04690  IF R<S0 THEN 4720
        if(R_int<S0_int)goto Lbl_04720;
        // 04700  NEXT I
        int dummy_4700=0; // Ignore this line.
    }; // End-For(I_int)
    // 04710  REM - IF ACTUAL STRAT. IN,THEN HERE IS Y2= HIST. STRAT.

  Lbl_04720:
    // 04720  LET Y2=I
    Y2_int = I_int;
    // 04730  PRINT Y2
    b2c_printf(" %d \n",Y2_int);

  Lbl_04740:
    // 04740 GOTO 04750
    goto Lbl_04750;

  Lbl_04750:
    // 04750 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 04760  REM LEARN  PRESENT STRATEGY, START FORGETTING OLD ONES
    // 04770  REM - PRESENT STRATEGY OF SOUTH GAINS 3*S, OTHERS LOSE S
    // 04780  REM   PROBABILITY POINTS, UNLESS A STRATEGY FALLS BELOW 5%.

void Routine_04790(){
    // 04790  LET S=3
    S_int_arr[0] = 3;
    // 04800  LET S0=0
    S0_int = 0;
    // 04810  FOR I=1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 04820  IF S(I) <= 5 THEN 4850
        if(S_int_arr[I_int]<=5)goto Lbl_04850;
        // 04830  LET S(I)=S(I)-S
        S_int_arr[I_int] = S_int_arr[I_int]-S_int_arr[0];
        // 04840  LET S0=S0+S
        S0_int = S0_int+S_int_arr[0];

  Lbl_04850:
        // 04850  NEXT I
        int dummy_4850=0; // Ignore this line.
    }; // End-For(I_int)
    // 04860  LET S(Y)=S(Y)+S0
    S_int_arr[Y_int] = S_int_arr[Y_int]+S0_int;
    // 04870 GOTO 04880
    goto Lbl_04880;

  Lbl_04880:
    // 04880 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(10006) "CIVIL WAR"
    b2c_printf("Civil war\n");
    // 01010 PRINT TAB(15) "CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT : PRINT : PRINT
    b2c_printf("");
    // 01030 REM ORIGINAL GAME DESIGN: CRAM, GOODIE, HIBBARD LEXINGTON H.S.
    // 01040 REM MODIFICATIONS: G. PAUL, R. HESS (TIES), 1973
    // 01050  DIM S(4),C$(14),M1(14),M2(14),C1(14),C2(14),M(14)
    // 01060  REM UNION INFO ON LIKELY CONFEDERATE STRATEGY
    // 01070  S(1)=25 : S(2)=25 : S(3)=25 : S(4)=25
    S_int_arr[4] = 25;
    // 01080  REM READ HISTORICAL DATA.
    // 01090  FOR D=1 TO 14
    for(D_int=1;D_int<=14;D_int++){
        // 01100  READ C$(D),M1(D),M2(D),C1(D),C2(D),M(D)
        C_str_arr[D_int] = Get_Data_String();
        M1_int_arr[D_int] = Get_Data_Int();
        M2_int_arr[D_int] = Get_Data_Int();
        C1_int_arr[D_int] = Get_Data_Int();
        C2_int_arr[D_int] = Get_Data_Int();
        M_int_arr[D_int] = Get_Data_Int();
        // 01110  NEXT D
        int dummy_1110=0; // Ignore this line.
    }; // End-For(D_int)
    // 01120  LET D=RND(-1)
    D_int = RND(-1);
    // 01130  PRINT
    b2c_printf("");
    // 01140  PRINT "DO YOU WANT INSTRUCTIONS";
    b2c_printf("Do you want instructions");

  Lbl_01150:
    // 01150  INPUT X$
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
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01150
    // 01160  IF X$="YES" THEN 1200
    if(strcmp(X_str,"Yes")==0)goto Lbl_01200;
    // 01170  IF X$="NO" THEN 1420
    if(strcmp(X_str,"No")==0)goto Lbl_01420;
    // 01180  PRINT "YES OR NO -- ";
    b2c_printf("Yes or no -- ");
    // 01190  GOTO 1150
    goto Lbl_01150;

  Lbl_01200:
    // 01200  PRINT : PRINT : PRINT : PRINT
    b2c_printf("");
    // 01210  PRINT "THIS IS A CIVIL WAR SIMULATION."
    b2c_printf("This is a civil war simulation.\n");
    // 01220  PRINT "TO PLAY TYPE A RESPONSE WHEN THE COMPUTER ASKS."
    b2c_printf("To play type a response when the computer asks.\n");
    // 01230  PRINT "REMEMBER THAT ALL FACTORS ARE INTERRELATED AND THAT YOUR"
    b2c_printf("Remember that all factors are interrelated and that your\n");
    // 01240  PRINT "RESPONSES COULD CHANGE HISTORY. FACTS AND FIGURES USED ARE"
    b2c_printf("Responses could change history. Facts and figures used are\n");
    // 01250  PRINT "BASED ON THE ACTUAL OCCURRENCE. MOST BATTLES TEND TO RESULT"
    b2c_printf("Based on the actual occurrence. Most battles tend to result\n");
    // 01260  PRINT "AS THEY DID IN THE CIVIL WAR, BUT IT ALL DEPENDS ON YOU!!"
    b2c_printf("As they did in the civil war, but it all depends on you!!\n");
    // 01270  PRINT
    b2c_printf("");
    // 01280  PRINT "THE OBJECT OF THE GAME IS TO WIN AS MANY BATTLES AS ";
    b2c_printf("The object of the game is to win as many battles as ");
    // 01290  PRINT "POSSIBLE."
    b2c_printf("Possible.\n");
    // 01300  PRINT
    b2c_printf("");
    // 01310  PRINT "YOUR CHOICES FOR DEFENSIVE STRATEGY ARE:"
    b2c_printf("Your choices for defensive strategy are:\n");
    // 01320  PRINT "        (1) ARTILLERY ATTACK"
    b2c_printf("        (1) artillery attack\n");
    // 01330  PRINT "        (2) FORTIFICATION AGAINST FRONTAL ATTACK"
    b2c_printf("        (2) fortification against frontal attack\n");
    // 01340  PRINT "        (3) FORTIFICATION AGAINST FLANKING MANEUVERS"
    b2c_printf("        (3) fortification against flanking maneuvers\n");
    // 01350  PRINT "        (4) FALLING BACK"
    b2c_printf("        (4) falling back\n");
    // 01360  PRINT " YOUR CHOICES FOR OFFENSIVE STRATEGY ARE:"
    b2c_printf(" your choices for offensive strategy are:\n");
    // 01370  PRINT "        (1) ARTILLERY ATTACK"
    b2c_printf("        (1) artillery attack\n");
    // 01380  PRINT "        (2) FRONTAL ATTACK"
    b2c_printf("        (2) frontal attack\n");
    // 01390  PRINT "        (3) FLANKING MANEUVERS"
    b2c_printf("        (3) flanking maneuvers\n");
    // 01400  PRINT "        (4) ENCIRCLEMENT"
    b2c_printf("        (4) encirclement\n");
    // 01410  PRINT "YOU MAY SURRENDER BY TYPING A '5' FOR YOUR STRATEGY."
    b2c_printf("You may surrender by typing a '5' for your strategy.\n");

  Lbl_01420:
    // 01420  PRINT : PRINT : PRINT : PRINT "ARE THERE TWO GENERALS PRESENT ";
    b2c_printf("Are there two generals present ");

  Lbl_01430:
    // 01430  PRINT "(ANSWER YES OR NO)";
    b2c_printf("(answer yes or no)");
    // 01440  INPUT B$
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
                (err += b2c_strtos(&B_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01440
    // 01450  IF B$="YES" THEN 1490
    if(strcmp(B_str,"Yes")==0)goto Lbl_01490;
    // 01460  IF B$ <> "NO" THEN 1430
    if(strcmp(B_str,"No")!=0)goto Lbl_01430;
    // 01470  PRINT : PRINT "YOU ARE THE CONFEDERACY.   GOOD LUCK!"
    b2c_printf("You are the confederacy.   Good luck!\n");
    // 01480  PRINT
    b2c_printf("");

  Lbl_01490:
    // 01490  LET D=1
    D_int = 1;
    // 01500  IF B$ <> "YES" THEN 1520
    if(strcmp(B_str,"Yes")!=0)goto Lbl_01520;
    // 01510  LET D=2
    D_int = 2;

  Lbl_01520:
    // 01520  PRINT "SELECT A BATTLE BY TYPING A NUMBER FROM 1 TO 14 ON"
    b2c_printf("Select a battle by typing a number from 1 to 14 on\n");
    // 01530  PRINT "REQUEST.  TYPE ANY OTHER NUMBER TO END THE SIMULATION."
    b2c_printf("Request.  Type any other number to end the simulation.\n");
    // 01540  PRINT "BUT '0' BRINGS BACK EXACT PREVIOUS BATTLE SITUATION"
    b2c_printf("But '0' brings back exact previous battle situation\n");
    // 01550  PRINT "ALLOWING YOU TO REPLAY IT"
    b2c_printf("Allowing you to replay it\n");
    // 01560  PRINT
    b2c_printf("");
    // 01570  PRINT "NOTE: A NEGATIVE FOOD$ ENTRY CAUSES THE PROGRAM TO "
    b2c_printf("Note: a negative food$ entry causes the program to \n");
    // 01580  PRINT "USE THE ENTRIES FROM THE PREVIOUS BATTLE"
    b2c_printf("Use the entries from the previous battle\n");
    // 01590  PRINT
    b2c_printf("");
    // 01600  PRINT "AFTER REQUESTING A BATTLE, DO YOU WISH ";
    b2c_printf("After requesting a battle, do you wish ");
    // 01610  PRINT "BATTLE DESCRIPTIONS ";
    b2c_printf("Battle descriptions ");

  Lbl_01620:
    // 01620  PRINT "(ANSWER YES OR NO)";
    b2c_printf("(answer yes or no)");
    // 01630  INPUT X$
    // Start of Basic INPUT statement 01630
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01630
    // 01640  IF X$="YES" THEN 1660
    if(strcmp(X_str,"Yes")==0)goto Lbl_01660;
    // 01650  IF X$ <> "NO" THEN 1620
    if(strcmp(X_str,"No")!=0)goto Lbl_01620;

  Lbl_01660:
    // 01660  L=0:W=0:R1=0:Q1=0:M3=0:M4=0:P1=0:P2=0:T1=0:T2=0
    T2_int = 0;
    // 01670  F(2)=0:H(2)=0:B(2)=0:R2=0:Q2=0:C6=0:F=0:W0=0:Y=0:Y2=0:U=0:U2=0
    U2_int = 0;

  Lbl_01680:
    // 01680  PRINT : PRINT : PRINT
    b2c_printf("");
    // 01690  PRINT "WHICH BATTLE DO YOU WISH TO SIMULATE";
    b2c_printf("Which battle do you wish to simulate");
    // 01700  INPUT A
    // Start of Basic INPUT statement 01700
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
    }; // End of Basic INPUT statement 01700
    // 01710  IF A <> 0 THEN 1730
    if(A_int!=0)goto Lbl_01730;
    // 01720  IF R <> 0 THEN 2000
    if(R_int!=0)goto Lbl_02000;

  Lbl_01730:
    // 01730  IF A <=0 THEN 3660
    if(A_int<=0)goto Lbl_03660;
    // 01740  IF A >= 15 THEN 3660
    if(A_int>=15)goto Lbl_03660;
    // 01750  LET C$=C$(A)
    GLBpStr=C_str_arr[A_int];
    C_str_arr[0] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01760  LET M1=M1(A)
    M1_int_arr[0] = M1_int_arr[A_int];
    // 01770  LET M2=M2(A)
    M2_int_arr[0] = M2_int_arr[A_int];
    // 01780  LET C1=C1(A)
    C1_int_arr[0] = C1_int_arr[A_int];
    // 01790  LET C2=C2(A)
    C2_int_arr[0] = C2_int_arr[A_int];
    // 01800  LET M=M(A)
    M_int_arr[0] = M_int_arr[A_int];
    // 01810  LET U=0
    U_int = 0;
    // 01820  REM  INFLATION CALC
    // 01830  LET I1=10+(L-W)*2
    I1_int = 10+(L_int-W_int)*2;
    // 01840  LET I2=10+(W-L)*2
    I2_int = 10+(W_int-L_int)*2;
    // 01850  REM - MONEY AVAILABLE
    // 01860  LET D(1)=100*INT((M1*(100-I1)/2000)*(1+(R1-Q1)/(R1+1))+.5)
    D_int = 100*INT((M1_int_arr[0]*(100-I1_int)/2000)*(1+(R1_int-Q1_int)/(R1_int+1))+0.5);
    // 01870  LET D(2)=100*INT(M2*(100-I2)/2000+.5)
    D_int = 100*INT(M2_int_arr[0]*(100-I2_int)/2000+0.5);
    // 01880  IF B$ <> "YES" THEN 1910
    if(strcmp(B_str,"Yes")!=0)goto Lbl_01910;
    // 01890  LET D(2)=100*INT((M2*(100-I2)/2000)*(1+(R2-Q2)/(R2+1))+.5)
    D_int = 100*INT((M2_int_arr[0]*(100-I2_int)/2000)*(1+(R2_int-Q2_int)/(R2_int+1))+0.5);
    // 01900  REM - MEN   AVAILABLE

  Lbl_01910:
    // 01910  LET M5=INT(M1*(1+(P1-T1)/(M3+1)))
    M5_int = INT(M1_int_arr[0]*(1+(P1_int-T1_int)/(M3_int+1)));
    // 01920  LET M6=INT(M2*(1+(P2-T2)/(M4+1)))
    M6_int = INT(M2_int_arr[0]*(1+(P2_int-T2_int)/(M4_int+1)));
    // 01930  LET F1=5*M1/6
    F1_int = 5*M1_int_arr[0]/6;
    // 01940  PRINT : PRINT : PRINT : PRINT : PRINT
    b2c_printf("");
    // 01950  PRINT "THIS IS THE BATTLE OF ";C$
    b2c_printf("This is the battle of %s\n",C_str_arr[0]);
    // 01960  IF X$="NO" THEN 2010
    if(strcmp(X_str,"No")==0)goto Lbl_02010;
    // 01970  IF A>11 THEN 1990
    if(A_int>11)goto Lbl_01990;
    // 01980  ON A GOTO 4080,4120,4150,4190,4230,4260,4290,4320,4350,4380,4420
    switch((int)(A_int)){
        case 1: goto Lbl_04080;
        case 2: goto Lbl_04120;
        case 3: goto Lbl_04150;
        case 4: goto Lbl_04190;
        case 5: goto Lbl_04230;
        case 6: goto Lbl_04260;
        case 7: goto Lbl_04290;
        case 8: goto Lbl_04320;
        case 9: goto Lbl_04350;
        case 10: goto Lbl_04380;
        case 11: goto Lbl_04420;
        default: break; 
    };

  Lbl_01990:
    // 01990  ON A-11 GOTO 4450,4480,4510
    switch((int)(A_int-11)){
        case 1: goto Lbl_04450;
        case 2: goto Lbl_04480;
        case 3: goto Lbl_04510;
        default: break; 
    };

  Lbl_02000:
    // 02000  PRINT C$" INSTANT REPLAY"
    b2c_printf("%s'…ùÿ instant replay\n",C_str_arr[0]);

  Lbl_02010:
    // 02010  PRINT
    b2c_printf("");
    // 02020  PRINT " ","CONFEDERACY"," UNION"
    b2c_printf(" Confederacy union\n");
    // 02030  PRINT "MEN"," "M5," "M6
    b2c_printf("Men  %d     %d \n",M5_int,M6_int);
    // 02040  PRINT "MONEY","$";D(1),"$";D(2)
    b2c_printf("Money$ %d $$$ %d \n",D_int,D_int);
    // 02050  PRINT "INFLATION"," ";I1+15;"%"," ";I2;"%"
    b2c_printf("Inflation %%  %d  %%\n",I2_int);
    // 02060  PRINT
    b2c_printf("");
    // 02070  REM - ONLY IN PRINTOUT IS CONFED INFLATION = I1+15%
    // 02080  REM - IF TWO GENERALS, INPUT CONFED. FIRST
    // 02090  FOR I=1 TO D
    for(I_int=1;I_int<=D_int;I_int++){
        // 02100  IF B$ <> "YES" THEN 2130
        if(strcmp(B_str,"Yes")!=0)goto Lbl_02130;
        // 02110  IF I=2 THEN 2130
        if(I_int==2)goto Lbl_02130;
        // 02120  PRINT "CONFEDERATE GENERAL---";
        b2c_printf("Confederate general---");

  Lbl_02130:
        // 02130  PRINT "HOW MUCH DO YOU WISH TO SPEND FOR"
        b2c_printf("How much do you wish to spend for\n");

  Lbl_02140:
        // 02140  PRINT " - FOOD......";
        b2c_printf(" - food......");
        // 02150  INPUT F
        // Start of Basic INPUT statement 02150
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&F_int_arr[0],args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 02150
        // 02160  IF F >= 0 THEN 2230
        if(F_int_arr[0]>=0)goto Lbl_02230;
        // 02170  IF R1 <> 0 THEN 2200
        if(R1_int!=0)goto Lbl_02200;
        // 02180  PRINT "NO PREVIOUS ENTRIES"
        b2c_printf("No previous entries\n");
        // 02190  GOTO 2140
        goto Lbl_02140;

  Lbl_02200:
        // 02200  PRINT "ASSUME YOU WANT TO KEEP SAME ALLOCATIONS"
        b2c_printf("Assume you want to keep same allocations\n");
        // 02210  PRINT
        b2c_printf("");
        // 02220  GOTO 2380
        goto Lbl_02380;

  Lbl_02230:
        // 02230  LET F(I)=F
        F_int_arr[I_int] = F_int_arr[0];

  Lbl_02240:
        // 02240  PRINT " - SALARIES..";
        b2c_printf(" - salaries..");
        // 02250  INPUT H(I)
        // Start of Basic INPUT statement 02250
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&H_int_arr[I_int],args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 02250
        // 02260  LET N=1
        N_int = 1;
        // 02270  IF H(I)<0 THEN 2360
        if(H_int_arr[I_int]<0)goto Lbl_02360;

  Lbl_02280:
        // 02280  PRINT " - AMMUNITION";
        b2c_printf(" - ammunition");
        // 02290  INPUT B(I)
        // Start of Basic INPUT statement 02290
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&B_int_arr[I_int],args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 02290
        // 02300  LET N=2
        N_int = 2;
        // 02310  IF B(I)<0 THEN 2360
        if(B_int_arr[I_int]<0)goto Lbl_02360;
        // 02320  PRINT
        b2c_printf("");
        // 02330  IF F(I)+H(I)+B(I) <= D(I) THEN 2380
        if(F_int_arr[I_int]+H_int_arr[I_int]+B_int_arr[I_int]<=D_int)goto Lbl_02380;
        // 02340  PRINT "THINK AGAIN! YOU HAVE ONLY $"D(I)
        b2c_printf("Think again! You have only $ %d \n",D_int);
        // 02350  GOTO 2140
        goto Lbl_02140;

  Lbl_02360:
        // 02360  PRINT "NEGATIVE VALUES NOT ALLOWED."
        b2c_printf("Negative values not allowed.\n");
        // 02370  ON N GOTO 2240,2280
        switch((int)(N_int)){
            case 1: goto Lbl_02240;
            case 2: goto Lbl_02280;
            default: break; 
        };

  Lbl_02380:
        // 02380  IF B$ <> "YES" THEN 2420
        if(strcmp(B_str,"Yes")!=0)goto Lbl_02420;
        // 02390  IF I=2 THEN 2420
        if(I_int==2)goto Lbl_02420;
        // 02400  PRINT "UNION GENERAL---";
        b2c_printf("Union general---");
        // 02410  NEXT I
        int dummy_2410=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_02420:
    // 02420  FOR Z=1 TO D
    for(Z_int=1;Z_int<=D_int;Z_int++){
        // 02430  IF B$ <> "YES" THEN 2490
        if(strcmp(B_str,"Yes")!=0)goto Lbl_02490;
        // 02440  ON Z GOTO 2450,2470
        switch((int)(Z_int)){
            case 1: goto Lbl_02450;
            case 2: goto Lbl_02470;
            default: break; 
        };

  Lbl_02450:
        // 02450  PRINT "CONFEDERATE ";
        b2c_printf("Confederate ");
        // 02460  GOTO 2490
        goto Lbl_02490;

  Lbl_02470:
        // 02470  PRINT "      UNION ";
        b2c_printf("      union ");
        // 02480  REM - FIND MORALE

  Lbl_02490:
        // 02490  LET O=((2*F(Z)^2+H(Z)^2)/F1^2+1)
        O_int = ((2*IPower(F_int_arr[Z_int],2)+IPower(H_int_arr[Z_int],2))/IPower(F1_int,2)+1);
        // 02500  IF O<10 THEN 2530
        if(O_int<10)goto Lbl_02530;
        // 02510  PRINT "MORALE IS HIGH"
        b2c_printf("Morale is high\n");
        // 02520  GOTO 2570
        goto Lbl_02570;

  Lbl_02530:
        // 02530  IF O<5 THEN 2560
        if(O_int<5)goto Lbl_02560;
        // 02540  PRINT "MORALE IS FAIR"
        b2c_printf("Morale is fair\n");
        // 02550  GOTO 2570
        goto Lbl_02570;

  Lbl_02560:
        // 02560  PRINT "MORALE IS POOR"
        b2c_printf("Morale is poor\n");

  Lbl_02570:
        // 02570  IF B$ <> "YES" THEN 2640
        if(strcmp(B_str,"Yes")!=0)goto Lbl_02640;
        // 02580  LET O(Z)=O
        O_int = O_int;
        // 02590  NEXT Z
        int dummy_2590=0; // Ignore this line.
    }; // End-For(Z_int)
    // 02600  LET O2=O(2)
    O2_int = O_int;
    // 02610  LET O=O(1)
    O_int = O_int;
    // 02620  PRINT "CONFEDERATE GENERAL---";
    b2c_printf("Confederate general---");
    // 02630  REM - ACTUAL OFF/DEF BATTLE SITUATION

  Lbl_02640:
    // 02640  IF M <> 3 THEN 2670
    if(M_int_arr[0]!=3)goto Lbl_02670;
    // 02650  PRINT "YOU ARE ON THE OFFENSIVE"
    b2c_printf("You are on the offensive\n");
    // 02660  GOTO 2710
    goto Lbl_02710;

  Lbl_02670:
    // 02670  IF M <> 1 THEN 2700
    if(M_int_arr[0]!=1)goto Lbl_02700;
    // 02680  PRINT "YOU ARE ON THE DEFENSIVE"
    b2c_printf("You are on the defensive\n");
    // 02690  GOTO 2710
    goto Lbl_02710;

  Lbl_02700:
    // 02700  PRINT "BOTH SIDES ARE ON THE OFFENSIVE "
    b2c_printf("Both sides are on the offensive \n");

  Lbl_02710:
    // 02710  PRINT
    b2c_printf("");
    // 02720  REM - CHOOSE STRATEGIES
    // 02730  IF B$ <> "YES" THEN 2780
    if(strcmp(B_str,"Yes")!=0)goto Lbl_02780;
    // 02740  FOR I=1 TO 2
    for(I_int=1;I_int<=2;I_int++){
        // 02750  ON I GOTO 2760,2790
        switch((int)(I_int)){
            case 1: goto Lbl_02760;
            case 2: goto Lbl_02790;
            default: break; 
        };

  Lbl_02760:
        // 02760  PRINT "CONFEDERATE STRATEGY ";
        b2c_printf("Confederate strategy ");
        // 02770  GOTO 2790
        goto Lbl_02790;

  Lbl_02780:
        // 02780  PRINT "YOUR STRATEGY ";
        b2c_printf("Your strategy ");

  Lbl_02790:
        // 02790  INPUT Y
        // Start of Basic INPUT statement 02790
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&Y_int,args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 02790
        // 02800  IF ABS(Y-3)<3 THEN 2830
        if(ABS(Y_int-3)<3)goto Lbl_02830;
        // 02810  PRINT "STRATEGY";Y;"NOT ALLOWED."
        b2c_printf("Strategy %d StrategyNot allowed.\n",Y_int);
        // 02820  GOTO 2780
        goto Lbl_02780;

  Lbl_02830:
        // 02830  IF B$="YES" THEN 2870
        if(strcmp(B_str,"Yes")==0)goto Lbl_02870;
        // 02840  IF Y=5 THEN 3640
        if(Y_int==5)goto Lbl_03640;
        // 02850  GOSUB 4560
        Routine_04560();
        // 02860  GOTO 3050
        goto Lbl_03050;

  Lbl_02870:
        // 02870  IF I=2 THEN 2910
        if(I_int==2)goto Lbl_02910;
        // 02880  LET Y1=Y
        Y1_int = Y_int;

  Lbl_02890:
        // 02890  PRINT "UNION STRATEGY ";
        b2c_printf("Union strategy ");
        // 02900  NEXT I
        int dummy_2900=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_02910:
    // 02910  LET Y2=Y
    Y2_int = Y_int;
    // 02920  LET Y=Y1
    Y_int = Y1_int;
    // 02930  IF Y2=5 THEN 2890
    if(Y2_int==5)goto Lbl_02890;
    // 02940  REM : SIMULATED LOSSES-NORTH
    // 02950  LET C6=(2*C2/5)*(1+1/(2*(ABS(Y2-Y)+1)))
    C6_int = (2*C2_int_arr[0]/5)*(1+1/(2*(ABS(Y2_int-Y_int)+1)));
    // 02960  LET C6=C6*(1.28+(5*M2/6)/(B(2)+1))
    C6_int = C6_int*(1.28+(5*M2_int_arr[0]/6)/(B_int_arr[2]+1));
    // 02970  LET C6=INT(C6*(1+1/O2)+.5)
    C6_int = INT(C6_int*(1+1/O2_int)+0.5);
    // 02980  REM - IF LOSS > MEN PRESENT, RESCALE LOSSES
    // 02990  LET E2=100/O2
    E2_int = 100/O2_int;
    // 03000  IF INT(C6+E2)<M6 THEN 3060
    if(INT(C6_int+E2_int)<M6_int)goto Lbl_03060;
    // 03010  LET C6=INT(13*M6/20)
    C6_int = INT(13*M6_int/20);
    // 03020  LET E2=7*C6/13
    E2_int = 7*C6_int/13;
    // 03030  LET U2=1
    U2_int = 1;
    // 03040  REM - CALCULATE SIMULATED LOSSES

  Lbl_03050:
    // 03050  PRINT
    b2c_printf("");

  Lbl_03060:
    // 03060  PRINT : PRINT : PRINT ,"CONFEDERACY","UNION"
    b2c_printf("ConfederacyUnion\n");
    // 03070  LET C5=(2*C1/5)*(1+1/(2*(ABS(Y2-Y)+1)))
    C5_int = (2*C1_int_arr[0]/5)*(1+1/(2*(ABS(Y2_int-Y_int)+1)));
    // 03080  LET C5=INT(C5*(1+1/O)*(1.28+F1/(B(1)+1))+.5)
    C5_int = INT(C5_int*(1+1/O_int)*(1.28+F1_int/(B_int_arr[1]+1))+0.5);
    // 03090  LET E=100/O
    E_int = 100/O_int;
    // 03100  IF C5+100/O<M1*(1+(P1-T1)/(M3+1)) THEN 3140
    if(C5_int+100/O_int<M1_int_arr[0]*(1+(P1_int-T1_int)/(M3_int+1)))goto Lbl_03140;
    // 03110  LET C5=INT(13*M1/20*(1+(P1-T1)/(M3+1)))
    C5_int = INT(13*M1_int_arr[0]/20*(1+(P1_int-T1_int)/(M3_int+1)));
    // 03120  LET E=7*C5/13
    E_int = 7*C5_int/13;
    // 03130  LET U=1
    U_int = 1;

  Lbl_03140:
    // 03140  IF D=1 THEN 3380
    if(D_int==1)goto Lbl_03380;

  Lbl_03150:
    // 03150  PRINT "CASUALTIES",C5,C6
    b2c_printf("Casualties %d Casualties %d \n",C5_int,C6_int);
    // 03160  PRINT "DESERTIONS",INT(E),INT(E2)
    b2c_printf("Desertions");
    // 03170  PRINT
    b2c_printf("");
    // 03180  IF B$ <> "YES" THEN 3220
    if(strcmp(B_str,"Yes")!=0)goto Lbl_03220;
    // 03190  PRINT "COMPARED TO THE ACTUAL CASUALTIES AT "C$
    b2c_printf("Compared to the actual casualties at %s\n",C_str_arr[0]);
    // 03200  PRINT "CONFEDERATE:"INT(100*(C5/C1)+.5)"% OF THE ORIGINAL"
    b2c_printf("Confederate:%% of the original\n");
    // 03210  PRINT "UNION:      "INT(100*(C6/C2)+.5)"% OF THE ORIGINAL"
    b2c_printf("Union:      %% of the original\n");

  Lbl_03220:
    // 03220  PRINT
    b2c_printf("");
    // 03230  REM - 1 WHO ONE
    // 03240  IF U <> 1 THEN 3260
    if(U_int!=1)goto Lbl_03260;
    // 03250  IF U2=1 THEN 3340
    if(U2_int==1)goto Lbl_03340;

  Lbl_03260:
    // 03260  IF U=1 THEN 3300
    if(U_int==1)goto Lbl_03300;
    // 03270  IF U2=1 THEN 3320
    if(U2_int==1)goto Lbl_03320;
    // 03280  IF C5+E=C6+E2 THEN 3340
    if(C5_int+E_int==C6_int+E2_int)goto Lbl_03340;
    // 03290  IF C5+E<C6+E2 THEN 3320
    if(C5_int+E_int<C6_int+E2_int)goto Lbl_03320;

  Lbl_03300:
    // 03300  PRINT "THE UNION WINS "C$
    b2c_printf("The union wins %s\n",C_str_arr[0]);
    // 03310  GOTO 3420
    goto Lbl_03420;

  Lbl_03320:
    // 03320  PRINT "THE CONFEDERACY WINS "C$
    b2c_printf("The confederacy wins %s\n",C_str_arr[0]);
    // 03330  GOTO 3470
    goto Lbl_03470;

  Lbl_03340:
    // 03340  PRINT "BATTLE OUTCOME UNRESOLVED"
    b2c_printf("Battle outcome unresolved\n");
    // 03350  LET W0=W0+1
    W0_int = W0_int+1;
    // 03360  IF A=0 THEN 3600
    if(A_int==0)goto Lbl_03600;
    // 03370  GOTO 3490
    goto Lbl_03490;

  Lbl_03380:
    // 03380  LET C6=INT(17*C2*C1/(C5*20))
    C6_int = INT(17*C2_int_arr[0]*C1_int_arr[0]/(C5_int*20));
    // 03390  LET E2=5*O
    E2_int = 5*O_int;
    // 03400  GOTO 3150
    goto Lbl_03150;
    // 03410  REM - FIND WHO WON

  Lbl_03420:
    // 03420  IF A=0 THEN 3600
    if(A_int==0)goto Lbl_03600;
    // 03430  LET L=L+1
    L_int = L_int+1;
    // 03440  GOTO 3490
    goto Lbl_03490;
    // 03450  REM - CUMULATIVE BATTLE FACTORS WHICH ALTER HISTORICAL
    // 03460  REM  RESOURCES AVAILABLE.IF A REPLAY DON'T UPDATE.

  Lbl_03470:
    // 03470  IF A=0 THEN 3600
    if(A_int==0)goto Lbl_03600;
    // 03480  LET W=W+1
    W_int = W_int+1;

  Lbl_03490:
    // 03490  LET T1=T1+C5+E
    T1_int = T1_int+C5_int+E_int;
    // 03500  LET T2=T2+C6+E2
    T2_int = T2_int+C6_int+E2_int;
    // 03510  LET P1=P1+C1
    P1_int = P1_int+C1_int_arr[0];
    // 03520  LET P2=P2+C2
    P2_int = P2_int+C2_int_arr[0];
    // 03530  LET Q1=Q1+(F(1)+H(1)+B(1))
    Q1_int = Q1_int+(F_int_arr[1]+H_int_arr[1]+B_int_arr[1]);
    // 03540  LET Q2=Q2+(F(2)+H(2)+B(2))
    Q2_int = Q2_int+(F_int_arr[2]+H_int_arr[2]+B_int_arr[2]);
    // 03550  LET R1=R1+M1*(100-I1)/20
    R1_int = R1_int+M1_int_arr[0]*(100-I1_int)/20;
    // 03560  LET R2=R2+M2*(100-I2)/20
    R2_int = R2_int+M2_int_arr[0]*(100-I2_int)/20;
    // 03570  LET M3=M3+M1
    M3_int = M3_int+M1_int_arr[0];
    // 03580  LET M4=M4+M2
    M4_int = M4_int+M2_int_arr[0];
    // 03590  GOSUB 4790
    Routine_04790();

  Lbl_03600:
    // 03600  U=0:U2=0
    U2_int = 0;
    // 03610  PRINT "---------------"
    b2c_printf("---------------\n");
    // 03620  GOTO 1680
    goto Lbl_01680;
    // 03630  REM------FINISH OFF

  Lbl_03640:
    // 03640  PRINT "THE CONFEDERACY HAS SURRENDERED"
    b2c_printf("The confederacy has surrendered\n");
    // 03650  GOTO 3660
    goto Lbl_03660;

  Lbl_03660:
    // 03660  PRINT : PRINT : PRINT : PRINT : PRINT : PRINT
    b2c_printf("");
    // 03670  PRINT "THE CONFEDERACY ";
    b2c_printf("The confederacy ");
    // 03680  PRINT "HAS WON "W" BATTLES AND LOST "L
    b2c_printf("Has won  %d Has won  battles and lost  battles and lost  %d \n",W_int,L_int);
    // 03690  IF Y=5 THEN 3750
    if(Y_int==5)goto Lbl_03750;
    // 03700  IF Y2=5 THEN 3730
    if(Y2_int==5)goto Lbl_03730;
    // 03710  IF W <= L THEN 3750
    if(W_int<=L_int)goto Lbl_03750;
    // 03720  IF Y=5 THEN 3750
    if(Y_int==5)goto Lbl_03750;

  Lbl_03730:
    // 03730  PRINT "THE CONFEDERACY HAS WON THE WAR"
    b2c_printf("The confederacy has won the war\n");
    // 03740  GOTO 3760
    goto Lbl_03760;

  Lbl_03750:
    // 03750  PRINT "THE UNION HAS WON THE WAR"
    b2c_printf("The union has won the war\n");

  Lbl_03760:
    // 03760  PRINT
    b2c_printf("");
    // 03770  IF R1=0 THEN 3910
    if(R1_int==0)goto Lbl_03910;
    // 03780  PRINT "FOR THE "W+L+W0" BATTLES FOUGHT (EXCUDING RERUNS)"
    b2c_printf("For the  battles fought (excuding reruns)\n");
    // 03790  PRINT " "," "," ";
    b2c_printf("   ");
    // 03800  PRINT "CONFEDERACY"," UNION"
    b2c_printf("Confederacy union\n");
    // 03810  PRINT "HISTORICAL LOSSES",INT(P1+.5),INT(P2+.5)
    b2c_printf("Historical losses");
    // 03820  PRINT "SIMULATED LOSSES",INT(T1+.5),INT(T2+.5)
    b2c_printf("Simulated losses");
    // 03830  PRINT
    b2c_printf("");
    // 03840  PRINT "    % OF ORIGINAL",INT(100*(T1/P1)+.5),INT(100*(T2/P2)+.5)
    b2c_printf("    %% of original");
    // 03850  IF B$="YES" THEN 3910
    if(strcmp(B_str,"Yes")==0)goto Lbl_03910;
    // 03860  PRINT
    b2c_printf("");
    // 03870  PRINT "UNION INTELLIGENCE SUGGESTS THAT THE SOUTH USED "
    b2c_printf("Union intelligence suggests that the south used \n");
    // 03880  PRINT "STRATEGIES 1, 2, 3, 4 IN THE FOLLOWING PERCENTAGES"
    b2c_printf("Strategies 1, 2, 3, 4 in the following percentages\n");
    // 03890  PRINT S(1);S2(2);S(3);S(4)
    b2c_printf(" %d Ý›[ %d Ý›[ %d Ý›[ %d \n",S_int_arr[1],S2_int_arr[2],S_int_arr[3],S_int_arr[4]);
    // 03900  REM---------------------------------

  Lbl_03910:
    // 03910  STOP
    exit(1);
    // 03920  REM - HISTORICAL DATA...CAN ADD MORE (STRAT.,ETC) BY INSERTING
    // 03930  REM   DATA STATEMENTS AFTER APPRO. INFO, AND ADJUSTING READ
    // 03940  DATA "BULL RUN",18000,18500,1967,2708,1
    // 03950  DATA "SHILOH",40000.,44894.,10699,13047,3
    // 03960  DATA "SEVEN DAYS",95000.,115000.,20614,15849,3
    // 03970  DATA "SECOND BULL RUN",54000.,63000.,10000,14000,2
    // 03980  DATA "ANTIETAM",40000.,50000.,10000,12000,3
    // 03990  DATA "FREDERICKSBURG",75000.,120000.,5377,12653,1
    // 04000  DATA "MURFREESBORO",38000.,45000.,11000,12000,1
    // 04010  DATA "CHANCELLORSVILLE",32000,90000.,13000,17197,2
    // 04020  DATA "VICKSBURG",50000.,70000.,12000,19000,1
    // 04030  DATA "GETTYSBURG",72500.,85000.,20000,23000,3
    // 04040  DATA "CHICKAMAUGA",66000.,60000.,18000,16000,2
    // 04050  DATA "CHATTANOOGA",37000.,60000.,36700.,5800,2
    // 04060  DATA "SPOTSYLVANIA",62000.,110000.,17723,18000,2
    // 04070  DATA "ATLANTA",65000.,100000.,8500,3700,1

  Lbl_04080:
    // 04080  PRINT "JULY 21, 1861.  GEN. BEAUREGARD, COMMANDING THE SOUTH, MET"
    b2c_printf("July 21, 1861.  Gen. Beauregard, commanding the south, met\n");
    // 04090  PRINT "UNION FORCES WITH GEN. MCDOWELL IN A PREMATURE BATTLE AT"
    b2c_printf("Union forces with gen. Mcdowell in a premature battle at\n");
    // 04100  PRINT "BULL RUN. GEN. JACKSON HELPED PUSH BACK THE UNION ATTACK."
    b2c_printf("Bull run. Gen. Jackson helped push back the union attack.\n");
    // 04110  GOTO 2010
    goto Lbl_02010;

  Lbl_04120:
    // 04120  PRINT "APRIL 6-7, 1862.  THE CONFEDERATE SURPRISE ATTACK AT"
    b2c_printf("April 6-7, 1862.  The confederate surprise attack at\n");
    // 04130  PRINT "SHILOH FAILED DUE TO POOR ORGANIZATION."
    b2c_printf("Shiloh failed due to poor organization.\n");
    // 04140  GOTO 2010
    goto Lbl_02010;

  Lbl_04150:
    // 04150  PRINT "JUNE 25-JULY 1, 1862.  GENERAL LEE (CSA) UPHELD THE"
    b2c_printf("June 25-july 1, 1862.  General lee (csa) upheld the\n");
    // 04160  PRINT "OFFENSIVE THROUGHOUT THE BATTLE AND FORCED GEN. MCCLELLAN"
    b2c_printf("Offensive throughout the battle and forced gen. Mcclellan\n");
    // 04170  PRINT "AND THE UNION FORCES AWAY FROM RICHMOND."
    b2c_printf("And the union forces away from richmond.\n");
    // 04180  GOTO 2010
    goto Lbl_02010;

  Lbl_04190:
    // 04190  PRINT "AUG 29-30, 1862.  THE COMBINED CONFEDERATE FORCES UNDER";
    b2c_printf("Aug 29-30, 1862.  The combined confederate forces under");
    // 04200  PRINT " LEE"
    b2c_printf(" lee\n");
    // 04210  PRINT "AND JACKSON DROVE THE UNION FORCES BACK INTO WASHINGTON."
    b2c_printf("And jackson drove the union forces back into washington.\n");
    // 04220  GOTO 2010
    goto Lbl_02010;

  Lbl_04230:
    // 04230  PRINT "SEPT 17, 1862.  THE SOUTH FAILED TO INCORPORATE MARYLAND"
    b2c_printf("Sept 17, 1862.  The south failed to incorporate maryland\n");
    // 04240  PRINT "INTO THE CONFEDERACY."
    b2c_printf("Into the confederacy.\n");
    // 04250  GOTO 2010
    goto Lbl_02010;

  Lbl_04260:
    // 04260  PRINT "DEC 13, 1862.  THE CONFEDERACY UNDER LEE SUCCESSFULLY"
    b2c_printf("Dec 13, 1862.  The confederacy under lee successfully\n");
    // 04270  PRINT "REPULSED AN ATTACK BY THE UNION UNDER GEN. BURNSIDE."
    b2c_printf("Repulsed an attack by the union under gen. Burnside.\n");
    // 04280  GOTO 2010
    goto Lbl_02010;

  Lbl_04290:
    // 04290  PRINT "DEC 31, 1862.  THE SOUTH UNDER GEN. BRAGG WON A CLOSE ";
    b2c_printf("Dec 31, 1862.  The south under gen. Bragg won a close ");
    // 04300  PRINT "BATTLE."
    b2c_printf("Battle.\n");
    // 04310  GOTO 2010
    goto Lbl_02010;

  Lbl_04320:
    // 04320  PRINT "MAY 1-6, 1863.  THE SOUTH HAD A COSTLY VICTORY AND LOST"
    b2c_printf("May 1-6, 1863.  The south had a costly victory and lost\n");
    // 04330  PRINT "ONE OF THEIR OUTSTANDING GENERALS, 'STONEWALL' JACKSON."
    b2c_printf("One of their outstanding generals, 'stonewall' jackson.\n");
    // 04340  GOTO 2010
    goto Lbl_02010;

  Lbl_04350:
    // 04350  PRINT "JULY 4, 1863.  VICKSBURG WAS A COSTLY DEFEAT FOR THE SOUTH"
    b2c_printf("July 4, 1863.  Vicksburg was a costly defeat for the south\n");
    // 04360  PRINT "BECAUSE IT GAVE THE UNION ACCESS TO THE MISSISSIPPI."
    b2c_printf("Because it gave the union access to the mississippi.\n");
    // 04370  GOTO 2010
    goto Lbl_02010;

  Lbl_04380:
    // 04380  PRINT "JULY 1-3, 1863.  A SOUTHERN MISTAKE BY GEN. LEE AT ";
    b2c_printf("July 1-3, 1863.  A southern mistake by gen. Lee at ");
    // 04390  PRINT "GETTYSBURG"
    b2c_printf("Gettysburg\n");
    // 04400  PRINT "COST THEM ONE OF THE MOST CRUCIAL BATTLES OF THE WAR."
    b2c_printf("Cost them one of the most crucial battles of the war.\n");
    // 04410  GOTO 2010
    goto Lbl_02010;

  Lbl_04420:
    // 04420  PRINT "SEPT. 15, 1863. CONFUSION IN A FOREST NEAR CHICKAMAUGA LED"
    b2c_printf("Sept. 15, 1863. Confusion in a forest near chickamauga led\n");
    // 04430  PRINT "TO A COSTLY SOUTHERN VICTORY."
    b2c_printf("To a costly southern victory.\n");
    // 04440  GOTO 2010
    goto Lbl_02010;

  Lbl_04450:
    // 04450  PRINT "NOV. 25, 1863. AFTER THE SOUTH HAD SIEGED GEN. ROSENCRANS'"
    b2c_printf("Nov. 25, 1863. After the south had sieged gen. Rosencrans'\n");
    // 04460  PRINT "ARMY FOR THREE MONTHS, GEN. GRANT BROKE THE SIEGE."
    b2c_printf("Army for three months, gen. Grant broke the siege.\n");
    // 04470  GOTO 2010
    goto Lbl_02010;

  Lbl_04480:
    // 04480  PRINT "MAY 5, 1864.  GRANT'S PLAN TO KEEP LEE ISOLATED BEGAN TO"
    b2c_printf("May 5, 1864.  Grant's plan to keep lee isolated began to\n");
    // 04490  PRINT "FAIL HERE, AND CONTINUED AT COLD HARBOR AND PETERSBURG."
    b2c_printf("Fail here, and continued at cold harbor and petersburg.\n");
    // 04500  GOTO 2010
    goto Lbl_02010;

  Lbl_04510:
    // 04510  PRINT "AUGUST, 1864.  SHERMAN AND THREE VETERAN ARMIES CONVERGED"
    b2c_printf("August, 1864.  Sherman and three veteran armies converged\n");
    // 04520  PRINT "ON ATLANTA AND DEALT THE DEATH BLOW TO THE CONFEDERACY."
    b2c_printf("On atlanta and dealt the death blow to the confederacy.\n");
    // 04530  GOTO 2010
    goto Lbl_02010;
    // 04540  END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
