/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/supstrki.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5949317aadb0 ---------A   00001  REM NOTE: Basic language type forced to be:
    0x5949317aaf30 ---------A   00002  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5949317aae70 ---------A   00010  CLS
    0x5949317a86d0 ---------A   00020  PRINT@273,"SUPER STAR TREK INSTRUCTIONS"
    0x5949317a8670 ---------A   00030  PRINT@409,"COPYRIGHT BY"
    0x5949317aa5e0 ---------A   00040  PRINT@534,"CREATIVE COMPUTING"
    0x5949317a89e0 ---------A   00050  PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x5949317a9040 ---------A   00060  P=1:GOSUB1400
    0x5949317a8e40 ---------A   00070  CLS
    0x5949317a94d0 ---------A   00080  PRINT@320,"1. WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    0x5949317a8c20 ---------A   00090  PRINT"     COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM OR XXX)."
    0x5949317ab100 ---------A   00100  GOSUB1450
    0x5949317a9670 ---------A   00110  PRINT@320,"2. IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    0x5949317b08a0 ---------A   00120  PRINTTAB(12);"LIST OF THE LEGAL COMMANDS PRINTED OUT."
    0x5949317b0960 ---------A   00130  GOSUB1450
    0x5949317b0b20 ---------A   00140  PRINT@192,"3. SOME COMMANDS REQUARE YHOU TO ENTER DATA (FOR EXAMPLE, THE"
    0x5949317b0cf0 ---------A   00150  PRINT"      'NAV' COMMAND COMES BACK WITH 'CORSE (1-9) ?'.) IF YOU"
    0x5949317b0e60 ---------A   00160  PRINT"  TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    0x5949317b1080 ---------A   00170  PRINTTAB(22);"WILL BE ABORTED."
    0x5949317b10e0 ---------A   00180  GOSUB1450
    0x5949317b11e0 ---------A   00190  PRINT:PRINT
    0x5949317b13b0 ---------A   00200  PRINT"      THE GALAXY IS DIVIDED INTO AN 8 X 8 QUADRANT GRID,"
    0x5949317b1520 ---------A   00210  PRINT"AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID"
    0x5949317b15d0 ---------A   00220  PRINT
    0x5949317b17a0 ---------A   00230  PRINT"  YOU WIL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE"
    0x5949317b1970 ---------A   00240  PRINT"GALAXY TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP"
    0x5949317b1b40 ---------A   00250  PRINT"/ENTERPRISE/; YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF"
    0x5949317b1cb0 ---------A   00260  PRINT"KLINGON WARSHIPS WHICH ARE MENACING THE UNITED FEDERATION OF"
    0x5949317b1dd0 ---------A   00270  PRINT"PLANETS."
    0x5949317b1e80 ---------A   00280  GOSUB1450
    0x5949317b2010 ---------A   00290  PRINT"  YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    0x5949317b2170 ---------A   00300  PRINT"      CAPTAIN OF THE STARSHIP ENTERPRISE:"
    0x5949317b2210 ---------A   00310  PRINT
    0x5949317b2580 ---------A   00320  PRINT"/NAV/ COMMAND = WARP ENGINE CONTROL --"
    0x5949317b2630 ---------A   00330  PRINT
    0x5949317b27e0 ---------A   00340  PRINT"  COURSE IS IN A CIRCULAR NUMERICAL       4  3  2"
    0x5949317b2990 ---------A   00350  PRINT"		  VECTOR ARRANGEMENT AS SHOWN              . . ."
    0x5949317b2b40 ---------A   00360  PRINT"  INTERGER AND REAL VALUES MAY BE           ..."
    0x5949317b2cf0 ---------A   00370  PRINT"  USED.  (THUS COURSE 1.5 IS HALF-      5 ---*--- 1"
    0x5949317b2ea0 ---------A   00380  PRINT"      WAY BETWEEN 1 AND 2.                  ..."
    0x5949317b3050 ---------A   00390  PRINT"                                           . . ."
    0x5949317b31f0 ---------A   00400  PRINT"VALUES MAY APPROACH 9.0, WHICH            6  7  8"
    0x5949317b3350 ---------A   00410  PRINT"      ITSELF IS EQUIVALENT TO 1.0"
    0x5949317b34d0 ---------A   00420  PRINT"                                  COURSE"
    0x5949317b3550 ---------A   00430  GOSUB1450
    0x5949317b36c0 ---------A   00440  PRINT@256,""
    0x5949317b3960 ---------A   00450  PRINTTAB(15);"ONE WARP FACTOR IS THE SIZE OF"
    0x5949317b3c40 ---------A   00460  PRINTTAB(14);"ONE QUARDRANT.  THEREFORE, TO GET"
    0x5949317b3f10 ---------A   00470  PRINTTAB(13);"FROM QUARDRANT 6,5 TO 5,5 YOU WOULD"
    0x5949317b41c0 ---------A   00480  PRINTTAB(16);"USE COURSE 3, WARP FACTOR 1."
    0x5949317b4260 ---------A   00490  GOSUB1450
    0x5949317b43d0 ---------A   00500  PRINT"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"
    0x5949317b4480 ---------A   00510  PRINT
    0x5949317b4600 ---------A   00520  PRINT"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."
    0x5949317b46b0 ---------A   00530  PRINT
    0x5949317b4850 ---------A   00540  PRINT"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    0x5949317b49e0 ---------A   00550  PRINT"      <*> = YOUR STARSHIP'S POSITTION"
    0x5949317b4b90 ---------A   00560  PRINT"      +K+ = KLINGON BATTLE CRUISER"
    0x5949317b4d20 ---------A   00570  PRINT"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"
    0x5949317b4e80 ---------A   00580  PRINT"  * = STAR"
    0x5949317b4f30 ---------A   00590  PRINT
    0x5949317b50c0 ---------A   00600  PRINT"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    0x5949317b5160 ---------A   00610  GOSUB1420
    0x5949317b52d0 ---------A   00620  PRINT"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"
    0x5949317b5390 ---------A   00630  PRINT
    0x5949317b5960 ---------A   00640  PRINT"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x5949317b5b30 ---------A   00650  PRINT"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."
    0x5949317b5cf0 ---------A   00660  PRINT"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"
    0x5949317b5eb0 ---------A   00670  PRINT"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"
    0x5949317b6040 ---------A   00680  PRINT"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"
    0x5949317b61a0 ---------A   00690  PRINT"  KLINGONS."
    0x5949317b6200 ---------A   00700  PRINT
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01400      00060G
     01420      00610G
     01450      00100G, 00130G, 00180G, 00280G, 00430G, 00490G

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5949317aadb0 (00001)   0x5949317aadb0 (00001)   0x5949317b6200 (00700)   0x5949317b6200 (00700)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/supstrki.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5949317aadb0 ---------A   00001  REM NOTE
    0x5949317aaf30 ---------A   00002  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5949317aae70 ---------A   00010  CLS
    0x5949317a86d0 ---------A   00020  PRINT@273,"SUPER STAR TREK INSTRUCTIONS"
    0x5949317a8670 ---------A   00030  PRINT@409,"COPYRIGHT BY"
    0x5949317aa5e0 ---------A   00040  PRINT@534,"CREATIVE COMPUTING"
    0x5949317a89e0 ---------A   00050  PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x5949317ab0b0 ----------   00060  P=1
    0x5949317a9040 ---------A        a GOSUB1400
    0x5949317a8e40 ---------A   00070  CLS
    0x5949317a94d0 ---------A   00080  PRINT@320,"1. WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    0x5949317a8c20 ---------A   00090  PRINT"     COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM OR XXX)."
    0x5949317ab100 ---------A   00100  GOSUB1450
    0x5949317a9670 ---------A   00110  PRINT@320,"2. IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    0x5949317b08a0 ---------A   00120  PRINTTAB(12);"LIST OF THE LEGAL COMMANDS PRINTED OUT."
    0x5949317b0960 ---------A   00130  GOSUB1450
    0x5949317b0b20 ---------A   00140  PRINT@192,"3. SOME COMMANDS REQUARE YHOU TO ENTER DATA (FOR EXAMPLE, THE"
    0x5949317b0cf0 ---------A   00150  PRINT"      'NAV' COMMAND COMES BACK WITH 'CORSE (1-9) ?'.) IF YOU"
    0x5949317b0e60 ---------A   00160  PRINT"  TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    0x5949317b1080 ---------A   00170  PRINTTAB(22);"WILL BE ABORTED."
    0x5949317b10e0 ---------A   00180  GOSUB1450
    0x5949317b1130 ----------   00190  PRINT
    0x5949317b11e0 ---------A        a PRINT
    0x5949317b13b0 ---------A   00200  PRINT"      THE GALAXY IS DIVIDED INTO AN 8 X 8 QUADRANT GRID,"
    0x5949317b1520 ---------A   00210  PRINT"AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID"
    0x5949317b15d0 ---------A   00220  PRINT
    0x5949317b17a0 ---------A   00230  PRINT"  YOU WIL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE"
    0x5949317b1970 ---------A   00240  PRINT"GALAXY TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP"
    0x5949317b1b40 ---------A   00250  PRINT"/ENTERPRISE/; YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF"
    0x5949317b1cb0 ---------A   00260  PRINT"KLINGON WARSHIPS WHICH ARE MENACING THE UNITED FEDERATION OF"
    0x5949317b1dd0 ---------A   00270  PRINT"PLANETS."
    0x5949317b1e80 ---------A   00280  GOSUB1450
    0x5949317b2010 ---------A   00290  PRINT"  YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    0x5949317b2170 ---------A   00300  PRINT"      CAPTAIN OF THE STARSHIP ENTERPRISE:"
    0x5949317b2210 ---------A   00310  PRINT
    0x5949317b2580 ---------A   00320  PRINT"/NAV/ COMMAND = WARP ENGINE CONTROL --"
    0x5949317b2630 ---------A   00330  PRINT
    0x5949317b27e0 ---------A   00340  PRINT"  COURSE IS IN A CIRCULAR NUMERICAL       4  3  2"
    0x5949317b2990 ---------A   00350  PRINT"		  VECTOR ARRANGEMENT AS SHOWN              . . ."
    0x5949317b2b40 ---------A   00360  PRINT"  INTERGER AND REAL VALUES MAY BE           ..."
    0x5949317b2cf0 ---------A   00370  PRINT"  USED.  (THUS COURSE 1.5 IS HALF-      5 ---*--- 1"
    0x5949317b2ea0 ---------A   00380  PRINT"      WAY BETWEEN 1 AND 2.                  ..."
    0x5949317b3050 ---------A   00390  PRINT"                                           . . ."
    0x5949317b31f0 ---------A   00400  PRINT"VALUES MAY APPROACH 9.0, WHICH            6  7  8"
    0x5949317b3350 ---------A   00410  PRINT"      ITSELF IS EQUIVALENT TO 1.0"
    0x5949317b34d0 ---------A   00420  PRINT"                                  COURSE"
    0x5949317b3550 ---------A   00430  GOSUB1450
    0x5949317b36c0 ---------A   00440  PRINT@256,""
    0x5949317b3960 ---------A   00450  PRINTTAB(15);"ONE WARP FACTOR IS THE SIZE OF"
    0x5949317b3c40 ---------A   00460  PRINTTAB(14);"ONE QUARDRANT.  THEREFORE, TO GET"
    0x5949317b3f10 ---------A   00470  PRINTTAB(13);"FROM QUARDRANT 6,5 TO 5,5 YOU WOULD"
    0x5949317b41c0 ---------A   00480  PRINTTAB(16);"USE COURSE 3, WARP FACTOR 1."
    0x5949317b4260 ---------A   00490  GOSUB1450
    0x5949317b43d0 ---------A   00500  PRINT"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"
    0x5949317b4480 ---------A   00510  PRINT
    0x5949317b4600 ---------A   00520  PRINT"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."
    0x5949317b46b0 ---------A   00530  PRINT
    0x5949317b4850 ---------A   00540  PRINT"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    0x5949317b49e0 ---------A   00550  PRINT"      <*> = YOUR STARSHIP'S POSITTION"
    0x5949317b4b90 ---------A   00560  PRINT"      +K+ = KLINGON BATTLE CRUISER"
    0x5949317b4d20 ---------A   00570  PRINT"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"
    0x5949317b4e80 ---------A   00580  PRINT"  * = STAR"
    0x5949317b4f30 ---------A   00590  PRINT
    0x5949317b50c0 ---------A   00600  PRINT"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    0x5949317b5160 ---------A   00610  GOSUB1420
    0x5949317b52d0 ---------A   00620  PRINT"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"
    0x5949317b5390 ---------A   00630  PRINT
    0x5949317b5960 ---------A   00640  PRINT"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x5949317b5b30 ---------A   00650  PRINT"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."
    0x5949317b5cf0 ---------A   00660  PRINT"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"
    0x5949317b5eb0 ---------A   00670  PRINT"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"
    0x5949317b6040 ---------A   00680  PRINT"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"
    0x5949317b61a0 ---------A   00690  PRINT"  KLINGONS."
    0x5949317b6200 ---------A   00700  PRINT
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/supstrki.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5949317aadb0 ---------A   01000  REM NOTE
    0x5949317aaf30 ---------A   01010  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5949317aae70 ---------A   01020  CLS
    0x5949317a86d0 ---------A   01030  PRINT@273,"SUPER STAR TREK INSTRUCTIONS"
    0x5949317a8670 ---------A   01040  PRINT@409,"COPYRIGHT BY"
    0x5949317aa5e0 ---------A   01050  PRINT@534,"CREATIVE COMPUTING"
    0x5949317a89e0 ---------A   01060  PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x5949317ab0b0 ----------   01070  P=1
    0x5949317a9040 ---------A   01080  GOSUB1400
    0x5949317a8e40 ---------A   01090  CLS
    0x5949317a94d0 ---------A   01100  PRINT@320,"1. WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    0x5949317a8c20 ---------A   01110  PRINT"     COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM OR XXX)."
    0x5949317ab100 ---------A   01120  GOSUB1450
    0x5949317a9670 ---------A   01130  PRINT@320,"2. IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    0x5949317b08a0 ---------A   01140  PRINTTAB(12);"LIST OF THE LEGAL COMMANDS PRINTED OUT."
    0x5949317b0960 ---------A   01150  GOSUB1450
    0x5949317b0b20 ---------A   01160  PRINT@192,"3. SOME COMMANDS REQUARE YHOU TO ENTER DATA (FOR EXAMPLE, THE"
    0x5949317b0cf0 ---------A   01170  PRINT"      'NAV' COMMAND COMES BACK WITH 'CORSE (1-9) ?'.) IF YOU"
    0x5949317b0e60 ---------A   01180  PRINT"  TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    0x5949317b1080 ---------A   01190  PRINTTAB(22);"WILL BE ABORTED."
    0x5949317b10e0 ---------A   01200  GOSUB1450
    0x5949317b1130 ----------   01210  PRINT
    0x5949317b11e0 ---------A   01220  PRINT
    0x5949317b13b0 ---------A   01230  PRINT"      THE GALAXY IS DIVIDED INTO AN 8 X 8 QUADRANT GRID,"
    0x5949317b1520 ---------A   01240  PRINT"AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID"
    0x5949317b15d0 ---------A   01250  PRINT
    0x5949317b17a0 ---------A   01260  PRINT"  YOU WIL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE"
    0x5949317b1970 ---------A   01270  PRINT"GALAXY TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP"
    0x5949317b1b40 ---------A   01280  PRINT"/ENTERPRISE/; YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF"
    0x5949317b1cb0 ---------A   01290  PRINT"KLINGON WARSHIPS WHICH ARE MENACING THE UNITED FEDERATION OF"
    0x5949317b1dd0 ---------A   01300  PRINT"PLANETS."
    0x5949317b1e80 ---------A   01310  GOSUB1450
    0x5949317b2010 ---------A   01320  PRINT"  YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    0x5949317b2170 ---------A   01330  PRINT"      CAPTAIN OF THE STARSHIP ENTERPRISE:"
    0x5949317b2210 ---------A   01340  PRINT
    0x5949317b2580 ---------A   01350  PRINT"/NAV/ COMMAND = WARP ENGINE CONTROL --"
    0x5949317b2630 ---------A   01360  PRINT
    0x5949317b27e0 ---------A   01370  PRINT"  COURSE IS IN A CIRCULAR NUMERICAL       4  3  2"
    0x5949317b2990 ---------A   01380  PRINT"		  VECTOR ARRANGEMENT AS SHOWN              . . ."
    0x5949317b2b40 ---------A   01390  PRINT"  INTERGER AND REAL VALUES MAY BE           ..."
    0x5949317b2cf0 ---------A G 01400  PRINT"  USED.  (THUS COURSE 1.5 IS HALF-      5 ---*--- 1"
    0x5949317b2ea0 ---------A   01410  PRINT"      WAY BETWEEN 1 AND 2.                  ..."
    0x5949317b3050 ---------A G 01420  PRINT"                                           . . ."
    0x5949317b31f0 ---------A   01430  PRINT"VALUES MAY APPROACH 9.0, WHICH            6  7  8"
    0x5949317b3350 ---------A   01440  PRINT"      ITSELF IS EQUIVALENT TO 1.0"
    0x5949317b34d0 ---------A G 01450  PRINT"                                  COURSE"
    0x5949317b3550 ---------A   01460  GOSUB1450
    0x5949317b36c0 ---------A   01470  PRINT@256,""
    0x5949317b3960 ---------A   01480  PRINTTAB(15);"ONE WARP FACTOR IS THE SIZE OF"
    0x5949317b3c40 ---------A   01490  PRINTTAB(14);"ONE QUARDRANT.  THEREFORE, TO GET"
    0x5949317b3f10 ---------A   01500  PRINTTAB(13);"FROM QUARDRANT 6,5 TO 5,5 YOU WOULD"
    0x5949317b41c0 ---------A   01510  PRINTTAB(16);"USE COURSE 3, WARP FACTOR 1."
    0x5949317b4260 ---------A   01520  GOSUB1450
    0x5949317b43d0 ---------A   01530  PRINT"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"
    0x5949317b4480 ---------A   01540  PRINT
    0x5949317b4600 ---------A   01550  PRINT"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."
    0x5949317b46b0 ---------A   01560  PRINT
    0x5949317b4850 ---------A   01570  PRINT"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    0x5949317b49e0 ---------A   01580  PRINT"      <*> = YOUR STARSHIP'S POSITTION"
    0x5949317b4b90 ---------A   01590  PRINT"      +K+ = KLINGON BATTLE CRUISER"
    0x5949317b4d20 ---------A   01600  PRINT"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"
    0x5949317b4e80 ---------A   01610  PRINT"  * = STAR"
    0x5949317b4f30 ---------A   01620  PRINT
    0x5949317b50c0 ---------A   01630  PRINT"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    0x5949317b5160 ---------A   01640  GOSUB1420
    0x5949317b52d0 ---------A   01650  PRINT"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"
    0x5949317b5390 ---------A   01660  PRINT
    0x5949317b5960 ---------A   01670  PRINT"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x5949317b5b30 ---------A   01680  PRINT"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."
    0x5949317b5cf0 ---------A   01690  PRINT"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"
    0x5949317b5eb0 ---------A   01700  PRINT"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"
    0x5949317b6040 ---------A   01710  PRINT"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"
    0x5949317b61a0 ---------A   01720  PRINT"  KLINGONS."
    0x5949317b6200 ---------A   01730  PRINT
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01740 - 10000    8270 

 */



