/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/boxing.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5a69135e76d0 ---------A   00001  PRINT TAB(33);"BOXING"
    0x5a69135e7670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5a69135e77f0 ---------A   00003  PRINT:PRINT:PRINT
    0x5a69135e8040 ---------A   00004  PRINT "BOXING OLYMPIC STYLE (3 ROUNDS -- 2 OUT OF 3 WINS)"
    0x5a69135e9f30 ---------A   00005  J=0
    0x5a69135e9ff0 ---------A   00006  L=0
    0x5a69135ea100 ---------A   00008  PRINT
    0x5a69135e8620 ---------A   00010  PRINT "WHAT IS YOUR OPPONENT'S NAME";
    0x5a69135e8820 ---------A   00020  INPUT J$
    0x5a69135ef920 ---------A   00030  PRINT "INPUT YOUR MAN'S NAME";
    0x5a69135efb00 ---------A   00040  INPUT L$
    0x5a69135efc80 ---------A   00050  PRINT "DIFFERENT PUNCHES ARE: (1) FULL SWING; (2) HOOK; (3) UPPERCUT; (4) JAB."
    0x5a69135efda0 ---------A   00060  PRINT "WHAT IS YOUR MANS BEST";
    0x5a69135eff60 ---------A   00064  INPUT B
    0x5a69135f0080 ---------A   00070  PRINT "WHAT IS HIS VULNERABILITY";
    0x5a69135f02a0 ---------A   00080  INPUT D
    0x5a69135e9e70 ---------A T 00090  B1=INT(4*RND(1)+1)
    0x5a69135ea0b0 ---------A   00100  D1=INT(4*RND(1)+1)
    0x5a69135f11d0 ---------A   00110  IF B1=D1 THEN 90
    0x5a69135f1670 ---------A   00120  PRINT J$;"'S ADVANTAGE IS";B1;"AND VULNERABILITY IS SECRET.":PRINT
    0x5a69135f1a10 ---------A   00130  FOR R=1 TO 3
    0x5a69135f1c70 ---------A   00140  IF J>= 2 THEN 1040
    0x5a69135f1ed0 ---------A   00150  IF L>=2 THEN 1060
    0x5a69135f21b0 ---------A   00160  X=0
    0x5a69135f2460 ---------A   00170  Y=0
    0x5a69135f27b0 ---------A   00180  PRINT "ROUND";R;"BEGINS..."
    0x5a69135f2b50 ---------A   00185  FOR R1= 1 TO 7
    0x5a69135f31f0 ---------A   00190  I=INT(10*RND(1)+1)
    0x5a69135f3450 ---------A   00200  IF I>5 THEN 600
    0x5a69135f36d0 ---------A   00210  PRINT L$;"'S PUNCH";
    0x5a69135f38f0 ---------A   00220  INPUT P
    0x5a69135f3b70 ---------A   00221  IF P=B THEN 225
    0x5a69135f3bf0 ---------A   00222  GOTO 230
    0x5a69135f4130 ---------A T 00225  X=X+2
    0x5a69135f4380 ---------A T 00230  IF P=1 THEN 340
    0x5a69135f45e0 ---------A   00240  IF P=2 THEN 450
    0x5a69135f4850 ---------A   00250  IF P=3 THEN 520
    0x5a69135f4cd0 ---------A   00270  PRINT L$;" JABS AT ";J$"'S HEAD ";
    0x5a69135f4f30 ---------A   00271  IF D1=4 THEN 290
    0x5a69135f55d0 ---------A   00275  C=INT(8*RND(1)+1)
    0x5a69135f5820 ---------A   00280  IF C<4 THEN 310
    0x5a69135f5b60 ---------A T 00290  X=X+3
    0x5a69135f5be0 ---------A T 00300  GOTO 950
    0x5a69135f5d30 ---------A T 00310  PRINT "IT'S BLOCKED."
    0x5a69135f5dc0 ---------A   00330  GOTO 950
    0x5a69135f6030 ---------A T 00340  PRINT L$ " SWINGS AND ";
    0x5a69135f6290 ---------A   00341  IF D1=4 THEN 410
    0x5a69135f6930 ---------A   00345  X3=INT(30*RND(1)+1)
    0x5a69135f6b80 ---------A   00350  IF X3<10 THEN 410
    0x5a69135f6d00 ---------A   00360  PRINT "HE MISSES ";
    0x5a69135f6d80 ---------A   00370  PRINT
    0x5a69135f6fe0 ---------A   00375  IF X=1 THEN 950
    0x5a69135f7060 ---------A   00380  PRINT
    0x5a69135f70e0 ---------A   00390  PRINT
    0x5a69135f7170 ---------A   00400  GOTO 300
    0x5a69135f72c0 ---------A T 00410  PRINT "HE CONNECTS!"
    0x5a69135f7520 ---------A   00420  IF X>35 THEN 980
    0x5a69135f7860 ---------A   00425  X=X+15
    0x5a69135f78e0 ---------A   00440  GOTO 300
    0x5a69135f7b50 ---------A T 00450  PRINT L$;" GIVES THE HOOK... ";
    0x5a69135f7db0 ---------A   00455  IF D1=2 THEN 480
    0x5a69135f8450 ---------A   00460  H1=INT(2*RND(1)+1)
    0x5a69135f86a0 ---------A   00470  IF H1=1 THEN 500
    0x5a69135f8800 ---------A   00475  PRINT "CONNECTS..."
    0x5a69135f8b40 ---------A T 00480  X=X+7
    0x5a69135f8fe0 ---------A   00490  GOTO 300
    0x5a69135f9140 ---------A T 00500  PRINT "BUT IT'S BLOCKED!!!!!!!!!!!!!"
    0x5a69135f91d0 ---------A   00510  GOTO 300
    0x5a69135f9440 ---------A T 00520  PRINT L$ " TRIES AN UPPERCUT ";
    0x5a69135f96b0 ---------A   00530  IF D1=3 THEN 570
    0x5a69135f9d50 ---------A   00540  D5=INT(100*RND(1)+1)
    0x5a69135f9fc0 ---------A   00550  IF D5<51 THEN 570
    0x5a69135fa130 ---------A   00560  PRINT "AND IT'S BLOCKED (LUCKY BLOCK!)"
    0x5a69135fa1c0 ---------A   00565  GOTO 300
    0x5a69135fa310 ---------A T 00570  PRINT "AND HE CONNECTS!"
    0x5a69135fa650 ---------A   00580  X=X+4
    0x5a69135fa6c0 ---------A   00590  GOTO 300
    0x5a69135fad50 ---------A T 00600  J7=INT(4*RND(1)+1)
    0x5a69135fafc0 ---------A   00601  IF J7 =B1 THEN 605
    0x5a69135fb040 ---------A   00602  GOTO 610
    0x5a69135fb370 ---------A T 00605  Y=Y+2
    0x5a69135fb5c0 ---------A T 00610  IF J7=1 THEN 720
    0x5a69135fb820 ---------A   00620  IF J7=2 THEN 810
    0x5a69135fba90 ---------A   00630  IF J7 =3 THEN 860
    0x5a69135fbd10 ---------A   00640  PRINT J$;" JABS AND ";
    0x5a69135fbf70 ---------A   00645  IF D=4 THEN 700
    0x5a69135fc610 ---------A   00650  Z4=INT(7*RND(1)+1)
    0x5a69135fc870 ---------A   00655  IF Z4>4 THEN 690
    0x5a69135fc9d0 ---------A   00660  PRINT "IT'S BLOCKED!"
    0x5a69135fca60 ---------A   00670  GOTO 300
    0x5a69135fcbb0 ---------A T 00690  PRINT " BLOOD SPILLS !!!"
    0x5a69135fcef0 ---------A T 00700  Y=Y+5
    0x5a69135fcf70 ---------A   00710  GOTO 300
    0x5a69135fd1f0 ---------A T 00720  PRINT J$" TAKES A FULL SWING AND";
    0x5a69135fd450 ---------A   00730  IF D=1 THEN 770
    0x5a69135fdaf0 ---------A   00740  R6=INT(60*RND(1)+1)
    0x5a69135fdd50 ---------A   00745  IF R6 <30 THEN 770
    0x5a69135fdeb0 ---------A   00750  PRINT " IT'S BLOCKED!"
    0x5a69135fdf50 ---------A   00760  GOTO 300
    0x5a69135fe0c0 ---------A T 00770  PRINT " POW!!!!! HE HITS HIM RIGHT IN THE FACE!"
    0x5a69135fe320 ---------A   00780  IF Y>35 THEN 1010
    0x5a69135fe660 ---------A   00790  Y=Y+15
    0x5a69135fe6f0 ---------A   00800  GOTO 300
    0x5a69135feb40 ---------A T 00810  PRINT J$;" GETS ";L$;" IN THE JAW (OUCH!)"
    0x5a69135fee90 ---------A   00820  Y=Y+7
    0x5a69135fefe0 ---------A   00830  PRINT "....AND AGAIN!"
    0x5a69135ff320 ---------A   00835  Y=Y+5
    0x5a69135ff570 ---------A   00840  IF Y>35 THEN 1010
    0x5a69135ff610 ---------A   00850  PRINT
    0x5a69135ff890 ---------A T 00860  PRINT L$;" IS ATTACKED BY AN UPPERCUT (OH,OH)..."
    0x5a69135ffb00 ---------A   00865  IF D=3 THEN 890
    0x5a69136001a0 ---------A   00870  Q4=INT(200*RND(1)+1)
    0x5a6913600400 ---------A   00880  IF Q4>75 THEN 920
    0x5a6913600760 ---------A T 00890  PRINT "AND ";J$;" CONNECTS..."
    0x5a6913600aa0 ---------A   00900  Y=Y+8
    0x5a6913600b30 ---------A   00910  GOTO 300
    0x5a6913600e80 ---------A T 00920  PRINT " BLOCKS AND HITS ";J$;" WITH A HOOK."
    0x5a69136011c0 ---------A   00930  X=X+5
    0x5a6913601230 ---------A   00940  GOTO 300
    0x5a6913601360 ---------A T 00950  NEXT R1
    0x5a6913601600 ---------A   00951  IF X>Y THEN 955
    0x5a69136019c0 ---------A   00952  PRINT:PRINT J$" WINS ROUND" R
    0x5a6913601d00 ---------A   00953  J=J+1
    0x5a6913601d80 ---------A   00954  GOTO 960
    0x5a6913602130 ---------A T 00955  PRINT:PRINT L$" WINS ROUND"R
    0x5a6913602470 ---------A   00956  L=L+1
    0x5a69136025a0 ---------A T 00960  NEXT R
    0x5a6913602810 ---------A   00961  IF J>= 2 THEN 1040
    0x5a6913602aa0 ---------A   00962  IF L>=2 THEN 1060
    0x5a6913603740 ---------A T 00980  PRINT J$ " IS KNOCKED COLD AND " L$" IS THE WINNER AND CHAMP!";
    0x5a69136037f0 ---------A T 01000  GOTO 1080
    0x5a6913603c70 ---------A T 01010  PRINT L$ " IS KNOCKED COLD AND " J$" IS THE WINNER AND CHAMP!";
    0x5a6913603d10 ---------A   01030  GOTO 1000
    0x5a6913604160 ---------A T 01040  PRINT J$ " WINS (NICE GOING," J$;")."
    0x5a69136041f0 ---------A   01050  GOTO 1000
    0x5a6913604440 ---------A T 01060  PRINT L$ " AMAZINGLY WINS!!"
    0x5a69136044c0 ---------A   01070  GOTO 1000
    0x5a6913604530 ---------A T 01080  PRINT
    0x5a69136045d0 ---------A   01085  PRINT
    0x5a6913604750 ---------A   01090  PRINT "AND NOW GOODBYE FROM THE OLYMPIC ARENA."
    0x5a69136047d0 ---------A   01100  PRINT
    0x5a6913604830 ---------A   01110  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00090      00110T
     00225      00221T
     00230      00222T
     00290      00271T
     00300      00400T, 00440T, 00490T, 00510T, 00565T, 00590T, 00670T, 00710T, 
                00760T, 00800T, 00910T, 00940T
     00310      00280T
     00340      00230T
     00410      00341T, 00350T
     00450      00240T
     00480      00455T
     00500      00470T
     00520      00250T
     00570      00530T, 00550T
     00600      00200T
     00605      00601T
     00610      00602T
     00690      00655T
     00700      00645T
     00720      00610T
     00770      00730T, 00745T
     00810      00620T
     00860      00630T
     00890      00865T
     00920      00880T
     00950      00300T, 00330T, 00375T
     00955      00951T
     00960      00954T
     00980      00420T
     01000      01030T, 01050T, 01070T
     01010      00780T, 00840T
     01040      00140T, 00961T
     01060      00150T, 00962T
     01080      01000T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5a69135e76d0 (00001)   0x5a69135e76d0 (00001)   0x5a6913604830 (01110)   0x5a6913604830 (01110)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/boxing.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5a69135e76d0 ---------A   00001  PRINT TAB(33);"BOXING"
    0x5a69135e7670 ---------A   00002  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5a69135d82b0 ----------   00003  PRINT
    0x5a69135e79e0 ----------        a PRINT
    0x5a69135e77f0 ---------A        b PRINT
    0x5a69135e8040 ---------A   00004  PRINT "BOXING OLYMPIC STYLE (3 ROUNDS -- 2 OUT OF 3 WINS)"
    0x5a69135e9f30 ---------A   00005  J=0
    0x5a69135e9ff0 ---------A   00006  L=0
    0x5a69135ea100 ---------A   00008  PRINT
    0x5a69135e8620 ---------A   00010  PRINT "WHAT IS YOUR OPPONENT'S NAME";
    0x5a69135e8820 ---------A   00020  INPUT J$
    0x5a69135ef920 ---------A   00030  PRINT "INPUT YOUR MAN'S NAME";
    0x5a69135efb00 ---------A   00040  INPUT L$
    0x5a69135efc80 ---------A   00050  PRINT "DIFFERENT PUNCHES ARE: (1) FULL SWING; (2) HOOK; (3) UPPERCUT; (4) JAB."
    0x5a69135efda0 ---------A   00060  PRINT "WHAT IS YOUR MANS BEST";
    0x5a69135eff60 ---------A   00064  INPUT B
    0x5a69135f0080 ---------A   00070  PRINT "WHAT IS HIS VULNERABILITY";
    0x5a69135f02a0 ---------A   00080  INPUT D
    0x5a69135e9e70 ---------A T 00090  B1=INT(4*RND(1)+1)
    0x5a69135ea0b0 ---------A   00100  D1=INT(4*RND(1)+1)
    0x5a69135f11d0 ---------A   00110  IF B1=D1 THEN 90
    0x5a69135f15f0 ----------   00120  PRINT J$;"'S ADVANTAGE IS";B1;"AND VULNERABILITY IS SECRET."
    0x5a69135f1670 ---------A        a PRINT
    0x5a69135f1a10 ---------A   00130  FOR R=1 TO 3
    0x5a69135f1c70 ---------A   00140  IF J>= 2 THEN 1040
    0x5a69135f1ed0 ---------A   00150  IF L>=2 THEN 1060
    0x5a69135f21b0 ---------A   00160  X=0
    0x5a69135f2460 ---------A   00170  Y=0
    0x5a69135f27b0 ---------A   00180  PRINT "ROUND";R;"BEGINS..."
    0x5a69135f2b50 ---------A   00185  FOR R1= 1 TO 7
    0x5a69135f31f0 ---------A   00190  I=INT(10*RND(1)+1)
    0x5a69135f3450 ---------A   00200  IF I>5 THEN 600
    0x5a69135f36d0 ---------A   00210  PRINT L$;"'S PUNCH";
    0x5a69135f38f0 ---------A   00220  INPUT P
    0x5a69135f3b70 ---------A   00221  IF P=B THEN 225
    0x5a69135f3bf0 ---------A   00222  GOTO 230
    0x5a69135f4130 ---------A T 00225  X=X+2
    0x5a69135f4380 ---------A T 00230  IF P=1 THEN 340
    0x5a69135f45e0 ---------A   00240  IF P=2 THEN 450
    0x5a69135f4850 ---------A   00250  IF P=3 THEN 520
    0x5a69135f4cd0 ---------A   00270  PRINT L$;" JABS AT ";J$"'S HEAD ";
    0x5a69135f4f30 ---------A   00271  IF D1=4 THEN 290
    0x5a69135f55d0 ---------A   00275  C=INT(8*RND(1)+1)
    0x5a69135f5820 ---------A   00280  IF C<4 THEN 310
    0x5a69135f5b60 ---------A T 00290  X=X+3
    0x5a69135f5be0 ---------A T 00300  GOTO 950
    0x5a69135f5d30 ---------A T 00310  PRINT "IT'S BLOCKED."
    0x5a69135f5dc0 ---------A   00330  GOTO 950
    0x5a69135f6030 ---------A T 00340  PRINT L$ " SWINGS AND ";
    0x5a69135f6290 ---------A   00341  IF D1=4 THEN 410
    0x5a69135f6930 ---------A   00345  X3=INT(30*RND(1)+1)
    0x5a69135f6b80 ---------A   00350  IF X3<10 THEN 410
    0x5a69135f6d00 ---------A   00360  PRINT "HE MISSES ";
    0x5a69135f6d80 ---------A   00370  PRINT
    0x5a69135f6fe0 ---------A   00375  IF X=1 THEN 950
    0x5a69135f7060 ---------A   00380  PRINT
    0x5a69135f70e0 ---------A   00390  PRINT
    0x5a69135f7170 ---------A   00400  GOTO 300
    0x5a69135f72c0 ---------A T 00410  PRINT "HE CONNECTS!"
    0x5a69135f7520 ---------A   00420  IF X>35 THEN 980
    0x5a69135f7860 ---------A   00425  X=X+15
    0x5a69135f78e0 ---------A   00440  GOTO 300
    0x5a69135f7b50 ---------A T 00450  PRINT L$;" GIVES THE HOOK... ";
    0x5a69135f7db0 ---------A   00455  IF D1=2 THEN 480
    0x5a69135f8450 ---------A   00460  H1=INT(2*RND(1)+1)
    0x5a69135f86a0 ---------A   00470  IF H1=1 THEN 500
    0x5a69135f8800 ---------A   00475  PRINT "CONNECTS..."
    0x5a69135f8b40 ---------A T 00480  X=X+7
    0x5a69135f8fe0 ---------A   00490  GOTO 300
    0x5a69135f9140 ---------A T 00500  PRINT "BUT IT'S BLOCKED!!!!!!!!!!!!!"
    0x5a69135f91d0 ---------A   00510  GOTO 300
    0x5a69135f9440 ---------A T 00520  PRINT L$ " TRIES AN UPPERCUT ";
    0x5a69135f96b0 ---------A   00530  IF D1=3 THEN 570
    0x5a69135f9d50 ---------A   00540  D5=INT(100*RND(1)+1)
    0x5a69135f9fc0 ---------A   00550  IF D5<51 THEN 570
    0x5a69135fa130 ---------A   00560  PRINT "AND IT'S BLOCKED (LUCKY BLOCK!)"
    0x5a69135fa1c0 ---------A   00565  GOTO 300
    0x5a69135fa310 ---------A T 00570  PRINT "AND HE CONNECTS!"
    0x5a69135fa650 ---------A   00580  X=X+4
    0x5a69135fa6c0 ---------A   00590  GOTO 300
    0x5a69135fad50 ---------A T 00600  J7=INT(4*RND(1)+1)
    0x5a69135fafc0 ---------A   00601  IF J7 =B1 THEN 605
    0x5a69135fb040 ---------A   00602  GOTO 610
    0x5a69135fb370 ---------A T 00605  Y=Y+2
    0x5a69135fb5c0 ---------A T 00610  IF J7=1 THEN 720
    0x5a69135fb820 ---------A   00620  IF J7=2 THEN 810
    0x5a69135fba90 ---------A   00630  IF J7 =3 THEN 860
    0x5a69135fbd10 ---------A   00640  PRINT J$;" JABS AND ";
    0x5a69135fbf70 ---------A   00645  IF D=4 THEN 700
    0x5a69135fc610 ---------A   00650  Z4=INT(7*RND(1)+1)
    0x5a69135fc870 ---------A   00655  IF Z4>4 THEN 690
    0x5a69135fc9d0 ---------A   00660  PRINT "IT'S BLOCKED!"
    0x5a69135fca60 ---------A   00670  GOTO 300
    0x5a69135fcbb0 ---------A T 00690  PRINT " BLOOD SPILLS !!!"
    0x5a69135fcef0 ---------A T 00700  Y=Y+5
    0x5a69135fcf70 ---------A   00710  GOTO 300
    0x5a69135fd1f0 ---------A T 00720  PRINT J$" TAKES A FULL SWING AND";
    0x5a69135fd450 ---------A   00730  IF D=1 THEN 770
    0x5a69135fdaf0 ---------A   00740  R6=INT(60*RND(1)+1)
    0x5a69135fdd50 ---------A   00745  IF R6 <30 THEN 770
    0x5a69135fdeb0 ---------A   00750  PRINT " IT'S BLOCKED!"
    0x5a69135fdf50 ---------A   00760  GOTO 300
    0x5a69135fe0c0 ---------A T 00770  PRINT " POW!!!!! HE HITS HIM RIGHT IN THE FACE!"
    0x5a69135fe320 ---------A   00780  IF Y>35 THEN 1010
    0x5a69135fe660 ---------A   00790  Y=Y+15
    0x5a69135fe6f0 ---------A   00800  GOTO 300
    0x5a69135feb40 ---------A T 00810  PRINT J$;" GETS ";L$;" IN THE JAW (OUCH!)"
    0x5a69135fee90 ---------A   00820  Y=Y+7
    0x5a69135fefe0 ---------A   00830  PRINT "....AND AGAIN!"
    0x5a69135ff320 ---------A   00835  Y=Y+5
    0x5a69135ff570 ---------A   00840  IF Y>35 THEN 1010
    0x5a69135ff610 ---------A   00850  PRINT
    0x5a69135ff890 ---------A T 00860  PRINT L$;" IS ATTACKED BY AN UPPERCUT (OH,OH)..."
    0x5a69135ffb00 ---------A   00865  IF D=3 THEN 890
    0x5a69136001a0 ---------A   00870  Q4=INT(200*RND(1)+1)
    0x5a6913600400 ---------A   00880  IF Q4>75 THEN 920
    0x5a6913600760 ---------A T 00890  PRINT "AND ";J$;" CONNECTS..."
    0x5a6913600aa0 ---------A   00900  Y=Y+8
    0x5a6913600b30 ---------A   00910  GOTO 300
    0x5a6913600e80 ---------A T 00920  PRINT " BLOCKS AND HITS ";J$;" WITH A HOOK."
    0x5a69136011c0 ---------A   00930  X=X+5
    0x5a6913601230 ---------A   00940  GOTO 300
    0x5a6913601360 ---------A T 00950  NEXT R1
    0x5a6913601600 ---------A   00951  IF X>Y THEN 955
    0x5a6913601660 ----------   00952  PRINT
    0x5a69136019c0 ---------A        a PRINT J$" WINS ROUND" R
    0x5a6913601d00 ---------A   00953  J=J+1
    0x5a6913601d80 ---------A   00954  GOTO 960
    0x5a6913601dd0 ---------- T 00955  PRINT
    0x5a6913602130 ---------A T      a PRINT L$" WINS ROUND"R
    0x5a6913602470 ---------A   00956  L=L+1
    0x5a69136025a0 ---------A T 00960  NEXT R
    0x5a6913602810 ---------A   00961  IF J>= 2 THEN 1040
    0x5a6913602aa0 ---------A   00962  IF L>=2 THEN 1060
    0x5a6913603740 ---------A T 00980  PRINT J$ " IS KNOCKED COLD AND " L$" IS THE WINNER AND CHAMP!";
    0x5a69136037f0 ---------A T 01000  GOTO 1080
    0x5a6913603c70 ---------A T 01010  PRINT L$ " IS KNOCKED COLD AND " J$" IS THE WINNER AND CHAMP!";
    0x5a6913603d10 ---------A   01030  GOTO 1000
    0x5a6913604160 ---------A T 01040  PRINT J$ " WINS (NICE GOING," J$;")."
    0x5a69136041f0 ---------A   01050  GOTO 1000
    0x5a6913604440 ---------A T 01060  PRINT L$ " AMAZINGLY WINS!!"
    0x5a69136044c0 ---------A   01070  GOTO 1000
    0x5a6913604530 ---------A T 01080  PRINT
    0x5a69136045d0 ---------A   01085  PRINT
    0x5a6913604750 ---------A   01090  PRINT "AND NOW GOODBYE FROM THE OLYMPIC ARENA."
    0x5a69136047d0 ---------A   01100  PRINT
    0x5a6913604830 ---------A   01110  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/boxing.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5a69135e76d0 ---------A T 01000  PRINT TAB(33);"BOXING"
    0x5a69135e7670 ---------A T 01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5a69135d82b0 ----------   01020  PRINT
    0x5a69135e79e0 ----------   01030  PRINT
    0x5a69135e77f0 ---------A T 01040  PRINT
    0x5a69135e8040 ---------A   01050  PRINT "BOXING OLYMPIC STYLE (3 ROUNDS -- 2 OUT OF 3 WINS)"
    0x5a69135e9f30 ---------A T 01060  J=0
    0x5a69135e9ff0 ---------A   01070  L=0
    0x5a69135ea100 ---------A T 01080  PRINT
    0x5a69135e8620 ---------A   01090  PRINT "WHAT IS YOUR OPPONENT'S NAME";
    0x5a69135e8820 ---------A   01100  INPUT J$
    0x5a69135ef920 ---------A   01110  PRINT "INPUT YOUR MAN'S NAME";
    0x5a69135efb00 ---------A   01120  INPUT L$
    0x5a69135efc80 ---------A   01130  PRINT "DIFFERENT PUNCHES ARE: (1) FULL SWING; (2) HOOK; (3) UPPERCUT; (4) JAB."
    0x5a69135efda0 ---------A   01140  PRINT "WHAT IS YOUR MANS BEST";
    0x5a69135eff60 ---------A   01150  INPUT B
    0x5a69135f0080 ---------A   01160  PRINT "WHAT IS HIS VULNERABILITY";
    0x5a69135f02a0 ---------A   01170  INPUT D
    0x5a69135e9e70 ---------A   01180  B1=INT(4*RND(1)+1)
    0x5a69135ea0b0 ---------A   01190  D1=INT(4*RND(1)+1)
    0x5a69135f11d0 ---------A   01200  IF B1=D1 THEN 1180
    0x5a69135f15f0 ----------   01210  PRINT J$;"'S ADVANTAGE IS";B1;"AND VULNERABILITY IS SECRET."
    0x5a69135f1670 ---------A   01220  PRINT
    0x5a69135f1a10 ---------A   01230  FOR R=1 TO 3
    0x5a69135f1c70 ---------A   01240  IF J>= 2 THEN 2380
    0x5a69135f1ed0 ---------A   01250  IF L>=2 THEN 2400
    0x5a69135f21b0 ---------A   01260  X=0
    0x5a69135f2460 ---------A   01270  Y=0
    0x5a69135f27b0 ---------A   01280  PRINT "ROUND";R;"BEGINS..."
    0x5a69135f2b50 ---------A   01290  FOR R1= 1 TO 7
    0x5a69135f31f0 ---------A   01300  I=INT(10*RND(1)+1)
    0x5a69135f3450 ---------A   01310  IF I>5 THEN 1800
    0x5a69135f36d0 ---------A   01320  PRINT L$;"'S PUNCH";
    0x5a69135f38f0 ---------A   01330  INPUT P
    0x5a69135f3b70 ---------A   01340  IF P=B THEN 1360
    0x5a69135f3bf0 ---------A   01350  GOTO 1370
    0x5a69135f4130 ---------A   01360  X=X+2
    0x5a69135f4380 ---------A   01370  IF P=1 THEN 1480
    0x5a69135f45e0 ---------A   01380  IF P=2 THEN 1620
    0x5a69135f4850 ---------A   01390  IF P=3 THEN 1710
    0x5a69135f4cd0 ---------A   01400  PRINT L$;" JABS AT ";J$"'S HEAD ";
    0x5a69135f4f30 ---------A   01410  IF D1=4 THEN 1440
    0x5a69135f55d0 ---------A   01420  C=INT(8*RND(1)+1)
    0x5a69135f5820 ---------A   01430  IF C<4 THEN 1460
    0x5a69135f5b60 ---------A   01440  X=X+3
    0x5a69135f5be0 ---------A   01450  GOTO 2220
    0x5a69135f5d30 ---------A   01460  PRINT "IT'S BLOCKED."
    0x5a69135f5dc0 ---------A   01470  GOTO 2220
    0x5a69135f6030 ---------A   01480  PRINT L$ " SWINGS AND ";
    0x5a69135f6290 ---------A   01490  IF D1=4 THEN 1580
    0x5a69135f6930 ---------A   01500  X3=INT(30*RND(1)+1)
    0x5a69135f6b80 ---------A   01510  IF X3<10 THEN 1580
    0x5a69135f6d00 ---------A   01520  PRINT "HE MISSES ";
    0x5a69135f6d80 ---------A   01530  PRINT
    0x5a69135f6fe0 ---------A   01540  IF X=1 THEN 2220
    0x5a69135f7060 ---------A   01550  PRINT
    0x5a69135f70e0 ---------A   01560  PRINT
    0x5a69135f7170 ---------A   01570  GOTO 1450
    0x5a69135f72c0 ---------A   01580  PRINT "HE CONNECTS!"
    0x5a69135f7520 ---------A   01590  IF X>35 THEN 2340
    0x5a69135f7860 ---------A   01600  X=X+15
    0x5a69135f78e0 ---------A   01610  GOTO 1450
    0x5a69135f7b50 ---------A   01620  PRINT L$;" GIVES THE HOOK... ";
    0x5a69135f7db0 ---------A   01630  IF D1=2 THEN 1670
    0x5a69135f8450 ---------A   01640  H1=INT(2*RND(1)+1)
    0x5a69135f86a0 ---------A   01650  IF H1=1 THEN 1690
    0x5a69135f8800 ---------A   01660  PRINT "CONNECTS..."
    0x5a69135f8b40 ---------A   01670  X=X+7
    0x5a69135f8fe0 ---------A   01680  GOTO 1450
    0x5a69135f9140 ---------A   01690  PRINT "BUT IT'S BLOCKED!!!!!!!!!!!!!"
    0x5a69135f91d0 ---------A   01700  GOTO 1450
    0x5a69135f9440 ---------A   01710  PRINT L$ " TRIES AN UPPERCUT ";
    0x5a69135f96b0 ---------A   01720  IF D1=3 THEN 1770
    0x5a69135f9d50 ---------A   01730  D5=INT(100*RND(1)+1)
    0x5a69135f9fc0 ---------A   01740  IF D5<51 THEN 1770
    0x5a69135fa130 ---------A   01750  PRINT "AND IT'S BLOCKED (LUCKY BLOCK!)"
    0x5a69135fa1c0 ---------A   01760  GOTO 1450
    0x5a69135fa310 ---------A   01770  PRINT "AND HE CONNECTS!"
    0x5a69135fa650 ---------A   01780  X=X+4
    0x5a69135fa6c0 ---------A   01790  GOTO 1450
    0x5a69135fad50 ---------A   01800  J7=INT(4*RND(1)+1)
    0x5a69135fafc0 ---------A   01810  IF J7 =B1 THEN 1830
    0x5a69135fb040 ---------A   01820  GOTO 1840
    0x5a69135fb370 ---------A   01830  Y=Y+2
    0x5a69135fb5c0 ---------A   01840  IF J7=1 THEN 1960
    0x5a69135fb820 ---------A   01850  IF J7=2 THEN 2060
    0x5a69135fba90 ---------A   01860  IF J7 =3 THEN 2120
    0x5a69135fbd10 ---------A   01870  PRINT J$;" JABS AND ";
    0x5a69135fbf70 ---------A   01880  IF D=4 THEN 1940
    0x5a69135fc610 ---------A   01890  Z4=INT(7*RND(1)+1)
    0x5a69135fc870 ---------A   01900  IF Z4>4 THEN 1930
    0x5a69135fc9d0 ---------A   01910  PRINT "IT'S BLOCKED!"
    0x5a69135fca60 ---------A   01920  GOTO 1450
    0x5a69135fcbb0 ---------A   01930  PRINT " BLOOD SPILLS !!!"
    0x5a69135fcef0 ---------A   01940  Y=Y+5
    0x5a69135fcf70 ---------A   01950  GOTO 1450
    0x5a69135fd1f0 ---------A   01960  PRINT J$" TAKES A FULL SWING AND";
    0x5a69135fd450 ---------A   01970  IF D=1 THEN 2020
    0x5a69135fdaf0 ---------A   01980  R6=INT(60*RND(1)+1)
    0x5a69135fdd50 ---------A   01990  IF R6 <30 THEN 2020
    0x5a69135fdeb0 ---------A   02000  PRINT " IT'S BLOCKED!"
    0x5a69135fdf50 ---------A   02010  GOTO 1450
    0x5a69135fe0c0 ---------A   02020  PRINT " POW!!!!! HE HITS HIM RIGHT IN THE FACE!"
    0x5a69135fe320 ---------A   02030  IF Y>35 THEN 2360
    0x5a69135fe660 ---------A   02040  Y=Y+15
    0x5a69135fe6f0 ---------A   02050  GOTO 1450
    0x5a69135feb40 ---------A   02060  PRINT J$;" GETS ";L$;" IN THE JAW (OUCH!)"
    0x5a69135fee90 ---------A   02070  Y=Y+7
    0x5a69135fefe0 ---------A   02080  PRINT "....AND AGAIN!"
    0x5a69135ff320 ---------A   02090  Y=Y+5
    0x5a69135ff570 ---------A   02100  IF Y>35 THEN 2360
    0x5a69135ff610 ---------A   02110  PRINT
    0x5a69135ff890 ---------A   02120  PRINT L$;" IS ATTACKED BY AN UPPERCUT (OH,OH)..."
    0x5a69135ffb00 ---------A   02130  IF D=3 THEN 2160
    0x5a69136001a0 ---------A   02140  Q4=INT(200*RND(1)+1)
    0x5a6913600400 ---------A   02150  IF Q4>75 THEN 2190
    0x5a6913600760 ---------A   02160  PRINT "AND ";J$;" CONNECTS..."
    0x5a6913600aa0 ---------A   02170  Y=Y+8
    0x5a6913600b30 ---------A   02180  GOTO 1450
    0x5a6913600e80 ---------A   02190  PRINT " BLOCKS AND HITS ";J$;" WITH A HOOK."
    0x5a69136011c0 ---------A   02200  X=X+5
    0x5a6913601230 ---------A   02210  GOTO 1450
    0x5a6913601360 ---------A   02220  NEXT R1
    0x5a6913601600 ---------A   02230  IF X>Y THEN 2290
    0x5a6913601660 ----------   02240  PRINT
    0x5a69136019c0 ---------A   02250  PRINT J$" WINS ROUND" R
    0x5a6913601d00 ---------A   02260  J=J+1
    0x5a6913601d80 ---------A   02270  GOTO 2310
    0x5a6913601dd0 ----------   02280  PRINT
    0x5a6913602130 ---------A   02290  PRINT L$" WINS ROUND"R
    0x5a6913602470 ---------A   02300  L=L+1
    0x5a69136025a0 ---------A   02310  NEXT R
    0x5a6913602810 ---------A   02320  IF J>= 2 THEN 2380
    0x5a6913602aa0 ---------A   02330  IF L>=2 THEN 2400
    0x5a6913603740 ---------A   02340  PRINT J$ " IS KNOCKED COLD AND " L$" IS THE WINNER AND CHAMP!";
    0x5a69136037f0 ---------A   02350  GOTO 2420
    0x5a6913603c70 ---------A   02360  PRINT L$ " IS KNOCKED COLD AND " J$" IS THE WINNER AND CHAMP!";
    0x5a6913603d10 ---------A   02370  GOTO 2350
    0x5a6913604160 ---------A   02380  PRINT J$ " WINS (NICE GOING," J$;")."
    0x5a69136041f0 ---------A   02390  GOTO 2350
    0x5a6913604440 ---------A   02400  PRINT L$ " AMAZINGLY WINS!!"
    0x5a69136044c0 ---------A   02410  GOTO 2350
    0x5a6913604530 ---------A   02420  PRINT
    0x5a69136045d0 ---------A   02430  PRINT
    0x5a6913604750 ---------A   02440  PRINT "AND NOW GOODBYE FROM THE OLYMPIC ARENA."
    0x5a69136047d0 ---------A   02450  PRINT
    0x5a6913604830 ---------A   02460  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02460 - 10000    7550 

 */



