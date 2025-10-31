/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/mastrmnd.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x620647b706d0 ---------A   00002  PRINT TAB(30);"MASTERMIND"
    0x620647b70670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x620647b707f0 ---------A   00006  PRINT: PRINT: PRINT
    0x620647b71b80 ---------A   00010  REM
    0x620647b72f30 ---------A   00020  REM     MASTERMIND II
    0x620647b72ff0 ---------A   00030  REM     STEVE NORTH
    0x620647b730b0 ---------A   00040  REM     CREATIVE COMPUTING
    0x620647b71040 ---------A   00050  REM     PO BOX 789-M MORRISTOWN NEW JERSEY 07960
    0x620647b70e40 ---------A   00060  REM
    0x620647b72e70 ---------A   00070  REM
    0x620647b714e0 ---------A T 00080  INPUT "NUMBER OF COLORS";C9
    0x620647b73200 ---------A   00090  IF C9>8 THEN PRINT "NO MORE THAN 8, PLEASE!":GOTO 80
    0x620647b71760 ----------   00100  INPUT "NUMBER OF POSITIONS";P9
    0x620647b78940 ----------   00110  INPUT "NUMBER OF ROUNDS";R9
    0x620647b78cc0 ----------   00120  P=C9^P9
    0x620647b78ef0 ----------   00130  PRINT "TOTAL POSSIBILITIES =";P
    0x620647b794a0 ----------   00140  H=0:C=0
    0x620647b7a710 ----------   00150  DIM Q(P9),S(10,2),S$(10),A$(P9),G$(P9),I(P),H$(P9)
    0x620647b7aa00 ----------   00160  L$="BWRGOYPT"
    0x620647b7aa70 ----------   00170  PRINT
    0x620647b7ab00 ----------   00180  PRINT
    0x620647b7ac70 ----------   00190  PRINT "COLOR     LETTER"
    0x620647b7add0 ----------   00200  PRINT "=====     ======"
    0x620647b7b190 ----------   00210  FOR X=1 TO C9
    0x620647b7b3c0 ----------   00220  READ X$
    0x620647b7b9d0 ----------   00230  PRINT X$;TAB(13);MID$(L$,X,1)
    0x620647b7bb10 ----------   00240  NEXT X
    0x620647b7bba0 ----------   00250  PRINT
    0x620647b7bf60 ----------   00260  FOR R=1 TO R9
    0x620647b7bff0 ----------   00270  PRINT 
    0x620647b7c350 ----------   00280  PRINT "ROUND NUMBER";R;"----"
    0x620647b7c3e0 ----------   00290  PRINT
    0x620647b7c5b0 ----------   00300  PRINT "GUESS MY COMBINATION.":PRINT
    0x620647b7c850 ---------A   00310  REM     GET A COMBINATION
    0x620647b7cf20 ----------   00320  A=INT(P*RND(1)+1)
    0x620647b7cf90 ----------   00330  GOSUB 3000
    0x620647b7d280 ----------   00340  FOR X=1 TO A
    0x620647b7d300 ----------   00350  GOSUB 3500
    0x620647b7d430 ----------   00360  NEXT X
    0x620647b7d800 ----------   00370  FOR M=1 TO 10
    0x620647b7dcd0 ---------- T 00380  PRINT "MOVE # ";M;" GUESS ";:INPUT X$
    0x620647b7df60 ----------   00390  IF X$="BOARD" THEN 2000
    0x620647b7e210 ----------   00400  IF X$="QUIT" THEN 2500
    0x620647b7e730 ----------   00410  IF LEN(X$)<>P9 THEN PRINT "BAD NUMBER OF POSITIONS.":GOTO 380
    0x620647b7e7b0 ---------A   00420  REM     UNPACK X$ INTO G$(1-P9)
    0x620647b7eac0 ----------   00430  FOR X=1 TO P9
    0x620647b7eea0 ----------   00440  FOR Y=1 TO C9
    0x620647b7f620 ----------   00450  IF MID$(X$,X,1)=MID$(L$,Y,1) THEN 480
    0x620647b7f760 ----------   00460  NEXT Y
    0x620647b7fde0 ----------   00470  PRINT "'"; MID$(X$,X,1); "' IS UNRECOGNIZED.":GOTO 380
    0x620647b80370 ---------- T 00480  G$(X)=MID$(X$,X,1)
    0x620647b804a0 ----------   00490  NEXT X
    0x620647b80590 ---------A   00500  REM     NOW WE CONVERT Q(1-P9) INTO A$(1-P9) [ACTUAL GUESS]
    0x620647b80640 ----------   00510  GOSUB 4000
    0x620647b806d0 ---------A   00520  REM     AND GET NUMBER OF BLACKS AND WHITES
    0x620647b80760 ----------   00530  GOSUB 4500
    0x620647b80aa0 ----------   00540  IF B=P9 THEN 630
    0x620647b80b30 ---------A   00550  REM     TELL HUMAN RESULTS
    0x620647b811b0 ----------   00560  PRINT "YOU HAVE ";B;" BLACKS AND ";W;" WHITES."
    0x620647b81250 ---------A   00570  REM     SAVE ALL THIS STUFF FOR BOARD PRINTOUT LATER
    0x620647b81580 ----------   00580  S$(M)=X$
    0x620647b81950 ----------   00590  S(M,1)=B
    0x620647b81d20 ----------   00600  S(M,2)=W
    0x620647b81e50 ----------   00610  NEXT M
    0x620647b82070 ----------   00620  PRINT "YOU RAN OUT OF MOVES!  THAT'S ALL YOU GET!":GOTO 640
    0x620647b82510 ----------   00622  GOSUB 4000
    0x620647b82690 ----------   00623  PRINT "THE ACTUAL COMBINATION WAS: ";
    0x620647b82990 ----------   00624  FOR X=1 TO P9
    0x620647b82bf0 ----------   00625  PRINT A$(X);
    0x620647b82d30 ----------   00626  NEXT X
    0x620647b82de0 ----------   00627  PRINT
    0x620647b83140 ---------- T 00630  PRINT "YOU GUESSED IT IN ";M;" MOVES!"
    0x620647b834a0 ---------- T 00640  H=H+M
    0x620647b83510 ----------   00650  GOSUB 5000
    0x620647b83580 ---------A T 00660  REM
    0x620647b83630 ---------A   00670  REM     NOW COMPUTER GUESSES
    0x620647b836c0 ---------A   00680  REM
    0x620647b839d0 ----------   00690  FOR X=1 TO P
    0x620647b83cd0 ----------   00700  I(X)=1
    0x620647b83e00 ----------   00710  NEXT X
    0x620647b83fb0 ----------   00720  PRINT "NOW I GUESS.  THINK OF A COMBINATION."
    0x620647b84140 ----------   00730  INPUT "HIT RETURN WHEN READY:";X$
    0x620647b84420 ----------   00740  FOR M=1 TO 10
    0x620647b844b0 ----------   00750  GOSUB 3000
    0x620647b84520 ---------A   00760  REM     FIND A GUESS
    0x620647b84bf0 ----------   00770  G=INT(P*RND(1)+1)
    0x620647b84f20 ----------   00780  IF I(G)=1 THEN 890
    0x620647b85240 ----------   00790  FOR X=G TO P
    0x620647b85580 ----------   00800  IF I(X)=1 THEN 880
    0x620647b856c0 ----------   00810  NEXT X
    0x620647b859d0 ----------   00820  FOR X=1 TO G
    0x620647b85d10 ----------   00830  IF I(X)=1 THEN 880
    0x620647b85e50 ----------   00840  NEXT X
    0x620647b86030 ----------   00850  PRINT "YOU HAVE GIVEN ME INCONSISTENT INFORMATION."
    0x620647b861b0 ----------   00860  PRINT "TRY AGAIN, AND THIS TIME PLEASE BE MORE CAREFUL."
    0x620647b86230 ----------   00870  GOTO 660
    0x620647b86480 ---------- T 00880  G=X
    0x620647b86500 ---------A T 00890  REM     NOW WE CONVERT GUESS #G INTO G$
    0x620647b86810 ----------   00900  FOR X=1 TO G
    0x620647b86890 ----------   00910  GOSUB 3500
    0x620647b869c0 ----------   00920  NEXT X
    0x620647b86a60 ----------   00930  GOSUB 6000
    0x620647b86bd0 ----------   00940  PRINT "MY GUESS IS: ";
    0x620647b86ed0 ----------   00950  FOR X=1 TO P9
    0x620647b87130 ----------   00960  PRINT H$(X);
    0x620647b87270 ----------   00970  NEXT X
    0x620647b87670 ----------   00980  INPUT "  BLACKS, WHITES ";B1,W1
    0x620647b878f0 ----------   00990  IF B1=P9 THEN 1120
    0x620647b87970 ----------   01000  GOSUB 3000
    0x620647b87c60 ----------   01010  FOR X=1 TO P
    0x620647b87cf0 ----------   01020  GOSUB 3500
    0x620647b88020 ----------   01030  IF I(X)=0 THEN 1070
    0x620647b880a0 ----------   01035  GOSUB 6500
    0x620647b88110 ----------   01040  GOSUB 4000
    0x620647b88190 ----------   01050  GOSUB 4500
    0x620647b88910 ----------   01060  IF B1<>B OR W1<>W THEN I(X)=0
    0x620647b88a50 ---------- T 01070  NEXT X
    0x620647b88ba0 ----------   01080  NEXT M
    0x620647b88d50 ----------   01090  PRINT "I USED UP ALL MY MOVES!"
    0x620647b88ed0 ----------   01100  PRINT "I GUESS MY CPU IS JUST HAVING AN OFF DAY."
    0x620647b88f60 ----------   01110  GOTO 1130
    0x620647b892b0 ---------- T 01120  PRINT "I GOT IT IN ";M;" MOVES!"
    0x620647b89610 ---------- T 01130  C=C+M
    0x620647b89680 ----------   01140  GOSUB 5000
    0x620647b897b0 ----------   01150  NEXT R
    0x620647b89930 ----------   01160  PRINT "GAME OVER"
    0x620647b89a90 ----------   01170  PRINT "FINAL SCORE:"
    0x620647b89b10 ----------   01180  GOSUB 5040
    0x620647b89b60 ----------   01190  STOP
    0x620647b8a3f0 ---------A T 02000  REM
    0x620647b8a4a0 ---------A   02010  REM     BOARD PRINTOUT ROUTINE
    0x620647b8a530 ---------A   02020  REM
    0x620647b8a5c0 ----------   02025  PRINT
    0x620647b8a740 ----------   02030  PRINT "BOARD"
    0x620647b8a8c0 ----------   02040  PRINT "MOVE     GUESS          BLACK     WHITE"
    0x620647b8ada0 ----------   02050  FOR Z=1 TO M-1
    0x620647b8b9e0 ----------   02060  PRINT Z;TAB(9);S$(Z);TAB(25);S(Z,1);TAB(35);S(Z,2)
    0x620647b8bb20 ----------   02070  NEXT Z
    0x620647b8bbb0 ----------   02075  PRINT
    0x620647b8bc30 ----------   02080  GOTO 380
    0x620647b8bca0 ---------A T 02500  REM
    0x620647b8bd40 ---------A   02510  REM     QUIT ROUTINE
    0x620647b8bdd0 ---------A   02520  REM
    0x620647b8bf90 ----------   02530  PRINT "QUITTER!  MY COMBINATION WAS: ";
    0x620647b8c010 ----------   02535  GOSUB 4000
    0x620647b8c300 ----------   02540  FOR X=1 TO P9
    0x620647b8c560 ----------   02550  PRINT A$(X);
    0x620647b8c6a0 ----------   02560  NEXT X
    0x620647b8c730 ----------   02565  PRINT
    0x620647b8c890 ----------   02570  PRINT "GOOD BYE"
    0x620647b8c8f0 ----------   02580  STOP
    0x620647b8c970 ---------B G 03000  REM
    0x620647b8ca30 ---------B   03010  REM     INITIALIZE Q(1-P9) TO ZEROS
    0x620647b8cac0 ---------B   03020  REM
    0x620647b8cdd0 ---------B   03030  FOR S=1 TO P9
    0x620647b8d0d0 ---------B   03040  Q(S)=0
    0x620647b8d200 ---------B   03050  NEXT S
    0x620647b8d270 ---------B   03060  RETURN
    0x620647b8d2f0 ---------C G 03500  REM
    0x620647b8d3a0 ---------C   03510  REM     INCREMENT Q(1-P9)
    0x620647b8d430 ---------C   03520  REM
    0x620647b8d7a0 ---------C   03522  IF Q(1)>0 THEN 3530
    0x620647b8d850 ---------C   03524  REM  IF ZERO, THIS IS OUR FIRST INCREMENT: MAKE ALL ONES
    0x620647b8db60 ---------C   03526  FOR S=1 TO P9
    0x620647b8de60 ---------C   03527  Q(S)=1
    0x620647b8df90 ---------C   03528  NEXT S
    0x620647b8e000 ---------C   03529  RETURN
    0x620647b8e220 ---------C T 03530  Q=1
    0x620647b8e720 ---------C T 03540  Q(Q)=Q(Q)+1
    0x620647b8eab0 ---------C   03550  IF Q(Q)<=C9 THEN RETURN
    0x620647b8edb0 ---------C   03560  Q(Q)=1
    0x620647b8f0e0 ---------C   03570  Q=Q+1
    0x620647b8f150 ---------C   03580  GOTO 3540
    0x620647b8f1c0 ---------D G 04000  REM
    0x620647b8f280 ---------D   04010  REM     CONVERT Q(1-P9) TO A$(1-P9)
    0x620647b8f310 ---------D   04020  REM
    0x620647b8f630 ---------D   04030  FOR S=1 TO P9
    0x620647b8fcb0 ---------D   04040  A$(S)=MID$(L$,Q(S),1)
    0x620647b8fde0 ---------D   04050  NEXT S
    0x620647b8fe50 ---------D   04060  RETURN
    0x620647b8fed0 ---------E G 04500  REM
    0x620647b8ffa0 ---------E   04510  REM     GET NUMBER OF BLACKS (B) AND WHITES (W)
    0x620647b90060 ---------E   04520  REM     MASHES G$ AND A$ IN THE PROCESS
    0x620647b900f0 ---------E   04530  REM
    0x620647b907c0 ---------E   04540  B=0:W=0:F=0
    0x620647b90ac0 ---------E   04550  FOR S=1 TO P9
    0x620647b90f00 ---------E   04560  IF G$(S)<>A$(S) THEN 4620
    0x620647b91240 ---------E   04570  B=B+1
    0x620647b91630 ---------E   04580  G$(S)=CHR$(F)
    0x620647b91b20 ---------E   04590  A$(S)=CHR$(F+1)
    0x620647b91e50 ---------E   04600  F=F+2
    0x620647b91ec0 ---------E   04610  GOTO 4660
    0x620647b92280 ---------E T 04620  FOR T=1 TO P9
    0x620647b926d0 ---------E   04630  IF G$(S)<>A$(T) THEN 4650
    0x620647b92b40 ---------E   04640  IF G$(T)=A$(T) THEN 4650
    0x620647b93a80 ---------E   04645  W=W+1:A$(T)=CHR$(F):G$(S)=CHR$(F+1):F=F+2:GOTO 4660
    0x620647b93bb0 ---------E T 04650  NEXT T
    0x620647b93d00 ---------E T 04660  NEXT S
    0x620647b93d70 ---------E   04670  RETURN
    0x620647b93df0 ---------F G 05000  REM
    0x620647b93e90 ---------F   05010  REM     PRINT SCORE
    0x620647b93f20 ---------F   05020  REM
    0x620647b940a0 ---------F   05030  PRINT "SCORE:"
    0x620647b94310 ---------F G 05040  PRINT "     COMPUTER ";C
    0x620647b94570 ---------F   05050  PRINT "     HUMAN    ";H
    0x620647b945f0 ---------F   05060  PRINT
    0x620647b94650 ---------F   05070  RETURN
    0x620647b946d0 ---------A   05500  REM
    0x620647b94790 ---------A   05510  REM     CONVERT Q(1-P9) INTO G$(1-P9)
    0x620647b94820 ---------A   05520  REM
    0x620647b94b40 ----------   05530  FOR S=1 TO P9
    0x620647b951c0 ----------   05540  G$(S)=MID$(L$,Q(S),1)
    0x620647b952f0 ----------   05550  NEXT S
    0x620647b95360 ----------   05560  RETURN
    0x620647b953e0 ---------G G 06000  REM
    0x620647b954a0 ---------G   06010  REM     CONVERT Q(1-P9) TO H$(1-P9)
    0x620647b95530 ---------G   06020  REM
    0x620647b95850 ---------G   06030  FOR S=1 TO P9
    0x620647b95ed0 ---------G   06040  H$(S)=MID$(L$,Q(S),1)
    0x620647b96000 ---------G   06050  NEXT S
    0x620647b96070 ---------G   06060  RETURN
    0x620647b960f0 ---------H G 06500  REM
    0x620647b96190 ---------H   06510  REM     COPY H$ INTO G$
    0x620647b96220 ---------H   06520  REM
    0x620647b96530 ---------H   06530  FOR S=1 TO P9
    0x620647b96930 ---------H   06540  G$(S)=H$(S)
    0x620647b96a60 ---------H   06550  NEXT S
    0x620647b96ad0 ---------H   06560  RETURN
    0x620647b96b80 ---------A   08000  REM     PROGRAM DATA FOR COLOR NAMES
    0x620647b97360 ---------A   08010  DATA BLACK,WHITE,RED,GREEN,ORANGE,YELLOW,PURPLE,TAN
    0x620647b973f0 ---------A   09998  REM   ...WE'RE SORRY BUT IT'S TIME TO GO...
    0x620647b97460 ---------A   09999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00080      00090T
     00380      00410T, 00470T, 02080T
     00480      00450T
     00630      00540T
     00640      00620T
     00660      00870T
     00880      00800T, 00830T
     00890      00780T
     01070      01030T
     01120      00990T
     01130      01110T
     02000      00390T
     02500      00400T
     03000      00330G, 00750G, 01000G
     03500      00350G, 00910G, 01020G
     03530      03522T
     03540      03580T
     04000      00510G, 00622G, 01040G, 02535G
     04500      00530G, 01050G
     04620      04560T
     04650      04630T, 04640T
     04660      04610T, 04645T
     05000      00650G, 01140G
     05040      01180G
     06000      00930G
     06500      01035G

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x620647b706d0 (00002)   0x620647b706d0 (00002)   0x620647b97460 (09999)   0x620647b97460 (09999)   
   B) 0x620647b8c970 (03000)   0x620647b8c970 (03000)   0x620647b8d270 (03060)   0x620647b8d270 (03060)   
   C) 0x620647b8d2f0 (03500)   0x620647b8d2f0 (03500)   0x620647b8e000 (03529)   0x620647b8f150 (03580)   
   D) 0x620647b8f1c0 (04000)   0x620647b8f1c0 (04000)   0x620647b8fe50 (04060)   0x620647b8fe50 (04060)   
   E) 0x620647b8fed0 (04500)   0x620647b8fed0 (04500)   0x620647b93d70 (04670)   0x620647b93d70 (04670)   
   F) 0x620647b93df0 (05000)   0x620647b93df0 (05000)   0x620647b94650 (05070)   0x620647b94650 (05070)   
   G) 0x620647b953e0 (06000)   0x620647b953e0 (06000)   0x620647b96070 (06060)   0x620647b96070 (06060)   
   H) 0x620647b960f0 (06500)   0x620647b960f0 (06500)   0x620647b96ad0 (06560)   0x620647b96ad0 (06560)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine F overlaps, or is tangled with, routine A!
    NOTE: Routine G overlaps, or is tangled with, routine A!
    NOTE: Routine H overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/mastrmnd.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x620647b706d0 ---------A   00002  PRINT TAB(30);"MASTERMIND"
    0x620647b70670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x620647b612b0 ----------   00006  PRINT
    0x620647b709e0 ----------        a PRINT
    0x620647b707f0 ---------A        b PRINT
    0x620647b71b80 ---------A   00010  REM
    0x620647b72f30 ---------A   00020  REM     MASTERMIND II
    0x620647b72ff0 ---------A   00030  REM     STEVE NORTH
    0x620647b730b0 ---------A   00040  REM     CREATIVE COMPUTING
    0x620647b71040 ---------A   00050  REM     PO BOX 789-M MORRISTOWN NEW JERSEY 07960
    0x620647b70e40 ---------A   00060  REM
    0x620647b72e70 ---------A   00070  REM
    0x620647b714e0 ---------A T 00080  INPUT "NUMBER OF COLORS";C9
    0x620647b731a0 ----------   00090  IF C9>8 THEN PRINT "NO MORE THAN 8, PLEASE!"
    0x620647b73200 ---------A        a GOTO 80
    0x620647b71760 ----------   00100  INPUT "NUMBER OF POSITIONS";P9
    0x620647b78940 ----------   00110  INPUT "NUMBER OF ROUNDS";R9
    0x620647b78cc0 ----------   00120  P=C9^P9
    0x620647b78ef0 ----------   00130  PRINT "TOTAL POSSIBILITIES =";P
    0x620647b791b0 ----------   00140  H=0
    0x620647b794a0 ----------        a C=0
    0x620647b7a710 ----------   00150  DIM Q(P9),S(10,2),S$(10),A$(P9),G$(P9),I(P),H$(P9)
    0x620647b7aa00 ----------   00160  L$="BWRGOYPT"
    0x620647b7aa70 ----------   00170  PRINT
    0x620647b7ab00 ----------   00180  PRINT
    0x620647b7ac70 ----------   00190  PRINT "COLOR     LETTER"
    0x620647b7add0 ----------   00200  PRINT "=====     ======"
    0x620647b7b190 ----------   00210  FOR X=1 TO C9
    0x620647b7b3c0 ----------   00220  READ X$
    0x620647b7b9d0 ----------   00230  PRINT X$;TAB(13);MID$(L$,X,1)
    0x620647b7bb10 ----------   00240  NEXT X
    0x620647b7bba0 ----------   00250  PRINT
    0x620647b7bf60 ----------   00260  FOR R=1 TO R9
    0x620647b7bff0 ----------   00270  PRINT 
    0x620647b7c350 ----------   00280  PRINT "ROUND NUMBER";R;"----"
    0x620647b7c3e0 ----------   00290  PRINT
    0x620647b7c520 ----------   00300  PRINT "GUESS MY COMBINATION."
    0x620647b7c5b0 ----------        a PRINT
    0x620647b7c850 ---------A   00310  REM     GET A COMBINATION
    0x620647b7cf20 ----------   00320  A=INT(P*RND(1)+1)
    0x620647b7cf90 ----------   00330  GOSUB 3000
    0x620647b7d280 ----------   00340  FOR X=1 TO A
    0x620647b7d300 ----------   00350  GOSUB 3500
    0x620647b7d430 ----------   00360  NEXT X
    0x620647b7d800 ----------   00370  FOR M=1 TO 10
    0x620647b7db60 ---------- T 00380  PRINT "MOVE # ";M;" GUESS ";
    0x620647b7dcd0 ---------- T      a INPUT X$
    0x620647b7df60 ----------   00390  IF X$="BOARD" THEN 2000
    0x620647b7e210 ----------   00400  IF X$="QUIT" THEN 2500
    0x620647b7e6a0 ----------   00410  IF LEN(X$)<>P9 THEN PRINT "BAD NUMBER OF POSITIONS."
    0x620647b7e730 ----------        a GOTO 380
    0x620647b7e7b0 ---------A   00420  REM     UNPACK X$ INTO G$(1-P9)
    0x620647b7eac0 ----------   00430  FOR X=1 TO P9
    0x620647b7eea0 ----------   00440  FOR Y=1 TO C9
    0x620647b7f620 ----------   00450  IF MID$(X$,X,1)=MID$(L$,Y,1) THEN 480
    0x620647b7f760 ----------   00460  NEXT Y
    0x620647b7fd60 ----------   00470  PRINT "'"; MID$(X$,X,1); "' IS UNRECOGNIZED."
    0x620647b7fde0 ----------        a GOTO 380
    0x620647b80370 ---------- T 00480  G$(X)=MID$(X$,X,1)
    0x620647b804a0 ----------   00490  NEXT X
    0x620647b80590 ---------A   00500  REM     NOW WE CONVERT Q(1-P9) INTO A$(1-P9) [ACTUAL GUESS]
    0x620647b80640 ----------   00510  GOSUB 4000
    0x620647b806d0 ---------A   00520  REM     AND GET NUMBER OF BLACKS AND WHITES
    0x620647b80760 ----------   00530  GOSUB 4500
    0x620647b80aa0 ----------   00540  IF B=P9 THEN 630
    0x620647b80b30 ---------A   00550  REM     TELL HUMAN RESULTS
    0x620647b811b0 ----------   00560  PRINT "YOU HAVE ";B;" BLACKS AND ";W;" WHITES."
    0x620647b81250 ---------A   00570  REM     SAVE ALL THIS STUFF FOR BOARD PRINTOUT LATER
    0x620647b81580 ----------   00580  S$(M)=X$
    0x620647b81950 ----------   00590  S(M,1)=B
    0x620647b81d20 ----------   00600  S(M,2)=W
    0x620647b81e50 ----------   00610  NEXT M
    0x620647b81ff0 ----------   00620  PRINT "YOU RAN OUT OF MOVES!  THAT'S ALL YOU GET!"
    0x620647b82070 ----------        a GOTO 640
    0x620647b82510 ----------   00622  GOSUB 4000
    0x620647b82690 ----------   00623  PRINT "THE ACTUAL COMBINATION WAS: ";
    0x620647b82990 ----------   00624  FOR X=1 TO P9
    0x620647b82bf0 ----------   00625  PRINT A$(X);
    0x620647b82d30 ----------   00626  NEXT X
    0x620647b82de0 ----------   00627  PRINT
    0x620647b83140 ---------- T 00630  PRINT "YOU GUESSED IT IN ";M;" MOVES!"
    0x620647b834a0 ---------- T 00640  H=H+M
    0x620647b83510 ----------   00650  GOSUB 5000
    0x620647b83580 ---------A T 00660  REM
    0x620647b83630 ---------A   00670  REM     NOW COMPUTER GUESSES
    0x620647b836c0 ---------A   00680  REM
    0x620647b839d0 ----------   00690  FOR X=1 TO P
    0x620647b83cd0 ----------   00700  I(X)=1
    0x620647b83e00 ----------   00710  NEXT X
    0x620647b83fb0 ----------   00720  PRINT "NOW I GUESS.  THINK OF A COMBINATION."
    0x620647b84140 ----------   00730  INPUT "HIT RETURN WHEN READY:";X$
    0x620647b84420 ----------   00740  FOR M=1 TO 10
    0x620647b844b0 ----------   00750  GOSUB 3000
    0x620647b84520 ---------A   00760  REM     FIND A GUESS
    0x620647b84bf0 ----------   00770  G=INT(P*RND(1)+1)
    0x620647b84f20 ----------   00780  IF I(G)=1 THEN 890
    0x620647b85240 ----------   00790  FOR X=G TO P
    0x620647b85580 ----------   00800  IF I(X)=1 THEN 880
    0x620647b856c0 ----------   00810  NEXT X
    0x620647b859d0 ----------   00820  FOR X=1 TO G
    0x620647b85d10 ----------   00830  IF I(X)=1 THEN 880
    0x620647b85e50 ----------   00840  NEXT X
    0x620647b86030 ----------   00850  PRINT "YOU HAVE GIVEN ME INCONSISTENT INFORMATION."
    0x620647b861b0 ----------   00860  PRINT "TRY AGAIN, AND THIS TIME PLEASE BE MORE CAREFUL."
    0x620647b86230 ----------   00870  GOTO 660
    0x620647b86480 ---------- T 00880  G=X
    0x620647b86500 ---------A T 00890  REM     NOW WE CONVERT GUESS #G INTO G$
    0x620647b86810 ----------   00900  FOR X=1 TO G
    0x620647b86890 ----------   00910  GOSUB 3500
    0x620647b869c0 ----------   00920  NEXT X
    0x620647b86a60 ----------   00930  GOSUB 6000
    0x620647b86bd0 ----------   00940  PRINT "MY GUESS IS: ";
    0x620647b86ed0 ----------   00950  FOR X=1 TO P9
    0x620647b87130 ----------   00960  PRINT H$(X);
    0x620647b87270 ----------   00970  NEXT X
    0x620647b87670 ----------   00980  INPUT "  BLACKS, WHITES ";B1,W1
    0x620647b878f0 ----------   00990  IF B1=P9 THEN 1120
    0x620647b87970 ----------   01000  GOSUB 3000
    0x620647b87c60 ----------   01010  FOR X=1 TO P
    0x620647b87cf0 ----------   01020  GOSUB 3500
    0x620647b88020 ----------   01030  IF I(X)=0 THEN 1070
    0x620647b880a0 ----------   01035  GOSUB 6500
    0x620647b88110 ----------   01040  GOSUB 4000
    0x620647b88190 ----------   01050  GOSUB 4500
    0x620647b88910 ----------   01060  IF B1<>B OR W1<>W THEN I(X)=0
    0x620647b88a50 ---------- T 01070  NEXT X
    0x620647b88ba0 ----------   01080  NEXT M
    0x620647b88d50 ----------   01090  PRINT "I USED UP ALL MY MOVES!"
    0x620647b88ed0 ----------   01100  PRINT "I GUESS MY CPU IS JUST HAVING AN OFF DAY."
    0x620647b88f60 ----------   01110  GOTO 1130
    0x620647b892b0 ---------- T 01120  PRINT "I GOT IT IN ";M;" MOVES!"
    0x620647b89610 ---------- T 01130  C=C+M
    0x620647b89680 ----------   01140  GOSUB 5000
    0x620647b897b0 ----------   01150  NEXT R
    0x620647b89930 ----------   01160  PRINT "GAME OVER"
    0x620647b89a90 ----------   01170  PRINT "FINAL SCORE:"
    0x620647b89b10 ----------   01180  GOSUB 5040
    0x620647b89b60 ----------   01190  STOP
    0x620647b8a3f0 ---------A T 02000  REM
    0x620647b8a4a0 ---------A   02010  REM     BOARD PRINTOUT ROUTINE
    0x620647b8a530 ---------A   02020  REM
    0x620647b8a5c0 ----------   02025  PRINT
    0x620647b8a740 ----------   02030  PRINT "BOARD"
    0x620647b8a8c0 ----------   02040  PRINT "MOVE     GUESS          BLACK     WHITE"
    0x620647b8ada0 ----------   02050  FOR Z=1 TO M-1
    0x620647b8b9e0 ----------   02060  PRINT Z;TAB(9);S$(Z);TAB(25);S(Z,1);TAB(35);S(Z,2)
    0x620647b8bb20 ----------   02070  NEXT Z
    0x620647b8bbb0 ----------   02075  PRINT
    0x620647b8bc30 ----------   02080  GOTO 380
    0x620647b8bca0 ---------A T 02500  REM
    0x620647b8bd40 ---------A   02510  REM     QUIT ROUTINE
    0x620647b8bdd0 ---------A   02520  REM
    0x620647b8bf90 ----------   02530  PRINT "QUITTER!  MY COMBINATION WAS: ";
    0x620647b8c010 ----------   02535  GOSUB 4000
    0x620647b8c300 ----------   02540  FOR X=1 TO P9
    0x620647b8c560 ----------   02550  PRINT A$(X);
    0x620647b8c6a0 ----------   02560  NEXT X
    0x620647b8c730 ----------   02565  PRINT
    0x620647b8c890 ----------   02570  PRINT "GOOD BYE"
    0x620647b8c8f0 ----------   02580  STOP
    0x620647b8c970 ---------B G 03000  REM
    0x620647b8ca30 ---------B   03010  REM     INITIALIZE Q(1-P9) TO ZEROS
    0x620647b8cac0 ---------B   03020  REM
    0x620647b8cdd0 ---------B   03030  FOR S=1 TO P9
    0x620647b8d0d0 ---------B   03040  Q(S)=0
    0x620647b8d200 ---------B   03050  NEXT S
    0x620647b8d270 ---------B   03060  RETURN
    0x620647b8d2f0 ---------C G 03500  REM
    0x620647b8d3a0 ---------C   03510  REM     INCREMENT Q(1-P9)
    0x620647b8d430 ---------C   03520  REM
    0x620647b8d7a0 ---------C   03522  IF Q(1)>0 THEN 3530
    0x620647b8d850 ---------C   03524  REM  IF ZERO, THIS IS OUR FIRST INCREMENT
    0x620647b8db60 ---------C   03526  FOR S=1 TO P9
    0x620647b8de60 ---------C   03527  Q(S)=1
    0x620647b8df90 ---------C   03528  NEXT S
    0x620647b8e000 ---------C   03529  RETURN
    0x620647b8e220 ---------C T 03530  Q=1
    0x620647b8e720 ---------C T 03540  Q(Q)=Q(Q)+1
    0x620647b8eab0 ---------C   03550  IF Q(Q)<=C9 THEN RETURN
    0x620647b8edb0 ---------C   03560  Q(Q)=1
    0x620647b8f0e0 ---------C   03570  Q=Q+1
    0x620647b8f150 ---------C   03580  GOTO 3540
    0x620647b8f1c0 ---------D G 04000  REM
    0x620647b8f280 ---------D   04010  REM     CONVERT Q(1-P9) TO A$(1-P9)
    0x620647b8f310 ---------D   04020  REM
    0x620647b8f630 ---------D   04030  FOR S=1 TO P9
    0x620647b8fcb0 ---------D   04040  A$(S)=MID$(L$,Q(S),1)
    0x620647b8fde0 ---------D   04050  NEXT S
    0x620647b8fe50 ---------D   04060  RETURN
    0x620647b8fed0 ---------E G 04500  REM
    0x620647b8ffa0 ---------E   04510  REM     GET NUMBER OF BLACKS (B) AND WHITES (W)
    0x620647b90060 ---------E   04520  REM     MASHES G$ AND A$ IN THE PROCESS
    0x620647b900f0 ---------E   04530  REM
    0x620647b90300 ----------   04540  B=0
    0x620647b904f0 ----------        a W=0
    0x620647b907c0 ---------E        b F=0
    0x620647b90ac0 ---------E   04550  FOR S=1 TO P9
    0x620647b90f00 ---------E   04560  IF G$(S)<>A$(S) THEN 4620
    0x620647b91240 ---------E   04570  B=B+1
    0x620647b91630 ---------E   04580  G$(S)=CHR$(F)
    0x620647b91b20 ---------E   04590  A$(S)=CHR$(F+1)
    0x620647b91e50 ---------E   04600  F=F+2
    0x620647b91ec0 ---------E   04610  GOTO 4660
    0x620647b92280 ---------E T 04620  FOR T=1 TO P9
    0x620647b926d0 ---------E   04630  IF G$(S)<>A$(T) THEN 4650
    0x620647b92b40 ---------E   04640  IF G$(T)=A$(T) THEN 4650
    0x620647b92e60 ----------   04645  W=W+1
    0x620647b93230 ----------        a A$(T)=CHR$(F)
    0x620647b93700 ----------        b G$(S)=CHR$(F+1)
    0x620647b93a10 ----------        c F=F+2
    0x620647b93a80 ---------E        d GOTO 4660
    0x620647b93bb0 ---------E T 04650  NEXT T
    0x620647b93d00 ---------E T 04660  NEXT S
    0x620647b93d70 ---------E   04670  RETURN
    0x620647b93df0 ---------F G 05000  REM
    0x620647b93e90 ---------F   05010  REM     PRINT SCORE
    0x620647b93f20 ---------F   05020  REM
    0x620647b940a0 ---------F   05030  PRINT "SCORE:"
    0x620647b94310 ---------F G 05040  PRINT "     COMPUTER ";C
    0x620647b94570 ---------F   05050  PRINT "     HUMAN    ";H
    0x620647b945f0 ---------F   05060  PRINT
    0x620647b94650 ---------F   05070  RETURN
    0x620647b946d0 ---------A   05500  REM
    0x620647b94790 ---------A   05510  REM     CONVERT Q(1-P9) INTO G$(1-P9)
    0x620647b94820 ---------A   05520  REM
    0x620647b94b40 ----------   05530  FOR S=1 TO P9
    0x620647b951c0 ----------   05540  G$(S)=MID$(L$,Q(S),1)
    0x620647b952f0 ----------   05550  NEXT S
    0x620647b95360 ----------   05560  RETURN
    0x620647b953e0 ---------G G 06000  REM
    0x620647b954a0 ---------G   06010  REM     CONVERT Q(1-P9) TO H$(1-P9)
    0x620647b95530 ---------G   06020  REM
    0x620647b95850 ---------G   06030  FOR S=1 TO P9
    0x620647b95ed0 ---------G   06040  H$(S)=MID$(L$,Q(S),1)
    0x620647b96000 ---------G   06050  NEXT S
    0x620647b96070 ---------G   06060  RETURN
    0x620647b960f0 ---------H G 06500  REM
    0x620647b96190 ---------H   06510  REM     COPY H$ INTO G$
    0x620647b96220 ---------H   06520  REM
    0x620647b96530 ---------H   06530  FOR S=1 TO P9
    0x620647b96930 ---------H   06540  G$(S)=H$(S)
    0x620647b96a60 ---------H   06550  NEXT S
    0x620647b96ad0 ---------H   06560  RETURN
    0x620647b96b80 ---------A   08000  REM     PROGRAM DATA FOR COLOR NAMES
    0x620647b97360 ---------A   08010  DATA BLACK,WHITE,RED,GREEN,ORANGE,YELLOW,PURPLE,TAN
    0x620647b973f0 ---------A   09998  REM   ...WE'RE SORRY BUT IT'S TIME TO GO...
    0x620647b97460 ---------A   09999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/mastrmnd.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x620647b706d0 ---------A   01000  PRINT TAB(30);"MASTERMIND"
    0x620647b70670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x620647b612b0 ----------   01020  PRINT
    0x620647b709e0 ----------   01030  PRINT
    0x620647b707f0 ---------A   01040  PRINT
    0x620647b71b80 ---------A   01050  REM
    0x620647b72f30 ---------A   01060  REM     MASTERMIND II
    0x620647b72ff0 ---------A T 01070  REM     STEVE NORTH
    0x620647b730b0 ---------A   01080  REM     CREATIVE COMPUTING
    0x620647b71040 ---------A   01090  REM     PO BOX 789-M MORRISTOWN NEW JERSEY 07960
    0x620647b70e40 ---------A   01100  REM
    0x620647b72e70 ---------A   01110  REM
    0x620647b714e0 ---------A T 01120  INPUT "NUMBER OF COLORS";C9
    0x620647b731a0 ---------- T 01130  IF C9>8 THEN PRINT "NO MORE THAN 8, PLEASE!"
    0x620647b73200 ---------A   01140  GOTO 1120
    0x620647b71760 ----------   01150  INPUT "NUMBER OF POSITIONS";P9
    0x620647b78940 ----------   01160  INPUT "NUMBER OF ROUNDS";R9
    0x620647b78cc0 ----------   01170  P=C9^P9
    0x620647b78ef0 ----------   01180  PRINT "TOTAL POSSIBILITIES =";P
    0x620647b791b0 ----------   01190  H=0
    0x620647b794a0 ----------   01200  C=0
    0x620647b7a710 ----------   01210  DIM Q(P9),S(10,2),S$(10),A$(P9),G$(P9),I(P),H$(P9)
    0x620647b7aa00 ----------   01220  L$="BWRGOYPT"
    0x620647b7aa70 ----------   01230  PRINT
    0x620647b7ab00 ----------   01240  PRINT
    0x620647b7ac70 ----------   01250  PRINT "COLOR     LETTER"
    0x620647b7add0 ----------   01260  PRINT "=====     ======"
    0x620647b7b190 ----------   01270  FOR X=1 TO C9
    0x620647b7b3c0 ----------   01280  READ X$
    0x620647b7b9d0 ----------   01290  PRINT X$;TAB(13);MID$(L$,X,1)
    0x620647b7bb10 ----------   01300  NEXT X
    0x620647b7bba0 ----------   01310  PRINT
    0x620647b7bf60 ----------   01320  FOR R=1 TO R9
    0x620647b7bff0 ----------   01330  PRINT 
    0x620647b7c350 ----------   01340  PRINT "ROUND NUMBER";R;"----"
    0x620647b7c3e0 ----------   01350  PRINT
    0x620647b7c520 ----------   01360  PRINT "GUESS MY COMBINATION."
    0x620647b7c5b0 ----------   01370  PRINT
    0x620647b7c850 ---------A   01380  REM     GET A COMBINATION
    0x620647b7cf20 ----------   01390  A=INT(P*RND(1)+1)
    0x620647b7cf90 ----------   01400  GOSUB 2600
    0x620647b7d280 ----------   01410  FOR X=1 TO A
    0x620647b7d300 ----------   01420  GOSUB 14200
    0x620647b7d430 ----------   01430  NEXT X
    0x620647b7d800 ----------   01440  FOR M=1 TO 10
    0x620647b7db60 ----------   01450  PRINT "MOVE # ";M;" GUESS ";
    0x620647b7dcd0 ----------   01460  INPUT X$
    0x620647b7df60 ----------   01470  IF X$="BOARD" THEN 2380
    0x620647b7e210 ----------   01480  IF X$="QUIT" THEN 2490
    0x620647b7e6a0 ----------   01490  IF LEN(X$)<>P9 THEN PRINT "BAD NUMBER OF POSITIONS."
    0x620647b7e730 ----------   01500  GOTO 1460
    0x620647b7e7b0 ---------A   01510  REM     UNPACK X$ INTO G$(1-P9)
    0x620647b7eac0 ----------   01520  FOR X=1 TO P9
    0x620647b7eea0 ----------   01530  FOR Y=1 TO C9
    0x620647b7f620 ----------   01540  IF MID$(X$,X,1)=MID$(L$,Y,1) THEN 1580
    0x620647b7f760 ----------   01550  NEXT Y
    0x620647b7fd60 ----------   01560  PRINT "'"; MID$(X$,X,1); "' IS UNRECOGNIZED."
    0x620647b7fde0 ----------   01570  GOTO 1460
    0x620647b80370 ----------   01580  G$(X)=MID$(X$,X,1)
    0x620647b804a0 ----------   01590  NEXT X
    0x620647b80590 ---------A   01600  REM     NOW WE CONVERT Q(1-P9) INTO A$(1-P9) [ACTUAL GUESS]
    0x620647b80640 ----------   01610  GOSUB 2820
    0x620647b806d0 ---------A   01620  REM     AND GET NUMBER OF BLACKS AND WHITES
    0x620647b80760 ----------   01630  GOSUB 2890
    0x620647b80aa0 ----------   01640  IF B=P9 THEN 1800
    0x620647b80b30 ---------A   01650  REM     TELL HUMAN RESULTS
    0x620647b811b0 ----------   01660  PRINT "YOU HAVE ";B;" BLACKS AND ";W;" WHITES."
    0x620647b81250 ---------A   01670  REM     SAVE ALL THIS STUFF FOR BOARD PRINTOUT LATER
    0x620647b81580 ----------   01680  S$(M)=X$
    0x620647b81950 ----------   01690  S(M,1)=B
    0x620647b81d20 ----------   01700  S(M,2)=W
    0x620647b81e50 ----------   01710  NEXT M
    0x620647b81ff0 ----------   01720  PRINT "YOU RAN OUT OF MOVES!  THAT'S ALL YOU GET!"
    0x620647b82070 ----------   01730  GOTO 1810
    0x620647b82510 ----------   01740  GOSUB 2820
    0x620647b82690 ----------   01750  PRINT "THE ACTUAL COMBINATION WAS: ";
    0x620647b82990 ----------   01760  FOR X=1 TO P9
    0x620647b82bf0 ----------   01770  PRINT A$(X);
    0x620647b82d30 ----------   01780  NEXT X
    0x620647b82de0 ----------   01790  PRINT
    0x620647b83140 ----------   01800  PRINT "YOU GUESSED IT IN ";M;" MOVES!"
    0x620647b834a0 ----------   01810  H=H+M
    0x620647b83510 ----------   01820  GOSUB 3140
    0x620647b83580 ---------A   01830  REM
    0x620647b83630 ---------A   01840  REM     NOW COMPUTER GUESSES
    0x620647b836c0 ---------A   01850  REM
    0x620647b839d0 ----------   01860  FOR X=1 TO P
    0x620647b83cd0 ----------   01870  I(X)=1
    0x620647b83e00 ----------   01880  NEXT X
    0x620647b83fb0 ----------   01890  PRINT "NOW I GUESS.  THINK OF A COMBINATION."
    0x620647b84140 ----------   01900  INPUT "HIT RETURN WHEN READY:";X$
    0x620647b84420 ----------   01910  FOR M=1 TO 10
    0x620647b844b0 ----------   01920  GOSUB 2600
    0x620647b84520 ---------A   01930  REM     FIND A GUESS
    0x620647b84bf0 ----------   01940  G=INT(P*RND(1)+1)
    0x620647b84f20 ----------   01950  IF I(G)=1 THEN 2060
    0x620647b85240 ----------   01960  FOR X=G TO P
    0x620647b85580 ----------   01970  IF I(X)=1 THEN 2050
    0x620647b856c0 ----------   01980  NEXT X
    0x620647b859d0 ----------   01990  FOR X=1 TO G
    0x620647b85d10 ---------- T 02000  IF I(X)=1 THEN 2050
    0x620647b85e50 ----------   02010  NEXT X
    0x620647b86030 ----------   02020  PRINT "YOU HAVE GIVEN ME INCONSISTENT INFORMATION."
    0x620647b861b0 ----------   02030  PRINT "TRY AGAIN, AND THIS TIME PLEASE BE MORE CAREFUL."
    0x620647b86230 ----------   02040  GOTO 1830
    0x620647b86480 ----------   02050  G=X
    0x620647b86500 ---------A   02060  REM     NOW WE CONVERT GUESS #G INTO G$
    0x620647b86810 ----------   02070  FOR X=1 TO G
    0x620647b86890 ----------   02080  GOSUB 2670
    0x620647b869c0 ----------   02090  NEXT X
    0x620647b86a60 ----------   02100  GOSUB 3290
    0x620647b86bd0 ----------   02110  PRINT "MY GUESS IS: ";
    0x620647b86ed0 ----------   02120  FOR X=1 TO P9
    0x620647b87130 ----------   02130  PRINT H$(X);
    0x620647b87270 ----------   02140  NEXT X
    0x620647b87670 ----------   02150  INPUT "  BLACKS, WHITES ";B1,W1
    0x620647b878f0 ----------   02160  IF B1=P9 THEN 2300
    0x620647b87970 ----------   02170  GOSUB 2600
    0x620647b87c60 ----------   02180  FOR X=1 TO P
    0x620647b87cf0 ----------   02190  GOSUB 2670
    0x620647b88020 ----------   02200  IF I(X)=0 THEN 2250
    0x620647b880a0 ----------   02210  GOSUB 3360
    0x620647b88110 ----------   02220  GOSUB 2820
    0x620647b88190 ----------   02230  GOSUB 2890
    0x620647b88910 ----------   02240  IF B1<>B OR W1<>W THEN I(X)=0
    0x620647b88a50 ----------   02250  NEXT X
    0x620647b88ba0 ----------   02260  NEXT M
    0x620647b88d50 ----------   02270  PRINT "I USED UP ALL MY MOVES!"
    0x620647b88ed0 ----------   02280  PRINT "I GUESS MY CPU IS JUST HAVING AN OFF DAY."
    0x620647b88f60 ----------   02290  GOTO 2310
    0x620647b892b0 ----------   02300  PRINT "I GOT IT IN ";M;" MOVES!"
    0x620647b89610 ----------   02310  C=C+M
    0x620647b89680 ----------   02320  GOSUB 3140
    0x620647b897b0 ----------   02330  NEXT R
    0x620647b89930 ----------   02340  PRINT "GAME OVER"
    0x620647b89a90 ----------   02350  PRINT "FINAL SCORE:"
    0x620647b89b10 ----------   02360  GOSUB 3180
    0x620647b89b60 ----------   02370  STOP
    0x620647b8a3f0 ---------A   02380  REM
    0x620647b8a4a0 ---------A   02390  REM     BOARD PRINTOUT ROUTINE
    0x620647b8a530 ---------A   02400  REM
    0x620647b8a5c0 ----------   02410  PRINT
    0x620647b8a740 ----------   02420  PRINT "BOARD"
    0x620647b8a8c0 ----------   02430  PRINT "MOVE     GUESS          BLACK     WHITE"
    0x620647b8ada0 ----------   02440  FOR Z=1 TO M-1
    0x620647b8b9e0 ----------   02450  PRINT Z;TAB(9);S$(Z);TAB(25);S(Z,1);TAB(35);S(Z,2)
    0x620647b8bb20 ----------   02460  NEXT Z
    0x620647b8bbb0 ----------   02470  PRINT
    0x620647b8bc30 ----------   02480  GOTO 1460
    0x620647b8bca0 ---------A   02490  REM
    0x620647b8bd40 ---------A T 02500  REM     QUIT ROUTINE
    0x620647b8bdd0 ---------A   02510  REM
    0x620647b8bf90 ----------   02520  PRINT "QUITTER!  MY COMBINATION WAS: ";
    0x620647b8c010 ----------   02530  GOSUB 2820
    0x620647b8c300 ----------   02540  FOR X=1 TO P9
    0x620647b8c560 ----------   02550  PRINT A$(X);
    0x620647b8c6a0 ----------   02560  NEXT X
    0x620647b8c730 ----------   02570  PRINT
    0x620647b8c890 ----------   02580  PRINT "GOOD BYE"
    0x620647b8c8f0 ----------   02590  STOP
    0x620647b8c970 ---------B   02600  REM
    0x620647b8ca30 ---------B   02610  REM     INITIALIZE Q(1-P9) TO ZEROS
    0x620647b8cac0 ---------B   02620  REM
    0x620647b8cdd0 ---------B   02630  FOR S=1 TO P9
    0x620647b8d0d0 ---------B   02640  Q(S)=0
    0x620647b8d200 ---------B   02650  NEXT S
    0x620647b8d270 ---------B   02660  RETURN
    0x620647b8d2f0 ---------C   02670  REM
    0x620647b8d3a0 ---------C   02680  REM     INCREMENT Q(1-P9)
    0x620647b8d430 ---------C   02690  REM
    0x620647b8d7a0 ---------C   02700  IF Q(1)>0 THEN 2760
    0x620647b8d850 ---------C   02710  REM  IF ZERO, THIS IS OUR FIRST INCREMENT
    0x620647b8db60 ---------C   02720  FOR S=1 TO P9
    0x620647b8de60 ---------C   02730  Q(S)=1
    0x620647b8df90 ---------C   02740  NEXT S
    0x620647b8e000 ---------C   02750  RETURN
    0x620647b8e220 ---------C   02760  Q=1
    0x620647b8e720 ---------C   02770  Q(Q)=Q(Q)+1
    0x620647b8eab0 ---------C   02780  IF Q(Q)<=C9 THEN RETURN
    0x620647b8edb0 ---------C   02790  Q(Q)=1
    0x620647b8f0e0 ---------C   02800  Q=Q+1
    0x620647b8f150 ---------C   02810  GOTO 2770
    0x620647b8f1c0 ---------D   02820  REM
    0x620647b8f280 ---------D   02830  REM     CONVERT Q(1-P9) TO A$(1-P9)
    0x620647b8f310 ---------D   02840  REM
    0x620647b8f630 ---------D   02850  FOR S=1 TO P9
    0x620647b8fcb0 ---------D   02860  A$(S)=MID$(L$,Q(S),1)
    0x620647b8fde0 ---------D   02870  NEXT S
    0x620647b8fe50 ---------D   02880  RETURN
    0x620647b8fed0 ---------E   02890  REM
    0x620647b8ffa0 ---------E   02900  REM     GET NUMBER OF BLACKS (B) AND WHITES (W)
    0x620647b90060 ---------E   02910  REM     MASHES G$ AND A$ IN THE PROCESS
    0x620647b900f0 ---------E   02920  REM
    0x620647b90300 ----------   02930  B=0
    0x620647b904f0 ----------   02940  W=0
    0x620647b907c0 ---------E   02950  F=0
    0x620647b90ac0 ---------E   02960  FOR S=1 TO P9
    0x620647b90f00 ---------E   02970  IF G$(S)<>A$(S) THEN 3030
    0x620647b91240 ---------E   02980  B=B+1
    0x620647b91630 ---------E   02990  G$(S)=CHR$(F)
    0x620647b91b20 ---------E G 03000  A$(S)=CHR$(F+1)
    0x620647b91e50 ---------E   03010  F=F+2
    0x620647b91ec0 ---------E   03020  GOTO 3120
    0x620647b92280 ---------E   03030  FOR T=1 TO P9
    0x620647b926d0 ---------E   03040  IF G$(S)<>A$(T) THEN 3110
    0x620647b92b40 ---------E   03050  IF G$(T)=A$(T) THEN 3110
    0x620647b92e60 ----------   03060  W=W+1
    0x620647b93230 ----------   03070  A$(T)=CHR$(F)
    0x620647b93700 ----------   03080  G$(S)=CHR$(F+1)
    0x620647b93a10 ----------   03090  F=F+2
    0x620647b93a80 ---------E   03100  GOTO 3120
    0x620647b93bb0 ---------E   03110  NEXT T
    0x620647b93d00 ---------E   03120  NEXT S
    0x620647b93d70 ---------E   03130  RETURN
    0x620647b93df0 ---------F   03140  REM
    0x620647b93e90 ---------F   03150  REM     PRINT SCORE
    0x620647b93f20 ---------F   03160  REM
    0x620647b940a0 ---------F   03170  PRINT "SCORE:"
    0x620647b94310 ---------F   03180  PRINT "     COMPUTER ";C
    0x620647b94570 ---------F   03190  PRINT "     HUMAN    ";H
    0x620647b945f0 ---------F   03200  PRINT
    0x620647b94650 ---------F   03210  RETURN
    0x620647b946d0 ---------A   03220  REM
    0x620647b94790 ---------A   03230  REM     CONVERT Q(1-P9) INTO G$(1-P9)
    0x620647b94820 ---------A   03240  REM
    0x620647b94b40 ----------   03250  FOR S=1 TO P9
    0x620647b951c0 ----------   03260  G$(S)=MID$(L$,Q(S),1)
    0x620647b952f0 ----------   03270  NEXT S
    0x620647b95360 ----------   03280  RETURN
    0x620647b953e0 ---------G   03290  REM
    0x620647b954a0 ---------G   03300  REM     CONVERT Q(1-P9) TO H$(1-P9)
    0x620647b95530 ---------G   03310  REM
    0x620647b95850 ---------G   03320  FOR S=1 TO P9
    0x620647b95ed0 ---------G   03330  H$(S)=MID$(L$,Q(S),1)
    0x620647b96000 ---------G   03340  NEXT S
    0x620647b96070 ---------G   03350  RETURN
    0x620647b960f0 ---------H   03360  REM
    0x620647b96190 ---------H   03370  REM     COPY H$ INTO G$
    0x620647b96220 ---------H   03380  REM
    0x620647b96530 ---------H   03390  FOR S=1 TO P9
    0x620647b96930 ---------H   03400  G$(S)=H$(S)
    0x620647b96a60 ---------H   03410  NEXT S
    0x620647b96ad0 ---------H   03420  RETURN
    0x620647b96b80 ---------A   03430  REM     PROGRAM DATA FOR COLOR NAMES
    0x620647b97360 ---------A   03440  DATA BLACK,WHITE,RED,GREEN,ORANGE,YELLOW,PURPLE,TAN
    0x620647b973f0 ---------A   03450  REM   ...WE'RE SORRY BUT IT'S TIME TO GO...
    0x620647b97460 ---------A   03460  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02220 - 10000    7790 

 */



