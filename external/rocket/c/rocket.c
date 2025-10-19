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
char*  A_str;                                     // Basic: A$ 
int    B_int;                                     // Basic: B 
int    D_int;                                     // Basic: D 
int    F_int;                                     // Basic: F 
int    H_int;                                     // Basic: H 
int    T_int;                                     // Basic: T 
int    V_int;                                     // Basic: V 
int    V1_int;                                    // Basic: V1 
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
    // 01000 PRINT TAB(30); "ROCKET"
    b2c_printf("Rocket\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "LUNAR LANDING SIMULATION"
    b2c_printf("Lunar landing simulation\n");
    // 01040 PRINT "----- ------- ----------": PRINT
    b2c_printf("");
    // 01050 INPUT "DO YOU WANT INSTRUCTIONS (YES OR NO)";A$
    // Start of Basic INPUT statement 01050
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""DO YOU WANT INSTRUCTIONS (YES OR NO)"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01050
    // 01060 IF A$="NO" THEN 1270
    if(strcmp(A_str,"No")==0)goto Lbl_01270;
    // 01070 PRINT
    b2c_printf("");
    // 01080 PRINT"YOU ARE LANDING ON THE MOON AND AND HAVE TAKEN OVER MANUAL"
    b2c_printf("You are landing on the moon and and have taken over manual\n");
    // 01090 PRINT"CONTROL 1000 FEET ABOVE A GOOD LANDING SPOT. YOU HAVE A DOWN-"
    b2c_printf("Control 1000 feet above a good landing spot. You have a down-\n");
    // 01100 PRINT"WARD VELOCITY OF 50 FEET/SEC. 150 UNITS OF FUEL REMAIN."
    b2c_printf("Ward velocity of 50 feet/sec. 150 Units of fuel remain.\n");
    // 01110 PRINT
    b2c_printf("");
    // 01120 PRINT"HERE ARE THE RULES THAT GOVERN YOUR APOLLO SPACE-CRAFT:": PRINT
    b2c_printf("");
    // 01130 PRINT"(1) AFTER EACH SECOND THE HEIGHT, VELOCITY, AND REMAINING FUEL"
    b2c_printf("(1) after each second the height, velocity, and remaining fuel\n");
    // 01140 PRINT"    WILL BE REPORTED VIA DIGBY YOUR ON-BOARD COMPUTER."
    b2c_printf("    will be reported via digby your on-board computer.\n");
    // 01150 PRINT"(2) AFTER THE REPORT A '?' WILL APPEAR. ENTER THE NUMBER"
    b2c_printf("(2) after the report a '?' Will appear. Enter the number\n");
    // 01160 PRINT"    OF UNITS OF FUEL YOU WISH TO BURN DURING THE NEXT"
    b2c_printf("    of units of fuel you wish to burn during the next\n");
    // 01170 PRINT"    SECOND. EACH UNIT OF FUEL WILL SLOW YOUR DESCENT BY"
    b2c_printf("    second. Each unit of fuel will slow your descent by\n");
    // 01180 PRINT"    1 FOOT/SEC."
    b2c_printf("    1 foot/sec.\n");
    // 01190 PRINT"(3) THE MAXIMUM THRUST OF YOUR ENGINE IS 30 FEET/SEC/SEC"
    b2c_printf("(3) the maximum thrust of your engine is 30 feet/sec/sec\n");
    // 01200 PRINT"    OR 30 UNITS OF FUEL PER SECOND."
    b2c_printf("    or 30 units of fuel per second.\n");
    // 01210 PRINT"(4) WHEN YOU CONTACT THE LUNAR SURFACE. YOUR DESCENT ENGINE"
    b2c_printf("(4) when you contact the lunar surface. Your descent engine\n");
    // 01220 PRINT"    WILL AUTOMATICALLY SHUT DOWN AND YOU WILL BE GIVEN A"
    b2c_printf("    will automatically shut down and you will be given a\n");
    // 01230 PRINT"    REPORT OF YOUR LANDING SPEED AND REMAINING FUEL."
    b2c_printf("    report of your landing speed and remaining fuel.\n");
    // 01240 PRINT"(5) IF YOU RUN OUT OF FUEL THE '?' WILL NO LONGER APPEAR"
    b2c_printf("(5) if you run out of fuel the '?' Will no longer appear\n");
    // 01250 PRINT"    BUT YOUR SECOND BY SECOND REPORT WILL CONTINUE UNTIL"
    b2c_printf("    but your second by second report will continue until\n");
    // 01260 PRINT"    YOU CONTACT THE LUNAR SURFACE.":PRINT
    b2c_printf("");

  Lbl_01270:
    // 01270 PRINT"BEGINNING LANDING PROCEDURE..........":PRINT
    b2c_printf("");
    // 01280 PRINT"G O O D  L U C K ! ! !"
    b2c_printf("G o o d  l u c k ! ! !\n");
    // 01290 PRINT:PRINT
    b2c_printf("");
    // 01300 PRINT"SEC  FEET      SPEED     FUEL     PLOT OF DISTANCE"
    b2c_printf("Sec  feet      speed     fuel     plot of distance\n");
    // 01310 PRINT
    b2c_printf("");
    // 01320 T=0:H=1000:V=50:F=150
    F_int = 150;

  Lbl_01330:
    // 01330 PRINT T;TAB(6);H;TAB(16);V;TAB(26);F;TAB(35);"I";TAB(H/15);"*"
    b2c_printf(" %d Îñ÷ýÎñ÷ý %d Îñ÷ýÎñ÷ý %d Îñ÷ýÎñ÷ý %d Îñ÷ýÎñ÷ýIII*\n",T_int,H_int,V_int,F_int);
    // 01340 INPUT B
    // Start of Basic INPUT statement 01340
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&B_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01340
    // 01350 IF B<0 THEN 1480
    if(B_int<0)goto Lbl_01480;
    // 01360 IF B>30 THEN B=30
    if(B_int>30) {
    }
    // 01370 IF B>F THEN B=F
    if(B_int>F_int) {
    }

  Lbl_01380:
    // 01380 V1=V-B+5
    V1_int = V_int-B_int+5;
    // 01390 F=F-B
    F_int = F_int-B_int;
    // 01400 H=H- .5*(V+V1)
    H_int = H_int-0.5*(V_int+V1_int);
    // 01410 IF H<=0 THEN 1500
    if(H_int<=0)goto Lbl_01500;
    // 01420 T=T+1
    T_int = T_int+1;
    // 01430 V=V1
    V_int = V1_int;
    // 01440 IF F>0 THEN 1330
    if(F_int>0)goto Lbl_01330;
    // 01450 IF B=0 THEN 1470
    if(B_int==0)goto Lbl_01470;
    // 01460 PRINT"**** OUT OF FUEL ****"
    b2c_printf("**** out of fuel ****\n");

  Lbl_01470:
    // 01470 PRINT T;TAB(4);H;TAB(12);V;TAB(20);F;TAB(29);"I";TAB(H/12+29);"*"
    b2c_printf(" %d Îñ÷ýÎñ÷ý %d Îñ÷ýÎñ÷ý %d Îñ÷ýÎñ÷ý %d Îñ÷ýÎñ÷ýIII*\n",T_int,H_int,V_int,F_int);

  Lbl_01480:
    // 01480 B=0
    B_int = 0;
    // 01490 GOTO 1380
    goto Lbl_01380;

  Lbl_01500:
    // 01500 PRINT"***** CONTACT *****"
    b2c_printf("***** contact *****\n");
    // 01510 H=H+ .5*(V1+V)
    H_int = H_int+0.5*(V1_int+V_int);
    // 01520 IF B=5 THEN 1550
    if(B_int==5)goto Lbl_01550;
    // 01530 D=(-V+SQR(V*V+H*(10-2*B)))/(5-B)
    D_int = (V_int+SQR(V_int*V_int+H_int*(10-2*B_int)))/(5-B_int);
    // 01540 GOTO 1560
    goto Lbl_01560;

  Lbl_01550:
    // 01550 D=H/V
    D_int = H_int/V_int;

  Lbl_01560:
    // 01560 V1=V+(5-B)*D
    V1_int = V_int+(5-B_int)*D_int;
    // 01570 PRINT"TOUCHDOWN AT";T+D;"SECONDS."
    b2c_printf("Touchdown atSeconds.\n");
    // 01580 PRINT"LANDING VELOCITY=";V1;"FEET/SEC."
    b2c_printf("Landing velocity= %d Landing velocity=Feet/sec.\n",V1_int);
    // 01590 PRINT F;"UNITS OF FUEL REMAINING."
    b2c_printf(" %d ã„bUnits of fuel remaining.\n",F_int);
    // 01600 IF V1<>0 THEN 1630
    if(V1_int!=0)goto Lbl_01630;
    // 01610 PRINT"CONGRATULATIONS! A PERFECT LANDING!!"
    b2c_printf("Congratulations! A perfect landing!!\n");
    // 01620 PRINT"YOUR LICENSE WILL BE RENEWED.......LATER."
    b2c_printf("Your license will be renewed.......Later.\n");

  Lbl_01630:
    // 01630 IF ABS(V1)<2 THEN 1660
    if(ABS(V1_int)<2)goto Lbl_01660;
    // 01640 PRINT"***** SORRY, BUT YOU BLEW IT!!!!"
    b2c_printf("***** sorry, but you blew it!!!!\n");
    // 01650 PRINT"APPROPRIATE CONDOLENCES WILL BE SENT TO YOUR NEXT OF KIN."
    b2c_printf("Appropriate condolences will be sent to your next of kin.\n");

  Lbl_01660:
    // 01660 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01670 INPUT "ANOTHER MISSION";A$
    // Start of Basic INPUT statement 01670
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""ANOTHER MISSION"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01670
    // 01680 IF A$="YES" THEN 1270
    if(strcmp(A_str,"Yes")==0)goto Lbl_01270;
    // 01690 PRINT: PRINT "CONTROL OUT.": PRINT
    b2c_printf("");
    // 01700 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
