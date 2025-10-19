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
char* data_01140s[]={"0","1","2","3","3","2","2","1","0","-1"};
char* data_01150s[]={"1","2","3","4","5","4","3","2","1","0"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1140, 10,data_01140s},
    { 1150, 10,data_01150s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int_arr[21];                             // Basic: A 
char*  B_str;                                     // Basic: B$ 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
char*  D_str;                                     // Basic: D$ 
int    D9_int;                                    // Basic: D9 
int    E_int;                                     // Basic: E 
char*  F_str;                                     // Basic: F$ 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    R1_int;                                    // Basic: R1 
int    S_int_arr[2][9];                           // Basic: S 
int    T_int;                                     // Basic: T 
int    X_int;                                     // Basic: X 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02350();
void Routine_02410();

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

void Routine_02350(){
    // 02350 R1=(8*RND(1)+1)
    R1_int = (8*RND(1)+1);
    // 02360 R=INT(R1)
    R_int = INT(R1_int);
    // 02370 P=S(1,R)
    P_int = S_int_arr[1][R_int];
    // 02380 Q=S(2,R)
    Q_int = S_int_arr[2][R_int];
    // 02390 GOTO 02400
    goto Lbl_02400;

  Lbl_02400:
    // 02400 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_02410(){
    // 02410 IF H>=1 THEN 2430
    if(H_int>=1)goto Lbl_02430;
    // 02420 H=1
    H_int = 1;

  Lbl_02430:
    // 02430 IF H<=21 THEN 2450
    if(H_int<=21)goto Lbl_02450;
    // 02440 H=21
    H_int = 21;

  Lbl_02450:
    // 02450 GOTO 02460
    goto Lbl_02460;

  Lbl_02460:
    // 02460 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 RANDOMIZE
    RANDOMIZE();
    // 01010 PRINT TAB(26);"CORRAL"
    b2c_printf("Corral\n");
    // 01020 PRINT TAB(20);"CREATIVE COMPUTING"
    b2c_printf("Creative computing\n");
    // 01030 PRINT TAB(18);"MORRISTOWN, NEW JERSEY"
    b2c_printf("Morristown, new jersey\n");
    // 01040 PRINT
    b2c_printf("");
    // 01050 PRINT
    b2c_printf("");
    // 01060 PRINT
    b2c_printf("");
    // 01070 DIM A(21)
    // 01080 DIM S(2,9)
    // 01090 FOR I=1 TO 2
    for(I_int=1;I_int<=2;I_int++){
        // 01100     FOR J=0 TO 9
        for(J_int=0;J_int<=9;J_int++){
            // 01110         READ S(I,J)
            S_int_arr[I_int][J_int] = Get_Data_Int();
            // 01120     NEXT J
            int dummy_1120=0; // Ignore this line.
        }; // End-For(J_int)
        // 01130 NEXT I
        int dummy_1130=0; // Ignore this line.
    }; // End-For(I_int)
    // 01140 DATA 0,1,2,3,3,2,2,1,0,-1
    // 01150 DATA 1,2,3,4,5,4,3,2,1,0
    // 01160 PRINT "  YOU ARE THE COWBOY.  GO CATCH YOUR HORSE IN THE CORRAL!"
    b2c_printf("  you are the cowboy.  Go catch your horse in the corral!\n");
    // 01170 PRINT "DO YOU WANT FULL INSTRUCTIONS";
    b2c_printf("Do you want full instructions");
    // 01180 INPUT F$
    // Start of Basic INPUT statement 01180
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&F_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01180
    // 01190 IF LEFT$(F$,1)="N" THEN 1260
    if(LEFT$(F_str,1)=='N')goto Lbl_01260;
    // 01200 PRINT "YOU MOVE TOWARD YOUR HORSE 1 TO 5 STEPS AT A TIME."
    b2c_printf("You move toward your horse 1 to 5 steps at a time.\n");
    // 01210 PRINT "IF YOU MORE THAN HALVE THE SEPERATION HE WILL BOLT!"
    b2c_printf("If you more than halve the seperation he will bolt!\n");
    // 01220 PRINT "HE MAY ALSO BOLT WHEN HE IS CLOSE TO THE RAIL"
    b2c_printf("He may also bolt when he is close to the rail\n");
    // 01230 PRINT "WHEN YOU COME WITHIN 2 STEPS HE MAY KICK.  SO LOOKOUT!!"
    b2c_printf("When you come within 2 steps he may kick.  So lookout!!\n");
    // 01240 PRINT "IF YOU WISH TO QUIT AT ANY TIME ENTER 0(ZERO) TO PROMPT"
    b2c_printf("If you wish to quit at any time enter 0(zero) to prompt\n");
    // 01250 PRINT
    b2c_printf("");

  Lbl_01260:
    // 01260 PRINT "AFTER '?' TYPE IN DIGIT FROM 1 TO 5 FOR COWBOY'S NEXT MOVE"
    b2c_printf("After '?' Type in digit from 1 to 5 for cowboy's next move\n");

  Lbl_01270:
    // 01270 C=1
    C_int = 1;
    // 01280 L=1
    L_int = 1;
    // 01290 K=0
    K_int = 0;
    // 01300 M=0
    M_int = 0;
    // 01310 N=0
    N_int = 0;
    // 01320 D9=RND(1)+1.5
    D9_int = RND(1)+1.5;
    // 01330 PRINT "LEVEL OF DIFFICULTY (0-10) :"10-INT((D9-1.5)*10)
    b2c_printf("Level of difficulty (0-10) :");
    // 01340 GOSUB 2350
    Routine_02350();
    // 01350 IF R<=5 THEN 1370
    if(R_int<=5)goto Lbl_01370;
    // 01360 Q=-Q
    Q_int = Q_int;

  Lbl_01370:
    // 01370 H=13+Q
    H_int = 13+Q_int;
    // 01380 GOSUB 2410
    Routine_02410();
    // 01390 T=2+P
    T_int = 2+P_int;
    // 01400 PRINT
    b2c_printf("");

  Lbl_01410:
    // 01410 B$="            "
    GLBpStr="            ";
    B_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01420:
    // 01420 FOR J=1 TO 21
    for(J_int=1;J_int<=21;J_int++){
        // 01430     A(J)=32
        A_int_arr[J_int] = 32;
        // 01440 NEXTJ
        int dummy_1440=0; // Ignore this line.
    }; // End-For(J_int)
    // 01450 A(C)=67
    A_int_arr[C_int] = 67;
    // 01460 A(H)=72
    A_int_arr[H_int] = 72;
    // 01470 PRINT N,"I";
    b2c_printf(" %d IðYµbII\n",N_int);
    // 01480 FOR J=1 TO 21
    for(J_int=1;J_int<=21;J_int++){
        // 01490     PRINT CHR$(A(J));
        b2c_printf("");
        // 01500 NEXT J
        int dummy_1500=0; // Ignore this line.
    }; // End-For(J_int)
    // 01510 PRINT "I",B$;
    b2c_printf("I%sI\n",B_str);
    // 01520 X=ABS(H-C)
    X_int = ABS(H_int-C_int);
    // 01530 L=SGN(H-C)
    L_int = SGN(H_int-C_int);
    // 01540 N=N+1
    N_int = N_int+1;
    // 01550 IF K>0 GOTO 2030
    if(K_int>0)goto Lbl_02030;

  Lbl_01560:
    // 01560 IF N>100 GOTO 2310
    if(N_int>100)goto Lbl_02310;
    // 01570 INPUT D$
    // Start of Basic INPUT statement 01570
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&D_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01570
    // 01580 CHANGE D$ TO Z
    Z_int = atoi(D_str);
    // 01590 DIM Z(10)
    // 01600 D=Z(1)-48
    D_int = Z_int-48;
    // 01610 IF D>0 THEN 1630
    if(D_int>0)goto Lbl_01630;
    // 01620 GOTO1640
    goto Lbl_01640;

  Lbl_01630:
    // 01630 IF D<6 GOTO 1670
    if(D_int<6)goto Lbl_01670;

  Lbl_01640:
    // 01640 IF D=0 THEN 2270
    if(D_int==0)goto Lbl_02270;
    // 01650 PRINT "ILLEGAL MOVE .TRY AGAIN",
    b2c_printf("Illegal move .Try again");
    // 01660 GOTO 1560
    goto Lbl_01560;

  Lbl_01670:
    // 01670 E=C+L*D
    E_int = C_int+L_int*D_int;
    // 01680 IF E<1 THEN 1640
    if(E_int<1)goto Lbl_01640;
    // 01690 IF E>21 THEN 1640
    if(E_int>21)goto Lbl_01640;
    // 01700 C=E
    C_int = E_int;
    // 01710 GOSUB 2350
    Routine_02350();
    // 01720 G=P
    G_int = P_int;
    // 01730 H=H+L*G
    H_int = H_int+L_int*G_int;
    // 01740 GOSUB 2410
    Routine_02410();
    // 01750 IF X<2*D THEN 1770
    if(X_int<2*D_int)goto Lbl_01770;
    // 01760 GOTO 1780
    goto Lbl_01780;

  Lbl_01770:
    // 01770 IF D>1 GOTO 1840
    if(D_int>1)goto Lbl_01840;

  Lbl_01780:
    // 01780 IF H>1 THEN 1800
    if(H_int>1)goto Lbl_01800;
    // 01790 GOTO 1810
    goto Lbl_01810;

  Lbl_01800:
    // 01800 IF H<20 THEN 1930
    if(H_int<20)goto Lbl_01930;

  Lbl_01810:
    // 01810 GOSUB 2350
    Routine_02350();
    // 01820 IF R>2 GOTO 1930
    if(R_int>2)goto Lbl_01930;
    // 01830 IF X>7 GOTO 1410
    if(X_int>7)goto Lbl_01410;

  Lbl_01840:
    // 01840 G=9+2*G
    G_int = 9+2*G_int;
    // 01850 H=H-L*G
    H_int = H_int-L_int*G_int;
    // 01860 L=-L
    L_int = L_int;
    // 01870 GOSUB 2410
    Routine_02410();
    // 01880 IF ABS(H-C)>1 THEN 1910
    if(ABS(H_int-C_int)>1)goto Lbl_01910;
    // 01890 H=H-3*L
    H_int = H_int-3*L_int;
    // 01900 GOSUB 2410
    Routine_02410();

  Lbl_01910:
    // 01910 B$="BOLTED      "
    GLBpStr="Bolted      ";
    B_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01920 GOTO 1420
    goto Lbl_01420;

  Lbl_01930:
    // 01930 IF ABS(H-C)>2 GOTO 1410
    if(ABS(H_int-C_int)>2)goto Lbl_01410;
    // 01940 GOSUB 2350
    Routine_02350();
    // 01950 IF R1>D9 GOTO 2100
    if(R1_int>D9_int)goto Lbl_02100;
    // 01960 GOSUB 2350
    Routine_02350();
    // 01970 K=P+2
    K_int = P_int+2;
    // 01980 M=M+1
    M_int = M_int+1;
    // 01990 H=H-5*L
    H_int = H_int-5*L_int;
    // 02000 GOSUB 2410
    Routine_02410();
    // 02010 B$="KICKED"
    GLBpStr="Kicked";
    B_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02020 GOTO 1420
    goto Lbl_01420;

  Lbl_02030:
    // 02030 IF M>T GOTO 2120
    if(M_int>T_int)goto Lbl_02120;
    // 02040 K=K-1
    K_int = K_int-1;
    // 02050 PRINT
    b2c_printf("");
    // 02060 GOSUB 2350
    Routine_02350();
    // 02070 H=H+L*(P+1)
    H_int = H_int+L_int*(P_int+1);
    // 02080 GOSUB 2410
    Routine_02410();
    // 02090 GOTO1410
    goto Lbl_01410;

  Lbl_02100:
    // 02100 IF H=C THEN 2160
    if(H_int==C_int)goto Lbl_02160;
    // 02110 GOTO 1410
    goto Lbl_01410;

  Lbl_02120:
    // 02120 PRINT 
    b2c_printf("");
    // 02130 PRINT "THOSE KICKS LANDED YOU IN THE HOSPITAL!"
    b2c_printf("Those kicks landed you in the hospital!\n");
    // 02140 PRINT " GET WELL SOON!!"
    b2c_printf(" get well soon!!\n");
    // 02150 GOTO 2270
    goto Lbl_02270;

  Lbl_02160:
    // 02160 FOR J=1 TO 21
    for(J_int=1;J_int<=21;J_int++){
        // 02170     A(J)=32
        A_int_arr[J_int] = 32;
        // 02180 NEXT J
        int dummy_2180=0; // Ignore this line.
    }; // End-For(J_int)
    // 02190 A(C)=35
    A_int_arr[C_int] = 35;
    // 02200 PRINT "I";
    b2c_printf("I");
    // 02210 FOR J=1 TO 21
    for(J_int=1;J_int<=21;J_int++){
        // 02220     PRINT CHR$(A(J));
        b2c_printf("");
        // 02230 NEXT J
        int dummy_2230=0; // Ignore this line.
    }; // End-For(J_int)
    // 02240 PRINT "I"
    b2c_printf("I\n");
    // 02250 PRINT
    b2c_printf("");
    // 02260 PRINT "YIPPEE!!  NOW SEE IF YOU CAN CATCH HIM IN FEWER MOVES"
    b2c_printf("Yippee!!  Now see if you can catch him in fewer moves\n");

  Lbl_02270:
    // 02270 PRINT "ANOTHER ROUNDUP";
    b2c_printf("Another roundup");
    // 02280 INPUT F$
    // Start of Basic INPUT statement 02280
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&F_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02280
    // 02290 IF LEFT$(F$,1)="Y" THEN 1270
    if(LEFT$(F_str,1)=='Y')goto Lbl_01270;
    // 02300 GOTO 2340
    goto Lbl_02340;

  Lbl_02310:
    // 02310 PRINT 
    b2c_printf("");
    // 02320 PRINT "ENOUGH!! YOU'D DO BETTER AS CAMP COOK!"
    b2c_printf("Enough!! You'd do better as camp cook!\n");
    // 02330 GOTO 2270
    goto Lbl_02270;

  Lbl_02340:
    // 02340 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
