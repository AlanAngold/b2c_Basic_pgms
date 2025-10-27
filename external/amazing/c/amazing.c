/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/amazing.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c7dff341b80 ---------A   00010 PRINT TAB(28);"AMAZING PROGRAM"
    0x5c7dff342f30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c7dff3312f0 ---------A   00030 PRINT:PRINT:PRINT:PRINT
    0x5c7dff3406d0 ---------A T 00100 INPUT "WHAT ARE YOUR WIDTH AND LENGTH";H,V
    0x5c7dff340670 ---------A   00102 IF H<>1 AND V<>1 THEN 110
    0x5c7dff343210 ---------A   00104 PRINT "MEANINGLESS DIMENSIONS.  TRY AGAIN.":GOTO 100
    0x5c7dff348b00 ---------A T 00110 DIM W(H,V),V(H,V)
    0x5c7dff348b40 ---------A   00120 PRINT
    0x5c7dff348b90 ---------A   00130 PRINT
    0x5c7dff340cb0 ---------A   00140 PRINT
    0x5c7dff348c00 ---------A   00150 PRINT
    0x5c7dff349810 ---------A   00160 Q=0:Z=0:X=INT(RND(1)*H+1)
    0x5c7dff349bc0 ---------A   00165 FOR I=1 TO H
    0x5c7dff349e20 ---------A   00170 IF I=X THEN 173
    0x5c7dff349ff0 ---------A   00171 PRINT ".--";:GOTO 180
    0x5c7dff34a150 ---------A T 00173 PRINT ".  ";
    0x5c7dff34a280 ---------A T 00180 NEXT I
    0x5c7dff34a3e0 ---------A   00190 PRINT "."
    0x5c7dff34ad70 ---------A   00195 C=1:W(X,1)=C:C=C+1
    0x5c7dff34b360 ---------A   00200 R=X:S=1:GOTO 260
    0x5c7dff34b5c0 ---------A T 00210 IF R<>H THEN 240
    0x5c7dff34b840 ---------A   00215 IF S<>V THEN 230
    0x5c7dff34bca0 ---------A   00220 R=1:S=1:GOTO 250
    0x5c7dff34c200 ---------A T 00230 R=1:S=S+1:GOTO 250
    0x5c7dff34c500 ---------A T 00240 R=R+1
    0x5c7dff34c910 ---------A T 00250 IF W(R,S)=0 THEN 210
    0x5c7dff34cc80 ---------A T 00260 IF R-1=0 THEN 530
    0x5c7dff34d1a0 ---------A   00265 IF W(R-1,S)<>0 THEN 530
    0x5c7dff34d510 ---------A   00270 IF S-1=0 THEN 390
    0x5c7dff34da30 ---------A   00280 IF W(R,S-1)<>0 THEN 390
    0x5c7dff34dcc0 ---------A   00290 IF R=H THEN 330
    0x5c7dff34e1e0 ---------A   00300 IF W(R+1,S)<>0 THEN 330
    0x5c7dff34e7d0 ---------A   00310 X=INT(RND(1)*3+1)
    0x5c7dff34ed70 ---------A   00320 ON X GOTO 790,820,860
    0x5c7dff34efe0 ---------A T 00330 IF S<>V THEN 340
    0x5c7dff34f240 ---------A   00334 IF Z=1 THEN 370
    0x5c7dff34f4c0 ---------A   00338 Q=1:GOTO 350
    0x5c7dff34f9c0 ---------A T 00340 IF W(R,S+1)<>0 THEN 370
    0x5c7dff34ffb0 ---------A T 00350 X=INT(RND(1)*3+1)
    0x5c7dff350340 ---------A   00360 ON X GOTO 790,820,910
    0x5c7dff350910 ---------A T 00370 X=INT(RND(1)*2+1)
    0x5c7dff350be0 ---------A   00380 ON X GOTO 790,820
    0x5c7dff350e60 ---------A T 00390 IF R=H THEN 470
    0x5c7dff351380 ---------A   00400 IF W(R+1,S)<>0 THEN 470
    0x5c7dff351600 ---------A   00405 IF S<>V THEN 420
    0x5c7dff351860 ---------A   00410 IF Z=1 THEN 450
    0x5c7dff351ae0 ---------A   00415 Q=1:GOTO 430
    0x5c7dff351fe0 ---------A T 00420 IF W(R,S+1)<>0 THEN 450
    0x5c7dff3525d0 ---------A T 00430 X=INT(RND(1)*3+1)
    0x5c7dff352960 ---------A   00440 ON X GOTO 790,860,910
    0x5c7dff352f30 ---------A T 00450 X=INT(RND(1)*2+1)
    0x5c7dff353200 ---------A   00460 ON X GOTO 790,860
    0x5c7dff353470 ---------A T 00470 IF S<>V THEN 490
    0x5c7dff3536d0 ---------A   00480 IF Z=1 THEN 520
    0x5c7dff353950 ---------A   00485 Q=1:GOTO 500
    0x5c7dff353e50 ---------A T 00490 IF W(R,S+1)<>0 THEN 520
    0x5c7dff354430 ---------A T 00500 X=INT(RND(1)*2+1)
    0x5c7dff354700 ---------A   00510 ON X GOTO 790,910
    0x5c7dff354770 ---------A T 00520 GOTO 790
    0x5c7dff354ac0 ---------A T 00530 IF S-1=0 THEN 670
    0x5c7dff354fe0 ---------A   00540 IF W(R,S-1)<>0 THEN 670
    0x5c7dff355270 ---------A   00545 IF R=H THEN 610
    0x5c7dff355790 ---------A   00547 IF W(R+1,S)<>0 THEN 610
    0x5c7dff355a10 ---------A   00550 IF S<>V THEN 560
    0x5c7dff355c70 ---------A   00552 IF Z=1 THEN 590
    0x5c7dff356300 ---------A   00554 Q=1:GOTO 570
    0x5c7dff356800 ---------A T 00560 IF W(R,S+1)<>0 THEN 590
    0x5c7dff356df0 ---------A T 00570 X=INT(RND(1)*3+1)
    0x5c7dff357180 ---------A   00580 ON X GOTO 820,860,910
    0x5c7dff357750 ---------A T 00590 X=INT(RND(1)*2+1)
    0x5c7dff357a20 ---------A   00600 ON X GOTO 820,860
    0x5c7dff357c90 ---------A T 00610 IF S<>V THEN 630
    0x5c7dff357ef0 ---------A   00620 IF Z=1 THEN 660
    0x5c7dff358170 ---------A   00625 Q=1:GOTO 640
    0x5c7dff358670 ---------A T 00630 IF W(R,S+1)<>0 THEN 660
    0x5c7dff358c50 ---------A T 00640 X=INT(RND(1)*2+1)
    0x5c7dff358f20 ---------A   00650 ON X GOTO 820,910
    0x5c7dff358f90 ---------A T 00660 GOTO 820
    0x5c7dff359200 ---------A T 00670 IF R=H THEN 740
    0x5c7dff359720 ---------A   00680 IF W(R+1,S)<>0 THEN 740
    0x5c7dff3599a0 ---------A   00685 IF S<>V THEN 700
    0x5c7dff359c00 ---------A   00690 IF Z=1 THEN 730
    0x5c7dff359e80 ---------A   00695 Q=1:GOTO 830
    0x5c7dff35a380 ---------A T 00700 IF W(R,S+1)<>0 THEN 730
    0x5c7dff35a960 ---------A   00710 X=INT(RND(1)*2+1)
    0x5c7dff35ac30 ---------A   00720 ON X GOTO 860,910
    0x5c7dff35aca0 ---------A T 00730 GOTO 860
    0x5c7dff35af00 ---------A T 00740 IF S<>V THEN 760
    0x5c7dff35b160 ---------A   00750 IF Z=1 THEN 780
    0x5c7dff35b3e0 ---------A   00755 Q=1:GOTO 770
    0x5c7dff35b8e0 ---------A T 00760 IF W(R,S+1)<>0 THEN 780
    0x5c7dff35b960 ---------A T 00770 GOTO 910
    0x5c7dff35b9c0 ---------A T 00780 GOTO 1000
    0x5c7dff35beb0 ---------A T 00790 W(R-1,S)=C
    0x5c7dff35c9b0 ---------A   00800 C=C+1:V(R-1,S)=2:R=R-1
    0x5c7dff35ce40 ---------A   00810 IF C=H*V+1 THEN 1010
    0x5c7dff35d0b0 ---------A   00815 Q=0:GOTO 260
    0x5c7dff35d590 ---------A T 00820 W(R,S-1)=C
    0x5c7dff35d8e0 ---------A T 00830 C=C+1
    0x5c7dff35e530 ---------A   00840 V(R,S-1)=1:S=S-1:IF C=H*V+1 THEN 1010
    0x5c7dff35e7a0 ---------A   00850 Q=0:GOTO 260
    0x5c7dff35ec90 ---------A T 00860 W(R+1,S)=C
    0x5c7dff35f3b0 ---------A   00870 C=C+1:IF V(R,S)=0 THEN 880
    0x5c7dff35f7e0 ---------A   00875 V(R,S)=3:GOTO 890
    0x5c7dff35fba0 ---------A T 00880 V(R,S)=2
    0x5c7dff35fee0 ---------A T 00890 R=R+1
    0x5c7dff360370 ---------A   00900 IF C=H*V+1 THEN 1010
    0x5c7dff3603f0 ---------A   00905 GOTO 530
    0x5c7dff360650 ---------A T 00910 IF Q=1 THEN 960
    0x5c7dff361250 ---------A   00920 W(R,S+1)=C:C=C+1:IF V(R,S)=0 THEN 940
    0x5c7dff361680 ---------A   00930 V(R,S)=3:GOTO 950
    0x5c7dff361a50 ---------A T 00940 V(R,S)=1
    0x5c7dff3621f0 ---------A T 00950 S=S+1:IF C=H*V+1 THEN 1010
    0x5c7dff362270 ---------A   00955 GOTO 260
    0x5c7dff362480 ---------A T 00960 Z=1
    0x5c7dff3628a0 ---------A   00970 IF V(R,S)=0 THEN 980
    0x5c7dff362ed0 ---------A   00975 V(R,S)=3:Q=0:GOTO 1000
    0x5c7dff3638b0 ---------A T 00980 V(R,S)=1:Q=0:R=1:S=1:GOTO 250
    0x5c7dff363910 ---------A T 01000 GOTO 210
    0x5c7dff363cb0 ---------A T 01010 FOR J=1 TO V
    0x5c7dff363e30 ---------A   01011 PRINT "I";
    0x5c7dff364130 ---------A   01012 FOR I=1 TO H
    0x5c7dff364550 ---------A   01013 IF V(I,J)<2 THEN 1030
    0x5c7dff3646d0 ---------A   01020 PRINT "   ";
    0x5c7dff364740 ---------A   01021 GOTO 1040
    0x5c7dff3648a0 ---------A T 01030 PRINT "  I";
    0x5c7dff3649d0 ---------A T 01040 NEXT I
    0x5c7dff364a50 ---------A   01041 PRINT
    0x5c7dff364d50 ---------A   01043 FOR I=1 TO H
    0x5c7dff365990 ---------A   01045 IF V(I,J)=0 THEN 1060
    0x5c7dff365db0 ---------A   01050 IF V(I,J)=2 THEN 1060
    0x5c7dff365f30 ---------A   01051 PRINT ":  ";
    0x5c7dff365fa0 ---------A   01052 GOTO 1070
    0x5c7dff366100 ---------A T 01060 PRINT ":--";
    0x5c7dff366230 ---------A T 01070 NEXT I
    0x5c7dff366390 ---------A   01071 PRINT "."
    0x5c7dff3664c0 ---------A   01072 NEXT J
    0x5c7dff366520 ---------A   01073 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00100      00104T
     00110      00102T
     00173      00170T
     00180      00171T
     00210      00250T, 01000T
     00230      00215T
     00240      00210T
     00250      00220T, 00230T, 00980T
     00260      00200T, 00815T, 00850T, 00955T
     00330      00290T, 00300T
     00340      00330T
     00350      00338T
     00370      00334T, 00340T
     00390      00270T, 00280T
     00420      00405T
     00430      00415T
     00450      00410T, 00420T
     00470      00390T, 00400T
     00490      00470T
     00500      00485T
     00520      00480T, 00490T
     00530      00260T, 00265T, 00905T
     00560      00550T
     00570      00554T
     00590      00552T, 00560T
     00610      00545T, 00547T
     00630      00610T
     00640      00625T
     00660      00620T, 00630T
     00670      00530T, 00540T
     00700      00685T
     00730      00690T, 00700T
     00740      00670T, 00680T
     00760      00740T
     00770      00755T
     00780      00750T, 00760T
     00790      00320T, 00360T, 00380T, 00440T, 00460T, 00510T, 00520T
     00820      00320T, 00360T, 00380T, 00580T, 00600T, 00650T, 00660T
     00830      00695T
     00860      00320T, 00440T, 00460T, 00580T, 00600T, 00720T, 00730T
     00880      00870T
     00890      00875T
     00910      00360T, 00440T, 00510T, 00580T, 00650T, 00720T, 00770T
     00940      00920T
     00950      00930T
     00960      00910T
     00980      00970T
     01000      00780T, 00975T
     01010      00810T, 00840T, 00900T, 00950T
     01030      01013T
     01040      01021T
     01060      01045T, 01050T
     01070      01052T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5c7dff341b80 (00010)   0x5c7dff341b80 (00010)   0x5c7dff366520 (01073)   0x5c7dff366520 (01073)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02380 - 10000    7630 

 */



