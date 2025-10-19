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
char*  A_str;                                     // Basic: A$ 
char*  ANS_str;                                   // Basic: ANS$ 
char*  C_str;                                     // Basic: C$ 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    I_int;                                     // Basic: I 
char*  I_str;                                     // Basic: I$ 
int    L_int;                                     // Basic: L 
int    N_int;                                     // Basic: N 
int    O_int;                                     // Basic: O 
int    Q_int;                                     // Basic: Q 
char*  Q_str;                                     // Basic: Q$ 
int    Q0_int;                                    // Basic: Q0 
int    R_int;                                     // Basic: R 
char*  R_str;                                     // Basic: R$ 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
int    U_int;                                     // Basic: U 
int    W_int;                                     // Basic: W 
int    XX_int;                                    // Basic: XX 
int    Z_int;                                     // Basic: Z 
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
    // 01000 REM NOTE: Basic language type forced to be:
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 CLS: PRINT@413, "WARFISH"
    b2c_printf("Warfish\n");
    // 01030 PRINT: PRINT TAB(7) "COPYRIGHT 1979 COMPUTING MORRISTOWN NJ"
    b2c_printf("Copyright 1979 computing morristown nj\n");
    // 01040 PRINT@960, "";: INPUT "DO YOU NEED INSTRUCTIONS";I$
    // Start of Basic INPUT statement 01040
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""DO YOU NEED INSTRUCTIONS"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&I_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01040
    // 01050 Q0=RND(0)
    Q0_int = RND(0);
    // 01060 REM

  Lbl_01070:
    // 01070 IF LEFT$(I$,1)="N" THEN CLS: GOTO 1080
    goto Lbl_01080;

  Lbl_01080:
    // 01080 PRINT"PRINT THE NAME OF YOUR SUBMARINE";
    b2c_printf("Print the name of your submarine");
    // 01090 INPUT A$
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
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01090
    // 01100 T=26
    T_int = 26;

  Lbl_01110:
    // 01110 D=INT(RND(0)*10)
    D_int = INT(RND(0)*10);
    // 01120 IF D<6 THEN 1270
    if(D_int<6)goto Lbl_01270;
    // 01130 IF D<>6 AND D<>7 THEN 1160
    if(D_int!=6&&D_int!=7)goto Lbl_01160;
    // 01140 R$="DESTROYER"
    GLBpStr="Destroyer";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01150 W=2100
    W_int = 2100;

  Lbl_01160:
    // 01160 IF D<>8 THEN1190
    if(D_int!=8)goto Lbl_01190;
    // 01170 R$="DESTROYER ESCORT"
    GLBpStr="Destroyer escort";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01180 W=1360
    W_int = 1350;

  Lbl_01190:
    // 01190 IF D<>9 THEN 1220
    if(D_int!=9)goto Lbl_01220;
    // 01200 R$="TORPEDO BOAT"
    GLBpStr="Torpedo boat";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01210 W=70
    W_int = 70;

  Lbl_01220:
    // 01220 IF D=6 OR D=7 THEN 1250
    if(D_int==6||D_int==7)goto Lbl_01250;
    // 01230 Q=1
    Q_int = 1;
    // 01240 GOTO 1260
    goto Lbl_01260;

  Lbl_01250:
    // 01250 Q=2
    Q_int = 2;

  Lbl_01260:
    // 01260 PRINT"JAPANESE"; R$; " IS ATTACKING."
    b2c_printf("Japanese%sJapanese is attacking.\n",R_str);

  Lbl_01270:
    // 01270 IF D>=6 THEN 1300
    if(D_int>=6)goto Lbl_01300;
    // 01280 A=INT(RND(0)*10)
    A_int = INT(RND(0)*10);
    // 01290 REM

  Lbl_01300:
    // 01300 PRINT"ORDERS, COMMANDER";
    b2c_printf("Orders, commander");
    // 01310 INPUT C$
    // Start of Basic INPUT statement 01310
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
    }; // End of Basic INPUT statement 01310
    // 01320 CLS: C$=MID$(C$,1,1)
    GLBpStr=MID$(C_str,1,1);
    C_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01330 IF C$="P" THEN 1370
    if(strcmp(C_str,"P")==0)goto Lbl_01370;
    // 01340 IF C$="T" THEN 1990
    if(strcmp(C_str,"T")==0)goto Lbl_01990;
    // 01350 IF C$="D" THEN 2260
    if(strcmp(C_str,"D")==0)goto Lbl_02260;
    // 01360 GOTO 1300
    goto Lbl_01300;

  Lbl_01370:
    // 01370 IF D>5 OR Q>0 THEN 1970
    if(D_int>5||Q_int>0)goto Lbl_01970;
    // 01380 IF A>=4 THEN 1460
    if(A_int>=4)goto Lbl_01460;
    // 01390 R$="FREIGHTER"
    GLBpStr="Freighter";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01400 IF A<>0 AND A<>1 THEN 1420
    if(A_int!=0&&A_int!=1)goto Lbl_01420;
    // 01410 W=6600
    W_int = 6500;

  Lbl_01420:
    // 01420 IF A<>2 THEN 560
    if(A_int!=2)goto Lbl_01440;
    // 01430 W=7600
    W_int = 7500;

  Lbl_01440:
    // 01440 IF A<>3 THEN 1460
    if(A_int!=3)goto Lbl_01460;
    // 01450 W=8100
    W_int = 8100;

  Lbl_01460:
    // 01460 IF A<>7 AND A<>8 THEN 1520
    if(A_int!=7&&A_int!=8)goto Lbl_01520;
    // 01470 R$="TANKER"
    GLBpStr="Tanker";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01480 IF A<>8 THEN 1510
    if(A_int!=8)goto Lbl_01510;
    // 01490 W=10000
    W_int = 10000;
    // 01500 GOTO 1520
    goto Lbl_01520;

  Lbl_01510:
    // 01510 W=9600
    W_int = 9500;

  Lbl_01520:
    // 01520 IF A<>4 AND A<>5 THEN 1580
    if(A_int!=4&&A_int!=5)goto Lbl_01580;
    // 01530 R$="TRANSPORT"
    GLBpStr="Transport";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01540 IF A<>5 THEN 1570
    if(A_int!=5)goto Lbl_01570;
    // 01550 W=11600
    W_int = 11500;
    // 01560 GOTO 1580
    goto Lbl_01580;

  Lbl_01570:
    // 01570 W=8800
    W_int = 8800;

  Lbl_01580:
    // 01580 IF A<>6 THEN 1610
    if(A_int!=6)goto Lbl_01610;
    // 01590 R$="AMMUNITION SHIP"
    GLBpStr="Ammunition ship";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01600 W=9660
    W_int = 9650;

  Lbl_01610:
    // 01610 IF A>=9 OR A=6 THEN 1630
    if(A_int>=9||A_int==6)goto Lbl_01630;
    // 01620 Q=1
    Q_int = 1;

  Lbl_01630:
    // 01630 IF A<>6 THEN 1650
    if(A_int!=6)goto Lbl_01650;
    // 01640 Q=1
    Q_int = 1;

  Lbl_01650:
    // 01650 IF A<9 THEN 1970
    if(A_int<9)goto Lbl_01970;
    // 01660 E=INT(RND(0)*10)
    E_int = INT(RND(0)*10);
    // 01670 IF E<>0 THEN 1700
    if(E_int!=0)goto Lbl_01700;
    // 01680 R$="BATTLESHIP"
    GLBpStr="Battleship";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01690 W=33600
    W_int = 33500;

  Lbl_01700:
    // 01700 IF E<>1 THEN 1730
    if(E_int!=1)goto Lbl_01730;
    // 01710 R$="AIRCRAFT CARRIER"
    GLBpStr="Aircraft carrier";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01720 W=25700
    W_int = 25700;

  Lbl_01730:
    // 01730 IF E<>2 THEN 1760
    if(E_int!=2)goto Lbl_01760;
    // 01740 R$="HEAVY CRUISER"
    GLBpStr="Heavy cruiser";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01750 W=9900
    W_int = 9900;

  Lbl_01760:
    // 01760 IF E<>3 THEN 1790
    if(E_int!=3)goto Lbl_01790;
    // 01770 R$="LIGHT CRUISER"
    GLBpStr="Light cruiser";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01780 W=9600
    W_int = 9600;

  Lbl_01790:
    // 01790 IF E<>4 AND E<>5 THEN 1820
    if(E_int!=4&&E_int!=5)goto Lbl_01820;
    // 01800 R$="DESTROYER"
    GLBpStr="Destroyer";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01810 W=2100
    W_int = 2100;

  Lbl_01820:
    // 01820 IF E<>6 AND E<>7 THEN 1850
    if(E_int!=6&&E_int!=7)goto Lbl_01850;
    // 01830 R$="SUBMARINE"
    GLBpStr="Submarine";
    R_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01840 W=1600
    W_int = 1500;

  Lbl_01850:
    // 01850 IF E<>8 AND E<>9 THEN 1870
    if(E_int!=8&&E_int!=9)goto Lbl_01870;
    // 01860 W=1360
    W_int = 1350;

  Lbl_01870:
    // 01870 IF E<=5 THEN 1890
    if(E_int<=5)goto Lbl_01890;
    // 01880 Q=1
    Q_int = 1;

  Lbl_01890:
    // 01890 IF E<>4 AND E<>5 THEN 1910
    if(E_int!=4&&E_int!=5)goto Lbl_01910;
    // 01900 Q=2
    Q_int = 2;

  Lbl_01910:
    // 01910 IF E<>2 AND E<>3 THEN 1930
    if(E_int!=2&&E_int!=3)goto Lbl_01930;
    // 01920 Q=3
    Q_int = 3;

  Lbl_01930:
    // 01930 IF E<>1 THEN 1950
    if(E_int!=1)goto Lbl_01950;
    // 01940 W=4
    W_int = 4;

  Lbl_01950:
    // 01950 IF E<>0 THEN 1970
    if(E_int!=0)goto Lbl_01970;
    // 01960 Q=7
    Q_int = 7;

  Lbl_01970:
    // 01970 PRINT"JAPANESE "; R$; " -"; W; "TONS."
    b2c_printf("Japanese %sJapanese  - - %d  -Tons.\n",R_str,W_int);
    // 01980 GOTO  1300
    goto Lbl_01300;

  Lbl_01990:
    // 01990 IF Q>=1 THEN 2020
    if(Q_int>=1)goto Lbl_02020;
    // 02000 PRINT"NO JAPANESE SHIPS IN SIGHT - JUST OCEAN."
    b2c_printf("No japanese ships in sight - just ocean.\n");
    // 02010 IF Q<1 THEN 1300
    if(Q_int<1)goto Lbl_01300;

  Lbl_02020:
    // 02020 PRINTT; "TORPEDOES LEFT."
    b2c_printf(" %d ьюTorpedoes left.\n",T_int);

  Lbl_02030:
    // 02030 PRINT"NUMBER OF TORPEDOES TO FIRE";
    b2c_printf("Number of torpedoes to fire");
    // 02040 INPUT R
    // Start of Basic INPUT statement 02040
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&R_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02040
    // 02050 IF R<0 OR T-R<0 THEN 2030
    if(R_int<0||T_int-R_int<0)goto Lbl_02030;
    // 02060 IF R<>INT(R) THEN 2030
    if(R_int!=INT(R_int))goto Lbl_02030;
    // 02070 T=T-R
    T_int = T_int-R_int;

  Lbl_02080:
    // 02080 S=INT(RND(0)*10)
    S_int = INT(RND(0)*10);
    // 02090 IF S>R THEN 2080
    if(S_int>R_int)goto Lbl_02080;
    // 02100 Q=Q-S
    Q_int = Q_int-S_int;
    // 02110 IF Q<=0 THEN 2130
    if(Q_int<=0)goto Lbl_02130;
    // 02120 Q$="DAMAGED"
    GLBpStr="Damaged";
    Q_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_02130:
    // 02130 IF Q>=1 THEN 2170
    if(Q_int>=1)goto Lbl_02170;
    // 02140 Q$="SUNK"
    GLBpStr="Sunk";
    Q_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02150 O=O+W
    O_int = O_int+W_int;
    // 02160 L=L+1
    L_int = L_int+1;

  Lbl_02170:
    // 02170 PRINTR; "TORPEDOES FIRED -"; S; "HITS ";
    b2c_printf(" %d ьюTorpedoes fired -Torpedoes fired - %d Torpedoes fired -Hits Hits \n",R_int,S_int);
    // 02180 IF S<>0 THEN 2200
    if(S_int!=0)goto Lbl_02200;
    // 02190 PRINT
    b2c_printf("");

  Lbl_02200:
    // 02200 IF S<=0 THEN 2220
    if(S_int<=0)goto Lbl_02220;
    // 02210 PRINT"- ";R$;" ";Q$; "."
    b2c_printf("- %s-   %s .\n",R_str,Q_str);

  Lbl_02220:
    // 02220 IF D>5 AND Q>0 THEN 2450
    if(D_int>5&&Q_int>0)goto Lbl_02450;
    // 02230 IF T<1 THEN 2480
    if(T_int<1)goto Lbl_02480;
    // 02240 IF Q<1 THEN 1110
    if(Q_int<1)goto Lbl_01110;
    // 02250 GOTO  1300
    goto Lbl_01300;

  Lbl_02260:
    // 02260 IF D>=6 THEN 2280
    if(D_int>=6)goto Lbl_02280;
    // 02270 PRINT" THE USS "; A$; " IS NOT UNDER ATTACK."
    b2c_printf(" the uss %s the uss  is not under attack.\n",A_str);

  Lbl_02280:
    // 02280 IF D<6 THEN 1300
    if(D_int<6)goto Lbl_01300;
    // 02290 U=INT(RND(0)*10)*260
    U_int = INT(RND(0)*10)*250;
    // 02300 PRINT"DISTANCE OF ";R$;TAB(32);"DEPTH OF USS ";A$
    b2c_printf("Distance of %sDistance of Distance of Depth of uss Depth of uss %s\n",R_str,A_str);
    // 02310 FOR XX=1 TO 63:PRINT"=";:NEXT
    int dummy_2310=0; // Ignore this line.
};

  Lbl_02320:
