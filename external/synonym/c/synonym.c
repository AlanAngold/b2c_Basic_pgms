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
char* data_01390s[]={"10"};
char* data_01400s[]={"5","FIRST","START","BEGINNING","ONSET","INITIAL"};
char* data_01410s[]={"5","SIMILAR","ALIKE","SAME","LIKE","RESEMBLING"};
char* data_01420s[]={"5","MODEL","PATTERN","PROTOTYPE","STANDARD","CRITERION"};
char* data_01430s[]={"5","SMALL","INSIGNIFICANT","LITTLE","TINY","MINUTE"};
char* data_01440s[]={"6","STOP","HALT","STAY","ARREST","CHECK","STANDSTILL"};
char* data_01450s[]={"6","HOUSE","DWELLING","RESIDENCE","DOMICILE","LODGING"};
char* data_01460s[]={"HABITATION"};
char* data_01470s[]={"7","PIT","HOLE","HOLLOW","WELL","GULF","CHASM","ABYSS"};
char* data_01480s[]={"7","PUSH","SHOVE","THRUST","PROD","POKE","BUTT","PRESS"};
char* data_01490s[]={"6","RED","ROUGE","SCARLET","CRIMSON","FLAME","RUBY"};
char* data_01500s[]={"7","PAIN","SUFFERING","HURT","MISERY","DISTRESS","ACHE"};
char* data_01510s[]={"DISCOMFORT"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1390,  1,data_01390s},
    { 1400,  6,data_01400s},
    { 1410,  6,data_01410s},
    { 1420,  6,data_01420s},
    { 1430,  6,data_01430s},
    { 1440,  7,data_01440s},
    { 1450,  6,data_01450s},
    { 1460,  1,data_01460s},
    { 1470,  8,data_01470s},
    { 1480,  8,data_01480s},
    { 1490,  7,data_01490s},
    { 1500,  7,data_01500s},
    { 1510,  1,data_01510s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char*  A_str;                                     // Basic: A$ 
int    C_int;                                     // Basic: C 
int    G_int;                                     // Basic: G 
int    G1_int;                                    // Basic: G1 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int_arr[30];                             // Basic: L 
int    N_int;                                     // Basic: N 
int    N1_int;                                    // Basic: N1 
int    N2_int;                                    // Basic: N2 
int    R_int_arr[30];                             // Basic: R 
char*  R_str_arr[5];                              // Basic: R$ 
char*  W_str_arr[10];                             // Basic: W$ 
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
    // 01000 PRINT TAB(33);"SYNONYM"
    b2c_printf("Synonym\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT: PRINT: PRINT
    b2c_printf("");
    // 01030 DIM R$(5),W$(1030),L(30),R(30)
    // 01040 R$(1)="RIGHT": R$(2)="CORRECT": R$(3)="FINE": R$(4)="GOOD!"
    GLBpStr="Good!";
    R_str_arr[4] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01050 R$(5)="CHECK"
    GLBpStr="Check";
    R_str_arr[5] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01060 C=0
    C_int = 0;
    // 01070 PRINT "A SYNONYM OF A WORD MEANS ANOTHER WORD IN THE ENGLISH"
    b2c_printf("A synonym of a word means another word in the english\n");
    // 01080 PRINT "LANGUAGE WHICH HAS THE SAME OR VERY NEARLY THE SAME";
    b2c_printf("Language which has the same or very nearly the same");
    // 01090 PRINT " MEANING."
    b2c_printf(" meaning.\n");
    // 01100 PRINT "I CHOOSE A WORD -- YOU TYPE A SYNONYM."
    b2c_printf("I choose a word -- you type a synonym.\n");
    // 01110 PRINT "IF YOU CAN'T THINK OF A SYNONYM, TYPE THE WORD 'HELP'"
    b2c_printf("If you can't think of a synonym, type the word 'help'\n");
    // 01120 PRINT "AND I WILL TELL YOU A SYNONYM.": PRINT
    b2c_printf("");

  Lbl_01130:
    // 01130 RESTORE: C=C+1: READ N
    N_int = Get_Data_Int();
    // 01140 IF C>N THEN 1380
    if(C_int>N_int)goto Lbl_01380;

  Lbl_01150:
    // 01150 N1=INT(RND(1)*N+1)
    N1_int = INT(RND(1)*N_int+1);
    // 01160 IF R(N1)=1 THEN 1150
    if(R_int_arr[N1_int]==1)goto Lbl_01150;
    // 01170 R(N1)=1
    R_int_arr[N1_int] = 1;
    // 01180 FOR I=1 TO N1
    for(I_int=1;I_int<=N1_int;I_int++){
        // 01190 READ N2
        N2_int = Get_Data_Int();
        // 01200 FOR J=1 TO N2
        for(J_int=1;J_int<=N2_int;J_int++){
            // 01210 READ W$(J)
            W_str_arr[J_int] = Get_Data_String();
            // 01220 NEXT J
            int dummy_1220=0; // Ignore this line.
        }; // End-For(J_int)
        // 01230 NEXT I
        int dummy_1230=0; // Ignore this line.
    }; // End-For(I_int)
    // 01240 FOR J=1 TO N2: L(J)=J: NEXT J
    int dummy_1240=0; // Ignore this line.
}; // End-For(J_int)
// 01250 L(0)=N2: G=1: PRINT
b2c_printf("");
// 01260 L(G)=L(L(0)): L(0)=N2-1: PRINT
b2c_printf("");

  Lbl_01270:
// 01270 PRINT "     WHAT IS A SYNONYM OF ";W$(G);: INPUT A$
// Start of Basic INPUT statement 01270
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
}; // End of Basic INPUT statement 01270
// 01280 IF A$="HELP" THEN 1350
if(strcmp(A_str,"Help")==0)goto Lbl_01350;
// 01290 FOR K=1 TO N2
for(K_int=1;K_int<=N2_int;K_int++){
    // 01300 IF G=K THEN 1320
    if(G_int==K_int)goto Lbl_01320;
    // 01310 IF A$=W$(K) THEN 1340
    if(strcmp(A_str,W_str_arr[K_int])==0)goto Lbl_01340;

  Lbl_01320:
    // 01320 NEXT K
    int dummy_1320=0; // Ignore this line.
}; // End-For(K_int)
// 01330 PRINT "     TRY AGAIN.": GOTO 1270
goto Lbl_01270;

  Lbl_01340:
