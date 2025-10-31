/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/hello.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cb487a7a6d0 ---------A   00002  PRINT TAB(33);"HELLO"
    0x5cb487a7a670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cb487a7c580 ---------A   00006  PRINT: PRINT: PRINT
    0x5cb487a7ca40 ---------A   00010  PRINT "HELLO.  MY NAME IS CREATIVE COMPUTER."
    0x5cb487a7b480 ---------A   00020  PRINT: PRINT: INPUT "WHAT'S YOUR NAME";N$: PRINT
    0x5cb487a7d0a0 ---------A   00030  PRINT "HI THERE, ";N$;", ARE YOU ENJOYING YOURSELF HERE";
    0x5cb487a7b740 ---------A T 00040  INPUT B$: PRINT
    0x5cb487a828c0 ---------A   00050  IF B$="YES" THEN 70
    0x5cb487a82b20 ---------A   00055  IF B$="NO" THEN 80
    0x5cb487a82f40 ---------A   00060  PRINT N$;", I DON'T UNDERSTAND YOUR ANSWER OF '";B$;"'."
    0x5cb487a7cf90 ---------A   00065  PRINT "PLEASE ANSWER 'YES' OR 'NO'.  DO YOU LIKE IT HERE";: GOTO 40
    0x5cb487a834a0 ---------A T 00070  PRINT "I'M GLAD TO HEAR THAT, ";N$;".": PRINT
    0x5cb487a83500 ---------A   00075  GOTO 100
    0x5cb487a83850 ---------A T 00080  PRINT "OH, I'M SORRY TO HEAR THAT, ";N$;". MAYBE WE CAN"
    0x5cb487a83990 ---------A   00085  PRINT "BRIGHTEN UP YOUR VISIT A BIT."
    0x5cb487a83a40 ---------A T 00100  PRINT
    0x5cb487a83df0 ---------A   00105  PRINT "SAY, ";N$;", I CAN SOLVE ALL KINDS OF PROBLEMS EXCEPT"
    0x5cb487a83fa0 ---------A   00110  PRINT "THOSE DEALING WITH GREECE.  WHAT KIND OF PROBLEMS DO"
    0x5cb487a84140 ---------A   00120  PRINT "YOU HAVE (ANSWER SEX, HEALTH, MONEY, OR JOB)";
    0x5cb487a84360 ---------A T 00125  INPUT C$
    0x5cb487a843c0 ---------A   00126  PRINT
    0x5cb487a84650 ---------A   00130  IF C$="SEX" THEN 200
    0x5cb487a848e0 ---------A   00132  IF C$="HEALTH" THEN 180
    0x5cb487a84b70 ---------A   00134  IF C$="MONEY" THEN 160
    0x5cb487a84e20 ---------A   00136  IF C$="JOB" THEN 145
    0x5cb487a85380 ---------A   00138  PRINT "OH, ";N$;", YOUR ANSWER OF ";C$;" IS GREEK TO ME."
    0x5cb487a85430 ---------A   00140  GOTO 250
    0x5cb487a857c0 ---------A T 00145  PRINT "I CAN SYMPATHIZE WITH YOU ";N$;".  I HAVE TO WORK"
    0x5cb487a85970 ---------A   00148  PRINT "VERY LONG HOURS FOR NO PAY -- AND SOME OF MY BOSSES"
    0x5cb487a85d20 ---------A   00150  PRINT "REALLY BEAT ON MY KEYBOARD.  MY ADVICE TO YOU, ";N$;","
    0x5cb487a85ea0 ---------A   00153  PRINT "IS TO OPEN A RETAIL COMPUTER STORE.  IT'S GREAT FUN."
    0x5cb487a85f50 ---------A   00155  GOTO 250
    0x5cb487a862e0 ---------A T 00160  PRINT "SORRY, ";N$;", I'M BROKE TOO.  WHY DON'T YOU SELL"
    0x5cb487a86690 ---------A   00162  PRINT "ENCYCLOPEADIAS OR MARRY SOMEONE RICH OR STOP EATING"
    0x5cb487a86800 ---------A   00164  PRINT "SO YOU WON'T NEED SO MUCH MONEY?"
    0x5cb487a86890 ---------A   00170  GOTO 250
    0x5cb487a86bf0 ---------A T 00180  PRINT "MY ADVICE TO YOU ";N$;" IS:"
    0x5cb487a86d90 ---------A   00185  PRINT "     1.  TAKE TWO ASPRIN"
    0x5cb487a86f30 ---------A   00188  PRINT "     2.  DRINK PLENTY OF FLUIDS (ORANGE JUICE, NOT BEER!)"
    0x5cb487a870a0 ---------A   00190  PRINT "     3.  GO TO BED (ALONE)"
    0x5cb487a87150 ---------A   00195  GOTO 250
    0x5cb487a87410 ---------A T 00200  INPUT "IS YOUR PROBLEM TOO MUCH OR TOO LITTLE";D$: PRINT
    0x5cb487a876a0 ---------A T 00210  IF D$="TOO MUCH" THEN 220
    0x5cb487a87950 ---------A   00212  IF D$="TOO LITTLE" THEN 230
    0x5cb487a87cf0 ---------A   00215  PRINT "DON'T GET ALL SHOOK, ";N$;", JUST ANSWER THE QUESTION"
    0x5cb487a87f20 ---------A   00217  INPUT "WITH 'TOO MUCH' OR 'TOO LITTLE'.  WHICH IS IT";D$:GOTO 210
    0x5cb487a880d0 ---------A T 00220  PRINT "YOU CALL THAT A PROBLEM?!!  I SHOULD HAVE SUCH PROBLEMS!"
    0x5cb487a88430 ---------A   00225  PRINT "IF IT BOTHERS YOU, ";N$;", TAKE A COLD SHOWER."
    0x5cb487a884e0 ---------A   00228  GOTO 250
    0x5cb487a88870 ---------A T 00230  PRINT "WHY ARE YOU HERE IN SUFFERN, ";N$;"?  YOU SHOULD BE"
    0x5cb487a88a10 ---------A   00235  PRINT "IN TOKYO OR NEW YORK OR AMSTERDAM OR SOMEPLACE WITH SOME"
    0x5cb487a88b70 ---------A   00240  PRINT "REAL ACTION."
    0x5cb487a88c10 ---------A T 00250  PRINT
    0x5cb487a88ea0 ---------A T 00255  PRINT "ANY MORE PROBLEMS YOU WANT SOLVED, ";N$;
    0x5cb487a89130 ---------A   00260  INPUT E$: PRINT
    0x5cb487a893b0 ---------A   00270  IF E$="YES" THEN 280
    0x5cb487a89650 ---------A   00273  IF E$="NO" THEN 300
    0x5cb487a899c0 ---------A   00275  PRINT "JUST A SIMPLE 'YES' OR 'NO' PLEASE, ";N$;"."
    0x5cb487a89a60 ---------A   00277  GOTO 255
    0x5cb487a89be0 ---------A T 00280  PRINT "WHAT KIND (SEX, MONEY, HEALTH, JOB)";
    0x5cb487a89c60 ---------A   00282  GOTO 125
    0x5cb487a89cf0 ---------A T 00300  PRINT
    0x5cb487a8a080 ---------A   00302  PRINT "THAT WILL BE $5.00 FOR THE ADVICE, ";N$;"."
    0x5cb487a8a210 ---------A   00305  PRINT "PLEASE LEAVE THE MONEY ON THE TERMINAL."
    0x5cb487a8a6d0 ---------A   00307  FOR I=1 TO 2000: NEXT I
    0x5cb487a8ac40 ---------A   00310  PRINT: PRINT: PRINT
    0x5cb487a8add0 ---------A T 00315  PRINT "DID YOU LEAVE THE MONEY";
    0x5cb487a8b060 ---------A   00320  INPUT G$: PRINT
    0x5cb487a8b2e0 ---------A   00325  IF G$="YES" THEN 350
    0x5cb487a8b590 ---------A   00330  IF G$="NO" THEN 370
    0x5cb487a8bb20 ---------A   00335  PRINT "YOUR ANSWER OF '";G$;"' CONFUSES ME, ";N$;"."
    0x5cb487a8bd10 ---------A   00340  PRINT "PLEASE RESPOND WITH 'YES' OR 'NO'.": GOTO 315
    0x5cb487a8c0a0 ---------A T 00350  PRINT "HEY, ";N$;"??? YOU LEFT NO MONEY AT ALL!"
    0x5cb487a8c240 ---------A   00355  PRINT "YOU ARE CHEATING ME OUT OF MY HARD-EARNED LIVING."
    0x5cb487a8c660 ---------A   00360  PRINT:PRINT "WHAT A RIP OFF, ";N$;"!!!":PRINT
    0x5cb487a8c710 ---------A   00365  GOTO 385
    0x5cb487a8caa0 ---------A T 00370  PRINT "THAT'S HONEST, ";N$;", BUT HOW DO YOU EXPECT"
    0x5cb487a8cc30 ---------A   00375  PRINT "ME TO GO ON WITH MY PSYCHOLOGY STUDIES IF MY PATIENTS"
    0x5cb487a8cdd0 ---------A   00380  PRINT "DON'T PAY THEIR BILLS?"
    0x5cb487a8d2d0 ---------A T 00385  PRINT:PRINT "TAKE A WALK, ";N$;".":PRINT:PRINT:GOTO 999
    0x5cb487a8d620 ----------   00390  PRINT "NICE MEETING YOU, ";N$;", HAVE A NICE DAY."
    0x5cb487a8d6a0 ---------A   00400  REM
    0x5cb487a8d710 ---------A T 00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00040      00065T
     00070      00050T
     00080      00055T
     00100      00075T
     00125      00282T
     00145      00136T
     00160      00134T
     00180      00132T
     00200      00130T
     00210      00217T
     00220      00210T
     00230      00212T
     00250      00140T, 00155T, 00170T, 00195T, 00228T
     00255      00277T
     00280      00270T
     00300      00273T
     00315      00340T
     00350      00325T
     00370      00330T
     00385      00365T
     00999      00385T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5cb487a7a6d0 (00002)   0x5cb487a7a6d0 (00002)   0x5cb487a8d710 (00999)   0x5cb487a8d710 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/hello.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cb487a7a6d0 ---------A   00002  PRINT TAB(33);"HELLO"
    0x5cb487a7a670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cb487a7b2d0 ----------   00006  PRINT
    0x5cb487a7b910 ----------        a PRINT
    0x5cb487a7c580 ---------A        b PRINT
    0x5cb487a7ca40 ---------A   00010  PRINT "HELLO.  MY NAME IS CREATIVE COMPUTER."
    0x5cb487a7caa0 ----------   00020  PRINT
    0x5cb487a7b040 ----------        a PRINT
    0x5cb487a7b0a0 ----------        b INPUT "WHAT'S YOUR NAME";N$
    0x5cb487a7b480 ---------A        c PRINT
    0x5cb487a7d0a0 ---------A   00030  PRINT "HI THERE, ";N$;", ARE YOU ENJOYING YOURSELF HERE";
    0x5cb487a7b6c0 ---------- T 00040  INPUT B$
    0x5cb487a7b740 ---------A T      a PRINT
    0x5cb487a828c0 ---------A   00050  IF B$="YES" THEN 70
    0x5cb487a82b20 ---------A   00055  IF B$="NO" THEN 80
    0x5cb487a82f40 ---------A   00060  PRINT N$;", I DON'T UNDERSTAND YOUR ANSWER OF '";B$;"'."
    0x5cb487a830c0 ----------   00065  PRINT "PLEASE ANSWER 'YES' OR 'NO'.  DO YOU LIKE IT HERE";
    0x5cb487a7cf90 ---------A        a GOTO 40
    0x5cb487a83420 ---------- T 00070  PRINT "I'M GLAD TO HEAR THAT, ";N$;"."
    0x5cb487a834a0 ---------A T      a PRINT
    0x5cb487a83500 ---------A   00075  GOTO 100
    0x5cb487a83850 ---------A T 00080  PRINT "OH, I'M SORRY TO HEAR THAT, ";N$;". MAYBE WE CAN"
    0x5cb487a83990 ---------A   00085  PRINT "BRIGHTEN UP YOUR VISIT A BIT."
    0x5cb487a83a40 ---------A T 00100  PRINT
    0x5cb487a83df0 ---------A   00105  PRINT "SAY, ";N$;", I CAN SOLVE ALL KINDS OF PROBLEMS EXCEPT"
    0x5cb487a83fa0 ---------A   00110  PRINT "THOSE DEALING WITH GREECE.  WHAT KIND OF PROBLEMS DO"
    0x5cb487a84140 ---------A   00120  PRINT "YOU HAVE (ANSWER SEX, HEALTH, MONEY, OR JOB)";
    0x5cb487a84360 ---------A T 00125  INPUT C$
    0x5cb487a843c0 ---------A   00126  PRINT
    0x5cb487a84650 ---------A   00130  IF C$="SEX" THEN 200
    0x5cb487a848e0 ---------A   00132  IF C$="HEALTH" THEN 180
    0x5cb487a84b70 ---------A   00134  IF C$="MONEY" THEN 160
    0x5cb487a84e20 ---------A   00136  IF C$="JOB" THEN 145
    0x5cb487a85380 ---------A   00138  PRINT "OH, ";N$;", YOUR ANSWER OF ";C$;" IS GREEK TO ME."
    0x5cb487a85430 ---------A   00140  GOTO 250
    0x5cb487a857c0 ---------A T 00145  PRINT "I CAN SYMPATHIZE WITH YOU ";N$;".  I HAVE TO WORK"
    0x5cb487a85970 ---------A   00148  PRINT "VERY LONG HOURS FOR NO PAY -- AND SOME OF MY BOSSES"
    0x5cb487a85d20 ---------A   00150  PRINT "REALLY BEAT ON MY KEYBOARD.  MY ADVICE TO YOU, ";N$;","
    0x5cb487a85ea0 ---------A   00153  PRINT "IS TO OPEN A RETAIL COMPUTER STORE.  IT'S GREAT FUN."
    0x5cb487a85f50 ---------A   00155  GOTO 250
    0x5cb487a862e0 ---------A T 00160  PRINT "SORRY, ";N$;", I'M BROKE TOO.  WHY DON'T YOU SELL"
    0x5cb487a86690 ---------A   00162  PRINT "ENCYCLOPEADIAS OR MARRY SOMEONE RICH OR STOP EATING"
    0x5cb487a86800 ---------A   00164  PRINT "SO YOU WON'T NEED SO MUCH MONEY?"
    0x5cb487a86890 ---------A   00170  GOTO 250
    0x5cb487a86bf0 ---------A T 00180  PRINT "MY ADVICE TO YOU ";N$;" IS:"
    0x5cb487a86d90 ---------A   00185  PRINT "     1.  TAKE TWO ASPRIN"
    0x5cb487a86f30 ---------A   00188  PRINT "     2.  DRINK PLENTY OF FLUIDS (ORANGE JUICE, NOT BEER!)"
    0x5cb487a870a0 ---------A   00190  PRINT "     3.  GO TO BED (ALONE)"
    0x5cb487a87150 ---------A   00195  GOTO 250
    0x5cb487a87380 ---------- T 00200  INPUT "IS YOUR PROBLEM TOO MUCH OR TOO LITTLE";D$
    0x5cb487a87410 ---------A T      a PRINT
    0x5cb487a876a0 ---------A T 00210  IF D$="TOO MUCH" THEN 220
    0x5cb487a87950 ---------A   00212  IF D$="TOO LITTLE" THEN 230
    0x5cb487a87cf0 ---------A   00215  PRINT "DON'T GET ALL SHOOK, ";N$;", JUST ANSWER THE QUESTION"
    0x5cb487a87e70 ----------   00217  INPUT "WITH 'TOO MUCH' OR 'TOO LITTLE'.  WHICH IS IT";D$
    0x5cb487a87f20 ---------A        a GOTO 210
    0x5cb487a880d0 ---------A T 00220  PRINT "YOU CALL THAT A PROBLEM?!!  I SHOULD HAVE SUCH PROBLEMS!"
    0x5cb487a88430 ---------A   00225  PRINT "IF IT BOTHERS YOU, ";N$;", TAKE A COLD SHOWER."
    0x5cb487a884e0 ---------A   00228  GOTO 250
    0x5cb487a88870 ---------A T 00230  PRINT "WHY ARE YOU HERE IN SUFFERN, ";N$;"?  YOU SHOULD BE"
    0x5cb487a88a10 ---------A   00235  PRINT "IN TOKYO OR NEW YORK OR AMSTERDAM OR SOMEPLACE WITH SOME"
    0x5cb487a88b70 ---------A   00240  PRINT "REAL ACTION."
    0x5cb487a88c10 ---------A T 00250  PRINT
    0x5cb487a88ea0 ---------A T 00255  PRINT "ANY MORE PROBLEMS YOU WANT SOLVED, ";N$;
    0x5cb487a890a0 ----------   00260  INPUT E$
    0x5cb487a89130 ---------A        a PRINT
    0x5cb487a893b0 ---------A   00270  IF E$="YES" THEN 280
    0x5cb487a89650 ---------A   00273  IF E$="NO" THEN 300
    0x5cb487a899c0 ---------A   00275  PRINT "JUST A SIMPLE 'YES' OR 'NO' PLEASE, ";N$;"."
    0x5cb487a89a60 ---------A   00277  GOTO 255
    0x5cb487a89be0 ---------A T 00280  PRINT "WHAT KIND (SEX, MONEY, HEALTH, JOB)";
    0x5cb487a89c60 ---------A   00282  GOTO 125
    0x5cb487a89cf0 ---------A T 00300  PRINT
    0x5cb487a8a080 ---------A   00302  PRINT "THAT WILL BE $5.00 FOR THE ADVICE, ";N$;"."
    0x5cb487a8a210 ---------A   00305  PRINT "PLEASE LEAVE THE MONEY ON THE TERMINAL."
    0x5cb487a8a590 ----------   00307  FOR I=1 TO 2000
    0x5cb487a8a6d0 ---------A        a NEXT I
    0x5cb487a8ab50 ----------   00310  PRINT
    0x5cb487a8abb0 ----------        a PRINT
    0x5cb487a8ac40 ---------A        b PRINT
    0x5cb487a8add0 ---------A T 00315  PRINT "DID YOU LEAVE THE MONEY";
    0x5cb487a8afd0 ----------   00320  INPUT G$
    0x5cb487a8b060 ---------A        a PRINT
    0x5cb487a8b2e0 ---------A   00325  IF G$="YES" THEN 350
    0x5cb487a8b590 ---------A   00330  IF G$="NO" THEN 370
    0x5cb487a8bb20 ---------A   00335  PRINT "YOUR ANSWER OF '";G$;"' CONFUSES ME, ";N$;"."
    0x5cb487a8bc70 ----------   00340  PRINT "PLEASE RESPOND WITH 'YES' OR 'NO'."
    0x5cb487a8bd10 ---------A        a GOTO 315
    0x5cb487a8c0a0 ---------A T 00350  PRINT "HEY, ";N$;"??? YOU LEFT NO MONEY AT ALL!"
    0x5cb487a8c240 ---------A   00355  PRINT "YOU ARE CHEATING ME OUT OF MY HARD-EARNED LIVING."
    0x5cb487a8c2a0 ----------   00360  PRINT
    0x5cb487a8c5e0 ----------        a PRINT "WHAT A RIP OFF, ";N$;"!!!"
    0x5cb487a8c660 ---------A        b PRINT
    0x5cb487a8c710 ---------A   00365  GOTO 385
    0x5cb487a8caa0 ---------A T 00370  PRINT "THAT'S HONEST, ";N$;", BUT HOW DO YOU EXPECT"
    0x5cb487a8cc30 ---------A   00375  PRINT "ME TO GO ON WITH MY PSYCHOLOGY STUDIES IF MY PATIENTS"
    0x5cb487a8cdd0 ---------A   00380  PRINT "DON'T PAY THEIR BILLS?"
    0x5cb487a8ce30 ---------- T 00385  PRINT
    0x5cb487a8d170 ---------- T      a PRINT "TAKE A WALK, ";N$;"."
    0x5cb487a8d1d0 ---------- T      b PRINT
    0x5cb487a8d230 ---------- T      c PRINT
    0x5cb487a8d2d0 ---------A T      d GOTO 999
    0x5cb487a8d620 ----------   00390  PRINT "NICE MEETING YOU, ";N$;", HAVE A NICE DAY."
    0x5cb487a8d6a0 ---------A   00400  REM
    0x5cb487a8d710 ---------A T 00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/hello.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cb487a7a6d0 ---------A   01000  PRINT TAB(33);"HELLO"
    0x5cb487a7a670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cb487a7b2d0 ----------   01020  PRINT
    0x5cb487a7b910 ----------   01030  PRINT
    0x5cb487a7c580 ---------A   01040  PRINT
    0x5cb487a7ca40 ---------A   01050  PRINT "HELLO.  MY NAME IS CREATIVE COMPUTER."
    0x5cb487a7caa0 ----------   01060  PRINT
    0x5cb487a7b040 ----------   01070  PRINT
    0x5cb487a7b0a0 ----------   01080  INPUT "WHAT'S YOUR NAME";N$
    0x5cb487a7b480 ---------A   01090  PRINT
    0x5cb487a7d0a0 ---------A   01100  PRINT "HI THERE, ";N$;", ARE YOU ENJOYING YOURSELF HERE";
    0x5cb487a7b6c0 ----------   01110  INPUT B$
    0x5cb487a7b740 ---------A   01120  PRINT
    0x5cb487a828c0 ---------A   01130  IF B$="YES" THEN 1190
    0x5cb487a82b20 ---------A   01140  IF B$="NO" THEN 1210
    0x5cb487a82f40 ---------A   01150  PRINT N$;", I DON'T UNDERSTAND YOUR ANSWER OF '";B$;"'."
    0x5cb487a830c0 ----------   01160  PRINT "PLEASE ANSWER 'YES' OR 'NO'.  DO YOU LIKE IT HERE";
    0x5cb487a7cf90 ---------A   01170  GOTO 1120
    0x5cb487a83420 ----------   01180  PRINT "I'M GLAD TO HEAR THAT, ";N$;"."
    0x5cb487a834a0 ---------A   01190  PRINT
    0x5cb487a83500 ---------A   01200  GOTO 1230
    0x5cb487a83850 ---------A   01210  PRINT "OH, I'M SORRY TO HEAR THAT, ";N$;". MAYBE WE CAN"
    0x5cb487a83990 ---------A   01220  PRINT "BRIGHTEN UP YOUR VISIT A BIT."
    0x5cb487a83a40 ---------A   01230  PRINT
    0x5cb487a83df0 ---------A   01240  PRINT "SAY, ";N$;", I CAN SOLVE ALL KINDS OF PROBLEMS EXCEPT"
    0x5cb487a83fa0 ---------A   01250  PRINT "THOSE DEALING WITH GREECE.  WHAT KIND OF PROBLEMS DO"
    0x5cb487a84140 ---------A   01260  PRINT "YOU HAVE (ANSWER SEX, HEALTH, MONEY, OR JOB)";
    0x5cb487a84360 ---------A   01270  INPUT C$
    0x5cb487a843c0 ---------A   01280  PRINT
    0x5cb487a84650 ---------A   01290  IF C$="SEX" THEN 1500
    0x5cb487a848e0 ---------A   01300  IF C$="HEALTH" THEN 1440
    0x5cb487a84b70 ---------A   01310  IF C$="MONEY" THEN 1400
    0x5cb487a84e20 ---------A   01320  IF C$="JOB" THEN 1350
    0x5cb487a85380 ---------A   01330  PRINT "OH, ";N$;", YOUR ANSWER OF ";C$;" IS GREEK TO ME."
    0x5cb487a85430 ---------A   01340  GOTO 1620
    0x5cb487a857c0 ---------A   01350  PRINT "I CAN SYMPATHIZE WITH YOU ";N$;".  I HAVE TO WORK"
    0x5cb487a85970 ---------A   01360  PRINT "VERY LONG HOURS FOR NO PAY -- AND SOME OF MY BOSSES"
    0x5cb487a85d20 ---------A   01370  PRINT "REALLY BEAT ON MY KEYBOARD.  MY ADVICE TO YOU, ";N$;","
    0x5cb487a85ea0 ---------A   01380  PRINT "IS TO OPEN A RETAIL COMPUTER STORE.  IT'S GREAT FUN."
    0x5cb487a85f50 ---------A   01390  GOTO 1620
    0x5cb487a862e0 ---------A   01400  PRINT "SORRY, ";N$;", I'M BROKE TOO.  WHY DON'T YOU SELL"
    0x5cb487a86690 ---------A   01410  PRINT "ENCYCLOPEADIAS OR MARRY SOMEONE RICH OR STOP EATING"
    0x5cb487a86800 ---------A   01420  PRINT "SO YOU WON'T NEED SO MUCH MONEY?"
    0x5cb487a86890 ---------A   01430  GOTO 1620
    0x5cb487a86bf0 ---------A   01440  PRINT "MY ADVICE TO YOU ";N$;" IS:"
    0x5cb487a86d90 ---------A   01450  PRINT "     1.  TAKE TWO ASPRIN"
    0x5cb487a86f30 ---------A   01460  PRINT "     2.  DRINK PLENTY OF FLUIDS (ORANGE JUICE, NOT BEER!)"
    0x5cb487a870a0 ---------A   01470  PRINT "     3.  GO TO BED (ALONE)"
    0x5cb487a87150 ---------A   01480  GOTO 1620
    0x5cb487a87380 ----------   01490  INPUT "IS YOUR PROBLEM TOO MUCH OR TOO LITTLE";D$
    0x5cb487a87410 ---------A   01500  PRINT
    0x5cb487a876a0 ---------A   01510  IF D$="TOO MUCH" THEN 1560
    0x5cb487a87950 ---------A   01520  IF D$="TOO LITTLE" THEN 1590
    0x5cb487a87cf0 ---------A   01530  PRINT "DON'T GET ALL SHOOK, ";N$;", JUST ANSWER THE QUESTION"
    0x5cb487a87e70 ----------   01540  INPUT "WITH 'TOO MUCH' OR 'TOO LITTLE'.  WHICH IS IT";D$
    0x5cb487a87f20 ---------A   01550  GOTO 1510
    0x5cb487a880d0 ---------A   01560  PRINT "YOU CALL THAT A PROBLEM?!!  I SHOULD HAVE SUCH PROBLEMS!"
    0x5cb487a88430 ---------A   01570  PRINT "IF IT BOTHERS YOU, ";N$;", TAKE A COLD SHOWER."
    0x5cb487a884e0 ---------A   01580  GOTO 1620
    0x5cb487a88870 ---------A   01590  PRINT "WHY ARE YOU HERE IN SUFFERN, ";N$;"?  YOU SHOULD BE"
    0x5cb487a88a10 ---------A   01600  PRINT "IN TOKYO OR NEW YORK OR AMSTERDAM OR SOMEPLACE WITH SOME"
    0x5cb487a88b70 ---------A   01610  PRINT "REAL ACTION."
    0x5cb487a88c10 ---------A   01620  PRINT
    0x5cb487a88ea0 ---------A   01630  PRINT "ANY MORE PROBLEMS YOU WANT SOLVED, ";N$;
    0x5cb487a890a0 ----------   01640  INPUT E$
    0x5cb487a89130 ---------A   01650  PRINT
    0x5cb487a893b0 ---------A   01660  IF E$="YES" THEN 1700
    0x5cb487a89650 ---------A   01670  IF E$="NO" THEN 1720
    0x5cb487a899c0 ---------A   01680  PRINT "JUST A SIMPLE 'YES' OR 'NO' PLEASE, ";N$;"."
    0x5cb487a89a60 ---------A   01690  GOTO 1630
    0x5cb487a89be0 ---------A   01700  PRINT "WHAT KIND (SEX, MONEY, HEALTH, JOB)";
    0x5cb487a89c60 ---------A   01710  GOTO 1270
    0x5cb487a89cf0 ---------A   01720  PRINT
    0x5cb487a8a080 ---------A   01730  PRINT "THAT WILL BE $5.00 FOR THE ADVICE, ";N$;"."
    0x5cb487a8a210 ---------A   01740  PRINT "PLEASE LEAVE THE MONEY ON THE TERMINAL."
    0x5cb487a8a590 ----------   01750  FOR I=1 TO 2000
    0x5cb487a8a6d0 ---------A   01760  NEXT I
    0x5cb487a8ab50 ----------   01770  PRINT
    0x5cb487a8abb0 ----------   01780  PRINT
    0x5cb487a8ac40 ---------A   01790  PRINT
    0x5cb487a8add0 ---------A   01800  PRINT "DID YOU LEAVE THE MONEY";
    0x5cb487a8afd0 ----------   01810  INPUT G$
    0x5cb487a8b060 ---------A   01820  PRINT
    0x5cb487a8b2e0 ---------A   01830  IF G$="YES" THEN 1880
    0x5cb487a8b590 ---------A   01840  IF G$="NO" THEN 1940
    0x5cb487a8bb20 ---------A   01850  PRINT "YOUR ANSWER OF '";G$;"' CONFUSES ME, ";N$;"."
    0x5cb487a8bc70 ----------   01860  PRINT "PLEASE RESPOND WITH 'YES' OR 'NO'."
    0x5cb487a8bd10 ---------A   01870  GOTO 1800
    0x5cb487a8c0a0 ---------A   01880  PRINT "HEY, ";N$;"??? YOU LEFT NO MONEY AT ALL!"
    0x5cb487a8c240 ---------A   01890  PRINT "YOU ARE CHEATING ME OUT OF MY HARD-EARNED LIVING."
    0x5cb487a8c2a0 ----------   01900  PRINT
    0x5cb487a8c5e0 ----------   01910  PRINT "WHAT A RIP OFF, ";N$;"!!!"
    0x5cb487a8c660 ---------A   01920  PRINT
    0x5cb487a8c710 ---------A   01930  GOTO 2010
    0x5cb487a8caa0 ---------A   01940  PRINT "THAT'S HONEST, ";N$;", BUT HOW DO YOU EXPECT"
    0x5cb487a8cc30 ---------A   01950  PRINT "ME TO GO ON WITH MY PSYCHOLOGY STUDIES IF MY PATIENTS"
    0x5cb487a8cdd0 ---------A   01960  PRINT "DON'T PAY THEIR BILLS?"
    0x5cb487a8ce30 ----------   01970  PRINT
    0x5cb487a8d170 ----------   01980  PRINT "TAKE A WALK, ";N$;"."
    0x5cb487a8d1d0 ----------   01990  PRINT
    0x5cb487a8d230 ----------   02000  PRINT
    0x5cb487a8d2d0 ---------A   02010  GOTO 2040
    0x5cb487a8d620 ----------   02020  PRINT "NICE MEETING YOU, ";N$;", HAVE A NICE DAY."
    0x5cb487a8d6a0 ---------A   02030  REM
    0x5cb487a8d710 ---------A   02040  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02020 - 10000    7990 

 */



