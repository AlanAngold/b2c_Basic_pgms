/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/bunny.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5aecaae86b80 ---------A   00010 PRINT TAB(33);"BUNNY"
    0x5aecaae87ed0 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5aecaae88050 ---------A   00030 PRINT: PRINT: PRINT
    0x5aecaae86910 ---------A   00100 REM  "BUNNY" FROM AHL'S 'BASIC COMPUTER GAMES'
    0x5aecaae762b0 ---------A   00110 REM
    0x5aecaae85ca0 ---------A   00120 FOR I=0 TO 4: READ B(I): NEXT I
    0x5aecaae880a0 ---------A   00130 GOSUB 260
    0x5aecaae86780 ---------A   00140 L=64: REM  ASCII LETTER CODE...
    0x5aecaae86800 ---------A   00150 REM
    0x5aecaae762f0 ---------A T 00160 PRINT
    0x5aecaae85670 ---------A T 00170 READ X: IF X<0 THEN 160
    0x5aecaae8dd20 ---------A   00175 IF X>128 THEN 240
    0x5aecaae8e090 ---------A   00180 PRINT TAB(X);: READ Y
    0x5aecaae8ea70 ---------A   00190 FOR I=X TO Y: J=I-5*INT(I/5)
    0x5aecaae8eec0 ---------A   00200 PRINT CHR$(L+B(J));
    0x5aecaae8eff0 ---------A   00210 NEXT I
    0x5aecaae8f070 ---------A   00220 GOTO 170
    0x5aecaae8f0d0 ---------A   00230 REM
    0x5aecaae8f190 ---------A T 00240 GOSUB 260: GOTO 450
    0x5aecaae8f1f0 ---------B   00250 REM
    0x5aecaae8f820 ---------B G 00260 FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
    0x5aecaae8f880 ---------B   00270 RETURN
    0x5aecaae8f900 ---------A   00280 REM
    0x5aecaae8fe00 ---------A   00290 DATA 2,21,14,14,25
    0x5aecaae90e60 ---------A   00300 DATA 1,2,-1,0,2,45,50,-1,0,5,43,52,-1,0,7,41,52,-1
    0x5aecaae92080 ---------A   00310 DATA 1,9,37,50,-1,2,11,36,50,-1,3,13,34,49,-1,4,14,32,48,-1
    0x5aecaae932a0 ---------A   00320 DATA 5,15,31,47,-1,6,16,30,45,-1,7,17,29,44,-1,8,19,28,43,-1
    0x5aecaae944b0 ---------A   00330 DATA 9,20,27,41,-1,10,21,26,40,-1,11,22,25,38,-1,12,22,24,36,-1
    0x5aecaae95260 ---------A   00340 DATA 13,34,-1,14,33,-1,15,31,-1,17,29,-1,18,27,-1
    0x5aecaae96010 ---------A   00350 DATA 19,26,-1,16,28,-1,13,30,-1,11,31,-1,10,32,-1
    0x5aecaae96ea0 ---------A   00360 DATA 8,33,-1,7,34,-1,6,13,16,34,-1,5,12,16,35,-1
    0x5aecaae97d30 ---------A   00370 DATA 4,12,16,35,-1,3,12,15,35,-1,2,35,-1,1,35,-1
    0x5aecaae98cb0 ---------A   00380 DATA 2,34,-1,3,34,-1,4,33,-1,6,33,-1,10,32,34,34,-1
    0x5aecaae99d60 ---------A   00390 DATA 14,17,19,25,28,31,35,35,-1,15,19,23,30,36,36,-1
    0x5aecaae9ac00 ---------A   00400 DATA 14,18,21,21,24,30,37,37,-1,13,18,23,29,33,38,-1
    0x5aecaae9ba90 ---------A   00410 DATA 12,29,31,33,-1,11,13,17,17,19,19,22,22,24,31,-1
    0x5aecaae9c4c0 ---------A   00420 DATA 10,11,17,18,22,22,24,24,29,29,-1
    0x5aecaae9cfb0 ---------A   00430 DATA 22,23,26,29,-1,27,29,-1,28,29,-1,4096
    0x5aecaae9d020 ---------A   00440 REM
    0x5aecaae9d080 ---------A T 00450 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00160      00170T
     00170      00220T
     00240      00175T
     00260      00130G
     00450      00240T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5aecaae86b80 (00010)   0x5aecaae86b80 (00010)   0x5aecaae9d080 (00450)   0x5aecaae9d080 (00450)   
   B) 0x5aecaae8f1f0 (00250)   0x5aecaae8f820 (00260)   0x5aecaae8f880 (00270)   0x5aecaae8f880 (00270)   

    NOTE: Routine B overlaps, or is tangled with, routine A!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01410 - 10000    8600 

 */



