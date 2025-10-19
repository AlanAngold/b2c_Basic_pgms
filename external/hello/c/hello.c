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
char*  B_str;                                     // Basic: B$ 
char*  C_str;                                     // Basic: C$ 
char*  D_str;                                     // Basic: D$ 
char*  E_str;                                     // Basic: E$ 
char*  G_str;                                     // Basic: G$ 
int    I_int;                                     // Basic: I 
char*  N_str;                                     // Basic: N$ 
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
    // 01000 PRINT TAB(33);"HELLO"
    b2c_printf("Hello\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT: PRINT: PRINT
    b2c_printf("");
    // 01030 PRINT "HELLO.  MY NAME IS CREATIVE COMPUTER."
    b2c_printf("Hello.  My name is creative computer.\n");
    // 01040 PRINT: PRINT: INPUT "WHAT'S YOUR NAME";N$: PRINT
    b2c_printf("");
    // 01050 PRINT "HI THERE, ";N$;", ARE YOU ENJOYING YOURSELF HERE";
    b2c_printf("Hi there, %sHi there, , are you enjoying yourself here, are you enjoying yourself here\n",N_str);

  Lbl_01060:
    // 01060 INPUT B$: PRINT
    b2c_printf("");
    // 01070 IF B$="YES" THEN 1110
    if(strcmp(B_str,"Yes")==0)goto Lbl_01110;
    // 01080 IF B$="NO" THEN 1130
    if(strcmp(B_str,"No")==0)goto Lbl_01130;
    // 01090 PRINT N$;", I DON'T UNDERSTAND YOUR ANSWER OF '";B$;"'."
    b2c_printf("%s1ƒ¬_, i don't understand your answer of ', i don't understand your answer of '%s, i don't understand your answer of ''.\n",N_str,B_str);
    // 01100 PRINT "PLEASE ANSWER 'YES' OR 'NO'.  DO YOU LIKE IT HERE";: GOTO 1060
    goto Lbl_01060;

  Lbl_01110:
    // 01110 PRINT "I'M GLAD TO HEAR THAT, ";N$;".": PRINT
    b2c_printf("");
    // 01120 GOTO 1150
    goto Lbl_01150;

  Lbl_01130:
    // 01130 PRINT "OH, I'M SORRY TO HEAR THAT, ";N$;". MAYBE WE CAN"
    b2c_printf("Oh, i'm sorry to hear that, %sOh, i'm sorry to hear that, . Maybe we can\n",N_str);
    // 01140 PRINT "BRIGHTEN UP YOUR VISIT A BIT."
    b2c_printf("Brighten up your visit a bit.\n");

  Lbl_01150:
    // 01150 PRINT
    b2c_printf("");
    // 01160 PRINT "SAY, ";N$;", I CAN SOLVE ALL KINDS OF PROBLEMS EXCEPT"
    b2c_printf("Say, %sSay, , i can solve all kinds of problems except\n",N_str);
    // 01170 PRINT "THOSE DEALING WITH GREECE.  WHAT KIND OF PROBLEMS DO"
    b2c_printf("Those dealing with greece.  What kind of problems do\n");
    // 01180 PRINT "YOU HAVE (ANSWER SEX, HEALTH, MONEY, OR JOB)";
    b2c_printf("You have (answer sex, health, money, or job)");

  Lbl_01190:
    // 01190 INPUT C$
    // Start of Basic INPUT statement 01190
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
    }; // End of Basic INPUT statement 01190
    // 01200 PRINT
    b2c_printf("");
    // 01210 IF C$="SEX" THEN 1410
    if(strcmp(C_str,"Sex")==0)goto Lbl_01410;
    // 01220 IF C$="HEALTH" THEN 1360
    if(strcmp(C_str,"Health")==0)goto Lbl_01360;
    // 01230 IF C$="MONEY" THEN 1320
    if(strcmp(C_str,"Money")==0)goto Lbl_01320;
    // 01240 IF C$="JOB" THEN 1270
    if(strcmp(C_str,"Job")==0)goto Lbl_01270;
    // 01250 PRINT "OH, ";N$;", YOUR ANSWER OF ";C$;" IS GREEK TO ME."
    b2c_printf("Oh, %sOh, , your answer of , your answer of %s, your answer of  is greek to me.\n",N_str,C_str);
    // 01260 GOTO 1520
    goto Lbl_01520;

  Lbl_01270:
    // 01270 PRINT "I CAN SYMPATHIZE WITH YOU ";N$;".  I HAVE TO WORK"
    b2c_printf("I can sympathize with you %sI can sympathize with you .  I have to work\n",N_str);
    // 01280 PRINT "VERY LONG HOURS FOR NO PAY -- AND SOME OF MY BOSSES"
    b2c_printf("Very long hours for no pay -- and some of my bosses\n");
    // 01290 PRINT "REALLY BEAT ON MY KEYBOARD.  MY ADVICE TO YOU, ";N$;","
    b2c_printf("Really beat on my keyboard.  My advice to you, %sReally beat on my keyboard.  My advice to you, ,\n",N_str);
    // 01300 PRINT "IS TO OPEN A RETAIL COMPUTER STORE.  IT'S GREAT FUN."
    b2c_printf("Is to open a retail computer store.  It's great fun.\n");
    // 01310 GOTO 1520
    goto Lbl_01520;

  Lbl_01320:
    // 01320 PRINT "SORRY, ";N$;", I'M BROKE TOO.  WHY DON'T YOU SELL"
    b2c_printf("Sorry, %sSorry, , i'm broke too.  Why don't you sell\n",N_str);
    // 01330 PRINT "ENCYCLOPEADIAS OR MARRY SOMEONE RICH OR STOP EATING"
    b2c_printf("Encyclopeadias or marry someone rich or stop eating\n");
    // 01340 PRINT "SO YOU WON'T NEED SO MUCH MONEY?"
    b2c_printf("So you won't need so much money?\n");
    // 01350 GOTO 1520
    goto Lbl_01520;

  Lbl_01360:
    // 01360 PRINT "MY ADVICE TO YOU ";N$;" IS:"
    b2c_printf("My advice to you %sMy advice to you  is:\n",N_str);
    // 01370 PRINT "     1.  TAKE TWO ASPRIN"
    b2c_printf("     1.  Take two asprin\n");
    // 01380 PRINT "     2.  DRINK PLENTY OF FLUIDS (ORANGE JUICE, NOT BEER!)"
    b2c_printf("     2.  Drink plenty of fluids (orange juice, not beer!)\n");
    // 01390 PRINT "     3.  GO TO BED (ALONE)"
    b2c_printf("     3.  Go to bed (alone)\n");
    // 01400 GOTO 1520
    goto Lbl_01520;

  Lbl_01410:
    // 01410 INPUT "IS YOUR PROBLEM TOO MUCH OR TOO LITTLE";D$: PRINT
    b2c_printf("");

  Lbl_01420:
    // 01420 IF D$="TOO MUCH" THEN 1460
    if(strcmp(D_str,"Too much")==0)goto Lbl_01460;
    // 01430 IF D$="TOO LITTLE" THEN 1490
    if(strcmp(D_str,"Too little")==0)goto Lbl_01490;
    // 01440 PRINT "DON'T GET ALL SHOOK, ";N$;", JUST ANSWER THE QUESTION"
    b2c_printf("Don't get all shook, %sDon't get all shook, , just answer the question\n",N_str);
    // 01450 INPUT "WITH 'TOO MUCH' OR 'TOO LITTLE'.  WHICH IS IT";D$:GOTO 1420
    goto Lbl_01420;

  Lbl_01460:
    // 01460 PRINT "YOU CALL THAT A PROBLEM?!!  I SHOULD HAVE SUCH PROBLEMS!"
    b2c_printf("You call that a problem?!!  I should have such problems!\n");
    // 01470 PRINT "IF IT BOTHERS YOU, ";N$;", TAKE A COLD SHOWER."
    b2c_printf("If it bothers you, %sIf it bothers you, , take a cold shower.\n",N_str);
    // 01480 GOTO 1520
    goto Lbl_01520;

  Lbl_01490:
    // 01490 PRINT "WHY ARE YOU HERE IN SUFFERN, ";N$;"?  YOU SHOULD BE"
    b2c_printf("Why are you here in suffern, %sWhy are you here in suffern, ?  You should be\n",N_str);
    // 01500 PRINT "IN TOKYO OR NEW YORK OR AMSTERDAM OR SOMEPLACE WITH SOME"
    b2c_printf("In tokyo or new york or amsterdam or someplace with some\n");
    // 01510 PRINT "REAL ACTION."
    b2c_printf("Real action.\n");

  Lbl_01520:
    // 01520 PRINT
    b2c_printf("");

  Lbl_01530:
    // 01530 PRINT "ANY MORE PROBLEMS YOU WANT SOLVED, ";N$;
    b2c_printf("Any more problems you want solved, %sAny more problems you want solved, \n",N_str);
    // 01540 INPUT E$: PRINT
    b2c_printf("");
    // 01550 IF E$="YES" THEN 1590
    if(strcmp(E_str,"Yes")==0)goto Lbl_01590;
    // 01560 IF E$="NO" THEN 1610
    if(strcmp(E_str,"No")==0)goto Lbl_01610;
    // 01570 PRINT "JUST A SIMPLE 'YES' OR 'NO' PLEASE, ";N$;"."
    b2c_printf("Just a simple 'yes' or 'no' please, %sJust a simple 'yes' or 'no' please, .\n",N_str);
    // 01580 GOTO 1530
    goto Lbl_01530;

  Lbl_01590:
    // 01590 PRINT "WHAT KIND (SEX, MONEY, HEALTH, JOB)";
    b2c_printf("What kind (sex, money, health, job)");
    // 01600 GOTO 1190
    goto Lbl_01190;

  Lbl_01610:
    // 01610 PRINT
    b2c_printf("");
    // 01620 PRINT "THAT WILL BE $5.00 FOR THE ADVICE, ";N$;"."
    b2c_printf("That will be $5.00 For the advice, %sThat will be $5.00 For the advice, .\n",N_str);
    // 01630 PRINT "PLEASE LEAVE THE MONEY ON THE TERMINAL."
    b2c_printf("Please leave the money on the terminal.\n");
    // 01640 FOR I=1 TO 2000: NEXT I
    int dummy_1640=0; // Ignore this line.
}; // End-For(I_int)
// 01650 PRINT: PRINT: PRINT
b2c_printf("");

  Lbl_01660:
// 01660 PRINT "DID YOU LEAVE THE MONEY";
b2c_printf("Did you leave the money");
// 01670 INPUT G$: PRINT
b2c_printf("");
// 01680 IF G$="YES" THEN 1720
if(strcmp(G_str,"Yes")==0)goto Lbl_01720;
// 01690 IF G$="NO" THEN 1760
if(strcmp(G_str,"No")==0)goto Lbl_01760;
// 01700 PRINT "YOUR ANSWER OF '";G$;"' CONFUSES ME, ";N$;"."
b2c_printf("Your answer of '%sYour answer of '' confuses me, ' confuses me, %s' confuses me, .\n",G_str,N_str);
// 01710 PRINT "PLEASE RESPOND WITH 'YES' OR 'NO'.": GOTO 1660
goto Lbl_01660;

  Lbl_01720:
// 01720 PRINT "HEY, ";N$;"??? YOU LEFT NO MONEY AT ALL!"
b2c_printf("Hey, %sHey, ??? You left no money at all!\n",N_str);
// 01730 PRINT "YOU ARE CHEATING ME OUT OF MY HARD-EARNED LIVING."
b2c_printf("You are cheating me out of my hard-earned living.\n");
// 01740 PRINT:PRINT "WHAT A RIP OFF, ";N$;"!!!":PRINT
b2c_printf("");
// 01750 GOTO 1790
goto Lbl_01790;

  Lbl_01760:
// 01760 PRINT "THAT'S HONEST, ";N$;", BUT HOW DO YOU EXPECT"
b2c_printf("That's honest, %sThat's honest, , but how do you expect\n",N_str);
// 01770 PRINT "ME TO GO ON WITH MY PSYCHOLOGY STUDIES IF MY PATIENTS"
b2c_printf("Me to go on with my psychology studies if my patients\n");
// 01780 PRINT "DON'T PAY THEIR BILLS?"
b2c_printf("Don't pay their bills?\n");

  Lbl_01790:
// 01790 PRINT:PRINT "TAKE A WALK, ";N$;".":PRINT:PRINT:GOTO 1810
goto Lbl_01810;
// 01800 REM

  Lbl_01810:
// 01810 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
