/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/orbit.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e8f11121b80 ---------A   00002 PRINT TAB(33);"ORBIT"
    0x5e8f11122ed0 ---------A   00004 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e8f111212d0 ---------A   00006 PRINT:PRINT:PRINT
    0x5e8f111112f0 ---------A   00010 PRINT "SOMEWHERE ABOVE YOUR PLANET IS A ROMULAN SHIP."
    0x5e8f111225c0 ---------A   00015 PRINT
    0x5e8f11121040 ---------A   00020 PRINT "THE SHIP IS IN A CONSTANT POLAR ORBIT.  ITS"
    0x5e8f11121480 ---------A   00025 PRINT "DISTANCE FROM THE CENTER OF YOUR PLANET IS FROM"
    0x5e8f11120be0 ---------A   00030 PRINT "10,000 TO 30,000 MILES AND AT ITS PRESENT VELOCITY CAN"
    0x5e8f111230e0 ---------A   00031 PRINT "CIRCLE YOUR PLANET ONCE EVERY 12 TO 36 HOURS."
    0x5e8f11123130 ---------A   00035 PRINT
    0x5e8f11121730 ---------A   00040 PRINT "UNFORTUNATELY, THEY ARE USING A CLOAKING DEVICE SO"
    0x5e8f111231c0 ---------A   00045 PRINT "YOU ARE UNABLE TO SEE THEM, BUT WITH A SPECIAL"
    0x5e8f11128990 ---------A   00050 PRINT "INSTRUMENT YOU CAN TELL HOW NEAR THEIR SHIP YOUR"
    0x5e8f11128b40 ---------A   00055 PRINT "PHOTON BOMB EXPLODED.  YOU HAVE SEVEN HOURS UNTIL THEY"
    0x5e8f11128c90 ---------A   00060 PRINT "HAVE BUILT UP SUFFICIENT POWER IN ORDER TO ESCAPE"
    0x5e8f11128da0 ---------A   00065 PRINT "YOUR PLANET'S GRAVITY."
    0x5e8f11128e40 ---------A   00070 PRINT
    0x5e8f11128fa0 ---------A   00075 PRINT "YOUR PLANET HAS ENOUGH POWER TO FIRE ONE BOMB AN HOUR."
    0x5e8f11129040 ---------A   00080 PRINT
    0x5e8f111291f0 ---------A   00085 PRINT "AT THE BEGINNING OF EACH HOUR YOU WILL BE ASKED TO GIVE AN"
    0x5e8f11129390 ---------A   00090 PRINT "ANGLE (BETWEEN 0 AND 360) AND A DISTANCE IN UNITS OF"
    0x5e8f11129530 ---------A   00095 PRINT "100 MILES (BETWEEN 100 AND 300), AFTER WHICH YOUR BOMB'S"
    0x5e8f11129680 ---------A   00100 PRINT "DISTANCE FROM THE ENEMY SHIP WILL BE GIVEN."
    0x5e8f11129720 ---------A   00105 PRINT
    0x5e8f11129870 ---------A   00110 PRINT "AN EXPLOSION WITHIN 5,000 MILES OF THE ROMULAN SHIP"
    0x5e8f11129980 ---------A   00111 PRINT "WILL DESTROY IT."
    0x5e8f11129a20 ---------A   00114 PRINT
    0x5e8f11129b70 ---------A   00115 PRINT "BELOW IS A DIAGRAM TO HELP YOU VISUALIZE YOUR PLIGHT."
    0x5e8f11129bc0 ---------A   00116 PRINT
    0x5e8f11129c50 ---------A   00117 PRINT
    0x5e8f11129da0 ---------A   00168 PRINT "                          90"
    0x5e8f11129ef0 ---------A   00170 PRINT "                    0000000000000"
    0x5e8f1112a040 ---------A   00171 PRINT "                 0000000000000000000"
    0x5e8f1112a3e0 ---------A   00172 PRINT "               000000           000000"
    0x5e8f1112a570 ---------A   00173 PRINT "             00000                 00000"
    0x5e8f1112a700 ---------A   00174 PRINT "            00000    XXXXXXXXXXX    00000"
    0x5e8f1112a890 ---------A   00175 PRINT "           00000    XXXXXXXXXXXXX    00000"
    0x5e8f1112aa30 ---------A   00176 PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    0x5e8f1112abd0 ---------A   00177 PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    0x5e8f1112ad70 ---------A   00178 PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    0x5e8f1112af10 ---------A   00179 PRINT "180<== 00000     XXXXXXXXXXXXXXXXXXX     00000 ==>0"
    0x5e8f1112b0b0 ---------A   00180 PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    0x5e8f1112b240 ---------A   00181 PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    0x5e8f1112b3d0 ---------A   00182 PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    0x5e8f1112b560 ---------A   00183 PRINT "           00000    XXXXXXXXXXXXX    00000"
    0x5e8f1112b6f0 ---------A   00184 PRINT "            00000    XXXXXXXXXXX    00000"
    0x5e8f1112b880 ---------A   00185 PRINT "             00000                 00000"
    0x5e8f1112ba10 ---------A   00186 PRINT "               000000           000000"
    0x5e8f1112bb60 ---------A   00187 PRINT "                 0000000000000000000"
    0x5e8f1112bcb0 ---------A   00188 PRINT "                    0000000000000"
    0x5e8f1112be10 ---------A   00190 PRINT "                         270"
    0x5e8f1112be90 ---------A   00192 PRINT
    0x5e8f1112c000 ---------A   00195 PRINT "X - YOUR PLANET"
    0x5e8f1112c160 ---------A   00196 PRINT "O - THE ORBIT OF THE ROMULAN SHIP"
    0x5e8f1112c200 ---------A   00197 PRINT
    0x5e8f1112c3a0 ---------A   00198 PRINT "ON THE ABOVE DIAGRAM, THE ROMULAN SHIP IS CIRCLING"
    0x5e8f1112c550 ---------A   00199 PRINT "COUNTERCLOCKWISE AROUND YOUR PLANET.  DON'T FORGET THAT"
    0x5e8f1112c6e0 ---------A   00200 PRINT "WITHOUT SUFFICIENT POWER THE ROMULAN SHIP'S ALTITUDE"
    0x5e8f1112c850 ---------A   00210 PRINT "AND ORBITAL RATE WILL REMAIN CONSTANT."
    0x5e8f1112c8f0 ---------A   00220 PRINT 
    0x5e8f1112ca60 ---------A   00230 PRINT "GOOD LUCK.  THE FEDERATION IS COUNTING ON YOU."
    0x5e8f1112d000 ---------A T 00270 A=INT(360*RND(1))
    0x5e8f1112d690 ---------A   00280 D=INT(200*RND(1)+200)
    0x5e8f1112dd20 ---------A   00290 R=INT(20*RND(1)+10)
    0x5e8f1112dff0 ---------A   00300 H=0
    0x5e8f111206d0 ---------A T 00310 IF H=7 THEN 490
    0x5e8f1112e930 ---------A   00320 H=H+1
    0x5e8f1112e9a0 ---------A   00325 PRINT
    0x5e8f1112ea40 ---------A   00326 PRINT
    0x5e8f1112edb0 ---------A   00330 PRINT "THIS IS HOUR";H;", AT WHAT ANGLE DO YOU WISH TO SEND"
    0x5e8f1112ef20 ---------A   00335 PRINT "YOUR PHOTON BOMB";
    0x5e8f11120670 ---------A   00340 INPUT A1
    0x5e8f1112f290 ---------A   00350 PRINT "HOW FAR OUT DO YOU WISH TO DETONATE IT";
    0x5e8f1112f4a0 ---------A   00360 INPUT D1
    0x5e8f1112f520 ---------A   00365 PRINT
    0x5e8f1112f590 ---------A   00366 PRINT
    0x5e8f1112f8e0 ---------A   00370 A=A+R
    0x5e8f1112fb30 ---------A   00380 IF A<360 THEN 400
    0x5e8f1112fe70 ---------A   00390 A=A-360
    0x5e8f11130360 ---------A T 00400 T=ABS(A-A1)
    0x5e8f111305b0 ---------A   00410 IF T<180 THEN 430
    0x5e8f11130910 ---------A   00420 T=360-T
    0x5e8f111317b0 ---------A T 00430 C=SQR(D*D+D1*D1-2*D*D1*COS(T*3.14159/180))
    0x5e8f11131b20 ---------A   00440 PRINT "YOUR PHOTON BOMB EXPLODED";C;"*10^2 MILES FROM THE"
    0x5e8f11131c70 ---------A   00445 PRINT "ROMULAN SHIP."
    0x5e8f11131ec0 ---------A   00450 IF C<=50 THEN 470
    0x5e8f11131f70 ---------A   00460 GOTO 310
    0x5e8f111320d0 ---------A T 00470 PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR MISSION."
    0x5e8f11132160 ---------A   00480 GOTO 500
    0x5e8f111322e0 ---------A T 00490 PRINT "YOU HAVE ALLOWED THE ROMULANS TO ESCAPE."
    0x5e8f11132470 ---------A T 00500 PRINT "ANOTHER ROMULAN SHIP HAS GONE INTO ORBIT."
    0x5e8f111325f0 ---------A   00510 PRINT "DO YOU WISH TO TRY TO DESTROY IT";
    0x5e8f11132810 ---------A   00520 INPUT C$
    0x5e8f11132a90 ---------A   00530 IF C$="YES" THEN 270
    0x5e8f11132bf0 ---------A   00540 PRINT "GOOD BYE."
    0x5e8f11132c40 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00270      00530T
     00310      00460T
     00400      00380T
     00430      00410T
     00470      00450T
     00490      00310T
     00500      00480T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5e8f11121b80 (00002)   0x5e8f11121b80 (00002)   0x5e8f11132c40 (00999)   0x5e8f11132c40 (00999)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01960 - 10000    8050 

 */