// 01340 PRINT R$(INT(RND(1)*5+1)): GOTO 1130
goto Lbl_01130;

  Lbl_01350:
// 01350 G1=INT(RND(1)*L(0)+1)
G1_int = INT(RND(1)*L_int_arr[0]+1);
// 01360 PRINT "**** A SYNONYM OF ";W$(G);" IS ";W$(L(G1));".": PRINT
b2c_printf("");
// 01370 L(G1)=L(L(0)): L(0)=L(0)-1: GOTO 1270
goto Lbl_01270;

  Lbl_01380:
// 01380 PRINT: PRINT "SYNONYM DRILL COMPLETED.": GOTO 1520
goto Lbl_01520;
// 01390 DATA 10
// 01400 DATA 5,"FIRST","START","BEGINNING","ONSET","INITIAL"
// 01410 DATA 5,"SIMILAR","ALIKE","SAME","LIKE","RESEMBLING"
// 01420 DATA 5,"MODEL","PATTERN","PROTOTYPE","STANDARD","CRITERION"
// 01430 DATA 5,"SMALL","INSIGNIFICANT","LITTLE","TINY","MINUTE"
// 01440 DATA 6,"STOP","HALT","STAY","ARREST","CHECK","STANDSTILL"
// 01450 DATA 6,"HOUSE","DWELLING","RESIDENCE","DOMICILE","LODGING"
// 01460 DATA "HABITATION"
// 01470 DATA 7,"PIT","HOLE","HOLLOW","WELL","GULF","CHASM","ABYSS"
// 01480 DATA 7,"PUSH","SHOVE","THRUST","PROD","POKE","BUTT","PRESS"
// 01490 DATA 6,"RED","ROUGE","SCARLET","CRIMSON","FLAME","RUBY"
// 01500 DATA 7,"PAIN","SUFFERING","HURT","MISERY","DISTRESS","ACHE"
// 01510 DATA "DISCOMFORT"

  Lbl_01520:
// 01520 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