/*
 *  Symbol Table Listing for 'basic/bunny.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B               Array    Integer         {0,9} 
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    L                        Integer     
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
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     
    Y                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/bunny.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5aecaae86b80 ---------A   01000 PRINT TAB(33);"BUNNY"
    0x5aecaae87ed0 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5aecaae88050 ---------A   01020 PRINT: PRINT: PRINT
    0x5aecaae86910 ---------A   01030 REM  "BUNNY" FROM AHL'S 'BASIC COMPUTER GAMES'
    0x5aecaae762b0 ---------A   01040 REM
    0x5aecaae85ca0 ---------A   01050 FOR I=0 TO 4: READ B(I): NEXT I
    0x5aecaae880a0 ---------A   01060 GOSUB 1380
    0x5aecaae86780 ---------A   01070 L=64: REM  ASCII LETTER CODE...
    0x5aecaae86800 ---------A   01080 REM
    0x5aecaae762f0 ---------A T 01090 PRINT
    0x5aecaae85670 ---------A T 01100 READ X: IF X<0 THEN 1090
    0x5aecaae8dd20 ---------A   01110 IF X>128 THEN 1180
    0x5aecaae8e090 ---------A   01120 PRINT TAB(X);: READ Y
    0x5aecaae8ea70 ---------A   01130 FOR I=X TO Y: J=I-5*INT(I/5)
    0x5aecaae8eec0 ---------A   01140 PRINT CHR$(L+B(J));
    0x5aecaae8eff0 ---------A   01150 NEXT I
    0x5aecaae8f070 ---------A   01160 GOTO 1100
    0x5aecaae8f0d0 ---------A   01170 REM
    0x5aecaae8f190 ---------A T 01180 GOSUB 260: GOTO 1360
    0x5aecaae8f900 ---------A   01190 REM
    0x5aecaae8fe00 ---------A   01200 DATA 2,21,14,14,25
    0x5aecaae90e60 ---------A   01210 DATA 1,2,-1,0,2,45,50,-1,0,5,43,52,-1,0,7,41,52,-1
    0x5aecaae92080 ---------A   01220 DATA 1,9,37,50,-1,2,11,36,50,-1,3,13,34,49,-1,4,14,32,48,-1
    0x5aecaae932a0 ---------A   01230 DATA 5,15,31,47,-1,6,16,30,45,-1,7,17,29,44,-1,8,19,28,43,-1
    0x5aecaae944b0 ---------A   01240 DATA 9,20,27,41,-1,10,21,26,40,-1,11,22,25,38,-1,12,22,24,36,-1
    0x5aecaae95260 ---------A   01250 DATA 13,34,-1,14,33,-1,15,31,-1,17,29,-1,18,27,-1
    0x5aecaae96010 ---------A   01260 DATA 19,26,-1,16,28,-1,13,30,-1,11,31,-1,10,32,-1
    0x5aecaae96ea0 ---------A   01270 DATA 8,33,-1,7,34,-1,6,13,16,34,-1,5,12,16,35,-1
    0x5aecaae97d30 ---------A   01280 DATA 4,12,16,35,-1,3,12,15,35,-1,2,35,-1,1,35,-1
    0x5aecaae98cb0 ---------A   01290 DATA 2,34,-1,3,34,-1,4,33,-1,6,33,-1,10,32,34,34,-1
    0x5aecaae99d60 ---------A   01300 DATA 14,17,19,25,28,31,35,35,-1,15,19,23,30,36,36,-1
    0x5aecaae9ac00 ---------A   01310 DATA 14,18,21,21,24,30,37,37,-1,13,18,23,29,33,38,-1
    0x5aecaae9ba90 ---------A   01320 DATA 12,29,31,33,-1,11,13,17,17,19,19,22,22,24,31,-1
    0x5aecaae9c4c0 ---------A   01330 DATA 10,11,17,18,22,22,24,24,29,29,-1
    0x5aecaae9cfb0 ---------A   01340 DATA 22,23,26,29,-1,27,29,-1,28,29,-1,4096
    0x5aecaae9d020 ---------A   01350 REM
    0x5aecaae9d080 ---------A T 01360 END
    0x5aecaae8f1f0 ---------B   01370 REM
    0x5aecaae8f820 ---------B G 01380 FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
    0x5aecaae9f090 ---------B   01390 GOTO 01400
    0x5aecaae9f0d0 ---------B T 01400 RETURN
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
char* data_01200s[]={"2","21","14","14","25"};
char* data_01210s[]={"1","2","-1","0","2","45","50","-1","0","5","43","52","-1","0","7","41","52","-1"};
char* data_01220s[]={"1","9","37","50","-1","2","11","36","50","-1","3","13","34","49","-1","4","14","32","48","-1"};
char* data_01230s[]={"5","15","31","47","-1","6","16","30","45","-1","7","17","29","44","-1","8","19","28","43","-1"};
char* data_01240s[]={"9","20","27","41","-1","10","21","26","40","-1","11","22","25","38","-1","12","22","24","36","-1"};
char* data_01250s[]={"13","34","-1","14","33","-1","15","31","-1","17","29","-1","18","27","-1"};
char* data_01260s[]={"19","26","-1","16","28","-1","13","30","-1","11","31","-1","10","32","-1"};
char* data_01270s[]={"8","33","-1","7","34","-1","6","13","16","34","-1","5","12","16","35","-1"};
char* data_01280s[]={"4","12","16","35","-1","3","12","15","35","-1","2","35","-1","1","35","-1"};
char* data_01290s[]={"2","34","-1","3","34","-1","4","33","-1","6","33","-1","10","32","34","34","-1"};
char* data_01300s[]={"14","17","19","25","28","31","35","35","-1","15","19","23","30","36","36","-1"};
char* data_01310s[]={"14","18","21","21","24","30","37","37","-1","13","18","23","29","33","38","-1"};
char* data_01320s[]={"12","29","31","33","-1","11","13","17","17","19","19","22","22","24","31","-1"};
char* data_01330s[]={"10","11","17","18","22","22","24","24","29","29","-1"};
char* data_01340s[]={"22","23","26","29","-1","27","29","-1","28","29","-1","4096"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1200,  5,data_01200s},
    { 1210, 18,data_01210s},
    { 1220, 20,data_01220s},
    { 1230, 20,data_01230s},
    { 1240, 20,data_01240s},
    { 1250, 15,data_01250s},
    { 1260, 15,data_01260s},
    { 1270, 16,data_01270s},
    { 1280, 16,data_01280s},
    { 1290, 17,data_01290s},
    { 1300, 16,data_01300s},
    { 1310, 16,data_01310s},
    { 1320, 16,data_01320s},
    { 1330, 11,data_01330s},
    { 1340, 12,data_01340s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    B_int_arr[10];                             // Basic: B 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    L_int;                                     // Basic: L 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01380();

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
    // 01370 REM

void Routine_01380(){
    // 01380 FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
    int dummy_1380=0; // Ignore this line.
}; // End-For(I_int)
// 01390 GOTO 01400
goto Lbl_01400;

  Lbl_01400:
// 01400 RETURN
return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
