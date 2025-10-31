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
    0x6380ba4096d0 ---------A   00002  PRINT TAB(33);"ORBIT"
    0x6380ba409670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6380ba3fa2b0 ---------A   00006  PRINT:PRINT:PRINT
    0x6380ba40b1b0 ---------A   00010  PRINT "SOMEWHERE ABOVE YOUR PLANET IS A ROMULAN SHIP."
    0x6380ba40ba80 ---------A   00015  PRINT
    0x6380ba409e40 ---------A   00020  PRINT "THE SHIP IS IN A CONSTANT POLAR ORBIT.  ITS"
    0x6380ba40a480 ---------A   00025  PRINT "DISTANCE FROM THE CENTER OF YOUR PLANET IS FROM"
    0x6380ba40b6d0 ---------A   00030  PRINT "10,000 TO 30,000 MILES AND AT ITS PRESENT VELOCITY CAN"
    0x6380ba40c0a0 ---------A   00031  PRINT "CIRCLE YOUR PLANET ONCE EVERY 12 TO 36 HOURS."
    0x6380ba40c100 ---------A   00035  PRINT
    0x6380ba40a6b0 ---------A   00040  PRINT "UNFORTUNATELY, THEY ARE USING A CLOAKING DEVICE SO"
    0x6380ba40a860 ---------A   00045  PRINT "YOU ARE UNABLE TO SEE THEM, BUT WITH A SPECIAL"
    0x6380ba411990 ---------A   00050  PRINT "INSTRUMENT YOU CAN TELL HOW NEAR THEIR SHIP YOUR"
    0x6380ba411b50 ---------A   00055  PRINT "PHOTON BOMB EXPLODED.  YOU HAVE SEVEN HOURS UNTIL THEY"
    0x6380ba411cb0 ---------A   00060  PRINT "HAVE BUILT UP SUFFICIENT POWER IN ORDER TO ESCAPE"
    0x6380ba411dd0 ---------A   00065  PRINT "YOUR PLANET'S GRAVITY."
    0x6380ba411e80 ---------A   00070  PRINT
    0x6380ba411ff0 ---------A   00075  PRINT "YOUR PLANET HAS ENOUGH POWER TO FIRE ONE BOMB AN HOUR."
    0x6380ba4120a0 ---------A   00080  PRINT
    0x6380ba412260 ---------A   00085  PRINT "AT THE BEGINNING OF EACH HOUR YOU WILL BE ASKED TO GIVE AN"
    0x6380ba412410 ---------A   00090  PRINT "ANGLE (BETWEEN 0 AND 360) AND A DISTANCE IN UNITS OF"
    0x6380ba4125c0 ---------A   00095  PRINT "100 MILES (BETWEEN 100 AND 300), AFTER WHICH YOUR BOMB'S"
    0x6380ba412720 ---------A   00100  PRINT "DISTANCE FROM THE ENEMY SHIP WILL BE GIVEN."
    0x6380ba4127d0 ---------A   00105  PRINT
    0x6380ba412930 ---------A   00110  PRINT "AN EXPLOSION WITHIN 5,000 MILES OF THE ROMULAN SHIP"
    0x6380ba412a50 ---------A   00111  PRINT "WILL DESTROY IT."
    0x6380ba412b00 ---------A   00114  PRINT
    0x6380ba412c60 ---------A   00115  PRINT "BELOW IS A DIAGRAM TO HELP YOU VISUALIZE YOUR PLIGHT."
    0x6380ba412cc0 ---------A   00116  PRINT
    0x6380ba412d60 ---------A   00117  PRINT
    0x6380ba412ec0 ---------A   00168  PRINT "                          90"
    0x6380ba413020 ---------A   00170  PRINT "                    0000000000000"
    0x6380ba413180 ---------A   00171  PRINT "                 0000000000000000000"
    0x6380ba413530 ---------A   00172  PRINT "               000000           000000"
    0x6380ba4136d0 ---------A   00173  PRINT "             00000                 00000"
    0x6380ba413870 ---------A   00174  PRINT "            00000    XXXXXXXXXXX    00000"
    0x6380ba413a10 ---------A   00175  PRINT "           00000    XXXXXXXXXXXXX    00000"
    0x6380ba413bc0 ---------A   00176  PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    0x6380ba413d70 ---------A   00177  PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    0x6380ba413f20 ---------A   00178  PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    0x6380ba4140d0 ---------A   00179  PRINT "180<== 00000     XXXXXXXXXXXXXXXXXXX     00000 ==>0"
    0x6380ba414280 ---------A   00180  PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    0x6380ba414420 ---------A   00181  PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    0x6380ba4145c0 ---------A   00182  PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    0x6380ba414760 ---------A   00183  PRINT "           00000    XXXXXXXXXXXXX    00000"
    0x6380ba414900 ---------A   00184  PRINT "            00000    XXXXXXXXXXX    00000"
    0x6380ba414aa0 ---------A   00185  PRINT "             00000                 00000"
    0x6380ba414c40 ---------A   00186  PRINT "               000000           000000"
    0x6380ba414da0 ---------A   00187  PRINT "                 0000000000000000000"
    0x6380ba414f30 ---------A   00188  PRINT "                    0000000000000"
    0x6380ba4150a0 ---------A   00190  PRINT "                         270"
    0x6380ba415130 ---------A   00192  PRINT
    0x6380ba4152b0 ---------A   00195  PRINT "X - YOUR PLANET"
    0x6380ba415420 ---------A   00196  PRINT "O - THE ORBIT OF THE ROMULAN SHIP"
    0x6380ba4154d0 ---------A   00197  PRINT
    0x6380ba415680 ---------A   00198  PRINT "ON THE ABOVE DIAGRAM, THE ROMULAN SHIP IS CIRCLING"
    0x6380ba415840 ---------A   00199  PRINT "COUNTERCLOCKWISE AROUND YOUR PLANET.  DON'T FORGET THAT"
    0x6380ba4159e0 ---------A   00200  PRINT "WITHOUT SUFFICIENT POWER THE ROMULAN SHIP'S ALTITUDE"
    0x6380ba415b60 ---------A   00210  PRINT "AND ORBITAL RATE WILL REMAIN CONSTANT."
    0x6380ba415c10 ---------A   00220  PRINT 
    0x6380ba415d90 ---------A   00230  PRINT "GOOD LUCK.  THE FEDERATION IS COUNTING ON YOU."
    0x6380ba416340 ---------A T 00270  A=INT(360*RND(1))
    0x6380ba4169d0 ---------A   00280  D=INT(200*RND(1)+200)
    0x6380ba417060 ---------A   00290  R=INT(20*RND(1)+10)
    0x6380ba417330 ---------A   00300  H=0
    0x6380ba417990 ---------A T 00310  IF H=7 THEN 490
    0x6380ba417cd0 ---------A   00320  H=H+1
    0x6380ba417d40 ---------A   00325  PRINT
    0x6380ba417df0 ---------A   00326  PRINT
    0x6380ba418170 ---------A   00330  PRINT "THIS IS HOUR";H;", AT WHAT ANGLE DO YOU WISH TO SEND"
    0x6380ba4182f0 ---------A   00335  PRINT "YOUR PHOTON BOMB";
    0x6380ba418530 ---------A   00340  INPUT A1
    0x6380ba4186d0 ---------A   00350  PRINT "HOW FAR OUT DO YOU WISH TO DETONATE IT";
    0x6380ba4188f0 ---------A   00360  INPUT D1
    0x6380ba418970 ---------A   00365  PRINT
    0x6380ba4189f0 ---------A   00366  PRINT
    0x6380ba418d50 ---------A   00370  A=A+R
    0x6380ba418fa0 ---------A   00380  IF A<360 THEN 400
    0x6380ba4192e0 ---------A   00390  A=A-360
    0x6380ba4197d0 ---------A T 00400  T=ABS(A-A1)
    0x6380ba419a20 ---------A   00410  IF T<180 THEN 430
    0x6380ba419d80 ---------A   00420  T=360-T
    0x6380ba41ac20 ---------A T 00430  C=SQR(D*D+D1*D1-2*D*D1*COS(T*3.14159/180))
    0x6380ba41af90 ---------A   00440  PRINT "YOUR PHOTON BOMB EXPLODED";C;"*10^2 MILES FROM THE"
    0x6380ba41b0f0 ---------A   00445  PRINT "ROMULAN SHIP."
    0x6380ba41b350 ---------A   00450  IF C<=50 THEN 470
    0x6380ba41b400 ---------A   00460  GOTO 310
    0x6380ba41b570 ---------A T 00470  PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR MISSION."
    0x6380ba41b610 ---------A   00480  GOTO 500
    0x6380ba41b7a0 ---------A T 00490  PRINT "YOU HAVE ALLOWED THE ROMULANS TO ESCAPE."
    0x6380ba41b940 ---------A T 00500  PRINT "ANOTHER ROMULAN SHIP HAS GONE INTO ORBIT."
    0x6380ba41bad0 ---------A   00510  PRINT "DO YOU WISH TO TRY TO DESTROY IT";
    0x6380ba41bd00 ---------A   00520  INPUT C$
    0x6380ba41bf80 ---------A   00530  IF C$="YES" THEN 270
    0x6380ba41c0e0 ---------A   00540  PRINT "GOOD BYE."
    0x6380ba41c140 ---------A   00999  END
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
   A) 0x6380ba4096d0 (00002)   0x6380ba4096d0 (00002)   0x6380ba41c140 (00999)   0x6380ba41c140 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/orbit.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6380ba4096d0 ---------A   00002  PRINT TAB(33);"ORBIT"
    0x6380ba409670 ---------A   00004  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6380ba40a2d0 ----------   00006  PRINT
    0x6380ba40a910 ----------        a PRINT
    0x6380ba3fa2b0 ---------A        b PRINT
    0x6380ba40b1b0 ---------A   00010  PRINT "SOMEWHERE ABOVE YOUR PLANET IS A ROMULAN SHIP."
    0x6380ba40ba80 ---------A   00015  PRINT
    0x6380ba409e40 ---------A   00020  PRINT "THE SHIP IS IN A CONSTANT POLAR ORBIT.  ITS"
    0x6380ba40a480 ---------A   00025  PRINT "DISTANCE FROM THE CENTER OF YOUR PLANET IS FROM"
    0x6380ba40b6d0 ---------A   00030  PRINT "10,000 TO 30,000 MILES AND AT ITS PRESENT VELOCITY CAN"
    0x6380ba40c0a0 ---------A   00031  PRINT "CIRCLE YOUR PLANET ONCE EVERY 12 TO 36 HOURS."
    0x6380ba40c100 ---------A   00035  PRINT
    0x6380ba40a6b0 ---------A   00040  PRINT "UNFORTUNATELY, THEY ARE USING A CLOAKING DEVICE SO"
    0x6380ba40a860 ---------A   00045  PRINT "YOU ARE UNABLE TO SEE THEM, BUT WITH A SPECIAL"
    0x6380ba411990 ---------A   00050  PRINT "INSTRUMENT YOU CAN TELL HOW NEAR THEIR SHIP YOUR"
    0x6380ba411b50 ---------A   00055  PRINT "PHOTON BOMB EXPLODED.  YOU HAVE SEVEN HOURS UNTIL THEY"
    0x6380ba411cb0 ---------A   00060  PRINT "HAVE BUILT UP SUFFICIENT POWER IN ORDER TO ESCAPE"
    0x6380ba411dd0 ---------A   00065  PRINT "YOUR PLANET'S GRAVITY."
    0x6380ba411e80 ---------A   00070  PRINT
    0x6380ba411ff0 ---------A   00075  PRINT "YOUR PLANET HAS ENOUGH POWER TO FIRE ONE BOMB AN HOUR."
    0x6380ba4120a0 ---------A   00080  PRINT
    0x6380ba412260 ---------A   00085  PRINT "AT THE BEGINNING OF EACH HOUR YOU WILL BE ASKED TO GIVE AN"
    0x6380ba412410 ---------A   00090  PRINT "ANGLE (BETWEEN 0 AND 360) AND A DISTANCE IN UNITS OF"
    0x6380ba4125c0 ---------A   00095  PRINT "100 MILES (BETWEEN 100 AND 300), AFTER WHICH YOUR BOMB'S"
    0x6380ba412720 ---------A   00100  PRINT "DISTANCE FROM THE ENEMY SHIP WILL BE GIVEN."
    0x6380ba4127d0 ---------A   00105  PRINT
    0x6380ba412930 ---------A   00110  PRINT "AN EXPLOSION WITHIN 5,000 MILES OF THE ROMULAN SHIP"
    0x6380ba412a50 ---------A   00111  PRINT "WILL DESTROY IT."
    0x6380ba412b00 ---------A   00114  PRINT
    0x6380ba412c60 ---------A   00115  PRINT "BELOW IS A DIAGRAM TO HELP YOU VISUALIZE YOUR PLIGHT."
    0x6380ba412cc0 ---------A   00116  PRINT
    0x6380ba412d60 ---------A   00117  PRINT
    0x6380ba412ec0 ---------A   00168  PRINT "                          90"
    0x6380ba413020 ---------A   00170  PRINT "                    0000000000000"
    0x6380ba413180 ---------A   00171  PRINT "                 0000000000000000000"
    0x6380ba413530 ---------A   00172  PRINT "               000000           000000"
    0x6380ba4136d0 ---------A   00173  PRINT "             00000                 00000"
    0x6380ba413870 ---------A   00174  PRINT "            00000    XXXXXXXXXXX    00000"
    0x6380ba413a10 ---------A   00175  PRINT "           00000    XXXXXXXXXXXXX    00000"
    0x6380ba413bc0 ---------A   00176  PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    0x6380ba413d70 ---------A   00177  PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    0x6380ba413f20 ---------A   00178  PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    0x6380ba4140d0 ---------A   00179  PRINT "180<== 00000     XXXXXXXXXXXXXXXXXXX     00000 ==>0"
    0x6380ba414280 ---------A   00180  PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    0x6380ba414420 ---------A   00181  PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    0x6380ba4145c0 ---------A   00182  PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    0x6380ba414760 ---------A   00183  PRINT "           00000    XXXXXXXXXXXXX    00000"
    0x6380ba414900 ---------A   00184  PRINT "            00000    XXXXXXXXXXX    00000"
    0x6380ba414aa0 ---------A   00185  PRINT "             00000                 00000"
    0x6380ba414c40 ---------A   00186  PRINT "               000000           000000"
    0x6380ba414da0 ---------A   00187  PRINT "                 0000000000000000000"
    0x6380ba414f30 ---------A   00188  PRINT "                    0000000000000"
    0x6380ba4150a0 ---------A   00190  PRINT "                         270"
    0x6380ba415130 ---------A   00192  PRINT
    0x6380ba4152b0 ---------A   00195  PRINT "X - YOUR PLANET"
    0x6380ba415420 ---------A   00196  PRINT "O - THE ORBIT OF THE ROMULAN SHIP"
    0x6380ba4154d0 ---------A   00197  PRINT
    0x6380ba415680 ---------A   00198  PRINT "ON THE ABOVE DIAGRAM, THE ROMULAN SHIP IS CIRCLING"
    0x6380ba415840 ---------A   00199  PRINT "COUNTERCLOCKWISE AROUND YOUR PLANET.  DON'T FORGET THAT"
    0x6380ba4159e0 ---------A   00200  PRINT "WITHOUT SUFFICIENT POWER THE ROMULAN SHIP'S ALTITUDE"
    0x6380ba415b60 ---------A   00210  PRINT "AND ORBITAL RATE WILL REMAIN CONSTANT."
    0x6380ba415c10 ---------A   00220  PRINT 
    0x6380ba415d90 ---------A   00230  PRINT "GOOD LUCK.  THE FEDERATION IS COUNTING ON YOU."
    0x6380ba416340 ---------A T 00270  A=INT(360*RND(1))
    0x6380ba4169d0 ---------A   00280  D=INT(200*RND(1)+200)
    0x6380ba417060 ---------A   00290  R=INT(20*RND(1)+10)
    0x6380ba417330 ---------A   00300  H=0
    0x6380ba417990 ---------A T 00310  IF H=7 THEN 490
    0x6380ba417cd0 ---------A   00320  H=H+1
    0x6380ba417d40 ---------A   00325  PRINT
    0x6380ba417df0 ---------A   00326  PRINT
    0x6380ba418170 ---------A   00330  PRINT "THIS IS HOUR";H;", AT WHAT ANGLE DO YOU WISH TO SEND"
    0x6380ba4182f0 ---------A   00335  PRINT "YOUR PHOTON BOMB";
    0x6380ba418530 ---------A   00340  INPUT A1
    0x6380ba4186d0 ---------A   00350  PRINT "HOW FAR OUT DO YOU WISH TO DETONATE IT";
    0x6380ba4188f0 ---------A   00360  INPUT D1
    0x6380ba418970 ---------A   00365  PRINT
    0x6380ba4189f0 ---------A   00366  PRINT
    0x6380ba418d50 ---------A   00370  A=A+R
    0x6380ba418fa0 ---------A   00380  IF A<360 THEN 400
    0x6380ba4192e0 ---------A   00390  A=A-360
    0x6380ba4197d0 ---------A T 00400  T=ABS(A-A1)
    0x6380ba419a20 ---------A   00410  IF T<180 THEN 430
    0x6380ba419d80 ---------A   00420  T=360-T
    0x6380ba41ac20 ---------A T 00430  C=SQR(D*D+D1*D1-2*D*D1*COS(T*3.14159/180))
    0x6380ba41af90 ---------A   00440  PRINT "YOUR PHOTON BOMB EXPLODED";C;"*10^2 MILES FROM THE"
    0x6380ba41b0f0 ---------A   00445  PRINT "ROMULAN SHIP."
    0x6380ba41b350 ---------A   00450  IF C<=50 THEN 470
    0x6380ba41b400 ---------A   00460  GOTO 310
    0x6380ba41b570 ---------A T 00470  PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR MISSION."
    0x6380ba41b610 ---------A   00480  GOTO 500
    0x6380ba41b7a0 ---------A T 00490  PRINT "YOU HAVE ALLOWED THE ROMULANS TO ESCAPE."
    0x6380ba41b940 ---------A T 00500  PRINT "ANOTHER ROMULAN SHIP HAS GONE INTO ORBIT."
    0x6380ba41bad0 ---------A   00510  PRINT "DO YOU WISH TO TRY TO DESTROY IT";
    0x6380ba41bd00 ---------A   00520  INPUT C$
    0x6380ba41bf80 ---------A   00530  IF C$="YES" THEN 270
    0x6380ba41c0e0 ---------A   00540  PRINT "GOOD BYE."
    0x6380ba41c140 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/orbit.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6380ba4096d0 ---------A   01000  PRINT TAB(33);"ORBIT"
    0x6380ba409670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6380ba40a2d0 ----------   01020  PRINT
    0x6380ba40a910 ----------   01030  PRINT
    0x6380ba3fa2b0 ---------A   01040  PRINT
    0x6380ba40b1b0 ---------A   01050  PRINT "SOMEWHERE ABOVE YOUR PLANET IS A ROMULAN SHIP."
    0x6380ba40ba80 ---------A   01060  PRINT
    0x6380ba409e40 ---------A   01070  PRINT "THE SHIP IS IN A CONSTANT POLAR ORBIT.  ITS"
    0x6380ba40a480 ---------A   01080  PRINT "DISTANCE FROM THE CENTER OF YOUR PLANET IS FROM"
    0x6380ba40b6d0 ---------A   01090  PRINT "10,000 TO 1090,000 MILES AND AT ITS PRESENT VELOCITY CAN"
    0x6380ba40c0a0 ---------A   01100  PRINT "CIRCLE YOUR PLANET ONCE EVERY 12 TO 36 HOURS."
    0x6380ba40c100 ---------A   01110  PRINT
    0x6380ba40a6b0 ---------A   01120  PRINT "UNFORTUNATELY, THEY ARE USING A CLOAKING DEVICE SO"
    0x6380ba40a860 ---------A   01130  PRINT "YOU ARE UNABLE TO SEE THEM, BUT WITH A SPECIAL"
    0x6380ba411990 ---------A   01140  PRINT "INSTRUMENT YOU CAN TELL HOW NEAR THEIR SHIP YOUR"
    0x6380ba411b50 ---------A   01150  PRINT "PHOTON BOMB EXPLODED.  YOU HAVE SEVEN HOURS UNTIL THEY"
    0x6380ba411cb0 ---------A   01160  PRINT "HAVE BUILT UP SUFFICIENT POWER IN ORDER TO ESCAPE"
    0x6380ba411dd0 ---------A   01170  PRINT "YOUR PLANET'S GRAVITY."
    0x6380ba411e80 ---------A   01180  PRINT
    0x6380ba411ff0 ---------A   01190  PRINT "YOUR PLANET HAS ENOUGH POWER TO FIRE ONE BOMB AN HOUR."
    0x6380ba4120a0 ---------A   01200  PRINT
    0x6380ba412260 ---------A   01210  PRINT "AT THE BEGINNING OF EACH HOUR YOU WILL BE ASKED TO GIVE AN"
    0x6380ba412410 ---------A   01220  PRINT "ANGLE (BETWEEN 0 AND 360) AND A DISTANCE IN UNITS OF"
    0x6380ba4125c0 ---------A   01230  PRINT "100 MILES (BETWEEN 100 AND 300), AFTER WHICH YOUR BOMB'S"
    0x6380ba412720 ---------A   01240  PRINT "DISTANCE FROM THE ENEMY SHIP WILL BE GIVEN."
    0x6380ba4127d0 ---------A   01250  PRINT
    0x6380ba412930 ---------A   01260  PRINT "AN EXPLOSION WITHIN 5,000 MILES OF THE ROMULAN SHIP"
    0x6380ba412a50 ---------A   01270  PRINT "WILL DESTROY IT."
    0x6380ba412b00 ---------A   01280  PRINT
    0x6380ba412c60 ---------A   01290  PRINT "BELOW IS A DIAGRAM TO HELP YOU VISUALIZE YOUR PLIGHT."
    0x6380ba412cc0 ---------A   01300  PRINT
    0x6380ba412d60 ---------A   01310  PRINT
    0x6380ba412ec0 ---------A   01320  PRINT "                          90"
    0x6380ba413020 ---------A   01330  PRINT "                    0000000000000"
    0x6380ba413180 ---------A   01340  PRINT "                 0000000000000000000"
    0x6380ba413530 ---------A   01350  PRINT "               000000           000000"
    0x6380ba4136d0 ---------A   01360  PRINT "             00000                 00000"
    0x6380ba413870 ---------A   01370  PRINT "            00000    XXXXXXXXXXX    00000"
    0x6380ba413a10 ---------A   01380  PRINT "           00000    XXXXXXXXXXXXX    00000"
    0x6380ba413bc0 ---------A   01390  PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    0x6380ba413d70 ---------A   01400  PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    0x6380ba413f20 ---------A   01410  PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    0x6380ba4140d0 ---------A   01420  PRINT "180<== 00000     XXXXXXXXXXXXXXXXXXX     00000 ==>0"
    0x6380ba414280 ---------A   01430  PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    0x6380ba414420 ---------A   01440  PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    0x6380ba4145c0 ---------A   01450  PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    0x6380ba414760 ---------A   01460  PRINT "           00000    XXXXXXXXXXXXX    00000"
    0x6380ba414900 ---------A   01470  PRINT "            00000    XXXXXXXXXXX    00000"
    0x6380ba414aa0 ---------A   01480  PRINT "             00000                 00000"
    0x6380ba414c40 ---------A   01490  PRINT "               000000           000000"
    0x6380ba414da0 ---------A   01500  PRINT "                 0000000000000000000"
    0x6380ba414f30 ---------A   01510  PRINT "                    0000000000000"
    0x6380ba4150a0 ---------A   01520  PRINT "                         270"
    0x6380ba415130 ---------A   01530  PRINT
    0x6380ba4152b0 ---------A   01540  PRINT "X - YOUR PLANET"
    0x6380ba415420 ---------A   01550  PRINT "O - THE ORBIT OF THE ROMULAN SHIP"
    0x6380ba4154d0 ---------A   01560  PRINT
    0x6380ba415680 ---------A   01570  PRINT "ON THE ABOVE DIAGRAM, THE ROMULAN SHIP IS CIRCLING"
    0x6380ba415840 ---------A   01580  PRINT "COUNTERCLOCKWISE AROUND YOUR PLANET.  DON'T FORGET THAT"
    0x6380ba4159e0 ---------A   01590  PRINT "WITHOUT SUFFICIENT POWER THE ROMULAN SHIP'S ALTITUDE"
    0x6380ba415b60 ---------A   01600  PRINT "AND ORBITAL RATE WILL REMAIN CONSTANT."
    0x6380ba415c10 ---------A   01610  PRINT 
    0x6380ba415d90 ---------A   01620  PRINT "GOOD LUCK.  THE FEDERATION IS COUNTING ON YOU."
    0x6380ba416340 ---------A   01630  A=INT(360*RND(1))
    0x6380ba4169d0 ---------A   01640  D=INT(200*RND(1)+200)
    0x6380ba417060 ---------A   01650  R=INT(20*RND(1)+10)
    0x6380ba417330 ---------A   01660  H=0
    0x6380ba417990 ---------A   01670  IF H=7 THEN 1910
    0x6380ba417cd0 ---------A   01680  H=H+1
    0x6380ba417d40 ---------A   01690  PRINT
    0x6380ba417df0 ---------A   01700  PRINT
    0x6380ba418170 ---------A   01710  PRINT "THIS IS HOUR";H;", AT WHAT ANGLE DO YOU WISH TO SEND"
    0x6380ba4182f0 ---------A   01720  PRINT "YOUR PHOTON BOMB";
    0x6380ba418530 ---------A   01730  INPUT A1
    0x6380ba4186d0 ---------A   01740  PRINT "HOW FAR OUT DO YOU WISH TO DETONATE IT";
    0x6380ba4188f0 ---------A   01750  INPUT D1
    0x6380ba418970 ---------A   01760  PRINT
    0x6380ba4189f0 ---------A   01770  PRINT
    0x6380ba418d50 ---------A   01780  A=A+R
    0x6380ba418fa0 ---------A   01790  IF A<360 THEN 1810
    0x6380ba4192e0 ---------A   01800  A=A-360
    0x6380ba4197d0 ---------A   01810  T=ABS(A-A1)
    0x6380ba419a20 ---------A   01820  IF T<180 THEN 1840
    0x6380ba419d80 ---------A   01830  T=360-T
    0x6380ba41ac20 ---------A   01840  C=SQR(D*D+D1*D1-2*D*D1*COS(T*3.14159/180))
    0x6380ba41af90 ---------A   01850  PRINT "YOUR PHOTON BOMB EXPLODED";C;"*10^2 MILES FROM THE"
    0x6380ba41b0f0 ---------A   01860  PRINT "ROMULAN SHIP."
    0x6380ba41b350 ---------A   01870  IF C<=50 THEN 1890
    0x6380ba41b400 ---------A   01880  GOTO 1670
    0x6380ba41b570 ---------A   01890  PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR MISSION."
    0x6380ba41b610 ---------A   01900  GOTO 1920
    0x6380ba41b7a0 ---------A   01910  PRINT "YOU HAVE ALLOWED THE ROMULANS TO ESCAPE."
    0x6380ba41b940 ---------A   01920  PRINT "ANOTHER ROMULAN SHIP HAS GONE INTO ORBIT."
    0x6380ba41bad0 ---------A   01930  PRINT "DO YOU WISH TO TRY TO DESTROY IT";
    0x6380ba41bd00 ---------A   01940  INPUT C$
    0x6380ba41bf80 ---------A   01950  IF C$="YES" THEN 1630
    0x6380ba41c0e0 ---------A   01960  PRINT "GOOD BYE."
    0x6380ba41c140 ---------A   01970  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01980 - 10000    8030 

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
    0x6380ba4096d0 ---------A   01000  PRINT TAB(33);"ORBIT"
    0x6380ba409670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6380ba40a2d0 ---------A   01020  PRINT
    0x6380ba40a910 ---------A   01030  PRINT
    0x6380ba3fa2b0 ---------A   01040  PRINT
    0x6380ba40b1b0 ---------A   01050  PRINT "SOMEWHERE ABOVE YOUR PLANET IS A ROMULAN SHIP."
    0x6380ba40ba80 ---------A   01060  PRINT
    0x6380ba409e40 ---------A   01070  PRINT "THE SHIP IS IN A CONSTANT POLAR ORBIT.  ITS"
    0x6380ba40a480 ---------A   01080  PRINT "DISTANCE FROM THE CENTER OF YOUR PLANET IS FROM"
    0x6380ba40b6d0 ---------A   01090  PRINT "10,000 TO 1090,000 MILES AND AT ITS PRESENT VELOCITY CAN"
    0x6380ba40c0a0 ---------A   01100  PRINT "CIRCLE YOUR PLANET ONCE EVERY 12 TO 36 HOURS."
    0x6380ba40c100 ---------A   01110  PRINT
    0x6380ba40a6b0 ---------A   01120  PRINT "UNFORTUNATELY, THEY ARE USING A CLOAKING DEVICE SO"
    0x6380ba40a860 ---------A   01130  PRINT "YOU ARE UNABLE TO SEE THEM, BUT WITH A SPECIAL"
    0x6380ba411990 ---------A   01140  PRINT "INSTRUMENT YOU CAN TELL HOW NEAR THEIR SHIP YOUR"
    0x6380ba411b50 ---------A   01150  PRINT "PHOTON BOMB EXPLODED.  YOU HAVE SEVEN HOURS UNTIL THEY"
    0x6380ba411cb0 ---------A   01160  PRINT "HAVE BUILT UP SUFFICIENT POWER IN ORDER TO ESCAPE"
    0x6380ba411dd0 ---------A   01170  PRINT "YOUR PLANET'S GRAVITY."
    0x6380ba411e80 ---------A   01180  PRINT
    0x6380ba411ff0 ---------A   01190  PRINT "YOUR PLANET HAS ENOUGH POWER TO FIRE ONE BOMB AN HOUR."
    0x6380ba4120a0 ---------A   01200  PRINT
    0x6380ba412260 ---------A   01210  PRINT "AT THE BEGINNING OF EACH HOUR YOU WILL BE ASKED TO GIVE AN"
    0x6380ba412410 ---------A   01220  PRINT "ANGLE (BETWEEN 0 AND 360) AND A DISTANCE IN UNITS OF"
    0x6380ba4125c0 ---------A   01230  PRINT "100 MILES (BETWEEN 100 AND 300), AFTER WHICH YOUR BOMB'S"
    0x6380ba412720 ---------A   01240  PRINT "DISTANCE FROM THE ENEMY SHIP WILL BE GIVEN."
    0x6380ba4127d0 ---------A   01250  PRINT
    0x6380ba412930 ---------A   01260  PRINT "AN EXPLOSION WITHIN 5,000 MILES OF THE ROMULAN SHIP"
    0x6380ba412a50 ---------A   01270  PRINT "WILL DESTROY IT."
    0x6380ba412b00 ---------A   01280  PRINT
    0x6380ba412c60 ---------A   01290  PRINT "BELOW IS A DIAGRAM TO HELP YOU VISUALIZE YOUR PLIGHT."
    0x6380ba412cc0 ---------A   01300  PRINT
    0x6380ba412d60 ---------A   01310  PRINT
    0x6380ba412ec0 ---------A   01320  PRINT "                          90"
    0x6380ba413020 ---------A   01330  PRINT "                    0000000000000"
    0x6380ba413180 ---------A   01340  PRINT "                 0000000000000000000"
    0x6380ba413530 ---------A   01350  PRINT "               000000           000000"
    0x6380ba4136d0 ---------A   01360  PRINT "             00000                 00000"
    0x6380ba413870 ---------A   01370  PRINT "            00000    XXXXXXXXXXX    00000"
    0x6380ba413a10 ---------A   01380  PRINT "           00000    XXXXXXXXXXXXX    00000"
    0x6380ba413bc0 ---------A   01390  PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    0x6380ba413d70 ---------A   01400  PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    0x6380ba413f20 ---------A   01410  PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    0x6380ba4140d0 ---------A   01420  PRINT "180<== 00000     XXXXXXXXXXXXXXXXXXX     00000 ==>0"
    0x6380ba414280 ---------A   01430  PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    0x6380ba414420 ---------A   01440  PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    0x6380ba4145c0 ---------A   01450  PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    0x6380ba414760 ---------A   01460  PRINT "           00000    XXXXXXXXXXXXX    00000"
    0x6380ba414900 ---------A   01470  PRINT "            00000    XXXXXXXXXXX    00000"
    0x6380ba414aa0 ---------A   01480  PRINT "             00000                 00000"
    0x6380ba414c40 ---------A   01490  PRINT "               000000           000000"
    0x6380ba414da0 ---------A   01500  PRINT "                 0000000000000000000"
    0x6380ba414f30 ---------A   01510  PRINT "                    0000000000000"
    0x6380ba4150a0 ---------A   01520  PRINT "                         270"
    0x6380ba415130 ---------A   01530  PRINT
    0x6380ba4152b0 ---------A   01540  PRINT "X - YOUR PLANET"
    0x6380ba415420 ---------A   01550  PRINT "O - THE ORBIT OF THE ROMULAN SHIP"
    0x6380ba4154d0 ---------A   01560  PRINT
    0x6380ba415680 ---------A   01570  PRINT "ON THE ABOVE DIAGRAM, THE ROMULAN SHIP IS CIRCLING"
    0x6380ba415840 ---------A   01580  PRINT "COUNTERCLOCKWISE AROUND YOUR PLANET.  DON'T FORGET THAT"
    0x6380ba4159e0 ---------A   01590  PRINT "WITHOUT SUFFICIENT POWER THE ROMULAN SHIP'S ALTITUDE"
    0x6380ba415b60 ---------A   01600  PRINT "AND ORBITAL RATE WILL REMAIN CONSTANT."
    0x6380ba415c10 ---------A   01610  PRINT 
    0x6380ba415d90 ---------A   01620  PRINT "GOOD LUCK.  THE FEDERATION IS COUNTING ON YOU."
    0x6380ba416340 ---------A T 01630  A=INT(360*RND(1))
    0x6380ba4169d0 ---------A   01640  D=INT(200*RND(1)+200)
    0x6380ba417060 ---------A   01650  R=INT(20*RND(1)+10)
    0x6380ba417330 ---------A   01660  H=0
    0x6380ba417990 ---------A T 01670  IF H=7 THEN 1910
    0x6380ba417cd0 ---------A   01680  H=H+1
    0x6380ba417d40 ---------A   01690  PRINT
    0x6380ba417df0 ---------A   01700  PRINT
    0x6380ba418170 ---------A   01710  PRINT "THIS IS HOUR";H;", AT WHAT ANGLE DO YOU WISH TO SEND"
    0x6380ba4182f0 ---------A   01720  PRINT "YOUR PHOTON BOMB";
    0x6380ba418530 ---------A   01730  INPUT A1
    0x6380ba4186d0 ---------A   01740  PRINT "HOW FAR OUT DO YOU WISH TO DETONATE IT";
    0x6380ba4188f0 ---------A   01750  INPUT D1
    0x6380ba418970 ---------A   01760  PRINT
    0x6380ba4189f0 ---------A   01770  PRINT
    0x6380ba418d50 ---------A   01780  A=A+R
    0x6380ba418fa0 ---------A   01790  IF A<360 THEN 1810
    0x6380ba4192e0 ---------A   01800  A=A-360
    0x6380ba4197d0 ---------A T 01810  T=ABS(A-A1)
    0x6380ba419a20 ---------A   01820  IF T<180 THEN 1840
    0x6380ba419d80 ---------A   01830  T=360-T
    0x6380ba41ac20 ---------A T 01840  C=SQR(D*D+D1*D1-2*D*D1*COS(T*3.14159/180))
    0x6380ba41af90 ---------A   01850  PRINT "YOUR PHOTON BOMB EXPLODED";C;"*10^2 MILES FROM THE"
    0x6380ba41b0f0 ---------A   01860  PRINT "ROMULAN SHIP."
    0x6380ba41b350 ---------A   01870  IF C<=50 THEN 1890
    0x6380ba41b400 ---------A   01880  GOTO 1670
    0x6380ba41b570 ---------A T 01890  PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR MISSION."
    0x6380ba41b610 ---------A   01900  GOTO 1920
    0x6380ba41b7a0 ---------A T 01910  PRINT "YOU HAVE ALLOWED THE ROMULANS TO ESCAPE."
    0x6380ba41b940 ---------A T 01920  PRINT "ANOTHER ROMULAN SHIP HAS GONE INTO ORBIT."
    0x6380ba41bad0 ---------A   01930  PRINT "DO YOU WISH TO TRY TO DESTROY IT";
    0x6380ba41bd00 ---------A   01940  INPUT C$
    0x6380ba41bf80 ---------A   01950  IF C$="YES" THEN 1630
    0x6380ba41c0e0 ---------A   01960  PRINT "GOOD BYE."
    0x6380ba41c140 ---------A   01970  END
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
    // 01000 PRINT TAB(33);"ORBIT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"ORBIT");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "SOMEWHERE ABOVE YOUR PLANET IS A ROMULAN SHIP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SOMEWHERE ABOVE YOUR PLANET IS A ROMULAN SHIP.");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "THE SHIP IS IN A CONSTANT POLAR ORBIT.  ITS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE SHIP IS IN A CONSTANT POLAR ORBIT.  ITS");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "DISTANCE FROM THE CENTER OF YOUR PLANET IS FROM"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DISTANCE FROM THE CENTER OF YOUR PLANET IS FROM");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "10,000 TO 1090,000 MILES AND AT ITS PRESENT VELOCITY CAN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"10,000 TO 30,000 MILES AND AT ITS PRESENT VELOCITY CAN");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "CIRCLE YOUR PLANET ONCE EVERY 12 TO 36 HOURS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CIRCLE YOUR PLANET ONCE EVERY 12 TO 36 HOURS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "UNFORTUNATELY, THEY ARE USING A CLOAKING DEVICE SO"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"UNFORTUNATELY, THEY ARE USING A CLOAKING DEVICE SO");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT "YOU ARE UNABLE TO SEE THEM, BUT WITH A SPECIAL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE UNABLE TO SEE THEM, BUT WITH A SPECIAL");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT "INSTRUMENT YOU CAN TELL HOW NEAR THEIR SHIP YOUR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"INSTRUMENT YOU CAN TELL HOW NEAR THEIR SHIP YOUR");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 PRINT "PHOTON BOMB EXPLODED.  YOU HAVE SEVEN HOURS UNTIL THEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PHOTON BOMB EXPLODED.  YOU HAVE SEVEN HOURS UNTIL THEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01160 PRINT "HAVE BUILT UP SUFFICIENT POWER IN ORDER TO ESCAPE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HAVE BUILT UP SUFFICIENT POWER IN ORDER TO ESCAPE");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT "YOUR PLANET'S GRAVITY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR PLANET'S GRAVITY.");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINT "YOUR PLANET HAS ENOUGH POWER TO FIRE ONE BOMB AN HOUR."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR PLANET HAS ENOUGH POWER TO FIRE ONE BOMB AN HOUR.");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01210 PRINT "AT THE BEGINNING OF EACH HOUR YOU WILL BE ASKED TO GIVE AN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AT THE BEGINNING OF EACH HOUR YOU WILL BE ASKED TO GIVE AN");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT "ANGLE (BETWEEN 0 AND 360) AND A DISTANCE IN UNITS OF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ANGLE (BETWEEN 0 AND 360) AND A DISTANCE IN UNITS OF");strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT "100 MILES (BETWEEN 100 AND 300), AFTER WHICH YOUR BOMB'S"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"100 MILES (BETWEEN 100 AND 300), AFTER WHICH YOUR BOMB'S");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT "DISTANCE FROM THE ENEMY SHIP WILL BE GIVEN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DISTANCE FROM THE ENEMY SHIP WILL BE GIVEN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT "AN EXPLOSION WITHIN 5,000 MILES OF THE ROMULAN SHIP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AN EXPLOSION WITHIN 5,000 MILES OF THE ROMULAN SHIP");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT "WILL DESTROY IT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WILL DESTROY IT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01290 PRINT "BELOW IS A DIAGRAM TO HELP YOU VISUALIZE YOUR PLIGHT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"BELOW IS A DIAGRAM TO HELP YOU VISUALIZE YOUR PLIGHT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01310 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01320 PRINT "                          90"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"                          90");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT "                    0000000000000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"                    0000000000000");strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT "                 0000000000000000000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"                 0000000000000000000");strcat(buf,"\n");fputs(buf,fh); };
    // 01350 PRINT "               000000           000000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"               000000           000000");strcat(buf,"\n");fputs(buf,fh); };
    // 01360 PRINT "             00000                 00000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"             00000                 00000");strcat(buf,"\n");fputs(buf,fh); };
    // 01370 PRINT "            00000    XXXXXXXXXXX    00000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"            00000    XXXXXXXXXXX    00000");strcat(buf,"\n");fputs(buf,fh); };
    // 01380 PRINT "           00000    XXXXXXXXXXXXX    00000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"           00000    XXXXXXXXXXXXX    00000");strcat(buf,"\n");fputs(buf,fh); };
    // 01390 PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"          0000     XXXXXXXXXXXXXXX     0000");strcat(buf,"\n");fputs(buf,fh); };
    // 01400 PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"         0000     XXXXXXXXXXXXXXXXX     0000");strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"        0000     XXXXXXXXXXXXXXXXXXX     0000");strcat(buf,"\n");fputs(buf,fh); };
    // 01420 PRINT "180<== 00000     XXXXXXXXXXXXXXXXXXX     00000 ==>0"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"180<== 00000     XXXXXXXXXXXXXXXXXXX     00000 ==>0");strcat(buf,"\n");fputs(buf,fh); };
    // 01430 PRINT "        0000     XXXXXXXXXXXXXXXXXXX     0000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"        0000     XXXXXXXXXXXXXXXXXXX     0000");strcat(buf,"\n");fputs(buf,fh); };
    // 01440 PRINT "         0000     XXXXXXXXXXXXXXXXX     0000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"         0000     XXXXXXXXXXXXXXXXX     0000");strcat(buf,"\n");fputs(buf,fh); };
    // 01450 PRINT "          0000     XXXXXXXXXXXXXXX     0000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"          0000     XXXXXXXXXXXXXXX     0000");strcat(buf,"\n");fputs(buf,fh); };
    // 01460 PRINT "           00000    XXXXXXXXXXXXX    00000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"           00000    XXXXXXXXXXXXX    00000");strcat(buf,"\n");fputs(buf,fh); };
    // 01470 PRINT "            00000    XXXXXXXXXXX    00000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"            00000    XXXXXXXXXXX    00000");strcat(buf,"\n");fputs(buf,fh); };
    // 01480 PRINT "             00000                 00000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"             00000                 00000");strcat(buf,"\n");fputs(buf,fh); };
    // 01490 PRINT "               000000           000000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"               000000           000000");strcat(buf,"\n");fputs(buf,fh); };
    // 01500 PRINT "                 0000000000000000000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"                 0000000000000000000");strcat(buf,"\n");fputs(buf,fh); };
    // 01510 PRINT "                    0000000000000"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"                    0000000000000");strcat(buf,"\n");fputs(buf,fh); };
    // 01520 PRINT "                         270"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"                         270");strcat(buf,"\n");fputs(buf,fh); };
    // 01530 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01540 PRINT "X - YOUR PLANET"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"X - YOUR PLANET");strcat(buf,"\n");fputs(buf,fh); };
    // 01550 PRINT "O - THE ORBIT OF THE ROMULAN SHIP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"O - THE ORBIT OF THE ROMULAN SHIP");strcat(buf,"\n");fputs(buf,fh); };
    // 01560 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINT "ON THE ABOVE DIAGRAM, THE ROMULAN SHIP IS CIRCLING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ON THE ABOVE DIAGRAM, THE ROMULAN SHIP IS CIRCLING");strcat(buf,"\n");fputs(buf,fh); };
    // 01580 PRINT "COUNTERCLOCKWISE AROUND YOUR PLANET.  DON'T FORGET THAT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COUNTERCLOCKWISE AROUND YOUR PLANET.  DON'T FORGET THAT");strcat(buf,"\n");fputs(buf,fh); };
    // 01590 PRINT "WITHOUT SUFFICIENT POWER THE ROMULAN SHIP'S ALTITUDE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WITHOUT SUFFICIENT POWER THE ROMULAN SHIP'S ALTITUDE");strcat(buf,"\n");fputs(buf,fh); };
    // 01600 PRINT "AND ORBITAL RATE WILL REMAIN CONSTANT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND ORBITAL RATE WILL REMAIN CONSTANT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01610 PRINT 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01620 PRINT "GOOD LUCK.  THE FEDERATION IS COUNTING ON YOU."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD LUCK.  THE FEDERATION IS COUNTING ON YOU.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01630:
    // 01630 A=INT(360*RND(1))
    A_int = INT(360*RND(1));
    // 01640 D=INT(200*RND(1)+200)
    D_int = INT(200*RND(1)+200);
    // 01650 R=INT(20*RND(1)+10)
    R_int = INT(20*RND(1)+10);
    // 01660 H=0
    H_int = 0;

  Lbl_01670:
    // 01670 IF H=7 THEN 1910
    if(H_int==7)goto Lbl_01910;
    // 01680 H=H+1
    H_int = H_int+1;
    // 01690 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01700 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01710 PRINT "THIS IS HOUR";H;", AT WHAT ANGLE DO YOU WISH TO SEND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS HOUR"); b2c_INT(buf,H_int);strcat(buf,", AT WHAT ANGLE DO YOU WISH TO SEND");strcat(buf,"\n");fputs(buf,fh); };
    // 01720 PRINT "YOUR PHOTON BOMB";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR PHOTON BOMB");fputs(buf,fh); };
    // 01730 INPUT A1
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
                (err += b2c_strtoi(&A1_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01730
    // 01740 PRINT "HOW FAR OUT DO YOU WISH TO DETONATE IT";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOW FAR OUT DO YOU WISH TO DETONATE IT");fputs(buf,fh); };
    // 01750 INPUT D1
    // Start of Basic INPUT statement 01750
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
    }; // End of Basic INPUT statement 01750
    // 01760 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01770 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01780 A=A+R
    A_int = A_int+R_int;
    // 01790 IF A<360 THEN 1810
    if(A_int<360)goto Lbl_01810;
    // 01800 A=A-360
    A_int = A_int-360;

  Lbl_01810:
    // 01810 T=ABS(A-A1)
    T_int = ABS(A_int-A1_int);
    // 01820 IF T<180 THEN 1840
    if(T_int<180)goto Lbl_01840;
    // 01830 T=360-T
    T_int = 360-T_int;

  Lbl_01840:
    // 01840 C=SQR(D*D+D1*D1-2*D*D1*COS(T*3.14159/180))
    C_int = SQR(D_int*D_int+D1_int*D1_int-2*D_int*D1_int*COS(T_int*3.14/180));
    // 01850 PRINT "YOUR PHOTON BOMB EXPLODED";C;"*10^2 MILES FROM THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR PHOTON BOMB EXPLODED"); b2c_INT(buf,C_int);strcat(buf,"*10^2 MILES FROM THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01860 PRINT "ROMULAN SHIP."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ROMULAN SHIP.");strcat(buf,"\n");fputs(buf,fh); };
    // 01870 IF C<=50 THEN 1890
    if(C_int<=50)goto Lbl_01890;
    // 01880 GOTO 1670
    goto Lbl_01670;

  Lbl_01890:
    // 01890 PRINT "YOU HAVE SUCCESFULLY COMPLETED YOUR MISSION."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE SUCCESFULLY COMPLETED YOUR MISSION.");strcat(buf,"\n");fputs(buf,fh); };
    // 01900 GOTO 1920
    goto Lbl_01920;

  Lbl_01910:
    // 01910 PRINT "YOU HAVE ALLOWED THE ROMULANS TO ESCAPE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU HAVE ALLOWED THE ROMULANS TO ESCAPE.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01920:
    // 01920 PRINT "ANOTHER ROMULAN SHIP HAS GONE INTO ORBIT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ANOTHER ROMULAN SHIP HAS GONE INTO ORBIT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01930 PRINT "DO YOU WISH TO TRY TO DESTROY IT";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DO YOU WISH TO TRY TO DESTROY IT");fputs(buf,fh); };
    // 01940 INPUT C$
    // Start of Basic INPUT statement 01940
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
    }; // End of Basic INPUT statement 01940
    // 01950 IF C$="YES" THEN 1630
    if(strcmp(C_str,"YES")==0)goto Lbl_01630;
    // 01960 PRINT "GOOD BYE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD BYE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01970 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