/*
 *  Symbol Table Listing for 'basic/mastrmnd.bas'
 *
    A                        Integer     
    A$              Array    String          {0,-1} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    B1                       Integer     
    C                        Integer     
    C9                       Integer     
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
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
    G$              Array    String          {0,-1} 
    H                        Integer     
    H$              Array    String          {0,-1} 
    HEX$            Function String          args=1, int    
    I               Array    Integer         {0,-1} 
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    L$                       String      
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    OCT$            Function String          args=1, float  
    P                        Integer     
    P9                       Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q               Array    Integer         {0,-1} 
    R                        Integer     
    R9                       Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Integer         {0,9} {0,1} 
    S$              Array    String          {0,9} 
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
    W                        Integer     
    W1                       Integer     
    X                        Integer     
    X$                       String      
    Y                        Integer     
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/mastrmnd.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x620647b706d0 ---------A   01000  PRINT TAB(30);"MASTERMIND"
    0x620647b70670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x620647b612b0 ---------A   01020  PRINT
    0x620647b709e0 ---------A   01030  PRINT
    0x620647b707f0 ---------A   01040  PRINT
    0x620647b71b80 ---------A   01050  REM
    0x620647b72f30 ---------A   01060  REM     MASTERMIND II
    0x620647b72ff0 ---------A   01070  REM     STEVE NORTH
    0x620647b730b0 ---------A   01080  REM     CREATIVE COMPUTING
    0x620647b71040 ---------A   01090  REM     PO BOX 789-M MORRISTOWN NEW JERSEY 07960
    0x620647b70e40 ---------A   01100  REM
    0x620647b72e70 ---------A   01110  REM
    0x620647b714e0 ---------A T 01120  INPUT "NUMBER OF COLORS";C9
    0x620647b731a0 ---------A   01130  IF C9>8 THEN PRINT "NO MORE THAN 8, PLEASE!"
    0x620647b73200 ---------A   01140  GOTO 1120
    0x620647b7c850 ---------A   01150  REM     GET A COMBINATION
    0x620647b7e7b0 ---------A   01160  REM     UNPACK X$ INTO G$(1-P9)
    0x620647b80590 ---------A   01170  REM     NOW WE CONVERT Q(1-P9) INTO A$(1-P9) [ACTUAL GUESS]
    0x620647b806d0 ---------A   01180  REM     AND GET NUMBER OF BLACKS AND WHITES
    0x620647b80b30 ---------A   01190  REM     TELL HUMAN RESULTS
    0x620647b81250 ---------A   01200  REM     SAVE ALL THIS STUFF FOR BOARD PRINTOUT LATER
    0x620647b83580 ---------A   01210  REM
    0x620647b83630 ---------A   01220  REM     NOW COMPUTER GUESSES
    0x620647b836c0 ---------A   01230  REM
    0x620647b84520 ---------A   01240  REM     FIND A GUESS
    0x620647b86500 ---------A   01250  REM     NOW WE CONVERT GUESS #G INTO G$
    0x620647b8a3f0 ---------A   01260  REM
    0x620647b8a4a0 ---------A   01270  REM     BOARD PRINTOUT ROUTINE
    0x620647b8a530 ---------A   01280  REM
    0x620647b8bca0 ---------A   01290  REM
    0x620647b8bd40 ---------A   01300  REM     QUIT ROUTINE
    0x620647b8bdd0 ---------A   01310  REM
    0x620647b946d0 ---------A   01320  REM
    0x620647b94790 ---------A   01330  REM     CONVERT Q(1-P9) INTO G$(1-P9)
    0x620647b94820 ---------A   01340  REM
    0x620647b96b80 ---------A   01350  REM     PROGRAM DATA FOR COLOR NAMES
    0x620647b97360 ---------A   01360  DATA BLACK,WHITE,RED,GREEN,ORANGE,YELLOW,PURPLE,TAN
    0x620647b973f0 ---------A   01370  REM   ...WE'RE SORRY BUT IT'S TIME TO GO...
    0x620647b97460 ---------A   01380  END
    0x620647b8c970 ---------A   01390  REM
    0x620647b8ca30 ---------A   01400  REM     INITIALIZE Q(1-P9) TO ZEROS
    0x620647b8cac0 ---------A   01410  REM
    0x620647b8cdd0 ----------   01420  FOR S=1 TO P9
    0x620647b8d0d0 ----------   01430  Q(S)=0
    0x620647b8d200 ----------   01440  NEXT S
    0x620647ba6ec0 ----------   01450  GOTO 01460
    0x620647ba8ec0 ---------- T 01460  RETURN
    0x620647b8d2f0 ---------A   01470  REM
    0x620647b8d3a0 ---------A   01480  REM     INCREMENT Q(1-P9)
    0x620647b8d430 ---------A   01490  REM
    0x620647b8d7a0 ----------   01500  IF Q(1)>0 THEN 1560
    0x620647b8d850 ---------A   01510  REM  IF ZERO, THIS IS OUR FIRST INCREMENT
    0x620647b8db60 ----------   01520  FOR S=1 TO P9
    0x620647b8de60 ----------   01530  Q(S)=1
    0x620647b8df90 ----------   01540  NEXT S
    0x620647ba70f0 ----------   01550  GOTO 01620
    0x620647b8e220 ---------- T 01560  Q=1
    0x620647b8e720 ---------- T 01570  Q(Q)=Q(Q)+1
    0x620647b8eab0 ----------   01580  IF Q(Q)<=C9 THEN RETURN
    0x620647b8edb0 ----------   01590  Q(Q)=1
    0x620647b8f0e0 ----------   01600  Q=Q+1
    0x620647b8f150 ----------   01610  GOTO 1570
    0x620647ba8f40 ---------- T 01620  RETURN
    0x620647b8f1c0 ---------A   01630  REM
    0x620647b8f280 ---------A   01640  REM     CONVERT Q(1-P9) TO A$(1-P9)
    0x620647b8f310 ---------A   01650  REM
    0x620647b8f630 ----------   01660  FOR S=1 TO P9
    0x620647b8fcb0 ----------   01670  A$(S)=MID$(L$,Q(S),1)
    0x620647b8fde0 ----------   01680  NEXT S
    0x620647ba70a0 ----------   01690  GOTO 01700
    0x620647ba8fc0 ---------- T 01700  RETURN
    0x620647b8fed0 ---------A   01710  REM
    0x620647b8ffa0 ---------A   01720  REM     GET NUMBER OF BLACKS (B) AND WHITES (W)
    0x620647b90060 ---------A   01730  REM     MASHES G$ AND A$ IN THE PROCESS
    0x620647b900f0 ---------A   01740  REM
    0x620647b90300 ----------   01750  B=0
    0x620647b904f0 ----------   01760  W=0
    0x620647b907c0 ----------   01770  F=0
    0x620647b90ac0 ----------   01780  FOR S=1 TO P9
    0x620647b90f00 ----------   01790  IF G$(S)<>A$(S) THEN 1850
    0x620647b91240 ----------   01800  B=B+1
    0x620647b91630 ----------   01810  G$(S)=CHR$(F)
    0x620647b91b20 ----------   01820  A$(S)=CHR$(F+1)
    0x620647b91e50 ----------   01830  F=F+2
    0x620647b91ec0 ----------   01840  GOTO 1940
    0x620647b92280 ---------- T 01850  FOR T=1 TO P9
    0x620647b926d0 ----------   01860  IF G$(S)<>A$(T) THEN 1930
    0x620647b92b40 ----------   01870  IF G$(T)=A$(T) THEN 1930
    0x620647b92e60 ----------   01880  W=W+1
    0x620647b93230 ----------   01890  A$(T)=CHR$(F)
    0x620647b93700 ----------   01900  G$(S)=CHR$(F+1)
    0x620647b93a10 ----------   01910  F=F+2
    0x620647b93a80 ----------   01920  GOTO 1940
    0x620647b93bb0 ---------- T 01930  NEXT T
    0x620647b93d00 ---------- T 01940  NEXT S
    0x620647ba7050 ----------   01950  GOTO 01960
    0x620647ba9040 ---------- T 01960  RETURN
    0x620647b93df0 ---------A   01970  REM
    0x620647b93e90 ---------A   01980  REM     PRINT SCORE
    0x620647b93f20 ---------A   01990  REM
    0x620647b940a0 ----------   02000  PRINT "SCORE:"
    0x620647b94310 ----------   02010  PRINT "     COMPUTER ";C
    0x620647b94570 ----------   02020  PRINT "     HUMAN    ";H
    0x620647b945f0 ----------   02030  PRINT
    0x620647ba7000 ----------   02040  GOTO 02050
    0x620647ba90c0 ---------- T 02050  RETURN
    0x620647b953e0 ---------A   02060  REM
    0x620647b954a0 ---------A   02070  REM     CONVERT Q(1-P9) TO H$(1-P9)
    0x620647b95530 ---------A   02080  REM
    0x620647b95850 ----------   02090  FOR S=1 TO P9
    0x620647b95ed0 ----------   02100  H$(S)=MID$(L$,Q(S),1)
    0x620647b96000 ----------   02110  NEXT S
    0x620647ba6fb0 ----------   02120  GOTO 02130
    0x620647ba9140 ---------- T 02130  RETURN
    0x620647b960f0 ---------A   02140  REM
    0x620647b96190 ---------A   02150  REM     COPY H$ INTO G$
    0x620647b96220 ---------A   02160  REM
    0x620647b96530 ----------   02170  FOR S=1 TO P9
    0x620647b96930 ----------   02180  G$(S)=H$(S)
    0x620647b96a60 ----------   02190  NEXT S
    0x620647ba6f60 ----------   02200  GOTO 02210
    0x620647ba91c0 ---------- T 02210  RETURN
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
char* data_01360s[]={"BLACK","WHITE","RED","GREEN","ORANGE","YELLOW","PURPLE","TAN"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1360,  8,data_01360s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int;                                     // Basic: A 
char*  A_str_arr[0];                              // Basic: A$ 
int    B_int;                                     // Basic: B 
int    B1_int;                                    // Basic: B1 
int    C_int;                                     // Basic: C 
int    C9_int;                                    // Basic: C9 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
char*  G_str_arr[0];                              // Basic: G$ 
int    H_int;                                     // Basic: H 
char*  H_str_arr[0];                              // Basic: H$ 
int    I_int_arr[0];                              // Basic: I 
char*  L_str;                                     // Basic: L$ 
int    M_int;                                     // Basic: M 
int    P_int;                                     // Basic: P 
int    P9_int;                                    // Basic: P9 
int    Q_int_arr[0];                              // Basic: Q 
int    R_int;                                     // Basic: R 
int    R9_int;                                    // Basic: R9 
int    S_int_arr[10][2];                          // Basic: S 
char*  S_str_arr[10];                             // Basic: S$ 
int    T_int;                                     // Basic: T 
int    W_int;                                     // Basic: W 
int    W1_int;                                    // Basic: W1 
int    X_int;                                     // Basic: X 
char*  X_str;                                     // Basic: X$ 
int    Y_int;                                     // Basic: Y 
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
    // 01000 PRINT TAB(30);"MASTERMIND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,30);strcat(buf,"MASTERMIND");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 REM
    // 01060 REM     MASTERMIND II
    // 01070 REM     STEVE NORTH
    // 01080 REM     CREATIVE COMPUTING
    // 01090 REM     PO BOX 789-M MORRISTOWN NEW JERSEY 07960
    // 01100 REM
    // 01110 REM

  Lbl_01120:
    // 01120 INPUT "NUMBER OF COLORS";C9
    // Start of Basic INPUT statement 01120
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"NUMBER OF COLORS");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&C9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01120
    // 01130 IF C9>8 THEN PRINT "NO MORE THAN 8, PLEASE!"
    if(C9_int>8) {
    }
    // 01140 GOTO 1120
    goto Lbl_01120;
    // 01150 REM     GET A COMBINATION
    // 01160 REM     UNPACK X$ INTO G$(1-P9)
    // 01170 REM     NOW WE CONVERT Q(1-P9) INTO A$(1-P9) [ACTUAL GUESS]
    // 01180 REM     AND GET NUMBER OF BLACKS AND WHITES
    // 01190 REM     TELL HUMAN RESULTS
    // 01200 REM     SAVE ALL THIS STUFF FOR BOARD PRINTOUT LATER
    // 01210 REM
    // 01220 REM     NOW COMPUTER GUESSES
    // 01230 REM
    // 01240 REM     FIND A GUESS
    // 01250 REM     NOW WE CONVERT GUESS #G INTO G$
    // 01260 REM
    // 01270 REM     BOARD PRINTOUT ROUTINE
    // 01280 REM
    // 01290 REM
    // 01300 REM     QUIT ROUTINE
    // 01310 REM
    // 01320 REM
    // 01330 REM     CONVERT Q(1-P9) INTO G$(1-P9)
    // 01340 REM
    // 01350 REM     PROGRAM DATA FOR COLOR NAMES
    // 01360 DATA BLACK,WHITE,RED,GREEN,ORANGE,YELLOW,PURPLE,TAN
    // 01370 REM   ...WE'RE SORRY BUT IT'S TIME TO GO...
    // 01380 END
    // 01390 REM
    // 01400 REM     INITIALIZE Q(1-P9) TO ZEROS
    // 01410 REM
    // 01470 REM
    // 01480 REM     INCREMENT Q(1-P9)
    // 01490 REM
    // 01510 REM  IF ZERO, THIS IS OUR FIRST INCREMENT
    // 01630 REM
    // 01640 REM     CONVERT Q(1-P9) TO A$(1-P9)
    // 01650 REM
    // 01710 REM
    // 01720 REM     GET NUMBER OF BLACKS (B) AND WHITES (W)
    // 01730 REM     MASHES G$ AND A$ IN THE PROCESS
    // 01740 REM
    // 01970 REM
    // 01980 REM     PRINT SCORE
    // 01990 REM
    // 02060 REM
    // 02070 REM     CONVERT Q(1-P9) TO H$(1-P9)
    // 02080 REM
    // 02140 REM
    // 02150 REM     COPY H$ INTO G$
    // 02160 REM
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
