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
char* data_01130s[]={"BILL","MARY","PAUL","SUZY","JOHN"};
char* data_01170s[]={"LOUNGE","ATRIUM","LIVING","DINING","TROPHY","GARAGE"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1130,  5,data_01130s},
    { 1170,  6,data_01170s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    iAnswer;                                   // Basic: A 
char*  s1Answer;                                  // Basic: A$ 
char*  s2Answer;                                  // Basic: A1$ 
int    B_int;                                     // Basic: B 
int    ClewsoQuestionCnt;                         // Basic: C 
int    ClewsoConfrontCnt;                         // Basic: C1 
int    TallyInfoCorrect;                          // Basic: H 
int    idx1;                                      // Basic: I 
int    Person;                                    // Basic: K 
int    Time;                                      // Basic: L 
int    Killer;                                    // Basic: M 
int    SuspectMovement[5][9];                     // Basic: P 
int    RoomOfMurder;                              // Basic: R 
char*  RoomNames[6];                              // Basic: R$ 
int    SuspectLocationAtHour;                     // Basic: R1 
char*  RoomName;                                  // Basic: R1$ 
int    Suspect;                                   // Basic: S 
char*  NPCNames[5];                               // Basic: S$ 
char*  SuspectName;                               // Basic: S1$ 
int    TimeOfMurder;                              // Basic: T 
int    idx2;                                      // Basic: T1 
char*  TimeAnswer;                                // Basic: T1$ 
int    X_int_arr[10];                             // Basic: X 
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
    // 01000    DIM P(5, 9), S$(5), R$(6), X(10)
    // 01010    RANDOMIZE TIMER
    RANDOMIZE(false);
    // 01020    CLS
    ClearScreen(0);
    // 01030    REM*****************************************************
    // 01040    REM*                                                   *
    // 01050    REM*     INSPECTOR CLEWSO                              *
    // 01060    REM*     BY:RON CARLSON                                *
    // 01070    REM*     FEB. 1979                                     *
    // 01080    REM*                                                   *
    // 01090    REM*****************************************************
    // 01100    FOR I = 1 TO 5
    for(idx1=1;idx1<=5;idx1++){
        // 01110        READ S$(I)
        NPCNames[idx1] = Get_Data_String();
        // 01120    NEXT I
        int dummy_1120=0; // Ignore this line.
    }; // End-For(idx1)
    // 01130    DATA "BILL","MARY","PAUL","SUZY","JOHN"
    // 01140    FOR I = 1 TO 6
    for(idx1=1;idx1<=6;idx1++){
        // 01150        READ R$(I)
        RoomNames[idx1] = Get_Data_String();
        // 01160    NEXT I
        int dummy_1160=0; // Ignore this line.
    }; // End-For(idx1)
    // 01170    DATA "LOUNGE","ATRIUM","LIVING","DINING","TROPHY","GARAGE"

  StartGame:
    // 01180    PRINT "BILL, MARY, JOHN, SUZY AND PAUL ARE HOUSE GUESTS.  THEIR HOST "
    b2c_printf("Bill, mary, john, suzy and paul are house guests.  Their host \n");
    // 01190    PRINT "WAS MURDERED BY ONE OF THEM BETWEEN 1 PM. AND 9 PM."
    b2c_printf("Was murdered by one of them between 1 pm. And 9 pm.\n");
    // 01200    PRINT "YOUR JOB AS INSPECTOR CLEWSO, IS TO FIND THE KILLER, TIME AND"
    b2c_printf("Your job as inspector clewso, is to find the killer, time and\n");
    // 01210    PRINT "ROOM.  YOU WILL BE GIVEN A HOUSE DIAGRAM AND A SET OF QUESTIONS"
    b2c_printf("Room.  You will be given a house diagram and a set of questions\n");
    // 01220    PRINT "FOR THE SUSPECTS, BUT THE GUILTY PERSON MAY TRY TO MISLEAD YOU,"
    b2c_printf("For the suspects, but the guilty person may try to mislead you,\n");
    // 01230    PRINT "SOME OF THE TIME."
    b2c_printf("Some of the time.\n");
    // 01240    PRINT "IF ONE OF THE SUSPECTS CLAIM THAT THE HOST WAS ALREADY DEAD,"
    b2c_printf("If one of the suspects claim that the host was already dead,\n");
    // 01250    PRINT "OR THAT THE HOST WAS STILL ALIVE, THEN YOU HAVE FOUND THE "
    b2c_printf("Or that the host was still alive, then you have found the \n");
    // 01260    PRINT "ROOM WHERE THE MURDER TOOK PLACE."
    b2c_printf("Room where the murder took place.\n");
    // 01270    PRINT
    b2c_printf("");
    // 01280    H = 0
    TallyInfoCorrect = 0;
    // 01290    C = 0
    ClewsoQuestionCnt = 0;
    // 01300    C1 = 0
    ClewsoConfrontCnt = 0;
    // 01310    PRINT "   !-----------------------------!"
    b2c_printf("   !-----------------------------!\n");
    // 01320    PRINT "   !         !         O GARAGE  !"
    b2c_printf("   !         !         O garage  !\n");
    // 01330    PRINT "   !         O TROPHY  !         !"
    b2c_printf("   !         O trophy  !         !\n");
    // 01340    PRINT "   ! DINING  !---!--  -!  --     !"
    b2c_printf("   ! Dining  !---!--  -!  --     !\n");
    // 01350    PRINT "   !                       !-----! NO WINDOWS"
    b2c_printf("   !                       !-----! No windows\n");
    // 01360    PRINT "   !--O----------!        -!     !"
    b2c_printf("   !--O----------!        -!     !\n");
    // 01370    PRINT "   !                             !---"
    b2c_printf("   !                             !---\n");
    // 01380    PRINT "   !             !--  -------       !"
    b2c_printf("   !             !--  -------       !\n");
    // 01390    PRINT "   ! LIVING   ---!         !        !"
    b2c_printf("   ! Living   ---!         !        !\n");
    // 01400    PRINT "   !--        !            O LOUNGE !"
    b2c_printf("   !--        !            O lounge !\n");
    // 01410    PRINT "     !        0  ATRIUM    !    ----!"
    b2c_printf("     !        0  Atrium    !    ----!\n");
    // 01420    PRINT "     !--------!------------!----!"
    b2c_printf("     !--------!------------!----!\n");
    // 01430    FOR K = 1 TO 5
    for(Person=1;Person<=5;Person++){
        // 01440    P(K, 1) = INT(6 * RND(K)) + 1
        SuspectMovement[Person][1] = INT(6*RND(Person))+1;
        // 01450    NEXT K
        int dummy_1450=0; // Ignore this line.
    }; // End-For(Person)
    // 01460    FOR L = 2 TO 9
    for(Time=2;Time<=9;Time++){
        // 01470    FOR K = 1 TO 5
        for(Person=1;Person<=5;Person++){

  NotPreviousRoom:
            // 01480    A = INT(6 * RND(K)) + 1
            iAnswer = INT(6*RND(Person))+1;
            // 01490    IF A = P(K, L - 1) THEN 1480
            if(iAnswer==SuspectMovement[Person][Time-1])goto NotPreviousRoom;
            // 01500    P(K, L) = A
            SuspectMovement[Person][Time] = iAnswer;
            // 01510    NEXT K
            int dummy_1510=0; // Ignore this line.
        }; // End-For(Person)
        // 01520    NEXT L
        int dummy_1520=0; // Ignore this line.
    }; // End-For(Time)
    // 01530    REM ESTABLISHED SUSPECT'S MOVEMENTS
    // 01540    REM RANDOM ASSIGNMENT OF KILLER, TIME AND ROOM
    // 01550    M = INT(5 * RND(1)) + 1
    Killer = INT(5*RND(1))+1;
    // 01560    T = INT(9 * RND(2)) + 1
    TimeOfMurder = INT(9*RND(2))+1;
    // 01570    R = P(M, T)
    RoomOfMurder = SuspectMovement[Killer][TimeOfMurder];

  QClewsoSuspect:
    // 01580    INPUT "INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) "; S1$
    // Start of Basic INPUT statement 01580
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""INSPECTOR CLEW-SO WHO IS YOUR SUSPECT(BILL,MARY,PAUL,SUZY or JOHN,QUIT) "");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&SuspectName,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01580
    // 01590    IF LEFT$(S1$, 1) = "Q" THEN 2970
    if(LEFT$(SuspectName,1)=='Q')goto QuitGame;
    // 01600    FOR S = 1 TO 5
    for(Suspect=1;Suspect<=5;Suspect++){
        // 01610        IF S1$ = S$(S) THEN 1640
        if(strcmp(SuspectName,NPCNames[Suspect])==0)goto CheckRecognizeName;
        // 01620    NEXT S
        int dummy_1620=0; // Ignore this line.
    }; // End-For(Suspect)
    // 01630    S = 0
    Suspect = 0;

  CheckRecognizeName:
    // 01640    IF S = 0 THEN 1580
    if(Suspect==0)goto QClewsoSuspect;
    // 01650    PRINT
    b2c_printf("");

  QSuspectWhereabouts:
    // 01660    PRINT "DO YOU WISH TO QUESTION "; S1$; " ABOUT :"
    b2c_printf("Do you wish to question %sDo you wish to question  about :\n",SuspectName);
    // 01670    PRINT "   1   - THE SUSPECTS WHEREABOUTS AT A PARTICULAR TIME"
    b2c_printf("   1   - the suspects whereabouts at a particular time\n");
    // 01680    PRINT "   2   - WHAT TIME THE SUSPECT WAS IN A CERTAIN ROOM"
    b2c_printf("   2   - what time the suspect was in a certain room\n");
    // 01690    PRINT "   3   - THE CRIME IS SOLVED ---";
    b2c_printf("   3   - the crime is solved ---");
    // 01700    INPUT A1$
    // Start of Basic INPUT statement 01700
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&s2Answer,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01700
    // 01710    A = VAL(A1$)
    iAnswer = VAL(s2Answer);
    // 01720    REM A = x(1) - 48
    // 01730    IF A < 1 THEN 1660
    if(iAnswer<1)goto QSuspectWhereabouts;
    // 01740    IF A > 3 THEN 1660
    if(iAnswer>3)goto QSuspectWhereabouts;
    // 01750    C = C + 1
    ClewsoQuestionCnt = ClewsoQuestionCnt+1;
    // 01760    ON A GOTO 1770, 2130, 2390
    switch((int)(iAnswer)){
        case 1: goto QSuspectLocationAtTime;
        case 2: goto QSuspectTimeInRoom;
        case 3: goto ClewsoConfrontsSuspect;
        default: break; 
    };

  QSuspectLocationAtTime:
    // 01770    PRINT S1$;
    b2c_printf("%s\n",SuspectName);
    // 01780    REM TIME SECTION
    // 01790    PRINT " WHERE WERE YOU AT (1-9) ";
    b2c_printf(" where were you at (1-9) ");
    // 01800    INPUT T1$
    // Start of Basic INPUT statement 01800
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&TimeAnswer,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01800
    // 01810    T1 = VAL(T1$)
    idx2 = VAL(TimeAnswer);
    // 01820    REM T1 = X(1) - 48
    // 01830    IF T1 < 1 THEN 1770
    if(idx2<1)goto QSuspectLocationAtTime;
    // 01840    IF T1 > 9 THEN 1770
    if(idx2>9)goto QSuspectLocationAtTime;
    // 01850    R1 = P(S, T1)
    SuspectLocationAtHour = SuspectMovement[Suspect][idx2];
    // 01860    IF S <> M THEN 1950
    if(Suspect!=Killer)goto ChkSuspectInMurderRoom;
    // 01870    REM LIAR SECTION
    // 01880    IF RND(2) < .5 THEN 2030
    if(RND(2)<0.5)goto SuspectLocationAtTime;
    // 01890    R1 = INT(6 * RND(3)) + 1
    SuspectLocationAtHour = INT(6*RND(3))+1;
    // 01900    IF RND(4) < .5 THEN 1930
    if(RND(4)<0.5)goto SuspectLiesAboutTime;
    // 01910    PRINT "THE HOST WAS ALREADY DEAD."
    b2c_printf("The host was already dead.\n");
    // 01920    GOTO 2030
    goto SuspectLocationAtTime;

  SuspectLiesAboutTime:
    // 01930    PRINT "OUR HOST WAS STILL ALIVE."
    b2c_printf("Our host was still alive.\n");
    // 01940    GOTO 2030
    goto SuspectLocationAtTime;

  ChkSuspectInMurderRoom:
    // 01950    IF R1 = R THEN 1970
    if(SuspectLocationAtHour==RoomOfMurder)goto SuspectInRoomAtTimeOfMurder;
    // 01960    GOTO 2030
    goto SuspectLocationAtTime;

  SuspectInRoomAtTimeOfMurder:
    // 01970    IF RND(5) < .5 THEN 2030
    if(RND(5)<0.5)goto SuspectLocationAtTime;
    // 01980    IF T1 >= T THEN 2010
    if(idx2>=TimeOfMurder)goto SuspectReportHostDead;
    // 01990    PRINT " THE HOST WAS STILL ALIVE."
    b2c_printf(" the host was still alive.\n");
    // 02000    GOTO 2030
    goto SuspectLocationAtTime;

  SuspectReportHostDead:
    // 02010    IF T1 <= T THEN 2030
    if(idx2<=TimeOfMurder)goto SuspectLocationAtTime;
    // 02020    PRINT " THE HOST WAS ALREADY DEAD."
    b2c_printf(" the host was already dead.\n");

  SuspectLocationAtTime:
    // 02030    PRINT "I WAS IN THE "; R$(R1); " ROOM."
    b2c_printf("I was in the %sI was in the  room.\n",RoomNames[SuspectLocationAtHour]);
    // 02040    FOR K = 1 TO 5
    for(Person=1;Person<=5;Person++){
        // 02050    IF K = S THEN 2100
        if(Person==Suspect)goto WithHimself;
        // 02060    IF P(K, T1) <> R1 THEN 2080
        if(SuspectMovement[Person][idx2]!=SuspectLocationAtHour)goto CheckSawWho;
        // 02070    PRINT "I WAS WITH "; S$(K)
        b2c_printf("I was with %s\n",NPCNames[Person]);

  CheckSawWho:
        // 02080    IF ABS(R1 - P(K, T1)) <> 1 THEN 2100
        if(ABS(SuspectLocationAtHour-SuspectMovement[Person][idx2])!=1)goto WithHimself;
        // 02090    PRINT "I SAW "; S$(K)
        b2c_printf("I saw %s\n",NPCNames[Person]);

  WithHimself:
        // 02100    NEXT K
        int dummy_2100=0; // Ignore this line.
    }; // End-For(Person)
    // 02110    GOTO 1580
    goto QClewsoSuspect;
    // 02120    REM ROOM QUESTIONING

  QSuspectTimeInRoom:
    // 02130    PRINT S1$;
    b2c_printf("%s\n",SuspectName);
    // 02140    PRINT " WHAT TIME WERE YOU IN [ROOM] ";
    b2c_printf(" what time were you in [room] ");
    // 02150    INPUT R1$
    // Start of Basic INPUT statement 02150
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&RoomName,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02150
    // 02160    FOR T1 = 1 TO 6
    for(idx2=1;idx2<=6;idx2++){
        // 02170        IF R1$ = R$(T1) THEN 2200
        if(strcmp(RoomName,RoomNames[idx2])==0)goto GotRoomIndex;
        // 02180    NEXT T1
        int dummy_2180=0; // Ignore this line.
    }; // End-For(idx2)
    // 02190    GOTO 2130
    goto QSuspectTimeInRoom;

  GotRoomIndex:
    // 02200    IF S <> M THEN 2290
    if(Suspect!=Killer)goto SuspectReportsTimeInRoom;
    // 02210    IF RND(5) < .5 THEN 2240
    if(RND(5)<0.5)goto KillerLiesNotInRoom;
    // 02220    T1 = INT(RND(5) * 9) + 1
    idx2 = INT(RND(5)*9)+1;
    // 02230    GOTO 2270
    goto KillerReportsTimeInRoom;

  KillerLiesNotInRoom:
    // 02240    IF T1 <> T THEN 2270
    if(idx2!=TimeOfMurder)goto KillerReportsTimeInRoom;
    // 02250    PRINT "I WAS NOT IN THAT ROOM."
    b2c_printf("I was not in that room.\n");
    // 02260    GOTO 1580
    goto QClewsoSuspect;

  KillerReportsTimeInRoom:
    // 02270    PRINT "I WAS IN THAT ROOM AT "; T1
    b2c_printf("I was in that room at  %d \n",idx2);
    // 02280    GOTO 1580
    goto QClewsoSuspect;

  SuspectReportsTimeInRoom:
    // 02290    K = 0
    Person = 0;
    // 02300    FOR B = 1 TO 9
    for(B_int=1;B_int<=9;B_int++){
        // 02310    IF P(S, B) <> T1 THEN 2340
        if(SuspectMovement[Suspect][B_int]!=idx2)goto NotInRoomNow;
        // 02320    PRINT "I WAS IN THAT ROOM AT "; B
        b2c_printf("I was in that room at  %d \n",B_int);
        // 02330    K = 1
        Person = 1;

  NotInRoomNow:
        // 02340    NEXT B
        int dummy_2340=0; // Ignore this line.
    }; // End-For(B_int)
    // 02350    IF K = 1 THEN 1580
    if(Person==1)goto QClewsoSuspect;
    // 02360    PRINT "I WAS NOT IN THAT ROOM."
    b2c_printf("I was not in that room.\n");
    // 02370    GOTO 1580
    goto QClewsoSuspect;
    // 02380    REM COMFRONTATION SECTION

  ClewsoConfrontsSuspect:
    // 02390    C1 = C1 + 1
    ClewsoConfrontCnt = ClewsoConfrontCnt+1;

  QWhichInfo:
    // 02400    PRINT "INSPECTOR DO YOU KNOW :"
    b2c_printf("Inspector do you know :\n");
    // 02410    PRINT "  1   KILLER"
    b2c_printf("  1   killer\n");
    // 02420    PRINT "  2   ROOM"
    b2c_printf("  2   room\n");
    // 02430    PRINT "  3   TIME"
    b2c_printf("  3   time\n");
    // 02440    PRINT "  4   TOTALLY BAFFLED ---";
    b2c_printf("  4   totally baffled ---");
    // 02450    INPUT A1$
    // Start of Basic INPUT statement 02450
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&s2Answer,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02450
    // 02460    A = VAL(A1$)
    iAnswer = VAL(s2Answer);
    // 02470    IF A <= 0 GOTO 2400
    if(iAnswer<=0)goto QWhichInfo;
    // 02480    IF A > 4 GOTO 2400
    if(iAnswer>4)goto QWhichInfo;
    // 02490    ON A GOTO 2500, 2720, 2620, 2890
    switch((int)(iAnswer)){
        case 1: goto QSuspectName;
        case 2: goto QRoomOfMurder;
        case 3: goto QTimeOfMurder;
        case 4: goto ClewsoGivesUp;
        default: break; 
    };

  QSuspectName:
    // 02500    PRINT " THE KILLER IS  ";
    b2c_printf(" the killer is  ");
    // 02510    INPUT S1$
    // Start of Basic INPUT statement 02510
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&SuspectName,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02510
    // 02520    FOR X = 1 TO 5
    for(X_int_arr[0]=1;X_int_arr[0]<=5;X_int_arr[0]++){
        // 02530        IF S1$ = S$(X) THEN 2560
        if(strcmp(SuspectName,NPCNames[X_int_arr[0]])==0)goto GotSuspectIdx;
        // 02540    NEXT X
        int dummy_2540=0; // Ignore this line.
    }; // End-For(X_int_arr[0])
    // 02550    X = 0
    X_int_arr[0] = 0;

  GotSuspectIdx:
    // 02560    IF X = 0 THEN 2400
    if(X_int_arr[0]==0)goto QWhichInfo;
    // 02570    IF S1$ <> S$(M) THEN 2870
    if(strcmp(SuspectName,NPCNames[Killer])!=0)goto ClewsoGotItWrong;
    // 02580    PRINT "YOU HAVE THE KILLER, INSPECTOR CLEW-SO."
    b2c_printf("You have the killer, inspector clew-so.\n");
    // 02590    H = H + 1
    TallyInfoCorrect = TallyInfoCorrect+1;
    // 02600    IF H = 3 THEN 2840
    if(TallyInfoCorrect==3)goto GotSolution;
    // 02610    GOTO 1580
    goto QClewsoSuspect;

  QTimeOfMurder:
    // 02620    PRINT "TIME OF THE MURDER ";
    b2c_printf("Time of the murder ");
    // 02630    INPUT T1$
    // Start of Basic INPUT statement 02630
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&TimeAnswer,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02630
    // 02640    T1 = VAL(T1$)
    idx2 = VAL(TimeAnswer);
    // 02650    IF T1 < 1 THEN 2620
    if(idx2<1)goto QTimeOfMurder;
    // 02660    IF T1 > 9 THEN 2620
    if(idx2>9)goto QTimeOfMurder;
    // 02670    IF T1 <> T THEN 2870
    if(idx2!=TimeOfMurder)goto ClewsoGotItWrong;
    // 02680    PRINT "INSPECTOR YOU HAVE THE RIGHT TIME."
    b2c_printf("Inspector you have the right time.\n");
    // 02690    H = H + 1
    TallyInfoCorrect = TallyInfoCorrect+1;
    // 02700    IF H = 3 THEN 2840
    if(TallyInfoCorrect==3)goto GotSolution;
    // 02710    GOTO 1580
    goto QClewsoSuspect;

  QRoomOfMurder:
    // 02720    PRINT "ROOM OF THE MURDER ";
    b2c_printf("Room of the murder ");
    // 02730    INPUT R1$
    // Start of Basic INPUT statement 02730
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&RoomName,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02730
    // 02740    FOR X = 1 TO 6
    for(X_int_arr[0]=1;X_int_arr[0]<=6;X_int_arr[0]++){
        // 02750        IF R1$ = R$(X) THEN 2780
        if(strcmp(RoomName,RoomNames[X_int_arr[0]])==0)goto CheckRightRoom;
        // 02760    NEXT X
        int dummy_2760=0; // Ignore this line.
    }; // End-For(X_int_arr[0])
    // 02770    X = 0
    X_int_arr[0] = 0;

  CheckRightRoom:
    // 02780    IF X = 0 THEN 2720
    if(X_int_arr[0]==0)goto QRoomOfMurder;
    // 02790    IF R1$ <> R$(R) THEN 2870
    if(strcmp(RoomName,RoomNames[RoomOfMurder])!=0)goto ClewsoGotItWrong;
    // 02800    PRINT "INSPECTOR , YOU NOW HAVE THE ROOM."
    b2c_printf("Inspector , you now have the room.\n");
    // 02810    H = H + 1
    TallyInfoCorrect = TallyInfoCorrect+1;
    // 02820    IF H <> 3 THEN 1580
    if(TallyInfoCorrect!=3)goto QClewsoSuspect;
    // 02830    REM CONFIRMATIONS

  GotSolution:
    // 02840    PRINT "YOU ARE BRILLIANT INSPECTOR CLEW-SO."
    b2c_printf("You are brilliant inspector clew-so.\n");
    // 02850    PRINT "IT TOOK YOU "; C; " QUESTIONS AND "; C1; "CONFRONTATIONS."
    b2c_printf("It took you  %d It took you  questions and  questions and  %d  questions and Confrontations.\n",ClewsoQuestionCnt,ClewsoConfrontCnt);
    // 02860    GOTO 2930
    goto QNewGame;

  ClewsoGotItWrong:
    // 02870    PRINT "INSPECTOR CLEW-SO YOU ARE A BUMBLING IDIOT.TRY AGAIN"
    b2c_printf("Inspector clew-so you are a bumbling idiot.Try again\n");
    // 02880    GOTO 1580
    goto QClewsoSuspect;

  ClewsoGivesUp:
    // 02890    PRINT "TOO BAD INSPECTOR CLEW-SO"
    b2c_printf("Too bad inspector clew-so\n");
    // 02900    PRINT " THE FACTS ARE:"
    b2c_printf(" the facts are:\n");
    // 02910    PRINT S$(M); " KILLED THE HOST AT "; T; " O'CLOCK IN THE ";
    b2c_printf("%sù^B` killed the host at  killed the host at  %d  killed the host at  o'clock in the  o'clock in the \n",NPCNames[Killer],TimeOfMurder);
    // 02920    PRINT R$(R); " (ROOM)"
    b2c_printf("%sû^B` (room)\n",RoomNames[RoomOfMurder]);

  QNewGame:
    // 02930    PRINT "DO YOU WANT A NEW CASE INSPECTOR  ";
    b2c_printf("Do you want a new case inspector  ");
    // 02940    INPUT A$
    // Start of Basic INPUT statement 02940
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&s1Answer,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02940
    // 02950    IF A$ = "YES" THEN 1180
    if(strcmp(s1Answer,"Yes")==0)goto StartGame;
    // 02960    IF A$ = "Y" THEN 1180
    if(strcmp(s1Answer,"Y")==0)goto StartGame;

  QuitGame:
    // 02970    END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
