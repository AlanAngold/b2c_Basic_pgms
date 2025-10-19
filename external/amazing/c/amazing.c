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
int    C_int;                                     // Basic: C 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    V_int;                                     // Basic: V 
int    W_int_arr[0][0];                           // Basic: W 
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
    // 01000 PRINT TAB(28);"AMAZING PROGRAM"
    b2c_printf("Amazing program\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT:PRINT
    b2c_printf("");

  Lbl_01030:
    // 01030 INPUT "WHAT ARE YOUR WIDTH AND LENGTH";H,V
    // Start of Basic INPUT statement 01030
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""WHAT ARE YOUR WIDTH AND LENGTH"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&H_int,args,0)) ||
                (err += b2c_strtoi(&V_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01030
    // 01040 IF H<>1 AND V<>1 THEN 1060
    if(H_int!=1&&V_int!=1)goto Lbl_01060;
    // 01050 PRINT "MEANINGLESS DIMENSIONS.  TRY AGAIN.":GOTO 1030
    goto Lbl_01030;

  Lbl_01060:
    // 01060 DIM W(H,V),V(H,V)
    // 01070 PRINT
    b2c_printf("");
    // 01080 PRINT
    b2c_printf("");
    // 01090 PRINT
    b2c_printf("");
    // 01100 PRINT
    b2c_printf("");
    // 01110 Q=0:Z=0:X=INT(RND(1)*H+1)
    X_int = INT(RND(1)*H_int+1);
    // 01120 FOR I=1 TO H
    for(I_int=1;I_int<=H_int;I_int++){
        // 01130 IF I=X THEN 1150
        if(I_int==X_int)goto Lbl_01150;
        // 01140 PRINT ".--";:GOTO 1160
        goto Lbl_01160;

  Lbl_01150:
        // 01150 PRINT ".  ";
        b2c_printf(".  ");

  Lbl_01160:
        // 01160 NEXT I
        int dummy_1160=0; // Ignore this line.
    }; // End-For(I_int)
    // 01170 PRINT "."
    b2c_printf(".\n");
    // 01180 C=1:W(X,1)=C:C=C+1
    C_int = C_int+1;
    // 01190 R=X:S=1:GOTO 1260
    goto Lbl_01260;

  Lbl_01200:
    // 01200 IF R<>H THEN 1240
    if(R_int!=H_int)goto Lbl_01240;
    // 01210 IF S<>V THEN 1230
    if(S_int!=V_int)goto Lbl_01230;
    // 01220 R=1:S=1:GOTO 1250
    goto Lbl_01250;

  Lbl_01230:
    // 01230 R=1:S=S+1:GOTO 1250
    goto Lbl_01250;

  Lbl_01240:
    // 01240 R=R+1
    R_int = R_int+1;

  Lbl_01250:
    // 01250 IF W(R,S)=0 THEN 1200
    if(W_int_arr[R_int][S_int]==0)goto Lbl_01200;

  Lbl_01260:
    // 01260 IF R-1=0 THEN 1590
    if(R_int-1==0)goto Lbl_01590;
    // 01270 IF W(R-1,S)<>0 THEN 1590
    if(W_int_arr[R_int-1][S_int]!=0)goto Lbl_01590;
    // 01280 IF S-1=0 THEN 1420
    if(S_int-1==0)goto Lbl_01420;
    // 01290 IF W(R,S-1)<>0 THEN 1420
    if(W_int_arr[R_int][S_int-1]!=0)goto Lbl_01420;
    // 01300 IF R=H THEN 1340
    if(R_int==H_int)goto Lbl_01340;
    // 01310 IF W(R+1,S)<>0 THEN 1340
    if(W_int_arr[R_int+1][S_int]!=0)goto Lbl_01340;
    // 01320 X=INT(RND(1)*3+1)
    X_int = INT(RND(1)*3+1);
    // 01330 ON X GOTO 1930,1970,2010
    switch((int)(X_int)){
        case 1: goto Lbl_01930;
        case 2: goto Lbl_01970;
        case 3: goto Lbl_02010;
        default: break; 
    };

  Lbl_01340:
    // 01340 IF S<>V THEN 1370
    if(S_int!=V_int)goto Lbl_01370;
    // 01350 IF Z=1 THEN 1400
    if(Z_int==1)goto Lbl_01400;
    // 01360 Q=1:GOTO 1380
    goto Lbl_01380;

  Lbl_01370:
    // 01370 IF W(R,S+1)<>0 THEN 1400
    if(W_int_arr[R_int][S_int+1]!=0)goto Lbl_01400;

  Lbl_01380:
    // 01380 X=INT(RND(1)*3+1)
    X_int = INT(RND(1)*3+1);
    // 01390 ON X GOTO 1930,1970,2080
    switch((int)(X_int)){
        case 1: goto Lbl_01930;
        case 2: goto Lbl_01970;
        case 3: goto Lbl_02080;
        default: break; 
    };

  Lbl_01400:
    // 01400 X=INT(RND(1)*2+1)
    X_int = INT(RND(1)*2+1);
    // 01410 ON X GOTO 1930,1970
    switch((int)(X_int)){
        case 1: goto Lbl_01930;
        case 2: goto Lbl_01970;
        default: break; 
    };

  Lbl_01420:
    // 01420 IF R=H THEN 1520
    if(R_int==H_int)goto Lbl_01520;
    // 01430 IF W(R+1,S)<>0 THEN 1520
    if(W_int_arr[R_int+1][S_int]!=0)goto Lbl_01520;
    // 01440 IF S<>V THEN 1470
    if(S_int!=V_int)goto Lbl_01470;
    // 01450 IF Z=1 THEN 1500
    if(Z_int==1)goto Lbl_01500;
    // 01460 Q=1:GOTO 1480
    goto Lbl_01480;

  Lbl_01470:
    // 01470 IF W(R,S+1)<>0 THEN 1500
    if(W_int_arr[R_int][S_int+1]!=0)goto Lbl_01500;

  Lbl_01480:
    // 01480 X=INT(RND(1)*3+1)
    X_int = INT(RND(1)*3+1);
    // 01490 ON X GOTO 1930,2010,2080
    switch((int)(X_int)){
        case 1: goto Lbl_01930;
        case 2: goto Lbl_02010;
        case 3: goto Lbl_02080;
        default: break; 
    };

  Lbl_01500:
    // 01500 X=INT(RND(1)*2+1)
    X_int = INT(RND(1)*2+1);
    // 01510 ON X GOTO 1930,2010
    switch((int)(X_int)){
        case 1: goto Lbl_01930;
        case 2: goto Lbl_02010;
        default: break; 
    };

  Lbl_01520:
    // 01520 IF S<>V THEN 1550
    if(S_int!=V_int)goto Lbl_01550;
    // 01530 IF Z=1 THEN 1580
    if(Z_int==1)goto Lbl_01580;
    // 01540 Q=1:GOTO 1560
    goto Lbl_01560;

  Lbl_01550:
    // 01550 IF W(R,S+1)<>0 THEN 1580
    if(W_int_arr[R_int][S_int+1]!=0)goto Lbl_01580;

  Lbl_01560:
    // 01560 X=INT(RND(1)*2+1)
    X_int = INT(RND(1)*2+1);
    // 01570 ON X GOTO 1930,2080
    switch((int)(X_int)){
        case 1: goto Lbl_01930;
        case 2: goto Lbl_02080;
        default: break; 
    };

  Lbl_01580:
    // 01580 GOTO 1930
    goto Lbl_01930;

  Lbl_01590:
    // 01590 IF S-1=0 THEN 1780
    if(S_int-1==0)goto Lbl_01780;
    // 01600 IF W(R,S-1)<>0 THEN 1780
    if(W_int_arr[R_int][S_int-1]!=0)goto Lbl_01780;
    // 01610 IF R=H THEN 1710
    if(R_int==H_int)goto Lbl_01710;
    // 01620 IF W(R+1,S)<>0 THEN 1710
    if(W_int_arr[R_int+1][S_int]!=0)goto Lbl_01710;
    // 01630 IF S<>V THEN 1660
    if(S_int!=V_int)goto Lbl_01660;
    // 01640 IF Z=1 THEN 1690
    if(Z_int==1)goto Lbl_01690;
    // 01650 Q=1:GOTO 1670
    goto Lbl_01670;

  Lbl_01660:
    // 01660 IF W(R,S+1)<>0 THEN 1690
    if(W_int_arr[R_int][S_int+1]!=0)goto Lbl_01690;

  Lbl_01670:
    // 01670 X=INT(RND(1)*3+1)
    X_int = INT(RND(1)*3+1);
    // 01680 ON X GOTO 1970,2010,2080
    switch((int)(X_int)){
        case 1: goto Lbl_01970;
        case 2: goto Lbl_02010;
        case 3: goto Lbl_02080;
        default: break; 
    };

  Lbl_01690:
    // 01690 X=INT(RND(1)*2+1)
    X_int = INT(RND(1)*2+1);
    // 01700 ON X GOTO 1970,2010
    switch((int)(X_int)){
        case 1: goto Lbl_01970;
        case 2: goto Lbl_02010;
        default: break; 
    };

  Lbl_01710:
    // 01710 IF S<>V THEN 1740
    if(S_int!=V_int)goto Lbl_01740;
    // 01720 IF Z=1 THEN 1770
    if(Z_int==1)goto Lbl_01770;
    // 01730 Q=1:GOTO 1750
    goto Lbl_01750;

  Lbl_01740:
    // 01740 IF W(R,S+1)<>0 THEN 1770
    if(W_int_arr[R_int][S_int+1]!=0)goto Lbl_01770;

  Lbl_01750:
    // 01750 X=INT(RND(1)*2+1)
    X_int = INT(RND(1)*2+1);
    // 01760 ON X GOTO 1970,2080
    switch((int)(X_int)){
        case 1: goto Lbl_01970;
        case 2: goto Lbl_02080;
        default: break; 
    };

  Lbl_01770:
    // 01770 GOTO 1970
    goto Lbl_01970;

  Lbl_01780:
    // 01780 IF R=H THEN 1870
    if(R_int==H_int)goto Lbl_01870;
    // 01790 IF W(R+1,S)<>0 THEN 1870
    if(W_int_arr[R_int+1][S_int]!=0)goto Lbl_01870;
    // 01800 IF S<>V THEN 1830
    if(S_int!=V_int)goto Lbl_01830;
    // 01810 IF Z=1 THEN 1860
    if(Z_int==1)goto Lbl_01860;
    // 01820 Q=1:GOTO 1980
    goto Lbl_01980;

  Lbl_01830:
    // 01830 IF W(R,S+1)<>0 THEN 1860
    if(W_int_arr[R_int][S_int+1]!=0)goto Lbl_01860;
    // 01840 X=INT(RND(1)*2+1)
    X_int = INT(RND(1)*2+1);
    // 01850 ON X GOTO 2010,2080
    switch((int)(X_int)){
        case 1: goto Lbl_02010;
        case 2: goto Lbl_02080;
        default: break; 
    };

  Lbl_01860:
    // 01860 GOTO 2010
    goto Lbl_02010;

  Lbl_01870:
    // 01870 IF S<>V THEN 1900
    if(S_int!=V_int)goto Lbl_01900;
    // 01880 IF Z=1 THEN 1920
    if(Z_int==1)goto Lbl_01920;
    // 01890 Q=1:GOTO 1910
    goto Lbl_01910;

  Lbl_01900:
    // 01900 IF W(R,S+1)<>0 THEN 1920
    if(W_int_arr[R_int][S_int+1]!=0)goto Lbl_01920;

  Lbl_01910:
    // 01910 GOTO 2080
    goto Lbl_02080;

  Lbl_01920:
    // 01920 GOTO 2180
    goto Lbl_02180;

  Lbl_01930:
    // 01930 W(R-1,S)=C
    W_int_arr[R_int-1][S_int] = C_int;
    // 01940 C=C+1:V(R-1,S)=2:R=R-1
    R_int = R_int-1;
    // 01950 IF C=H*V+1 THEN 2190
    if(C_int==H_int*V_int+1)goto Lbl_02190;
    // 01960 Q=0:GOTO 1260
    goto Lbl_01260;

  Lbl_01970:
    // 01970 W(R,S-1)=C
    W_int_arr[R_int][S_int-1] = C_int;

  Lbl_01980:
    // 01980 C=C+1
    C_int = C_int+1;
    // 01990 V(R,S-1)=1:S=S-1:IF C=H*V+1 THEN 2190
    if(C_int==H_int*V_int+1)goto Lbl_02190;
    // 02000 Q=0:GOTO 1260
    goto Lbl_01260;

  Lbl_02010:
    // 02010 W(R+1,S)=C
    W_int_arr[R_int+1][S_int] = C_int;
    // 02020 C=C+1:IF V(R,S)=0 THEN 2040
    if(V_int==0)goto Lbl_02040;
    // 02030 V(R,S)=3:GOTO 2050
    goto Lbl_02050;

  Lbl_02040:
    // 02040 V(R,S)=2
    V_int = 2;

  Lbl_02050:
    // 02050 R=R+1
    R_int = R_int+1;
    // 02060 IF C=H*V+1 THEN 2190
    if(C_int==H_int*V_int+1)goto Lbl_02190;
    // 02070 GOTO 1590
    goto Lbl_01590;

  Lbl_02080:
    // 02080 IF Q=1 THEN 2140
    if(Q_int==1)goto Lbl_02140;
    // 02090 W(R,S+1)=C:C=C+1:IF V(R,S)=0 THEN 2110
    if(V_int==0)goto Lbl_02110;
    // 02100 V(R,S)=3:GOTO 2120
    goto Lbl_02120;

  Lbl_02110:
    // 02110 V(R,S)=1
    V_int = 1;

  Lbl_02120:
    // 02120 S=S+1:IF C=H*V+1 THEN 2190
    if(C_int==H_int*V_int+1)goto Lbl_02190;
    // 02130 GOTO 1260
    goto Lbl_01260;

  Lbl_02140:
    // 02140 Z=1
    Z_int = 1;
    // 02150 IF V(R,S)=0 THEN 2170
    if(V_int==0)goto Lbl_02170;
    // 02160 V(R,S)=3:Q=0:GOTO 2180
    goto Lbl_02180;

  Lbl_02170:
    // 02170 V(R,S)=1:Q=0:R=1:S=1:GOTO 1250
    goto Lbl_01250;

  Lbl_02180:
    // 02180 GOTO 1200
    goto Lbl_01200;

  Lbl_02190:
    // 02190 FOR J=1 TO V
    for(J_int=1;J_int<=V_int;J_int++){
        // 02200 PRINT "I";
        b2c_printf("I");
        // 02210 FOR I=1 TO H
        for(I_int=1;I_int<=H_int;I_int++){
            // 02220 IF V(I,J)<2 THEN 2250
            if(V_int<2)goto Lbl_02250;
            // 02230 PRINT "   ";
            b2c_printf("   ");
            // 02240 GOTO 2260
            goto Lbl_02260;

  Lbl_02250:
            // 02250 PRINT "  I";
            b2c_printf("  i");

  Lbl_02260:
            // 02260 NEXT I
            int dummy_2260=0; // Ignore this line.
        }; // End-For(I_int)
        // 02270 PRINT
        b2c_printf("");
        // 02280 FOR I=1 TO H
        for(I_int=1;I_int<=H_int;I_int++){
            // 02290 IF V(I,J)=0 THEN 2330
            if(V_int==0)goto Lbl_02330;
            // 02300 IF V(I,J)=2 THEN 2330
            if(V_int==2)goto Lbl_02330;
            // 02310 PRINT ":  ";
            b2c_printf(":  ");
            // 02320 GOTO 2340
            goto Lbl_02340;

  Lbl_02330:
            // 02330 PRINT ":--";
            b2c_printf(":--");

  Lbl_02340:
            // 02340 NEXT I
            int dummy_2340=0; // Ignore this line.
        }; // End-For(I_int)
        // 02350 PRINT "."
        b2c_printf(".\n");
        // 02360 NEXT J
        int dummy_2360=0; // Ignore this line.
    }; // End-For(J_int)
    // 02370 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
