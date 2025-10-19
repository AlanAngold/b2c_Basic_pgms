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
int    A1_int;                                    // Basic: A1 
int    C_int;                                     // Basic: C 
char*  C_str;                                     // Basic: C$ 
int    D_int;                                     // Basic: D 
int    D1_int;                                    // Basic: D1 
int    H_int;                                     // Basic: H 
int    R_int;                                     // Basic: R 
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
    // 01000 PRINT TAB(33);"ORBIT"
    b2c_printf("Orbit\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "SOMEWHERE ABOVE YOUR PLANET IS A ROMULAN SHIP."
    b2c_printf("Somewhere above your planet is a romulan ship.\n");
    // 01040 PRINT
    b2c_printf("");
    // 01050 PRINT "THE SHIP IS IN A CONSTANT POLAR ORBIT.  ITS"
    b2c_printf("The ship is in a constant polar orbit.  Its\n");
    // 01060 PRINT "DISTANCE FROM THE CENTER OF YOUR PLANET IS FROM"
    b2c_printf("Distance from the center of your planet is from\n");
    // 01070 PRINT "10,000 TO 1070,000 MILES AND AT ITS PRESENT VELOCITY CAN"
    b2c_printf("10,000 to 30,000 miles and at its present velocity can\n");
    // 01080 PRINT "CIRCLE YOUR PLANET ONCE EVERY 12 TO 36 HOURS."
    b2c_printf("Circle your planet once every 12 to 36 hours.\n");
    // 01090 PRINT
    b2c_printf("");
    // 01100 PRINT "UNFORTUNATELY, THEY ARE USING A CLOAKING DEVICE SO"
    b2c_printf("Unfortunately, they are using a cloaking device so\n");
    // 01110 PRINT "YOU ARE UNABLE TO SEE THEM, BUT WITH A SPECIAL"
    b2c_printf("You are unable to see them, but with a special\n");
    // 01120 PRINT "INSTRUMENT YOU CAN TELL HOW NEAR THEIR SHIP YOUR"
    b2c_printf("Instrument you can tell how near their ship your\n");
    // 01130 PRINT "PHOTON BOMB EXPLODED.  YOU HAVE SEVEN HOURS UNTIL THEY"
    b2c_printf("Photon bomb exploded.  You have seven hours until they\n");
    // 01140 PRINT "HAVE BUILT UP SUFFICIENT POWER IN ORDER TO ESCAPE"
    b2c_printf("Have built up sufficient power in order to escape\n");
    // 01150 PRINT "YOUR PLANET'S GRAVITY."
    b2c_printf("Your planet's gravity.\n");
    // 01160 PRINT
    b2c_printf("");
    // 01170 PRINT "YOUR PLANET HAS ENOUGH POWER TO FIRE ONE BOMB AN HOUR."
    b2c_printf("Your planet has enough power to fire one bomb an hour.\n");
    // 01180 PRINT
    b2c_printf("");
    // 01190 PRINT "AT THE BEGINNING OF EACH HOUR YOU WILL BE ASKED TO GIVE AN"
    b2c_printf("At the beginning of each hour you will be asked to give an\n");
    // 01200 PRINT "ANGLE (BETWEEN 0 AND 360) AND A DISTANCE IN UNITS OF"
    b2c_printf("Angle (between 0 and 360) and a distance in units of\n");
    // 01210 PRINT "100 MILES (BETWEEN 100 AND 300), AFTER WHICH YOUR BOMB'S"
    b2c_printf("100 miles (between 100 and 300), after which your bomb's\n");
    // 01220 PRINT "DISTANCE FROM THE ENEMY SHIP WILL BE GIVEN."
    b2c_printf("Distance from the enemy ship will be given.\n");
    // 01230 PRINT
    b2c_printf("");
    // 01240 PRINT "AN EXPLOSION WITHIN 5,000 MILES OF THE ROMULAN SHIP"
    b2c_printf("An explosion within 5,000 miles of the romulan ship\n");
    // 01250 PRINT "WILL DESTROY IT."
    b2c_printf("Will destroy it.\n");
    // 01260 PRINT
    b2c_printf("");
    // 01270 PRINT "BELOW IS A DIAGRAM TO HELP YOU VISUALIZE YOUR PLIGHT."
    b2c_printf("Below is a diagram to help you visualize your plight.\n");
    // 01280 PRINT
    b2c_printf("");
    // 01290 PRINT
    b2c_printf("");
    // 01300 PRINT "                          90"
    b2c_printf("                          90\n");
    // 01310 PRINT "                    0000000000000"
    b2c_printf("                    0000000000000\n");
    // 01320 PRINT "                 0000000000000000000"
    b2c_printf("                 0000000000000000000\n");
    // 01330 PRINT "               000000           000000"
    b2c_printf("               000000           000000\n");
    // 01340 PRINT "             00000                 00000"
    b2c_printf("             00000                 00000\n");
    // 01350 PRINT "            00000    XXXXXXXXXXX    00000"
    b2c_printf("            00000    xxxxxxxxxxx    00000\n");
    // 01360 PRINT "           00000    XXXXXXXXXXXXX    00000"
    b2c_printf("           00000    xxxxxxxxxxxxx    00000\n");
    // 01370 PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    b2c_printf("          0000     xxxxxxxxxxxxxxx     0000\n");
    // 01380 PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    b2c_printf("         0000     xxxxxxxxxxxxxxxxx     0000\n");
    // 01390 PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    b2c_printf("        0000     xxxxxxxxxxxxxxxxxxx     0000\n");
    // 01400 PRINT "180<== 00000     XXXXXXXXXXXXXXXXXXX     00000 ==>0"
    b2c_printf("180<== 00000     xxxxxxxxxxxxxxxxxxx     00000 ==>0\n");
    // 01410 PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    b2c_printf("        0000     xxxxxxxxxxxxxxxxxxx     0000\n");
    // 01420 PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    b2c_printf("         0000     xxxxxxxxxxxxxxxxx     0000\n");
    // 01430 PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    b2c_printf("          0000     xxxxxxxxxxxxxxx     0000\n");
    // 01440 PRINT "           00000    XXXXXXXXXXXXX    00000"
    b2c_printf("           00000    xxxxxxxxxxxxx    00000\n");
    // 01450 PRINT "            00000    XXXXXXXXXXX    00000"
    b2c_printf("            00000    xxxxxxxxxxx    00000\n");
    // 01460 PRINT "             00000                 00000"
    b2c_printf("             00000                 00000\n");
    // 01470 PRINT "               000000           000000"
    b2c_printf("               000000           000000\n");
    // 01480 PRINT "                 0000000000000000000"
    b2c_printf("                 0000000000000000000\n");
    // 01490 PRINT "                    0000000000000"
    b2c_printf("                    0000000000000\n");
    // 01500 PRINT "                         270"
    b2c_printf("                         270\n");
    // 01510 PRINT
    b2c_printf("");
    // 01520 PRINT "X - YOUR PLANET"
    b2c_printf("X - your planet\n");
    // 01530 PRINT "O - THE ORBIT OF THE ROMULAN SHIP"
    b2c_printf("O - the orbit of the romulan ship\n");
    // 01540 PRINT
    b2c_printf("");
    // 01550 PRINT "ON THE ABOVE DIAGRAM, THE ROMULAN SHIP IS CIRCLING"
    b2c_printf("On the above diagram, the romulan ship is circling\n");
    // 01560 PRINT "COUNTERCLOCKWISE AROUND YOUR PLANET.  DON'T FORGET THAT"
    b2c_printf("Counterclockwise around your planet.  Don't forget that\n");
    // 01570 PRINT "WITHOUT SUFFICIENT POWER THE ROMULAN SHIP'S ALTITUDE"
    b2c_printf("Without sufficient power the romulan ship's altitude\n");
    // 01580 PRINT "AND ORBITAL RATE WILL REMAIN CONSTANT."
    b2c_printf("And orbital rate will remain constant.\n");
    // 01590 PRINT 
    b2c_printf("");
    // 01600 PRINT "GOOD LUCK.  THE FEDERATION IS COUNTING ON YOU."
    b2c_printf("Good luck.  The federation is counting on you.\n");

  Lbl_01610:
    // 01610 A=INT(360*RND(1))
    A_int = INT(360*RND(1));
    // 01620 D=INT(200*RND(1)+200)
    D_int = INT(200*RND(1)+200);
    // 01630 R=INT(20*RND(1)+10)
    R_int = INT(20*RND(1)+10);
    // 01640 H=0
    H_int = 0;

  Lbl_01650:
    // 01650 IF H=7 THEN 1890
    if(H_int==7)goto Lbl_01890;
    // 01660 H=H+1
    H_int = H_int+1;
    // 01670 PRINT
    b2c_printf("");
    // 01680 PRINT
    b2c_printf("");
    // 01690 PRINT "THIS IS HOUR";H;", AT WHAT ANGLE DO YOU WISH TO SEND"
    b2c_printf("This is hour %d This is hour, at what angle do you wish to send\n",H_int);
    // 01700 PRINT "YOUR PHOTON BOMB";
    b2c_printf("Your photon bomb");
    // 01710 INPUT A1
    // Start of Basic INPUT statement 01710
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&A1_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01710
    // 01720 PRINT "HOW FAR OUT DO YOU WISH TO DETONATE IT";
    b2c_printf("How far out do you wish to detonate it");
    // 01730 INPUT D1
    // Start of Basic INPUT statement 01730
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&D1_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01730
    // 01740 PRINT
    b2c_printf("");
    // 01750 PRINT
    b2c_printf("");
    // 01760 A=A+R
    A_int = A_int+R_int;
    // 01770 IF A<360 THEN 1790
    if(A_int<360)goto Lbl_01790;
    // 01780 A=A-360
    A_int = A_int-360;

  Lbl_01790:
    // 01790 T=ABS(A-A1)
    T_int = ABS(A_int-A1_int);
    // 01800 IF T<180 THEN 1820
    if(T_int<180)goto Lbl_01820;
    // 01810 T=360-T
    T_int = 360-T_int;

  Lbl_01820:
    // 01820 C=SQR(D*D+D1*D1-2*D*D1*COS(T*3.14159/180))
    C_int = SQR(D_int*D_int+D1_int*D1_int-2*D_int*D1_int*COS(T_int*3.14/180));
    // 01830 PRINT "YOUR PHOTON BOMB EXPLODED";C;"*10^2 MILES FROM THE"
    b2c_printf("Your photon bomb exploded %d Your photon bomb exploded*10^2 miles from the\n",C_int);
    // 01840 PRINT "ROMULAN SHIP."
    b2c_printf("Romulan ship.\n");
    // 01850 IF C<=50 THEN 1870
    if(C_int<=50)goto Lbl_01870;
    // 01860 GOTO 1650
    goto Lbl_01650;

  Lbl_01870:
    // 01870 PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR MISSION."
    b2c_printf("You have succesfully completed your mission.\n");
    // 01880 GOTO 1900
    goto Lbl_01900;

  Lbl_01890:
    // 01890 PRINT "YOU HAVE ALLOWED THE ROMULANS TO ESCAPE."
    b2c_printf("You have allowed the romulans to escape.\n");

  Lbl_01900:
    // 01900 PRINT "ANOTHER ROMULAN SHIP HAS GONE INTO ORBIT."
    b2c_printf("Another romulan ship has gone into orbit.\n");
    // 01910 PRINT "DO YOU WISH TO TRY TO DESTROY IT";
    b2c_printf("Do you wish to try to destroy it");
    // 01920 INPUT C$
    // Start of Basic INPUT statement 01920
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&C_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01920
    // 01930 IF C$="YES" THEN 1610
    if(strcmp(C_str,"Yes")==0)goto Lbl_01610;
    // 01940 PRINT "GOOD BYE."
    b2c_printf("Good bye.\n");
    // 01950 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