// 02320 PRINTU;"YARDS"; TAB(32);Z;"FEET"
b2c_printf(" %d ьюYardsYardsYards %d YardsFeet\n",U_int,Z_int);
// 02330 U=U-260
U_int = U_int-250;
// 02340 Z=Z+25
Z_int = Z_int+25;
// 02350 IF U>-260 THEN 2320
if(U_int>-250)goto Lbl_02320;
// 02360 IF R$="TORPEDO BOAT" THEN 2400
if(strcmp(R_str,"Torpedo boat")==0)goto Lbl_02400;
// 02370 N=INT(RND(0)*10)*25+60
N_int = INT(RND(0)*10)*25+50;
// 02380 IF N+26>Z AND N-26<Z THEN 2430
if(N_int+26>Z_int&&N_int-26<Z_int)goto Lbl_02430;
// 02390 U=0:Z=0
Z_int = 0;

  Lbl_02400:
// 02400 PRINT:PRINT"THE USS ";A$;" IS UNHURT."
b2c_printf("The uss %sThe uss  is unhurt.\n",A_str);
// 02410 Q=0
Q_int = 0;
// 02420 GOTO 1110
goto Lbl_01110;

  Lbl_02430:
// 02430 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY DEPTH CHARGES."
b2c_printf("The uss %sThe uss  has been sunk by depth charges.\n",A_str);
// 02440 GOTO 2520
goto Lbl_02520;

  Lbl_02450:
