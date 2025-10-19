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
char* data_01160s[]={"KICK","RECEIVE"," YARD ","RUN BACK FOR ","BALL ON "};
char* data_01170s[]={"YARD LINE"," SIMPLE RUN"," TRICKY RUN"," SHORT PASS"};
char* data_01180s[]={" LONG PASS","PUNT"," QUICK KICK "," PLACE KICK"," LOSS "};
char* data_01190s[]={" NO GAIN","GAIN "," TOUCHDOWN "," TOUCHBACK ","SAFETY***"};
char* data_01200s[]={"JUNK"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1160,  5,data_01160s},
    { 1170,  4,data_01170s},
    { 1180,  5,data_01180s},
    { 1190,  5,data_01190s},
    { 1200,  1,data_01200s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int;                                     // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    FNF_int_arr[10];                           // Basic: FNF 
int    FNG_int_arr[10];                           // Basic: FNG 
int    I_int;                                     // Basic: I 
char*  L_str_arr[20];                             // Basic: L$ 
char*  O_str_arr[10];                             // Basic: O$ 
int    P_int;                                     // Basic: P 
int    P3_int;                                    // Basic: P3 
int    R_int;                                     // Basic: R 
int    R1_int;                                    // Basic: R1 
int    S_int_arr[10];                             // Basic: S 
int    T_int;                                     // Basic: T 
int    X_int;                                     // Basic: X 
int    X1_int;                                    // Basic: X1 
int    X3_int;                                    // Basic: X3 
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03750();
void Routine_03820();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused X
int FNF(int X){
    int rtn=1-2*P_int;
    return(rtn);
}

#pragma argsused Z
int FNG(int Z){
    int rtn=P_int*(X1_int-X_int)+(1-P_int)*(X_int-X1_int);
    return(rtn);
}

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
    // 03740 REM PRINT POSITION

void Routine_03750(){
    // 03750 IF X>50 THEN 3780
    if(X_int>50)goto Lbl_03780;
    // 03760 PRINT L$(5);O$(0);X;L$(6)
    b2c_printf("%szžqZ%szžqZ %d zžqZ%s\n",L_str_arr[5],O_str_arr[0],X_int,L_str_arr[6]);
    // 03770 GOTO 3790
    goto Lbl_03790;

  Lbl_03780:
    // 03780 PRINT L$(5);O$(1);100-X;L$(6)
    b2c_printf("%séÚ•ý%séÚ•ý00-X_int00-X_int%s\n",L_str_arr[5],O_str_arr[1],L_str_arr[6]);

  Lbl_03790:
    // 03790 GOTO 03800
    goto Lbl_03800;

  Lbl_03800:
    // 03800 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 03810 REM SCORE

void Routine_03820(){
    // 03820 PRINT
    b2c_printf("");
    // 03830 PRINT "SCORE:  ";S(0);" TO ";S(1)
    b2c_printf("Score:   %d Score:   to  to  %d \n",S_int_arr[0],S_int_arr[1]);
    // 03840 PRINT
    b2c_printf("");
    // 03850 PRINT
    b2c_printf("");
    // 03860 GOTO 03870
    goto Lbl_03870;

  Lbl_03870:
    // 03870 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"FTBALL"
    b2c_printf("Ftball\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "THIS IS DARTMOUTH CHAMPIONSHIP FOOTBALL.":PRINT
    b2c_printf("");
    // 01040 PRINT "YOU WILL QUARTERBACK DARTMOUTH. CALL PLAYS AS FOLLOWS:"
    b2c_printf("You will quarterback dartmouth. Call plays as follows:\n");
    // 01050 PRINT "1= SIMPLE RUN; 2= TRICKY RUN; 3= SHORT PASS;"
    b2c_printf("1= simple run; 2= tricky run; 3= short pass;\n");
    // 01060 PRINT "4= LONG PASS; 5= PUNT; 6= QUICK KICK; 7= PLACE KICK."
    b2c_printf("4= long pass; 5= punt; 6= quick kick; 7= place kick.\n");
    // 01070 PRINT
    b2c_printf("");
    // 01080 PRINT "CHOOSE YOUR OPPONENT";
    b2c_printf("Choose your opponent");
    // 01090 INPUT O$(1)
    // Start of Basic INPUT statement 01090
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&O_str_arr[1],args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01090
    // 01100 O$(0)="DARTMOUTH"
    GLBpStr="Dartmouth";
    O_str_arr[0] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01110 PRINT
    b2c_printf("");
    // 01120 LET S(0)=0: LET S(1)=0
    S_int_arr[1] = 0;
    // 01130 REM
    // 01140 DIM L$(20)
    // 01150 FOR I=1 TO 20: READ L$(I): NEXT I
    int dummy_1150=0; // Ignore this line.
}; // End-For(I_int)
// 01160 DATA "KICK","RECEIVE"," YARD ","RUN BACK FOR ","BALL ON "
// 01170 DATA "YARD LINE"," SIMPLE RUN"," TRICKY RUN"," SHORT PASS"
// 01180 DATA " LONG PASS","PUNT"," QUICK KICK "," PLACE KICK"," LOSS "
// 01190 DATA " NO GAIN","GAIN "," TOUCHDOWN "," TOUCHBACK ","SAFETY***"
// 01200 DATA "JUNK"
// 01210 LET P=INT(RND(1)*2)
P_int = INT(RND(1)*2);
// 01220 PRINT O$(P);" WON THE TOSS"
b2c_printf("%s&zžqZ won the toss\n",O_str_arr[P_int]);
// 01230 DEF FNF(X)=1-2*P
// 01240 DEF FNG(Z)=P*(X1-X)+(1-P)*(X-X1)
// 01250 IF P=0 THEN 1290
if(P_int==0)goto Lbl_01290;
// 01260 PRINT O$(1);" ELECTS TO RECEIVE."
b2c_printf("%szžqZ elects to receive.\n",O_str_arr[1]);
// 01270 PRINT
b2c_printf("");
// 01280 GOTO 1390
goto Lbl_01390;

  Lbl_01290:
// 01290 PRINT "DO YOU ELECT TO KICK OR RECEIVE";
b2c_printf("Do you elect to kick or receive");

  Lbl_01300:
// 01300 INPUT A$
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
            (err += b2c_strtos(&A_str,args,0)) ){
             printf("?Redo from start\n");
        }else{
            break;
        };
    };
}; // End of Basic INPUT statement 01300
// 01310 PRINT
b2c_printf("");
// 01320 FOR E=1 TO 2
for(E_int=1;E_int<=2;E_int++){
    // 01330 IF A$=L$(E) THEN 1370
    if(strcmp(A_str,L_str_arr[E_int])==0)goto Lbl_01370;
    // 01340 NEXT E
    int dummy_1340=0; // Ignore this line.
}; // End-For(E_int)
// 01350 PRINT "INCORRECT ANSWER.  PLEASE TYPE 'KICK' OR 'RECIEVE'";
b2c_printf("Incorrect answer.  Please type 'kick' or 'recieve'");
// 01360 GOTO 1300
goto Lbl_01300;

  Lbl_01370:
// 01370 IF E=2 THEN 1390
if(E_int==2)goto Lbl_01390;
// 01380 LET P=1
P_int = 1;

  Lbl_01390:
// 01390 LET X=40+(1-P)*20
X_int = 40+(1-P_int)*20;

  Lbl_01400:
// 01400 LET Y=INT(200*(RND(1)-.5)^3+55)
Y_int = INT(200*FPower((RND(1)-0.5),3)+55);
// 01410 PRINT Y;L$(3);" KICKOFF"
b2c_printf(" %d 3zžqZ%s3zžqZ kickoff\n",Y_int,L_str_arr[3]);
// 01420 LET X=X-FNF(1)*Y
X_int = X_int-FNF_int_arr[1]*Y_int;
// 01430 IF ABS(X-50)>=50 THEN 1510
if(ABS(X_int-50)>=50)goto Lbl_01510;
// 01440 LET Y=INT(50*RND(1)^2)+(1-P)*INT(50*RND(1)^4)
Y_int = INT(50*IPower(RND(1),2))+(1-P_int)*INT(50*IPower(RND(1),4));
// 01450 LET X=X+FNF(1)*Y
X_int = X_int+FNF_int_arr[1]*Y_int;
// 01460 IF ABS(X-50)>=50 THEN 1490
if(ABS(X_int-50)>=50)goto Lbl_01490;
// 01470 PRINT Y;L$(3);" RUNBACK"
b2c_printf(" %d $zžqZ%s$zžqZ runback\n",Y_int,L_str_arr[3]);
// 01480 GOTO 1540
goto Lbl_01540;

  Lbl_01490:
// 01490 PRINT L$(4);
b2c_printf("%sëÚ•ý\n",L_str_arr[4]);
// 01500 GOTO 3210
goto Lbl_03210;

  Lbl_01510:
// 01510 PRINT "TOUCHBACK FOR ";O$(P);"."
b2c_printf("Touchback for %sTouchback for .\n",O_str_arr[P_int]);
// 01520 LET X=20+P*60
X_int = 20+P_int*60;
// 01530 REM FIRST DOWN

  Lbl_01540:
// 01540 GOSUB 3750
Routine_03750();

  Lbl_01550:
// 01550 LET X1=X
X1_int = X_int;
// 01560 LET D=1
D_int = 1;
// 01570 PRINT:PRINT "FIRST DOWN ";O$(P);"***"
b2c_printf("First down %sFirst down ***\n",O_str_arr[P_int]);
// 01580 PRINT
b2c_printf("");
// 01590 PRINT
b2c_printf("");
// 01600 GOTO 1620
goto Lbl_01620;
// 01610 REM NEW PLAY

  Lbl_01620:
// 01620 LET T=T+1
T_int = T_int+1;
// 01630 IF T=30 THEN 1820
if(T_int==30)goto Lbl_01820;
// 01640 IF T<50 THEN 1690
if(T_int<50)goto Lbl_01690;
// 01650 IF RND(1)>.2 THEN 1690
if(RND(1)>0.2)goto Lbl_01690;
// 01660 PRINT "END OF GAME  ***"
b2c_printf("End of game  ***\n");
// 01670 PRINT "FINAL SCORE:  ";O$(0);": ";S(0);"  ";O$(1);": ";S(1)
b2c_printf("Final score:  %sFinal score:  : :  %d :     %s  : :  %d \n",O_str_arr[0],S_int_arr[0],O_str_arr[1],S_int_arr[1]);
// 01680 STOP
exit(1);

  Lbl_01690:
// 01690 IF P=1 THEN 2510
if(P_int==1)goto Lbl_02510;
// 01700 PRINT "NEXT PLAY";
b2c_printf("Next play");

  Lbl_01710:
// 01710 INPUT Z
// Start of Basic INPUT statement 01710
{
    int numargs=1;
    char *args[numargs+1];
    bool echoeol=true;
    while(true){
        fprintf(stdout," ? ");
        int err=input(args,numargs,echoeol);
        if(err==0x03) break;
        if(err || 
            (err += b2c_strtoi(&Z_int,args,0)) ){
             printf("?Redo from start\n");
        }else{
            break;
        };
    };
}; // End of Basic INPUT statement 01710
// 01720 IF Z<>INT(Z) THEN 1740
if(Z_int!=INT(Z_int))goto Lbl_01740;
// 01730 IF ABS(Z-4)<=3 THEN 1760
if(ABS(Z_int-4)<=3)goto Lbl_01760;

  Lbl_01740:
// 01740 PRINT "ILLEGAL PLAY NUMBER, RETYPE";
b2c_printf("Illegal play number, retype");
// 01750 GOTO 1710
goto Lbl_01710;

  Lbl_01760:
// 01760 LET F=0
F_int = 0;
// 01770 PRINT L$(Z+6);".  ";
b2c_printf("%s%zžqZ.  .  \n",L_str_arr[Z_int+6]);
// 01780 LET R=RND(1)*(.98+FNF(1)*.02)
R_int = RND(1)*(0.98+FNF_int_arr[1]*0.02);
// 01790 LET R1=RND(1)
R1_int = RND(1);
// 01800 ON Z GOTO 1870,1910,2020,2240,2330,1570,2440
switch((int)(Z_int)){
    case 1: goto Lbl_01870;
    case 2: goto Lbl_01910;
    case 3: goto Lbl_02020;
    case 4: goto Lbl_02240;
    case 5: goto Lbl_02330;
    case 6: goto Lbl_02330;
    case 7: goto Lbl_02440;
    default: break; 
};
// 01810 REM  JEAN'S SPECIAL

  Lbl_01820:
// 01820 IF RND(1)> 1/3 THEN 1690
if(RND(1)>1/3)goto Lbl_01690;
// 01830 PRINT "GAME DELAYED.  DOG ON FIELD."
b2c_printf("Game delayed.  Dog on field.\n");
// 01840 PRINT
b2c_printf("");
// 01850 GOTO 1690
goto Lbl_01690;
// 01860 REM  SIMPLE RUN

  Lbl_01870:
// 01870 LET Y=INT(24*(R-.5)^3+3)
Y_int = INT(24*FPower((R_int-0.5),3)+3);
// 01880 IF RND(1)<.05 THEN 1930
if(RND(1)<0.05)goto Lbl_01930;
// 01890 GOTO 2830
goto Lbl_02830;
// 01900 REM  TRICKY RUN

  Lbl_01910:
// 01910 LET Y=INT(20*R-5)
Y_int = INT(20*R_int-5);
// 01920 IF RND(1)>.1 THEN 2830
if(RND(1)>0.1)goto Lbl_02830;

  Lbl_01930:
// 01930 LET F=-1
F_int = -1;
// 01940 LET X3=X
X3_int = X_int;
// 01950 LET X=X+FNF(1)*Y
X_int = X_int+FNF_int_arr[1]*Y_int;
// 01960 IF ABS(X-50)>=50 THEN 1990
if(ABS(X_int-50)>=50)goto Lbl_01990;
// 01970 PRINT "***  FUMBLE AFTER ";
b2c_printf("***  fumble after ");
// 01980 GOTO 2860
goto Lbl_02860;

  Lbl_01990:
// 01990 PRINT "***  FUMBLE."
b2c_printf("***  fumble.\n");
// 02000 GOTO 3070
goto Lbl_03070;
// 02010 REM  SHORT PASS

  Lbl_02020:
// 02020 LET Y=INT(60*(R1-.5)^3+10)
Y_int = INT(60*FPower((R1_int-0.5),3)+10);
// 02030 IF R<.05 THEN 2080
if(R_int<0.05)goto Lbl_02080;
// 02040 IF R<.15 THEN 2140
if(R_int<0.15)goto Lbl_02140;
// 02050 IF R<.55 THEN 2170
if(R_int<0.55)goto Lbl_02170;

  Lbl_02060:
// 02060 PRINT "COMPLETE.  ";
b2c_printf("Complete.  ");
// 02070 GOTO 2830
goto Lbl_02830;

  Lbl_02080:
// 02080 IF D=4 THEN 2170
if(D_int==4)goto Lbl_02170;
// 02090 PRINT "INTERCEPTED."
b2c_printf("Intercepted.\n");

  Lbl_02100:
// 02100 LET F=-1
F_int = -1;
// 02110 LET X=X+FNF(1)*Y
X_int = X_int+FNF_int_arr[1]*Y_int;
// 02120 IF ABS(X-50)>=50 THEN 3070
if(ABS(X_int-50)>=50)goto Lbl_03070;
// 02130 GOTO 2910
goto Lbl_02910;

  Lbl_02140:
