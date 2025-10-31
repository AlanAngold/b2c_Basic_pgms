/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/bullfght.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6092e130e6d0 ---------A   00010  PRINT TAB(34);"BULL"
    0x6092e130e670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6092e130fb80 ---------A   00030  DEF FNA(K)=INT(RND(1)*2+1)
    0x6092e1311100 ---------A   00200  PRINT:PRINT:PRINT
    0x6092e1310f30 ---------A   00202  L=1
    0x6092e130f880 ---------A   00205  PRINT "DO YOU WANT INSTRUCTIONS";
    0x6092e13169c0 ---------A   00206  INPUT Z$
    0x6092e1316c20 ---------A   00207  IF Z$="NO" THEN 400
    0x6092e1316dc0 ---------A   00210  PRINT "HELLO, ALL YOU BLOODLOVERS AND AFICIONADOS."
    0x6092e1316f20 ---------A   00220  PRINT "HERE IS YOUR BIG CHANCE TO KILL A BULL."
    0x6092e1316fc0 ---------A   00230  PRINT
    0x6092e13170e0 ---------A   00240  PRINT "ON EACH PASS OF THE BULL, YOU MAY TRY"
    0x6092e1317280 ---------A   00250  PRINT "0 - VERONICA (DANGEROUS INSIDE MOVE OF THE CAPE)"
    0x6092e1317420 ---------A   00260  PRINT "1 - LESS DANGEROUS OUTSIDE MOVE OF THE CAPE"
    0x6092e1317560 ---------A   00270  PRINT "2 - ORDINARY SWIRL OF THE CAPE."
    0x6092e13175c0 ---------A   00280  PRINT
    0x6092e1317720 ---------A   00290  PRINT "INSTEAD OF THE ABOVE, YOU MAY TRY TO KILL THE BULL"
    0x6092e1317880 ---------A   00300  PRINT "ON ANY TURN: 4 (OVER THE HORNS), 5 (IN THE CHEST)."
    0x6092e1317a00 ---------A   00310  PRINT "BUT IF I WERE YOU,"
    0x6092e1317b80 ---------A   00320  PRINT "I WOULDN'T TRY IT BEFORE THE SEVENTH PASS."
    0x6092e1317c30 ---------A   00330  PRINT
    0x6092e1317dd0 ---------A   00340  PRINT "THE CROWD WILL DETERMINE WHAT AWARD YOU DESERVE"
    0x6092e1317f40 ---------A   00350  PRINT "(POSTHUMOUSLY IF NECESSARY)."
    0x6092e13180c0 ---------A   00360  PRINT "THE BRAVER YOU ARE, THE BETTER THE AWARD YOU RECIEVE."
    0x6092e1318170 ---------A   00370  PRINT
    0x6092e1318310 ---------A   00380  PRINT "THE BETTER THE JOB THE PICADORES AND TOREADORES DO,"
    0x6092e1318480 ---------A   00390  PRINT "THE BETTER YOUR CHANCES ARE."
    0x6092e1318500 ---------A T 00400  PRINT
    0x6092e1318580 ---------A   00410  PRINT
    0x6092e1318920 ---------A   00420  D(5)=1
    0x6092e1318bf0 ---------A   00430  D(4)=1
    0x6092e1318ec0 ---------A   00450  DIM L$(5)
    0x6092e1319550 ---------A   00455  A=INT(RND(1)*5+1)
    0x6092e1319af0 ---------A   00460  FOR I=1 TO 5
    0x6092e1319d30 ---------A   00463  READ L$(I)
    0x6092e1319e60 ---------A   00467  NEXT I
    0x6092e131a390 ---------A   00470  DATA "SUPERB","GOOD","FAIR","POOR","AWFUL"
    0x6092e131a7c0 ---------A   00490  PRINT "YOU HAVE DRAWN A ";L$(A);" BULL."
    0x6092e131aa20 ---------A   00500  IF A>4 THEN 530
    0x6092e131ac80 ---------A   00510  IF A<2 THEN 550
    0x6092e131ad10 ---------A   00520  GOTO 570
    0x6092e131ae60 ---------A T 00530  PRINT "YOU'RE LUCKY."
    0x6092e131aef0 ---------A   00540  GOTO 570
    0x6092e131b050 ---------A T 00550  PRINT "GOOD LUCK.  YOU'LL NEED IT."
    0x6092e131b0d0 ---------A   00560  PRINT
    0x6092e131b150 ---------A T 00570  PRINT
    0x6092e131b450 ---------A   00590  A$="PICADO"
    0x6092e131b740 ---------A   00595  B$="RES"
    0x6092e131b7b0 ---------A   00600  GOSUB 1610
    0x6092e131bb60 ---------A   00610  D(1)=C
    0x6092e131bd90 ---------A   00630  A$="TOREAD"
    0x6092e131bfc0 ---------A   00635  B$="ORES"
    0x6092e131c030 ---------A   00640  GOSUB 1610
    0x6092e131c320 ---------A   00650  D(2)=C
    0x6092e131c390 ---------A T 00660  PRINT
    0x6092e131c410 ---------A   00670  PRINT
    0x6092e131c730 ---------A   00680  IF Z=1 THEN 1310
    0x6092e131cc00 ---------A   00690  D(3)=D(3)+1
    0x6092e131cf10 ---------A   00700  PRINT "PASS NUMBER";D(3)
    0x6092e131d250 ---------A   00710  IF D(3)<3 THEN 760
    0x6092e131d3e0 ---------A   00720  PRINT "HERE COMES THE BULL.  TRY FOR A KILL";
    0x6092e131d460 ---------A   00730  GOSUB 1930
    0x6092e131d770 ---------A   00735  IF Z1=1 THEN 1130
    0x6092e131d8f0 ---------A   00740  PRINT "CAPE MOVE";
    0x6092e131d9a0 ---------A   00750  GOTO 800
    0x6092e131df40 ---------A T 00760  PRINT "THE BULL IS CHARGING AT YOU!  YOU ARE THE MATADOR--"
    0x6092e131e0d0 ---------A   00770  PRINT "DO YOU WANT TO KILL THE BULL";
    0x6092e131e150 ---------A   00780  GOSUB 1930
    0x6092e131e3c0 ---------A   00785  IF Z1=1 THEN 1130
    0x6092e131e550 ---------A   00790  PRINT "WHAT MOVE DO YOU MAKE WITH THE CAPE";
    0x6092e131e780 ---------A T 00800  INPUT E
    0x6092e131ebc0 ---------A   00810  IF E<>INT(ABS(E)) THEN 830
    0x6092e131ee50 ---------A   00820  IF E<3 THEN 850
    0x6092e131efd0 ---------A T 00830  PRINT "DON'T PANIC, YOU IDIOT!  PUT DOWN A CORRECT NUMBER"
    0x6092e131f050 ---------A   00840  GOTO 800
    0x6092e131f0c0 ---------A T 00850  REM
    0x6092e131f330 ---------A   00860  IF E=0 THEN 920
    0x6092e131f590 ---------A   00870  IF E=1 THEN 900
    0x6092e131f870 ---------A   00880  M=.5
    0x6092e131f8e0 ---------A   00890  GOTO 930
    0x6092e131faf0 ---------A T 00900  M=2
    0x6092e131fb60 ---------A   00910  GOTO 930
    0x6092e131fd70 ---------A T 00920  M=3
    0x6092e13200e0 ---------A T 00930  L=L+M
    0x6092e1321130 ---------A   00940  F=(6-A+M/10)*RND(1)/((D(1)+D(2)+D(3)/10)*5)
    0x6092e1321390 ---------A   00950  IF F<.51 THEN 660
    0x6092e1321510 ---------A T 00960  PRINT "THE BULL HAS GORED YOU!"
    0x6092e13218c0 ---------A T 00970  ON FNA(0) GOTO 980,1010
    0x6092e1321a20 ---------A T 00980  PRINT "YOU ARE DEAD."
    0x6092e1321d00 ---------A   00990  D(4)=1.5
    0x6092e1321d80 ---------A   01000  GOTO 1310
    0x6092e1321f40 ---------A T 01010  PRINT "YOU ARE STILL ALIVE.":PRINT
    0x6092e13220d0 ---------A   01020  PRINT "DO YOU RUN FROM THE RING";
    0x6092e1322150 ---------A   01030  GOSUB 1930
    0x6092e13223a0 ---------A   01035  IF Z1=2 THEN 1070
    0x6092e1322500 ---------A   01040  PRINT "COWARD"
    0x6092e13227e0 ---------A   01050  D(4)=0
    0x6092e1322870 ---------A   01060  GOTO 1310
    0x6092e13229e0 ---------A T 01070  PRINT "YOU ARE BRAVE.  STUPID, BUT BRAVE."
    0x6092e1322d80 ---------A   01080  ON FNA(0) GOTO 1090,1110
    0x6092e1323060 ---------A T 01090  D(4)=2
    0x6092e13230e0 ---------A   01100  GOTO 660
    0x6092e1323230 ---------A T 01110  PRINT "YOU ARE GORED AGAIN!"
    0x6092e13232b0 ---------A   01120  GOTO 970
    0x6092e1323320 ---------A T 01130  REM
    0x6092e1323570 ---------A   01140  Z=1
    0x6092e13237b0 ---------A   01150  PRINT:PRINT "IT IS THE MOMENT OF TRUTH.":PRINT
    0x6092e1323940 ---------A   01155  PRINT "HOW DO YOU TRY TO KILL THE BULL";
    0x6092e1323b60 ---------A   01160  INPUT H
    0x6092e1323dc0 ---------A   01170  IF H=4 THEN 1230
    0x6092e1324040 ---------A   01180  IF H=5 THEN 1230
    0x6092e13241b0 ---------A   01190  PRINT "YOU PANICKED.  THE BULL GORED YOU."
    0x6092e1324250 ---------A   01220  GOTO 970
    0x6092e1324fc0 ---------A T 01230  K=(6-A)*10*RND(1)/((D(1)+D(2))*5*D(3))
    0x6092e13252d0 ---------A   01240  IF J=4 THEN 1290
    0x6092e1325540 ---------A   01250  IF K>.2 THEN 960
    0x6092e13256a0 ---------A T 01260  PRINT "YOU KILLED THE BULL!"
    0x6092e1325980 ---------A   01270  D(5)=2
    0x6092e13259f0 ---------A   01280  GOTO 1320
    0x6092e1325c40 ---------A T 01290  IF K>.8 THEN 960
    0x6092e1325cc0 ---------A   01300  GOTO 1260
    0x6092e1325d30 ---------A T 01310  PRINT
    0x6092e1325db0 ---------A T 01320  PRINT
    0x6092e1325e40 ---------A   01330  PRINT
    0x6092e1326190 ---------A   01340  IF D(4)<>0 THEN 1390
    0x6092e1326350 ---------A   01350  PRINT "THE CROWD BOOS FOR TEN MINUTES.  IF YOU EVER DARE TO SHOW"
    0x6092e13264f0 ---------A   01360  PRINT "YOUR FACE IN A RING AGAIN, THEY SWEAR THEY WILL KILL YOU--"
    0x6092e1326660 ---------A   01370  PRINT "UNLES THE BULL DOES FIRST."
    0x6092e1326710 ---------A   01380  GOTO 1580
    0x6092e13285c0 ---------A T 01390  DEF FND(Q)=(4.5+L/6-(D(1)+D(2))*2.5+4*D(4)+2*D(5)-D(3)^2/120-A)
    0x6092e1328c60 ---------A   01395  DEF FNC(Q)=FND(Q)*RND(1)
    0x6092e1328f80 ---------A   01400  IF D(4)<>2 THEN 1430
    0x6092e13290f0 ---------A   01410  PRINT "THE CROWD CHEERS WILDLY!"
    0x6092e1329180 ---------A   01420  GOTO 1450
    0x6092e13294a0 ---------A T 01430  IF D(5)<>2 THEN 1450
    0x6092e1329670 ---------A   01440  PRINT "THE CROWD CHEERS!":PRINT
    0x6092e13297e0 ---------A T 01450  PRINT "THE CROWD AWARDS YOU"
    0x6092e1329b30 ---------A   01460  IF FNC(Q)<2.4 THEN 1570
    0x6092e1329e80 ---------A   01470  IF FNC(Q)<4.9 THEN 1550
    0x6092e132a1e0 ---------A   01480  IF FNC(Q)<7.4 THEN 1520
    0x6092e132a360 ---------A   01500  PRINT "OLE!  YOU ARE 'MUY HOMBRE'!! OLE!  OLE!"
    0x6092e132a3f0 ---------A   01510  GOTO 1580
    0x6092e132a550 ---------A T 01520  PRINT "BOTH EARS OF THE BULL!"
    0x6092e132a6b0 ---------A   01530  PRINT "OLE!"
    0x6092e132a740 ---------A   01540  GOTO 1580
    0x6092e132a890 ---------A T 01550  PRINT "ONE EAR OF THE BULL."
    0x6092e132a920 ---------A   01560  GOTO 1580
    0x6092e132aa70 ---------A T 01570  PRINT "NOTHING AT ALL."
    0x6092e132ab00 ---------A T 01580  PRINT
    0x6092e132ad80 ---------A   01590  PRINT "ADIOS":PRINT:PRINT:PRINT
    0x6092e132ae00 ---------A   01600  GOTO 2030
    0x6092e132b3d0 ---------B G 01610  B=3/A*RND(1)
    0x6092e132b620 ---------B   01620  IF B<.37 THEN 1740
    0x6092e132b880 ---------B   01630  IF B<.5 THEN 1720
    0x6092e132bae0 ---------B   01640  IF B<.63 THEN 1700
    0x6092e132bd40 ---------B   01650  IF B<.87 THEN 1680
    0x6092e132bf60 ---------B   01660  C=.1
    0x6092e132bfd0 ---------B   01670  GOTO 1750
    0x6092e132c1e0 ---------B T 01680  C=.2
    0x6092e132c250 ---------B   01690  GOTO 1750
    0x6092e132c460 ---------B T 01700  C=.3
    0x6092e132c4d0 ---------B   01710  GOTO 1750
    0x6092e132c6e0 ---------B T 01720  C=.4
    0x6092e132c750 ---------B   01730  GOTO 1750
    0x6092e132c960 ---------B T 01740  C=.5
    0x6092e132cf50 ---------B T 01750  T=INT(10*C+.2)
    0x6092e132d680 ---------B   01760  PRINT "THE ";A$;B$;" DID A ";L$(T);" JOB."
    0x6092e132d8e0 ---------B   01770  IF 4>T THEN 1900
    0x6092e132db50 ---------B   01780  IF 5=T THEN 1870
    0x6092e132df20 ---------B   01790  ON FNA(K) GOTO 1830,1850
    0x6092e132e1d0 ---------B   01800  IF A$="TOREAD" THEN 1820
    0x6092e132e650 ---------B   01810  PRINT "ONE OF THE HORSES OF THE ";A$;B$;" WAS KILLED."
    0x6092e132ea30 ---------B T 01820  ON FNA(K) GOTO 1830,1850
    0x6092e132ee90 ---------B T 01830  PRINT "ONE OF THE ";A$;B$;" WAS KILLED."
    0x6092e132ef20 ---------B   01840  GOTO 1900
    0x6092e132f370 ---------B T 01850  PRINT "NO ";A$;B$;" WERE KILLED."
    0x6092e132f400 ---------B   01860  GOTO 1900
    0x6092e132f6a0 ---------B T 01870  IF A$="TOREAD" THEN 1890
    0x6092e132fd00 ---------B   01880  PRINT FNA(K);"OF THE HORSES OF THE ";A$;B$;" KILLED."
    0x6092e1330340 ---------B T 01890  PRINT FNA(K);"OF THE ";A$;B$;" KILLED."
    0x6092e13303c0 ---------B T 01900  PRINT
    0x6092e1330420 ---------B   01910  RETURN
    0x6092e13304a0 ---------C   01920  REM
    0x6092e1330620 ---------C B 01930  INPUT A$
    0x6092e13308b0 ---------C   01940  IF A$="YES" THEN 1990
    0x6092e1330b60 ---------C   01950  IF A$="NO" THEN 2010
    0x6092e1330ce0 ---------C   01970  PRINT "INCORRECT ANSWER - - PLEASE TYPE 'YES' OR 'NO'."
    0x6092e1330d60 ---------C   01980  GOTO 1930
    0x6092e1330f70 ---------C T 01990  Z1=1
    0x6092e1330fe0 ---------C   02000  GOTO 2020
    0x6092e13311f0 ---------C T 02010  Z1=2
    0x6092e1331240 ---------C T 02020  RETURN
    0x6092e13312a0 ---------A T 02030  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00400      00207T
     00530      00500T
     00550      00510T
     00570      00520T, 00540T
     00660      00950T, 01100T
     00760      00710T
     00800      00750T, 00840T
     00830      00810T
     00850      00820T
     00900      00870T
     00920      00860T
     00930      00890T, 00910T
     00960      01250T, 01290T
     00970      01120T, 01220T
     00980      00970T
     01010      00970T
     01070      01035T
     01090      01080T
     01110      01080T
     01130      00735T, 00785T
     01230      01170T, 01180T
     01260      01300T
     01290      01240T
     01310      00680T, 01000T, 01060T
     01320      01280T
     01390      01340T
     01430      01400T
     01450      01420T, 01430T
     01520      01480T
     01550      01470T
     01570      01460T
     01580      01380T, 01510T, 01540T, 01560T
     01610      00600G, 00640G
     01680      01650T
     01700      01640T
     01720      01630T
     01740      01620T
     01750      01670T, 01690T, 01710T, 01730T
     01820      01800T
     01830      01790T, 01820T
     01850      01790T, 01820T
     01870      01780T
     01890      01870T
     01900      01770T, 01840T, 01860T
     01930      00730G, 00780G, 01030G, 01980T
     01990      01940T
     02010      01950T
     02020      02000T
     02030      01600T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x6092e130e6d0 (00010)   0x6092e130e6d0 (00010)   0x6092e13312a0 (02030)   0x6092e13312a0 (02030)   
   B) 0x6092e132b3d0 (01610)   0x6092e132b3d0 (01610)   0x6092e1330420 (01910)   0x6092e1330420 (01910)   
   C) 0x6092e13304a0 (01920)   0x6092e1330620 (01930)   0x6092e1331240 (02020)   0x6092e1331240 (02020)   

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!

 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/bullfght.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6092e130e6d0 ---------A   00010  PRINT TAB(34);"BULL"
    0x6092e130e670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6092e130fb80 ---------A   00030  DEF FNA(K)=INT(RND(1)*2+1)
    0x6092e130ec20 ----------   00200  PRINT
    0x6092e130ec80 ----------        a PRINT
    0x6092e1311100 ---------A        b PRINT
    0x6092e1310f30 ---------A   00202  L=1
    0x6092e130f880 ---------A   00205  PRINT "DO YOU WANT INSTRUCTIONS";
    0x6092e13169c0 ---------A   00206  INPUT Z$
    0x6092e1316c20 ---------A   00207  IF Z$="NO" THEN 400
    0x6092e1316dc0 ---------A   00210  PRINT "HELLO, ALL YOU BLOODLOVERS AND AFICIONADOS."
    0x6092e1316f20 ---------A   00220  PRINT "HERE IS YOUR BIG CHANCE TO KILL A BULL."
    0x6092e1316fc0 ---------A   00230  PRINT
    0x6092e13170e0 ---------A   00240  PRINT "ON EACH PASS OF THE BULL, YOU MAY TRY"
    0x6092e1317280 ---------A   00250  PRINT "0 - VERONICA (DANGEROUS INSIDE MOVE OF THE CAPE)"
    0x6092e1317420 ---------A   00260  PRINT "1 - LESS DANGEROUS OUTSIDE MOVE OF THE CAPE"
    0x6092e1317560 ---------A   00270  PRINT "2 - ORDINARY SWIRL OF THE CAPE."
    0x6092e13175c0 ---------A   00280  PRINT
    0x6092e1317720 ---------A   00290  PRINT "INSTEAD OF THE ABOVE, YOU MAY TRY TO KILL THE BULL"
    0x6092e1317880 ---------A   00300  PRINT "ON ANY TURN: 4 (OVER THE HORNS), 5 (IN THE CHEST)."
    0x6092e1317a00 ---------A   00310  PRINT "BUT IF I WERE YOU,"
    0x6092e1317b80 ---------A   00320  PRINT "I WOULDN'T TRY IT BEFORE THE SEVENTH PASS."
    0x6092e1317c30 ---------A   00330  PRINT
    0x6092e1317dd0 ---------A   00340  PRINT "THE CROWD WILL DETERMINE WHAT AWARD YOU DESERVE"
    0x6092e1317f40 ---------A   00350  PRINT "(POSTHUMOUSLY IF NECESSARY)."
    0x6092e13180c0 ---------A   00360  PRINT "THE BRAVER YOU ARE, THE BETTER THE AWARD YOU RECIEVE."
    0x6092e1318170 ---------A   00370  PRINT
    0x6092e1318310 ---------A   00380  PRINT "THE BETTER THE JOB THE PICADORES AND TOREADORES DO,"
    0x6092e1318480 ---------A   00390  PRINT "THE BETTER YOUR CHANCES ARE."
    0x6092e1318500 ---------A T 00400  PRINT
    0x6092e1318580 ---------A   00410  PRINT
    0x6092e1318920 ---------A   00420  D(5)=1
    0x6092e1318bf0 ---------A   00430  D(4)=1
    0x6092e1318ec0 ---------A   00450  DIM L$(5)
    0x6092e1319550 ---------A   00455  A=INT(RND(1)*5+1)
    0x6092e1319af0 ---------A   00460  FOR I=1 TO 5
    0x6092e1319d30 ---------A   00463  READ L$(I)
    0x6092e1319e60 ---------A   00467  NEXT I
    0x6092e131a390 ---------A   00470  DATA "SUPERB","GOOD","FAIR","POOR","AWFUL"
    0x6092e131a7c0 ---------A   00490  PRINT "YOU HAVE DRAWN A ";L$(A);" BULL."
    0x6092e131aa20 ---------A   00500  IF A>4 THEN 530
    0x6092e131ac80 ---------A   00510  IF A<2 THEN 550
    0x6092e131ad10 ---------A   00520  GOTO 570
    0x6092e131ae60 ---------A T 00530  PRINT "YOU'RE LUCKY."
    0x6092e131aef0 ---------A   00540  GOTO 570
    0x6092e131b050 ---------A T 00550  PRINT "GOOD LUCK.  YOU'LL NEED IT."
    0x6092e131b0d0 ---------A   00560  PRINT
    0x6092e131b150 ---------A T 00570  PRINT
    0x6092e131b450 ---------A   00590  A$="PICADO"
    0x6092e131b740 ---------A   00595  B$="RES"
    0x6092e131b7b0 ---------A   00600  GOSUB 1610
    0x6092e131bb60 ---------A   00610  D(1)=C
    0x6092e131bd90 ---------A   00630  A$="TOREAD"
    0x6092e131bfc0 ---------A   00635  B$="ORES"
    0x6092e131c030 ---------A   00640  GOSUB 1610
    0x6092e131c320 ---------A   00650  D(2)=C
    0x6092e131c390 ---------A T 00660  PRINT
    0x6092e131c410 ---------A   00670  PRINT
    0x6092e131c730 ---------A   00680  IF Z=1 THEN 1310
    0x6092e131cc00 ---------A   00690  D(3)=D(3)+1
    0x6092e131cf10 ---------A   00700  PRINT "PASS NUMBER";D(3)
    0x6092e131d250 ---------A   00710  IF D(3)<3 THEN 760
    0x6092e131d3e0 ---------A   00720  PRINT "HERE COMES THE BULL.  TRY FOR A KILL";
    0x6092e131d460 ---------A   00730  GOSUB 1930
    0x6092e131d770 ---------A   00735  IF Z1=1 THEN 1130
    0x6092e131d8f0 ---------A   00740  PRINT "CAPE MOVE";
    0x6092e131d9a0 ---------A   00750  GOTO 800
    0x6092e131df40 ---------A T 00760  PRINT "THE BULL IS CHARGING AT YOU!  YOU ARE THE MATADOR--"
    0x6092e131e0d0 ---------A   00770  PRINT "DO YOU WANT TO KILL THE BULL";
    0x6092e131e150 ---------A   00780  GOSUB 1930
    0x6092e131e3c0 ---------A   00785  IF Z1=1 THEN 1130
    0x6092e131e550 ---------A   00790  PRINT "WHAT MOVE DO YOU MAKE WITH THE CAPE";
    0x6092e131e780 ---------A T 00800  INPUT E
    0x6092e131ebc0 ---------A   00810  IF E<>INT(ABS(E)) THEN 830
    0x6092e131ee50 ---------A   00820  IF E<3 THEN 850
    0x6092e131efd0 ---------A T 00830  PRINT "DON'T PANIC, YOU IDIOT!  PUT DOWN A CORRECT NUMBER"
    0x6092e131f050 ---------A   00840  GOTO 800
    0x6092e131f0c0 ---------A T 00850  REM
    0x6092e131f330 ---------A   00860  IF E=0 THEN 920
    0x6092e131f590 ---------A   00870  IF E=1 THEN 900
    0x6092e131f870 ---------A   00880  M=.5
    0x6092e131f8e0 ---------A   00890  GOTO 930
    0x6092e131faf0 ---------A T 00900  M=2
    0x6092e131fb60 ---------A   00910  GOTO 930
    0x6092e131fd70 ---------A T 00920  M=3
    0x6092e13200e0 ---------A T 00930  L=L+M
    0x6092e1321130 ---------A   00940  F=(6-A+M/10)*RND(1)/((D(1)+D(2)+D(3)/10)*5)
    0x6092e1321390 ---------A   00950  IF F<.51 THEN 660
    0x6092e1321510 ---------A T 00960  PRINT "THE BULL HAS GORED YOU!"
    0x6092e13218c0 ---------A T 00970  ON FNA(0) GOTO 980,1010
    0x6092e1321a20 ---------A T 00980  PRINT "YOU ARE DEAD."
    0x6092e1321d00 ---------A   00990  D(4)=1.5
    0x6092e1321d80 ---------A   01000  GOTO 1310
    0x6092e1321eb0 ---------- T 01010  PRINT "YOU ARE STILL ALIVE."
    0x6092e1321f40 ---------A T      a PRINT
    0x6092e13220d0 ---------A   01020  PRINT "DO YOU RUN FROM THE RING";
    0x6092e1322150 ---------A   01030  GOSUB 1930
    0x6092e13223a0 ---------A   01035  IF Z1=2 THEN 1070
    0x6092e1322500 ---------A   01040  PRINT "COWARD"
    0x6092e13227e0 ---------A   01050  D(4)=0
    0x6092e1322870 ---------A   01060  GOTO 1310
    0x6092e13229e0 ---------A T 01070  PRINT "YOU ARE BRAVE.  STUPID, BUT BRAVE."
    0x6092e1322d80 ---------A   01080  ON FNA(0) GOTO 1090,1110
    0x6092e1323060 ---------A T 01090  D(4)=2
    0x6092e13230e0 ---------A   01100  GOTO 660
    0x6092e1323230 ---------A T 01110  PRINT "YOU ARE GORED AGAIN!"
    0x6092e13232b0 ---------A   01120  GOTO 970
    0x6092e1323320 ---------A T 01130  REM
    0x6092e1323570 ---------A   01140  Z=1
    0x6092e13235c0 ----------   01150  PRINT
    0x6092e1323710 ----------        a PRINT "IT IS THE MOMENT OF TRUTH."
    0x6092e13237b0 ---------A        b PRINT
    0x6092e1323940 ---------A   01155  PRINT "HOW DO YOU TRY TO KILL THE BULL";
    0x6092e1323b60 ---------A   01160  INPUT H
    0x6092e1323dc0 ---------A   01170  IF H=4 THEN 1230
    0x6092e1324040 ---------A   01180  IF H=5 THEN 1230
    0x6092e13241b0 ---------A   01190  PRINT "YOU PANICKED.  THE BULL GORED YOU."
    0x6092e1324250 ---------A   01220  GOTO 970
    0x6092e1324fc0 ---------A T 01230  K=(6-A)*10*RND(1)/((D(1)+D(2))*5*D(3))
    0x6092e13252d0 ---------A   01240  IF J=4 THEN 1290
    0x6092e1325540 ---------A   01250  IF K>.2 THEN 960
    0x6092e13256a0 ---------A T 01260  PRINT "YOU KILLED THE BULL!"
    0x6092e1325980 ---------A   01270  D(5)=2
    0x6092e13259f0 ---------A   01280  GOTO 1320
    0x6092e1325c40 ---------A T 01290  IF K>.8 THEN 960
    0x6092e1325cc0 ---------A   01300  GOTO 1260
    0x6092e1325d30 ---------A T 01310  PRINT
    0x6092e1325db0 ---------A T 01320  PRINT
    0x6092e1325e40 ---------A   01330  PRINT
    0x6092e1326190 ---------A   01340  IF D(4)<>0 THEN 1390
    0x6092e1326350 ---------A   01350  PRINT "THE CROWD BOOS FOR TEN MINUTES.  IF YOU EVER DARE TO SHOW"
    0x6092e13264f0 ---------A   01360  PRINT "YOUR FACE IN A RING AGAIN, THEY SWEAR THEY WILL KILL YOU--"
    0x6092e1326660 ---------A   01370  PRINT "UNLES THE BULL DOES FIRST."
    0x6092e1326710 ---------A   01380  GOTO 1580
    0x6092e13285c0 ---------A T 01390  DEF FND(Q)=(4.5+L/6-(D(1)+D(2))*2.5+4*D(4)+2*D(5)-D(3)^2/120-A)
    0x6092e1328c60 ---------A   01395  DEF FNC(Q)=FND(Q)*RND(1)
    0x6092e1328f80 ---------A   01400  IF D(4)<>2 THEN 1430
    0x6092e13290f0 ---------A   01410  PRINT "THE CROWD CHEERS WILDLY!"
    0x6092e1329180 ---------A   01420  GOTO 1450
    0x6092e13294a0 ---------A T 01430  IF D(5)<>2 THEN 1450
    0x6092e13295e0 ----------   01440  PRINT "THE CROWD CHEERS!"
    0x6092e1329670 ---------A        a PRINT
    0x6092e13297e0 ---------A T 01450  PRINT "THE CROWD AWARDS YOU"
    0x6092e1329b30 ---------A   01460  IF FNC(Q)<2.4 THEN 1570
    0x6092e1329e80 ---------A   01470  IF FNC(Q)<4.9 THEN 1550
    0x6092e132a1e0 ---------A   01480  IF FNC(Q)<7.4 THEN 1520
    0x6092e132a360 ---------A   01500  PRINT "OLE!  YOU ARE 'MUY HOMBRE'!! OLE!  OLE!"
    0x6092e132a3f0 ---------A   01510  GOTO 1580
    0x6092e132a550 ---------A T 01520  PRINT "BOTH EARS OF THE BULL!"
    0x6092e132a6b0 ---------A   01530  PRINT "OLE!"
    0x6092e132a740 ---------A   01540  GOTO 1580
    0x6092e132a890 ---------A T 01550  PRINT "ONE EAR OF THE BULL."
    0x6092e132a920 ---------A   01560  GOTO 1580
    0x6092e132aa70 ---------A T 01570  PRINT "NOTHING AT ALL."
    0x6092e132ab00 ---------A T 01580  PRINT
    0x6092e132ac40 ----------   01590  PRINT "ADIOS"
    0x6092e132aca0 ----------        a PRINT
    0x6092e132ad00 ----------        b PRINT
    0x6092e132ad80 ---------A        c PRINT
    0x6092e132ae00 ---------A   01600  GOTO 2030
    0x6092e132b3d0 ---------B G 01610  B=3/A*RND(1)
    0x6092e132b620 ---------B   01620  IF B<.37 THEN 1740
    0x6092e132b880 ---------B   01630  IF B<.5 THEN 1720
    0x6092e132bae0 ---------B   01640  IF B<.63 THEN 1700
    0x6092e132bd40 ---------B   01650  IF B<.87 THEN 1680
    0x6092e132bf60 ---------B   01660  C=.1
    0x6092e132bfd0 ---------B   01670  GOTO 1750
    0x6092e132c1e0 ---------B T 01680  C=.2
    0x6092e132c250 ---------B   01690  GOTO 1750
    0x6092e132c460 ---------B T 01700  C=.3
    0x6092e132c4d0 ---------B   01710  GOTO 1750
    0x6092e132c6e0 ---------B T 01720  C=.4
    0x6092e132c750 ---------B   01730  GOTO 1750
    0x6092e132c960 ---------B T 01740  C=.5
    0x6092e132cf50 ---------B T 01750  T=INT(10*C+.2)
    0x6092e132d680 ---------B   01760  PRINT "THE ";A$;B$;" DID A ";L$(T);" JOB."
    0x6092e132d8e0 ---------B   01770  IF 4>T THEN 1900
    0x6092e132db50 ---------B   01780  IF 5=T THEN 1870
    0x6092e132df20 ---------B   01790  ON FNA(K) GOTO 1830,1850
    0x6092e132e1d0 ---------B   01800  IF A$="TOREAD" THEN 1820
    0x6092e132e650 ---------B   01810  PRINT "ONE OF THE HORSES OF THE ";A$;B$;" WAS KILLED."
    0x6092e132ea30 ---------B T 01820  ON FNA(K) GOTO 1830,1850
    0x6092e132ee90 ---------B T 01830  PRINT "ONE OF THE ";A$;B$;" WAS KILLED."
    0x6092e132ef20 ---------B   01840  GOTO 1900
    0x6092e132f370 ---------B T 01850  PRINT "NO ";A$;B$;" WERE KILLED."
    0x6092e132f400 ---------B   01860  GOTO 1900
    0x6092e132f6a0 ---------B T 01870  IF A$="TOREAD" THEN 1890
    0x6092e132fd00 ---------B   01880  PRINT FNA(K);"OF THE HORSES OF THE ";A$;B$;" KILLED."
    0x6092e1330340 ---------B T 01890  PRINT FNA(K);"OF THE ";A$;B$;" KILLED."
    0x6092e13303c0 ---------B T 01900  PRINT
    0x6092e1330420 ---------B   01910  RETURN
    0x6092e13304a0 ---------C   01920  REM
    0x6092e1330620 ---------C B 01930  INPUT A$
    0x6092e13308b0 ---------C   01940  IF A$="YES" THEN 1990
    0x6092e1330b60 ---------C   01950  IF A$="NO" THEN 2010
    0x6092e1330ce0 ---------C   01970  PRINT "INCORRECT ANSWER - - PLEASE TYPE 'YES' OR 'NO'."
    0x6092e1330d60 ---------C   01980  GOTO 1930
    0x6092e1330f70 ---------C T 01990  Z1=1
    0x6092e1330fe0 ---------C   02000  GOTO 2020
    0x6092e13311f0 ---------C T 02010  Z1=2
    0x6092e1331240 ---------C T 02020  RETURN
    0x6092e13312a0 ---------A T 02030  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/bullfght.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6092e130e6d0 ---------A   01000  PRINT TAB(34);"BULL"
    0x6092e130e670 ---------A T 01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6092e130fb80 ---------A   01020  DEF FNA(K)=INT(RND(1)*2+1)
    0x6092e130ec20 ----------   01030  PRINT
    0x6092e130ec80 ----------   01040  PRINT
    0x6092e1311100 ---------A   01050  PRINT
    0x6092e1310f30 ---------A   01060  L=1
    0x6092e130f880 ---------A T 01070  PRINT "DO YOU WANT INSTRUCTIONS";
    0x6092e13169c0 ---------A   01080  INPUT Z$
    0x6092e1316c20 ---------A T 01090  IF Z$="NO" THEN 1290
    0x6092e1316dc0 ---------A   01100  PRINT "HELLO, ALL YOU BLOODLOVERS AND AFICIONADOS."
    0x6092e1316f20 ---------A T 01110  PRINT "HERE IS YOUR BIG CHANCE TO KILL A BULL."
    0x6092e1316fc0 ---------A   01120  PRINT
    0x6092e13170e0 ---------A T 01130  PRINT "ON EACH PASS OF THE BULL, YOU MAY TRY"
    0x6092e1317280 ---------A   01140  PRINT "0 - VERONICA (DANGEROUS INSIDE MOVE OF THE CAPE)"
    0x6092e1317420 ---------A   01150  PRINT "1 - LESS DANGEROUS OUTSIDE MOVE OF THE CAPE"
    0x6092e1317560 ---------A   01160  PRINT "2 - ORDINARY SWIRL OF THE CAPE."
    0x6092e13175c0 ---------A   01170  PRINT
    0x6092e1317720 ---------A   01180  PRINT "INSTEAD OF THE ABOVE, YOU MAY TRY TO KILL THE BULL"
    0x6092e1317880 ---------A   01190  PRINT "ON ANY TURN: 4 (OVER THE HORNS), 5 (IN THE CHEST)."
    0x6092e1317a00 ---------A   01200  PRINT "BUT IF I WERE YOU,"
    0x6092e1317b80 ---------A   01210  PRINT "I WOULDN'T TRY IT BEFORE THE SEVENTH PASS."
    0x6092e1317c30 ---------A   01220  PRINT
    0x6092e1317dd0 ---------A T 01230  PRINT "THE CROWD WILL DETERMINE WHAT AWARD YOU DESERVE"
    0x6092e1317f40 ---------A   01240  PRINT "(POSTHUMOUSLY IF NECESSARY)."
    0x6092e13180c0 ---------A   01250  PRINT "THE BRAVER YOU ARE, THE BETTER THE AWARD YOU RECIEVE."
    0x6092e1318170 ---------A T 01260  PRINT
    0x6092e1318310 ---------A   01270  PRINT "THE BETTER THE JOB THE PICADORES AND TOREADORES DO,"
    0x6092e1318480 ---------A   01280  PRINT "THE BETTER YOUR CHANCES ARE."
    0x6092e1318500 ---------A T 01290  PRINT
    0x6092e1318580 ---------A   01300  PRINT
    0x6092e1318920 ---------A T 01310  D(5)=1
    0x6092e1318bf0 ---------A T 01320  D(4)=1
    0x6092e1318ec0 ---------A   01330  DIM L$(5)
    0x6092e1319550 ---------A   01340  A=INT(RND(1)*5+1)
    0x6092e1319af0 ---------A   01350  FOR I=1 TO 5
    0x6092e1319d30 ---------A   01360  READ L$(I)
    0x6092e1319e60 ---------A   01370  NEXT I
    0x6092e131a390 ---------A   01380  DATA "SUPERB","GOOD","FAIR","POOR","AWFUL"
    0x6092e131a7c0 ---------A T 01390  PRINT "YOU HAVE DRAWN A ";L$(A);" BULL."
    0x6092e131aa20 ---------A   01400  IF A>4 THEN 1430
    0x6092e131ac80 ---------A   01410  IF A<2 THEN 1450
    0x6092e131ad10 ---------A   01420  GOTO 1470
    0x6092e131ae60 ---------A T 01430  PRINT "YOU'RE LUCKY."
    0x6092e131aef0 ---------A   01440  GOTO 1470
    0x6092e131b050 ---------A T 01450  PRINT "GOOD LUCK.  YOU'LL NEED IT."
    0x6092e131b0d0 ---------A   01460  PRINT
    0x6092e131b150 ---------A   01470  PRINT
    0x6092e131b450 ---------A   01480  A$="PICADO"
    0x6092e131b740 ---------A   01490  B$="RES"
    0x6092e131b7b0 ---------A   01500  GOSUB 2600
    0x6092e131bb60 ---------A   01510  D(1)=C
    0x6092e131bd90 ---------A T 01520  A$="TOREAD"
    0x6092e131bfc0 ---------A   01530  B$="ORES"
    0x6092e131c030 ---------A   01540  GOSUB 2600
    0x6092e131c320 ---------A T 01550  D(2)=C
    0x6092e131c390 ---------A   01560  PRINT
    0x6092e131c410 ---------A T 01570  PRINT
    0x6092e131c730 ---------A T 01580  IF Z=1 THEN 2260
    0x6092e131cc00 ---------A   01590  D(3)=D(3)+1
    0x6092e131cf10 ---------A   01600  PRINT "PASS NUMBER";D(3)
    0x6092e131d250 ---------A G 01610  IF D(3)<3 THEN 1670
    0x6092e131d3e0 ---------A   01620  PRINT "HERE COMES THE BULL.  TRY FOR A KILL";
    0x6092e131d460 ---------A   01630  GOSUB 2920
    0x6092e131d770 ---------A   01640  IF Z1=1 THEN 2070
    0x6092e131d8f0 ---------A   01650  PRINT "CAPE MOVE";
    0x6092e131d9a0 ---------A   01660  GOTO 1720
    0x6092e131df40 ---------A   01670  PRINT "THE BULL IS CHARGING AT YOU!  YOU ARE THE MATADOR--"
    0x6092e131e0d0 ---------A T 01680  PRINT "DO YOU WANT TO KILL THE BULL";
    0x6092e131e150 ---------A   01690  GOSUB 2920
    0x6092e131e3c0 ---------A T 01700  IF Z1=1 THEN 2070
    0x6092e131e550 ---------A   01710  PRINT "WHAT MOVE DO YOU MAKE WITH THE CAPE";
    0x6092e131e780 ---------A T 01720  INPUT E
    0x6092e131ebc0 ---------A   01730  IF E<>INT(ABS(E)) THEN 1750
    0x6092e131ee50 ---------A T 01740  IF E<3 THEN 1770
    0x6092e131efd0 ---------A T 01750  PRINT "DON'T PANIC, YOU IDIOT!  PUT DOWN A CORRECT NUMBER"
    0x6092e131f050 ---------A   01760  GOTO 1720
    0x6092e131f0c0 ---------A   01770  REM
    0x6092e131f330 ---------A   01780  IF E=0 THEN 1840
    0x6092e131f590 ---------A   01790  IF E=1 THEN 1820
    0x6092e131f870 ---------A   01800  M=.5
    0x6092e131f8e0 ---------A   01810  GOTO 1850
    0x6092e131faf0 ---------A T 01820  M=2
    0x6092e131fb60 ---------A T 01830  GOTO 1850
    0x6092e131fd70 ---------A   01840  M=3
    0x6092e13200e0 ---------A T 01850  L=L+M
    0x6092e1321130 ---------A   01860  F=(6-A+M/10)*RND(1)/((D(1)+D(2)+D(3)/10)*5)
    0x6092e1321390 ---------A T 01870  IF F<.51 THEN 1560
    0x6092e1321510 ---------A   01880  PRINT "THE BULL HAS GORED YOU!"
    0x6092e13218c0 ---------A T 01890  ON FNA(0) GOTO 1900,1940
    0x6092e1321a20 ---------A T 01900  PRINT "YOU ARE DEAD."
    0x6092e1321d00 ---------A   01910  D(4)=1.5
    0x6092e1321d80 ---------A   01920  GOTO 2260
    0x6092e1321eb0 ---------- B 01930  PRINT "YOU ARE STILL ALIVE."
    0x6092e1321f40 ---------A   01940  PRINT
    0x6092e13220d0 ---------A   01950  PRINT "DO YOU RUN FROM THE RING";
    0x6092e1322150 ---------A   01960  GOSUB 2920
    0x6092e13223a0 ---------A   01970  IF Z1=2 THEN 2010
    0x6092e1322500 ---------A   01980  PRINT "COWARD"
    0x6092e13227e0 ---------A T 01990  D(4)=0
    0x6092e1322870 ---------A   02000  GOTO 2260
    0x6092e13229e0 ---------A T 02010  PRINT "YOU ARE BRAVE.  STUPID, BUT BRAVE."
    0x6092e1322d80 ---------A T 02020  ON FNA(0) GOTO 2030,2050
    0x6092e1323060 ---------A T 02030  D(4)=2
    0x6092e13230e0 ---------A   02040  GOTO 1560
    0x6092e1323230 ---------A   02050  PRINT "YOU ARE GORED AGAIN!"
    0x6092e13232b0 ---------A   02060  GOTO 1890
    0x6092e1323320 ---------A   02070  REM
    0x6092e1323570 ---------A   02080  Z=1
    0x6092e13235c0 ----------   02090  PRINT
    0x6092e1323710 ----------   02100  PRINT "IT IS THE MOMENT OF TRUTH."
    0x6092e13237b0 ---------A   02110  PRINT
    0x6092e1323940 ---------A   02120  PRINT "HOW DO YOU TRY TO KILL THE BULL";
    0x6092e1323b60 ---------A   02130  INPUT H
    0x6092e1323dc0 ---------A   02140  IF H=4 THEN 2180
    0x6092e1324040 ---------A   02150  IF H=5 THEN 2180
    0x6092e13241b0 ---------A   02160  PRINT "YOU PANICKED.  THE BULL GORED YOU."
    0x6092e1324250 ---------A   02170  GOTO 1890
    0x6092e1324fc0 ---------A   02180  K=(6-A)*10*RND(1)/((D(1)+D(2))*5*D(3))
    0x6092e13252d0 ---------A   02190  IF J=4 THEN 2240
    0x6092e1325540 ---------A   02200  IF K>.2 THEN 1880
    0x6092e13256a0 ---------A   02210  PRINT "YOU KILLED THE BULL!"
    0x6092e1325980 ---------A   02220  D(5)=2
    0x6092e13259f0 ---------A   02230  GOTO 2270
    0x6092e1325c40 ---------A   02240  IF K>.8 THEN 1880
    0x6092e1325cc0 ---------A   02250  GOTO 2210
    0x6092e1325d30 ---------A   02260  PRINT
    0x6092e1325db0 ---------A   02270  PRINT
    0x6092e1325e40 ---------A   02280  PRINT
    0x6092e1326190 ---------A   02290  IF D(4)<>0 THEN 2340
    0x6092e1326350 ---------A   02300  PRINT "THE CROWD BOOS FOR TEN MINUTES.  IF YOU EVER DARE TO SHOW"
    0x6092e13264f0 ---------A   02310  PRINT "YOUR FACE IN A RING AGAIN, THEY SWEAR THEY WILL KILL YOU--"
    0x6092e1326660 ---------A   02320  PRINT "UNLES THE BULL DOES FIRST."
    0x6092e1326710 ---------A   02330  GOTO 2540
    0x6092e13285c0 ---------A   02340  DEF FND(Q)=(4.5+L/6-(D(1)+D(2))*2.5+4*D(4)+2*D(5)-D(3)^2/120-A)
    0x6092e1328c60 ---------A   02350  DEF FNC(Q)=FND(Q)*RND(1)
    0x6092e1328f80 ---------A   02360  IF D(4)<>2 THEN 2390
    0x6092e13290f0 ---------A   02370  PRINT "THE CROWD CHEERS WILDLY!"
    0x6092e1329180 ---------A   02380  GOTO 2420
    0x6092e13294a0 ---------A   02390  IF D(5)<>2 THEN 2420
    0x6092e13295e0 ----------   02400  PRINT "THE CROWD CHEERS!"
    0x6092e1329670 ---------A   02410  PRINT
    0x6092e13297e0 ---------A   02420  PRINT "THE CROWD AWARDS YOU"
    0x6092e1329b30 ---------A   02430  IF FNC(Q)<2.4 THEN 2530
    0x6092e1329e80 ---------A   02440  IF FNC(Q)<4.9 THEN 2510
    0x6092e132a1e0 ---------A   02450  IF FNC(Q)<7.4 THEN 2480
    0x6092e132a360 ---------A   02460  PRINT "OLE!  YOU ARE 'MUY HOMBRE'!! OLE!  OLE!"
    0x6092e132a3f0 ---------A   02470  GOTO 2540
    0x6092e132a550 ---------A   02480  PRINT "BOTH EARS OF THE BULL!"
    0x6092e132a6b0 ---------A   02490  PRINT "OLE!"
    0x6092e132a740 ---------A   02500  GOTO 2540
    0x6092e132a890 ---------A   02510  PRINT "ONE EAR OF THE BULL."
    0x6092e132a920 ---------A   02520  GOTO 2540
    0x6092e132aa70 ---------A   02530  PRINT "NOTHING AT ALL."
    0x6092e132ab00 ---------A   02540  PRINT
    0x6092e132ac40 ----------   02550  PRINT "ADIOS"
    0x6092e132aca0 ----------   02560  PRINT
    0x6092e132ad00 ----------   02570  PRINT
    0x6092e132ad80 ---------A   02580  PRINT
    0x6092e132ae00 ---------A   02590  GOTO 3010
    0x6092e132b3d0 ---------B   02600  B=3/A*RND(1)
    0x6092e132b620 ---------B   02610  IF B<.37 THEN 2730
    0x6092e132b880 ---------B   02620  IF B<.5 THEN 2710
    0x6092e132bae0 ---------B   02630  IF B<.63 THEN 2690
    0x6092e132bd40 ---------B   02640  IF B<.87 THEN 2670
    0x6092e132bf60 ---------B   02650  C=.1
    0x6092e132bfd0 ---------B   02660  GOTO 2740
    0x6092e132c1e0 ---------B   02670  C=.2
    0x6092e132c250 ---------B   02680  GOTO 2740
    0x6092e132c460 ---------B   02690  C=.3
    0x6092e132c4d0 ---------B   02700  GOTO 2740
    0x6092e132c6e0 ---------B   02710  C=.4
    0x6092e132c750 ---------B   02720  GOTO 2740
    0x6092e132c960 ---------B   02730  C=.5
    0x6092e132cf50 ---------B   02740  T=INT(10*C+.2)
    0x6092e132d680 ---------B   02750  PRINT "THE ";A$;B$;" DID A ";L$(T);" JOB."
    0x6092e132d8e0 ---------B   02760  IF 4>T THEN 2890
    0x6092e132db50 ---------B   02770  IF 5=T THEN 2860
    0x6092e132df20 ---------B   02780  ON FNA(K) GOTO 2820,2840
    0x6092e132e1d0 ---------B   02790  IF A$="TOREAD" THEN 2810
    0x6092e132e650 ---------B   02800  PRINT "ONE OF THE HORSES OF THE ";A$;B$;" WAS KILLED."
    0x6092e132ea30 ---------B   02810  ON FNA(K) GOTO 2820,2840
    0x6092e132ee90 ---------B   02820  PRINT "ONE OF THE ";A$;B$;" WAS KILLED."
    0x6092e132ef20 ---------B   02830  GOTO 2890
    0x6092e132f370 ---------B   02840  PRINT "NO ";A$;B$;" WERE KILLED."
    0x6092e132f400 ---------B   02850  GOTO 2890
    0x6092e132f6a0 ---------B   02860  IF A$="TOREAD" THEN 2880
    0x6092e132fd00 ---------B   02870  PRINT FNA(K);"OF THE HORSES OF THE ";A$;B$;" KILLED."
    0x6092e1330340 ---------B   02880  PRINT FNA(K);"OF THE ";A$;B$;" KILLED."
    0x6092e13303c0 ---------B   02890  PRINT
    0x6092e1330420 ---------B   02900  RETURN
    0x6092e13304a0 ---------C   02910  REM
    0x6092e1330620 ---------C   02920  INPUT A$
    0x6092e13308b0 ---------C   02930  IF A$="YES" THEN 2970
    0x6092e1330b60 ---------C   02940  IF A$="NO" THEN 2990
    0x6092e1330ce0 ---------C   02950  PRINT "INCORRECT ANSWER - - PLEASE TYPE 'YES' OR 'NO'."
    0x6092e1330d60 ---------C   02960  GOTO 2920
    0x6092e1330f70 ---------C   02970  Z1=1
    0x6092e1330fe0 ---------C   02980  GOTO 3000
    0x6092e13311f0 ---------C   02990  Z1=2
    0x6092e1331240 ---------C   03000  RETURN
    0x6092e13312a0 ---------A   03010  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03030 - 10000    6980 

 */



