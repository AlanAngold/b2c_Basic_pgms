/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/pizza.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x63ca86eca6d0 ---------A   00005  PRINT TAB(33);"PIZZA"
    0x63ca86eca670 ---------A   00010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x63ca86ebb2b0 ---------A   00015  PRINT: PRINT: PRINT
    0x63ca86ecbb80 ---------A   00020  DIM S$(16),M$(4)
    0x63ca86ecc680 ---------A   00030  PRINT "PIZZA DELIVERY GAME": PRINT
    0x63ca86ecd1a0 ---------A   00050  INPUT "WHAT IS YOUR FIRST NAME";N$: PRINT
    0x63ca86ed2840 ---------A   00080  PRINT "HI, ";N$;".  IN THIS GAME YOU ARE TO TAKE ORDERS"
    0x63ca86ed29a0 ---------A   00090  PRINT "FOR PIZZAS.  THEN YOU ARE TO TELL A DELIVERY BOY"
    0x63ca86ed2b80 ---------A   00100  PRINT "WHERE TO DELIVER THE ORDERED PIZZAS.": PRINT: PRINT
    0x63ca86ed2f00 ---------A   00140  FOR I=1 TO 16
    0x63ca86ecced0 ---------A   00150  READ S$(I)
    0x63ca86ed3220 ---------A   00160  NEXT I
    0x63ca86ed3510 ---------A   00170  FOR I=1 TO 4
    0x63ca86ed3750 ---------A   00180  READ M$(I)
    0x63ca86ed3880 ---------A   00190  NEXT I
    0x63ca86ed4640 ---------A   00200  DATA "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O"
    0x63ca86ed4b30 ---------A   00210  DATA "P","1","2","3","4"
    0x63ca86ed4ce0 ---------A   00230  PRINT "MAP OF THE CITY OF HYATTSVILLE": PRINT
    0x63ca86ed4e20 ---------A   00250  PRINT " -----1-----2-----3-----4-----"
    0x63ca86ed5100 ---------A   00260  K=4
    0x63ca86ed53f0 ---------A   00270  FOR I=1 TO 4
    0x63ca86ed5910 ---------A   00280  PRINT "-": PRINT "-": PRINT"-": PRINT "-"
    0x63ca86ed5b70 ---------A   00320  PRINT M$(K);
    0x63ca86ed61a0 ---------A   00330  S1=16-4*I+1
    0x63ca86ed6d90 ---------A   00340  PRINT "     ";S$(S1);"     ";S$(S1+1);"     ";S$(S1+2);"     ";
    0x63ca86ed73b0 ---------A   00350  PRINT S$(S1+3);"     ";M$(K)
    0x63ca86ed76f0 ---------A   00380  K=K-1
    0x63ca86ed7820 ---------A   00390  NEXT I
    0x63ca86ed7d90 ---------A   00400  PRINT "-": PRINT "-": PRINT "-": PRINT "-"
    0x63ca86ed7f80 ---------A   00440  PRINT " -----1-----2-----3-----4-----": PRINT
    0x63ca86ed8120 ---------A   00460  PRINT "THE OUTPUT IS A MAP OF THE HOMES WHERE"
    0x63ca86ed8310 ---------A   00470  PRINT "YOU ARE TO SEND PIZZAS.": PRINT
    0x63ca86ed84a0 ---------A   00490  PRINT "YOUR JOB IS TO GIVE A TRUCK DRIVER"
    0x63ca86ed8840 ---------A   00500  PRINT "THE LOCATION OR COORDINATES OF THE"
    0x63ca86ed8a30 ---------A   00510  PRINT "HOME ORDERING THE PIZZA.": PRINT
    0x63ca86ed8c90 ---------A T 00520  INPUT "DO YOU NEED MORE DIRECTIONS";A$
    0x63ca86ed8f10 ---------A   00530  IF A$="YES" THEN 590
    0x63ca86ed91b0 ---------A   00540  IF A$="NO" THEN 750
    0x63ca86ed93a0 ---------A   00550  PRINT "'YES' OR 'NO' PLEASE, NOW THEN,": GOTO 520
    0x63ca86ed9580 ---------A T 00590  PRINT: PRINT "SOMEBODY WILL ASK FOR A PIZZA TO BE"
    0x63ca86ed9720 ---------A   00600  PRINT "DELIVERED.  THEN A DELIVERY BOY WILL"
    0x63ca86ed99f0 ---------A   00610  PRINT "ASK YOU FOR THE LOCATION.":PRINT "     EXAMPLE:"
    0x63ca86ed9b80 ---------A   00620  PRINT "THIS IS J.  PLEASE SEND A PIZZA."
    0x63ca86ed9f00 ---------A   00640  PRINT "DRIVER TO ";N$;".  WHERE DOES J LIVE?"
    0x63ca86eda0e0 ---------A   00650  PRINT "YOUR ANSWER WOULD BE 2,3": PRINT
    0x63ca86eda270 ---------A   00660  INPUT "UNDERSTAND";A$
    0x63ca86eda520 ---------A   00670  IF A$="YES" THEN 690
    0x63ca86eda6b0 ---------A   00680  PRINT "THIS JOB IS DEFINITELY TOO DIFFICULT FOR YOU. THANKS ANYWAY"
    0x63ca86eda760 ---------A   00685  GOTO 999
    0x63ca86eda940 ---------A T 00690  PRINT "GOOD.  YOU ARE NOW READY TO START TAKING ORDERS.": PRINT
    0x63ca86edab00 ---------A   00700  PRINT "GOOD LUCK!!": PRINT
    0x63ca86edadf0 ---------A T 00750  FOR I=1 TO 5
    0x63ca86edb500 ---------A   00760  S=INT(RND(1)*16+1): PRINT
    0x63ca86edbb70 ---------A   00770  PRINT "HELLO ";N$;"'S PIZZA.  THIS IS ";S$(S);".";
    0x63ca86edbd10 ---------A   00775  PRINT "  PLEASE SEND A PIZZA."
    0x63ca86edc370 ---------A T 00780  PRINT "  DRIVER TO ";N$;":  WHERE DOES ";S$(S);" LIVE";
    0x63ca86edc7f0 ---------A   00790  INPUT A(1),A(2)
    0x63ca86edcfd0 ---------A   00870  T=A(1)+(A(2)-1)*4
    0x63ca86edd270 ---------A   00880  IF T=S THEN 920
    0x63ca86edd6d0 ---------A   00890  PRINT "THIS IS ";S$(T);".  I DID NOT ORDER A PIZZA."
    0x63ca86eddcb0 ---------A   00900  PRINT "I LIVE AT ";A(1);",";A(2)
    0x63ca86eddd60 ---------A   00910  GOTO 780
    0x63ca86ede3a0 ---------A T 00920  PRINT "HELLO "N$;".  THIS IS ";S$(S);", THANKS FOR THE PIZZA."
    0x63ca86ede4e0 ---------A   00930  NEXT I
    0x63ca86ede720 ---------A   00940  PRINT: INPUT "DO YOU WANT TO DELIVER MORE PIZZAS";A$
    0x63ca86ededd0 ---------A   00960  IF A$="YES" THEN 750
    0x63ca86edf1f0 ---------A   00970  PRINT: PRINT "O.K. ";N$;", SEE YOU LATER!":PRINT
    0x63ca86edf250 ---------A T 00999  END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00520      00550T
     00590      00530T
     00690      00670T
     00750      00540T, 00960T
     00780      00910T
     00920      00880T
     00999      00685T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x63ca86eca6d0 (00005)   0x63ca86eca6d0 (00005)   0x63ca86edf250 (00999)   0x63ca86edf250 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/pizza.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x63ca86eca6d0 ---------A   00005  PRINT TAB(33);"PIZZA"
    0x63ca86eca670 ---------A   00010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x63ca86ecb2d0 ----------   00015  PRINT
    0x63ca86ecb910 ----------        a PRINT
    0x63ca86ebb2b0 ---------A        b PRINT
    0x63ca86ecbb80 ---------A   00020  DIM S$(16),M$(4)
    0x63ca86ecb500 ----------   00030  PRINT "PIZZA DELIVERY GAME"
    0x63ca86ecc680 ---------A        a PRINT
    0x63ca86ecd140 ----------   00050  INPUT "WHAT IS YOUR FIRST NAME";N$
    0x63ca86ecd1a0 ---------A        a PRINT
    0x63ca86ed2840 ---------A   00080  PRINT "HI, ";N$;".  IN THIS GAME YOU ARE TO TAKE ORDERS"
    0x63ca86ed29a0 ---------A   00090  PRINT "FOR PIZZAS.  THEN YOU ARE TO TELL A DELIVERY BOY"
    0x63ca86ed2ac0 ----------   00100  PRINT "WHERE TO DELIVER THE ORDERED PIZZAS."
    0x63ca86ed2b20 ----------        a PRINT
    0x63ca86ed2b80 ---------A        b PRINT
    0x63ca86ed2f00 ---------A   00140  FOR I=1 TO 16
    0x63ca86ecced0 ---------A   00150  READ S$(I)
    0x63ca86ed3220 ---------A   00160  NEXT I
    0x63ca86ed3510 ---------A   00170  FOR I=1 TO 4
    0x63ca86ed3750 ---------A   00180  READ M$(I)
    0x63ca86ed3880 ---------A   00190  NEXT I
    0x63ca86ed4640 ---------A   00200  DATA "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O"
    0x63ca86ed4b30 ---------A   00210  DATA "P","1","2","3","4"
    0x63ca86ed4c40 ----------   00230  PRINT "MAP OF THE CITY OF HYATTSVILLE"
    0x63ca86ed4ce0 ---------A        a PRINT
    0x63ca86ed4e20 ---------A   00250  PRINT " -----1-----2-----3-----4-----"
    0x63ca86ed5100 ---------A   00260  K=4
    0x63ca86ed53f0 ---------A   00270  FOR I=1 TO 4
    0x63ca86ed5530 ----------   00280  PRINT "-"
    0x63ca86ed5670 ----------        a PRINT "-"
    0x63ca86ed57b0 ----------        b PRINT"-"
    0x63ca86ed5910 ---------A        c PRINT "-"
    0x63ca86ed5b70 ---------A   00320  PRINT M$(K);
    0x63ca86ed61a0 ---------A   00330  S1=16-4*I+1
    0x63ca86ed6d90 ---------A   00340  PRINT "     ";S$(S1);"     ";S$(S1+1);"     ";S$(S1+2);"     ";
    0x63ca86ed73b0 ---------A   00350  PRINT S$(S1+3);"     ";M$(K)
    0x63ca86ed76f0 ---------A   00380  K=K-1
    0x63ca86ed7820 ---------A   00390  NEXT I
    0x63ca86ed7990 ----------   00400  PRINT "-"
    0x63ca86ed7ad0 ----------        a PRINT "-"
    0x63ca86ed7c10 ----------        b PRINT "-"
    0x63ca86ed7d90 ---------A        c PRINT "-"
    0x63ca86ed7ee0 ----------   00440  PRINT " -----1-----2-----3-----4-----"
    0x63ca86ed7f80 ---------A        a PRINT
    0x63ca86ed8120 ---------A   00460  PRINT "THE OUTPUT IS A MAP OF THE HOMES WHERE"
    0x63ca86ed8270 ----------   00470  PRINT "YOU ARE TO SEND PIZZAS."
    0x63ca86ed8310 ---------A        a PRINT
    0x63ca86ed84a0 ---------A   00490  PRINT "YOUR JOB IS TO GIVE A TRUCK DRIVER"
    0x63ca86ed8840 ---------A   00500  PRINT "THE LOCATION OR COORDINATES OF THE"
    0x63ca86ed8990 ----------   00510  PRINT "HOME ORDERING THE PIZZA."
    0x63ca86ed8a30 ---------A        a PRINT
    0x63ca86ed8c90 ---------A T 00520  INPUT "DO YOU NEED MORE DIRECTIONS";A$
    0x63ca86ed8f10 ---------A   00530  IF A$="YES" THEN 590
    0x63ca86ed91b0 ---------A   00540  IF A$="NO" THEN 750
    0x63ca86ed9300 ----------   00550  PRINT "'YES' OR 'NO' PLEASE, NOW THEN,"
    0x63ca86ed93a0 ---------A        a GOTO 520
    0x63ca86ed93f0 ---------- T 00590  PRINT
    0x63ca86ed9580 ---------A T      a PRINT "SOMEBODY WILL ASK FOR A PIZZA TO BE"
    0x63ca86ed9720 ---------A   00600  PRINT "DELIVERED.  THEN A DELIVERY BOY WILL"
    0x63ca86ed9870 ----------   00610  PRINT "ASK YOU FOR THE LOCATION."
    0x63ca86ed99f0 ---------A        a PRINT "     EXAMPLE:"
    0x63ca86ed9b80 ---------A   00620  PRINT "THIS IS J.  PLEASE SEND A PIZZA."
    0x63ca86ed9f00 ---------A   00640  PRINT "DRIVER TO ";N$;".  WHERE DOES J LIVE?"
    0x63ca86eda050 ----------   00650  PRINT "YOUR ANSWER WOULD BE 2,3"
    0x63ca86eda0e0 ---------A        a PRINT
    0x63ca86eda270 ---------A   00660  INPUT "UNDERSTAND";A$
    0x63ca86eda520 ---------A   00670  IF A$="YES" THEN 690
    0x63ca86eda6b0 ---------A   00680  PRINT "THIS JOB IS DEFINITELY TOO DIFFICULT FOR YOU. THANKS ANYWAY"
    0x63ca86eda760 ---------A   00685  GOTO 999
    0x63ca86eda8b0 ---------- T 00690  PRINT "GOOD.  YOU ARE NOW READY TO START TAKING ORDERS."
    0x63ca86eda940 ---------A T      a PRINT
    0x63ca86edaa80 ----------   00700  PRINT "GOOD LUCK!!"
    0x63ca86edab00 ---------A        a PRINT
    0x63ca86edadf0 ---------A T 00750  FOR I=1 TO 5
    0x63ca86edb470 ----------   00760  S=INT(RND(1)*16+1)
    0x63ca86edb500 ---------A        a PRINT
    0x63ca86edbb70 ---------A   00770  PRINT "HELLO ";N$;"'S PIZZA.  THIS IS ";S$(S);".";
    0x63ca86edbd10 ---------A   00775  PRINT "  PLEASE SEND A PIZZA."
    0x63ca86edc370 ---------A T 00780  PRINT "  DRIVER TO ";N$;":  WHERE DOES ";S$(S);" LIVE";
    0x63ca86edc7f0 ---------A   00790  INPUT A(1),A(2)
    0x63ca86edcfd0 ---------A   00870  T=A(1)+(A(2)-1)*4
    0x63ca86edd270 ---------A   00880  IF T=S THEN 920
    0x63ca86edd6d0 ---------A   00890  PRINT "THIS IS ";S$(T);".  I DID NOT ORDER A PIZZA."
    0x63ca86eddcb0 ---------A   00900  PRINT "I LIVE AT ";A(1);",";A(2)
    0x63ca86eddd60 ---------A   00910  GOTO 780
    0x63ca86ede3a0 ---------A T 00920  PRINT "HELLO "N$;".  THIS IS ";S$(S);", THANKS FOR THE PIZZA."
    0x63ca86ede4e0 ---------A   00930  NEXT I
    0x63ca86ede580 ----------   00940  PRINT
    0x63ca86ede720 ---------A        a INPUT "DO YOU WANT TO DELIVER MORE PIZZAS";A$
    0x63ca86ededd0 ---------A   00960  IF A$="YES" THEN 750
    0x63ca86edee30 ----------   00970  PRINT
    0x63ca86edf170 ----------        a PRINT "O.K. ";N$;", SEE YOU LATER!"
    0x63ca86edf1f0 ---------A        b PRINT
    0x63ca86edf250 ---------A T 00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/pizza.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x63ca86eca6d0 ---------A   01000  PRINT TAB(33);"PIZZA"
    0x63ca86eca670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x63ca86ecb2d0 ----------   01020  PRINT
    0x63ca86ecb910 ----------   01030  PRINT
    0x63ca86ebb2b0 ---------A   01040  PRINT
    0x63ca86ecbb80 ---------A   01050  DIM S$(16),M$(4)
    0x63ca86ecb500 ----------   01060  PRINT "PIZZA DELIVERY GAME"
    0x63ca86ecc680 ---------A   01070  PRINT
    0x63ca86ecd140 ----------   01080  INPUT "WHAT IS YOUR FIRST NAME";N$
    0x63ca86ecd1a0 ---------A   01090  PRINT
    0x63ca86ed2840 ---------A   01100  PRINT "HI, ";N$;".  IN THIS GAME YOU ARE TO TAKE ORDERS"
    0x63ca86ed29a0 ---------A   01110  PRINT "FOR PIZZAS.  THEN YOU ARE TO TELL A DELIVERY BOY"
    0x63ca86ed2ac0 ----------   01120  PRINT "WHERE TO DELIVER THE ORDERED PIZZAS."
    0x63ca86ed2b20 ----------   01130  PRINT
    0x63ca86ed2b80 ---------A   01140  PRINT
    0x63ca86ed2f00 ---------A   01150  FOR I=1 TO 16
    0x63ca86ecced0 ---------A   01160  READ S$(I)
    0x63ca86ed3220 ---------A   01170  NEXT I
    0x63ca86ed3510 ---------A   01180  FOR I=1 TO 4
    0x63ca86ed3750 ---------A   01190  READ M$(I)
    0x63ca86ed3880 ---------A   01200  NEXT I
    0x63ca86ed4640 ---------A   01210  DATA "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O"
    0x63ca86ed4b30 ---------A   01220  DATA "P","1","2","3","4"
    0x63ca86ed4c40 ----------   01230  PRINT "MAP OF THE CITY OF HYATTSVILLE"
    0x63ca86ed4ce0 ---------A   01240  PRINT
    0x63ca86ed4e20 ---------A   01250  PRINT " -----1-----2-----3-----4-----"
    0x63ca86ed5100 ---------A   01260  K=4
    0x63ca86ed53f0 ---------A   01270  FOR I=1 TO 4
    0x63ca86ed5530 ----------   01280  PRINT "-"
    0x63ca86ed5670 ----------   01290  PRINT "-"
    0x63ca86ed57b0 ----------   01300  PRINT"-"
    0x63ca86ed5910 ---------A   01310  PRINT "-"
    0x63ca86ed5b70 ---------A   01320  PRINT M$(K);
    0x63ca86ed61a0 ---------A   01330  S1=16-4*I+1
    0x63ca86ed6d90 ---------A   01340  PRINT "     ";S$(S1);"     ";S$(S1+1);"     ";S$(S1+2);"     ";
    0x63ca86ed73b0 ---------A   01350  PRINT S$(S1+3);"     ";M$(K)
    0x63ca86ed76f0 ---------A   01360  K=K-1
    0x63ca86ed7820 ---------A   01370  NEXT I
    0x63ca86ed7990 ----------   01380  PRINT "-"
    0x63ca86ed7ad0 ----------   01390  PRINT "-"
    0x63ca86ed7c10 ----------   01400  PRINT "-"
    0x63ca86ed7d90 ---------A   01410  PRINT "-"
    0x63ca86ed7ee0 ----------   01420  PRINT " -----1-----2-----3-----4-----"
    0x63ca86ed7f80 ---------A   01430  PRINT
    0x63ca86ed8120 ---------A   01440  PRINT "THE OUTPUT IS A MAP OF THE HOMES WHERE"
    0x63ca86ed8270 ----------   01450  PRINT "YOU ARE TO SEND PIZZAS."
    0x63ca86ed8310 ---------A   01460  PRINT
    0x63ca86ed84a0 ---------A   01470  PRINT "YOUR JOB IS TO GIVE A TRUCK DRIVER"
    0x63ca86ed8840 ---------A   01480  PRINT "THE LOCATION OR COORDINATES OF THE"
    0x63ca86ed8990 ----------   01490  PRINT "HOME ORDERING THE PIZZA."
    0x63ca86ed8a30 ---------A   01500  PRINT
    0x63ca86ed8c90 ---------A   01510  INPUT "DO YOU NEED MORE DIRECTIONS";A$
    0x63ca86ed8f10 ---------A   01520  IF A$="YES" THEN 1570
    0x63ca86ed91b0 ---------A   01530  IF A$="NO" THEN 1730
    0x63ca86ed9300 ----------   01540  PRINT "'YES' OR 'NO' PLEASE, NOW THEN,"
    0x63ca86ed93a0 ---------A   01550  GOTO 1510
    0x63ca86ed93f0 ----------   01560  PRINT
    0x63ca86ed9580 ---------A   01570  PRINT "SOMEBODY WILL ASK FOR A PIZZA TO BE"
    0x63ca86ed9720 ---------A   01580  PRINT "DELIVERED.  THEN A DELIVERY BOY WILL"
    0x63ca86ed9870 ----------   01590  PRINT "ASK YOU FOR THE LOCATION."
    0x63ca86ed99f0 ---------A   01600  PRINT "     EXAMPLE:"
    0x63ca86ed9b80 ---------A   01610  PRINT "THIS IS J.  PLEASE SEND A PIZZA."
    0x63ca86ed9f00 ---------A   01620  PRINT "DRIVER TO ";N$;".  WHERE DOES J LIVE?"
    0x63ca86eda050 ----------   01630  PRINT "YOUR ANSWER WOULD BE 2,3"
    0x63ca86eda0e0 ---------A   01640  PRINT
    0x63ca86eda270 ---------A   01650  INPUT "UNDERSTAND";A$
    0x63ca86eda520 ---------A   01660  IF A$="YES" THEN 1700
    0x63ca86eda6b0 ---------A   01670  PRINT "THIS JOB IS DEFINITELY TOO DIFFICULT FOR YOU. THANKS ANYWAY"
    0x63ca86eda760 ---------A   01680  GOTO 1930
    0x63ca86eda8b0 ----------   01690  PRINT "GOOD.  YOU ARE NOW READY TO START TAKING ORDERS."
    0x63ca86eda940 ---------A   01700  PRINT
    0x63ca86edaa80 ----------   01710  PRINT "GOOD LUCK!!"
    0x63ca86edab00 ---------A   01720  PRINT
    0x63ca86edadf0 ---------A   01730  FOR I=1 TO 5
    0x63ca86edb470 ----------   01740  S=INT(RND(1)*16+1)
    0x63ca86edb500 ---------A   01750  PRINT
    0x63ca86edbb70 ---------A   01760  PRINT "HELLO ";N$;"'S PIZZA.  THIS IS ";S$(S);".";
    0x63ca86edbd10 ---------A   01770  PRINT "  PLEASE SEND A PIZZA."
    0x63ca86edc370 ---------A   01780  PRINT "  DRIVER TO ";N$;":  WHERE DOES ";S$(S);" LIVE";
    0x63ca86edc7f0 ---------A   01790  INPUT A(1),A(2)
    0x63ca86edcfd0 ---------A   01800  T=A(1)+(A(2)-1)*4
    0x63ca86edd270 ---------A   01810  IF T=S THEN 1850
    0x63ca86edd6d0 ---------A   01820  PRINT "THIS IS ";S$(T);".  I DID NOT ORDER A PIZZA."
    0x63ca86eddcb0 ---------A   01830  PRINT "I LIVE AT ";A(1);",";A(2)
    0x63ca86eddd60 ---------A   01840  GOTO 1780
    0x63ca86ede3a0 ---------A   01850  PRINT "HELLO "N$;".  THIS IS ";S$(S);", THANKS FOR THE PIZZA."
    0x63ca86ede4e0 ---------A   01860  NEXT I
    0x63ca86ede580 ----------   01870  PRINT
    0x63ca86ede720 ---------A   01880  INPUT "DO YOU WANT TO DELIVER MORE PIZZAS";A$
    0x63ca86ededd0 ---------A   01890  IF A$="YES" THEN 1730
    0x63ca86edee30 ----------   01900  PRINT
    0x63ca86edf170 ----------   01910  PRINT "O.K. ";N$;", SEE YOU LATER!"
    0x63ca86edf1f0 ---------A   01920  PRINT
    0x63ca86edf250 ---------A   01930  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01920 - 10000    8090 

 */



