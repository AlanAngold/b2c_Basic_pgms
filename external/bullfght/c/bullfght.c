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
char* data_01360s[]={"SUPERB","GOOD","FAIR","POOR","AWFUL"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1360,  5,data_01360s},
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
int    B_int;                                     // Basic: B 
char*  B_str;                                     // Basic: B$ 
int    C_int;                                     // Basic: C 
int    D_int_arr[10];                             // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    FNA_int_arr[10];                           // Basic: FNA 
int    FNC_int_arr[10];                           // Basic: FNC 
int    FND_int_arr[10];                           // Basic: FND 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
char*  L_str_arr[5];                              // Basic: L$ 
int    M_int;                                     // Basic: M 
int    Q_int;                                     // Basic: Q 
int    T_int;                                     // Basic: T 
int    Z_int;                                     // Basic: Z 
char*  Z_str;                                     // Basic: Z$ 
int    Z1_int;                                    // Basic: Z1 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02520();
void Routine_02850();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused K
int FNA(int K){
    int rtn=INT(RND(1)*2+1);
    return(rtn);
}

#pragma argsused Q
int FND(int Q){
    int rtn=(4.5+L_int/6-(D_int_arr[1]+D_int_arr[2])*2.5+4*D_int_arr[4]+2*D_int_arr[5]-IPower(D_int_arr[3],2)/120-A_int);
    return(rtn);
}