/*
 *  Symbol Table Listing for 'basic/bullfght.bas'
 *
    A                        Integer     
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    B$                       String      
    C                        Integer     
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D               Array    Integer         {0,9} 
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FNA             Array    Integer         {0,9} 
    FNC             Array    Integer         {0,9} 
    FND             Array    Integer         {0,9} 
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
    K                        Integer     
    L                        Integer     
    L$              Array    String          {0,4} 
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
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
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
    Z                        Integer     
    Z$                       String      
    Z1                       Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/bullfght.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6092e130e6d0 ---------A   01000  PRINT TAB(34);"BULL"
    0x6092e130e670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6092e130fb80 ---------A   01020  DEF FNA(K)=INT(RND(1)*2+1)
    0x6092e130ec20 ---------A   01030  PRINT
    0x6092e130ec80 ---------A   01040  PRINT
    0x6092e1311100 ---------A   01050  PRINT
    0x6092e1310f30 ---------A   01060  L=1
    0x6092e130f880 ---------A   01070  PRINT "DO YOU WANT INSTRUCTIONS";
    0x6092e13169c0 ---------A   01080  INPUT Z$
    0x6092e1316c20 ---------A   01090  IF Z$="NO" THEN 1290
    0x6092e1316dc0 ---------A   01100  PRINT "HELLO, ALL YOU BLOODLOVERS AND AFICIONADOS."
    0x6092e1316f20 ---------A   01110  PRINT "HERE IS YOUR BIG CHANCE TO KILL A BULL."
    0x6092e1316fc0 ---------A   01120  PRINT
    0x6092e13170e0 ---------A   01130  PRINT "ON EACH PASS OF THE BULL, YOU MAY TRY"
    0x6092e1317280 ---------A   01140  PRINT "0 - VERONICA (DANGEROUS INSIDE MOVE OF THE CAPE)"
    0x6092e1317420 ---------A   01150  PRINT "1 - LESS DANGEROUS OUTSIDE MOVE OF THE CAPE"
    0x6092e1317560 ---------A   01160  PRINT "2 - ORDINARY SWIRL OF THE CAPE."
    0x6092e13175c0 ---------A   01170  PRINT
    0x6092e1317720 ---------A   01180  PRINT "INSTEAD OF THE ABOVE, YOU MAY TRY TO KILL THE BULL"
    0x6092e1317880 ---------A   01190  PRINT "ON ANY TURN: 4 (OVER THE HORNS), 5 (IN THE CHEST)."
    0x6092e1317a00 ---------A   01200  PRINT "BUT IF I WERE YOU,"
    0x6092e1317b80 ---------A   01210  PRINT "I WOULDN'T TRY IT BEFORE THE SEVENTH PASS."
    0x6092e1317c30 ---------A   01220  PRINT
    0x6092e1317dd0 ---------A   01230  PRINT "THE CROWD WILL DETERMINE WHAT AWARD YOU DESERVE"
    0x6092e1317f40 ---------A   01240  PRINT "(POSTHUMOUSLY IF NECESSARY)."
    0x6092e13180c0 ---------A   01250  PRINT "THE BRAVER YOU ARE, THE BETTER THE AWARD YOU RECIEVE."
    0x6092e1318170 ---------A   01260  PRINT
    0x6092e1318310 ---------A   01270  PRINT "THE BETTER THE JOB THE PICADORES AND TOREADORES DO,"
    0x6092e1318480 ---------A   01280  PRINT "THE BETTER YOUR CHANCES ARE."
    0x6092e1318500 ---------A T 01290  PRINT
    0x6092e1318580 ---------A   01300  PRINT
    0x6092e1318920 ---------A   01310  D(5)=1
    0x6092e1318bf0 ---------A   01320  D(4)=1
    0x6092e1318ec0 ---------A   01330  DIM L$(5)
    0x6092e1319550 ---------A   01340  A=INT(RND(1)*5+1)
    0x6092e1319af0 ---------A   01350  FOR I=1 TO 5
    0x6092e1319d30 ---------A   01360  READ L$(I)
    0x6092e1319e60 ---------A   01370  NEXT I
    0x6092e131a390 ---------A   01380  DATA "SUPERB","GOOD","FAIR","POOR","AWFUL"
    0x6092e131a7c0 ---------A   01390  PRINT "YOU HAVE DRAWN A ";L$(A);" BULL."
    0x6092e131aa20 ---------A   01400  IF A>4 THEN 1430
    0x6092e131ac80 ---------A   01410  IF A<2 THEN 1450
    0x6092e131ad10 ---------A   01420  GOTO 1470
    0x6092e131ae60 ---------A T 01430  PRINT "YOU'RE LUCKY."
    0x6092e131aef0 ---------A   01440  GOTO 1470
    0x6092e131b050 ---------A T 01450  PRINT "GOOD LUCK.  YOU'LL NEED IT."
    0x6092e131b0d0 ---------A   01460  PRINT
    0x6092e131b150 ---------A T 01470  PRINT
    0x6092e131b450 ---------A   01480  A$="PICADO"
    0x6092e131b740 ---------A   01490  B$="RES"
    0x6092e131b7b0 ---------A   01500  GOSUB 2600
    0x6092e131bb60 ---------A   01510  D(1)=C
    0x6092e131bd90 ---------A   01520  A$="TOREAD"
    0x6092e131bfc0 ---------A   01530  B$="ORES"
    0x6092e131c030 ---------A   01540  GOSUB 2600
    0x6092e131c320 ---------A   01550  D(2)=C
    0x6092e131c390 ---------A T 01560  PRINT
    0x6092e131c410 ---------A   01570  PRINT
    0x6092e131c730 ---------A   01580  IF Z=1 THEN 2250
    0x6092e131cc00 ---------A   01590  D(3)=D(3)+1
    0x6092e131cf10 ---------A   01600  PRINT "PASS NUMBER";D(3)
    0x6092e131d250 ---------A   01610  IF D(3)<3 THEN 1670
    0x6092e131d3e0 ---------A   01620  PRINT "HERE COMES THE BULL.  TRY FOR A KILL";
    0x6092e131d460 ---------A   01630  GOSUB 2930
    0x6092e131d770 ---------A   01640  IF Z1=1 THEN 2060
    0x6092e131d8f0 ---------A   01650  PRINT "CAPE MOVE";
    0x6092e131d9a0 ---------A   01660  GOTO 1720
    0x6092e131df40 ---------A T 01670  PRINT "THE BULL IS CHARGING AT YOU!  YOU ARE THE MATADOR--"
    0x6092e131e0d0 ---------A   01680  PRINT "DO YOU WANT TO KILL THE BULL";
    0x6092e131e150 ---------A   01690  GOSUB 2930
    0x6092e131e3c0 ---------A   01700  IF Z1=1 THEN 2060
    0x6092e131e550 ---------A   01710  PRINT "WHAT MOVE DO YOU MAKE WITH THE CAPE";
    0x6092e131e780 ---------A T 01720  INPUT E
    0x6092e131ebc0 ---------A   01730  IF E<>INT(ABS(E)) THEN 1750
    0x6092e131ee50 ---------A   01740  IF E<3 THEN 1770
    0x6092e131efd0 ---------A T 01750  PRINT "DON'T PANIC, YOU IDIOT!  PUT DOWN A CORRECT NUMBER"
    0x6092e131f050 ---------A   01760  GOTO 1720
    0x6092e131f0c0 ---------A T 01770  REM
    0x6092e131f330 ---------A   01780  IF E=0 THEN 1840
    0x6092e131f590 ---------A   01790  IF E=1 THEN 1820
    0x6092e131f870 ---------A   01800  M=.5
    0x6092e131f8e0 ---------A   01810  GOTO 1850
    0x6092e131faf0 ---------A T 01820  M=2
    0x6092e131fb60 ---------A   01830  GOTO 1850
    0x6092e131fd70 ---------A T 01840  M=3
    0x6092e13200e0 ---------A T 01850  L=L+M
    0x6092e1321130 ---------A   01860  F=(6-A+M/10)*RND(1)/((D(1)+D(2)+D(3)/10)*5)
    0x6092e1321390 ---------A   01870  IF F<.51 THEN 1560
    0x6092e1321510 ---------A T 01880  PRINT "THE BULL HAS GORED YOU!"
    0x6092e13218c0 ---------A T 01890  ON FNA(0) GOTO 1900,1930
    0x6092e1321a20 ---------A T 01900  PRINT "YOU ARE DEAD."
    0x6092e1321d00 ---------A   01910  D(4)=1.5
    0x6092e1321d80 ---------A   01920  GOTO 2250
    0x6092e1321f40 ---------A T 01930  PRINT
    0x6092e13220d0 ---------A   01940  PRINT "DO YOU RUN FROM THE RING";
    0x6092e1322150 ---------A   01950  GOSUB 2930
    0x6092e13223a0 ---------A   01960  IF Z1=2 THEN 2000
    0x6092e1322500 ---------A   01970  PRINT "COWARD"
    0x6092e13227e0 ---------A   01980  D(4)=0
    0x6092e1322870 ---------A   01990  GOTO 2250
    0x6092e13229e0 ---------A T 02000  PRINT "YOU ARE BRAVE.  STUPID, BUT BRAVE."
    0x6092e1322d80 ---------A   02010  ON FNA(0) GOTO 2020,2040
    0x6092e1323060 ---------A T 02020  D(4)=2
    0x6092e13230e0 ---------A   02030  GOTO 1560
    0x6092e1323230 ---------A T 02040  PRINT "YOU ARE GORED AGAIN!"
    0x6092e13232b0 ---------A   02050  GOTO 1890
    0x6092e1323320 ---------A T 02060  REM
    0x6092e1323570 ---------A   02070  Z=1
    0x6092e13235c0 ---------A   02080  PRINT
    0x6092e1323710 ---------A   02090  PRINT "IT IS THE MOMENT OF TRUTH."
    0x6092e13237b0 ---------A   02100  PRINT
    0x6092e1323940 ---------A   02110  PRINT "HOW DO YOU TRY TO KILL THE BULL";
    0x6092e1323b60 ---------A   02120  INPUT H
    0x6092e1323dc0 ---------A   02130  IF H=4 THEN 2170
    0x6092e1324040 ---------A   02140  IF H=5 THEN 2170
    0x6092e13241b0 ---------A   02150  PRINT "YOU PANICKED.  THE BULL GORED YOU."
    0x6092e1324250 ---------A   02160  GOTO 1890
    0x6092e1324fc0 ---------A T 02170  K=(6-A)*10*RND(1)/((D(1)+D(2))*5*D(3))
    0x6092e13252d0 ---------A   02180  IF J=4 THEN 2230
    0x6092e1325540 ---------A   02190  IF K>.2 THEN 1880
    0x6092e13256a0 ---------A T 02200  PRINT "YOU KILLED THE BULL!"
    0x6092e1325980 ---------A   02210  D(5)=2
    0x6092e13259f0 ---------A   02220  GOTO 2260
    0x6092e1325c40 ---------A T 02230  IF K>.8 THEN 1880
    0x6092e1325cc0 ---------A   02240  GOTO 2200
    0x6092e1325d30 ---------A T 02250  PRINT
    0x6092e1325db0 ---------A T 02260  PRINT
    0x6092e1325e40 ---------A   02270  PRINT
    0x6092e1326190 ---------A   02280  IF D(4)<>0 THEN 2330
    0x6092e1326350 ---------A   02290  PRINT "THE CROWD BOOS FOR TEN MINUTES.  IF YOU EVER DARE TO SHOW"
    0x6092e13264f0 ---------A   02300  PRINT "YOUR FACE IN A RING AGAIN, THEY SWEAR THEY WILL KILL YOU--"
    0x6092e1326660 ---------A   02310  PRINT "UNLES THE BULL DOES FIRST."
    0x6092e1326710 ---------A   02320  GOTO 2530
    0x6092e13285c0 ---------A T 02330  DEF FND(Q)=(4.5+L/6-(D(1)+D(2))*2.5+4*D(4)+2*D(5)-D(3)^2/120-A)
    0x6092e1328c60 ---------A   02340  DEF FNC(Q)=FND(Q)*RND(1)
    0x6092e1328f80 ---------A   02350  IF D(4)<>2 THEN 2380
    0x6092e13290f0 ---------A   02360  PRINT "THE CROWD CHEERS WILDLY!"
    0x6092e1329180 ---------A   02370  GOTO 2410
    0x6092e13294a0 ---------A T 02380  IF D(5)<>2 THEN 2410
    0x6092e13295e0 ---------A   02390  PRINT "THE CROWD CHEERS!"
    0x6092e1329670 ---------A   02400  PRINT
    0x6092e13297e0 ---------A T 02410  PRINT "THE CROWD AWARDS YOU"
    0x6092e1329b30 ---------A   02420  IF FNC(Q)<2.4 THEN 2520
    0x6092e1329e80 ---------A   02430  IF FNC(Q)<4.9 THEN 2500
    0x6092e132a1e0 ---------A   02440  IF FNC(Q)<7.4 THEN 2470
    0x6092e132a360 ---------A   02450  PRINT "OLE!  YOU ARE 'MUY HOMBRE'!! OLE!  OLE!"
    0x6092e132a3f0 ---------A   02460  GOTO 2530
    0x6092e132a550 ---------A T 02470  PRINT "BOTH EARS OF THE BULL!"
    0x6092e132a6b0 ---------A   02480  PRINT "OLE!"
    0x6092e132a740 ---------A   02490  GOTO 2530
    0x6092e132a890 ---------A T 02500  PRINT "ONE EAR OF THE BULL."
    0x6092e132a920 ---------A   02510  GOTO 2530
    0x6092e132aa70 ---------A T 02520  PRINT "NOTHING AT ALL."
    0x6092e132ab00 ---------A T 02530  PRINT
    0x6092e132ac40 ---------A   02540  PRINT "ADIOS"
    0x6092e132aca0 ---------A   02550  PRINT
    0x6092e132ad00 ---------A   02560  PRINT
    0x6092e132ad80 ---------A   02570  PRINT
    0x6092e132ae00 ---------A   02580  GOTO 2590
    0x6092e13312a0 ---------A T 02590  END
    0x6092e132b3d0 ---------B G 02600  B=3/A*RND(1)
    0x6092e132b620 ---------B   02610  IF B<.37 THEN 2730
    0x6092e132b880 ---------B   02620  IF B<.5 THEN 2710
    0x6092e132bae0 ---------B   02630  IF B<.63 THEN 2690
    0x6092e132bd40 ---------B   02640  IF B<.87 THEN 2670
    0x6092e132bf60 ---------B   02650  C=.1
    0x6092e132bfd0 ---------B   02660  GOTO 2740
    0x6092e132c1e0 ---------B T 02670  C=.2
    0x6092e132c250 ---------B   02680  GOTO 2740
    0x6092e132c460 ---------B T 02690  C=.3
    0x6092e132c4d0 ---------B   02700  GOTO 2740
    0x6092e132c6e0 ---------B T 02710  C=.4
    0x6092e132c750 ---------B   02720  GOTO 2740
    0x6092e132c960 ---------B T 02730  C=.5
    0x6092e132cf50 ---------B T 02740  T=INT(10*C+.2)
    0x6092e132d680 ---------B   02750  PRINT "THE ";A$;B$;" DID A ";L$(T);" JOB."
    0x6092e132d8e0 ---------B   02760  IF 4>T THEN 2890
    0x6092e132db50 ---------B   02770  IF 5=T THEN 2860
    0x6092e132df20 ---------B   02780  ON FNA(K) GOTO 2820,2840
    0x6092e132e1d0 ---------B   02790  IF A$="TOREAD" THEN 2810
    0x6092e132e650 ---------B   02800  PRINT "ONE OF THE HORSES OF THE ";A$;B$;" WAS KILLED."
    0x6092e132ea30 ---------B T 02810  ON FNA(K) GOTO 2820,2840
    0x6092e132ee90 ---------B T 02820  PRINT "ONE OF THE ";A$;B$;" WAS KILLED."
    0x6092e132ef20 ---------B   02830  GOTO 2890
    0x6092e132f370 ---------B T 02840  PRINT "NO ";A$;B$;" WERE KILLED."
    0x6092e132f400 ---------B   02850  GOTO 2890
    0x6092e132f6a0 ---------B T 02860  IF A$="TOREAD" THEN 2880
    0x6092e132fd00 ---------B   02870  PRINT FNA(K);"OF THE HORSES OF THE ";A$;B$;" KILLED."
    0x6092e1330340 ---------B T 02880  PRINT FNA(K);"OF THE ";A$;B$;" KILLED."
    0x6092e13303c0 ---------B T 02890  PRINT
    0x6092e133d580 ---------B   02900  GOTO 02910
    0x6092e133f420 ---------B T 02910  RETURN
    0x6092e13304a0 ---------C   02920  REM
    0x6092e1330620 ---------C B 02930  INPUT A$
    0x6092e13308b0 ---------C   02940  IF A$="YES" THEN 2980
    0x6092e1330b60 ---------C   02950  IF A$="NO" THEN 3000
    0x6092e1330ce0 ---------C   02960  PRINT "INCORRECT ANSWER - - PLEASE TYPE 'YES' OR 'NO'."
    0x6092e1330d60 ---------C   02970  GOTO 2930
    0x6092e1330f70 ---------C T 02980  Z1=1
    0x6092e1330fe0 ---------C   02990  GOTO 3010
    0x6092e13311f0 ---------C T 03000  Z1=2
    0x6092e1332100 ---------C T 03010  GOTO 03020
    0x6092e133f4a0 ---------C T 03020  RETURN
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
char* data_01380s[]={"SUPERB","GOOD","FAIR","POOR","AWFUL"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1380,  5,data_01380s},
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
int    B_int;                                     // Basic: B 
char*  B_str;                                     // Basic: B$ 
int    C_int;                                     // Basic: C 
int    D_int_arr[10];                             // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    FNA_int_arr[10];                           // Basic: FNA 
int    FNC_int_arr[10];                           // Basic: FNC 
int    FND_int_arr[10];                           // Basic: FND 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
char*  L_str_arr[5];                              // Basic: L$ 
int    M_int;                                     // Basic: M 
int    Q_int;                                     // Basic: Q 
int    T_int;                                     // Basic: T 
int    Z_int;                                     // Basic: Z 
char*  Z_str;                                     // Basic: Z$ 
int    Z1_int;                                    // Basic: Z1 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02600();
void Routine_02930();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
#pragma argsused K
int FNA(int K){
    int rtn=INT(RND(1)*2+1);
    return(rtn);
}

#pragma argsused Q
int FND(int Q){
    int rtn=(4.5+L_int/6-(D_int_arr[1]+D_int_arr[2])*2.5+4*D_int_arr[4]+2*D_int_arr[5]-IPower(D_int_arr[3],2)/120-A_int);
    return(rtn);
}

#pragma argsused Q
int FNC(int Q){
    int rtn=FND_int_arr[Q_int]*RND(1);
    return(rtn);
}

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

void Routine_02600(){
    // 02600 B=3/A*RND(1)
    B_int = 3/A_int*RND(1);
    // 02610 IF B<.37 THEN 2730
    if(B_int<0.37)goto Lbl_02730;
    // 02620 IF B<.5 THEN 2710
    if(B_int<0.5)goto Lbl_02710;
    // 02630 IF B<.63 THEN 2690
    if(B_int<0.63)goto Lbl_02690;
    // 02640 IF B<.87 THEN 2670
    if(B_int<0.87)goto Lbl_02670;
    // 02650 C=.1
    C_int = 0.1;
    // 02660 GOTO 2740
    goto Lbl_02740;

  Lbl_02670:
    // 02670 C=.2
    C_int = 0.2;
    // 02680 GOTO 2740
    goto Lbl_02740;

  Lbl_02690:
    // 02690 C=.3
    C_int = 0.3;
    // 02700 GOTO 2740
    goto Lbl_02740;

  Lbl_02710:
    // 02710 C=.4
    C_int = 0.4;
    // 02720 GOTO 2740
    goto Lbl_02740;

  Lbl_02730:
    // 02730 C=.5
    C_int = 0.5;

  Lbl_02740:
    // 02740 T=INT(10*C+.2)
    T_int = INT(10*C_int+0.2);
    // 02750 PRINT "THE ";A$;B$;" DID A ";L$(T);" JOB."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE "); strcat(buf,A_str); strcat(buf,B_str);strcat(buf," DID A "); strcat(buf,L_str_arr[T_int]);strcat(buf," JOB.");strcat(buf,"\n");fputs(buf,fh); };
    // 02760 IF 4>T THEN 2890
    if(4>T_int)goto Lbl_02890;
    // 02770 IF 5=T THEN 2860
    if(5==T_int)goto Lbl_02860;
    // 02780 ON FNA(K) GOTO 2820,2840
    switch((int)(FNA_int_arr[K_int])){
        case 1: goto Lbl_02820;
        case 2: goto Lbl_02840;
        default: break; 
    };
    // 02790 IF A$="TOREAD" THEN 2810
    if(strcmp(A_str,"TOREAD")==0)goto Lbl_02810;
    // 02800 PRINT "ONE OF THE HORSES OF THE ";A$;B$;" WAS KILLED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ONE OF THE HORSES OF THE "); strcat(buf,A_str); strcat(buf,B_str);strcat(buf," WAS KILLED.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02810:
    // 02810 ON FNA(K) GOTO 2820,2840
    switch((int)(FNA_int_arr[K_int])){
        case 1: goto Lbl_02820;
        case 2: goto Lbl_02840;
        default: break; 
    };

  Lbl_02820:
    // 02820 PRINT "ONE OF THE ";A$;B$;" WAS KILLED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ONE OF THE "); strcat(buf,A_str); strcat(buf,B_str);strcat(buf," WAS KILLED.");strcat(buf,"\n");fputs(buf,fh); };
    // 02830 GOTO 2890
    goto Lbl_02890;

  Lbl_02840:
    // 02840 PRINT "NO ";A$;B$;" WERE KILLED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NO "); strcat(buf,A_str); strcat(buf,B_str);strcat(buf," WERE KILLED.");strcat(buf,"\n");fputs(buf,fh); };
    // 02850 GOTO 2890
    goto Lbl_02890;

  Lbl_02860:
    // 02860 IF A$="TOREAD" THEN 2880
    if(strcmp(A_str,"TOREAD")==0)goto Lbl_02880;
    // 02870 PRINT FNA(K);"OF THE HORSES OF THE ";A$;B$;" KILLED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,FNA_int_arr[K_int]);strcat(buf,"OF THE HORSES OF THE "); strcat(buf,A_str); strcat(buf,B_str);strcat(buf," KILLED.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02880:
    // 02880 PRINT FNA(K);"OF THE ";A$;B$;" KILLED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,FNA_int_arr[K_int]);strcat(buf,"OF THE "); strcat(buf,A_str); strcat(buf,B_str);strcat(buf," KILLED.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02890:
    // 02890 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02900 GOTO 02910
    goto Lbl_02910;

  Lbl_02910:
    // 02910 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 02920 REM

void Routine_02930(){

  Lbl_02930:
    // 02930 INPUT A$
    // Start of Basic INPUT statement 02930
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02930
    // 02940 IF A$="YES" THEN 2980
    if(strcmp(A_str,"YES")==0)goto Lbl_02980;
    // 02950 IF A$="NO" THEN 3000
    if(strcmp(A_str,"NO")==0)goto Lbl_03000;
    // 02960 PRINT "INCORRECT ANSWER - - PLEASE TYPE 'YES' OR 'NO'."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INCORRECT ANSWER - - PLEASE TYPE 'YES' OR 'NO'.");strcat(buf,"\n");fputs(buf,fh); };
    // 02970 GOTO 2930
    goto Lbl_02930;

  Lbl_02980:
    // 02980 Z1=1
    Z1_int = 1;
    // 02990 GOTO 3010
    goto Lbl_03010;

  Lbl_03000:
    // 03000 Z1=2
    Z1_int = 2;

  Lbl_03010:
    // 03010 GOTO 03020
    goto Lbl_03020;

  Lbl_03020:
    // 03020 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(34);"BULL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,34);strcat(buf,"BULL");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 DEF FNA(K)=INT(RND(1)*2+1)
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01060 L=1
    L_int = 1;
    // 01070 PRINT "DO YOU WANT INSTRUCTIONS";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT INSTRUCTIONS");fputs(buf,fh); };
    // 01080 INPUT Z$
    // Start of Basic INPUT statement 01080
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Z_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01080
    // 01090 IF Z$="NO" THEN 1290
    if(strcmp(Z_str,"NO")==0)goto Lbl_01290;
    // 01100 PRINT "HELLO, ALL YOU BLOODLOVERS AND AFICIONADOS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HELLO, ALL YOU BLOODLOVERS AND AFICIONADOS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "HERE IS YOUR BIG CHANCE TO KILL A BULL."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HERE IS YOUR BIG CHANCE TO KILL A BULL.");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "ON EACH PASS OF THE BULL, YOU MAY TRY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ON EACH PASS OF THE BULL, YOU MAY TRY");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "0 - VERONICA (DANGEROUS INSIDE MOVE OF THE CAPE)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"0 - VERONICA (DANGEROUS INSIDE MOVE OF THE CAPE)");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "1 - LESS DANGEROUS OUTSIDE MOVE OF THE CAPE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1 - LESS DANGEROUS OUTSIDE MOVE OF THE CAPE");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "2 - ORDINARY SWIRL OF THE CAPE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"2 - ORDINARY SWIRL OF THE CAPE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT "INSTEAD OF THE ABOVE, YOU MAY TRY TO KILL THE BULL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INSTEAD OF THE ABOVE, YOU MAY TRY TO KILL THE BULL");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT "ON ANY TURN: 4 (OVER THE HORNS), 5 (IN THE CHEST)."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ON ANY TURN: 4 (OVER THE HORNS), 5 (IN THE CHEST).");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT "BUT IF I WERE YOU,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BUT IF I WERE YOU,");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT "I WOULDN'T TRY IT BEFORE THE SEVENTH PASS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I WOULDN'T TRY IT BEFORE THE SEVENTH PASS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT "THE CROWD WILL DETERMINE WHAT AWARD YOU DESERVE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE CROWD WILL DETERMINE WHAT AWARD YOU DESERVE");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "(POSTHUMOUSLY IF NECESSARY)."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"(POSTHUMOUSLY IF NECESSARY).");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT "THE BRAVER YOU ARE, THE BETTER THE AWARD YOU RECIEVE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE BRAVER YOU ARE, THE BETTER THE AWARD YOU RECIEVE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT "THE BETTER THE JOB THE PICADORES AND TOREADORES DO,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE BETTER THE JOB THE PICADORES AND TOREADORES DO,");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT "THE BETTER YOUR CHANCES ARE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE BETTER YOUR CHANCES ARE.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01290:
    // 01290 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01300 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01310 D(5)=1
    D_int_arr[5] = 1;
    // 01320 D(4)=1
    D_int_arr[4] = 1;
    // 01330 DIM L$(5)
    // 01340 A=INT(RND(1)*5+1)
    A_int = INT(RND(1)*5+1);
    // 01350 FOR I=1 TO 5
    for(I_int=1;I_int<=5;I_int++){
        // 01360 READ L$(I)
        L_str_arr[I_int] = Get_Data_String();
        // 01370 NEXT I
        int dummy_1370=0; // Ignore this line.
    }; // End-For(I_int)
    // 01380 DATA "SUPERB","GOOD","FAIR","POOR","AWFUL"
    // 01390 PRINT "YOU HAVE DRAWN A ";L$(A);" BULL."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE DRAWN A "); strcat(buf,L_str_arr[A_int]);strcat(buf," BULL.");strcat(buf,"\n");fputs(buf,fh); };
    // 01400 IF A>4 THEN 1430
    if(A_int>4)goto Lbl_01430;
    // 01410 IF A<2 THEN 1450
    if(A_int<2)goto Lbl_01450;
    // 01420 GOTO 1470
    goto Lbl_01470;

  Lbl_01430:
    // 01430 PRINT "YOU'RE LUCKY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU'RE LUCKY.");strcat(buf,"\n");fputs(buf,fh); };
    // 01440 GOTO 1470
    goto Lbl_01470;

  Lbl_01450:
    // 01450 PRINT "GOOD LUCK.  YOU'LL NEED IT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD LUCK.  YOU'LL NEED IT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01460 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01470:
    // 01470 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01480 A$="PICADO"
    GLBpStr="PICADO";
    A_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01490 B$="RES"
    GLBpStr="RES";
    B_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01500 GOSUB 2600
    Routine_02600();
    // 01510 D(1)=C
    D_int_arr[1] = C_int;
    // 01520 A$="TOREAD"
    GLBpStr="TOREAD";
    A_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01530 B$="ORES"
    GLBpStr="ORES";
    B_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01540 GOSUB 2600
    Routine_02600();
    // 01550 D(2)=C
    D_int_arr[2] = C_int;

  Lbl_01560:
    // 01560 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01580 IF Z=1 THEN 2250
    if(Z_int==1)goto Lbl_02250;
    // 01590 D(3)=D(3)+1
    D_int_arr[3] = D_int_arr[3]+1;
    // 01600 PRINT "PASS NUMBER";D(3)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PASS NUMBER"); b2c_INT(buf,D_int_arr[3]);strcat(buf,"\n");fputs(buf,fh); };
    // 01610 IF D(3)<3 THEN 1670
    if(D_int_arr[3]<3)goto Lbl_01670;
    // 01620 PRINT "HERE COMES THE BULL.  TRY FOR A KILL";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HERE COMES THE BULL.  TRY FOR A KILL");fputs(buf,fh); };
    // 01630 GOSUB 2930
    Routine_02930();
    // 01640 IF Z1=1 THEN 2060
    if(Z1_int==1)goto Lbl_02060;
    // 01650 PRINT "CAPE MOVE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CAPE MOVE");fputs(buf,fh); };
    // 01660 GOTO 1720
    goto Lbl_01720;

  Lbl_01670:
    // 01670 PRINT "THE BULL IS CHARGING AT YOU!  YOU ARE THE MATADOR--"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE BULL IS CHARGING AT YOU!  YOU ARE THE MATADOR--");strcat(buf,"\n");fputs(buf,fh); };
    // 01680 PRINT "DO YOU WANT TO KILL THE BULL";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WANT TO KILL THE BULL");fputs(buf,fh); };
    // 01690 GOSUB 2930
    Routine_02930();
    // 01700 IF Z1=1 THEN 2060
    if(Z1_int==1)goto Lbl_02060;
    // 01710 PRINT "WHAT MOVE DO YOU MAKE WITH THE CAPE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT MOVE DO YOU MAKE WITH THE CAPE");fputs(buf,fh); };

  Lbl_01720:
    // 01720 INPUT E
    // Start of Basic INPUT statement 01720
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&E_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01720
    // 01730 IF E<>INT(ABS(E)) THEN 1750
    if(E_int!=INT(ABS(E_int)))goto Lbl_01750;
    // 01740 IF E<3 THEN 1770
    if(E_int<3)goto Lbl_01770;

  Lbl_01750:
    // 01750 PRINT "DON'T PANIC, YOU IDIOT!  PUT DOWN A CORRECT NUMBER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DON'T PANIC, YOU IDIOT!  PUT DOWN A CORRECT NUMBER");strcat(buf,"\n");fputs(buf,fh); };
    // 01760 GOTO 1720
    goto Lbl_01720;

  Lbl_01770:
    // 01770 REM
    // 01780 IF E=0 THEN 1840
    if(E_int==0)goto Lbl_01840;
    // 01790 IF E=1 THEN 1820
    if(E_int==1)goto Lbl_01820;
    // 01800 M=.5
    M_int = 0.5;
    // 01810 GOTO 1850
    goto Lbl_01850;

  Lbl_01820:
    // 01820 M=2
    M_int = 2;
    // 01830 GOTO 1850
    goto Lbl_01850;

  Lbl_01840:
    // 01840 M=3
    M_int = 3;

  Lbl_01850:
    // 01850 L=L+M
    L_int = L_int+M_int;
    // 01860 F=(6-A+M/10)*RND(1)/((D(1)+D(2)+D(3)/10)*5)
    F_int = (6-A_int+M_int/10)*RND(1)/((D_int_arr[1]+D_int_arr[2]+D_int_arr[3]/10)*5);
    // 01870 IF F<.51 THEN 1560
    if(F_int<0.51)goto Lbl_01560;

  Lbl_01880:
    // 01880 PRINT "THE BULL HAS GORED YOU!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE BULL HAS GORED YOU!");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01890:
    // 01890 ON FNA(0) GOTO 1900,1930
    switch((int)(FNA_int_arr[0])){
        case 1: goto Lbl_01900;
        case 2: goto Lbl_01930;
        default: break; 
    };

  Lbl_01900:
    // 01900 PRINT "YOU ARE DEAD."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE DEAD.");strcat(buf,"\n");fputs(buf,fh); };
    // 01910 D(4)=1.5
    D_int_arr[4] = 1.5;
    // 01920 GOTO 2250
    goto Lbl_02250;

  Lbl_01930:
    // 01930 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01940 PRINT "DO YOU RUN FROM THE RING";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU RUN FROM THE RING");fputs(buf,fh); };
    // 01950 GOSUB 2930
    Routine_02930();
    // 01960 IF Z1=2 THEN 2000
    if(Z1_int==2)goto Lbl_02000;
    // 01970 PRINT "COWARD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COWARD");strcat(buf,"\n");fputs(buf,fh); };
    // 01980 D(4)=0
    D_int_arr[4] = 0;
    // 01990 GOTO 2250
    goto Lbl_02250;

  Lbl_02000:
    // 02000 PRINT "YOU ARE BRAVE.  STUPID, BUT BRAVE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE BRAVE.  STUPID, BUT BRAVE.");strcat(buf,"\n");fputs(buf,fh); };
    // 02010 ON FNA(0) GOTO 2020,2040
    switch((int)(FNA_int_arr[0])){
        case 1: goto Lbl_02020;
        case 2: goto Lbl_02040;
        default: break; 
    };

  Lbl_02020:
    // 02020 D(4)=2
    D_int_arr[4] = 2;
    // 02030 GOTO 1560
    goto Lbl_01560;

  Lbl_02040:
    // 02040 PRINT "YOU ARE GORED AGAIN!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE GORED AGAIN!");strcat(buf,"\n");fputs(buf,fh); };
    // 02050 GOTO 1890
    goto Lbl_01890;

  Lbl_02060:
    // 02060 REM
    // 02070 Z=1
    Z_int = 1;
    // 02080 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02090 PRINT "IT IS THE MOMENT OF TRUTH."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IT IS THE MOMENT OF TRUTH.");strcat(buf,"\n");fputs(buf,fh); };
    // 02100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02110 PRINT "HOW DO YOU TRY TO KILL THE BULL";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW DO YOU TRY TO KILL THE BULL");fputs(buf,fh); };
    // 02120 INPUT H
    // Start of Basic INPUT statement 02120
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&H_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02120
    // 02130 IF H=4 THEN 2170
    if(H_int==4)goto Lbl_02170;
    // 02140 IF H=5 THEN 2170
    if(H_int==5)goto Lbl_02170;
    // 02150 PRINT "YOU PANICKED.  THE BULL GORED YOU."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU PANICKED.  THE BULL GORED YOU.");strcat(buf,"\n");fputs(buf,fh); };
    // 02160 GOTO 1890
    goto Lbl_01890;

  Lbl_02170:
    // 02170 K=(6-A)*10*RND(1)/((D(1)+D(2))*5*D(3))
    K_int = (6-A_int)*10*RND(1)/((D_int_arr[1]+D_int_arr[2])*5*D_int_arr[3]);
    // 02180 IF J=4 THEN 2230
    if(J_int==4)goto Lbl_02230;
    // 02190 IF K>.2 THEN 1880
    if(K_int>0.2)goto Lbl_01880;

  Lbl_02200:
    // 02200 PRINT "YOU KILLED THE BULL!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU KILLED THE BULL!");strcat(buf,"\n");fputs(buf,fh); };
    // 02210 D(5)=2
    D_int_arr[5] = 2;
    // 02220 GOTO 2260
    goto Lbl_02260;

  Lbl_02230:
    // 02230 IF K>.8 THEN 1880
    if(K_int>0.8)goto Lbl_01880;
    // 02240 GOTO 2200
    goto Lbl_02200;

  Lbl_02250:
    // 02250 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02260:
    // 02260 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02270 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02280 IF D(4)<>0 THEN 2330
    if(D_int_arr[4]!=0)goto Lbl_02330;
    // 02290 PRINT "THE CROWD BOOS FOR TEN MINUTES.  IF YOU EVER DARE TO SHOW"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE CROWD BOOS FOR TEN MINUTES.  IF YOU EVER DARE TO SHOW");strcat(buf,"\n");fputs(buf,fh); };
    // 02300 PRINT "YOUR FACE IN A RING AGAIN, THEY SWEAR THEY WILL KILL YOU--"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR FACE IN A RING AGAIN, THEY SWEAR THEY WILL KILL YOU--");strcat(buf,"\n");fputs(buf,fh); };
    // 02310 PRINT "UNLES THE BULL DOES FIRST."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"UNLES THE BULL DOES FIRST.");strcat(buf,"\n");fputs(buf,fh); };
    // 02320 GOTO 2530
    goto Lbl_02530;

  Lbl_02330:
    // 02330 DEF FND(Q)=(4.5+L/6-(D(1)+D(2))*2.5+4*D(4)+2*D(5)-D(3)^2/120-A)
    // 02340 DEF FNC(Q)=FND(Q)*RND(1)
    // 02350 IF D(4)<>2 THEN 2380
    if(D_int_arr[4]!=2)goto Lbl_02380;
    // 02360 PRINT "THE CROWD CHEERS WILDLY!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE CROWD CHEERS WILDLY!");strcat(buf,"\n");fputs(buf,fh); };
    // 02370 GOTO 2410
    goto Lbl_02410;

  Lbl_02380:
    // 02380 IF D(5)<>2 THEN 2410
    if(D_int_arr[5]!=2)goto Lbl_02410;
    // 02390 PRINT "THE CROWD CHEERS!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE CROWD CHEERS!");strcat(buf,"\n");fputs(buf,fh); };
    // 02400 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02410:
    // 02410 PRINT "THE CROWD AWARDS YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE CROWD AWARDS YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 02420 IF FNC(Q)<2.4 THEN 2520
    if(FNC_int_arr[Q_int]<2.4)goto Lbl_02520;
    // 02430 IF FNC(Q)<4.9 THEN 2500
    if(FNC_int_arr[Q_int]<4.9)goto Lbl_02500;
    // 02440 IF FNC(Q)<7.4 THEN 2470
    if(FNC_int_arr[Q_int]<7.4)goto Lbl_02470;
    // 02450 PRINT "OLE!  YOU ARE 'MUY HOMBRE'!! OLE!  OLE!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OLE!  YOU ARE 'MUY HOMBRE'!! OLE!  OLE!");strcat(buf,"\n");fputs(buf,fh); };
    // 02460 GOTO 2530
    goto Lbl_02530;

  Lbl_02470:
    // 02470 PRINT "BOTH EARS OF THE BULL!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BOTH EARS OF THE BULL!");strcat(buf,"\n");fputs(buf,fh); };
    // 02480 PRINT "OLE!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OLE!");strcat(buf,"\n");fputs(buf,fh); };
    // 02490 GOTO 2530
    goto Lbl_02530;

  Lbl_02500:
    // 02500 PRINT "ONE EAR OF THE BULL."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ONE EAR OF THE BULL.");strcat(buf,"\n");fputs(buf,fh); };
    // 02510 GOTO 2530
    goto Lbl_02530;

  Lbl_02520:
    // 02520 PRINT "NOTHING AT ALL."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"NOTHING AT ALL.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_02530:
    // 02530 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02540 PRINT "ADIOS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ADIOS");strcat(buf,"\n");fputs(buf,fh); };
    // 02550 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02560 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02570 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 02580 GOTO 2590
    goto Lbl_02590;

  Lbl_02590:
    // 02590 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
