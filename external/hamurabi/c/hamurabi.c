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
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    D1_int;                                    // Basic: D1 
int    E_int;                                     // Basic: E 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    L_int;                                     // Basic: L 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
int    P1_int;                                    // Basic: P1 
int    Q_int;                                     // Basic: Q 
int    S_int;                                     // Basic: S 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02120();
void Routine_02160();
void Routine_02190();

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

void Routine_02120(){
    // 02120 PRINT "HAMURABI:  THINK AGAIN.  YOU HAVE ONLY"
    b2c_printf("Hamurabi:  think again.  You have only\n");
    // 02130 PRINT S;"BUSHELS OF GRAIN.  NOW THEN,"
    b2c_printf(" %d Ah`[Bushels of grain.  Now then,\n",S_int);
    // 02140 GOTO 02150
    goto Lbl_02150;

  Lbl_02150:
    // 02150 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_02160(){
    // 02160 PRINT "HAMURABI:  THINK AGAIN.  YOU OWN ONLY";A;"ACRES.  NOW THEN,"
    b2c_printf("Hamurabi:  think again.  You own only %d Hamurabi:  think again.  You own onlyAcres.  Now then,\n",A_int);
    // 02170 GOTO 02180
    goto Lbl_02180;

  Lbl_02180:
    // 02180 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_02190(){
    // 02190 C=INT(RND(1)*5)+1
    C_int = INT(RND(1)*5)+1;
    // 02200 GOTO 02210
    goto Lbl_02210;

  Lbl_02210:
    // 02210 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(32);"HAMURABI"
    b2c_printf("Hamurabi\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "TRY YOUR HAND AT GOVERNING ANCIENT SUMERIA"
    b2c_printf("Try your hand at governing ancient sumeria\n");
    // 01040 PRINT "FOR A TEN-YEAR TERM OF OFFICE.":PRINT
    b2c_printf("");
    // 01050 D1=0: P1=0
    P1_int = 0;
    // 01060 Z=0: P=95:S=2800: H=3000: E=H-S
    E_int = H_int-S_int;
    // 01070 Y=3: A=H/Y: I=5: Q=1
    Q_int = 1;

  Lbl_01080:
    // 01080 D=0
    D_int = 0;

  Lbl_01090:
    // 01090 PRINT:PRINT:PRINT "HAMURABI:  I BEG TO REPORT TO YOU,": Z=Z+1
    Z_int = Z_int+1;
    // 01100 PRINT "IN YEAR";Z;",";D;"PEOPLE STARVED,";I;"CAME TO THE CITY,"
    b2c_printf("In year %d In year,, %d ,People starved,People starved, %d People starved,Came to the city,\n",Z_int,D_int,I_int);
    // 01110 P=P+I
    P_int = P_int+I_int;
    // 01120 IF Q>0 THEN 1150
    if(Q_int>0)goto Lbl_01150;
    // 01130 P=INT(P/2)
    P_int = INT(P_int/2);
    // 01140 PRINT "A HORRIBLE PLAGUE STRUCK!  HALF THE PEOPLE DIED."
    b2c_printf("A horrible plague struck!  Half the people died.\n");

  Lbl_01150:
    // 01150 PRINT "POPULATION IS NOW";P
    b2c_printf("Population is now %d \n",P_int);
    // 01160 PRINT "THE CITY NOW OWNS ";A;"ACRES."
    b2c_printf("The city now owns  %d The city now owns Acres.\n",A_int);
    // 01170 PRINT "YOU HARVESTED";Y;"BUSHELS PER ACRE."
    b2c_printf("You harvested %d You harvestedBushels per acre.\n",Y_int);
    // 01180 PRINT "THE RATS ATE";E;"BUSHELS."
    b2c_printf("The rats ate %d The rats ateBushels.\n",E_int);
    // 01190 PRINT "YOU NOW HAVE ";S;"BUSHELS IN STORE.": PRINT
    b2c_printf("");
    // 01200 IF Z=11 THEN 1890
    if(Z_int==11)goto Lbl_01890;
    // 01210 C=INT(10*RND(1)): Y=C+17
    Y_int = C_int+17;
    // 01220 PRINT "LAND IS TRADING AT";Y;"BUSHELS PER ACRE."
    b2c_printf("Land is trading at %d Land is trading atBushels per acre.\n",Y_int);

  Lbl_01230:
    // 01230 PRINT "HOW MANY ACRES DO YOU WISH TO BUY";
    b2c_printf("How many acres do you wish to buy");
    // 01240 INPUT Q: IF Q<0 THEN 1860
    if(Q_int<0)goto Lbl_01860;
    // 01250 IF Y*Q<=S THEN 1280
    if(Y_int*Q_int<=S_int)goto Lbl_01280;
    // 01260 GOSUB 2120
    Routine_02120();
    // 01270 GOTO 1230
    goto Lbl_01230;

  Lbl_01280:
    // 01280 IF Q=0 THEN 1310
    if(Q_int==0)goto Lbl_01310;
    // 01290 A=A+Q: S=S-Y*Q: C=0
    C_int = 0;
    // 01300 GOTO 1370
    goto Lbl_01370;

  Lbl_01310:
    // 01310 PRINT "HOW MANY ACRES DO YOU WISH TO SELL";
    b2c_printf("How many acres do you wish to sell");
    // 01320 INPUT Q: IF Q<0 THEN 1860
    if(Q_int<0)goto Lbl_01860;
    // 01330 IF Q<A THEN 1360
    if(Q_int<A_int)goto Lbl_01360;
    // 01340 GOSUB 2160
    Routine_02160();
    // 01350 GOTO 1310
    goto Lbl_01310;

  Lbl_01360:
    // 01360 A=A-Q: S=S+Y*Q: C=0
    C_int = 0;

  Lbl_01370:
    // 01370 PRINT
    b2c_printf("");

  Lbl_01380:
    // 01380 PRINT "HOW MANY BUSHELS DO YOU WISH TO FEED YOUR PEOPLE";
    b2c_printf("How many bushels do you wish to feed your people");
    // 01390 INPUT Q
    // Start of Basic INPUT statement 01390
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Q_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01390
    // 01400 IF Q<0 THEN 1860
    if(Q_int<0)goto Lbl_01860;
    // 01410 REM *** TRYING TO USE MORE GRAIN THAN IS IN SILOS?
    // 01420 IF Q<=S THEN 1450
    if(Q_int<=S_int)goto Lbl_01450;
    // 01430 GOSUB 2120
    Routine_02120();
    // 01440 GOTO 1380
    goto Lbl_01380;

  Lbl_01450:
    // 01450 S=S-Q: C=1: PRINT
    b2c_printf("");

  Lbl_01460:
    // 01460 PRINT "HOW MANY ACRES DO YOU WISH TO PLANT WITH SEED";
    b2c_printf("How many acres do you wish to plant with seed");
    // 01470 INPUT D: IF D=0 THEN 1620
    if(D_int==0)goto Lbl_01620;
    // 01480 IF D<0 THEN 1860
    if(D_int<0)goto Lbl_01860;
    // 01490 REM *** TRYING TO PLANT MORE ACRES THAN YOU OWN?
    // 01500 IF D<=A THEN 1540
    if(D_int<=A_int)goto Lbl_01540;
    // 01510 GOSUB 2160
    Routine_02160();
    // 01520 GOTO 1460
    goto Lbl_01460;
    // 01530 REM *** ENOUGH GRAIN FOR SEED?

  Lbl_01540:
    // 01540 IF INT(D/2)<=S THEN 1580
    if(INT(D_int/2)<=S_int)goto Lbl_01580;
    // 01550 GOSUB 2120
    Routine_02120();
    // 01560 GOTO 1460
    goto Lbl_01460;
    // 01570 REM *** ENOUGH PEOPLE TO TEND THE CROPS?

  Lbl_01580:
    // 01580 IF D<10*P THEN 1610
    if(D_int<10*P_int)goto Lbl_01610;
    // 01590 PRINT "BUT YOU HAVE ONLY";P;"PEOPLE TO TEND THE FIELDS!  NOW THEN,"
    b2c_printf("But you have only %d But you have onlyPeople to tend the fields!  Now then,\n",P_int);
    // 01600 GOTO 1460
    goto Lbl_01460;

  Lbl_01610:
    // 01610 S=S-INT(D/2)
    S_int = S_int-INT(D_int/2);

  Lbl_01620:
    // 01620 GOSUB 2190
    Routine_02190();
    // 01630 REM *** A BOUNTIFUL HARVEST!
    // 01640 Y=C: H=D*Y: E=0
    E_int = 0;
    // 01650 GOSUB 2190
    Routine_02190();
    // 01660 IF INT(C/2)<>C/2 THEN 1690
    if(INT(C_int/2)!=C_int/2)goto Lbl_01690;
    // 01670 REM *** RATS ARE RUNNING WILD!!
    // 01680 E=INT(S/C)
    E_int = INT(S_int/C_int);

  Lbl_01690:
    // 01690 S=S-E+H
    S_int = S_int-E_int+H_int;
    // 01700 GOSUB 2190
    Routine_02190();
    // 01710 REM *** LET'S HAVE SOME BABIES
    // 01720 I=INT(C*(20*A+S)/P/100+1)
    I_int = INT(C_int*(20*A_int+S_int)/P_int/100+1);
    // 01730 REM *** HOW MANY PEOPLE HAD FULL TUMMIES?
    // 01740 C=INT(Q/20)
    C_int = INT(Q_int/20);
    // 01750 REM *** HORROS, A 15% CHANCE OF PLAGUE
    // 01760 Q=INT(10*(2*RND(1)-.3))
    Q_int = INT(10*(2*RND(1)-0.3));
    // 01770 IF P<C THEN 1080
    if(P_int<C_int)goto Lbl_01080;
    // 01780 REM *** STARVE ENOUGH FOR IMPEACHMENT?
    // 01790 D=P-C: IF D>.45*P THEN 1820
    if(D_int>0.45*P_int)goto Lbl_01820;
    // 01800 P1=((Z-1)*P1+D*100/P)/Z
    P1_int = ((Z_int-1)*P1_int+D_int*100/P_int)/Z_int;
    // 01810 P=C: D1=D1+D: GOTO 1090
    goto Lbl_01090;

  Lbl_01820:
    // 01820 PRINT: PRINT "YOU STARVED";D;"PEOPLE IN ONE YEAR!!!"
    b2c_printf("You starved %d You starvedPeople in one year!!!\n",D_int);

  Lbl_01830:
    // 01830 PRINT "DUE TO THIS EXTREME MISMANAGEMENT YOU HAVE NOT ONLY"
    b2c_printf("Due to this extreme mismanagement you have not only\n");
    // 01840 PRINT "BEEN IMPEACHED AND THROWN OUT OF OFFICE BUT YOU HAVE"
    b2c_printf("Been impeached and thrown out of office but you have\n");
    // 01850 PRINT "ALSO BEEN DECLARED NATIONAL FINK!!!!": GOTO 2090
    goto Lbl_02090;

  Lbl_01860:
    // 01860 PRINT: PRINT "HAMURABI:  I CANNOT DO WHAT YOU WISH."
    b2c_printf("Hamurabi:  i cannot do what you wish.\n");
    // 01870 PRINT "GET YOURSELF ANOTHER STEWARD!!!!!"
    b2c_printf("Get yourself another steward!!!!!\n");
    // 01880 GOTO 2090
    goto Lbl_02090;

  Lbl_01890:
    // 01890 PRINT "IN YOUR 10-YEAR TERM OF OFFICE,";P1;"PERCENT OF THE"
    b2c_printf("In your 10-year term of office, %d In your 10-year term of office,Percent of the\n",P1_int);
    // 01900 PRINT "POPULATION STARVED PER YEAR ON THE AVERAGE, I.E. A TOTAL OF"
    b2c_printf("Population starved per year on the average, i.E. A total of\n");
    // 01910 PRINT D1;"PEOPLE DIED!!": L=A/P
    L_int = A_int/P_int;
    // 01920 PRINT "YOU STARTED WITH 10 ACRES PER PERSON AND ENDED WITH"
    b2c_printf("You started with 10 acres per person and ended with\n");
    // 01930 PRINT L;"ACRES PER PERSON.": PRINT
    b2c_printf("");
    // 01940 IF P1>33 THEN 1830
    if(P1_int>33)goto Lbl_01830;
    // 01950 IF L<7 THEN 1830
    if(L_int<7)goto Lbl_01830;
    // 01960 IF P1>10 THEN 2020
    if(P1_int>10)goto Lbl_02020;
    // 01970 IF L<9 THEN 2020
    if(L_int<9)goto Lbl_02020;
    // 01980 IF P1>3 THEN 2050
    if(P1_int>3)goto Lbl_02050;
    // 01990 IF L<10 THEN 2050
    if(L_int<10)goto Lbl_02050;
    // 02000 PRINT "A FANTASTIC PERFORMANCE!!!  CHARLEMANGE, DISRAELI, AND"
    b2c_printf("A fantastic performance!!!  Charlemange, disraeli, and\n");
    // 02010 PRINT "JEFFERSON COMBINED COULD NOT HAVE DONE BETTER!":GOTO 2090
    goto Lbl_02090;

  Lbl_02020:
    // 02020 PRINT "YOUR HEAVY-HANDED PERFORMANCE SMACKS OF NERO AND IVAN IV."
    b2c_printf("Your heavy-handed performance smacks of nero and ivan iv.\n");
    // 02030 PRINT "THE PEOPLE (REMIANING) FIND YOU AN UNPLEASANT RULER, AND,"
    b2c_printf("The people (remianing) find you an unpleasant ruler, and,\n");
    // 02040 PRINT "FRANKLY, HATE YOUR GUTS!!":GOTO 2090
    goto Lbl_02090;

  Lbl_02050:
    // 02050 PRINT "YOUR PERFORMANCE COULD HAVE BEEN SOMEWHAT BETTER, BUT"
    b2c_printf("Your performance could have been somewhat better, but\n");
    // 02060 PRINT "REALLY WASN'T TOO BAD AT ALL. ";INT(P*.8*RND(1));"PEOPLE"
    b2c_printf("Really wasn't too bad at all. People\n");
    // 02070 PRINT "WOULD DEARLY LIKE TO SEE YOU ASSASSINATED BUT WE ALL HAVE OUR"
    b2c_printf("Would dearly like to see you assassinated but we all have our\n");
    // 02080 PRINT "TRIVIAL PROBLEMS."
    b2c_printf("Trivial problems.\n");

  Lbl_02090:
    // 02090 PRINT: FOR N=1 TO 10: PRINT CHR$(7);: NEXT N
    int dummy_2090=0; // Ignore this line.
}; // End-For(N_int)
// 02100 PRINT "SO LONG FOR NOW.": PRINT
b2c_printf("");
// 02110 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
