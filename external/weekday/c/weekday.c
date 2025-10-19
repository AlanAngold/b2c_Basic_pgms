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
char* data_02230s[]={"0","3","3","6","1","4","6","2","5","0","3","5"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 2230, 12,data_02230s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int;                                     // Basic: A 
int    A8_int;                                    // Basic: A8 
int    B_int;                                     // Basic: B 
int    D_int;                                     // Basic: D 
int    D1_int;                                    // Basic: D1 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    FNA_int_arr[10];                           // Basic: FNA 
int    FNB_int_arr[10];                           // Basic: FNB 
int    I_int;                                     // Basic: I 
int    I1_int;                                    // Basic: I1 
int    I2_int;                                    // Basic: I2 
int    I5_int;                                    // Basic: I5 
int    I6_int;                                    // Basic: I6 
int    I7_int;                                    // Basic: I7 
int    K1_int;                                    // Basic: K1 
int    K5_int;                                    // Basic: K5 
int    K6_int;                                    // Basic: K6 
int    K7_int;                                    // Basic: K7 
int    M_int;                                     // Basic: M 
int    M1_int;                                    // Basic: M1 
int    T_int_arr[12];                             // Basic: T 
int    T1_int;                                    // Basic: T1 
int    Y_int;                                     // Basic: Y 
int    Y1_int;                                    // Basic: Y1 
int    Y2_int;                                    // Basic: Y2 
int    Y3_int;                                    // Basic: Y3 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02340();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused A
int FNA(int A){
    int rtn=INT(A_int/4);
    return(rtn);
}

#pragma argsused A
int FNB(int A){
    int rtn=INT(A_int/7);
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
    // 02310 REM THIS IS THE CURRENT DATE USED IN THE CALCULATIONS.
    // 02320 REM THIS IS THE DATE TO BE CALCULATED ON.
    // 02330 REM CALCULATE TIME IN YEARS, MONTHS, AND DAYS

void Routine_02340(){
    // 02340 LET K1=INT(F*A8)
    K1_int = INT(F_int*A8_int);
    // 02350 LET I5 = INT(K1/365)
    I5_int = INT(K1_int/365);
    // 02360 LET K1 = K1- (I5*365)
    K1_int = K1_int-(I5_int*365);
    // 02370 LET I6 = INT(K1/30)
    I6_int = INT(K1_int/30);
    // 02380 LET I7 = K1 -(I6*30)
    I7_int = K1_int-(I6_int*30);
    // 02390 LET K5 = K5-I5
    K5_int = K5_int-I5_int;
    // 02400 LET K6 =K6-I6
    K6_int = K6_int-I6_int;
    // 02410 LET K7 = K7-I7
    K7_int = K7_int-I7_int;
    // 02420 IF K7>=0 THEN 2450
    if(K7_int>=0)goto Lbl_02450;
    // 02430 LET K7=K7+30
    K7_int = K7_int+30;
    // 02440 LET K6=K6-1
    K6_int = K6_int-1;

  Lbl_02450:
    // 02450 IF K6>0 THEN 2480
    if(K6_int>0)goto Lbl_02480;
    // 02460 LET K6=K6+12
    K6_int = K6_int+12;
    // 02470 LET K5=K5-1
    K5_int = K5_int-1;

  Lbl_02480:
    // 02480 PRINT I5,I6,I7
    b2c_printf(" %d ˆ-„ý %d ˆ-„ý %d \n",I5_int,I6_int,I7_int);
    // 02490 GOTO 02500
    goto Lbl_02500;

  Lbl_02500:
    // 02500 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(32);"WEEKDAY"
    b2c_printf("Weekday\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "WEEKDAY IS A COMPUTER DEMONSTRATION THAT"
    b2c_printf("Weekday is a computer demonstration that\n");
    // 01040 PRINT"GIVES FACTS ABOUT A DATE OF INTEREST TO YOU."
    b2c_printf("Gives facts about a date of interest to you.\n");
    // 01050 PRINT
    b2c_printf("");
    // 01060 PRINT "ENTER TODAY'S DATE IN THE FORM: 3,24,1979  ";
    b2c_printf("Enter today's date in the form: 3,24,1979  ");
    // 01070 INPUT M1,D1,Y1
    // Start of Basic INPUT statement 01070
    {
        int numargs=3;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M1_int,args,0)) ||
                (err += b2c_strtoi(&D1_int,args,1)) ||
                (err += b2c_strtoi(&Y1_int,args,2)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01070
    // 01080 REM THIS PROGRAM DETERMINES THE DAY OF THE WEEK
    // 01090 REM  FOR A DATE AFTER 1582
    // 01100 DEF FNA(A)=INT(A/4)
    // 01110 DIM T(12)
    // 01120 DEF FNB(A)=INT(A/7)
    // 01130 REM SPACE OUTPUT AND READ IN INITIAL VALUES FOR MONTHS.
    // 01140 FOR I= 1 TO 12
    for(I_int=1;I_int<=12;I_int++){
        // 01150 READ T(I)
        T_int_arr[I_int] = Get_Data_Int();
        // 01160 NEXT I
        int dummy_1160=0; // Ignore this line.
    }; // End-For(I_int)
    // 01170 PRINT"ENTER DAY OF BIRTH (OR OTHER DAY OF INTEREST)";
    b2c_printf("Enter day of birth (or other day of interest)");
    // 01180 INPUT M,D,Y
    // Start of Basic INPUT statement 01180
    {
        int numargs=3;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M_int,args,0)) ||
                (err += b2c_strtoi(&D_int,args,1)) ||
                (err += b2c_strtoi(&Y_int,args,2)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01180
    // 01190 PRINT
    b2c_printf("");
    // 01200 LET I1 = INT((Y-1500)/100)
    I1_int = INT((Y_int-1500)/100);
    // 01210 REM TEST FOR DATE BEFORE CURRENT CALENDAR.
    // 01220 IF Y-1582 <0 THEN 2200
    if(Y_int-1582<0)goto Lbl_02200;
    // 01230 LET A = I1*5+(I1+3)/4
    A_int = I1_int*5+(I1_int+3)/4;
    // 01240 LET I2=INT(A-FNB(A)*7)
    I2_int = INT(A_int-FNB_int_arr[A_int]*7);
    // 01250 LET Y2=INT(Y/100)
    Y2_int = INT(Y_int/100);
    // 01260 LET Y3 =INT(Y-Y2*100)
    Y3_int = INT(Y_int-Y2_int*100);
    // 01270 LET A =Y3/4+Y3+D+T(M)+I2
    A_int = Y3_int/4+Y3_int+D_int+T_int_arr[M_int]+I2_int;
    // 01280 LET B=INT(A-FNB(A)*7)+1
    B_int = INT(A_int-FNB_int_arr[A_int]*7)+1;
    // 01290 IF M > 2 THEN 1400
    if(M_int>2)goto Lbl_01400;
    // 01300 IF Y3 = 0 THEN 1370
    if(Y3_int==0)goto Lbl_01370;
    // 01310 LET T1=INT(Y-FNA(Y)*4)
    T1_int = INT(Y_int-FNA_int_arr[Y_int]*4);
    // 01320 IF T1 <> 0 THEN 1400
    if(T1_int!=0)goto Lbl_01400;

  Lbl_01330:
    // 01330 IF B<>0 THEN 1350
    if(B_int!=0)goto Lbl_01350;
    // 01340 LET B=6
    B_int = 6;

  Lbl_01350:
    // 01350 LET B = B-1
    B_int = B_int-1;
    // 01360 GOTO 1400
    goto Lbl_01400;

  Lbl_01370:
    // 01370 LET A = I1-1
    A_int = I1_int-1;
    // 01380 LET T1=INT(A-FNA(A)*4)
    T1_int = INT(A_int-FNA_int_arr[A_int]*4);
    // 01390 IF T1 = 0 THEN 1330
    if(T1_int==0)goto Lbl_01330;

  Lbl_01400:
    // 01400 IF B <>0 THEN 1420
    if(B_int!=0)goto Lbl_01420;
    // 01410 LET B = 7
    B_int = 7;

  Lbl_01420:
    // 01420 IF (Y1*12+M1)*31+D1<(Y*12+M)*31+D THEN 1480
    if((Y1_int*12+M1_int)*31+D1_int<(Y_int*12+M_int)*31+D_int)goto Lbl_01480;
    // 01430 IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 1460
    if((Y1_int*12+M1_int)*31+D1_int==(Y_int*12+M_int)*31+D_int)goto Lbl_01460;
    // 01440 PRINT M;"/";D;"/";Y;" WAS A ";
    b2c_printf(" %d ‰Æ5[// %d /// %d / was a  was a \n",M_int,D_int,Y_int);
    // 01450 GOTO 1500
    goto Lbl_01500;

  Lbl_01460:
    // 01460 PRINT M;"/";D;"/";Y;" IS A ";
    b2c_printf(" %d Š-„ý// %d /// %d / is a  is a \n",M_int,D_int,Y_int);
    // 01470 GOTO 1500
    goto Lbl_01500;

  Lbl_01480:
    // 01480 PRINT M;"/";D;"/";Y;" WILL BE A ";
    b2c_printf(" %d Š-„ý// %d /// %d / will be a  will be a \n",M_int,D_int,Y_int);
    // 01490 REM PRINT THE DAY OF THE WEEK THE DATE FALLS ON.

  Lbl_01500:
    // 01500 IF B <>1 THEN 1520
    if(B_int!=1)goto Lbl_01520;
    // 01510 PRINT "SUNDAY."
    b2c_printf("Sunday.\n");

  Lbl_01520:
    // 01520 IF B<>2 THEN 1540
    if(B_int!=2)goto Lbl_01540;
    // 01530 PRINT "MONDAY."
    b2c_printf("Monday.\n");

  Lbl_01540:
    // 01540 IF B<>3 THEN 1560
    if(B_int!=3)goto Lbl_01560;
    // 01550 PRINT "TUESDAY."
    b2c_printf("Tuesday.\n");

  Lbl_01560:
    // 01560 IF B<>4 THEN 1580
    if(B_int!=4)goto Lbl_01580;
    // 01570 PRINT "WEDNESDAY."
    b2c_printf("Wednesday.\n");

  Lbl_01580:
    // 01580 IF B<>5 THEN 1600
    if(B_int!=5)goto Lbl_01600;
    // 01590 PRINT "THURSDAY."
    b2c_printf("Thursday.\n");

  Lbl_01600:
    // 01600 IF B<>6 THEN 1620
    if(B_int!=6)goto Lbl_01620;
    // 01610 GOTO 2150
    goto Lbl_02150;

  Lbl_01620:
    // 01620 IF B<>7 THEN 1640
    if(B_int!=7)goto Lbl_01640;
    // 01630 PRINT "SATURDAY."
    b2c_printf("Saturday.\n");

  Lbl_01640:
    // 01640 IF (Y1*12+M1)*31+D1=(Y*12+M)*31+D THEN 2080
    if((Y1_int*12+M1_int)*31+D1_int==(Y_int*12+M_int)*31+D_int)goto Lbl_02080;
    // 01650 LET I5=Y1-Y
    I5_int = Y1_int-Y_int;
    // 01660 PRINT
    b2c_printf("");
    // 01670 LET I6=M1-M
    I6_int = M1_int-M_int;
    // 01680 LET I7=D1-D
    I7_int = D1_int-D_int;
    // 01690 IF I7>=0 THEN 1720
    if(I7_int>=0)goto Lbl_01720;
    // 01700 LET I6= I6-1
    I6_int = I6_int-1;
    // 01710 LET I7=I7+30
    I7_int = I7_int+30;

  Lbl_01720:
    // 01720 IF I6>=0 THEN 1750
    if(I6_int>=0)goto Lbl_01750;
    // 01730 LET I5=I5-1
    I5_int = I5_int-1;
    // 01740 LET I6=I6+12
    I6_int = I6_int+12;

  Lbl_01750:
    // 01750 IF I5<0 THEN 2210
    if(I5_int<0)goto Lbl_02210;
    // 01760 IF I7 <> 0 THEN 1790
    if(I7_int!=0)goto Lbl_01790;
    // 01770 IF I6 <> 0 THEN 1790
    if(I6_int!=0)goto Lbl_01790;
    // 01780 PRINT"***HAPPY BIRTHDAY***"
    b2c_printf("***happy birthday***\n");

  Lbl_01790:
    // 01790 PRINT " "," ","YEARS","MONTHS","DAYS"
    b2c_printf("  YearsMonthsDays\n");
    // 01800 PRINT " "," ","-----","------","----"
    b2c_printf("  ---------------\n");
    // 01810 PRINT "YOUR AGE (IF BIRTHDATE) ",I5,I6,I7
    b2c_printf("Your age (if birthdate)  %d Your age (if birthdate)  %d Your age (if birthdate)  %d \n",I5_int,I6_int,I7_int);
    // 01820 LET A8 = (I5*365)+(I6*30)+I7+INT(I6/2)
    A8_int = (I5_int*365)+(I6_int*30)+I7_int+INT(I6_int/2);
    // 01830 LET K5 = I5
    K5_int = I5_int;
    // 01840 LET K6 = I6
    K6_int = I6_int;
    // 01850 LET K7 = I7
    K7_int = I7_int;
    // 01860 REM CALCULATE RETIREMENT DATE.
    // 01870 LET E = Y+65
    E_int = Y_int+65;
    // 01880 REM CALCULATE TIME SPENT IN THE FOLLOWING FUNCTIONS.
    // 01890 LET F = .35
    F_int = 0.35;
    // 01900 PRINT "YOU HAVE SLEPT ",
    b2c_printf("You have slept ");
    // 01910 GOSUB 2340
    Routine_02340();
    // 01920 LET F = .17
    F_int = 0.17;
    // 01930 PRINT "YOU HAVE EATEN ",
    b2c_printf("You have eaten ");
    // 01940 GOSUB 2340
    Routine_02340();
    // 01950 LET F = .23
    F_int = 0.23;
    // 01960 IF K5 > 3 THEN 1990
    if(K5_int>3)goto Lbl_01990;
    // 01970 PRINT "YOU HAVE PLAYED",
    b2c_printf("You have played");
    // 01980 GOTO 2030
    goto Lbl_02030;

  Lbl_01990:
    // 01990 IF K5 > 9 THEN 2020
    if(K5_int>9)goto Lbl_02020;
    // 02000 PRINT "YOU HAVE PLAYED/STUDIED",
    b2c_printf("You have played/studied");
    // 02010 GOTO  2030
    goto Lbl_02030;

  Lbl_02020:
    // 02020 PRINT "YOU HAVE WORKED/PLAYED",
    b2c_printf("You have worked/played");

  Lbl_02030:
    // 02030 GOSUB 2340
    Routine_02340();
    // 02040 GOTO 2240
    goto Lbl_02240;

  Lbl_02050:
    // 02050 PRINT "YOU HAVE RELAXED ",K5,K6,K7
    b2c_printf("You have relaxed  %d You have relaxed  %d You have relaxed  %d \n",K5_int,K6_int,K7_int);
    // 02060 PRINT 
    b2c_printf("");
    // 02070 PRINT TAB(16);"***  YOU MAY RETIRE IN";E;" ***"
    b2c_printf("***  you may retire in %d ***  you may retire in ***\n",E_int);

  Lbl_02080:
    // 02080 PRINT
    b2c_printf("");

  Lbl_02090:
    // 02090 PRINT
    b2c_printf("");
    // 02100 PRINT
    b2c_printf("");
    // 02110 PRINT
    b2c_printf("");
    // 02120 PRINT
    b2c_printf("");
    // 02130 PRINT
    b2c_printf("");
    // 02140 END

  Lbl_02150:
    // 02150 IF D=13 THEN 2180
    if(D_int==13)goto Lbl_02180;
    // 02160 PRINT "FRIDAY."
    b2c_printf("Friday.\n");
    // 02170 GOTO 1640
    goto Lbl_01640;

  Lbl_02180:
    // 02180 PRINT "FRIDAY THE THIRTEENTH---BEWARE!"
    b2c_printf("Friday the thirteenth---beware!\n");
    // 02190 GOTO 1640
    goto Lbl_01640;

  Lbl_02200:
    // 02200 PRINT "NOT PREPARED TO GIVE DAY OF WEEK PRIOR TO MDLXXXII. "
    b2c_printf("Not prepared to give day of week prior to mdlxxxii. \n");

  Lbl_02210:
    // 02210 GOTO 2090
    goto Lbl_02090;
    // 02220 REM TABLE OF VALUES FOR THE MONTHS TO BE USED IN CALCULATIONS.
    // 02230 DATA 0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5

  Lbl_02240:
    // 02240 IF K6=12 THEN 2260
    if(K6_int==12)goto Lbl_02260;
    // 02250 GOTO 2050
    goto Lbl_02050;

  Lbl_02260:
    // 02260 LET K5=K5+1
    K5_int = K5_int+1;
    // 02270 LET K6=0
    K6_int = 0;
    // 02280 GOTO 2050
    goto Lbl_02050;
    // 02290 REM
    // 02300 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
