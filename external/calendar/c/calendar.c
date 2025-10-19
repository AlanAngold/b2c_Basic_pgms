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
char* data_01550s[]={"0","31","28","31","30","31","30","31","31","30","31","30","31"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1550, 13,data_01550s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    D_int;                                     // Basic: D 
int    D2_int;                                    // Basic: D2 
int    G_int;                                     // Basic: G 
int    I_int;                                     // Basic: I 
int    M_int_arr[12];                             // Basic: M 
int    N_int;                                     // Basic: N 
int    S_int;                                     // Basic: S 
int    W_int;                                     // Basic: W 
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
    // 01000 PRINT TAB(32);"CALENDAR"
    b2c_printf("Calendar\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 REM     VALUES FOR 1979 - SEE NOTES
    // 01040 DIM M(12)
    // 01050 FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
    int dummy_1050=0; // Ignore this line.
}; // End-For(I_int)
// 01060 D=1: REM 1979 STARTS ON MONDAY (0=SUN, -1=MON, -2=TUES...)
// 01070 S=0
S_int = 0;
// 01080 REM     READ DAYS OF EACH MONTH
// 01090 FOR N=0 TO 12: READ M(N): NEXT N
int dummy_1090=0; // Ignore this line.
r* CName(const char*)}; // End-For(N_int)
r* CName(const char*)// 01100 REM
r* CName(const char*)// 01110 FOR N=1 TO 12
r* CName(const char*)for(N_int=1;N_int<=12;N_int++){
// 01120 PRINT: PRINT: S=S+M(N-1)
S_int = S_int+M_int_arr[N_int-1];
// 01130 PRINT "**";S;TAB(7);
b2c_printf("** %d ****\n",S_int);
// 01140 FOR I=1 TO 18: PRINT "*";: NEXT I
int dummy_1140=0; // Ignore this line.
r* CName(const char*)}; // End-For(I_int)
r* CName(const char*)// 01150 ON N GOTO 1160,1170,1180,1190,1200,1210,1220,1230,1240,1250,1260,1270
r* CName(const char*)switch((int)(N_int)){
case 1: goto Lbl_01160;
case 2: goto Lbl_01170;
case 3: goto Lbl_01180;
case 4: goto Lbl_01190;
case 5: goto Lbl_01200;
case 6: goto Lbl_01210;
case 7: goto Lbl_01220;
case 8: goto Lbl_01230;
case 9: goto Lbl_01240;
case 10: goto Lbl_01250;
case 11: goto Lbl_01260;
case 12: goto Lbl_01270;
default: break; 
r* CName(const char*)};

  Lbl_01160:
r* CName(const char*)// 01160 PRINT " JANUARY ";: GOTO 1280
r* CName(const char*)goto Lbl_01280;

  Lbl_01170:
r* CName(const char*)// 01170 PRINT " FEBRUARY";: GOTO 1280
r* CName(const char*)goto Lbl_01280;

  Lbl_01180:
r* CName(const char*)// 01180 PRINT "  MARCH  ";: GOTO 1280
r* CName(const char*)goto Lbl_01280;

  Lbl_01190:
r* CName(const char*)// 01190 PRINT "  APRIL  ";: GOTO 1280
r* CName(const char*)goto Lbl_01280;

  Lbl_01200:
r* CName(const char*)// 01200 PRINT "   MAY   ";: GOTO 1280
r* CName(const char*)goto Lbl_01280;

  Lbl_01210:
r* CName(const char*)// 01210 PRINT "   JUNE  ";: GOTO 1280
r* CName(const char*)goto Lbl_01280;

  Lbl_01220:
r* CName(const char*)// 01220 PRINT "   JULY  ";: GOTO 1280
r* CName(const char*)goto Lbl_01280;

  Lbl_01230:
r* CName(const char*)// 01230 PRINT "  AUGUST ";: GOTO 1280
r* CName(const char*)goto Lbl_01280;

  Lbl_01240:
r* CName(const char*)// 01240 PRINT "SEPTEMBER";: GOTO 1280
r* CName(const char*)goto Lbl_01280;

  Lbl_01250:
r* CName(const char*)// 01250 PRINT " OCTOBER ";: GOTO 1280
r* CName(const char*)goto Lbl_01280;

  Lbl_01260:
r* CName(const char*)// 01260 PRINT " NOVEMBER";: GOTO 1280
r* CName(const char*)goto Lbl_01280;

  Lbl_01270:
r* CName(const char*)// 01270 PRINT " DECEMBER";
r* CName(const char*)b2c_printf(" december");

  Lbl_01280:
r* CName(const char*)// 01280 FOR I=1 TO 18: PRINT "*";: NEXT I
r* CName(const char*)int dummy_1280=0; // Ignore this line.
Name(const char*)}; // End-For(I_int)
Name(const char*)// 01290 PRINT 365-S;"**";
Name(const char*)b2c_printf(" %d ü8/.\****\n",365-S_int);
Name(const char*)// 01300 REM   366-S;     ON LEAP YEARS
Name(const char*)// 01310 PRINT CHR$(10): PRINT "     S       M       T       W";
Name(const char*)b2c_printf("     s       m       t       w");
Name(const char*)// 01320 PRINT "       T       F       S"
Name(const char*)b2c_printf("       t       f       s\n");
Name(const char*)// 01330 PRINT
Name(const char*)b2c_printf("");
Name(const char*)// 01340 FOR I=1 TO 59: PRINT "*";: NEXT I
Name(const char*)int dummy_1340=0; // Ignore this line.
(const char*)}; // End-For(I_int)
(const char*)// 01350 REM
(const char*)// 01360 FOR W=1 TO 6
(const char*)for(W_int=1;W_int<=6;W_int++){
Name(const char*)// 01370 PRINT CHR$(10)
Name(const char*)b2c_printf("");
Name(const char*)// 01380 PRINT TAB(4)
Name(const char*)b2c_printf("");
Name(const char*)// 01390 REM
Name(const char*)// 01400 FOR G=1 TO 7
Name(const char*)for(G_int=1;G_int<=7;G_int++){
r* CName(const char*)// 01410 D=D+1
r* CName(const char*)D_int = D_int+1;
r* CName(const char*)// 01420 D2=D-S
r* CName(const char*)D2_int = D_int-S_int;
r* CName(const char*)// 01430 IF D2>M(N) THEN 1510
r* CName(const char*)if(D2_int>M_int_arr[N_int])goto Lbl_01510;
r* CName(const char*)// 01440 IF D2>0 THEN PRINT D2;
r* CName(const char*)if(D2_int>0) {
r* CName(const char*)}
r* CName(const char*)// 01450 PRINT TAB(4+8*G);
r* CName(const char*)b2c_printf("");
r* CName(const char*)// 01460 NEXT G
r* CName(const char*)int dummy_1460=0; // Ignore this line.
Name(const char*)}; // End-For(G_int)
Name(const char*)// 01470 REM
Name(const char*)// 01480 IF D2=M(N) THEN 1520
Name(const char*)if(D2_int==M_int_arr[N_int])goto Lbl_01520;
Name(const char*)// 01490 NEXT W
Name(const char*)int dummy_1490=0; // Ignore this line.
(const char*)}; // End-For(W_int)
(const char*)// 01500 REM

  Lbl_01510:
(const char*)// 01510 D=D-G
(const char*)D_int = D_int-G_int;

  Lbl_01520:
(const char*)// 01520 NEXT N
(const char*)int dummy_1520=0; // Ignore this line.
st char*)}; // End-For(N_int)
st char*)// 01530 REM
st char*)// 01540 FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
st char*)int dummy_1540=0; // Ignore this line.
har*)}; // End-For(I_int)
har*)// 01550 DATA 0,31,28,31,30,31,30,31,31,30,31,30,31
har*)// 01560 REM  0,31,29,  ..., ON LEAP YEARS
har*)// 01570 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
