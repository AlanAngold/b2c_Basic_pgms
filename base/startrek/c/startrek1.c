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
char*  A1_str;                                    // Basic: A1$ 
int    B3_int;                                    // Basic: B3 
int    B4_int;                                    // Basic: B4 
int    B5_int;                                    // Basic: B5 
int    B9_int;                                    // Basic: B9 
int    C_int_arr[9][2];                           // Basic: C 
char*  C_str;                                     // Basic: C$ 
int    C1_int;                                    // Basic: C1 
int    D_int_arr[8];                              // Basic: D 
int    D0_int;                                    // Basic: D0 
int    D1_int;                                    // Basic: D1 
int    D3_int;                                    // Basic: D3 
int    D4_int;                                    // Basic: D4 
int    D6_int;                                    // Basic: D6 
int    E_int;                                     // Basic: E 
int    E0_int;                                    // Basic: E0 
int    G_int_arr[8][8];                           // Basic: G 
char*  G2_str;                                    // Basic: G2$ 
int    G5_int;                                    // Basic: G5 
int    H_int;                                     // Basic: H 
int    H1_int;                                    // Basic: H1 
int    H8_int;                                    // Basic: H8 
int    HD_int_arr[10];                            // Basic: HD 
int    I_int;                                     // Basic: I 
int    II_int;                                    // Basic: II 
int    IX_int;                                    // Basic: IX 
int    J_int;                                     // Basic: J 
int    J0_int;                                    // Basic: J0 
int    JH_int;                                    // Basic: JH 
int    K_int_arr[3][3];                           // Basic: K 
int    K3_int;                                    // Basic: K3 
int    K7_int;                                    // Basic: K7 
int    K9_int;                                    // Basic: K9 
int    L_int;                                     // Basic: L 
int    N_int_arr[3];                              // Basic: N 
char*  NA_str;                                    // Basic: NA$ 
char*  O1_str;                                    // Basic: O1$ 
int    P_int;                                     // Basic: P 
int    P0_int;                                    // Basic: P0 
int    PO_int;                                    // Basic: PO 
int    Q_int_arr[10];                             // Basic: Q 
char*  Q_str;                                     // Basic: Q$ 
int    Q1_int;                                    // Basic: Q1 
int    Q2_int;                                    // Basic: Q2 
int    Q4_int;                                    // Basic: Q4 
int    Q5_int;                                    // Basic: Q5 
int    R1_int;                                    // Basic: R1 
int    R2_int;                                    // Basic: R2 
int    S_int;                                     // Basic: S 
int    S1_int;                                    // Basic: S1 
int    S2_int;                                    // Basic: S2 
int    S3_int;                                    // Basic: S3 
int    S8_int;                                    // Basic: S8 
int    S9_int;                                    // Basic: S9 
int    T_int;                                     // Basic: T 
int    T0_int;                                    // Basic: T0 
int    T8_int;                                    // Basic: T8 
int    T9_int;                                    // Basic: T9 
int    TI_int;                                    // Basic: TI 
int    W1_int;                                    // Basic: W1 
int    X_int;                                     // Basic: X 
char*  X_str;                                     // Basic: X$ 
char*  X0_str;                                    // Basic: X0$ 
int    X1_int;                                    // Basic: X1 
int    X2_int;                                    // Basic: X2 
int    X3_int;                                    // Basic: X3 
int    X5_int;                                    // Basic: X5 
int    Y_int;                                     // Basic: Y 
int    Y3_int;                                    // Basic: Y3 
int    Z_int_arr[8][8];                           // Basic: Z 
char*  Z_str;                                     // Basic: Z$ 
int    Z1_int;                                    // Basic: Z1 
int    Z2_int;                                    // Basic: Z2 
int    Z3_int;                                    // Basic: Z3 
int    Z4_int;                                    // Basic: Z4 
int    Z5_int;                                    // Basic: Z5 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01600();
void Routine_01860();

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

