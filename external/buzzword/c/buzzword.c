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
char* data_01140s[]={"ABILITY","BASAL","BEHAVIORAL","CHILD-CENTERED"};
char* data_01150s[]={"DIFFERENTIATED","DISCOVERY","FLEXIBLE","HETEROGENEOUS"};
char* data_01160s[]={"HOMOGENEOUS","MANIPULATIVE","MODULAR","TAVISTOCK"};
char* data_01170s[]={"INDIVIDUALIZED","LEARNING","EVALUATIVE","OBJECTIVE"};
char* data_01180s[]={"COGNITIVE","ENRICHMENT","SCHEDULING","HUMANISTIC"};
char* data_01190s[]={"INTEGRATED","NON-GRADED","TRAINING","VERTICAL AGE"};
char* data_01200s[]={"MOTIVATIONAL","CREATIVE","GROUPING","MODIFICATION"};
char* data_01210s[]={"ACCOUNTABILITY","PROCESS","CORE CURRICULUM","ALGORITHM"};
char* data_01220s[]={"PERFORMANCE","REINFORCEMENT","OPEN CLASSROOM","RESOURCE"};
char* data_01230s[]={"STRUCTURE","FACILITY","ENVIRONMENT"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1140,  4,data_01140s},
    { 1150,  4,data_01150s},
    { 1160,  4,data_01160s},
    { 1170,  4,data_01170s},
    { 1180,  4,data_01180s},
    { 1190,  4,data_01190s},
    { 1200,  4,data_01200s},
    { 1210,  4,data_01210s},
    { 1220,  4,data_01220s},
    { 1230,  3,data_01230s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char*  A_str_arr[40];                             // Basic: A$ 
int    I_int;                                     // Basic: I 
char*  Y_str;                                     // Basic: Y$ 
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
    // 01000 PRINT TAB(26);"BUZZWORD GENERATOR"
    b2c_printf("Buzzword generator\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "THIS PROGRAM PRINTS HIGHLY ACCEPTABLE PHRASES IN"
    b2c_printf("This program prints highly acceptable phrases in\n");
    // 01040 PRINT "'EDUCATOR-SPEAK'THAT YOU CAN WORK INTO REPORTS"
    b2c_printf("'educator-speak'that you can work into reports\n");
    // 01050 PRINT "AND SPEECHES.  WHENEVER A QUESTION MARK IS PRINTED,"
    b2c_printf("And speeches.  Whenever a question mark is printed,\n");
    // 01060 PRINT "TYPE A 'Y' FOR ANOTHER PHRASE OR 'N' TO QUIT."
    b2c_printf("Type a 'y' for another phrase or 'n' to quit.\n");
    // 01070 PRINT:PRINT:PRINT "HERE'S THE FIRST PHRASE:"
    b2c_printf("Here's the first phrase:\n");
    // 01080 DIM A$(40)
    // 01090 FOR I=1 TO 39 : READ A$(I) : NEXT I
    int dummy_1090=0; // Ignore this line.
}; // End-For(I_int)

  Lbl_01100:
// 01100 PRINT A$(INT(13*RND(1)+1));" ";
b2c_printf("%sc>ˇ  \n",A_str_arr[INT(13*RND(1)+1)]);
// 01110 PRINT A$(INT(13*RND(1)+14));" ";
b2c_printf("%sêÇøc  \n",A_str_arr[INT(13*RND(1)+14)]);
// 01120 PRINT A$(INT(13*RND(1)+27)) : PRINT
b2c_printf("");
// 01130 INPUT Y$ : IF Y$="Y" THEN 1100 ELSE GOTO 999
if(strcmp(Y_str,"Y")==0)goto Lbl_01100;
// 01140 DATA "ABILITY","BASAL","BEHAVIORAL","CHILD-CENTERED"
// 01150 DATA "DIFFERENTIATED","DISCOVERY","FLEXIBLE","HETEROGENEOUS"
// 01160 DATA "HOMOGENEOUS","MANIPULATIVE","MODULAR","TAVISTOCK"
// 01170 DATA "INDIVIDUALIZED","LEARNING","EVALUATIVE","OBJECTIVE"
// 01180 DATA "COGNITIVE","ENRICHMENT","SCHEDULING","HUMANISTIC"
// 01190 DATA "INTEGRATED","NON-GRADED","TRAINING","VERTICAL AGE"
// 01200 DATA "MOTIVATIONAL","CREATIVE","GROUPING","MODIFICATION"
// 01210 DATA "ACCOUNTABILITY","PROCESS","CORE CURRICULUM","ALGORITHM"
// 01220 DATA "PERFORMANCE","REINFORCEMENT","OPEN CLASSROOM","RESOURCE"
// 01230 DATA "STRUCTURE","FACILITY","ENVIRONMENT"
// 01240 PRINT "COME BACK WHEN YOU NEED HELP WITH ANOTHER REPORT!":END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
