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
char*  B_str_arr[40];                             // Basic: B$ 
char*  D_str;                                     // Basic: D$ 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    L_int;                                     // Basic: L 
char*  T_str;                                     // Basic: T$ 
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
    // 01000 PRINT TAB(34);"NAME"
    b2c_printf("Name\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT: PRINT: PRINT
    b2c_printf("");
    // 01030 DIM B$(40)
    // 01040 PRINT "HELLO.": PRINT "MY NAME IS CREATIVE COMPUTER."
    b2c_printf("My name is creative computer.\n");
    // 01050 PRINT "WHAT'S YOUR NAME (FIRST AND LAST";: INPUT A$: L=LEN(A$)
    L_int = LEN(A_str);
    // 01060 PRINT: PRINT "THANK YOU, ";
    b2c_printf("Thank you, ");
    // 01070 FOR I=1 TO L: B$(I)=MID$(A$,I,1): NEXT I
    int dummy_1070=0; // Ignore this line.
}; // End-For(I_int)
// 01080 FOR I=L TO 1 STEP -1: PRINT B$(I);: NEXT I
int dummy_1080=0; // Ignore this line.
r* CName(const char*)}; // End-For(I_int)
r* CName(const char*)// 01090 PRINT ".": PRINT "OOPS!  I GUESS I GOT IT BACKWARDS.  A SMART"
r* CName(const char*)b2c_printf("Oops!  I guess i got it backwards.  A smart\n");
r* CName(const char*)// 01100 PRINT "COMPUTER LIKE ME SHOULDN'T MAKE A MISTAKE LIKE THAT!": PRINT
r* CName(const char*)b2c_printf("");
r* CName(const char*)// 01110 PRINT "BUT I JUST NOTICED YOUR LETTERS ARE OUT OF ORDER."
r* CName(const char*)b2c_printf("But i just noticed your letters are out of order.\n");
r* CName(const char*)// 01120 PRINT "LET'S PUT THEM IN ORDER LIKE THIS: ";
r* CName(const char*)b2c_printf("Let's put them in order like this: ");
r* CName(const char*)// 01130 FOR J=2 TO L: I=J-1: T$=B$(J)
r* CName(const char*)GLBpStr=B_str_arr[J_int];
r* CName(const char*)T_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01140:
r* CName(const char*)// 01140 IF T$>B$(I) THEN 1160
r* CName(const char*)if(strcmp(T_str,B_str_arr[I_int])>0)goto Lbl_01160;
r* CName(const char*)// 01150 B$(I+1)=B$(I): I=I-1: IF I>0 THEN 1140
r* CName(const char*)if(I_int>0)goto Lbl_01140;

  Lbl_01160:
r* CName(const char*)// 01160 B$(I+1)=T$: NEXT J
r* CName(const char*)int dummy_1160=0; // Ignore this line.
Name(const char*)}; // End-For(J_int)
Name(const char*)// 01170 FOR I=1 TO L: PRINT B$(I);: NEXT I: PRINT: PRINT
Name(const char*)b2c_printf("");
Name(const char*)// 01180 PRINT "DON'T YOU LIKE THAT BETTER";: INPUT D$
Name(const char*)// Start of Basic INPUT statement 01180
Name(const char*){
r* CName(const char*)int numargs=1;
r* CName(const char*)char *args[numargs+1];
r* CName(const char*)bool echoeol=true;
r* CName(const char*)while(true){
fprintf(stdout," ? ");
int err=input(args,numargs,echoeol);
if(err==0x03) break;
if(err || 
    (err += b2c_strtos(&D_str,args,0)) ){
     printf("?Redo from start\n");
}else{
    break;
};
r* CName(const char*)};
Name(const char*)}; // End of Basic INPUT statement 01180
Name(const char*)// 01190 IF D$="YES" THEN 1210
Name(const char*)if(strcmp(D_str,"Yes")==0)goto Lbl_01210;
Name(const char*)// 01200 PRINT: PRINT "I'M SORRY YOU DON'T LIKE IT THAT WAY.": GOTO 1220
Name(const char*)goto Lbl_01220;

  Lbl_01210:
Name(const char*)// 01210 PRINT: PRINT "I KNEW YOU'D AGREE!!"
Name(const char*)b2c_printf("I knew you'd agree!!\n");

  Lbl_01220:
Name(const char*)// 01220 PRINT: PRINT "I REALLY ENJOYED MEETING YOU ";A$;"."
Name(const char*)b2c_printf("I really enjoyed meeting you %sI really enjoyed meeting you .\n",A_str);
Name(const char*)// 01230 PRINT "HAVE A NICE DAY!"
Name(const char*)b2c_printf("Have a nice day!\n");
Name(const char*)// 01240 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