/*
 *  Symbol Table Listing for 'basic/boxing.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    B1                       Integer     
    C                        Integer     
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
    D5                       Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H1                       Integer     
    HEX$            Function String          args=1, int    
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    J                        Integer     
    J$                       String      
    J7                       Integer     
    L                        Integer     
    L$                       String      
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
    P                        Integer     
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q4                       Integer     
    R                        Integer     
    R1                       Integer     
    R6                       Integer     
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
    X3                       Integer     
    Y                        Integer     
    Z4                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/boxing.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5a69135e76d0 ---------A   01000  PRINT TAB(33);"BOXING"
    0x5a69135e7670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5a69135d82b0 ---------A   01020  PRINT
    0x5a69135e79e0 ---------A   01030  PRINT
    0x5a69135e77f0 ---------A   01040  PRINT
    0x5a69135e8040 ---------A   01050  PRINT "BOXING OLYMPIC STYLE (3 ROUNDS -- 2 OUT OF 3 WINS)"
    0x5a69135e9f30 ---------A   01060  J=0
    0x5a69135e9ff0 ---------A   01070  L=0
    0x5a69135ea100 ---------A   01080  PRINT
    0x5a69135e8620 ---------A   01090  PRINT "WHAT IS YOUR OPPONENT'S NAME";
    0x5a69135e8820 ---------A   01100  INPUT J$
    0x5a69135ef920 ---------A   01110  PRINT "INPUT YOUR MAN'S NAME";
    0x5a69135efb00 ---------A   01120  INPUT L$
    0x5a69135efc80 ---------A   01130  PRINT "DIFFERENT PUNCHES ARE: (1) FULL SWING; (2) HOOK; (3) UPPERCUT; (4) JAB."
    0x5a69135efda0 ---------A   01140  PRINT "WHAT IS YOUR MANS BEST";
    0x5a69135eff60 ---------A   01150  INPUT B
    0x5a69135f0080 ---------A   01160  PRINT "WHAT IS HIS VULNERABILITY";
    0x5a69135f02a0 ---------A   01170  INPUT D
    0x5a69135e9e70 ---------A T 01180  B1=INT(4*RND(1)+1)
    0x5a69135ea0b0 ---------A   01190  D1=INT(4*RND(1)+1)
    0x5a69135f11d0 ---------A   01200  IF B1=D1 THEN 1180
    0x5a69135f15f0 ---------A   01210  PRINT J$;"'S ADVANTAGE IS";B1;"AND VULNERABILITY IS SECRET."
    0x5a69135f1670 ---------A   01220  PRINT
    0x5a69135f1a10 ---------A   01230  FOR R=1 TO 3
    0x5a69135f1c70 ---------A   01240  IF J>= 2 THEN 2370
    0x5a69135f1ed0 ---------A   01250  IF L>=2 THEN 2390
    0x5a69135f21b0 ---------A   01260  X=0
    0x5a69135f2460 ---------A   01270  Y=0
    0x5a69135f27b0 ---------A   01280  PRINT "ROUND";R;"BEGINS..."
    0x5a69135f2b50 ---------A   01290  FOR R1= 1 TO 7
    0x5a69135f31f0 ---------A   01300  I=INT(10*RND(1)+1)
    0x5a69135f3450 ---------A   01310  IF I>5 THEN 1800
    0x5a69135f36d0 ---------A   01320  PRINT L$;"'S PUNCH";
    0x5a69135f38f0 ---------A   01330  INPUT P
    0x5a69135f3b70 ---------A   01340  IF P=B THEN 1360
    0x5a69135f3bf0 ---------A   01350  GOTO 1370
    0x5a69135f4130 ---------A T 01360  X=X+2
    0x5a69135f4380 ---------A T 01370  IF P=1 THEN 1480
    0x5a69135f45e0 ---------A   01380  IF P=2 THEN 1620
    0x5a69135f4850 ---------A   01390  IF P=3 THEN 1710
    0x5a69135f4cd0 ---------A   01400  PRINT L$;" JABS AT ";J$"'S HEAD ";
    0x5a69135f4f30 ---------A   01410  IF D1=4 THEN 1440
    0x5a69135f55d0 ---------A   01420  C=INT(8*RND(1)+1)
    0x5a69135f5820 ---------A   01430  IF C<4 THEN 1460
    0x5a69135f5b60 ---------A T 01440  X=X+3
    0x5a69135f5be0 ---------A T 01450  GOTO 2220
    0x5a69135f5d30 ---------A T 01460  PRINT "IT'S BLOCKED."
    0x5a69135f5dc0 ---------A   01470  GOTO 2220
    0x5a69135f6030 ---------A T 01480  PRINT L$ " SWINGS AND ";
    0x5a69135f6290 ---------A   01490  IF D1=4 THEN 1580
    0x5a69135f6930 ---------A   01500  X3=INT(30*RND(1)+1)
    0x5a69135f6b80 ---------A   01510  IF X3<10 THEN 1580
    0x5a69135f6d00 ---------A   01520  PRINT "HE MISSES ";
    0x5a69135f6d80 ---------A   01530  PRINT
    0x5a69135f6fe0 ---------A   01540  IF X=1 THEN 2220
    0x5a69135f7060 ---------A   01550  PRINT
    0x5a69135f70e0 ---------A   01560  PRINT
    0x5a69135f7170 ---------A   01570  GOTO 1450
    0x5a69135f72c0 ---------A T 01580  PRINT "HE CONNECTS!"
    0x5a69135f7520 ---------A   01590  IF X>35 THEN 2330
    0x5a69135f7860 ---------A   01600  X=X+15
    0x5a69135f78e0 ---------A   01610  GOTO 1450
    0x5a69135f7b50 ---------A T 01620  PRINT L$;" GIVES THE HOOK... ";
    0x5a69135f7db0 ---------A   01630  IF D1=2 THEN 1670
    0x5a69135f8450 ---------A   01640  H1=INT(2*RND(1)+1)
    0x5a69135f86a0 ---------A   01650  IF H1=1 THEN 1690
    0x5a69135f8800 ---------A   01660  PRINT "CONNECTS..."
    0x5a69135f8b40 ---------A T 01670  X=X+7
    0x5a69135f8fe0 ---------A   01680  GOTO 1450
    0x5a69135f9140 ---------A T 01690  PRINT "BUT IT'S BLOCKED!!!!!!!!!!!!!"
    0x5a69135f91d0 ---------A   01700  GOTO 1450
    0x5a69135f9440 ---------A T 01710  PRINT L$ " TRIES AN UPPERCUT ";
    0x5a69135f96b0 ---------A   01720  IF D1=3 THEN 1770
    0x5a69135f9d50 ---------A   01730  D5=INT(100*RND(1)+1)
    0x5a69135f9fc0 ---------A   01740  IF D5<51 THEN 1770
    0x5a69135fa130 ---------A   01750  PRINT "AND IT'S BLOCKED (LUCKY BLOCK!)"
    0x5a69135fa1c0 ---------A   01760  GOTO 1450
    0x5a69135fa310 ---------A T 01770  PRINT "AND HE CONNECTS!"
    0x5a69135fa650 ---------A   01780  X=X+4
    0x5a69135fa6c0 ---------A   01790  GOTO 1450
    0x5a69135fad50 ---------A T 01800  J7=INT(4*RND(1)+1)
    0x5a69135fafc0 ---------A   01810  IF J7 =B1 THEN 1830
    0x5a69135fb040 ---------A   01820  GOTO 1840
    0x5a69135fb370 ---------A T 01830  Y=Y+2
    0x5a69135fb5c0 ---------A T 01840  IF J7=1 THEN 1960
    0x5a69135fb820 ---------A   01850  IF J7=2 THEN 2060
    0x5a69135fba90 ---------A   01860  IF J7 =3 THEN 2120
    0x5a69135fbd10 ---------A   01870  PRINT J$;" JABS AND ";
    0x5a69135fbf70 ---------A   01880  IF D=4 THEN 1940
    0x5a69135fc610 ---------A   01890  Z4=INT(7*RND(1)+1)
    0x5a69135fc870 ---------A   01900  IF Z4>4 THEN 1930
    0x5a69135fc9d0 ---------A   01910  PRINT "IT'S BLOCKED!"
    0x5a69135fca60 ---------A   01920  GOTO 1450
    0x5a69135fcbb0 ---------A T 01930  PRINT " BLOOD SPILLS !!!"
    0x5a69135fcef0 ---------A T 01940  Y=Y+5
    0x5a69135fcf70 ---------A   01950  GOTO 1450
    0x5a69135fd1f0 ---------A T 01960  PRINT J$" TAKES A FULL SWING AND";
    0x5a69135fd450 ---------A   01970  IF D=1 THEN 2020
    0x5a69135fdaf0 ---------A   01980  R6=INT(60*RND(1)+1)
    0x5a69135fdd50 ---------A   01990  IF R6 <30 THEN 2020
    0x5a69135fdeb0 ---------A   02000  PRINT " IT'S BLOCKED!"
    0x5a69135fdf50 ---------A   02010  GOTO 1450
    0x5a69135fe0c0 ---------A T 02020  PRINT " POW!!!!! HE HITS HIM RIGHT IN THE FACE!"
    0x5a69135fe320 ---------A   02030  IF Y>35 THEN 2350
    0x5a69135fe660 ---------A   02040  Y=Y+15
    0x5a69135fe6f0 ---------A   02050  GOTO 1450
    0x5a69135feb40 ---------A T 02060  PRINT J$;" GETS ";L$;" IN THE JAW (OUCH!)"
    0x5a69135fee90 ---------A   02070  Y=Y+7
    0x5a69135fefe0 ---------A   02080  PRINT "....AND AGAIN!"
    0x5a69135ff320 ---------A   02090  Y=Y+5
    0x5a69135ff570 ---------A   02100  IF Y>35 THEN 2350
    0x5a69135ff610 ---------A   02110  PRINT
    0x5a69135ff890 ---------A T 02120  PRINT L$;" IS ATTACKED BY AN UPPERCUT (OH,OH)..."
    0x5a69135ffb00 ---------A   02130  IF D=3 THEN 2160
    0x5a69136001a0 ---------A   02140  Q4=INT(200*RND(1)+1)
    0x5a6913600400 ---------A   02150  IF Q4>75 THEN 2190
    0x5a6913600760 ---------A T 02160  PRINT "AND ";J$;" CONNECTS..."
    0x5a6913600aa0 ---------A   02170  Y=Y+8
    0x5a6913600b30 ---------A   02180  GOTO 1450
    0x5a6913600e80 ---------A T 02190  PRINT " BLOCKS AND HITS ";J$;" WITH A HOOK."
    0x5a69136011c0 ---------A   02200  X=X+5
    0x5a6913601230 ---------A   02210  GOTO 1450
    0x5a6913601360 ---------A T 02220  NEXT R1
    0x5a6913601600 ---------A   02230  IF X>Y THEN 2280
    0x5a6913601660 ---------A   02240  PRINT
    0x5a69136019c0 ---------A   02250  PRINT J$" WINS ROUND" R
    0x5a6913601d00 ---------A   02260  J=J+1
    0x5a6913601d80 ---------A   02270  GOTO 2300
    0x5a6913602130 ---------A T 02280  PRINT L$" WINS ROUND"R
    0x5a6913602470 ---------A   02290  L=L+1
    0x5a69136025a0 ---------A T 02300  NEXT R
    0x5a6913602810 ---------A   02310  IF J>= 2 THEN 2370
    0x5a6913602aa0 ---------A   02320  IF L>=2 THEN 2390
    0x5a6913603740 ---------A T 02330  PRINT J$ " IS KNOCKED COLD AND " L$" IS THE WINNER AND CHAMP!";
    0x5a69136037f0 ---------A T 02340  GOTO 2410
    0x5a6913603c70 ---------A T 02350  PRINT L$ " IS KNOCKED COLD AND " J$" IS THE WINNER AND CHAMP!";
    0x5a6913603d10 ---------A   02360  GOTO 2340
    0x5a6913604160 ---------A T 02370  PRINT J$ " WINS (NICE GOING," J$;")."
    0x5a69136041f0 ---------A   02380  GOTO 2340
    0x5a6913604440 ---------A T 02390  PRINT L$ " AMAZINGLY WINS!!"
    0x5a69136044c0 ---------A   02400  GOTO 2340
    0x5a6913604530 ---------A T 02410  PRINT
    0x5a69136045d0 ---------A   02420  PRINT
    0x5a6913604750 ---------A   02430  PRINT "AND NOW GOODBYE FROM THE OLYMPIC ARENA."
    0x5a69136047d0 ---------A   02440  PRINT
    0x5a6913604830 ---------A   02450  END
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
int    B_int;                                     // Basic: B 
int    B1_int;                                    // Basic: B1 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    D1_int;                                    // Basic: D1 
int    D5_int;                                    // Basic: D5 
int    H1_int;                                    // Basic: H1 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
char*  J_str;                                     // Basic: J$ 
int    J7_int;                                    // Basic: J7 
int    L_int;                                     // Basic: L 
char*  L_str;                                     // Basic: L$ 
int    P_int;                                     // Basic: P 
int    Q4_int;                                    // Basic: Q4 
int    R_int;                                     // Basic: R 
int    R1_int;                                    // Basic: R1 
int    R6_int;                                    // Basic: R6 
int    X_int;                                     // Basic: X 
int    X3_int;                                    // Basic: X3 
int    Y_int;                                     // Basic: Y 
int    Z4_int;                                    // Basic: Z4 
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
    // 01000 PRINT TAB(33);"BOXING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"BOXING");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "BOXING OLYMPIC STYLE (3 ROUNDS -- 2 OUT OF 3 WINS)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BOXING OLYMPIC STYLE (3 ROUNDS -- 2 OUT OF 3 WINS)");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 J=0
    J_int = 0;
    // 01070 L=0
    L_int = 0;
    // 01080 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "WHAT IS YOUR OPPONENT'S NAME";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT IS YOUR OPPONENT'S NAME");fputs(buf,fh); };
    // 01100 INPUT J$
    // Start of Basic INPUT statement 01100
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&J_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01100
    // 01110 PRINT "INPUT YOUR MAN'S NAME";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INPUT YOUR MAN'S NAME");fputs(buf,fh); };
    // 01120 INPUT L$
    // Start of Basic INPUT statement 01120
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&L_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01120
    // 01130 PRINT "DIFFERENT PUNCHES ARE: (1) FULL SWING; (2) HOOK; (3) UPPERCUT; (4) JAB."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DIFFERENT PUNCHES ARE: (1) FULL SWING; (2) HOOK; (3) UPPERCUT; (4) JAB.");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "WHAT IS YOUR MANS BEST";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT IS YOUR MANS BEST");fputs(buf,fh); };
    // 01150 INPUT B
    // Start of Basic INPUT statement 01150
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&B_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01150
    // 01160 PRINT "WHAT IS HIS VULNERABILITY";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT IS HIS VULNERABILITY");fputs(buf,fh); };
    // 01170 INPUT D
    // Start of Basic INPUT statement 01170
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&D_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01170

  Lbl_01180:
    // 01180 B1=INT(4*RND(1)+1)
    B1_int = INT(4*RND(1)+1);
    // 01190 D1=INT(4*RND(1)+1)
    D1_int = INT(4*RND(1)+1);
    // 01200 IF B1=D1 THEN 1180
    if(B1_int==D1_int)goto Lbl_01180;
    // 01210 PRINT J$;"'S ADVANTAGE IS";B1;"AND VULNERABILITY IS SECRET."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,J_str);strcat(buf,"'S ADVANTAGE IS"); b2c_INT(buf,B1_int);strcat(buf,"AND VULNERABILITY IS SECRET.");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01230 FOR R=1 TO 3
    for(R_int=1;R_int<=3;R_int++){
        // 01240 IF J>= 2 THEN 2370
        if(J_int>=2)goto Lbl_02370;
        // 01250 IF L>=2 THEN 2390
        if(L_int>=2)goto Lbl_02390;
        // 01260 X=0
        X_int = 0;
        // 01270 Y=0
        Y_int = 0;
        // 01280 PRINT "ROUND";R;"BEGINS..."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ROUND"); b2c_INT(buf,R_int);strcat(buf,"BEGINS...");strcat(buf,"\n");fputs(buf,fh); };
        // 01290 FOR R1= 1 TO 7
        for(R1_int=1;R1_int<=7;R1_int++){
            // 01300 I=INT(10*RND(1)+1)
            I_int = INT(10*RND(1)+1);
            // 01310 IF I>5 THEN 1800
            if(I_int>5)goto Lbl_01800;
            // 01320 PRINT L$;"'S PUNCH";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str);strcat(buf,"'S PUNCH");fputs(buf,fh); };
            // 01330 INPUT P
            // Start of Basic INPUT statement 01330
            {
                int numargs=1;
                char *args[numargs+1];
                bool echoeol=true;
                while(true){
                    fprintf(stdout," ? ");
                    int err=input(args,numargs,echoeol);
                    if(err==0x03) break;
                    if(err || 
                        (err += b2c_strtoi(&P_int,args,0)) ){
                         printf("?Redo from start\n");
                    }else{
                        break;
                    };
                };
            }; // End of Basic INPUT statement 01330
            // 01340 IF P=B THEN 1360
            if(P_int==B_int)goto Lbl_01360;
            // 01350 GOTO 1370
            goto Lbl_01370;

  Lbl_01360:
            // 01360 X=X+2
            X_int = X_int+2;

  Lbl_01370:
            // 01370 IF P=1 THEN 1480
            if(P_int==1)goto Lbl_01480;
            // 01380 IF P=2 THEN 1620
            if(P_int==2)goto Lbl_01620;
            // 01390 IF P=3 THEN 1710
            if(P_int==3)goto Lbl_01710;
            // 01400 PRINT L$;" JABS AT ";J$"'S HEAD ";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str);strcat(buf," JABS AT "); strcat(buf,J_str);strcat(buf,"'S HEAD ");fputs(buf,fh); };
            // 01410 IF D1=4 THEN 1440
            if(D1_int==4)goto Lbl_01440;
            // 01420 C=INT(8*RND(1)+1)
            C_int = INT(8*RND(1)+1);
            // 01430 IF C<4 THEN 1460
            if(C_int<4)goto Lbl_01460;

  Lbl_01440:
            // 01440 X=X+3
            X_int = X_int+3;

  Lbl_01450:
            // 01450 GOTO 2220
            goto Lbl_02220;

  Lbl_01460:
            // 01460 PRINT "IT'S BLOCKED."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IT'S BLOCKED.");strcat(buf,"\n");fputs(buf,fh); };
            // 01470 GOTO 2220
            goto Lbl_02220;

  Lbl_01480:
            // 01480 PRINT L$ " SWINGS AND ";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str);strcat(buf," SWINGS AND ");fputs(buf,fh); };
            // 01490 IF D1=4 THEN 1580
            if(D1_int==4)goto Lbl_01580;
            // 01500 X3=INT(30*RND(1)+1)
            X3_int = INT(30*RND(1)+1);
            // 01510 IF X3<10 THEN 1580
            if(X3_int<10)goto Lbl_01580;
            // 01520 PRINT "HE MISSES ";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HE MISSES ");fputs(buf,fh); };
            // 01530 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 01540 IF X=1 THEN 2220
            if(X_int==1)goto Lbl_02220;
            // 01550 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 01560 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
            // 01570 GOTO 1450
            goto Lbl_01450;

  Lbl_01580:
            // 01580 PRINT "HE CONNECTS!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HE CONNECTS!");strcat(buf,"\n");fputs(buf,fh); };
            // 01590 IF X>35 THEN 2330
            if(X_int>35)goto Lbl_02330;
            // 01600 X=X+15
            X_int = X_int+15;
            // 01610 GOTO 1450
            goto Lbl_01450;

  Lbl_01620:
            // 01620 PRINT L$;" GIVES THE HOOK... ";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str);strcat(buf," GIVES THE HOOK... ");fputs(buf,fh); };
            // 01630 IF D1=2 THEN 1670
            if(D1_int==2)goto Lbl_01670;
            // 01640 H1=INT(2*RND(1)+1)
            H1_int = INT(2*RND(1)+1);
            // 01650 IF H1=1 THEN 1690
            if(H1_int==1)goto Lbl_01690;
            // 01660 PRINT "CONNECTS..."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CONNECTS...");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01670:
            // 01670 X=X+7
            X_int = X_int+7;
            // 01680 GOTO 1450
            goto Lbl_01450;

  Lbl_01690:
            // 01690 PRINT "BUT IT'S BLOCKED!!!!!!!!!!!!!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BUT IT'S BLOCKED!!!!!!!!!!!!!");strcat(buf,"\n");fputs(buf,fh); };
            // 01700 GOTO 1450
            goto Lbl_01450;

  Lbl_01710:
            // 01710 PRINT L$ " TRIES AN UPPERCUT ";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str);strcat(buf," TRIES AN UPPERCUT ");fputs(buf,fh); };
            // 01720 IF D1=3 THEN 1770
            if(D1_int==3)goto Lbl_01770;
            // 01730 D5=INT(100*RND(1)+1)
            D5_int = INT(100*RND(1)+1);
            // 01740 IF D5<51 THEN 1770
            if(D5_int<51)goto Lbl_01770;
            // 01750 PRINT "AND IT'S BLOCKED (LUCKY BLOCK!)"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND IT'S BLOCKED (LUCKY BLOCK!)");strcat(buf,"\n");fputs(buf,fh); };
            // 01760 GOTO 1450
            goto Lbl_01450;

  Lbl_01770:
            // 01770 PRINT "AND HE CONNECTS!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND HE CONNECTS!");strcat(buf,"\n");fputs(buf,fh); };
            // 01780 X=X+4
            X_int = X_int+4;
            // 01790 GOTO 1450
            goto Lbl_01450;

  Lbl_01800:
            // 01800 J7=INT(4*RND(1)+1)
            J7_int = INT(4*RND(1)+1);
            // 01810 IF J7 =B1 THEN 1830
            if(J7_int==B1_int)goto Lbl_01830;
            // 01820 GOTO 1840
            goto Lbl_01840;

  Lbl_01830:
            // 01830 Y=Y+2
            Y_int = Y_int+2;

  Lbl_01840:
            // 01840 IF J7=1 THEN 1960
            if(J7_int==1)goto Lbl_01960;
            // 01850 IF J7=2 THEN 2060
            if(J7_int==2)goto Lbl_02060;
            // 01860 IF J7 =3 THEN 2120
            if(J7_int==3)goto Lbl_02120;
            // 01870 PRINT J$;" JABS AND ";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,J_str);strcat(buf," JABS AND ");fputs(buf,fh); };
            // 01880 IF D=4 THEN 1940
            if(D_int==4)goto Lbl_01940;
            // 01890 Z4=INT(7*RND(1)+1)
            Z4_int = INT(7*RND(1)+1);
            // 01900 IF Z4>4 THEN 1930
            if(Z4_int>4)goto Lbl_01930;
            // 01910 PRINT "IT'S BLOCKED!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IT'S BLOCKED!");strcat(buf,"\n");fputs(buf,fh); };
            // 01920 GOTO 1450
            goto Lbl_01450;

  Lbl_01930:
            // 01930 PRINT " BLOOD SPILLS !!!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," BLOOD SPILLS !!!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01940:
            // 01940 Y=Y+5
            Y_int = Y_int+5;
            // 01950 GOTO 1450
            goto Lbl_01450;

  Lbl_01960:
            // 01960 PRINT J$" TAKES A FULL SWING AND";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,J_str);strcat(buf," TAKES A FULL SWING AND");fputs(buf,fh); };
            // 01970 IF D=1 THEN 2020
            if(D_int==1)goto Lbl_02020;
            // 01980 R6=INT(60*RND(1)+1)
            R6_int = INT(60*RND(1)+1);
            // 01990 IF R6 <30 THEN 2020
            if(R6_int<30)goto Lbl_02020;
            // 02000 PRINT " IT'S BLOCKED!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," IT'S BLOCKED!");strcat(buf,"\n");fputs(buf,fh); };
            // 02010 GOTO 1450
            goto Lbl_01450;

  Lbl_02020:
            // 02020 PRINT " POW!!!!! HE HITS HIM RIGHT IN THE FACE!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," POW!!!!! HE HITS HIM RIGHT IN THE FACE!");strcat(buf,"\n");fputs(buf,fh); };
            // 02030 IF Y>35 THEN 2350
            if(Y_int>35)goto Lbl_02350;
            // 02040 Y=Y+15
            Y_int = Y_int+15;
            // 02050 GOTO 1450
            goto Lbl_01450;

  Lbl_02060:
            // 02060 PRINT J$;" GETS ";L$;" IN THE JAW (OUCH!)"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,J_str);strcat(buf," GETS "); strcat(buf,L_str);strcat(buf," IN THE JAW (OUCH!)");strcat(buf,"\n");fputs(buf,fh); };
            // 02070 Y=Y+7
            Y_int = Y_int+7;
            // 02080 PRINT "....AND AGAIN!"
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"....AND AGAIN!");strcat(buf,"\n");fputs(buf,fh); };
            // 02090 Y=Y+5
            Y_int = Y_int+5;
            // 02100 IF Y>35 THEN 2350
            if(Y_int>35)goto Lbl_02350;
            // 02110 PRINT
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02120:
            // 02120 PRINT L$;" IS ATTACKED BY AN UPPERCUT (OH,OH)..."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str);strcat(buf," IS ATTACKED BY AN UPPERCUT (OH,OH)...");strcat(buf,"\n");fputs(buf,fh); };
            // 02130 IF D=3 THEN 2160
            if(D_int==3)goto Lbl_02160;
            // 02140 Q4=INT(200*RND(1)+1)
            Q4_int = INT(200*RND(1)+1);
            // 02150 IF Q4>75 THEN 2190
            if(Q4_int>75)goto Lbl_02190;

  Lbl_02160:
            // 02160 PRINT "AND ";J$;" CONNECTS..."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND "); strcat(buf,J_str);strcat(buf," CONNECTS...");strcat(buf,"\n");fputs(buf,fh); };
            // 02170 Y=Y+8
            Y_int = Y_int+8;
            // 02180 GOTO 1450
            goto Lbl_01450;

  Lbl_02190:
            // 02190 PRINT " BLOCKS AND HITS ";J$;" WITH A HOOK."
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," BLOCKS AND HITS "); strcat(buf,J_str);strcat(buf," WITH A HOOK.");strcat(buf,"\n");fputs(buf,fh); };
            // 02200 X=X+5
            X_int = X_int+5;
            // 02210 GOTO 1450
            goto Lbl_01450;

  Lbl_02220:
            // 02220 NEXT R1
            int dummy_2220=0; // Ignore this line.
        }; // End-For(R1_int)
        // 02230 IF X>Y THEN 2280
        if(X_int>Y_int)goto Lbl_02280;
        // 02240 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 02250 PRINT J$" WINS ROUND" R
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,J_str);strcat(buf," WINS ROUND"); b2c_INT(buf,R_int);strcat(buf,"\n");fputs(buf,fh); };
        // 02260 J=J+1
        J_int = J_int+1;
        // 02270 GOTO 2300
        goto Lbl_02300;

  Lbl_02280:
        // 02280 PRINT L$" WINS ROUND"R
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str);strcat(buf," WINS ROUND"); b2c_INT(buf,R_int);strcat(buf,"\n");fputs(buf,fh); };
        // 02290 L=L+1
        L_int = L_int+1;

  Lbl_02300:
        // 02300 NEXT R
        int dummy_2300=0; // Ignore this line.
    }; // End-For(R_int)
    // 02310 IF J>= 2 THEN 2370
    if(J_int>=2)goto Lbl_02370;
    // 02320 IF L>=2 THEN 2390
    if(L_int>=2)goto Lbl_02390;

  Lbl_02330:
    // 02330 PRINT J$ " IS KNOCKED COLD AND " L$" IS THE WINNER AND CHAMP!";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,J_str);strcat(buf," IS KNOCKED COLD AND "); strcat(buf,L_str);strcat(buf," IS THE WINNER AND CHAMP!");fputs(buf,fh); };

  Lbl_02340:
    // 02340 GOTO 2410
    goto Lbl_02410;

  Lbl_02350:
    // 02350 PRINT L$ " IS KNOCKED COLD AND " J$" IS THE WINNER AND CHAMP!";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str);strcat(buf," IS KNOCKED COLD AND "); strcat(buf,J_str);strcat(buf," IS THE WINNER AND CHAMP!");fputs(buf,fh); };
    // 02360 GOTO 2340
    goto Lbl_02340;

  Lbl_02370:
    // 02370 PRINT J$ " WINS (NICE GOING," J$;")."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,J_str);strcat(buf," WINS (NICE GOING,"); strcat(buf,J_str);strcat(buf,").");strcat(buf,"\n");fputs(buf,fh); };
    // 02380 GOTO 2340
    goto Lbl_02340;

  Lbl_02390:
    // 02390 PRINT L$ " AMAZINGLY WINS!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,L_str);strcat(buf," AMAZINGLY WINS!!");strcat(buf,"\n");fputs(buf,fh); };
    // 02400 GOTO 2340
    goto Lbl_02340;

  Lbl_02410:
    // 02410 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02420 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02430 PRINT "AND NOW GOODBYE FROM THE OLYMPIC ARENA."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND NOW GOODBYE FROM THE OLYMPIC ARENA.");strcat(buf,"\n");fputs(buf,fh); };
    // 02440 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02450 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
