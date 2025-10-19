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
int    R_int;                                     // Basic: R 
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
    // 01000 PRINT TAB(25);"LITERATURE QUIZ"
    b2c_printf("Literature quiz\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 R=0
    R_int = 0;
    // 01040 PRINT "TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    b2c_printf("Test your knowledge of children's literature.\n");
    // 01050 PRINT: PRINT "THIS IS A MULTIPLE-CHOICE QUIZ."
    b2c_printf("This is a multiple-choice quiz.\n");
    // 01060 PRINT "TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    b2c_printf("Type a 1, 2, 3, or 4 after the question mark.\n");
    // 01070 PRINT: PRINT "GOOD LUCK!": PRINT: PRINT
    b2c_printf("");
    // 01080 PRINT "IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT"
    b2c_printf("In pinocchio, what was the name of the cat\n");
    // 01090 PRINT "1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    b2c_printf("1)tigger, 2)cicero, 3)figaro, 4)guipetto");
    // 01100 INPUT A: IF A=3 THEN 1120
    if(A_int==3)goto Lbl_01120;
    // 01110 PRINT "SORRY...FIGARO WAS HIS NAME.": GOTO 1140
    goto Lbl_01140;

  Lbl_01120:
    // 01120 PRINT "VERY GOOD!  HERE'S ANOTHER."
    b2c_printf("Very good!  Here's another.\n");
    // 01130 R=R+1
    R_int = R_int+1;

  Lbl_01140:
    // 01140 PRINT: PRINT
    b2c_printf("");
    // 01150 PRINT "FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS?"
    b2c_printf("From whose garden did bugs bunny steal the carrots?\n");
    // 01160 PRINT "1)MR. NIXON'S, 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    b2c_printf("1)mr. Nixon's, 2)elmer fudd's, 3)clem judd's, 4)stromboli's");
    // 01170 INPUT A: IF A=2 THEN 1190
    if(A_int==2)goto Lbl_01190;
    // 01180 PRINT "TOO BAD...IT WAS ELMER FUDD'S GARDEN.": GOTO 1210
    goto Lbl_01210;

  Lbl_01190:
    // 01190 PRINT "PRETTY GOOD!"
    b2c_printf("Pretty good!\n");
    // 01200 R=R+1
    R_int = R_int+1;

  Lbl_01210:
    // 01210 PRINT: PRINT
    b2c_printf("");
    // 01220 PRINT "IN THE WIZARD OF OS, DOROTHY'S DOG WAS NAMED"
    b2c_printf("In the wizard of os, dorothy's dog was named\n");
    // 01230 PRINT "1)CICERO, 2)TRIXIA, 3)KING, 4)TOTO";
    b2c_printf("1)cicero, 2)trixia, 3)king, 4)toto");
    // 01240 INPUT A: IF A=4 THEN 1260
    if(A_int==4)goto Lbl_01260;
    // 01250 PRINT "BACK TO THE BOOKS,...TOTO WAS HIS NAME.": GOTO 1280
    goto Lbl_01280;

  Lbl_01260:
    // 01260 PRINT "YEA!  YOU'RE A REAL LITERATURE GIANT."
    b2c_printf("Yea!  You're a real literature giant.\n");
    // 01270 R=R+1
    R_int = R_int+1;

  Lbl_01280:
    // 01280 PRINT:PRINT
    b2c_printf("");
    // 01290 PRINT "WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE"
    b2c_printf("Who was the fair maiden who ate the poison apple\n");
    // 01300 PRINT "1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    b2c_printf("1)sleeping beauty, 2)cinderella, 3)snow white, 4)wendy");
    // 01310 INPUT A: IF A=3 THEN 1340
    if(A_int==3)goto Lbl_01340;
    // 01320 PRINT "OH, COME ON NOW...IT WAS SNOW WHITE."
    b2c_printf("Oh, come on now...It was snow white.\n");
    // 01330 GOTO 1360
    goto Lbl_01360;

  Lbl_01340:
    // 01340 PRINT "GOOD MEMORY!"
    b2c_printf("Good memory!\n");
    // 01350 R=R+1
    R_int = R_int+1;

  Lbl_01360:
    // 01360 PRINT:PRINT
    b2c_printf("");
    // 01370 IF R=4 THEN 1420
    if(R_int==4)goto Lbl_01420;
    // 01380 IF R<2 THEN 1460
    if(R_int<2)goto Lbl_01460;
    // 01390 PRINT "NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    b2c_printf("Not bad, but you might spend a little more time\n");
    // 01400 PRINT "READING THE NURSERY GREATS."
    b2c_printf("Reading the nursery greats.\n");
    // 01410 STOP
    exit(1);

  Lbl_01420:
    // 01420 PRINT "WOW!  THAT'S SUPER!  YOU REALLY KNOW YOUR NURSERY"
    b2c_printf("Wow!  That's super!  You really know your nursery\n");
    // 01430 PRINT "YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    b2c_printf("Your next quiz will be on 2nd century chinese\n");
    // 01440 PRINT "LITERATURE (HA, HA, HA)"
    b2c_printf("Literature (ha, ha, ha)\n");
    // 01450 STOP
    exit(1);

  Lbl_01460:
    // 01460 PRINT "UGH.  THAT WAS DEFINITELY NOT TOO SWIFT.  BACK TO"
    b2c_printf("Ugh.  That was definitely not too swift.  Back to\n");
    // 01470 PRINT "NURSERY SCHOOL FOR YOU, MY FRIEND."
    b2c_printf("Nursery school for you, my friend.\n");
    // 01480 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