#pragma argsused Q
int FNC(int Q){
    int rtn=FND_int_arr[Q_int]*RND(1);
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

void Routine_02520(){
    // 02520 B=3/A*RND(1)
    B_int = 3/A_int*RND(1);
    // 02530 IF B<.37 THEN 2650
    if(B_int<0.37)goto Lbl_02650;
    // 02540 IF B<.5 THEN 2630
    if(B_int<0.5)goto Lbl_02630;
    // 02550 IF B<.63 THEN 2610
    if(B_int<0.63)goto Lbl_02610;
    // 02560 IF B<.87 THEN 2590
    if(B_int<0.87)goto Lbl_02590;
    // 02570 C=.1
    C_int = 0.1;
    // 02580 GOTO 2660
    goto Lbl_02660;

  Lbl_02590:
    // 02590 C=.2
    C_int = 0.2;
    // 02600 GOTO 2660
    goto Lbl_02660;

  Lbl_02610:
    // 02610 C=.3
    C_int = 0.3;
    // 02620 GOTO 2660
    goto Lbl_02660;

  Lbl_02630:
    // 02630 C=.4
    C_int = 0.4;
    // 02640 GOTO 2660
    goto Lbl_02660;

  Lbl_02650:
    // 02650 C=.5
    C_int = 0.5;

  Lbl_02660:
    // 02660 T=INT(10*C+.2)
    T_int = INT(10*C_int+0.2);
    // 02670 PRINT "THE ";A$;B$;" DID A ";L$(T);" JOB."
    b2c_printf("The %sThe %sThe  did a  did a %s did a  job.\n",A_str,B_str,L_str_arr[T_int]);
    // 02680 IF 4>T THEN 2810
    if(4>T_int)goto Lbl_02810;
    // 02690 IF 5=T THEN 2780
    if(5==T_int)goto Lbl_02780;
    // 02700 ON FNA(K) GOTO 2740,1860
    switch((int)(FNA_int_arr[K_int])){
        case 1: goto Lbl_02740;
        case 2: goto Lbl_02760;
        default: break; 
    };
    // 02710 IF A$="TOREAD" THEN 2730
    if(strcmp(A_str,"Toread")==0)goto Lbl_02730;
    // 02720 PRINT "ONE OF THE HORSES OF THE ";A$;B$;" WAS KILLED."
    b2c_printf("One of the horses of the %sOne of the horses of the %sOne of the horses of the  was killed.\n",A_str,B_str);

  Lbl_02730:
    // 02730 ON FNA(K) GOTO 2740,1860
    switch((int)(FNA_int_arr[K_int])){
        case 1: goto Lbl_02740;
        case 2: goto Lbl_02760;
        default: break; 
    };

  Lbl_02740:
    // 02740 PRINT "ONE OF THE ";A$;B$;" WAS KILLED."
    b2c_printf("One of the %sOne of the %sOne of the  was killed.\n",A_str,B_str);
    // 02750 GOTO 2810
    goto Lbl_02810;

  Lbl_02760:
    // 02760 PRINT "NO ";A$;B$;" WERE KILLED."
    b2c_printf("No %sNo %sNo  were killed.\n",A_str,B_str);
    // 02770 GOTO 2810
    goto Lbl_02810;

  Lbl_02780:
    // 02780 IF A$="TOREAD" THEN 2800
    if(strcmp(A_str,"Toread")==0)goto Lbl_02800;
    // 02790 PRINT FNA(K);"OF THE HORSES OF THE ";A$;B$;" KILLED."
    b2c_printf(" %d –—åÝ[Of the horses of the Of the horses of the %sOf the horses of the %sOf the horses of the  killed.\n",FNA_int_arr[K_int],A_str,B_str);

  Lbl_02800:
    // 02800 PRINT FNA(K);"OF THE ";A$;B$;" KILLED."
    b2c_printf(" %d ØÅÑÿOf the Of the %sOf the %sOf the  killed.\n",FNA_int_arr[K_int],A_str,B_str);

  Lbl_02810:
    // 02810 PRINT
    b2c_printf("");
    // 02820 GOTO 02830
    goto Lbl_02830;

  Lbl_02830:
    // 02830 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 02840 REM

void Routine_02850(){

  Lbl_02850:
    // 02850 INPUT A$
    // Start of Basic INPUT statement 02850
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
    }; // End of Basic INPUT statement 02850
    // 02860 IF A$="YES" THEN 2900
    if(strcmp(A_str,"Yes")==0)goto Lbl_02900;
    // 02870 IF A$="NO" THEN 2920
    if(strcmp(A_str,"No")==0)goto Lbl_02920;
    // 02880 PRINT "INCORRECT ANSWER - - PLEASE TYPE 'YES' OR 'NO'."
    b2c_printf("Incorrect answer - - please type 'yes' or 'no'.\n");
    // 02890 GOTO 2850
    goto Lbl_02850;

  Lbl_02900:
    // 02900 Z1=1
    Z1_int = 1;
    // 02910 GOTO 2930
    goto Lbl_02930;

  Lbl_02920:
    // 02920 Z1=2
    Z1_int = 2;

  Lbl_02930:
    // 02930 GOTO 02940
    goto Lbl_02940;

  Lbl_02940:
    // 02940 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(34);"BULL"
    b2c_printf("Bull\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 DEF FNA(K)=INT(RND(1)*2+1)
    // 01030 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01040 L=1
    L_int = 1;
    // 01050 PRINT "DO YOU WANT INSTRUCTIONS";
    b2c_printf("Do you want instructions");
    // 01060 INPUT Z$
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
                (err += b2c_strtos(&Z_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01060
    // 01070 IF Z$="NO" THEN 1270
    if(strcmp(Z_str,"No")==0)goto Lbl_01270;
    // 01080 PRINT "HELLO, ALL YOU BLOODLOVERS AND AFICIONADOS."
    b2c_printf("Hello, all you bloodlovers and aficionados.\n");
    // 01090 PRINT "HERE IS YOUR BIG CHANCE TO KILL A BULL."
    b2c_printf("Here is your big chance to kill a bull.\n");
    // 01100 PRINT
    b2c_printf("");
    // 01110 PRINT "ON EACH PASS OF THE BULL, YOU MAY TRY"
    b2c_printf("On each pass of the bull, you may try\n");
    // 01120 PRINT "0 - VERONICA (DANGEROUS INSIDE MOVE OF THE CAPE)"
    b2c_printf("0 - veronica (dangerous inside move of the cape)\n");
    // 01130 PRINT "1 - LESS DANGEROUS OUTSIDE MOVE OF THE CAPE"
    b2c_printf("1 - less dangerous outside move of the cape\n");
    // 01140 PRINT "2 - ORDINARY SWIRL OF THE CAPE."
    b2c_printf("2 - ordinary swirl of the cape.\n");
    // 01150 PRINT
    b2c_printf("");
    // 01160 PRINT "INSTEAD OF THE ABOVE, YOU MAY TRY TO KILL THE BULL"
    b2c_printf("Instead of the above, you may try to kill the bull\n");
    // 01170 PRINT "ON ANY TURN: 4 (OVER THE HORNS), 5 (IN THE CHEST)."
    b2c_printf("On any turn: 4 (over the horns), 5 (in the chest).\n");
    // 01180 PRINT "BUT IF I WERE YOU,"
    b2c_printf("But if i were you,\n");
    // 01190 PRINT "I WOULDN'T TRY IT BEFORE THE SEVENTH PASS."
    b2c_printf("I wouldn't try it before the seventh pass.\n");
    // 01200 PRINT
    b2c_printf("");
    // 01210 PRINT "THE CROWD WILL DETERMINE WHAT AWARD YOU DESERVE"
    b2c_printf("The crowd will determine what award you deserve\n");
    // 01220 PRINT "(POSTHUMOUSLY IF NECESSARY)."
    b2c_printf("(posthumously if necessary).\n");
    // 01230 PRINT "THE BRAVER YOU ARE, THE BETTER THE AWARD YOU RECIEVE."
    b2c_printf("The braver you are, the better the award you recieve.\n");
    // 01240 PRINT
    b2c_printf("");
    // 01250 PRINT "THE BETTER THE JOB THE PICADORES AND TOREADORES DO,"
    b2c_printf("The better the job the picadores and toreadores do,\n");
    // 01260 PRINT "THE BETTER YOUR CHANCES ARE."
    b2c_printf("The better your chances are.\n");

  Lbl_01270:
    // 01270 PRINT
    b2c_printf("");
    // 01280 PRINT
    b2c_printf("");
    // 01290 D(5)=1
    D_int_arr[5] = 1;
    // 01300 D(4)=1
    D_int_arr[4] = 1;
    // 01310 DIM L$(5)
    // 01320 A=INT(RND(1)*5+1)
    A_int = INT(RND(1)*5+1);
    // 01330 FOR I=1 TO 5
    for(I_int=1;I_int<=5;I_int++){
        // 01340 READ L$(I)
        L_str_arr[I_int] = Get_Data_String();
        // 01350 NEXT I
        int dummy_1350=0; // Ignore this line.
    }; // End-For(I_int)
    // 01360 DATA "SUPERB","GOOD","FAIR","POOR","AWFUL"
    // 01370 PRINT "YOU HAVE DRAWN A ";L$(A);" BULL."
    b2c_printf("You have drawn a %sYou have drawn a  bull.\n",L_str_arr[A_int]);
    // 01380 IF A>4 THEN 1410
    if(A_int>4)goto Lbl_01410;
    // 01390 IF A<2 THEN 1430
    if(A_int<2)goto Lbl_01430;
    // 01400 GOTO 1450
    goto Lbl_01450;

  Lbl_01410:
    // 01410 PRINT "YOU'RE LUCKY."
    b2c_printf("You're lucky.\n");
    // 01420 GOTO 1450
    goto Lbl_01450;

  Lbl_01430:
    // 01430 PRINT "GOOD LUCK.  YOU'LL NEED IT."
    b2c_printf("Good luck.  You'll need it.\n");
    // 01440 PRINT
    b2c_printf("");

  Lbl_01450:
    // 01450 PRINT
    b2c_printf("");
    // 01460 A$="PICADO"
    GLBpStr="Picado";
    A_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01470 B$="RES"
    GLBpStr="Res";
    B_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01480 GOSUB 2520
    Routine_02520();
    // 01490 D(1)=C
    D_int_arr[1] = C_int;
    // 01500 A$="TOREAD"
    GLBpStr="Toread";
    A_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01510 B$="ORES"
    GLBpStr="Ores";
    B_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01520 GOSUB 2520
    Routine_02520();
    // 01530 D(2)=C
    D_int_arr[2] = C_int;

  Lbl_01540:
    // 01540 PRINT
    b2c_printf("");
    // 01550 PRINT
    b2c_printf("");
    // 01560 IF Z=1 THEN 2210
    if(Z_int==1)goto Lbl_02210;
    // 01570 D(3)=D(3)+1
    D_int_arr[3] = D_int_arr[3]+1;
    // 01580 PRINT "PASS NUMBER";D(3)
    b2c_printf("Pass number %d \n",D_int_arr[3]);
    // 01590 IF D(3)<3 THEN 1650
    if(D_int_arr[3]<3)goto Lbl_01650;
    // 01600 PRINT "HERE COMES THE BULL.  TRY FOR A KILL";
    b2c_printf("Here comes the bull.  Try for a kill");
    // 01610 GOSUB 2850
    Routine_02850();
    // 01620 IF Z1=1 THEN 2050
    if(Z1_int==1)goto Lbl_02050;
    // 01630 PRINT "CAPE MOVE";
    b2c_printf("Cape move");
    // 01640 GOTO 1700
    goto Lbl_01700;

  Lbl_01650:
    // 01650 PRINT "THE BULL IS CHARGING AT YOU!  YOU ARE THE MATADOR--"
    b2c_printf("The bull is charging at you!  You are the matador--\n");
    // 01660 PRINT "DO YOU WANT TO KILL THE BULL";
    b2c_printf("Do you want to kill the bull");
    // 01670 GOSUB 2850
    Routine_02850();
    // 01680 IF Z1=1 THEN 2050
    if(Z1_int==1)goto Lbl_02050;
    // 01690 PRINT "WHAT MOVE DO YOU MAKE WITH THE CAPE";
    b2c_printf("What move do you make with the cape");

  Lbl_01700:
    // 01700 INPUT E
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
                (err += b2c_strtoi(&E_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01700
    // 01710 IF E<>INT(ABS(E)) THEN 1730
    if(E_int!=INT(ABS(E_int)))goto Lbl_01730;
    // 01720 IF E<3 THEN 1760
    if(E_int<3)goto Lbl_01760;

  Lbl_01730:
    // 01730 PRINT "DON'T PANIC, YOU IDIOT!  PUT DOWN A CORRECT NUMBER"
    b2c_printf("Don't panic, you idiot!  Put down a correct number\n");
    // 01740 GOTO 1700
    goto Lbl_01700;
    // 01750 REM

  Lbl_01760:
    // 01760 IF E=0 THEN 1820
    if(E_int==0)goto Lbl_01820;
    // 01770 IF E=1 THEN 1800
    if(E_int==1)goto Lbl_01800;
    // 01780 M=.5
    M_int = 0.5;
    // 01790 GOTO 1830
    goto Lbl_01830;

  Lbl_01800:
    // 01800 M=2
    M_int = 2;
    // 01810 GOTO 1830
    goto Lbl_01830;

  Lbl_01820:
    // 01820 M=3
    M_int = 3;

  Lbl_01830:
    // 01830 L=L+M
    L_int = L_int+M_int;
    // 01840 F=(6-A+M/10)*RND(1)/((D(1)+D(2)+D(3)/10)*5)
    F_int = (6-A_int+M_int/10)*RND(1)/((D_int_arr[1]+D_int_arr[2]+D_int_arr[3]/10)*5);
    // 01850 IF F<.51 THEN 1540
    if(F_int<0.51)goto Lbl_01540;

  Lbl_01860:
    // 01860 PRINT "THE BULL HAS GORED YOU!"
    b2c_printf("The bull has gored you!\n");

  Lbl_01870:
    // 01870 ON FNA(0) GOTO 1880,1910
    switch((int)(FNA_int_arr[0])){
        case 1: goto Lbl_01880;
        case 2: goto Lbl_01910;
        default: break; 
    };

  Lbl_01880:
    // 01880 PRINT "YOU ARE DEAD."
    b2c_printf("You are dead.\n");
    // 01890 D(4)=1.5
    D_int_arr[4] = 1.5;
    // 01900 GOTO 2210
    goto Lbl_02210;

  Lbl_01910:
    // 01910 PRINT "YOU ARE STILL ALIVE.":PRINT
    b2c_printf("");
    // 01920 PRINT "DO YOU RUN FROM THE RING";
    b2c_printf("Do you run from the ring");
    // 01930 GOSUB 2850
    Routine_02850();
    // 01940 IF Z1=2 THEN 1980
    if(Z1_int==2)goto Lbl_01980;
    // 01950 PRINT "COWARD"
    b2c_printf("Coward\n");
    // 01960 D(4)=0
    D_int_arr[4] = 0;
    // 01970 GOTO 2210
    goto Lbl_02210;

  Lbl_01980:
    // 01980 PRINT "YOU ARE BRAVE.  STUPID, BUT BRAVE."
    b2c_printf("You are brave.  Stupid, but brave.\n");
    // 01990 ON FNA(0) GOTO 2000,2020
    switch((int)(FNA_int_arr[0])){
        case 1: goto Lbl_02000;
        case 2: goto Lbl_02020;
        default: break; 
    };

  Lbl_02000:
    // 02000 D(4)=2
    D_int_arr[4] = 2;
    // 02010 GOTO 1540
    goto Lbl_01540;

  Lbl_02020:
    // 02020 PRINT "YOU ARE GORED AGAIN!"
    b2c_printf("You are gored again!\n");
    // 02030 GOTO 1870
    goto Lbl_01870;
    // 02040 REM

  Lbl_02050:
    // 02050 Z=1
    Z_int = 1;
    // 02060 PRINT:PRINT "IT IS THE MOMENT OF TRUTH.":PRINT
    b2c_printf("");
    // 02070 PRINT "HOW DO YOU TRY TO KILL THE BULL";
    b2c_printf("How do you try to kill the bull");
    // 02080 INPUT H
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
                (err += b2c_strtoi(&H_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02080
    // 02090 IF H=4 THEN 2130
    if(H_int==4)goto Lbl_02130;
    // 02100 IF H=5 THEN 2130
    if(H_int==5)goto Lbl_02130;
    // 02110 PRINT "YOU PANICKED.  THE BULL GORED YOU."
    b2c_printf("You panicked.  The bull gored you.\n");
    // 02120 GOTO 1870
    goto Lbl_01870;

  Lbl_02130:
    // 02130 K=(6-A)*10*RND(1)/((D(1)+D(2))*5*D(3))
    K_int = (6-A_int)*10*RND(1)/((D_int_arr[1]+D_int_arr[2])*5*D_int_arr[3]);
    // 02140 IF J=4 THEN 2190
    if(J_int==4)goto Lbl_02190;
    // 02150 IF K>.2 THEN 1860
    if(K_int>0.2)goto Lbl_01860;

  Lbl_02160:
    // 02160 PRINT "YOU KILLED THE BULL!"
    b2c_printf("You killed the bull!\n");
    // 02170 D(5)=2
    D_int_arr[5] = 2;
    // 02180 GOTO 2220
    goto Lbl_02220;

  Lbl_02190:
    // 02190 IF K>.8 THEN 1860
    if(K_int>0.8)goto Lbl_01860;
    // 02200 GOTO 2160
    goto Lbl_02160;

  Lbl_02210:
    // 02210 PRINT
    b2c_printf("");

  Lbl_02220:
    // 02220 PRINT
    b2c_printf("");
    // 02230 PRINT
    b2c_printf("");
    // 02240 IF D(4)<>0 THEN 2290
    if(D_int_arr[4]!=0)goto Lbl_02290;
    // 02250 PRINT "THE CROWD BOOS FOR TEN MINUTES.  IF YOU EVER DARE TO SHOW"
    b2c_printf("The crowd boos for ten minutes.  If you ever dare to show\n");
    // 02260 PRINT "YOUR FACE IN A RING AGAIN, THEY SWEAR THEY WILL KILL YOU--"
    b2c_printf("Your face in a ring again, they swear they will kill you--\n");
    // 02270 PRINT "UNLES THE BULL DOES FIRST."
    b2c_printf("Unles the bull does first.\n");
    // 02280 GOTO 2480
    goto Lbl_02480;

  Lbl_02290:
    // 02290 DEF FND(Q)=(4.5+L/6-(D(1)+D(2))*2.5+4*D(4)+2*D(5)-D(3)^2/120-A)
    // 02300 DEF FNC(Q)=FND(Q)*RND(1)
    // 02310 IF D(4)<>2 THEN 2340
    if(D_int_arr[4]!=2)goto Lbl_02340;
    // 02320 PRINT "THE CROWD CHEERS WILDLY!"
    b2c_printf("The crowd cheers wildly!\n");
    // 02330 GOTO 2360
    goto Lbl_02360;

  Lbl_02340:
    // 02340 IF D(5)<>2 THEN 2360
    if(D_int_arr[5]!=2)goto Lbl_02360;
    // 02350 PRINT "THE CROWD CHEERS!":PRINT
    b2c_printf("");

  Lbl_02360:
    // 02360 PRINT "THE CROWD AWARDS YOU"
    b2c_printf("The crowd awards you\n");
    // 02370 IF FNC(Q)<2.4 THEN 2470
    if(FNC_int_arr[Q_int]<2.4)goto Lbl_02470;
    // 02380 IF FNC(Q)<4.9 THEN 2450
    if(FNC_int_arr[Q_int]<4.9)goto Lbl_02450;
    // 02390 IF FNC(Q)<7.4 THEN 2420
    if(FNC_int_arr[Q_int]<7.4)goto Lbl_02420;
    // 02400 PRINT "OLE!  YOU ARE 'MUY HOMBRE'!! OLE!  OLE!"
    b2c_printf("Ole!  You are 'muy hombre'!! Ole!  Ole!\n");
    // 02410 GOTO 2480
    goto Lbl_02480;

  Lbl_02420:
    // 02420 PRINT "BOTH EARS OF THE BULL!"
    b2c_printf("Both ears of the bull!\n");
    // 02430 PRINT "OLE!"
    b2c_printf("Ole!\n");
    // 02440 GOTO 2480
    goto Lbl_02480;

  Lbl_02450:
    // 02450 PRINT "ONE EAR OF THE BULL."
    b2c_printf("One ear of the bull.\n");
    // 02460 GOTO 2480
    goto Lbl_02480;

  Lbl_02470:
    // 02470 PRINT "NOTHING AT ALL."
    b2c_printf("Nothing at all.\n");

  Lbl_02480:
    // 02480 PRINT
    b2c_printf("");
    // 02490 PRINT "ADIOS":PRINT:PRINT:PRINT
    b2c_printf("");
    // 02500 GOTO 2510
    goto Lbl_02510;

  Lbl_02510:
    // 02510 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