/*
 *  Symbol Table Listing for 'basic/supstrki.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
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
    P                        Integer     
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
 *  Listing of basic/supstrki.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5949317aadb0 ---------A   01000  REM NOTE
    0x5949317aaf30 ---------A   01010  REM       trs2 - TRS-80 Level II BASIC tokenized file
    0x5949317aae70 ---------A   01020  CLS
    0x5949317a86d0 ---------A   01030  PRINT@273,"SUPER STAR TREK INSTRUCTIONS"
    0x5949317a8670 ---------A   01040  PRINT@409,"COPYRIGHT BY"
    0x5949317aa5e0 ---------A   01050  PRINT@534,"CREATIVE COMPUTING"
    0x5949317a89e0 ---------A   01060  PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    0x5949317ab0b0 ---------A   01070  P=1
    0x5949317a9040 ---------A   01080  GOSUB1400
    0x5949317a8e40 ---------A   01090  CLS
    0x5949317a94d0 ---------A   01100  PRINT@320,"1. WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    0x5949317a8c20 ---------A   01110  PRINT"     COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM OR XXX)."
    0x5949317ab100 ---------A   01120  GOSUB1450
    0x5949317a9670 ---------A   01130  PRINT@320,"2. IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    0x5949317b08a0 ---------A   01140  PRINTTAB(12);"LIST OF THE LEGAL COMMANDS PRINTED OUT."
    0x5949317b0960 ---------A   01150  GOSUB1450
    0x5949317b0b20 ---------A   01160  PRINT@192,"3. SOME COMMANDS REQUARE YHOU TO ENTER DATA (FOR EXAMPLE, THE"
    0x5949317b0cf0 ---------A   01170  PRINT"      'NAV' COMMAND COMES BACK WITH 'CORSE (1-9) ?'.) IF YOU"
    0x5949317b0e60 ---------A   01180  PRINT"  TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    0x5949317b1080 ---------A   01190  PRINTTAB(22);"WILL BE ABORTED."
    0x5949317b10e0 ---------A   01200  GOSUB1450
    0x5949317b1130 ---------A   01210  PRINT
    0x5949317b11e0 ---------A   01220  PRINT
    0x5949317b13b0 ---------A   01230  PRINT"      THE GALAXY IS DIVIDED INTO AN 8 X 8 QUADRANT GRID,"
    0x5949317b1520 ---------A   01240  PRINT"AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID"
    0x5949317b15d0 ---------A   01250  PRINT
    0x5949317b17a0 ---------A   01260  PRINT"  YOU WIL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE"
    0x5949317b1970 ---------A   01270  PRINT"GALAXY TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP"
    0x5949317b1b40 ---------A   01280  PRINT"/ENTERPRISE/; YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF"
    0x5949317b1cb0 ---------A   01290  PRINT"KLINGON WARSHIPS WHICH ARE MENACING THE UNITED FEDERATION OF"
    0x5949317b1dd0 ---------A   01300  PRINT"PLANETS."
    0x5949317b1e80 ---------A   01310  GOSUB1450
    0x5949317b2010 ---------A   01320  PRINT"  YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    0x5949317b2170 ---------A   01330  PRINT"      CAPTAIN OF THE STARSHIP ENTERPRISE:"
    0x5949317b2210 ---------A   01340  PRINT
    0x5949317b2580 ---------A   01350  PRINT"/NAV/ COMMAND = WARP ENGINE CONTROL --"
    0x5949317b2630 ---------A   01360  PRINT
    0x5949317b27e0 ---------A   01370  PRINT"  COURSE IS IN A CIRCULAR NUMERICAL       4  3  2"
    0x5949317b2990 ---------A   01380  PRINT"		  VECTOR ARRANGEMENT AS SHOWN              . . ."
    0x5949317b2b40 ---------A   01390  PRINT"  INTERGER AND REAL VALUES MAY BE           ..."
    0x5949317b2cf0 ---------A G 01400  PRINT"  USED.  (THUS COURSE 1.5 IS HALF-      5 ---*--- 1"
    0x5949317b2ea0 ---------A   01410  PRINT"      WAY BETWEEN 1 AND 2.                  ..."
    0x5949317b3050 ---------A G 01420  PRINT"                                           . . ."
    0x5949317b31f0 ---------A   01430  PRINT"VALUES MAY APPROACH 9.0, WHICH            6  7  8"
    0x5949317b3350 ---------A   01440  PRINT"      ITSELF IS EQUIVALENT TO 1.0"
    0x5949317b34d0 ---------A G 01450  PRINT"                                  COURSE"
    0x5949317b3550 ---------A   01460  GOSUB1450
    0x5949317b36c0 ---------A   01470  PRINT@256,""
    0x5949317b3960 ---------A   01480  PRINTTAB(15);"ONE WARP FACTOR IS THE SIZE OF"
    0x5949317b3c40 ---------A   01490  PRINTTAB(14);"ONE QUARDRANT.  THEREFORE, TO GET"
    0x5949317b3f10 ---------A   01500  PRINTTAB(13);"FROM QUARDRANT 6,5 TO 5,5 YOU WOULD"
    0x5949317b41c0 ---------A   01510  PRINTTAB(16);"USE COURSE 3, WARP FACTOR 1."
    0x5949317b4260 ---------A   01520  GOSUB1450
    0x5949317b43d0 ---------A   01530  PRINT"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"
    0x5949317b4480 ---------A   01540  PRINT
    0x5949317b4600 ---------A   01550  PRINT"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."
    0x5949317b46b0 ---------A   01560  PRINT
    0x5949317b4850 ---------A   01570  PRINT"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    0x5949317b49e0 ---------A   01580  PRINT"      <*> = YOUR STARSHIP'S POSITTION"
    0x5949317b4b90 ---------A   01590  PRINT"      +K+ = KLINGON BATTLE CRUISER"
    0x5949317b4d20 ---------A   01600  PRINT"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"
    0x5949317b4e80 ---------A   01610  PRINT"  * = STAR"
    0x5949317b4f30 ---------A   01620  PRINT
    0x5949317b50c0 ---------A   01630  PRINT"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    0x5949317b5160 ---------A   01640  GOSUB1420
    0x5949317b52d0 ---------A   01650  PRINT"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"
    0x5949317b5390 ---------A   01660  PRINT
    0x5949317b5960 ---------A   01670  PRINT"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    0x5949317b5b30 ---------A   01680  PRINT"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."
    0x5949317b5cf0 ---------A   01690  PRINT"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"
    0x5949317b5eb0 ---------A   01700  PRINT"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"
    0x5949317b6040 ---------A   01710  PRINT"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"
    0x5949317b61a0 ---------A   01720  PRINT"  KLINGONS."
    0x5949317b6200 ---------A   01730  PRINT
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
int    P_int;                                     // Basic: P 
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
    // 01000 REM NOTE
    // 01010 REM       trs2 - TRS-80 Level II BASIC tokenized file
    // 01020 CLS
    ClearScreen(0);
    // 01030 PRINT@273,"SUPER STAR TREK INSTRUCTIONS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SUPER STAR TREK INSTRUCTIONS");strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT@409,"COPYRIGHT BY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COPYRIGHT BY");strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT@534,"CREATIVE COMPUTING"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CREATIVE COMPUTING");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT@657,"MORRISTOWN, NEW JERSEY 07960"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MORRISTOWN, NEW JERSEY 07960");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 P=1
    P_int = 1;
    // 01080 GOSUB1400
    Routine_01400();
    // 01090 CLS
    ClearScreen(0);
    // 01100 PRINT@320,"1. WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"1. WHEN YOU SEE 'COMMAND ?' PRINTED, ENTER ONE OF THE LEGAL");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT"     COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM OR XXX)."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     COMMANDS (NAV,SRS,LRS,PHA,TOR,SHE,DAM,COM OR XXX).");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 GOSUB1450
    Routine_01450();
    // 01130 PRINT@320,"2. IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"2. IF YOU SHOULD TYPE IN AN ILLEGAL COMMAND, YOU'LL GET A SHORT");strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINTTAB(12);"LIST OF THE LEGAL COMMANDS PRINTED OUT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,12);strcat(buf,"LIST OF THE LEGAL COMMANDS PRINTED OUT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01150 GOSUB1450
    Routine_01450();
    // 01160 PRINT@192,"3. SOME COMMANDS REQUARE YHOU TO ENTER DATA (FOR EXAMPLE, THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"3. SOME COMMANDS REQUARE YHOU TO ENTER DATA (FOR EXAMPLE, THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01170 PRINT"      'NAV' COMMAND COMES BACK WITH 'CORSE (1-9) ?'.) IF YOU"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      'NAV' COMMAND COMES BACK WITH 'CORSE (1-9) ?'.) IF YOU");strcat(buf,"\n");fputs(buf,fh); };
    // 01180 PRINT"  TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  TYPE IN ILLEGAL DATA (LIKE NEGATIVE NUMBERS), THAT COMMAND");strcat(buf,"\n");fputs(buf,fh); };
    // 01190 PRINTTAB(22);"WILL BE ABORTED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,22);strcat(buf,"WILL BE ABORTED.");strcat(buf,"\n");fputs(buf,fh); };
    // 01200 GOSUB1450
    Routine_01450();
    // 01210 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01230 PRINT"      THE GALAXY IS DIVIDED INTO AN 8 X 8 QUADRANT GRID,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      THE GALAXY IS DIVIDED INTO AN 8 X 8 QUADRANT GRID,");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT"AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND EACH QUADRANT IS FURTHER DIVIDED INTO AN 8 X 8 SECTOR GRID");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT"  YOU WIL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  YOU WIL BE ASSIGNED A STARTING POINT SOMEWHERE IN THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01270 PRINT"GALAXY TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GALAXY TO BEGIN A TOUR OF DUTY AS COMMANDER OF THE STARSHIP");strcat(buf,"\n");fputs(buf,fh); };
    // 01280 PRINT"/ENTERPRISE/; YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"/ENTERPRISE/; YOUR MISSION: TO SEEK AND DESTROY THE FLEET OF");strcat(buf,"\n");fputs(buf,fh); };
    // 01290 PRINT"KLINGON WARSHIPS WHICH ARE MENACING THE UNITED FEDERATION OF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"KLINGON WARSHIPS WHICH ARE MENACING THE UNITED FEDERATION OF");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 PRINT"PLANETS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PLANETS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01310 GOSUB1450
    Routine_01450();
    // 01320 PRINT"  YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  YOU HAVE THE FOLLOWING COMMANDS AVAILABLE TO YOU AS");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT"      CAPTAIN OF THE STARSHIP ENTERPRISE:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      CAPTAIN OF THE STARSHIP ENTERPRISE:");strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01350 PRINT"/NAV/ COMMAND = WARP ENGINE CONTROL --"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"/NAV/ COMMAND = WARP ENGINE CONTROL --");strcat(buf,"\n");fputs(buf,fh); };
    // 01360 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01370 PRINT"  COURSE IS IN A CIRCULAR NUMERICAL       4  3  2"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  COURSE IS IN A CIRCULAR NUMERICAL       4  3  2");strcat(buf,"\n");fputs(buf,fh); };
    // 01380 PRINT"		  VECTOR ARRANGEMENT AS SHOWN              . . ."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"		  VECTOR ARRANGEMENT AS SHOWN              . . .");strcat(buf,"\n");fputs(buf,fh); };
    // 01390 PRINT"  INTERGER AND REAL VALUES MAY BE           ..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  INTERGER AND REAL VALUES MAY BE           ...");strcat(buf,"\n");fputs(buf,fh); };

void Routine_01400(){
    // 01400 PRINT"  USED.  (THUS COURSE 1.5 IS HALF-      5 ---*--- 1"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  USED.  (THUS COURSE 1.5 IS HALF-      5 ---*--- 1");strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT"      WAY BETWEEN 1 AND 2.                  ..."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      WAY BETWEEN 1 AND 2.                  ...");strcat(buf,"\n");fputs(buf,fh); };

void Routine_01420(){
    // 01420 PRINT"                                           . . ."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"                                           . . .");strcat(buf,"\n");fputs(buf,fh); };
    // 01430 PRINT"VALUES MAY APPROACH 9.0, WHICH            6  7  8"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"VALUES MAY APPROACH 9.0, WHICH            6  7  8");strcat(buf,"\n");fputs(buf,fh); };
    // 01440 PRINT"      ITSELF IS EQUIVALENT TO 1.0"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      ITSELF IS EQUIVALENT TO 1.0");strcat(buf,"\n");fputs(buf,fh); };

void Routine_01450(){
    // 01450 PRINT"                                  COURSE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"                                  COURSE");strcat(buf,"\n");fputs(buf,fh); };
    // 01460 GOSUB1450
    Routine_01450();
    // 01470 PRINT@256,""
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"");strcat(buf,"\n");fputs(buf,fh); };
    // 01480 PRINTTAB(15);"ONE WARP FACTOR IS THE SIZE OF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"ONE WARP FACTOR IS THE SIZE OF");strcat(buf,"\n");fputs(buf,fh); };
    // 01490 PRINTTAB(14);"ONE QUARDRANT.  THEREFORE, TO GET"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,14);strcat(buf,"ONE QUARDRANT.  THEREFORE, TO GET");strcat(buf,"\n");fputs(buf,fh); };
    // 01500 PRINTTAB(13);"FROM QUARDRANT 6,5 TO 5,5 YOU WOULD"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,13);strcat(buf,"FROM QUARDRANT 6,5 TO 5,5 YOU WOULD");strcat(buf,"\n");fputs(buf,fh); };
    // 01510 PRINTTAB(16);"USE COURSE 3, WARP FACTOR 1."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,16);strcat(buf,"USE COURSE 3, WARP FACTOR 1.");strcat(buf,"\n");fputs(buf,fh); };
    // 01520 GOSUB1450
    Routine_01450();
    // 01530 PRINT"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"/SRS/ COMMAND = SHORT RANGE SENSOR SCAN");strcat(buf,"\n");fputs(buf,fh); };
    // 01540 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01550 PRINT"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      SHOWS YOU A SCAN OF YOUR PRESENT QUARDRANT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01560 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINT"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      SYMBLOGY ON YOUR SENSOR SCREEN IS AS FOLLOWS:");strcat(buf,"\n");fputs(buf,fh); };
    // 01580 PRINT"      <*> = YOUR STARSHIP'S POSITTION"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      <*> = YOUR STARSHIP'S POSITTION");strcat(buf,"\n");fputs(buf,fh); };
    // 01590 PRINT"      +K+ = KLINGON BATTLE CRUISER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      +K+ = KLINGON BATTLE CRUISER");strcat(buf,"\n");fputs(buf,fh); };
    // 01600 PRINT"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      >!< = FEDERATION STARBASE (REFUEL/REPAIR/RE-ARM HERE !");strcat(buf,"\n");fputs(buf,fh); };
    // 01610 PRINT"  * = STAR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  * = STAR");strcat(buf,"\n");fputs(buf,fh); };
    // 01620 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01630 PRINT"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      A CONDENSED 'STATUS REPORT' WILL ALSO BE PRESENTED.");strcat(buf,"\n");fputs(buf,fh); };
    // 01640 GOSUB1420
    Routine_01420();
    // 01650 PRINT"/LRS/ COMMAND = LONG RANGE SENSOR SCAN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"/LRS/ COMMAND = LONG RANGE SENSOR SCAN");strcat(buf,"\n");fputs(buf,fh); };
    // 01660 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01670 PRINT"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"      SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE");strcat(buf,"\n");fputs(buf,fh); };
    // 01680 PRINT"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN)."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  OF THE ENTERPRISE (WHICH IS IN THE MIDDLE OF THE SCAN).");strcat(buf,"\n");fputs(buf,fh); };
    // 01690 PRINT"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  THE SCAN IS CODED IN THE FORM /###/, WHER THE UNITS DIGIT");strcat(buf,"\n");fputs(buf,fh); };
    // 01700 PRINT"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  IS THE NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF");strcat(buf,"\n");fputs(buf,fh); };
    // 01710 PRINT"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  STARBASES, AND THE HUNDREDS DIGIT IS THE NUMBER OF");strcat(buf,"\n");fputs(buf,fh); };
    // 01720 PRINT"  KLINGONS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  KLINGONS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01730 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