// 02140 PRINT "PASSER TACKLED.  ";
b2c_printf("Passer tackled.  ");
// 02150 LET Y=-INT(10*R1)
Y_int = -INT(10*R1_int);
// 02160 GOTO 2830
goto Lbl_02830;

  Lbl_02170:
// 02170 LET Y=0
Y_int = 0;
// 02180 IF RND(1)<.3 THEN 2210
if(RND(1)<0.3)goto Lbl_02210;
// 02190 PRINT "INCOMPLETE.  ";
b2c_printf("Incomplete.  ");
// 02200 GOTO 2830
goto Lbl_02830;

  Lbl_02210:
// 02210 PRINT "BATTED DOWN.  ";
b2c_printf("Batted down.  ");
// 02220 GOTO 2830
goto Lbl_02830;
// 02230 REM  LONG PASS

  Lbl_02240:
// 02240 LET Y=INT(160*(R1-.5)^3+30)
Y_int = INT(160*FPower((R1_int-0.5),3)+30);
// 02250 IF R<.1 THEN 2080
if(R_int<0.1)goto Lbl_02080;
// 02260 IF R<.3 THEN 2290
if(R_int<0.3)goto Lbl_02290;
// 02270 IF R<.75 THEN 2170
if(R_int<0.75)goto Lbl_02170;
// 02280 GOTO 2060
goto Lbl_02060;

  Lbl_02290:
// 02290 PRINT "PASSER TACKLED.  ";
b2c_printf("Passer tackled.  ");
// 02300 LET Y=-INT(15*R1+3)
Y_int = -INT(15*R1_int+3);
// 02310 GOTO 2830
goto Lbl_02830;
// 02320 REM  PUNT OR KICK

  Lbl_02330:
// 02330 LET Y=INT(100*(R-.5)^3+35)
Y_int = INT(100*FPower((R_int-0.5),3)+35);
// 02340 IF D=4 THEN 2360
if(D_int==4)goto Lbl_02360;
// 02350 LET Y=INT(Y*1.3)
Y_int = INT(Y_int*1.3);

  Lbl_02360:
// 02360 PRINT Y;L$(3);" PUNT"
b2c_printf(" %d ëÚ•ý%sëÚ•ý punt\n",Y_int,L_str_arr[3]);
// 02370 IF ABS(X+Y*FNF(1)-50)>=50 THEN 2420
if(ABS(X_int+Y_int*FNF_int_arr[1]-50)>=50)goto Lbl_02420;
// 02380 IF D<4 THEN 2420
if(D_int<4)goto Lbl_02420;
// 02390 LET Y1=INT(R1^2*20)
Y1_int = INT(IPower(R1_int,2)*20);
// 02400 PRINT Y1;L$(3);" RUN BACK"
b2c_printf(" %d ;zžqZ%s;zžqZ run back\n",Y1_int,L_str_arr[3]);
// 02410 LET Y=Y-Y1
Y_int = Y_int-Y1_int;

  Lbl_02420:
// 02420 GOTO 2100
goto Lbl_02100;
// 02430 REM  PLACE KICK

  Lbl_02440:
// 02440 LET Y=INT(100*(R-.5)^3+35)
Y_int = INT(100*FPower((R_int-0.5),3)+35);
// 02450 IF R1>.15 THEN 2490
if(R1_int>0.15)goto Lbl_02490;
// 02460 PRINT "KICK IS BLOCKED  ***"
b2c_printf("Kick is blocked  ***\n");
// 02470 LET X=X-5*FNF(1)
X_int = X_int-5*FNF_int_arr[1];
// 02480 LET P=1-P
P_int = 1-P_int;

  Lbl_02490:
// 02490 GOTO 1540
goto Lbl_01540;
// 02500 REM  OPPONENT'S PLAY

  Lbl_02510:
// 02510 IF D>1 THEN 2570
if(D_int>1)goto Lbl_02570;

  Lbl_02520:
// 02520 IF RND(1)>1/3 THEN 2550
if(RND(1)>1/3)goto Lbl_02550;
// 02530 LET Z=3
Z_int = 3;
// 02540 GOTO 1760
goto Lbl_01760;

  Lbl_02550:
// 02550 LET Z=1
Z_int = 1;
// 02560 GOTO 1760
goto Lbl_01760;

  Lbl_02570:
// 02570 IF D=4 THEN 2720
if(D_int==4)goto Lbl_02720;
// 02580 IF 10+X-X1<5 THEN 2520
if(10+X_int-X1_int<5)goto Lbl_02520;
// 02590 IF X<5 THEN 2520
if(X_int<5)goto Lbl_02520;
// 02600 IF X<=10 THEN 2790
if(X_int<=10)goto Lbl_02790;
// 02610 IF X>X1 THEN 2650
if(X_int>X1_int)goto Lbl_02650;

  Lbl_02620:
// 02620 LET A=INT(2*RND(1))
A_int = INT(2*RND(1));
// 02630 LET Z=2+A*2
Z_int = 2+A_int*2;
// 02640 GOTO 1760
goto Lbl_01760;

  Lbl_02650:
// 02650 IF D<3 THEN 2620
if(D_int<3)goto Lbl_02620;
// 02660 IF X<45 THEN 2620
if(X_int<45)goto Lbl_02620;
// 02670 IF RND(1)>1/4 THEN 2700
if(RND(1)>1/4)goto Lbl_02700;
// 02680 LET Z=6
Z_int = 6;
// 02690 GOTO 1760
goto Lbl_01760;

  Lbl_02700:
// 02700 LET Z=4
Z_int = 4;
// 02710 GOTO 1760
goto Lbl_01760;

  Lbl_02720:
// 02720 IF X>30 THEN 2770
if(X_int>30)goto Lbl_02770;
// 02730 IF 10+X-X1<3 THEN 2520
if(10+X_int-X1_int<3)goto Lbl_02520;
// 02740 IF X<3 THEN 2520
if(X_int<3)goto Lbl_02520;
// 02750 LET Z=7
Z_int = 7;
// 02760 GOTO 1760
goto Lbl_01760;

  Lbl_02770:
// 02770 LET Z=5
Z_int = 5;
// 02780 GOTO 1760
goto Lbl_01760;

  Lbl_02790:
// 02790 LET A=INT(2*RND(1))
A_int = INT(2*RND(1));
// 02800 LET Z=2+A
Z_int = 2+A_int;
// 02810 GOTO 1760
goto Lbl_01760;
// 02820 REM GAIN OR LOSS

  Lbl_02830:
// 02830 LET X3=X
X3_int = X_int;
// 02840 LET X=X+FNF(1)*Y
X_int = X_int+FNF_int_arr[1]*Y_int;
// 02850 IF ABS(X-50)>=50 THEN 3070
if(ABS(X_int-50)>=50)goto Lbl_03070;

  Lbl_02860:
// 02860 IF Y=0 THEN 2880
if(Y_int==0)goto Lbl_02880;
// 02870 PRINT ABS(Y);L$(3);
b2c_printf("%snzžqZ\n",L_str_arr[3]);

  Lbl_02880:
// 02880 PRINT L$(15+SGN(Y))
b2c_printf("%s\n",L_str_arr[15+SGN(Y_int)]);
// 02890 IF ABS(X3-50)>40 THEN 2910
if(ABS(X3_int-50)>40)goto Lbl_02910;
// 02900 IF RND(1)<.1 THEN 3420
if(RND(1)<0.1)goto Lbl_03420;

  Lbl_02910:
// 02910 GOSUB 3750
Routine_03750();
// 02920 IF F=0 THEN 2950
if(F_int==0)goto Lbl_02950;

  Lbl_02930:
// 02930 LET P=1-P
P_int = 1-P_int;
// 02940 GOTO 1550
goto Lbl_01550;

  Lbl_02950:
// 02950 IF FNG(1)>=10 THEN 1550
if(FNG_int_arr[1]>=10)goto Lbl_01550;
// 02960 IF D=4 THEN 2930
if(D_int==4)goto Lbl_02930;
// 02970 LET D=D+1
D_int = D_int+1;
// 02980 PRINT "DOWN: ";D;"     ";
b2c_printf("Down:  %d Down:           \n",D_int);
// 02990 IF (X1-50)*FNF(1)<40 THEN 3020
if((X1_int-50)*FNF_int_arr[1]<40)goto Lbl_03020;
// 03000 PRINT "GOAL TO GO"
b2c_printf("Goal to go\n");
// 03010 GOTO 3030
goto Lbl_03030;

  Lbl_03020:
// 03020 PRINT "YARDS TO GO: ";10-FNG(1)
b2c_printf("Yards to go: ");

  Lbl_03030:
// 03030 PRINT
b2c_printf("");
// 03040 PRINT
b2c_printf("");
// 03050 GOTO 1620
goto Lbl_01620;
// 03060 REM BALL IN END-ZONE

  Lbl_03070:
// 03070 IF X>=100 THEN 3100
if(X_int>=100)goto Lbl_03100;
// 03080 LET E=0
E_int = 0;
// 03090 GOTO 3110
goto Lbl_03110;

  Lbl_03100:
// 03100 LET E=1
E_int = 1;

  Lbl_03110:
// 03110 ON 1+E-F*2+P*4 GOTO 3130,3210,3380,3330,2590,2510,2710,2760
switch((int)(1+E_int-F_int*2+P_int*4)){
    case 1: goto Lbl_03130;
    case 2: goto Lbl_03210;
    case 3: goto Lbl_03380;
    case 4: goto Lbl_03330;
    case 5: goto Lbl_03210;
    case 6: goto Lbl_03130;
    case 7: goto Lbl_03330;
    case 8: goto Lbl_03380;
    default: break; 
};
// 03120 REM SAFETY

  Lbl_03130:
// 03130 LET S(1-P)=S(1-P)+2
S_int_arr[1-P_int] = S_int_arr[1-P_int]+2;
// 03140 PRINT L$(19)
b2c_printf("%s\n",L_str_arr[19]);
// 03150 GOSUB 3820
Routine_03820();
// 03160 PRINT O$(P);" KICKS OFF FROM ITS 20 YARD LINE."
b2c_printf("%sDzžqZ kicks off from its 20 yard line.\n",O_str_arr[P_int]);
// 03170 LET X=20+P*60
X_int = 20+P_int*60;
// 03180 LET P=1-P
P_int = 1-P_int;
// 03190 GOTO 1400
goto Lbl_01400;
// 03200 REM OFFENSIVE TD

  Lbl_03210:
// 03210 PRINT L$(17);"***"
b2c_printf("%sëÚ•ý***\n",L_str_arr[17]);
// 03220 IF RND(1)>.8 THEN 3290
if(RND(1)>0.8)goto Lbl_03290;
// 03230 LET S(P)=S(P)+7
S_int_arr[P_int] = S_int_arr[P_int]+7;
// 03240 PRINT "KICK IS GOOD."
b2c_printf("Kick is good.\n");

  Lbl_03250:
// 03250 GOSUB 3820
Routine_03820();
// 03260 PRINT O$(P);" KICKS OFF"
b2c_printf("%sGzžqZ kicks off\n",O_str_arr[P_int]);
// 03270 LET P=1-P
P_int = 1-P_int;
// 03280 GOTO 1390
goto Lbl_01390;

  Lbl_03290:
// 03290 PRINT "KICK IS OFF TO THE SIDE"
b2c_printf("Kick is off to the side\n");
// 03300 LET S(P)=S(P)+6
S_int_arr[P_int] = S_int_arr[P_int]+6;
// 03310 GOTO 3250
goto Lbl_03250;
// 03320 REM TOUCHBACK

  Lbl_03330:
// 03330 PRINT L$(18)
b2c_printf("%s\n",L_str_arr[18]);
// 03340 LET P=1-P
P_int = 1-P_int;
// 03350 LET X=20+P*60
X_int = 20+P_int*60;
// 03360 GOTO 1540
goto Lbl_01540;
// 03370 REM DEFENSIVE TD

  Lbl_03380:
// 03380 PRINT L$(17);"FOR ";O$(1-P);"***"
b2c_printf("%sëÚ•ýFor For %sFor ***\n",L_str_arr[17],O_str_arr[1-P_int]);
// 03390 LET P=1-P
P_int = 1-P_int;
// 03400 GOTO 3210
goto Lbl_03210;
// 03410 REM PENALTY

  Lbl_03420:
// 03420 LET P3=INT(2*RND(1))
P3_int = INT(2*RND(1));
// 03430 PRINT O$(P3);" OFFSIDES -- PENALTY OF 5 YARDS."
b2c_printf("%sKzžqZ offsides -- penalty of 5 yards.\n",O_str_arr[P3_int]);
// 03440 PRINT
b2c_printf("");
// 03450 PRINT
b2c_printf("");
// 03460 IF P3=0 THEN 3540
if(P3_int==0)goto Lbl_03540;
// 03470 PRINT "DO YOU ACCEPT THE PENALTY";
b2c_printf("Do you accept the penalty");

  Lbl_03480:
// 03480 INPUT A$
// Start of Basic INPUT statement 03480
{
    int numargs=1;
    char *args[numargs+1];
    bool echoeol=true;
    while(true){
        fprintf(stdout," ? ");
        int err=input(args,numargs,echoeol);
        if(err==0x03) break;
        if(err || 
            (err += b2c_strtos(&A_str,args,0)) ){
             printf("?Redo from start\n");
        }else{
            break;
        };
    };
}; // End of Basic INPUT statement 03480
// 03490 IF A$="NO" THEN 2910
if(strcmp(A_str,"No")==0)goto Lbl_02910;
// 03500 IF A$="YES" THEN 3660
if(strcmp(A_str,"Yes")==0)goto Lbl_03660;
// 03510 PRINT "TYPE 'YES' OR 'NO'";
b2c_printf("Type 'yes' or 'no'");
// 03520 GOTO 3480
goto Lbl_03480;
// 03530 REM OPPONENT'S STRATEGY ON PENALTY

  Lbl_03540:
// 03540 IF P=1 THEN 3590
if(P_int==1)goto Lbl_03590;
// 03550 IF Y<=0 THEN 3630
if(Y_int<=0)goto Lbl_03630;
// 03560 IF F<0 THEN 3630
if(F_int<0)goto Lbl_03630;
// 03570 IF FNG(1)<3*D-2 THEN 3630
if(FNG_int_arr[1]<3*D_int-2)goto Lbl_03630;
// 03580 GOTO 3650
goto Lbl_03650;

  Lbl_03590:
// 03590 IF Y<=5 THEN 3650
if(Y_int<=5)goto Lbl_03650;
// 03600 IF F<0 THEN 3650
if(F_int<0)goto Lbl_03650;
// 03610 IF D<4 THEN 3630
if(D_int<4)goto Lbl_03630;
// 03620 IF FNG(1)<10 THEN 3650
if(FNG_int_arr[1]<10)goto Lbl_03650;

  Lbl_03630:
// 03630 PRINT "PENALTY REFUSED."
b2c_printf("Penalty refused.\n");
// 03640 GOTO 2910
goto Lbl_02910;

  Lbl_03650:
// 03650 PRINT "PENALTY ACCEPTED."
b2c_printf("Penalty accepted.\n");

  Lbl_03660:
// 03660 LET F=0
F_int = 0;
// 03670 LET D=D-1
D_int = D_int-1;
// 03680 IF P<>P3 THEN 3710
if(P_int!=P3_int)goto Lbl_03710;
// 03690 LET X=X3-FNF(1)*5
X_int = X3_int-FNF_int_arr[1]*5;
// 03700 GOTO 2910
goto Lbl_02910;

  Lbl_03710:
// 03710 LET X=X3+FNF(1)*5
X_int = X3_int+FNF_int_arr[1]*5;
// 03720 GOTO 2910
goto Lbl_02910;
// 03730 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
