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
char*  A_str;                                     // Basic: A$ 
char*  INKEY_str;                                 // Basic: INKEY$ 
int    R_int;                                     // Basic: R 
int    X_int;                                     // Basic: X 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01550();

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

void Routine_01550(){
    // 01550 GOTO 01560
    goto Lbl_01560;

  Lbl_01560:
    // 01560 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 '*************************************
    // 01010 '*         PROGRAM WRITTEN BY        *
    // 01020 '*           PAMELA McGINLEY         *
    // 01030 '*                                   *
    // 01040 '*         MODIFICATIONS BY          *
    // 01050 '*                                   *
    // 01060 '*           ROBERT L. ROACH         *
    // 01070 '*************************************
    // 01080 '
    // 01090 '
    // 01100 CLS
    ClearScreen(0);
    // 01110 PRINT TAB(25);"LITERATURE QUIZ"
    b2c_printf("Literature quiz\n");
    // 01120 PRINT TAB(15);"CREATIVE COMPUTING MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing morristown, new jersey\n");
    // 01130 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01140 R=0
    R_int = 0;
    // 01150 PRINT"TEST YOUR KNOWLEDGE OF CHILDREN'S LITERATURE."
    b2c_printf("Test your knowledge of children's literature.\n");
    // 01160 PRINT:PRINT"THIS IS A MULTIPLE-CHOICE QUIZ."
    b2c_printf("This is a multiple-choice quiz.\n");
    // 01170 PRINT"TYPE A 1, 2, 3, OR 4 AFTER THE QUESTION MARK."
    b2c_printf("Type a 1, 2, 3, or 4 after the question mark.\n");
    // 01180 PRINT:PRINT"GOOD LUCK!":PRINT:PRINT
    b2c_printf("");
    // 01190 PRINT"IN PINOCCHIO, WHAT WAS THE NAME OF THE CAT."
    b2c_printf("In pinocchio, what was the name of the cat.\n");
    // 01200 PRINT"1)TIGGER, 2)CICERO, 3)FIGARO, 4)GUIPETTO";
    b2c_printf("1)tigger, 2)cicero, 3)figaro, 4)guipetto");
    // 01210 GOSUB 1000:'INPUT A:IF A=3 THEN 230
    // 01220 PRINT"SORRY...FIGARO WAS HIS NAME.":GOTO 1230
    goto Lbl_01230;

  Lbl_01230:
    // 01230 PRINT:PRINT
    b2c_printf("");
    // 01240 PRINT"FROM WHOSE GARDEN DID BUGS BUNNY STEAL THE CARROTS ?"
    b2c_printf("From whose garden did bugs bunny steal the carrots ?\n");
    // 01250 PRINT"1)MR. NIXON'S 2)ELMER FUDD'S, 3)CLEM JUDD'S, 4)STROMBOLI'S";
    b2c_printf("1)mr. Nixon's 2)elmer fudd's, 3)clem judd's, 4)stromboli's");
    // 01260 GOSUB 1000:'INPUT A
    // 01270 IF A=2 THEN 1290
    if(A_int==2)goto Lbl_01290;
    // 01280 PRINT"TOO BAD....IT WAS ELMER FUDD'S GARDEN.":GOTO 1310
    goto Lbl_01310;

  Lbl_01290:
    // 01290 PRINT"PRETTY GOOD!"
    b2c_printf("Pretty good!\n");
    // 01300 GOSUB 1550
    Routine_01550();

  Lbl_01310:
    // 01310 PRINT:PRINT
    b2c_printf("");
    // 01320 PRINT "IN THE WIZARD OF OZ DORTHY'S DOG WAS NAMED ?"
    b2c_printf("In the wizard of oz dorthy's dog was named ?\n");
    // 01330 PRINT"1)CICERO, 2)TRIXIE, 3)KING, 4)TOTO";
    b2c_printf("1)cicero, 2)trixie, 3)king, 4)toto");
    // 01340 GOSUB 1000:'INPUT A:IF A=4 THEN 370
    // 01350 PRINT"BACK TO THE BOOKS,....TOTO WAS HIS NAME.":GOTO 1360
    goto Lbl_01360;

  Lbl_01360:
    // 01360 PRINT:PRINT
    b2c_printf("");
    // 01370 PRINT"WHO WAS THE FAIR MAIDEN WHO ATE THE POISON APPLE ?"
    b2c_printf("Who was the fair maiden who ate the poison apple ?\n");
    // 01380 PRINT"1)SLEEPING BEAUTY, 2)CINDERELLA, 3)SNOW WHITE, 4)WENDY";
    b2c_printf("1)sleeping beauty, 2)cinderella, 3)snow white, 4)wendy");
    // 01390 GOSUB 1000:'INPUT A:IF A=3 THEN 450
    // 01400 PRINT"OH, COME ON NOW...IT WAS SNOW WHITE."
    b2c_printf("Oh, come on now...It was snow white.\n");
    // 01410 GOTO 1420
    goto Lbl_01420;

  Lbl_01420:
    // 01420 PRINT:PRINT
    b2c_printf("");
    // 01430 IF R=4 THEN 1480
    if(R_int==4)goto Lbl_01480;
    // 01440 IF R<2 THEN 1520
    if(R_int<2)goto Lbl_01520;
    // 01450 PRINT"NOT BAD, BUT YOU MIGHT SPEND A LITTLE MORE TIME"
    b2c_printf("Not bad, but you might spend a little more time\n");
    // 01460 PRINT"READING THE NURSERY GREATS."
    b2c_printf("Reading the nursery greats.\n");
    // 01470 GOTO 1540
    goto Lbl_01540;

  Lbl_01480:
    // 01480 PRINT"WOW! THAT'S SUPER! YOU REALLY KNOW YOUR NURSERY"
    b2c_printf("Wow! That's super! You really know your nursery\n");
    // 01490 PRINT"YOUR NEXT QUIZ WILL BE ON 2ND CENTURY CHINESE"
    b2c_printf("Your next quiz will be on 2nd century chinese\n");
    // 01500 PRINT"LITERATURE (HA, HA, HA)"
    b2c_printf("Literature (ha, ha, ha)\n");
    // 01510 GOTO 1540
    goto Lbl_01540;

  Lbl_01520:
    // 01520 PRINT"HUH. THAT'S DEFINITELY NOT TOO SWIFT.  BACK TO"
    b2c_printf("Huh. That's definitely not too swift.  Back to\n");
    // 01530 PRINT"NURSERY SCHOOL FOR YOU, MY FRIEND."
    b2c_printf("Nursery school for you, my friend.\n");

  Lbl_01540:
    // 01540 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