/*
 *  Symbol Table Listing for 'basic/amazing.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    C                        Integer     
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
    H                        Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
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
    Q                        Integer     
    R                        Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Integer     
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
    V                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W               Array    Integer         {0,-1} {0,-1} 
    X                        Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/amazing.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c7dff341b80 ---------A   01000 PRINT TAB(28);"AMAZING PROGRAM"
    0x5c7dff342f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c7dff3312f0 ---------A   01020 PRINT:PRINT:PRINT:PRINT
    0x5c7dff3406d0 ---------A T 01030 INPUT "WHAT ARE YOUR WIDTH AND LENGTH";H,V
    0x5c7dff340670 ---------A   01040 IF H<>1 AND V<>1 THEN 1060
    0x5c7dff343210 ---------A   01050 PRINT "MEANINGLESS DIMENSIONS.  TRY AGAIN.":GOTO 1030
    0x5c7dff348b00 ---------A T 01060 DIM W(H,V),V(H,V)
    0x5c7dff348b40 ---------A   01070 PRINT
    0x5c7dff348b90 ---------A   01080 PRINT
    0x5c7dff340cb0 ---------A   01090 PRINT
    0x5c7dff348c00 ---------A   01100 PRINT
    0x5c7dff349810 ---------A   01110 Q=0:Z=0:X=INT(RND(1)*H+1)
    0x5c7dff349bc0 ---------A   01120 FOR I=1 TO H
    0x5c7dff349e20 ---------A   01130 IF I=X THEN 1150
    0x5c7dff349ff0 ---------A   01140 PRINT ".--";:GOTO 1160
    0x5c7dff34a150 ---------A T 01150 PRINT ".  ";
    0x5c7dff34a280 ---------A T 01160 NEXT I
    0x5c7dff34a3e0 ---------A   01170 PRINT "."
    0x5c7dff34ad70 ---------A   01180 C=1:W(X,1)=C:C=C+1
    0x5c7dff34b360 ---------A   01190 R=X:S=1:GOTO 1260
    0x5c7dff34b5c0 ---------A T 01200 IF R<>H THEN 1240
    0x5c7dff34b840 ---------A   01210 IF S<>V THEN 1230
    0x5c7dff34bca0 ---------A   01220 R=1:S=1:GOTO 1250
    0x5c7dff34c200 ---------A T 01230 R=1:S=S+1:GOTO 1250
    0x5c7dff34c500 ---------A T 01240 R=R+1
    0x5c7dff34c910 ---------A T 01250 IF W(R,S)=0 THEN 1200
    0x5c7dff34cc80 ---------A T 01260 IF R-1=0 THEN 1590
    0x5c7dff34d1a0 ---------A   01270 IF W(R-1,S)<>0 THEN 1590
    0x5c7dff34d510 ---------A   01280 IF S-1=0 THEN 1420
    0x5c7dff34da30 ---------A   01290 IF W(R,S-1)<>0 THEN 1420
    0x5c7dff34dcc0 ---------A   01300 IF R=H THEN 1340
    0x5c7dff34e1e0 ---------A   01310 IF W(R+1,S)<>0 THEN 1340
    0x5c7dff34e7d0 ---------A   01320 X=INT(RND(1)*3+1)
    0x5c7dff34ed70 ---------A   01330 ON X GOTO 1930,1970,2010
    0x5c7dff34efe0 ---------A T 01340 IF S<>V THEN 1370
    0x5c7dff34f240 ---------A   01350 IF Z=1 THEN 1400
    0x5c7dff34f4c0 ---------A   01360 Q=1:GOTO 1380
    0x5c7dff34f9c0 ---------A T 01370 IF W(R,S+1)<>0 THEN 1400
    0x5c7dff34ffb0 ---------A T 01380 X=INT(RND(1)*3+1)
    0x5c7dff350340 ---------A   01390 ON X GOTO 1930,1970,2080
    0x5c7dff350910 ---------A T 01400 X=INT(RND(1)*2+1)
    0x5c7dff350be0 ---------A   01410 ON X GOTO 1930,1970
    0x5c7dff350e60 ---------A T 01420 IF R=H THEN 1520
    0x5c7dff351380 ---------A   01430 IF W(R+1,S)<>0 THEN 1520
    0x5c7dff351600 ---------A   01440 IF S<>V THEN 1470
    0x5c7dff351860 ---------A   01450 IF Z=1 THEN 1500
    0x5c7dff351ae0 ---------A   01460 Q=1:GOTO 1480
    0x5c7dff351fe0 ---------A T 01470 IF W(R,S+1)<>0 THEN 1500
    0x5c7dff3525d0 ---------A T 01480 X=INT(RND(1)*3+1)
    0x5c7dff352960 ---------A   01490 ON X GOTO 1930,2010,2080
    0x5c7dff352f30 ---------A T 01500 X=INT(RND(1)*2+1)
    0x5c7dff353200 ---------A   01510 ON X GOTO 1930,2010
    0x5c7dff353470 ---------A T 01520 IF S<>V THEN 1550
    0x5c7dff3536d0 ---------A   01530 IF Z=1 THEN 1580
    0x5c7dff353950 ---------A   01540 Q=1:GOTO 1560
    0x5c7dff353e50 ---------A T 01550 IF W(R,S+1)<>0 THEN 1580
    0x5c7dff354430 ---------A T 01560 X=INT(RND(1)*2+1)
    0x5c7dff354700 ---------A   01570 ON X GOTO 1930,2080
    0x5c7dff354770 ---------A T 01580 GOTO 1930
    0x5c7dff354ac0 ---------A T 01590 IF S-1=0 THEN 1780
    0x5c7dff354fe0 ---------A   01600 IF W(R,S-1)<>0 THEN 1780
    0x5c7dff355270 ---------A   01610 IF R=H THEN 1710
    0x5c7dff355790 ---------A   01620 IF W(R+1,S)<>0 THEN 1710
    0x5c7dff355a10 ---------A   01630 IF S<>V THEN 1660
    0x5c7dff355c70 ---------A   01640 IF Z=1 THEN 1690
    0x5c7dff356300 ---------A   01650 Q=1:GOTO 1670
    0x5c7dff356800 ---------A T 01660 IF W(R,S+1)<>0 THEN 1690
    0x5c7dff356df0 ---------A T 01670 X=INT(RND(1)*3+1)
    0x5c7dff357180 ---------A   01680 ON X GOTO 1970,2010,2080
    0x5c7dff357750 ---------A T 01690 X=INT(RND(1)*2+1)
    0x5c7dff357a20 ---------A   01700 ON X GOTO 1970,2010
    0x5c7dff357c90 ---------A T 01710 IF S<>V THEN 1740
    0x5c7dff357ef0 ---------A   01720 IF Z=1 THEN 1770
    0x5c7dff358170 ---------A   01730 Q=1:GOTO 1750
    0x5c7dff358670 ---------A T 01740 IF W(R,S+1)<>0 THEN 1770
    0x5c7dff358c50 ---------A T 01750 X=INT(RND(1)*2+1)
    0x5c7dff358f20 ---------A   01760 ON X GOTO 1970,2080
    0x5c7dff358f90 ---------A T 01770 GOTO 1970
    0x5c7dff359200 ---------A T 01780 IF R=H THEN 1870
    0x5c7dff359720 ---------A   01790 IF W(R+1,S)<>0 THEN 1870
    0x5c7dff3599a0 ---------A   01800 IF S<>V THEN 1830
    0x5c7dff359c00 ---------A   01810 IF Z=1 THEN 1860
    0x5c7dff359e80 ---------A   01820 Q=1:GOTO 1980
    0x5c7dff35a380 ---------A T 01830 IF W(R,S+1)<>0 THEN 1860
    0x5c7dff35a960 ---------A   01840 X=INT(RND(1)*2+1)
    0x5c7dff35ac30 ---------A   01850 ON X GOTO 2010,2080
    0x5c7dff35aca0 ---------A T 01860 GOTO 2010
    0x5c7dff35af00 ---------A T 01870 IF S<>V THEN 1900
    0x5c7dff35b160 ---------A   01880 IF Z=1 THEN 1920
    0x5c7dff35b3e0 ---------A   01890 Q=1:GOTO 1910
    0x5c7dff35b8e0 ---------A T 01900 IF W(R,S+1)<>0 THEN 1920
    0x5c7dff35b960 ---------A T 01910 GOTO 2080
    0x5c7dff35b9c0 ---------A T 01920 GOTO 2180
    0x5c7dff35beb0 ---------A T 01930 W(R-1,S)=C
    0x5c7dff35c9b0 ---------A   01940 C=C+1:V(R-1,S)=2:R=R-1
    0x5c7dff35ce40 ---------A   01950 IF C=H*V+1 THEN 2190
    0x5c7dff35d0b0 ---------A   01960 Q=0:GOTO 1260
    0x5c7dff35d590 ---------A T 01970 W(R,S-1)=C
    0x5c7dff35d8e0 ---------A T 01980 C=C+1
    0x5c7dff35e530 ---------A   01990 V(R,S-1)=1:S=S-1:IF C=H*V+1 THEN 2190
    0x5c7dff35e7a0 ---------A   02000 Q=0:GOTO 1260
    0x5c7dff35ec90 ---------A T 02010 W(R+1,S)=C
    0x5c7dff35f3b0 ---------A   02020 C=C+1:IF V(R,S)=0 THEN 2040
    0x5c7dff35f7e0 ---------A   02030 V(R,S)=3:GOTO 2050
    0x5c7dff35fba0 ---------A T 02040 V(R,S)=2
    0x5c7dff35fee0 ---------A T 02050 R=R+1
    0x5c7dff360370 ---------A   02060 IF C=H*V+1 THEN 2190
    0x5c7dff3603f0 ---------A   02070 GOTO 1590
    0x5c7dff360650 ---------A T 02080 IF Q=1 THEN 2140
    0x5c7dff361250 ---------A   02090 W(R,S+1)=C:C=C+1:IF V(R,S)=0 THEN 2110
    0x5c7dff361680 ---------A   02100 V(R,S)=3:GOTO 2120
    0x5c7dff361a50 ---------A T 02110 V(R,S)=1
    0x5c7dff3621f0 ---------A T 02120 S=S+1:IF C=H*V+1 THEN 2190
    0x5c7dff362270 ---------A   02130 GOTO 1260
    0x5c7dff362480 ---------A T 02140 Z=1
    0x5c7dff3628a0 ---------A   02150 IF V(R,S)=0 THEN 2170
    0x5c7dff362ed0 ---------A   02160 V(R,S)=3:Q=0:GOTO 2180
    0x5c7dff3638b0 ---------A T 02170 V(R,S)=1:Q=0:R=1:S=1:GOTO 1250
    0x5c7dff363910 ---------A T 02180 GOTO 1200
    0x5c7dff363cb0 ---------A T 02190 FOR J=1 TO V
    0x5c7dff363e30 ---------A   02200 PRINT "I";
    0x5c7dff364130 ---------A   02210 FOR I=1 TO H
    0x5c7dff364550 ---------A   02220 IF V(I,J)<2 THEN 2250
    0x5c7dff3646d0 ---------A   02230 PRINT "   ";
    0x5c7dff364740 ---------A   02240 GOTO 2260
    0x5c7dff3648a0 ---------A T 02250 PRINT "  I";
    0x5c7dff3649d0 ---------A T 02260 NEXT I
    0x5c7dff364a50 ---------A   02270 PRINT
    0x5c7dff364d50 ---------A   02280 FOR I=1 TO H
    0x5c7dff365990 ---------A   02290 IF V(I,J)=0 THEN 2330
    0x5c7dff365db0 ---------A   02300 IF V(I,J)=2 THEN 2330
    0x5c7dff365f30 ---------A   02310 PRINT ":  ";
    0x5c7dff365fa0 ---------A   02320 GOTO 2340
    0x5c7dff366100 ---------A T 02330 PRINT ":--";
    0x5c7dff366230 ---------A T 02340 NEXT I
    0x5c7dff366390 ---------A   02350 PRINT "."
    0x5c7dff3664c0 ---------A   02360 NEXT J
    0x5c7dff366520 ---------A   02370 END
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