// 02450 FOR I=1 TO 1600:NEXT I
int dummy_2450=0; // Ignore this line.
r* CName(const char*)}; // End-For(I_int)
r* CName(const char*)// 02460 CLS:PRINT"THE USS ";A$;" HAS BEEN SUNK BY GUNFIRE."
r* CName(const char*)b2c_printf("The uss %sThe uss  has been sunk by gunfire.\n",A_str);
r* CName(const char*)// 02470 GOTO 2520
r* CName(const char*)goto Lbl_02520;

  Lbl_02480:
r* CName(const char*)// 02480 FOR I=1 TO 1600:NEXT I
r* CName(const char*)int dummy_2480=0; // Ignore this line.
Name(const char*)}; // End-For(I_int)
Name(const char*)// 02490 CLS:PRINT"THE USS ";A$;" HAS EXPENDED ALL ITS TORPEDOES."
Name(const char*)b2c_printf("The uss %sThe uss  has expended all its torpedoes.\n",A_str);
Name(const char*)// 02500 IF O<=0 THEN 2520
Name(const char*)if(O_int<=0)goto Lbl_02520;
Name(const char*)// 02510 PRINT:PRINT"CONGRATULATIONS ON A SUCCESSFUL DEPLOYMENT."
Name(const char*)b2c_printf("Congratulations on a successful deployment.\n");

  Lbl_02520:
Name(const char*)// 02520 PRINT
Name(const char*)b2c_printf("");
Name(const char*)// 02530 PRINT"THE SUBMARINE USS ";A$;" HAS SUNK A TOTAL OF"; L;"SHIPS."
Name(const char*)b2c_printf("The submarine uss %sThe submarine uss  has sunk a total of has sunk a total of %d  has sunk a total ofShips.\n",A_str,L_int);
Name(const char*)// 02540 PRINT"TOTAL ENEMY TONNAGE SUNK: ";O;"TONS"
Name(const char*)b2c_printf("Total enemy tonnage sunk:  %d Total enemy tonnage sunk: Tons\n",O_int);
Name(const char*)// 02550 PRINT:PRINT
Name(const char*)b2c_printf("");
Name(const char*)// 02560 INPUT "DO YOU WANT TO TRY AGAIN";ANS$
Name(const char*)// Start of Basic INPUT statement 02560
Name(const char*){
r* CName(const char*)int numargs=1;
r* CName(const char*)char *args[numargs+1];
r* CName(const char*)bool echoeol=true;
r* CName(const char*)while(true){
fprintf(stdout,""DO YOU WANT TO TRY AGAIN"");
int err=input(args,numargs,echoeol);
if(err==0x03) break;
if(err || 
    (err += b2c_strtos(&ANS_str,args,0)) ){
     printf("?Redo from start\n");
}else{
    break;
};
r* CName(const char*)};
Name(const char*)}; // End of Basic INPUT statement 02560
Name(const char*)// 02570 IF LEFT$(ANS$,1)="Y" THEN 1070 ELSE END
Name(const char*)if(LEFT$(ANS_str,1)=='Y')goto Lbl_01070;
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