/*
 *  Symbol Table Listing for 'basic/orbit.bas'
 *
    A                        Integer     
    A1                       Integer     
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    C                        Integer     
    C$                       String      
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D                        Integer     
    D1                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Integer     
    HEX$            Function String          args=1, int    
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/orbit.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e8f11121b80 ---------A   01000 PRINT TAB(33);"ORBIT"
    0x5e8f11122ed0 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e8f111212d0 ---------A   01020 PRINT:PRINT:PRINT
    0x5e8f111112f0 ---------A   01030 PRINT "SOMEWHERE ABOVE YOUR PLANET IS A ROMULAN SHIP."
    0x5e8f111225c0 ---------A   01040 PRINT
    0x5e8f11121040 ---------A   01050 PRINT "THE SHIP IS IN A CONSTANT POLAR ORBIT.  ITS"
    0x5e8f11121480 ---------A   01060 PRINT "DISTANCE FROM THE CENTER OF YOUR PLANET IS FROM"
    0x5e8f11120be0 ---------A   01070 PRINT "10,000 TO 1070,000 MILES AND AT ITS PRESENT VELOCITY CAN"
    0x5e8f111230e0 ---------A   01080 PRINT "CIRCLE YOUR PLANET ONCE EVERY 12 TO 36 HOURS."
    0x5e8f11123130 ---------A   01090 PRINT
    0x5e8f11121730 ---------A   01100 PRINT "UNFORTUNATELY, THEY ARE USING A CLOAKING DEVICE SO"
    0x5e8f111231c0 ---------A   01110 PRINT "YOU ARE UNABLE TO SEE THEM, BUT WITH A SPECIAL"
    0x5e8f11128990 ---------A   01120 PRINT "INSTRUMENT YOU CAN TELL HOW NEAR THEIR SHIP YOUR"
    0x5e8f11128b40 ---------A   01130 PRINT "PHOTON BOMB EXPLODED.  YOU HAVE SEVEN HOURS UNTIL THEY"
    0x5e8f11128c90 ---------A   01140 PRINT "HAVE BUILT UP SUFFICIENT POWER IN ORDER TO ESCAPE"
    0x5e8f11128da0 ---------A   01150 PRINT "YOUR PLANET'S GRAVITY."
    0x5e8f11128e40 ---------A   01160 PRINT
    0x5e8f11128fa0 ---------A   01170 PRINT "YOUR PLANET HAS ENOUGH POWER TO FIRE ONE BOMB AN HOUR."
    0x5e8f11129040 ---------A   01180 PRINT
    0x5e8f111291f0 ---------A   01190 PRINT "AT THE BEGINNING OF EACH HOUR YOU WILL BE ASKED TO GIVE AN"
    0x5e8f11129390 ---------A   01200 PRINT "ANGLE (BETWEEN 0 AND 360) AND A DISTANCE IN UNITS OF"
    0x5e8f11129530 ---------A   01210 PRINT "100 MILES (BETWEEN 100 AND 300), AFTER WHICH YOUR BOMB'S"
    0x5e8f11129680 ---------A   01220 PRINT "DISTANCE FROM THE ENEMY SHIP WILL BE GIVEN."
    0x5e8f11129720 ---------A   01230 PRINT
    0x5e8f11129870 ---------A   01240 PRINT "AN EXPLOSION WITHIN 5,000 MILES OF THE ROMULAN SHIP"
    0x5e8f11129980 ---------A   01250 PRINT "WILL DESTROY IT."
    0x5e8f11129a20 ---------A   01260 PRINT
    0x5e8f11129b70 ---------A   01270 PRINT "BELOW IS A DIAGRAM TO HELP YOU VISUALIZE YOUR PLIGHT."
    0x5e8f11129bc0 ---------A   01280 PRINT
    0x5e8f11129c50 ---------A   01290 PRINT
    0x5e8f11129da0 ---------A   01300 PRINT "                          90"
    0x5e8f11129ef0 ---------A   01310 PRINT "                    0000000000000"
    0x5e8f1112a040 ---------A   01320 PRINT "                 0000000000000000000"
    0x5e8f1112a3e0 ---------A   01330 PRINT "               000000           000000"
    0x5e8f1112a570 ---------A   01340 PRINT "             00000                 00000"
    0x5e8f1112a700 ---------A   01350 PRINT "            00000    XXXXXXXXXXX    00000"
    0x5e8f1112a890 ---------A   01360 PRINT "           00000    XXXXXXXXXXXXX    00000"
    0x5e8f1112aa30 ---------A   01370 PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    0x5e8f1112abd0 ---------A   01380 PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    0x5e8f1112ad70 ---------A   01390 PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    0x5e8f1112af10 ---------A   01400 PRINT "180<== 00000     XXXXXXXXXXXXXXXXXXX     00000 ==>0"
    0x5e8f1112b0b0 ---------A   01410 PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    0x5e8f1112b240 ---------A   01420 PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    0x5e8f1112b3d0 ---------A   01430 PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    0x5e8f1112b560 ---------A   01440 PRINT "           00000    XXXXXXXXXXXXX    00000"
    0x5e8f1112b6f0 ---------A   01450 PRINT "            00000    XXXXXXXXXXX    00000"
    0x5e8f1112b880 ---------A   01460 PRINT "             00000                 00000"
    0x5e8f1112ba10 ---------A   01470 PRINT "               000000           000000"
    0x5e8f1112bb60 ---------A   01480 PRINT "                 0000000000000000000"
    0x5e8f1112bcb0 ---------A   01490 PRINT "                    0000000000000"
    0x5e8f1112be10 ---------A   01500 PRINT "                         270"
    0x5e8f1112be90 ---------A   01510 PRINT
    0x5e8f1112c000 ---------A   01520 PRINT "X - YOUR PLANET"
    0x5e8f1112c160 ---------A   01530 PRINT "O - THE ORBIT OF THE ROMULAN SHIP"
    0x5e8f1112c200 ---------A   01540 PRINT
    0x5e8f1112c3a0 ---------A   01550 PRINT "ON THE ABOVE DIAGRAM, THE ROMULAN SHIP IS CIRCLING"
    0x5e8f1112c550 ---------A   01560 PRINT "COUNTERCLOCKWISE AROUND YOUR PLANET.  DON'T FORGET THAT"
    0x5e8f1112c6e0 ---------A   01570 PRINT "WITHOUT SUFFICIENT POWER THE ROMULAN SHIP'S ALTITUDE"
    0x5e8f1112c850 ---------A   01580 PRINT "AND ORBITAL RATE WILL REMAIN CONSTANT."
    0x5e8f1112c8f0 ---------A   01590 PRINT 
    0x5e8f1112ca60 ---------A   01600 PRINT "GOOD LUCK.  THE FEDERATION IS COUNTING ON YOU."
    0x5e8f1112d000 ---------A T 01610 A=INT(360*RND(1))
    0x5e8f1112d690 ---------A   01620 D=INT(200*RND(1)+200)
    0x5e8f1112dd20 ---------A   01630 R=INT(20*RND(1)+10)
    0x5e8f1112dff0 ---------A   01640 H=0
    0x5e8f111206d0 ---------A T 01650 IF H=7 THEN 1890
    0x5e8f1112e930 ---------A   01660 H=H+1
    0x5e8f1112e9a0 ---------A   01670 PRINT
    0x5e8f1112ea40 ---------A   01680 PRINT
    0x5e8f1112edb0 ---------A   01690 PRINT "THIS IS HOUR";H;", AT WHAT ANGLE DO YOU WISH TO SEND"
    0x5e8f1112ef20 ---------A   01700 PRINT "YOUR PHOTON BOMB";
    0x5e8f11120670 ---------A   01710 INPUT A1
    0x5e8f1112f290 ---------A   01720 PRINT "HOW FAR OUT DO YOU WISH TO DETONATE IT";
    0x5e8f1112f4a0 ---------A   01730 INPUT D1
    0x5e8f1112f520 ---------A   01740 PRINT
    0x5e8f1112f590 ---------A   01750 PRINT
    0x5e8f1112f8e0 ---------A   01760 A=A+R
    0x5e8f1112fb30 ---------A   01770 IF A<360 THEN 1790
    0x5e8f1112fe70 ---------A   01780 A=A-360
    0x5e8f11130360 ---------A T 01790 T=ABS(A-A1)
    0x5e8f111305b0 ---------A   01800 IF T<180 THEN 1820
    0x5e8f11130910 ---------A   01810 T=360-T
    0x5e8f111317b0 ---------A T 01820 C=SQR(D*D+D1*D1-2*D*D1*COS(T*3.14159/180))
    0x5e8f11131b20 ---------A   01830 PRINT "YOUR PHOTON BOMB EXPLODED";C;"*10^2 MILES FROM THE"
    0x5e8f11131c70 ---------A   01840 PRINT "ROMULAN SHIP."
    0x5e8f11131ec0 ---------A   01850 IF C<=50 THEN 1870
    0x5e8f11131f70 ---------A   01860 GOTO 1650
    0x5e8f111320d0 ---------A T 01870 PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR MISSION."
    0x5e8f11132160 ---------A   01880 GOTO 1900
    0x5e8f111322e0 ---------A T 01890 PRINT "YOU HAVE ALLOWED THE ROMULANS TO ESCAPE."
    0x5e8f11132470 ---------A T 01900 PRINT "ANOTHER ROMULAN SHIP HAS GONE INTO ORBIT."
    0x5e8f111325f0 ---------A   01910 PRINT "DO YOU WISH TO TRY TO DESTROY IT";
    0x5e8f11132810 ---------A   01920 INPUT C$
    0x5e8f11132a90 ---------A   01930 IF C$="YES" THEN 1610
    0x5e8f11132bf0 ---------A   01940 PRINT "GOOD BYE."
    0x5e8f11132c40 ---------A   01950 END
 */

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
