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
char* data_01150s[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O"};
char* data_01160s[]={"P","1","2","3","4"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1150, 15,data_01150s},
    { 1160,  5,data_01160s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int_arr[10];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    I_int;                                     // Basic: I 
int    K_int;                                     // Basic: K 
char*  M_str_arr[4];                              // Basic: M$ 
char*  N_str;                                     // Basic: N$ 
int    S_int;                                     // Basic: S 
char*  S_str_arr[16];                             // Basic: S$ 
int    S1_int;                                    // Basic: S1 
int    T_int;                                     // Basic: T 
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
    // 01000 PRINT TAB(33);"PIZZA"
    b2c_printf("Pizza\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT: PRINT: PRINT
    b2c_printf("");
    // 01030 DIM S$(16),M$(4)
    // 01040 PRINT "PIZZA DELIVERY GAME": PRINT
    b2c_printf("");
    // 01050 INPUT "WHAT IS YOUR FIRST NAME";N$: PRINT
    b2c_printf("");
    // 01060 PRINT "HI, ";N$;".  IN THIS GAME YOU ARE TO TAKE ORDERS"
    b2c_printf("Hi, %sHi, .  In this game you are to take orders\n",N_str);
    // 01070 PRINT "FOR PIZZAS.  THEN YOU ARE TO TELL A DELIVERY BOY"
    b2c_printf("For pizzas.  Then you are to tell a delivery boy\n");
    // 01080 PRINT "WHERE TO DELIVER THE ORDERED PIZZAS.": PRINT: PRINT
    b2c_printf("");
    // 01090 FOR I=1 TO 16
    for(I_int=1;I_int<=16;I_int++){
        // 01100 READ S$(I)
        S_str_arr[I_int] = Get_Data_String();
        // 01110 NEXT I
        int dummy_1110=0; // Ignore this line.
    }; // End-For(I_int)
    // 01120 FOR I=1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 01130 READ M$(I)
        M_str_arr[I_int] = Get_Data_String();
        // 01140 NEXT I
        int dummy_1140=0; // Ignore this line.
    }; // End-For(I_int)
    // 01150 DATA "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O"
    // 01160 DATA "P","1","2","3","4"
    // 01170 PRINT "MAP OF THE CITY OF HYATTSVILLE": PRINT
    b2c_printf("");
    // 01180 PRINT " -----1-----2-----3-----4-----"
    b2c_printf(" -----1-----2-----3-----4-----\n");
    // 01190 K=4
    K_int = 4;
    // 01200 FOR I=1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 01210 PRINT "-": PRINT "-": PRINT"-": PRINT "-"
        b2c_printf("-\n");
        // 01220 PRINT M$(K);
        b2c_printf("%s•dád\n",M_str_arr[K_int]);
        // 01230 S1=16-4*I+1
        S1_int = 16-4*I_int+1;
        // 01240 PRINT "     ";S$(S1);"     ";S$(S1+1);"     ";S$(S1+2);"     ";
        b2c_printf("     %s               %s               %s               \n",S_str_arr[S1_int],S_str_arr[S1_int+1],S_str_arr[S1_int+2]);
        // 01250 PRINT S$(S1+3);"     ";M$(K)
        b2c_printf("%s‚•dád          %s\n",S_str_arr[S1_int+3],M_str_arr[K_int]);
        // 01260 K=K-1
        K_int = K_int-1;
        // 01270 NEXT I
        int dummy_1270=0; // Ignore this line.
    }; // End-For(I_int)
    // 01280 PRINT "-": PRINT "-": PRINT "-": PRINT "-"
    b2c_printf("-\n");
    // 01290 PRINT " -----1-----2-----3-----4-----": PRINT
    b2c_printf("");
    // 01300 PRINT "THE OUTPUT IS A MAP OF THE HOMES WHERE"
    b2c_printf("The output is a map of the homes where\n");
    // 01310 PRINT "YOU ARE TO SEND PIZZAS.": PRINT
    b2c_printf("");
    // 01320 PRINT "YOUR JOB IS TO GIVE A TRUCK DRIVER"
    b2c_printf("Your job is to give a truck driver\n");
    // 01330 PRINT "THE LOCATION OR COORDINATES OF THE"
    b2c_printf("The location or coordinates of the\n");
    // 01340 PRINT "HOME ORDERING THE PIZZA.": PRINT
    b2c_printf("");

  Lbl_01350:
    // 01350 INPUT "DO YOU NEED MORE DIRECTIONS";A$
    // Start of Basic INPUT statement 01350
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""DO YOU NEED MORE DIRECTIONS"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01350
    // 01360 IF A$="YES" THEN 1390
    if(strcmp(A_str,"Yes")==0)goto Lbl_01390;
    // 01370 IF A$="NO" THEN 1510
    if(strcmp(A_str,"No")==0)goto Lbl_01510;
    // 01380 PRINT "'YES' OR 'NO' PLEASE, NOW THEN,": GOTO 1350
    goto Lbl_01350;

  Lbl_01390:
    // 01390 PRINT: PRINT "SOMEBODY WILL ASK FOR A PIZZA TO BE"
    b2c_printf("Somebody will ask for a pizza to be\n");
    // 01400 PRINT "DELIVERED.  THEN A DELIVERY BOY WILL"
    b2c_printf("Delivered.  Then a delivery boy will\n");
    // 01410 PRINT "ASK YOU FOR THE LOCATION.":PRINT "     EXAMPLE:"
    b2c_printf("     example:\n");
    // 01420 PRINT "THIS IS J.  PLEASE SEND A PIZZA."
    b2c_printf("This is j.  Please send a pizza.\n");
    // 01430 PRINT "DRIVER TO ";N$;".  WHERE DOES J LIVE?"
    b2c_printf("Driver to %sDriver to .  Where does j live?\n",N_str);
    // 01440 PRINT "YOUR ANSWER WOULD BE 2,3": PRINT
    b2c_printf("");
    // 01450 INPUT "UNDERSTAND";A$
    // Start of Basic INPUT statement 01450
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""UNDERSTAND"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01450
    // 01460 IF A$="YES" THEN 1490
    if(strcmp(A_str,"Yes")==0)goto Lbl_01490;
    // 01470 PRINT "THIS JOB IS DEFINITELY TOO DIFFICULT FOR YOU. THANKS ANYWAY"
    b2c_printf("This job is definitely too difficult for you. Thanks anyway\n");
    // 01480 GOTO 1670
    goto Lbl_01670;

  Lbl_01490:
    // 01490 PRINT "GOOD.  YOU ARE NOW READY TO START TAKING ORDERS.": PRINT
    b2c_printf("");
    // 01500 PRINT "GOOD LUCK!!": PRINT
    b2c_printf("");

  Lbl_01510:
    // 01510 FOR I=1 TO 5
    for(I_int=1;I_int<=5;I_int++){
        // 01520 S=INT(RND(1)*16+1): PRINT
        b2c_printf("");
        // 01530 PRINT "HELLO ";N$;"'S PIZZA.  THIS IS ";S$(S);".";
        b2c_printf("Hello %sHello 's pizza.  This is 's pizza.  This is %s's pizza.  This is ..\n",N_str,S_str_arr[S_int]);
        // 01540 PRINT "  PLEASE SEND A PIZZA."
        b2c_printf("  please send a pizza.\n");

  Lbl_01550:
        // 01550 PRINT "  DRIVER TO ";N$;":  WHERE DOES ";S$(S);" LIVE";
        b2c_printf("  driver to %s  driver to :  where does :  where does %s:  where does  live live\n",N_str,S_str_arr[S_int]);
        // 01560 INPUT A(1),A(2)
        // Start of Basic INPUT statement 01560
        {
            int numargs=2;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&A_int_arr[1],args,0)) ||
                    (err += b2c_strtoi(&A_int_arr[2],args,1)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01560
        // 01570 T=A(1)+(A(2)-1)*4
        T_int = A_int_arr[1]+(A_int_arr[2]-1)*4;
        // 01580 IF T=S THEN 1620
        if(T_int==S_int)goto Lbl_01620;
        // 01590 PRINT "THIS IS ";S$(T);".  I DID NOT ORDER A PIZZA."
        b2c_printf("This is %sThis is .  I did not order a pizza.\n",S_str_arr[T_int]);
        // 01600 PRINT "I LIVE AT ";A(1);",";A(2)
        b2c_printf("I live at  %d I live at ,, %d \n",A_int_arr[1],A_int_arr[2]);
        // 01610 GOTO 1550
        goto Lbl_01550;

  Lbl_01620:
        // 01620 PRINT "HELLO "N$;".  THIS IS ";S$(S);", THANKS FOR THE PIZZA."
        b2c_printf("Hello %sHello .  This is .  This is %s.  This is , thanks for the pizza.\n",N_str,S_str_arr[S_int]);
        // 01630 NEXT I
        int dummy_1630=0; // Ignore this line.
    }; // End-For(I_int)
    // 01640 PRINT: INPUT "DO YOU WANT TO DELIVER MORE PIZZAS";A$
    // Start of Basic INPUT statement 01640
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""DO YOU WANT TO DELIVER MORE PIZZAS"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01640
    // 01650 IF A$="YES" THEN 1510
    if(strcmp(A_str,"Yes")==0)goto Lbl_01510;
    // 01660 PRINT: PRINT "O.K. ";N$;", SEE YOU LATER!":PRINT
    b2c_printf("");

  Lbl_01670:
    // 01670 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