/*
 *  Symbol Table Listing for 'basic/hello.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$                       String      
    C$                       String      
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D$                       String      
    E$                       String      
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G$                       String      
    HEX$            Function String          args=1, int    
    I                        Integer     
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
    N$                       String      
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

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/hello.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5cb487a7a6d0 ---------A   01000  PRINT TAB(33);"HELLO"
    0x5cb487a7a670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5cb487a7b2d0 ---------A   01020  PRINT
    0x5cb487a7b910 ---------A   01030  PRINT
    0x5cb487a7c580 ---------A   01040  PRINT
    0x5cb487a7ca40 ---------A   01050  PRINT "HELLO.  MY NAME IS CREATIVE COMPUTER."
    0x5cb487a7caa0 ---------A   01060  PRINT
    0x5cb487a7b040 ---------A   01070  PRINT
    0x5cb487a7b0a0 ---------A   01080  INPUT "WHAT'S YOUR NAME";N$
    0x5cb487a7b480 ---------A   01090  PRINT
    0x5cb487a7d0a0 ---------A   01100  PRINT "HI THERE, ";N$;", ARE YOU ENJOYING YOURSELF HERE";
    0x5cb487a7b6c0 ---------A   01110  INPUT B$
    0x5cb487a7b740 ---------A T 01120  PRINT
    0x5cb487a828c0 ---------A   01130  IF B$="YES" THEN 1180
    0x5cb487a82b20 ---------A   01140  IF B$="NO" THEN 1200
    0x5cb487a82f40 ---------A   01150  PRINT N$;", I DON'T UNDERSTAND YOUR ANSWER OF '";B$;"'."
    0x5cb487a830c0 ---------A   01160  PRINT "PLEASE ANSWER 'YES' OR 'NO'.  DO YOU LIKE IT HERE";
    0x5cb487a7cf90 ---------A   01170  GOTO 1120
    0x5cb487a834a0 ---------A T 01180  PRINT
    0x5cb487a83500 ---------A   01190  GOTO 1220
    0x5cb487a83850 ---------A T 01200  PRINT "OH, I'M SORRY TO HEAR THAT, ";N$;". MAYBE WE CAN"
    0x5cb487a83990 ---------A   01210  PRINT "BRIGHTEN UP YOUR VISIT A BIT."
    0x5cb487a83a40 ---------A T 01220  PRINT
    0x5cb487a83df0 ---------A   01230  PRINT "SAY, ";N$;", I CAN SOLVE ALL KINDS OF PROBLEMS EXCEPT"
    0x5cb487a83fa0 ---------A   01240  PRINT "THOSE DEALING WITH GREECE.  WHAT KIND OF PROBLEMS DO"
    0x5cb487a84140 ---------A   01250  PRINT "YOU HAVE (ANSWER SEX, HEALTH, MONEY, OR JOB)";
    0x5cb487a84360 ---------A T 01260  INPUT C$
    0x5cb487a843c0 ---------A   01270  PRINT
    0x5cb487a84650 ---------A   01280  IF C$="SEX" THEN 1480
    0x5cb487a848e0 ---------A   01290  IF C$="HEALTH" THEN 1430
    0x5cb487a84b70 ---------A   01300  IF C$="MONEY" THEN 1390
    0x5cb487a84e20 ---------A   01310  IF C$="JOB" THEN 1340
    0x5cb487a85380 ---------A   01320  PRINT "OH, ";N$;", YOUR ANSWER OF ";C$;" IS GREEK TO ME."
    0x5cb487a85430 ---------A   01330  GOTO 1600
    0x5cb487a857c0 ---------A T 01340  PRINT "I CAN SYMPATHIZE WITH YOU ";N$;".  I HAVE TO WORK"
    0x5cb487a85970 ---------A   01350  PRINT "VERY LONG HOURS FOR NO PAY -- AND SOME OF MY BOSSES"
    0x5cb487a85d20 ---------A   01360  PRINT "REALLY BEAT ON MY KEYBOARD.  MY ADVICE TO YOU, ";N$;","
    0x5cb487a85ea0 ---------A   01370  PRINT "IS TO OPEN A RETAIL COMPUTER STORE.  IT'S GREAT FUN."
    0x5cb487a85f50 ---------A   01380  GOTO 1600
    0x5cb487a862e0 ---------A T 01390  PRINT "SORRY, ";N$;", I'M BROKE TOO.  WHY DON'T YOU SELL"
    0x5cb487a86690 ---------A   01400  PRINT "ENCYCLOPEADIAS OR MARRY SOMEONE RICH OR STOP EATING"
    0x5cb487a86800 ---------A   01410  PRINT "SO YOU WON'T NEED SO MUCH MONEY?"
    0x5cb487a86890 ---------A   01420  GOTO 1600
    0x5cb487a86bf0 ---------A T 01430  PRINT "MY ADVICE TO YOU ";N$;" IS:"
    0x5cb487a86d90 ---------A   01440  PRINT "     1.  TAKE TWO ASPRIN"
    0x5cb487a86f30 ---------A   01450  PRINT "     2.  DRINK PLENTY OF FLUIDS (ORANGE JUICE, NOT BEER!)"
    0x5cb487a870a0 ---------A   01460  PRINT "     3.  GO TO BED (ALONE)"
    0x5cb487a87150 ---------A   01470  GOTO 1600
    0x5cb487a87410 ---------A T 01480  PRINT
    0x5cb487a876a0 ---------A T 01490  IF D$="TOO MUCH" THEN 1540
    0x5cb487a87950 ---------A   01500  IF D$="TOO LITTLE" THEN 1570
    0x5cb487a87cf0 ---------A   01510  PRINT "DON'T GET ALL SHOOK, ";N$;", JUST ANSWER THE QUESTION"
    0x5cb487a87e70 ---------A   01520  INPUT "WITH 'TOO MUCH' OR 'TOO LITTLE'.  WHICH IS IT";D$
    0x5cb487a87f20 ---------A   01530  GOTO 1490
    0x5cb487a880d0 ---------A T 01540  PRINT "YOU CALL THAT A PROBLEM?!!  I SHOULD HAVE SUCH PROBLEMS!"
    0x5cb487a88430 ---------A   01550  PRINT "IF IT BOTHERS YOU, ";N$;", TAKE A COLD SHOWER."
    0x5cb487a884e0 ---------A   01560  GOTO 1600
    0x5cb487a88870 ---------A T 01570  PRINT "WHY ARE YOU HERE IN SUFFERN, ";N$;"?  YOU SHOULD BE"
    0x5cb487a88a10 ---------A   01580  PRINT "IN TOKYO OR NEW YORK OR AMSTERDAM OR SOMEPLACE WITH SOME"
    0x5cb487a88b70 ---------A   01590  PRINT "REAL ACTION."
    0x5cb487a88c10 ---------A T 01600  PRINT
    0x5cb487a88ea0 ---------A T 01610  PRINT "ANY MORE PROBLEMS YOU WANT SOLVED, ";N$;
    0x5cb487a890a0 ---------A   01620  INPUT E$
    0x5cb487a89130 ---------A   01630  PRINT
    0x5cb487a893b0 ---------A   01640  IF E$="YES" THEN 1680
    0x5cb487a89650 ---------A   01650  IF E$="NO" THEN 1700
    0x5cb487a899c0 ---------A   01660  PRINT "JUST A SIMPLE 'YES' OR 'NO' PLEASE, ";N$;"."
    0x5cb487a89a60 ---------A   01670  GOTO 1610
    0x5cb487a89be0 ---------A T 01680  PRINT "WHAT KIND (SEX, MONEY, HEALTH, JOB)";
    0x5cb487a89c60 ---------A   01690  GOTO 1260
    0x5cb487a89cf0 ---------A T 01700  PRINT
    0x5cb487a8a080 ---------A   01710  PRINT "THAT WILL BE $5.00 FOR THE ADVICE, ";N$;"."
    0x5cb487a8a210 ---------A   01720  PRINT "PLEASE LEAVE THE MONEY ON THE TERMINAL."
    0x5cb487a8a590 ---------A   01730  FOR I=1 TO 2000
    0x5cb487a8a6d0 ---------A   01740  NEXT I
    0x5cb487a8ab50 ---------A   01750  PRINT
    0x5cb487a8abb0 ---------A   01760  PRINT
    0x5cb487a8ac40 ---------A   01770  PRINT
    0x5cb487a8add0 ---------A T 01780  PRINT "DID YOU LEAVE THE MONEY";
    0x5cb487a8afd0 ---------A   01790  INPUT G$
    0x5cb487a8b060 ---------A   01800  PRINT
    0x5cb487a8b2e0 ---------A   01810  IF G$="YES" THEN 1860
    0x5cb487a8b590 ---------A   01820  IF G$="NO" THEN 1920
    0x5cb487a8bb20 ---------A   01830  PRINT "YOUR ANSWER OF '";G$;"' CONFUSES ME, ";N$;"."
    0x5cb487a8bc70 ---------A   01840  PRINT "PLEASE RESPOND WITH 'YES' OR 'NO'."
    0x5cb487a8bd10 ---------A   01850  GOTO 1780
    0x5cb487a8c0a0 ---------A T 01860  PRINT "HEY, ";N$;"??? YOU LEFT NO MONEY AT ALL!"
    0x5cb487a8c240 ---------A   01870  PRINT "YOU ARE CHEATING ME OUT OF MY HARD-EARNED LIVING."
    0x5cb487a8c2a0 ---------A   01880  PRINT
    0x5cb487a8c5e0 ---------A   01890  PRINT "WHAT A RIP OFF, ";N$;"!!!"
    0x5cb487a8c660 ---------A   01900  PRINT
    0x5cb487a8c710 ---------A   01910  GOTO 1990
    0x5cb487a8caa0 ---------A T 01920  PRINT "THAT'S HONEST, ";N$;", BUT HOW DO YOU EXPECT"
    0x5cb487a8cc30 ---------A   01930  PRINT "ME TO GO ON WITH MY PSYCHOLOGY STUDIES IF MY PATIENTS"
    0x5cb487a8cdd0 ---------A   01940  PRINT "DON'T PAY THEIR BILLS?"
    0x5cb487a8ce30 ---------A   01950  PRINT
    0x5cb487a8d170 ---------A   01960  PRINT "TAKE A WALK, ";N$;"."
    0x5cb487a8d1d0 ---------A   01970  PRINT
    0x5cb487a8d230 ---------A   01980  PRINT
    0x5cb487a8d2d0 ---------A T 01990  GOTO 2010
    0x5cb487a8d6a0 ---------A   02000  REM
    0x5cb487a8d710 ---------A T 02010  END
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
char*  B_str;                                     // Basic: B$ 
char*  C_str;                                     // Basic: C$ 
char*  D_str;                                     // Basic: D$ 
char*  E_str;                                     // Basic: E$ 
char*  G_str;                                     // Basic: G$ 
int    I_int;                                     // Basic: I 
char*  N_str;                                     // Basic: N$ 
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
    // 01000 PRINT TAB(33);"HELLO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"HELLO");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "HELLO.  MY NAME IS CREATIVE COMPUTER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HELLO.  MY NAME IS CREATIVE COMPUTER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01080 INPUT "WHAT'S YOUR NAME";N$
    // Start of Basic INPUT statement 01080
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"WHAT'S YOUR NAME");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&N_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01080
    // 01090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "HI THERE, ";N$;", ARE YOU ENJOYING YOURSELF HERE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HI THERE, "); strcat(buf,N_str);strcat(buf,", ARE YOU ENJOYING YOURSELF HERE");fputs(buf,fh); };
    // 01110 INPUT B$
    // Start of Basic INPUT statement 01110
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&B_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01110

  Lbl_01120:
    // 01120 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01130 IF B$="YES" THEN 1180
    if(strcmp(B_str,"YES")==0)goto Lbl_01180;
    // 01140 IF B$="NO" THEN 1200
    if(strcmp(B_str,"NO")==0)goto Lbl_01200;
    // 01150 PRINT N$;", I DON'T UNDERSTAND YOUR ANSWER OF '";B$;"'."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,N_str);strcat(buf,", I DON'T UNDERSTAND YOUR ANSWER OF '"); strcat(buf,B_str);strcat(buf,"'.");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "PLEASE ANSWER 'YES' OR 'NO'.  DO YOU LIKE IT HERE";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE ANSWER 'YES' OR 'NO'.  DO YOU LIKE IT HERE");fputs(buf,fh); };
    // 01170 GOTO 1120
    goto Lbl_01120;

  Lbl_01180:
    // 01180 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01190 GOTO 1220
    goto Lbl_01220;

  Lbl_01200:
    // 01200 PRINT "OH, I'M SORRY TO HEAR THAT, ";N$;". MAYBE WE CAN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OH, I'M SORRY TO HEAR THAT, "); strcat(buf,N_str);strcat(buf,". MAYBE WE CAN");strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT "BRIGHTEN UP YOUR VISIT A BIT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BRIGHTEN UP YOUR VISIT A BIT.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01220:
    // 01220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT "SAY, ";N$;", I CAN SOLVE ALL KINDS OF PROBLEMS EXCEPT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SAY, "); strcat(buf,N_str);strcat(buf,", I CAN SOLVE ALL KINDS OF PROBLEMS EXCEPT");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "THOSE DEALING WITH GREECE.  WHAT KIND OF PROBLEMS DO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THOSE DEALING WITH GREECE.  WHAT KIND OF PROBLEMS DO");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT "YOU HAVE (ANSWER SEX, HEALTH, MONEY, OR JOB)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE (ANSWER SEX, HEALTH, MONEY, OR JOB)");fputs(buf,fh); };

  Lbl_01260:
    // 01260 INPUT C$
    // Start of Basic INPUT statement 01260
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
    }; // End of Basic INPUT statement 01260
    // 01270 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01280 IF C$="SEX" THEN 1480
    if(strcmp(C_str,"SEX")==0)goto Lbl_01480;
    // 01290 IF C$="HEALTH" THEN 1430
    if(strcmp(C_str,"HEALTH")==0)goto Lbl_01430;
    // 01300 IF C$="MONEY" THEN 1390
    if(strcmp(C_str,"MONEY")==0)goto Lbl_01390;
    // 01310 IF C$="JOB" THEN 1340
    if(strcmp(C_str,"JOB")==0)goto Lbl_01340;
    // 01320 PRINT "OH, ";N$;", YOUR ANSWER OF ";C$;" IS GREEK TO ME."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"OH, "); strcat(buf,N_str);strcat(buf,", YOUR ANSWER OF "); strcat(buf,C_str);strcat(buf," IS GREEK TO ME.");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 GOTO 1600
    goto Lbl_01600;

  Lbl_01340:
    // 01340 PRINT "I CAN SYMPATHIZE WITH YOU ";N$;".  I HAVE TO WORK"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I CAN SYMPATHIZE WITH YOU "); strcat(buf,N_str);strcat(buf,".  I HAVE TO WORK");strcat(buf,"\n");fputs(buf,fh); };
    // 01350 PRINT "VERY LONG HOURS FOR NO PAY -- AND SOME OF MY BOSSES"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"VERY LONG HOURS FOR NO PAY -- AND SOME OF MY BOSSES");strcat(buf,"\n");fputs(buf,fh); };
    // 01360 PRINT "REALLY BEAT ON MY KEYBOARD.  MY ADVICE TO YOU, ";N$;","
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"REALLY BEAT ON MY KEYBOARD.  MY ADVICE TO YOU, "); strcat(buf,N_str);strcat(buf,",");strcat(buf,"\n");fputs(buf,fh); };
    // 01370 PRINT "IS TO OPEN A RETAIL COMPUTER STORE.  IT'S GREAT FUN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IS TO OPEN A RETAIL COMPUTER STORE.  IT'S GREAT FUN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01380 GOTO 1600
    goto Lbl_01600;

  Lbl_01390:
    // 01390 PRINT "SORRY, ";N$;", I'M BROKE TOO.  WHY DON'T YOU SELL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SORRY, "); strcat(buf,N_str);strcat(buf,", I'M BROKE TOO.  WHY DON'T YOU SELL");strcat(buf,"\n");fputs(buf,fh); };
    // 01400 PRINT "ENCYCLOPEADIAS OR MARRY SOMEONE RICH OR STOP EATING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ENCYCLOPEADIAS OR MARRY SOMEONE RICH OR STOP EATING");strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT "SO YOU WON'T NEED SO MUCH MONEY?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SO YOU WON'T NEED SO MUCH MONEY?");strcat(buf,"\n");fputs(buf,fh); };
    // 01420 GOTO 1600
    goto Lbl_01600;

  Lbl_01430:
    // 01430 PRINT "MY ADVICE TO YOU ";N$;" IS:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MY ADVICE TO YOU "); strcat(buf,N_str);strcat(buf," IS:");strcat(buf,"\n");fputs(buf,fh); };
    // 01440 PRINT "     1.  TAKE TWO ASPRIN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     1.  TAKE TWO ASPRIN");strcat(buf,"\n");fputs(buf,fh); };
    // 01450 PRINT "     2.  DRINK PLENTY OF FLUIDS (ORANGE JUICE, NOT BEER!)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     2.  DRINK PLENTY OF FLUIDS (ORANGE JUICE, NOT BEER!)");strcat(buf,"\n");fputs(buf,fh); };
    // 01460 PRINT "     3.  GO TO BED (ALONE)"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     3.  GO TO BED (ALONE)");strcat(buf,"\n");fputs(buf,fh); };
    // 01470 GOTO 1600
    goto Lbl_01600;

  Lbl_01480:
    // 01480 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01490:
    // 01490 IF D$="TOO MUCH" THEN 1540
    if(strcmp(D_str,"TOO MUCH")==0)goto Lbl_01540;
    // 01500 IF D$="TOO LITTLE" THEN 1570
    if(strcmp(D_str,"TOO LITTLE")==0)goto Lbl_01570;
    // 01510 PRINT "DON'T GET ALL SHOOK, ";N$;", JUST ANSWER THE QUESTION"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DON'T GET ALL SHOOK, "); strcat(buf,N_str);strcat(buf,", JUST ANSWER THE QUESTION");strcat(buf,"\n");fputs(buf,fh); };
    // 01520 INPUT "WITH 'TOO MUCH' OR 'TOO LITTLE'.  WHICH IS IT";D$
    // Start of Basic INPUT statement 01520
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"WITH 'TOO MUCH' OR 'TOO LITTLE'.  WHICH IS IT");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&D_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01520
    // 01530 GOTO 1490
    goto Lbl_01490;

  Lbl_01540:
    // 01540 PRINT "YOU CALL THAT A PROBLEM?!!  I SHOULD HAVE SUCH PROBLEMS!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU CALL THAT A PROBLEM?!!  I SHOULD HAVE SUCH PROBLEMS!");strcat(buf,"\n");fputs(buf,fh); };
    // 01550 PRINT "IF IT BOTHERS YOU, ";N$;", TAKE A COLD SHOWER."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF IT BOTHERS YOU, "); strcat(buf,N_str);strcat(buf,", TAKE A COLD SHOWER.");strcat(buf,"\n");fputs(buf,fh); };
    // 01560 GOTO 1600
    goto Lbl_01600;

  Lbl_01570:
    // 01570 PRINT "WHY ARE YOU HERE IN SUFFERN, ";N$;"?  YOU SHOULD BE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHY ARE YOU HERE IN SUFFERN, "); strcat(buf,N_str);strcat(buf,"?  YOU SHOULD BE");strcat(buf,"\n");fputs(buf,fh); };
    // 01580 PRINT "IN TOKYO OR NEW YORK OR AMSTERDAM OR SOMEPLACE WITH SOME"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IN TOKYO OR NEW YORK OR AMSTERDAM OR SOMEPLACE WITH SOME");strcat(buf,"\n");fputs(buf,fh); };
    // 01590 PRINT "REAL ACTION."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"REAL ACTION.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01600:
    // 01600 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01610:
    // 01610 PRINT "ANY MORE PROBLEMS YOU WANT SOLVED, ";N$;
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ANY MORE PROBLEMS YOU WANT SOLVED, "); strcat(buf,N_str);fputs(buf,fh); };
    // 01620 INPUT E$
    // Start of Basic INPUT statement 01620
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&E_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01620
    // 01630 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01640 IF E$="YES" THEN 1680
    if(strcmp(E_str,"YES")==0)goto Lbl_01680;
    // 01650 IF E$="NO" THEN 1700
    if(strcmp(E_str,"NO")==0)goto Lbl_01700;
    // 01660 PRINT "JUST A SIMPLE 'YES' OR 'NO' PLEASE, ";N$;"."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"JUST A SIMPLE 'YES' OR 'NO' PLEASE, "); strcat(buf,N_str);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 01670 GOTO 1610
    goto Lbl_01610;

  Lbl_01680:
    // 01680 PRINT "WHAT KIND (SEX, MONEY, HEALTH, JOB)";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT KIND (SEX, MONEY, HEALTH, JOB)");fputs(buf,fh); };
    // 01690 GOTO 1260
    goto Lbl_01260;

  Lbl_01700:
    // 01700 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01710 PRINT "THAT WILL BE $5.00 FOR THE ADVICE, ";N$;"."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THAT WILL BE $5.00 FOR THE ADVICE, "); strcat(buf,N_str);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 01720 PRINT "PLEASE LEAVE THE MONEY ON THE TERMINAL."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE LEAVE THE MONEY ON THE TERMINAL.");strcat(buf,"\n");fputs(buf,fh); };
    // 01730 FOR I=1 TO 2000
    for(I_int=1;I_int<=2000;I_int++){
        // 01740 NEXT I
        int dummy_1740=0; // Ignore this line.
    }; // End-For(I_int)
    // 01750 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01760 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01770 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01780:
    // 01780 PRINT "DID YOU LEAVE THE MONEY";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DID YOU LEAVE THE MONEY");fputs(buf,fh); };
    // 01790 INPUT G$
    // Start of Basic INPUT statement 01790
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&G_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01790
    // 01800 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01810 IF G$="YES" THEN 1860
    if(strcmp(G_str,"YES")==0)goto Lbl_01860;
    // 01820 IF G$="NO" THEN 1920
    if(strcmp(G_str,"NO")==0)goto Lbl_01920;
    // 01830 PRINT "YOUR ANSWER OF '";G$;"' CONFUSES ME, ";N$;"."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR ANSWER OF '"); strcat(buf,G_str);strcat(buf,"' CONFUSES ME, "); strcat(buf,N_str);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 01840 PRINT "PLEASE RESPOND WITH 'YES' OR 'NO'."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLEASE RESPOND WITH 'YES' OR 'NO'.");strcat(buf,"\n");fputs(buf,fh); };
    // 01850 GOTO 1780
    goto Lbl_01780;

  Lbl_01860:
    // 01860 PRINT "HEY, ";N$;"??? YOU LEFT NO MONEY AT ALL!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HEY, "); strcat(buf,N_str);strcat(buf,"??? YOU LEFT NO MONEY AT ALL!");strcat(buf,"\n");fputs(buf,fh); };
    // 01870 PRINT "YOU ARE CHEATING ME OUT OF MY HARD-EARNED LIVING."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE CHEATING ME OUT OF MY HARD-EARNED LIVING.");strcat(buf,"\n");fputs(buf,fh); };
    // 01880 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01890 PRINT "WHAT A RIP OFF, ";N$;"!!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHAT A RIP OFF, "); strcat(buf,N_str);strcat(buf,"!!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01900 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01910 GOTO 1990
    goto Lbl_01990;

  Lbl_01920:
    // 01920 PRINT "THAT'S HONEST, ";N$;", BUT HOW DO YOU EXPECT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THAT'S HONEST, "); strcat(buf,N_str);strcat(buf,", BUT HOW DO YOU EXPECT");strcat(buf,"\n");fputs(buf,fh); };
    // 01930 PRINT "ME TO GO ON WITH MY PSYCHOLOGY STUDIES IF MY PATIENTS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ME TO GO ON WITH MY PSYCHOLOGY STUDIES IF MY PATIENTS");strcat(buf,"\n");fputs(buf,fh); };
    // 01940 PRINT "DON'T PAY THEIR BILLS?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DON'T PAY THEIR BILLS?");strcat(buf,"\n");fputs(buf,fh); };
    // 01950 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01960 PRINT "TAKE A WALK, ";N$;"."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TAKE A WALK, "); strcat(buf,N_str);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 01970 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01980 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01990:
    // 01990 GOTO 2010
    goto Lbl_02010;
    // 02000 REM

  Lbl_02010:
    // 02010 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