void Routine_01780(){
    // 01780 FOR I=S1-1 TO S1+1: FOR J=S2-1 TO S2+1
    for(J_int=S2_int-1;J_int<=S2_int+1;J_int++){
        // 01790 IF INT(I+.5)<1 OR INT(I+.5)>8 OR INT(J+.5)<1 OR INT(J+.5)>8 THEN 1810
        if(INT(I_int+0.5)<1||INT(I_int+0.5)>8||INT(J_int+0.5)<1||INT(J_int+0.5)>8)goto Lbl_01810;
        // 01800 A$=">!<":Z1=I:Z2=J: GOSUB 3460: IF Z3=1 THEN 1820
        if(Z3_int==1)goto Lbl_01820;

  Lbl_01810:
        // 01810 NEXT J: NEXT I:D0=0: GOTO 1840
        goto Lbl_01840;

  Lbl_01820:
        // 01820 D0=1:C$="DOCKED":E=E0:P=P0
        P_int = P0_int;
        // 01830 PRINT "SHIELDS DROPPED FOR DOCKING PURPOSES": FOR IX=1 TO 1500: NEXT IX:S=0: GOTO 1850
        goto Lbl_01850;

  Lbl_01840:
        // 01840 IF K3>0 THEN C$="*RED*": GOTO 1850
        goto Lbl_01850;

  Lbl_01850:
        // 01850 IF D(2)>=0 THEN 1880
        if(D_int_arr[2]>=0)goto Lbl_01880;
        // 01860 IF( PEEK(16000)<>32) OR( PEEK(16064)<>32) THEN CLS : PRINT 
        b2c_printf("");
        // 01870 GOTO 02000
        goto Lbl_02000;

  Lbl_01880:
        // 01880 CLS :O1$="---------------------------------": PRINT O1$: FOR I=1 TO 8
        for(I_int=1;I_int<=8;I_int++){
            // 01890 FOR J=(I-1)*24+1 TO(I-1)*24+22 STEP 3: PRINT " "; MID$(Q$,J,3);: NEXT J
            int dummy_1890=0; // Ignore this line.
        }; // End-For(J_int)
        // 01900 ON I GOTO 1910,1920,1930,1940,1950,1960,1970,1980
        switch((int)(I_int)){
            case 1: goto Lbl_01910;
            case 2: goto Lbl_01920;
            case 3: goto Lbl_01930;
            case 4: goto Lbl_01940;
            case 5: goto Lbl_01950;
            case 6: goto Lbl_01960;
            case 7: goto Lbl_01970;
            case 8: goto Lbl_01980;
            default: break; 
        };

  Lbl_01910:
        // 01910 PRINT " STARDATE "; INT(T*10)*.1: GOTO 1990
        goto Lbl_01990;

  Lbl_01920:
        // 01920 PRINT " CONDITION ";C$: GOTO 1990
        goto Lbl_01990;

  Lbl_01930:
        // 01930 PRINT " QUADRANT ";Q1;",";Q2: GOTO 1990
        goto Lbl_01990;

  Lbl_01940:
        // 01940 PRINT " SECTOR ";S1;",";S2: GOTO 1990
        goto Lbl_01990;

  Lbl_01950:
        // 01950 PRINT " PHOTON TORPEDOES "; INT(P): GOTO 1990
        goto Lbl_01990;

  Lbl_01960:
        // 01960 PRINT " TOTAL ENERGY "; INT(E+S): GOTO 1990
        goto Lbl_01990;

  Lbl_01970:
        // 01970 PRINT " SHIELDS "; INT(S): GOTO 1990
        goto Lbl_01990;

  Lbl_01980:
        // 01980 PRINT " KLINGONS REMAINING "; INT(K9)
        b2c_printf(" klingons remaining ");

  Lbl_01990:
        // 01990 GOTO 02000
        goto Lbl_02000;

  Lbl_02000:
        // 02000 RETURN
        return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_02010(){
        // 02010 S8= INT(Z2-.5)*3+ INT(Z1-.5)*24+1
        S8_int = INT(Z2_int-0.5)*3+INT(Z1_int-0.5)*24+1;
        // 02020 IF LEN(A$)<>3 THEN PRINT "ERROR": STOP 
        exit(1);

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM NOTE: Basic language type forced to be:
    // 01010 REM trs1010 - TRS-80 Level II BASIC tokenized file

  Lbl_01020:
    // 01020 CLS 
    ClearScreen(0);
    // 01030 PRINT @210,"S U P E R S T A R T R E K"
    b2c_printf("S u p e r s t a r t r e k\n");
    // 01040 PRINT : PRINT 
    b2c_printf("");
    // 01050 CLEAR 600
    ClearMemory(600,4294967295);
    // 01060 Z$=" "
    GLBpStr=" ";
    Z_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01070 DIM G(8,8),C(9,2),K(3,3),N(3),Z(8,8),D(8): RANDOM 
    RANDOMIZE();
    // 01080 T= INT( RND(0)*20+20)*100:T0=T:T9=25+ INT( RND(0)*10):D0=0:E=3000:E0=E
    E0_int = E_int;
    // 01090 P=10:PO=P:S9=200:S=0:B9=0:K9=0:X$="":X0$=" IS "
    GLBpStr=" is ";
    X0_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01100 Q1= RND(8):Q2= RND(8):S1= RND(8):S2= RND(8)
    S2_int = RND(8);
    // 01110 FOR I=1 TO 9:C(I,1)=0:C(I,2)=0: NEXT I
    int dummy_1110=0; // Ignore this line.
}; // End-For(I_int)
// 01120 C(3,1)=-1:C(2,1)=-1:C(4,1)=-1:C(4,2)=-1:C(5,2)=-1:C(6,2)=-1
C_int_arr[6][2] = -1;
// 01130 C(1,2)=1:C(2,2)=1:C(6,1)=1:C(7,1)=1:C(8,1)=1:C(8,2)=1:C(9,2)=1
C_int_arr[9][2] = 1;
// 01140 FOR I=1 TO 8:D(I)=0: NEXT I
int dummy_1140=0; // Ignore this line.
r* CName(const char*)}; // End-For(I_int)
r* CName(const char*)// 01150 A1$="NAVSRSLRSPHATORSHEDAMCOMXXX"
r* CName(const char*)GLBpStr="Navsrslrsphatorshedamcomxxx";
r* CName(const char*)A1_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
r* CName(const char*)// 01160 FOR I=1 TO 8: FOR J=1 TO 8:K3=0:Z(I,J)=0:R1= RND(0)
r* CName(const char*)R1_int = RND(0);
r* CName(const char*)// 01170 IF R1>.98 THEN K3=3:K9=K9+3: GOTO 1180
r* CName(const char*)goto Lbl_01180;

  Lbl_01180:
r* CName(const char*)// 01180 B3=0: IF RND(0)>.96 THEN B3=1:B9=B9+1
r* CName(const char*)B9_int = B9_int+1;
r* CName(const char*)// 01190 G(I,J)=K3*100+B3*10+ RND(8): NEXT J: NEXT I: IF K9>T9 THEN T9=K9+1
r* CName(const char*)if(K9_int>T9_int) {
r* CName(const char*)}
r* CName(const char*)// 01200 IF B9<>0 THEN 1230
r* CName(const char*)if(B9_int!=0)goto Lbl_01230;
r* CName(const char*)// 01210 IF G(Q1,Q2)<200 THEN G(Q1,Q2)=G(Q1,Q2)+100:K9=K9+1
r* CName(const char*)K9_int = K9_int+1;
r* CName(const char*)// 01220 B9=1:G(Q1,Q2)=G(Q1,Q2)+10:Q1= RND(8):Q2= RND(8)
r* CName(const char*)Q2_int = RND(8);

  Lbl_01230:
r* CName(const char*)// 01230 K7=K9: IF B9<>1 THEN X$="S":X0$=" ARE "
r* CName(const char*)GLBpStr=" are ";
r* CName(const char*)X0_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
r* CName(const char*)// 01240 PRINT "YOUR ORDERS ARE AS FOLLOWES:"
r* CName(const char*)b2c_printf("Your orders are as followes:\n");
r* CName(const char*)// 01250 PRINT " DESTROY THE";K9;"KLINGON WARSHIPS WHICH HAVE INVADED"
r* CName(const char*)b2c_printf(" destroy the %d  destroy theKlingon warships which have invaded\n",K9_int);
r* CName(const char*)// 01260 PRINT " THE GALAXY BEFORE THEY CAN ATTACK FEDERATION HEADQUARTERS"
r* CName(const char*)b2c_printf(" the galaxy before they can attack federation headquarters\n");
r* CName(const char*)// 01270 PRINT " ON STARDATE";T0+T9;" THIS GIVES YOU";T9;"DAYS. THERE";X0$
r* CName(const char*)b2c_printf(" on stardate this gives you %d  this gives youDays. ThereDays. There%s\n",T9_int,X0_str);
r* CName(const char*)// 01280 PRINT " ";B9;"STARBASE";X$" IN THE GALAXY FOR RESUPLYING YOUR SHIP."
r* CName(const char*)b2c_printf("  %d  StarbaseStarbase%sStarbase in the galaxy for resuplying your ship.\n",B9_int,X_str);
r* CName(const char*)// 01290 PRINT : INPUT "ENTER YOUR NAME IN THE CAPTAIN'S LOG";NA$
r* CName(const char*)// Start of Basic INPUT statement 01290
r* CName(const char*){
int numargs=1;
char *args[numargs+1];
bool echoeol=true;
while(true){
    fprintf(stdout,""ENTER YOUR NAME IN THE CAPTAIN'S LOG"");
    int err=input(args,numargs,echoeol);
    if(err==0x03) break;
    if(err || 
        (err += b2c_strtos(&NA_str,args,0)) ){
         printf("?Redo from start\n");
    }else{
        break;
    };
};
r* CName(const char*)}; // End of Basic INPUT statement 01290
r* CName(const char*)// 01300 Z4=Q1:Z5=Q2:K3=0:B3=0:S3=0:G5=0:D4=.5* RND(0):Z(Q1,Q2)=G(Q1,Q2)
r* CName(const char*)Z_int_arr[Q1_int][Q2_int] = G_int_arr[Q1_int][Q2_int];
r* CName(const char*)// 01310 IF Q1<1 OR Q1>8 OR Q2<1 OR Q2>8 THEN 1380
r* CName(const char*)if(Q1_int<1||Q1_int>8||Q2_int<1||Q2_int>8)goto Lbl_01380;
r* CName(const char*)// 01320 REM 
r* CName(const char*)// 01330 K3= INT(G(Q1,Q2)*.01):B3= INT(G(Q1,Q2)*.1)-10*K3
r* CName(const char*)B3_int = INT(G_int_arr[Q1_int][Q2_int]*0.1)-10*K3_int;
r* CName(const char*)// 01340 S3=G(Q1,Q2)-100*K3-10*B3: IF K3=0 THEN 1370
r* CName(const char*)if(K3_int==0)goto Lbl_01370;
r* CName(const char*)// 01350 CLS : PRINT @396,"COMBAT AREA CONDITION RED": IF S>200 THEN 1370
r* CName(const char*)if(S_int>200)goto Lbl_01370;
r* CName(const char*)// 01360 PRINT @463,"SHIELDS DANGEROUSLY LOW"
r* CName(const char*)b2c_printf("Shields dangerously low\n");

  Lbl_01370:
r* CName(const char*)// 01370 FOR I=1 TO 3:K(I,1)=0:K(I,2)=0: NEXT I
r* CName(const char*)int dummy_1370=0; // Ignore this line.
Name(const char*)}; // End-For(I_int)

  Lbl_01380:
Name(const char*)// 01380 FOR I=1 TO 3:K(I,3)=0: NEXT I:Q$=Z$+Z$+Z$+Z$+Z$+Z$+Z$+ LEFT$ (Z$,17)
Name(const char*)GLBpStr=StringCat(StringCat(StringCat(StringCat(StringCat(StringCat(StringCat(Z_str,Z_str),Z_str),Z_str),Z_str),Z_str),Z_str),LEFT$(Z_str,17));
Name(const char*)Q_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
Name(const char*)// 01390 A$="<*>":Z1=S1:Z2=S2: GOSUB 3320: IF K3<1 THEN 1420
Name(const char*)if(K3_int<1)goto Lbl_01420;
Name(const char*)// 01400 FOR I=1 TO K3: GOSUB 3300:A$="+K+":Z1=R1:Z2=R2
Name(const char*)Z2_int = R2_int;
Name(const char*)// 01410 GOSUB 3320:K(I,1)=R1:K(I,1)=R2:K(I,3)=S9*(.5+ RND(0)): NEXT I
Name(const char*)int dummy_1410=0; // Ignore this line.
(const char*)}; // End-For(I_int)

  Lbl_01420:
(const char*)// 01420 IF B3<1 THEN 1440
(const char*)if(B3_int<1)goto Lbl_01440;
(const char*)// 01430 GOSUB 3300:A$=">!<":Z1=R1:B4=R1:Z2=R2:B5=R2: GOSUB 2010
(const char*)Routine_02010();

  Lbl_01440:
(const char*)// 01440 FOR I=1 TO S3: GOSUB 3300:A$=" * ":Z1=R1:Z2=R2: GOSUB 3320: NEXT I
(const char*)int dummy_1440=0; // Ignore this line.
st char*)}; // End-For(I_int)
st char*)// 01450 GOSUB 1780
st char*)Routine_01780();
st char*)// 01460 IF S+E>10 THEN IF E>10 OR D(7)=0 THEN 640
st char*)if(S_int+E_int>10) {
st char*)}
st char*)// 01470 CLS : PRINT @320,"CAPTAIN ";NA$;"! YOU'VE JUST STRANDED YOUR SHIP IN SPACE!"
st char*)b2c_printf("Captain %sCaptain ! You've just stranded your ship in space!\n",NA_str);
st char*)// 01480 PRINT "YOU HAVE INSUFFICIENT MANUVERING ENERGY,";
st char*)b2c_printf("You have insufficient manuvering energy,");
st char*)// 01490 PRINT " AND SHIELD CONTROL.": PRINT "IS PRESENTLY INCAPABLE OF CROSS";
st char*)b2c_printf("Is presently incapable of cross");
st char*)// 01500 PRINT "-CIRUITING TO ENGINE ROOM!!": GOTO 1520
st char*)goto Lbl_01520;
st char*)// 01510 REM 

  Lbl_01520:
st char*)// 01520 PRINT "IT IS STARDATE";T: FOR I=1 TO 1500: NEXT I: GOTO 1530
st char*)goto Lbl_01530;

  Lbl_01530:
st char*)// 01530 CLS : PRINT "THERE WERE";K9;"KLINGON BATTLE CRUISERS LEFT AT"
st char*)b2c_printf("There were %d There wereKlingon battle cruisers left at\n",K9_int);
st char*)// 01540 PRINT "THE END OF YOUR MISSION."
st char*)b2c_printf("The end of your mission.\n");
st char*)// 01550 PRINT : PRINT : IF B9=0 THEN 1590
st char*)if(B9_int==0)goto Lbl_01590;
st char*)// 01560 PRINT "THE FEDERATION IS IN NEED OF A NEW STARSHIP COMMANDER"
st char*)b2c_printf("The federation is in need of a new starship commander\n");
st char*)// 01570 PRINT "FOR A SIMILAR MISSION -- IF THERE IS A VOLUNTEER,"
st char*)b2c_printf("For a similar mission -- if there is a volunteer,\n");
st char*)// 01580 INPUT "LET HIM STEP FORWARD AND ENTER 'AYE'";A$: IF A$="AYE" THEN 1020
st char*)if(strcmp(A_str,"Aye")==0)goto Lbl_01020;

  Lbl_01590:
st char*)// 01590 END 
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