/*
 *  Symbol Table Listing for 'basic/pizza.bas'
 *
    A               Array    Integer         {0,9} 
    A$                       String      
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
    I                        Integer     
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K                        Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M$              Array    String          {0,3} 
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
    S                        Integer     
    S$              Array    String          {0,15} 
    S1                       Integer     
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
 *  Listing of basic/pizza.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x63ca86eca6d0 ---------A   01000  PRINT TAB(33);"PIZZA"
    0x63ca86eca670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x63ca86ecb2d0 ---------A   01020  PRINT
    0x63ca86ecb910 ---------A   01030  PRINT
    0x63ca86ebb2b0 ---------A   01040  PRINT
    0x63ca86ecbb80 ---------A   01050  DIM S$(16),M$(4)
    0x63ca86ecb500 ---------A   01060  PRINT "PIZZA DELIVERY GAME"
    0x63ca86ecc680 ---------A   01070  PRINT
    0x63ca86ecd140 ---------A   01080  INPUT "WHAT IS YOUR FIRST NAME";N$
    0x63ca86ecd1a0 ---------A   01090  PRINT
    0x63ca86ed2840 ---------A   01100  PRINT "HI, ";N$;".  IN THIS GAME YOU ARE TO TAKE ORDERS"
    0x63ca86ed29a0 ---------A   01110  PRINT "FOR PIZZAS.  THEN YOU ARE TO TELL A DELIVERY BOY"
    0x63ca86ed2ac0 ---------A   01120  PRINT "WHERE TO DELIVER THE ORDERED PIZZAS."
    0x63ca86ed2b20 ---------A   01130  PRINT
    0x63ca86ed2b80 ---------A   01140  PRINT
    0x63ca86ed2f00 ---------A   01150  FOR I=1 TO 16
    0x63ca86ecced0 ---------A   01160  READ S$(I)
    0x63ca86ed3220 ---------A   01170  NEXT I
    0x63ca86ed3510 ---------A   01180  FOR I=1 TO 4
    0x63ca86ed3750 ---------A   01190  READ M$(I)
    0x63ca86ed3880 ---------A   01200  NEXT I
    0x63ca86ed4640 ---------A   01210  DATA "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O"
    0x63ca86ed4b30 ---------A   01220  DATA "P","1","2","3","4"
    0x63ca86ed4c40 ---------A   01230  PRINT "MAP OF THE CITY OF HYATTSVILLE"
    0x63ca86ed4ce0 ---------A   01240  PRINT
    0x63ca86ed4e20 ---------A   01250  PRINT " -----1-----2-----3-----4-----"
    0x63ca86ed5100 ---------A   01260  K=4
    0x63ca86ed53f0 ---------A   01270  FOR I=1 TO 4
    0x63ca86ed5530 ---------A   01280  PRINT "-"
    0x63ca86ed5670 ---------A   01290  PRINT "-"
    0x63ca86ed57b0 ---------A   01300  PRINT"-"
    0x63ca86ed5910 ---------A   01310  PRINT "-"
    0x63ca86ed5b70 ---------A   01320  PRINT M$(K);
    0x63ca86ed61a0 ---------A   01330  S1=16-4*I+1
    0x63ca86ed6d90 ---------A   01340  PRINT "     ";S$(S1);"     ";S$(S1+1);"     ";S$(S1+2);"     ";
    0x63ca86ed73b0 ---------A   01350  PRINT S$(S1+3);"     ";M$(K)
    0x63ca86ed76f0 ---------A   01360  K=K-1
    0x63ca86ed7820 ---------A   01370  NEXT I
    0x63ca86ed7990 ---------A   01380  PRINT "-"
    0x63ca86ed7ad0 ---------A   01390  PRINT "-"
    0x63ca86ed7c10 ---------A   01400  PRINT "-"
    0x63ca86ed7d90 ---------A   01410  PRINT "-"
    0x63ca86ed7ee0 ---------A   01420  PRINT " -----1-----2-----3-----4-----"
    0x63ca86ed7f80 ---------A   01430  PRINT
    0x63ca86ed8120 ---------A   01440  PRINT "THE OUTPUT IS A MAP OF THE HOMES WHERE"
    0x63ca86ed8270 ---------A   01450  PRINT "YOU ARE TO SEND PIZZAS."
    0x63ca86ed8310 ---------A   01460  PRINT
    0x63ca86ed84a0 ---------A   01470  PRINT "YOUR JOB IS TO GIVE A TRUCK DRIVER"
    0x63ca86ed8840 ---------A   01480  PRINT "THE LOCATION OR COORDINATES OF THE"
    0x63ca86ed8990 ---------A   01490  PRINT "HOME ORDERING THE PIZZA."
    0x63ca86ed8a30 ---------A   01500  PRINT
    0x63ca86ed8c90 ---------A T 01510  INPUT "DO YOU NEED MORE DIRECTIONS";A$
    0x63ca86ed8f10 ---------A   01520  IF A$="YES" THEN 1560
    0x63ca86ed91b0 ---------A   01530  IF A$="NO" THEN 1710
    0x63ca86ed9300 ---------A   01540  PRINT "'YES' OR 'NO' PLEASE, NOW THEN,"
    0x63ca86ed93a0 ---------A   01550  GOTO 1510
    0x63ca86ed9580 ---------A T 01560  PRINT "SOMEBODY WILL ASK FOR A PIZZA TO BE"
    0x63ca86ed9720 ---------A   01570  PRINT "DELIVERED.  THEN A DELIVERY BOY WILL"
    0x63ca86ed9870 ---------A   01580  PRINT "ASK YOU FOR THE LOCATION."
    0x63ca86ed99f0 ---------A   01590  PRINT "     EXAMPLE:"
    0x63ca86ed9b80 ---------A   01600  PRINT "THIS IS J.  PLEASE SEND A PIZZA."
    0x63ca86ed9f00 ---------A   01610  PRINT "DRIVER TO ";N$;".  WHERE DOES J LIVE?"
    0x63ca86eda050 ---------A   01620  PRINT "YOUR ANSWER WOULD BE 2,3"
    0x63ca86eda0e0 ---------A   01630  PRINT
    0x63ca86eda270 ---------A   01640  INPUT "UNDERSTAND";A$
    0x63ca86eda520 ---------A   01650  IF A$="YES" THEN 1680
    0x63ca86eda6b0 ---------A   01660  PRINT "THIS JOB IS DEFINITELY TOO DIFFICULT FOR YOU. THANKS ANYWAY"
    0x63ca86eda760 ---------A   01670  GOTO 1910
    0x63ca86eda940 ---------A T 01680  PRINT
    0x63ca86edaa80 ---------A   01690  PRINT "GOOD LUCK!!"
    0x63ca86edab00 ---------A   01700  PRINT
    0x63ca86edadf0 ---------A T 01710  FOR I=1 TO 5
    0x63ca86edb470 ---------A   01720  S=INT(RND(1)*16+1)
    0x63ca86edb500 ---------A   01730  PRINT
    0x63ca86edbb70 ---------A   01740  PRINT "HELLO ";N$;"'S PIZZA.  THIS IS ";S$(S);".";
    0x63ca86edbd10 ---------A   01750  PRINT "  PLEASE SEND A PIZZA."
    0x63ca86edc370 ---------A T 01760  PRINT "  DRIVER TO ";N$;":  WHERE DOES ";S$(S);" LIVE";
    0x63ca86edc7f0 ---------A   01770  INPUT A(1),A(2)
    0x63ca86edcfd0 ---------A   01780  T=A(1)+(A(2)-1)*4
    0x63ca86edd270 ---------A   01790  IF T=S THEN 1830
    0x63ca86edd6d0 ---------A   01800  PRINT "THIS IS ";S$(T);".  I DID NOT ORDER A PIZZA."
    0x63ca86eddcb0 ---------A   01810  PRINT "I LIVE AT ";A(1);",";A(2)
    0x63ca86eddd60 ---------A   01820  GOTO 1760
    0x63ca86ede3a0 ---------A T 01830  PRINT "HELLO "N$;".  THIS IS ";S$(S);", THANKS FOR THE PIZZA."
    0x63ca86ede4e0 ---------A   01840  NEXT I
    0x63ca86ede580 ---------A   01850  PRINT
    0x63ca86ede720 ---------A   01860  INPUT "DO YOU WANT TO DELIVER MORE PIZZAS";A$
    0x63ca86ededd0 ---------A   01870  IF A$="YES" THEN 1710
    0x63ca86edee30 ---------A   01880  PRINT
    0x63ca86edf170 ---------A   01890  PRINT "O.K. ";N$;", SEE YOU LATER!"
    0x63ca86edf1f0 ---------A   01900  PRINT
    0x63ca86edf250 ---------A T 01910  END
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
char* data_01210s[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O"};
char* data_01220s[]={"P","1","2","3","4"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1210, 15,data_01210s},
    { 1220,  5,data_01220s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int_arr[10];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    I_int;                                     // Basic: I 
int    K_int;                                     // Basic: K 
char*  M_str_arr[4];                              // Basic: M$ 
char*  N_str;                                     // Basic: N$ 
int    S_int;                                     // Basic: S 
char*  S_str_arr[16];                             // Basic: S$ 
int    S1_int;                                    // Basic: S1 
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
    // 01000 PRINT TAB(33);"PIZZA"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"PIZZA");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 DIM S$(16),M$(4)
    // 01060 PRINT "PIZZA DELIVERY GAME"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"PIZZA DELIVERY GAME");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01080 INPUT "WHAT IS YOUR FIRST NAME";N$
    // Start of Basic INPUT statement 01080
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"WHAT IS YOUR FIRST NAME");
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
    // 01100 PRINT "HI, ";N$;".  IN THIS GAME YOU ARE TO TAKE ORDERS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HI, "); strcat(buf,N_str);strcat(buf,".  IN THIS GAME YOU ARE TO TAKE ORDERS");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "FOR PIZZAS.  THEN YOU ARE TO TELL A DELIVERY BOY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"FOR PIZZAS.  THEN YOU ARE TO TELL A DELIVERY BOY");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "WHERE TO DELIVER THE ORDERED PIZZAS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"WHERE TO DELIVER THE ORDERED PIZZAS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01150 FOR I=1 TO 16
    for(I_int=1;I_int<=16;I_int++){
        // 01160 READ S$(I)
        S_str_arr[I_int] = Get_Data_String();
        // 01170 NEXT I
        int dummy_1170=0; // Ignore this line.
    }; // End-For(I_int)
    // 01180 FOR I=1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 01190 READ M$(I)
        M_str_arr[I_int] = Get_Data_String();
        // 01200 NEXT I
        int dummy_1200=0; // Ignore this line.
    }; // End-For(I_int)
    // 01210 DATA "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O"
    // 01220 DATA "P","1","2","3","4"
    // 01230 PRINT "MAP OF THE CITY OF HYATTSVILLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MAP OF THE CITY OF HYATTSVILLE");strcat(buf,"\n");fputs(buf,fh); };
    // 01240 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT " -----1-----2-----3-----4-----"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," -----1-----2-----3-----4-----");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 K=4
    K_int = 4;
    // 01270 FOR I=1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 01280 PRINT "-"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"-");strcat(buf,"\n");fputs(buf,fh); };
        // 01290 PRINT "-"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"-");strcat(buf,"\n");fputs(buf,fh); };
        // 01300 PRINT"-"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"-");strcat(buf,"\n");fputs(buf,fh); };
        // 01310 PRINT "-"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"-");strcat(buf,"\n");fputs(buf,fh); };
        // 01320 PRINT M$(K);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,M_str_arr[K_int]);fputs(buf,fh); };
        // 01330 S1=16-4*I+1
        S1_int = 16-4*I_int+1;
        // 01340 PRINT "     ";S$(S1);"     ";S$(S1+1);"     ";S$(S1+2);"     ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     "); strcat(buf,S_str_arr[S1_int]);strcat(buf,"     "); strcat(buf,S_str_arr[S1_int+1]);strcat(buf,"     "); strcat(buf,S_str_arr[S1_int+2]);strcat(buf,"     ");fputs(buf,fh); };
        // 01350 PRINT S$(S1+3);"     ";M$(K)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,S_str_arr[S1_int+3]);strcat(buf,"     "); strcat(buf,M_str_arr[K_int]);strcat(buf,"\n");fputs(buf,fh); };
        // 01360 K=K-1
        K_int = K_int-1;
        // 01370 NEXT I
        int dummy_1370=0; // Ignore this line.
    }; // End-For(I_int)
    // 01380 PRINT "-"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"-");strcat(buf,"\n");fputs(buf,fh); };
    // 01390 PRINT "-"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"-");strcat(buf,"\n");fputs(buf,fh); };
    // 01400 PRINT "-"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"-");strcat(buf,"\n");fputs(buf,fh); };
    // 01410 PRINT "-"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"-");strcat(buf,"\n");fputs(buf,fh); };
    // 01420 PRINT " -----1-----2-----3-----4-----"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," -----1-----2-----3-----4-----");strcat(buf,"\n");fputs(buf,fh); };
    // 01430 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01440 PRINT "THE OUTPUT IS A MAP OF THE HOMES WHERE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE OUTPUT IS A MAP OF THE HOMES WHERE");strcat(buf,"\n");fputs(buf,fh); };
    // 01450 PRINT "YOU ARE TO SEND PIZZAS."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU ARE TO SEND PIZZAS.");strcat(buf,"\n");fputs(buf,fh); };
    // 01460 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01470 PRINT "YOUR JOB IS TO GIVE A TRUCK DRIVER"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR JOB IS TO GIVE A TRUCK DRIVER");strcat(buf,"\n");fputs(buf,fh); };
    // 01480 PRINT "THE LOCATION OR COORDINATES OF THE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE LOCATION OR COORDINATES OF THE");strcat(buf,"\n");fputs(buf,fh); };
    // 01490 PRINT "HOME ORDERING THE PIZZA."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HOME ORDERING THE PIZZA.");strcat(buf,"\n");fputs(buf,fh); };
    // 01500 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01510:
    // 01510 INPUT "DO YOU NEED MORE DIRECTIONS";A$
    // Start of Basic INPUT statement 01510
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"DO YOU NEED MORE DIRECTIONS");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01510
    // 01520 IF A$="YES" THEN 1560
    if(strcmp(A_str,"YES")==0)goto Lbl_01560;
    // 01530 IF A$="NO" THEN 1710
    if(strcmp(A_str,"NO")==0)goto Lbl_01710;
    // 01540 PRINT "'YES' OR 'NO' PLEASE, NOW THEN,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"'YES' OR 'NO' PLEASE, NOW THEN,");strcat(buf,"\n");fputs(buf,fh); };
    // 01550 GOTO 1510
    goto Lbl_01510;

  Lbl_01560:
    // 01560 PRINT "SOMEBODY WILL ASK FOR A PIZZA TO BE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"SOMEBODY WILL ASK FOR A PIZZA TO BE");strcat(buf,"\n");fputs(buf,fh); };
    // 01570 PRINT "DELIVERED.  THEN A DELIVERY BOY WILL"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DELIVERED.  THEN A DELIVERY BOY WILL");strcat(buf,"\n");fputs(buf,fh); };
    // 01580 PRINT "ASK YOU FOR THE LOCATION."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"ASK YOU FOR THE LOCATION.");strcat(buf,"\n");fputs(buf,fh); };
    // 01590 PRINT "     EXAMPLE:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"     EXAMPLE:");strcat(buf,"\n");fputs(buf,fh); };
    // 01600 PRINT "THIS IS J.  PLEASE SEND A PIZZA."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS J.  PLEASE SEND A PIZZA.");strcat(buf,"\n");fputs(buf,fh); };
    // 01610 PRINT "DRIVER TO ";N$;".  WHERE DOES J LIVE?"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DRIVER TO "); strcat(buf,N_str);strcat(buf,".  WHERE DOES J LIVE?");strcat(buf,"\n");fputs(buf,fh); };
    // 01620 PRINT "YOUR ANSWER WOULD BE 2,3"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOUR ANSWER WOULD BE 2,3");strcat(buf,"\n");fputs(buf,fh); };
    // 01630 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01640 INPUT "UNDERSTAND";A$
    // Start of Basic INPUT statement 01640
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"UNDERSTAND");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01640
    // 01650 IF A$="YES" THEN 1680
    if(strcmp(A_str,"YES")==0)goto Lbl_01680;
    // 01660 PRINT "THIS JOB IS DEFINITELY TOO DIFFICULT FOR YOU. THANKS ANYWAY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS JOB IS DEFINITELY TOO DIFFICULT FOR YOU. THANKS ANYWAY");strcat(buf,"\n");fputs(buf,fh); };
    // 01670 GOTO 1910
    goto Lbl_01910;

  Lbl_01680:
    // 01680 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01690 PRINT "GOOD LUCK!!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"GOOD LUCK!!");strcat(buf,"\n");fputs(buf,fh); };
    // 01700 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01710:
    // 01710 FOR I=1 TO 5
    for(I_int=1;I_int<=5;I_int++){
        // 01720 S=INT(RND(1)*16+1)
        S_int = INT(RND(1)*16+1);
        // 01730 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 01740 PRINT "HELLO ";N$;"'S PIZZA.  THIS IS ";S$(S);".";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HELLO "); strcat(buf,N_str);strcat(buf,"'S PIZZA.  THIS IS "); strcat(buf,S_str_arr[S_int]);strcat(buf,".");fputs(buf,fh); };
        // 01750 PRINT "  PLEASE SEND A PIZZA."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  PLEASE SEND A PIZZA.");strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01760:
        // 01760 PRINT "  DRIVER TO ";N$;":  WHERE DOES ";S$(S);" LIVE";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  DRIVER TO "); strcat(buf,N_str);strcat(buf,":  WHERE DOES "); strcat(buf,S_str_arr[S_int]);strcat(buf," LIVE");fputs(buf,fh); };
        // 01770 INPUT A(1),A(2)
        // Start of Basic INPUT statement 01770
        {
            int numargs=2;
            char *args[numargs+1];
            bool echoeol=true;
            while(true){
                fprintf(stdout," ? ");
                int err=input(args,numargs,echoeol);
                if(err==0x03) break;
                if(err || 
                    (err += b2c_strtoi(&A_int_arr[1],args,0)) ||
                    (err += b2c_strtoi(&A_int_arr[2],args,1)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01770
        // 01780 T=A(1)+(A(2)-1)*4
        T_int = A_int_arr[1]+(A_int_arr[2]-1)*4;
        // 01790 IF T=S THEN 1830
        if(T_int==S_int)goto Lbl_01830;
        // 01800 PRINT "THIS IS ";S$(T);".  I DID NOT ORDER A PIZZA."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS IS "); strcat(buf,S_str_arr[T_int]);strcat(buf,".  I DID NOT ORDER A PIZZA.");strcat(buf,"\n");fputs(buf,fh); };
        // 01810 PRINT "I LIVE AT ";A(1);",";A(2)
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I LIVE AT "); b2c_INT(buf,A_int_arr[1]);strcat(buf,","); b2c_INT(buf,A_int_arr[2]);strcat(buf,"\n");fputs(buf,fh); };
        // 01820 GOTO 1760
        goto Lbl_01760;

  Lbl_01830:
        // 01830 PRINT "HELLO "N$;".  THIS IS ";S$(S);", THANKS FOR THE PIZZA."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HELLO "); strcat(buf,N_str);strcat(buf,".  THIS IS "); strcat(buf,S_str_arr[S_int]);strcat(buf,", THANKS FOR THE PIZZA.");strcat(buf,"\n");fputs(buf,fh); };
        // 01840 NEXT I
        int dummy_1840=0; // Ignore this line.
    }; // End-For(I_int)
    // 01850 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01860 INPUT "DO YOU WANT TO DELIVER MORE PIZZAS";A$
    // Start of Basic INPUT statement 01860
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"DO YOU WANT TO DELIVER MORE PIZZAS");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01860
    // 01870 IF A$="YES" THEN 1710
    if(strcmp(A_str,"YES")==0)goto Lbl_01710;
    // 01880 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01890 PRINT "O.K. ";N$;", SEE YOU LATER!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"O.K. "); strcat(buf,N_str);strcat(buf,", SEE YOU LATER!");strcat(buf,"\n");fputs(buf,fh); };
    // 01900 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01910:
    // 01910 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
