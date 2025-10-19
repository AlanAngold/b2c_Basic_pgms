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
int    A1_int;                                    // Basic: A1 
int    A2_int;                                    // Basic: A2 
char*  B_str_arr[7];                              // Basic: B$ 
int    B1_int;                                    // Basic: B1 
int    C_int;                                     // Basic: C 
char*  C_str;                                     // Basic: C$ 
int    G_int;                                     // Basic: G 
int    G1_int;                                    // Basic: G1 
int    G2_int;                                    // Basic: G2 
int    H_int_arr[20];                             // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    L_int;                                     // Basic: L 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
char*  R_str;                                     // Basic: R$ 
int    S_int;                                     // Basic: S 
int    S1_int;                                    // Basic: S1 
int    S2_int;                                    // Basic: S2 
int    S3_int;                                    // Basic: S3 
int    T_int_arr[5];                              // Basic: T 
int    T1_int_arr[5];                             // Basic: T1 
int    T2_int_arr[5];                             // Basic: T2 
int    T3_int_arr[5];                             // Basic: T3 
int    T6_int;                                    // Basic: T6 
int    X_int;                                     // Basic: X 
int    Z_int;                                     // Basic: Z 
int    Z1_int;                                    // Basic: Z1 
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
    // 01000 PRINT TAB(33);"HOCKEY"
    b2c_printf("Hockey\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 REM ROBERT PUOPOLO ALG. 1 140 MCCOWAN 6/7/73 HOCKEY
    // 01040 LET X=1
    X_int = 1;
    // 01050 PRINT:PRINT:PRINT
    b2c_printf("");

  Lbl_01060:
    // 01060 PRINT "WOULD YOU LIKE THE INSTRUCTIONS";:INPUT C$
    // Start of Basic INPUT statement 01060
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
    }; // End of Basic INPUT statement 01060
    // 01070 PRINT
    b2c_printf("");
    // 01080 IF C$="NO" THEN 1120
    if(strcmp(C_str,"No")==0)goto Lbl_01120;
    // 01090 IF C$="YES" THEN 1110
    if(strcmp(C_str,"Yes")==0)goto Lbl_01110;
    // 01100 PRINT "ANSWER YES OR NO!!":GOTO 1060 
    goto Lbl_01060;

  Lbl_01110:
    // 01110 GOTO 2860
    goto Lbl_02860;

  Lbl_01120:
    // 01120 DIM A$(7),B$(7),H(20),T(5),T1(5),T2(5),T3(5)
    // 01130 PRINT "ENTER THE TWO TEAMS";:INPUT A$(7),B$(7) 
    // Start of Basic INPUT statement 01130
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str_arr[7],args,0)) ||
                (err += b2c_strtos(&B_str_arr[7],args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01130
    // 01140 PRINT
    b2c_printf("");
    // 01150 PRINT "ENTER THE NUMBER OF MINUTES IN A GAME";:INPUT T6
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
                (err += b2c_strtoi(&T6_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01150
    // 01160 PRINT
    b2c_printf("");
    // 01170 IF T6<1 THEN 110:PRINT 
    b2c_printf("");
    // 01180 PRINT "WOULD THE " A$(7) " COACH ENTER HIS TEAM" 
    b2c_printf("Would the %sWould the  coach enter his team\n",A_str_arr[7]);
    // 01190 PRINT
    b2c_printf("");
    // 01200 FOR I=1 TO 6:PRINT "PLAYER"I;:INPUT A$(I):NEXT I:PRINT 
    b2c_printf("");
    // 01210 PRINT "WOULD THE " B$(7) " COACH DO THE SAME"
    b2c_printf("Would the %sWould the  coach do the same\n",B_str_arr[7]);
    // 01220 PRINT
    b2c_printf("");
    // 01230 FOR T=1 TO 6:PRINT "PLAYER"T;:INPUT B$(T):NEXT T:PRINT 
    b2c_printf("");
    // 01240 PRINT "INPUT THE REFEREE FOR THIS GAME";:INPUT R$  
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
                (err += b2c_strtos(&R_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01240
    // 01250 PRINT:PRINT TAB(10);A$(7) " STARTING LINEUP" 
    b2c_printf("%sEd)/Y starting lineup\n",A_str_arr[7]);
    // 01260 FOR T=1 TO 6:PRINT A$(T):NEXT T  
    int dummy_1260=0; // Ignore this line.
}; // End-For(T_int_arr[0])
// 01270 PRINT:PRINT TAB(10);B$(7)" STARTING LINEUP"
b2c_printf("%s,d)/Y starting lineup\n",B_str_arr[7]);
// 01280 FOR T=1 TO 6:PRINT B$(T):NEXT T:PRINT
b2c_printf("");
// 01290 PRINT "WE'RE READY FOR TONIGHTS OPENING FACE-OFF."
b2c_printf("We're ready for tonights opening face-off.\n");
// 01300 PRINT R$ " WILL DROP THE PUCK BETWEEN " A$(2) " AND " B$(2)
b2c_printf("%s@d)/Y will drop the puck between  will drop the puck between %s will drop the puck between  and  and %s\n",R_str,A_str_arr[2],B_str_arr[2]);
// 01310 FOR L=1 TO T6:IF L=1 THEN 1330
if(L_int==1)goto Lbl_01330;
// 01320 PRINT "AND WE'RE READY FOR THE FACE-OFF" 
b2c_printf("And we're ready for the face-off\n");

  Lbl_01330:
// 01330 C=INT(2*RND(X))+1:ON C GOTO 1340,1350
switch((int)(C_int)){
    case 1: goto Lbl_01340;
    case 2: goto Lbl_01350;
    default: break; 
};

  Lbl_01340:
// 01340 PRINT A$(7) " HAS CONTROL OF THE PUCK":GOTO 1360
goto Lbl_01360;

  Lbl_01350:
// 01350 PRINT B$(7) " HAS CONTROL." 
b2c_printf("%s¶Gíÿ has control.\n",B_str_arr[7]);

  Lbl_01360:
// 01360 PRINT "PASS";:INPUT P:FOR N=1 TO 3:H(N)=0:NEXT N 
int dummy_1360=0; // Ignore this line.
r* CName(const char*)}; // End-For(N_int)
r* CName(const char*)// 01370 IF P<0 THEN 1360
r* CName(const char*)if(P_int<0)goto Lbl_01360;
r* CName(const char*)// 01380 IF P>3 THEN 1360
r* CName(const char*)if(P_int>3)goto Lbl_01360;

  Lbl_01390:
r* CName(const char*)// 01390 FOR J=1 TO (P+2) 
r* CName(const char*)for(J_int=1;J_int<=(P_int+2);J_int++){
// 01400 H(J)=INT(5*RND(X))+1 
H_int_arr[J_int] = INT(5*RND(X_int))+1;
// 01410 NEXT J:IF H(J-1)=H(J-2) THEN 1390
if(H_int_arr[J_int-1]==H_int_arr[J_int-2])goto Lbl_01390;
// 01420 IF P+2<3 THEN 1450
if(P_int+2<3)goto Lbl_01450;
// 01430 IF H(J-1)=H(J-3) THEN 1390
if(H_int_arr[J_int-1]==H_int_arr[J_int-3])goto Lbl_01390;
// 01440 IF H(J-2)=H(J-3) THEN 1390
if(H_int_arr[J_int-2]==H_int_arr[J_int-3])goto Lbl_01390;

  Lbl_01450:
// 01450 IF P=0 THEN 1470
if(P_int==0)goto Lbl_01470;
// 01460 GOTO 1600
goto Lbl_01600;

  Lbl_01470:
// 01470 INPUT "SHOT";S:IF S<1 THEN 1470
if(S_int<1)goto Lbl_01470;
// 01480 IF S>4 THEN 1470
if(S_int>4)goto Lbl_01470;
// 01490 ON C GOTO 1500,1590
switch((int)(C_int)){
    case 1: goto Lbl_01500;
    case 2: goto Lbl_01590;
    default: break; 
};

  Lbl_01500:
// 01500 PRINT A$(H(J-1));:G=H(J-1):G1=0:G2=0 
G2_int = 0;

  Lbl_01510:
// 01510 ON S GOTO 1520,1540,1550,1570
switch((int)(S_int)){
    case 1: goto Lbl_01520;
    case 2: goto Lbl_01540;
    case 3: goto Lbl_01550;
    case 4: goto Lbl_01570;
    default: break; 
};

  Lbl_01520:
// 01520 PRINT " LET'S A BOOMER GO FROM THE RED LINE!!" 
b2c_printf(" let's a boomer go from the red line!!\n");
// 01530 Z=10:GOTO 2000
goto Lbl_02000;

  Lbl_01540:
// 01540 PRINT " FLIPS A WRISTSHOT DOWN THE ICE"
b2c_printf(" flips a wristshot down the ice\n");

  Lbl_01550:
// 01550 PRINT " BACKHANDS ONE IN ON THE GOALTENDER" 
b2c_printf(" backhands one in on the goaltender\n");
// 01560 Z=25:GOTO 2000
goto Lbl_02000;

  Lbl_01570:
// 01570 PRINT " SNAPS A LONG FLIP SHOT"
b2c_printf(" snaps a long flip shot\n");
// 01580 Z=17:GOTO 2000
goto Lbl_02000;

  Lbl_01590:
// 01590 PRINT B$(H(J-1));:G1=0:G2=0:G=H(J-1):GOTO 1510
goto Lbl_01510;

  Lbl_01600:
// 01600 ON C GOTO 1610,1750
switch((int)(C_int)){
    case 1: goto Lbl_01610;
    case 2: goto Lbl_01750;
    default: break; 
};

  Lbl_01610:
// 01610 ON P GOTO 1620,1650,1680
switch((int)(P_int)){
    case 1: goto Lbl_01620;
    case 2: goto Lbl_01650;
    case 3: goto Lbl_01680;
    default: break; 
};

  Lbl_01620:
// 01620 PRINT A$(H(J-2)) " LEADS " A$(H(J-1)) " WITH A PERFECT PASS." 
b2c_printf("%s¶Gíÿ leads  leads %s leads  with a perfect pass.\n",A_str_arr[H_int_arr[J_int-2]],A_str_arr[H_int_arr[J_int-1]]);
// 01630 PRINT A$(H(J-1)) " CUTTING IN!!!"
b2c_printf("%s?d)/Y cutting in!!!\n",A_str_arr[H_int_arr[J_int-1]]);
// 01640 G=H(J-1):G1=H(J-2):G2=0:Z1=3:GOTO 1880
goto Lbl_01880;

  Lbl_01650:
// 01650 PRINT A$(H(J-2)) " GIVES TO A STREAKING " A$(H(J-1))
b2c_printf("%s¶Gíÿ gives to a streaking  gives to a streaking %s\n",A_str_arr[H_int_arr[J_int-2]],A_str_arr[H_int_arr[J_int-1]]);
// 01660 PRINT A$(H(J-3)) " COMES DOWN ON " B$(5) " AND " B$(4)
b2c_printf("%s)d)/Y comes down on  comes down on %s comes down on  and  and %s\n",A_str_arr[H_int_arr[J_int-3]],B_str_arr[5],B_str_arr[4]);
// 01670 G=H(J-3):G1=H(J-1):G2=H(J-2):Z1=2:GOTO 1880
goto Lbl_01880;

  Lbl_01680:
// 01680 PRINT "OH MY GOD!! A ' 4 ON 2 ' SITUATION"
b2c_printf("Oh my god!! A ' 4 on 2 ' situation\n");
// 01690 PRINT A$(H(J-3)) " LEADS " A$(H(J-2))
b2c_printf("%sCd)/Y leads  leads %s\n",A_str_arr[H_int_arr[J_int-3]],A_str_arr[H_int_arr[J_int-2]]);
// 01700 PRINT A$(H(J-2)) " IS WHEEELING THROUGH CENTER."
b2c_printf("%sCd)/Y is wheeeling through center.\n",A_str_arr[H_int_arr[J_int-2]]);
// 01710 PRINT A$(H(J-2)) " GIVES AND GOES WITH " A$(H(J-1))
b2c_printf("%s+d)/Y gives and goes with  gives and goes with %s\n",A_str_arr[H_int_arr[J_int-2]],A_str_arr[H_int_arr[J_int-1]]);
// 01720 PRINT "PRETTY PASSING!"
b2c_printf("Pretty passing!\n");
// 01730 PRINT A$(H(J-1)) " DROPS IT TO " A$(H(J-4))
b2c_printf("%s+d)/Y drops it to  drops it to %s\n",A_str_arr[H_int_arr[J_int-1]],A_str_arr[H_int_arr[J_int-4]]);
// 01740 G=H(J-4):G1=J(J-1):G2=H(J-2):Z1=1:GOTO 1880
goto Lbl_01880;

  Lbl_01750:
// 01750 ON P GOTO 1760,1780,1830
switch((int)(P_int)){
    case 1: goto Lbl_01760;
    case 2: goto Lbl_01780;
    case 3: goto Lbl_01830;
    default: break; 
};

  Lbl_01760:
// 01760 PRINT B$(H(J-1)) " HITS " B$(H(J-2)) " FLYING DOWN THE LEFT SIDE" 
b2c_printf("%s¶Gíÿ hits  hits %s hits  flying down the left side\n",B_str_arr[H_int_arr[J_int-1]],B_str_arr[H_int_arr[J_int-2]]);
// 01770 G=H(J-2):G1=H(J-1):G2=0:Z1=3:GOTO 1880
goto Lbl_01880;

  Lbl_01780:
// 01780 PRINT "IT'S A ' 3 ON 2 '!"
b2c_printf("It's a ' 3 on 2 '!\n");
// 01790 PRINT "ONLY " A$(4) " AND " A$(5) " ARE BACK."
b2c_printf("Only %sOnly  and  and %s and  are back.\n",A_str_arr[4],A_str_arr[5]);
// 01800 PRINT B$(H(J-2)) " GIVES OFF TO " B$(H(J-1))
b2c_printf("%s.d)/Y gives off to  gives off to %s\n",B_str_arr[H_int_arr[J_int-2]],B_str_arr[H_int_arr[J_int-1]]);
// 01810 PRINT B$(H(J-1)) " DROPS TO " B$(H(J-3))
b2c_printf("%s.d)/Y drops to  drops to %s\n",B_str_arr[H_int_arr[J_int-1]],B_str_arr[H_int_arr[J_int-3]]);
// 01820 G=H(J-3):G1=H(J-1):G2=H(J-2):Z1=2:GOTO 1880 
goto Lbl_01880;

  Lbl_01830:
// 01830 PRINT " A ' 3 ON 2 ' WITH A ' TRAILER '!" 
b2c_printf(" a ' 3 on 2 ' with a ' trailer '!\n");
// 01840 PRINT B$(H(J-4)) " GIVES TO " B$(H(J-2)) " WHO SHUFFLES IT OFF TO" 
b2c_printf("%spd)/Y gives to  gives to %s gives to  who shuffles it off to\n",B_str_arr[H_int_arr[J_int-4]],B_str_arr[H_int_arr[J_int-2]]);
// 01850 PRINT B$(H(J-1)) " WHO FIRES A WING TO WING PASS TO "
b2c_printf("%spd)/Y who fires a wing to wing pass to \n",B_str_arr[H_int_arr[J_int-1]]);
// 01860 PRINT B$(H(J-3)) " AS HE CUTS IN ALONE!!"    
b2c_printf("%spd)/Y as he cuts in alone!! as he cuts in alone!!\n",B_str_arr[H_int_arr[J_int-3]]);
// 01870 G=H(J-3):G1=H(J-1):G2=H(J-2):Z1=1:GOTO 1880 
goto Lbl_01880;

  Lbl_01880:
// 01880 PRINT "SHOT";:INPUT S:IF S>4 THEN 1880:IF S<1 THEN 1880
if(S_int<1)goto Lbl_01880;
// 01890 ON C GOTO 1900,1990
switch((int)(C_int)){
    case 1: goto Lbl_01900;
    case 2: goto Lbl_01990;
    default: break; 
};

  Lbl_01900:
// 01900 PRINT A$(G);:ON S GOTO 1910,1930,1950,1970 
switch((int)(S_int)){
    case 1: goto Lbl_01910;
    case 2: goto Lbl_01930;
    case 3: goto Lbl_01950;
    case 4: goto Lbl_01970;
    default: break; 
};

  Lbl_01910:
// 01910 PRINT " LET'S A BIG SLAP SHOT GO!!"  
b2c_printf(" let's a big slap shot go!!");
// 01920 Z=4:Z=Z+Z1:GOTO 2000
goto Lbl_02000;

  Lbl_01930:
// 01930 PRINT " RIPS A WRIST SHOT OFF" 
b2c_printf(" rips a wrist shot off\n");
// 01940 Z=2:Z=Z+Z1:GOTO 2000
goto Lbl_02000;

  Lbl_01950:
// 01950 PRINT " GETS A BACKHAND OFF" 
b2c_printf(" gets a backhand off\n");
// 01960 Z=3:Z=Z+Z1:GOTO 2000
goto Lbl_02000;

  Lbl_01970:
// 01970 PRINT " SNAPS OFF A SNAP SHOT"   
b2c_printf(" snaps off a snap shot");
// 01980 Z=2:Z=Z+Z1:GOTO 2000
goto Lbl_02000;

  Lbl_01990:
// 01990 PRINT B$(G);:ON S GOTO 1910,1930,1950,1970 
switch((int)(S_int)){
    case 1: goto Lbl_01910;
    case 2: goto Lbl_01930;
    case 3: goto Lbl_01950;
    case 4: goto Lbl_01970;
    default: break; 
};

  Lbl_02000:
// 02000 PRINT "AREA";:INPUT A:IF A<1 THEN 2000
if(A_int<1)goto Lbl_02000;
// 02010 IF A>4 THEN 2000
if(A_int>4)goto Lbl_02000;
// 02020 ON C GOTO 2030,2040
switch((int)(C_int)){
    case 1: goto Lbl_02030;
    case 2: goto Lbl_02040;
    default: break; 
};

  Lbl_02030:
// 02030 S2=S2+1:GOTO 2050 
goto Lbl_02050;

  Lbl_02040:
// 02040 S3=S3+1
S3_int = S3_int+1;

  Lbl_02050:
// 02050 A1=INT(4*RND(X))+1:IF A<>A1 THEN 2340
if(A_int!=A1_int)goto Lbl_02340;

  Lbl_02060:
// 02060 H(20)=INT(100*RND(X))+1
H_int_arr[20] = INT(100*RND(X_int))+1;
// 02070 IF INT(H(20)/Z)=H(20)/Z THEN 2290
if(INT(H_int_arr[20]/Z_int)==H_int_arr[20]/Z_int)goto Lbl_02290;
// 02080 ON C GOTO 2090,2100
switch((int)(C_int)){
    case 1: goto Lbl_02090;
    case 2: goto Lbl_02100;
    default: break; 
};

  Lbl_02090:
// 02090 PRINT "GOAL " A$(7):H(9)=H(9)+1:GOTO 2110 
goto Lbl_02110;

  Lbl_02100:
// 02100 PRINT "SCORE " B$(7):H(8)=H(8)+1   
H_int_arr[8] = H_int_arr[8]+1;

  Lbl_02110:
// 02110 FOR B1=1 TO 25:PRINT CHR$(7);:NEXT B1:PRINT
b2c_printf("");
// 02120 PRINT "SCORE: ";:IF H(8)>H(9) THEN 2140
if(H_int_arr[8]>H_int_arr[9])goto Lbl_02140;
// 02130 PRINT A$(7)":";H(9),B$(7)":";H(8):GOTO 2150
goto Lbl_02150;

  Lbl_02140:
// 02140 PRINT B$(7)":";H(8),A$(7)":";H(9)  
b2c_printf("%s¶Gíÿ:: %d :%s::: %d :\n",B_str_arr[7],H_int_arr[8],A_str_arr[7],H_int_arr[9]);

  Lbl_02150:
// 02150 ON C GOTO 2160,2220
switch((int)(C_int)){
    case 1: goto Lbl_02160;
    case 2: goto Lbl_02220;
    default: break; 
};

  Lbl_02160:
// 02160 PRINT "GOAL SCORED BY: " A$(G):IF G1=0 THEN 2190
if(G1_int==0)goto Lbl_02190;
// 02170 IF G2=0 THEN 2200
if(G2_int==0)goto Lbl_02200;
// 02180 PRINT " ASSISTED BY: " A$(G1) " AND " A$(G2):GOTO 2210 
goto Lbl_02210;

  Lbl_02190:
// 02190 PRINT " UNASSISTED.":GOTO 2210
goto Lbl_02210;

  Lbl_02200:
// 02200 PRINT " ASSISTED BY: " A$(G1)
b2c_printf(" assisted by: %s\n",A_str_arr[G1_int]);

  Lbl_02210:
// 02210 T(G)=T(G)+1:T1(G1)=T1(G1)+1:T1(G2)=T1(G2)+1:GOTO 2680
goto Lbl_02680;

  Lbl_02220:
// 02220 PRINT "GOAL SCORED BY: " B$(G);
b2c_printf("Goal scored by: %sGoal scored by: \n",B_str_arr[G_int]);
// 02230 IF G1=0 THEN 2260
if(G1_int==0)goto Lbl_02260;
// 02240 IF G2=0 THEN 2270
if(G2_int==0)goto Lbl_02270;
// 02250 PRINT " ASSISTED BY: " B$(G1) " AND " B$(G2):GOTO 2280 
goto Lbl_02280;

  Lbl_02260:
// 02260 PRINT " UNASSISTED":GOTO 2280
goto Lbl_02280;

  Lbl_02270:
// 02270 PRINT " ASSISTED BY: " B$(G1):GOTO 2280
goto Lbl_02280;

  Lbl_02280:
// 02280 T2(G)=T2(G)+1:T3(G1)=T3(G1)+1:T3(G2)=T3(G2)+1:GOTO 2680
goto Lbl_02680;

  Lbl_02290:
// 02290 A2=INT(100*RND(X))+1:IF INT(A2/4)=A2/4 THEN 2310
if(INT(A2_int/4)==A2_int/4)goto Lbl_02310;
// 02300 GOTO 2340
goto Lbl_02340;

  Lbl_02310:
// 02310 ON C GOTO 2320,2330
switch((int)(C_int)){
    case 1: goto Lbl_02320;
    case 2: goto Lbl_02330;
    default: break; 
};

  Lbl_02320:
// 02320 PRINT "SAVE " B$(6) " --  REBOUND":GOTO 2060
goto Lbl_02060;

  Lbl_02330:
// 02330 PRINT "SAVE " A$(6) " --  FOLLOW UP":GOTO 2060
goto Lbl_02060;

  Lbl_02340:
// 02340 S1=INT(6*RND(X))+1 
S1_int = INT(6*RND(X_int))+1;
// 02350 ON C GOTO 2360,2520
switch((int)(C_int)){
    case 1: goto Lbl_02360;
    case 2: goto Lbl_02520;
    default: break; 
};

  Lbl_02360:
// 02360 ON S1 GOTO 2370,2400,2430,2440,2470,2490 
switch((int)(S1_int)){
    case 1: goto Lbl_02370;
    case 2: goto Lbl_02400;
    case 3: goto Lbl_02430;
    case 4: goto Lbl_02440;
    case 5: goto Lbl_02470;
    case 6: goto Lbl_02490;
    default: break; 
};

  Lbl_02370:
// 02370 PRINT "KICK SAVE AND A BEAUTY BY " B$(6)
b2c_printf("Kick save and a beauty by %s\n",B_str_arr[6]);
// 02380 PRINT "CLEARED OUT BY " B$(3)
b2c_printf("Cleared out by %s\n",B_str_arr[3]);
// 02390 GOTO 1330 
goto Lbl_01330;

  Lbl_02400:
// 02400 PRINT "WHAT A SPECTACULAR GLOVE SAVE BY " B$(6)
b2c_printf("What a spectacular glove save by %s\n",B_str_arr[6]);
// 02410 PRINT "AND " B$(6) " GOLFS IT INTO THE CROWD"
b2c_printf("And %sAnd  golfs it into the crowd\n",B_str_arr[6]);
// 02420 GOTO 2680
goto Lbl_02680;

  Lbl_02430:
// 02430 PRINT "SKATE SAVE ON A LOW STEAMER BY " B$(6):GOTO 1330 
goto Lbl_01330;

  Lbl_02440:
// 02440 PRINT "PAD SAVE BY " B$(6) " OFF THE STICK" 
b2c_printf("Pad save by %sPad save by  off the stick\n",B_str_arr[6]);
// 02450 PRINT "OF "A$(G) " AND " B$(6) " COVERS UP"
b2c_printf("Of %sOf  and  and %s and  covers up\n",A_str_arr[G_int],B_str_arr[6]);
// 02460 GOTO 2680
goto Lbl_02680;

  Lbl_02470:
// 02470 PRINT "WHISTLES ONE OVER THE HEAD OF " B$(6) 
b2c_printf("Whistles one over the head of %s\n",B_str_arr[6]);
// 02480 GOTO 1330 
goto Lbl_01330;

  Lbl_02490:
// 02490 PRINT B$(6) " MAKES A FACE SAVE!! AND HE IS HURT"
b2c_printf("%s¶Gíÿ makes a face save!! And he is hurt\n",B_str_arr[6]);
// 02500 PRINT "THE DEFENSEMAN " B$(5) " COVERS UP FOR HIM" 
b2c_printf("The defenseman %sThe defenseman  covers up for him\n",B_str_arr[5]);
// 02510 GOTO 2680
goto Lbl_02680;

  Lbl_02520:
// 02520 ON S1 GOTO 2530,2550,2580,2610,2630,2660 
switch((int)(S1_int)){
    case 1: goto Lbl_02530;
    case 2: goto Lbl_02550;
    case 3: goto Lbl_02580;
    case 4: goto Lbl_02610;
    case 5: goto Lbl_02630;
    case 6: goto Lbl_02660;
    default: break; 
};

  Lbl_02530:
// 02530 PRINT "STICK SAVE BY " A$(6) 
b2c_printf("Stick save by %s\n",A_str_arr[6]);
// 02540 PRINT "AND CLEARED OUT BY " A$(4):GOTO 1330 
goto Lbl_01330;

  Lbl_02550:
// 02550 PRINT "OH MY GOD!! " B$(G) " RATTLES ONE OFF THE POST" 
b2c_printf("Oh my god!! %sOh my god!!  rattles one off the post\n",B_str_arr[G_int]);
// 02560 PRINT "TO THE RIGHT OF " A$(6) " AND " A$(6) " COVERS "; 
b2c_printf("To the right of %sTo the right of  and  and %s and  covers  covers \n",A_str_arr[6],A_str_arr[6]);
// 02570 PRINT "ON THE LOOSE PUCK!":GOTO 2680 
goto Lbl_02680;

  Lbl_02580:
// 02580 PRINT "SKATE SAVE BY " A$(6)
b2c_printf("Skate save by %s\n",A_str_arr[6]);
// 02590 PRINT A$(6) " WHACKS THE LOOSE PUCK INTO THE STANDS" 
b2c_printf("%sQd)/Y whacks the loose puck into the stands\n",A_str_arr[6]);
// 02600 GOTO 2680
goto Lbl_02680;

  Lbl_02610:
// 02610 PRINT "STICK SAVE BY " A$(6) " AND HE CLEARS IT OUT HIMSELF" 
b2c_printf("Stick save by %sStick save by  and he clears it out himself\n",A_str_arr[6]);
// 02620 GOTO 1330 
goto Lbl_01330;

  Lbl_02630:
// 02630 PRINT "KICKED OUT BY " A$(6) 
b2c_printf("Kicked out by %s\n",A_str_arr[6]);
// 02640 PRINT "AND IT REBOUNDS ALL THE WAY TO CENTER ICE"  
b2c_printf("And it rebounds all the way to center ice");
// 02650 GOTO 1330 
goto Lbl_01330;

  Lbl_02660:
// 02660 PRINT "GLOVE SAVE " A$(6) " AND HE HANGS ON" 
b2c_printf("Glove save %sGlove save  and he hangs on\n",A_str_arr[6]);
// 02670 GOTO 2680
goto Lbl_02680;

  Lbl_02680:
// 02680 NEXT L:FOR N=1 TO 30:PRINT CHR$(7);:NEXT N:PRINT "THAT'S THE SIREN"
b2c_printf("That's the siren\n");
// 02690 PRINT:PRINT TAB(15);"FINAL SCORE:"
b2c_printf("Final score:\n");
// 02700 IF H(8)>H(9) THEN 2720
if(H_int_arr[8]>H_int_arr[9])goto Lbl_02720;
// 02710 PRINT A$(7)":";H(9),B$(7)":";H(8):GOTO 2730
goto Lbl_02730;

  Lbl_02720:
// 02720 PRINT B$(7)":";H(8),A$(7)":";H(9)
b2c_printf("%s¶Gíÿ:: %d :%s::: %d \n",B_str_arr[7],H_int_arr[8],A_str_arr[7],H_int_arr[9]);

  Lbl_02730:
// 02730 PRINT: PRINT TAB(10);"SCORING SUMMARY":PRINT
b2c_printf("");
// 02740 PRINT TAB(25);A$(7)
b2c_printf("%s\n",A_str_arr[7]);
// 02750 PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"
b2c_printf("NameGoalsAssists\n");
// 02760 PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
b2c_printf("----------------\n");
// 02770 FOR I=1 TO 5:PRINT TAB(5);A$(I);TAB(21);T(I);TAB(36);T1(I) 
b2c_printf("%sUd)/YUd)/Y %d Ud)/YUd)/Y %d \n",A_str_arr[I_int],T_int_arr[I_int],T1_int_arr[I_int]);
// 02780 NEXT I:PRINT 
b2c_printf("");
// 02790 PRINT TAB(25);B$(7)
b2c_printf("%s\n",B_str_arr[7]);
// 02800 PRINT TAB(5);"NAME";TAB(20);"GOALS";TAB(35);"ASSISTS"  
b2c_printf("NameGoalsAssists");
// 02810 PRINT TAB(5);"----";TAB(20);"-----";TAB(35);"-------"
b2c_printf("----------------\n");
// 02820 FOR T=1 TO 5:PRINT TAB(5);B$(T);TAB(21);T2(T);TAB(36);T3(T)
b2c_printf("%sad)/Yad)/Y %d ad)/Yad)/Y %d \n",B_str_arr[T_int_arr[0]],T2_int_arr[T_int_arr[0]],T3_int_arr[T_int_arr[0]]);
// 02830 NEXT T:PRINT 
b2c_printf("");
// 02840 PRINT "SHOTS ON NET":PRINT A$(7)":";S2:PRINT B$(7)":";S3 
b2c_printf("%sad)/Y:: %d \n",B_str_arr[7],S3_int);
// 02850 END

  Lbl_02860:
// 02860 PRINT: PRINT "THIS IS A SIMULATED HOCKEY GAME."
b2c_printf("This is a simulated hockey game.\n");
// 02870 PRINT "QUESTION     RESPONSE"
b2c_printf("Question     response\n");
// 02880 PRINT "PASS         TYPE IN THE NUMBER OF PASSES YOU WOULD"
b2c_printf("Pass         type in the number of passes you would\n");
// 02890 PRINT "             LIKE TO MAKE, FROM 0 TO 3."
b2c_printf("             like to make, from 0 to 3.\n");
// 02900 PRINT "SHOT         TYPE THE NUMBER CORRESPONDING TO THE SHOT"
b2c_printf("Shot         type the number corresponding to the shot\n");
// 02910 PRINT "             YOU WANT TO MAKE.  ENTER:"
b2c_printf("             you want to make.  Enter:\n");
// 02920 PRINT "             1 FOR A SLAPSHOT"
b2c_printf("             1 for a slapshot\n");
// 02930 PRINT "             2 FOR A WRISTSHOT"
b2c_printf("             2 for a wristshot\n");
// 02940 PRINT "             3 FOR A BACKHAND"
b2c_printf("             3 for a backhand\n");
// 02950 PRINT "             4 FOR A SNAP SHOT"
b2c_printf("             4 for a snap shot\n");
// 02960 PRINT "AREA         TYPE IN THE NUMBER CORRESPONDING TO"
b2c_printf("Area         type in the number corresponding to\n");
// 02970 PRINT "             THE AREA YOU ARE AIMING AT.  ENTER:"
b2c_printf("             the area you are aiming at.  Enter:\n");
// 02980 PRINT "             1 FOR UPPER LEFT HAND CORNER"
b2c_printf("             1 for upper left hand corner\n");
// 02990 PRINT "             2 FOR UPPER RIGHT HAND CORNER"
b2c_printf("             2 for upper right hand corner\n");
// 03000 PRINT "             3 FOR LOWER LEFT HAND CORNER"
b2c_printf("             3 for lower left hand corner\n");
// 03010 PRINT "             4 FOR LOWER RIGHT HAND CORNER"
b2c_printf("             4 for lower right hand corner\n");
// 03020 PRINT
b2c_printf("");
// 03030 PRINT "AT THE START OF THE GAME, YOU WILL BE ASKED FOR THE NAMES"
b2c_printf("At the start of the game, you will be asked for the names\n");
// 03040 PRINT "OF YOUR PLAYERS.  THEY ARE ENTERED IN THE ORDER: "
b2c_printf("Of your players.  They are entered in the order: \n");
// 03050 PRINT "LEFT WING, CENTER, RIGHT WING, LEFT DEFENSE,"
b2c_printf("Left wing, center, right wing, left defense,\n");
// 03060 PRINT "RIGHT DEFENSE, GOALKEEPER.  ANY OTHER INPUT REQUIRED WILL"
b2c_printf("Right defense, goalkeeper.  Any other input required will\n");
// 03070 PRINT "HAVE EXPLANATORY INSTRUCTIONS."
b2c_printf("Have explanatory instructions.\n");
// 03080 GOTO 1120
goto Lbl_01120;
// 03090 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
