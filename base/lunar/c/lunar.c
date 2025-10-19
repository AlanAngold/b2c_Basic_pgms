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
char* UsingFmt_01260 = "             %5.2f             %5d             %5d          %4d%s";
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
int    B_int;                                     // Basic: B 
int    F_int;                                     // Basic: F 
int    H_int;                                     // Basic: H 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    N_int;                                     // Basic: N 
int    R_int;                                     // Basic: R 
char*  T_str;                                     // Basic: T$ 
int    V_int;                                     // Basic: V 
int    V1_int;                                    // Basic: V1 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
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
    // 01000 PRINT "BASIC LIBRARY--'LUNAR'--18-OCT-73"
    b2c_printf("Basic library--'lunar'--18-oct-73\n");
    // 01010 PRINT
    b2c_printf("");
    // 01020 PRINT" THIS PROGRAM IS DESIGNED TO SIMULATE THE LANDING OF"
    b2c_printf(" this program is designed to simulate the landing of\n");
    // 01030 PRINT"   A LUNAR EXCURSION MODULE.  IF YOU KNOW HOW IT WORKS,"
    b2c_printf("   a lunar excursion module.  If you know how it works,\n");
    // 01040 PRINT"    TYPE IN '1' ,IF NOT, TYPE IN '0'."
    b2c_printf("    type in '1' ,if not, type in '0'.\n");
    // 01050 INPUT A
    // Start of Basic INPUT statement 01050
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
    }; // End of Basic INPUT statement 01050
    // 01060 IF A=1 THEN1220
    if(A_int==1)goto Lbl_01220;
    // 01070 IF A=0 THEN 1080
    if(A_int==0)goto Lbl_01080;

  Lbl_01080:
    // 01080 PRINT
    b2c_printf("");
    // 01090 PRINT"  YOU ARE TRAVELING IN THE LUNAR ATMOSPHERE AT AN "
    b2c_printf("  you are traveling in the lunar atmosphere at an \n");
    // 01100 PRINT"   ALTITUDE OF 40,000 FEET, AND DESCENDING AT A RATE OF"
    b2c_printf("   altitude of 40,000 feet, and descending at a rate of\n");
    // 01110 PRINT"   8,000 FEET PER SECOND.  YOU HAVE ACCESS TO 20 "
    b2c_printf("   8,000 feet per second.  You have access to 20 \n");
    // 01120 PRINT"    RETROROCKETS -- 1 TO 10 AND -1 TO -10."
    b2c_printf("    retrorockets -- 1 to 10 and -1 to -10.\n");
    // 01130 PRINT"    A POSITIVE NUMBER SLOWS DOWN YOUR DESCENT, AND A "
    b2c_printf("    a positive number slows down your descent, and a \n");
    // 01140 PRINT"    NEGATIVE NUMBER INCREASES YOUR DESCENT. THE"
    b2c_printf("    negative number increases your descent. The\n");
    // 01150 PRINT"    NEGATIVE FIRINGS ARE PARTICULARLY USEFUL WHEN"
    b2c_printf("    negative firings are particularly useful when\n");
    // 01160 PRINT"    YOU HAVE SLOWED DOWN  TOO MUCH, AND YOU"
    b2c_printf("    you have slowed down  too much, and you\n");
    // 01170 PRINT"    FIND YOUR HEIGHT INCREASING, INSTEAD OF DECREASING."
    b2c_printf("    find your height increasing, instead of decreasing.\n");
    // 01180 PRINT"    YOU WILL LAND SAFELY IF YOUR FINAL VELOCITY IS"
    b2c_printf("    you will land safely if your final velocity is\n");
    // 01190 PRINT"     LESS THAN 20 FEET PER SECOND."
    b2c_printf("     less than 20 feet per second.\n");
    // 01200 PRINT"   AN ASTERISK (*) WILL GIVE YOUR RELATIVE POSITION"
    b2c_printf("   an asterisk (*) will give your relative position\n");
    // 01210 PRINT"    TO THE MOON AFTER EACH RETRO FIRE. YOU MAY NOW BEGIN..."
    b2c_printf("    to the moon after each retro fire. You may now begin...\n");

  Lbl_01220:
    // 01220 PRINT
    b2c_printf("");
    // 01230 PRINT"PLEASE TYPE IN YOUR FIRST NAME..."
    b2c_printf("Please type in your first name...\n");
    // 01240 INPUT T$
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
                (err += b2c_strtos(&T_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01240
    // 01250 PRINT
    b2c_printf("");
    // 01260 :             ##.##             #####             #####          ####
    // 01270 PRINT"              TIME            HEIGHT            VELOCITY        FUEL"
    b2c_printf("              time            height            velocity        fuel\n");
    // 01280 PRINT"              ----            ------            --------        ----"
    b2c_printf("              ----            ------            --------        ----\n");
    // 01290 PRINT
    b2c_printf("");
    // 01300 PRINT"MOON" TAB(45);"*"
    b2c_printf("Moon*\n");
    // 01310 H=40000
    H_int = 40000;
    // 01320 V=8000
    V_int = 8000;
    // 01330 V1=8000
    V1_int = 8000;
    // 01340 J=RND(-1)
    J_int = RND(-1);
    // 01350 LET J=INT(J*15)
    J_int = INT(J_int*15);
    // 01360 F=9000
    F_int = 9000;
    // 01370 N=0.00
    N_int = 0.;
    // 01380 B=40
    B_int = 40;
    // 01390 GO TO 1500
    goto Lbl_01500;

  Lbl_01400:
    // 01400 B=0
    B_int = 0;
    // 01410 FOR X=1 TO 100
    for(X_int=1;X_int<=100;X_int++){
        // 01420 V=V-(K^3*1.5+K*15)+10-H/10000
        V_int = V_int-(IPower(K_int,3)*1.5+K_int*15)+10-H_int/10000;
        // 01430 F=F-ABS(K*93)
        F_int = F_int-ABS(K_int*93);
        // 01440 IF F<0 THEN 1660
        if(F_int<0)goto Lbl_01660;
        // 01450 H=H-(V+V1)/2
        H_int = H_int-(V_int+V1_int)/2;
        // 01460 B=H/1000+4
        B_int = H_int/1000+4;
        // 01470 IF H<0 THEN 1690
        if(H_int<0)goto Lbl_01690;
        // 01480 V1=V
        V1_int = V_int;
        // 01490 PRINT"MOON"; TAB(B);"*"
        b2c_printf("Moon*\n");

  Lbl_01500:
        // 01500 PRINT USING 1260,N,H,V,F
        b2c_printf(UsingFmt_01260,FT(N_int),FT(H_int),FT(V_int),FT(F_int),"\n");
        // 01510 PRINT"      FIRE";
        b2c_printf("      fire");
        // 01520 GO TO 1540
        goto Lbl_01540;

  Lbl_01530:
        // 01530 PRINT"  RETROROCKET FIRE MUST BE BETWEEN 10 AND -10!"
        b2c_printf("  retrorocket fire must be between 10 and -10!\n");

  Lbl_01540:
        // 01540 INPUT K
        // Start of Basic INPUT statement 01540
        {
            int numargs=1;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&K_int,args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01540
        // 01550 IF K=999 THEN 1750
        if(K_int==999)goto Lbl_01750;
        // 01560 IF ABS(K)>10 THEN 1530
        if(ABS(K_int)>10)goto Lbl_01530;
        // 01570 PRINT
        b2c_printf("");
        // 01580 N=N+1.00
        N_int = N_int+1.;
        // 01590 IF X=2 THEN 1620
        if(X_int==2)goto Lbl_01620;

  Lbl_01600:
        // 01600 NEXT X
        int dummy_1600=0; // Ignore this line.
    }; // End-For(X_int)
    // 01610 GO TO 1400
    goto Lbl_01400;

  Lbl_01620:
    // 01620 IF J=2 THEN 2010
    if(J_int==2)goto Lbl_02010;
    // 01630 IF J=13 THEN 2050
    if(J_int==13)goto Lbl_02050;
    // 01640 IF J=4 THEN 2200
    if(J_int==4)goto Lbl_02200;
    // 01650 GO TO 1400
    goto Lbl_01400;

  Lbl_01660:
    // 01660 PRINT
    b2c_printf("");
    // 01670 PRINT"  YOU HAVE JUST RUN OUT OF FUEL ";H;"FEET ABOVE THE SURFACE!!"
    b2c_printf("  you have just run out of fuel  %d   you have just run out of fuel Feet above the surface!!\n",H_int);
    // 01680 GO TO 2420
    goto Lbl_02420;

  Lbl_01690:
    // 01690 IF V<0 THEN 1780
    if(V_int<0)goto Lbl_01780;
    // 01700 IF V<20 THEN 1820
    if(V_int<20)goto Lbl_01820;
    // 01710 IFV<40 THEN 2430
    if(V_int<40)goto Lbl_02430;
    // 01720 PRINT
    b2c_printf("");
    // 01730 PRINT" YOU HAVE JUST CRASHED!! AT ";V;"FPS., GOOD-BYE, ";T$;"!!"
    b2c_printf(" you have just crashed!! At  %d  you have just crashed!! At Fps., Good-bye, Fps., Good-bye, %sFps., Good-bye, !!\n",V_int,T_str);
    // 01740 GO TO 2420
    goto Lbl_02420;

  Lbl_01750:
    // 01750 PRINT"  YOU NOT ONLY LANDED, YOU WENT COMPLETELY THROUGH"
    b2c_printf("  you not only landed, you went completely through\n");
    // 01760 PRINT"  THE LUNAR SURFACE !!!!"
    b2c_printf("  the lunar surface !!!!\n");
    // 01770 GO TO 1850
    goto Lbl_01850;

  Lbl_01780:
    // 01780 PRINT
    b2c_printf("");
    // 01790 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY AT 0.001 FEET"
    b2c_printf(" congratulations !!! You have just landed safely at 0.001 Feet\n");
    // 01800 PRINT"  PER SECOND!!"
    b2c_printf("  per second!!\n");
    // 01810 GO TO 1850
    goto Lbl_01850;

  Lbl_01820:
    // 01820 PRINT
    b2c_printf("");
    // 01830 PRINT" CONGRATULATIONS !!! YOU HAVE JUST LANDED SAFELY"
    b2c_printf(" congratulations !!! You have just landed safely\n");
    // 01840 PRINT"  AT ";V;" FEET PER SECOND!!"
    b2c_printf("  at  %d   at  feet per second!!\n",V_int);

  Lbl_01850:
    // 01850 PRINT"  HERE IS YOUR PILOT\S LICENSE..."
    b2c_printf("  here is your pilot\s license...\n");
    // 01860 PRINT
    b2c_printf("");
    // 01870 PRINT
    b2c_printf("");
    // 01880 PRINT"**************************************************"
    b2c_printf("**************************************************\n");
    // 01890 PRINT"*                                                *"
    b2c_printf("*                                                *\n");
    // 01900 PRINT"*       ";T$;"                                    * "
    b2c_printf("*       %s*                                           * \n",T_str);
    // 01910 IF K=999 THEN 1940
    if(K_int==999)goto Lbl_01940;
    // 01920 PRINT"*                  HAS SUCCESSFULLY LANDED       *"
    b2c_printf("*                  has successfully landed       *\n");
    // 01930 GO TO 1950
    goto Lbl_01950;

  Lbl_01940:
    // 01940 PRINT"*           HAS SUCCESSFULLY LANDED(BY CHEATING) *"
    b2c_printf("*           has successfully landed(by cheating) *\n");

  Lbl_01950:
    // 01950 PRINT"*     A SIMULATED MODULE ON THE MOON, AND IS     *"
    b2c_printf("*     a simulated module on the moon, and is     *\n");
    // 01960 PRINT"*     A CERTIFIED MOON BUGGY DRIVER.             *"
    b2c_printf("*     a certified moon buggy driver.             *\n");
    // 01970 PRINT"*                                                *"
    b2c_printf("*                                                *\n");
    // 01980 PRINT"*                              DATALINE          *"
    b2c_printf("*                              dataline          *\n");
    // 01990 PRINT"**************************************************"
    b2c_printf("**************************************************\n");
    // 02000 GO TO 2420
    goto Lbl_02420;

  Lbl_02010:
    // 02010 PRINT" SORRY,"T$", BUT A HOSTILE STARSHIP FROM SATURN HAS JUST"
    b2c_printf(" sorry,%s sorry,, but a hostile starship from saturn has just\n",T_str);
    // 02020 PRINT"   INVADED DATALINE'S COMPUTER AND DESTROYED YOUR"
    b2c_printf("   invaded dataline's computer and destroyed your\n");
    // 02030 PRINT"   LUNAR VEHICLE !!  START OVER AGAIN..."
    b2c_printf("   lunar vehicle !!  Start over again...\n");
    // 02040 GO TO 2420
    goto Lbl_02420;

  Lbl_02050:
    // 02050 PRINT
    b2c_printf("");
    // 02060 PRINT" ONE OF YOUR THREE FUEL TANKS JUST BURST INTO FLAME!!"
    b2c_printf(" one of your three fuel tanks just burst into flame!!\n");
    // 02070 PRINT"  TO AVOID AN EXPLOSION, TURN OFF ONE OF THE 3 TANKS."
    b2c_printf("  to avoid an explosion, turn off one of the 3 tanks.\n");
    // 02080 PRINT"  (TYPE IN 1, 2, OR 3 )...";
    b2c_printf("  (type in 1, 2, or 3 )...");
    // 02090 INPUT R
    // Start of Basic INPUT statement 02090
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
    }; // End of Basic INPUT statement 02090
    // 02100 LET W=RND(-1)
    W_int = RND(-1);
    // 02110 LET W=INT(W*3)+1
    W_int = INT(W_int*3)+1;
    // 02120 IF W=R THEN 2170
    if(W_int==R_int)goto Lbl_02170;
    // 02130 PRINT" SORRY ";T$;", BUT THE CORRECT FUEL TANK WAS NUMBER "W" , AND"
    b2c_printf(" sorry %s sorry , but the correct fuel tank was number , but the correct fuel tank was number  %d , but the correct fuel tank was number  , and\n",T_str,W_int);
    // 02140 PRINT"  YOU HAVE JUST BECOME INTERGALACTIC DUST!!"
    b2c_printf("  you have just become intergalactic dust!!\n");
    // 02150 PRINT" START OVER AGAIN...."
    b2c_printf(" start over again....\n");
    // 02160 GO TO 2460
    goto Lbl_02460;

  Lbl_02170:
    // 02170 PRINT" YOU HAVE PICKED THE CORRECT FUEL TANK, AND HAVE STOPPED"
    b2c_printf(" you have picked the correct fuel tank, and have stopped\n");
    // 02180 PRINT"  THE FIRE SUCCESSFULLY!! YOU MAY NOW CONTINUE SAFELY..."
    b2c_printf("  the fire successfully!! You may now continue safely...\n");
    // 02190 GO TO 1600
    goto Lbl_01600;

  Lbl_02200:
    // 02200 PRINT
    b2c_printf("");
    // 02210 PRINT"  A METEOR SHOWER IS JUST DEAD AHEAD!!!  IF YOU WANT TO"
    b2c_printf("  a meteor shower is just dead ahead!!!  If you want to\n");
    // 02220 PRINT"     SAVE YOURSELF, YOU HAD BETTER VEER TO THE SIDE AND"
    b2c_printf("     save yourself, you had better veer to the side and\n");
    // 02230 PRINT"     FIRE SOME OF YOUR ANTI-METEOR ROCKETS!!  FROM 1 TO 15,"
    b2c_printf("     fire some of your anti-meteor rockets!!  From 1 to 15,\n");
    // 02240 PRINT"     HOW MANY WILL YOU SHOOT ?"
    b2c_printf("     how many will you shoot ?\n");
    // 02250 INPUT Z
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
                (err += b2c_strtoi(&Z_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02250
    // 02260 IF Z=9 THEN 2300
    if(Z_int==9)goto Lbl_02300;
    // 02270 IF Z=8 THEN 2300
    if(Z_int==8)goto Lbl_02300;
    // 02280 IF Z<8 THEN 2320
    if(Z_int<8)goto Lbl_02320;
    // 02290 IF Z>8 THEN 2370
    if(Z_int>8)goto Lbl_02370;

  Lbl_02300:
    // 02300 PRINT"  YOU MADE IT!!!   NOW YOU MAY CONTINUE..."
    b2c_printf("  you made it!!!   Now you may continue...\n");
    // 02310 GO TO 1600
    goto Lbl_01600;

  Lbl_02320:
    // 02320 PRINT
    b2c_printf("");
    // 02330 PRINT" SORRY, "T$", BUT THAT WASN\T ENOUGH!!"
    b2c_printf(" sorry, %s sorry, , but that wasn\t enough!!\n",T_str);
    // 02340 PRINT"   YOU HAVE JUST BEEN DISINTEGRATED BY THE METEORS!!"
    b2c_printf("   you have just been disintegrated by the meteors!!\n");
    // 02350 PRINT"   START OVER AGAIN..."
    b2c_printf("   start over again...\n");
    // 02360 GO TO 2420
    goto Lbl_02420;

  Lbl_02370:
    // 02370 PRINT
    b2c_printf("");
    // 02380 PRINT"  SORRY,"T$", BUT YOU USED TOO MANY ROCKETS,"
    b2c_printf("  sorry,%s  sorry,, but you used too many rockets,\n",T_str);
    // 02390 PRINT"    AND YOU ARE NOW HEADING SOMEWHERE TOWARDS MARS,"
    b2c_printf("    and you are now heading somewhere towards mars,\n");
    // 02400 PRINT"    BECAUSE THE FIRING OF ALL THOSE ROCKETS THREW YOU"
    b2c_printf("    because the firing of all those rockets threw you\n");
    // 02410 PRINT"    COMPLETELY OFF COURSE!! START OVER AGAIN..."
    b2c_printf("    completely off course!! Start over again...\n");

  Lbl_02420:
    // 02420 STOP
    exit(1);

  Lbl_02430:
    // 02430 PRINT" YOU HAVE LANDED, BUT AT A VELOCITY OF ";V;" FEET PER SECOND,"
    b2c_printf(" you have landed, but at a velocity of  %d  you have landed, but at a velocity of  feet per second,\n",V_int);
    // 02440 PRINT"  WHICH HAS DAMAGED THE INSTRUMENTS IN YOUR SHIP ENOUGH TO"
    b2c_printf("  which has damaged the instruments in your ship enough to\n");
    // 02450 PRINT"  PREVENT YOUR RETURN TO THE EARTH!! BETTER LUCK NEXT TIME!"
    b2c_printf("  prevent your return to the earth!! Better luck next time!\n");

  Lbl_02460:
    // 02460 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
