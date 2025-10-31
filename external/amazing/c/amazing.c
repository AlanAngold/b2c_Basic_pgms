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
    0x58ed0bd546d0 ---------A   00010  PRINT TAB(28);"AMAZING PROGRAM"
    0x58ed0bd54670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x58ed0bd56ae0 ---------A   00030  PRINT:PRINT:PRINT:PRINT
    0x58ed0bd566a0 ---------A T 00100  INPUT "WHAT ARE YOUR WIDTH AND LENGTH";H,V
    0x58ed0bd55620 ---------A   00102  IF H<>1 AND V<>1 THEN 110
    0x58ed0bd56e70 ---------A   00104  PRINT "MEANINGLESS DIMENSIONS.  TRY AGAIN.":GOTO 100
    0x58ed0bd56ff0 ---------A T 00110  DIM W(H,V),V(H,V)
    0x58ed0bd5cd00 ---------A   00120  PRINT
    0x58ed0bd5cd60 ---------A   00130  PRINT
    0x58ed0bd5cdc0 ---------A   00140  PRINT
    0x58ed0bd5ce20 ---------A   00150  PRINT
    0x58ed0bd5d900 ---------A   00160  Q=0:Z=0:X=INT(RND(1)*H+1)
    0x58ed0bd5dcb0 ---------A   00165  FOR I=1 TO H
    0x58ed0bd5df10 ---------A   00170  IF I=X THEN 173
    0x58ed0bd5e0f0 ---------A   00171  PRINT ".--";:GOTO 180
    0x58ed0bd5e260 ---------A T 00173  PRINT ".  ";
    0x58ed0bd5e3a0 ---------A T 00180  NEXT I
    0x58ed0bd5e510 ---------A   00190  PRINT "."
    0x58ed0bd5eeb0 ---------A   00195  C=1:W(X,1)=C:C=C+1
    0x58ed0bd5f4a0 ---------A   00200  R=X:S=1:GOTO 260
    0x58ed0bd5f710 ---------A T 00210  IF R<>H THEN 240
    0x58ed0bd5f990 ---------A   00215  IF S<>V THEN 230
    0x58ed0bd5fdf0 ---------A   00220  R=1:S=1:GOTO 250
    0x58ed0bd60360 ---------A T 00230  R=1:S=S+1:GOTO 250
    0x58ed0bd60670 ---------A T 00240  R=R+1
    0x58ed0bd60a80 ---------A T 00250  IF W(R,S)=0 THEN 210
    0x58ed0bd60df0 ---------A T 00260  IF R-1=0 THEN 530
    0x58ed0bd61310 ---------A   00265  IF W(R-1,S)<>0 THEN 530
    0x58ed0bd61680 ---------A   00270  IF S-1=0 THEN 390
    0x58ed0bd61ba0 ---------A   00280  IF W(R,S-1)<>0 THEN 390
    0x58ed0bd61e30 ---------A   00290  IF R=H THEN 330
    0x58ed0bd62350 ---------A   00300  IF W(R+1,S)<>0 THEN 330
    0x58ed0bd62940 ---------A   00310  X=INT(RND(1)*3+1)
    0x58ed0bd62ee0 ---------A   00320  ON X GOTO 790,820,860
    0x58ed0bd63160 ---------A T 00330  IF S<>V THEN 340
    0x58ed0bd633c0 ---------A   00334  IF Z=1 THEN 370
    0x58ed0bd63640 ---------A   00338  Q=1:GOTO 350
    0x58ed0bd63b50 ---------A T 00340  IF W(R,S+1)<>0 THEN 370
    0x58ed0bd64140 ---------A T 00350  X=INT(RND(1)*3+1)
    0x58ed0bd644d0 ---------A   00360  ON X GOTO 790,820,910
    0x58ed0bd64ab0 ---------A T 00370  X=INT(RND(1)*2+1)
    0x58ed0bd64d80 ---------A   00380  ON X GOTO 790,820
    0x58ed0bd65010 ---------A T 00390  IF R=H THEN 470
    0x58ed0bd65530 ---------A   00400  IF W(R+1,S)<>0 THEN 470
    0x58ed0bd657b0 ---------A   00405  IF S<>V THEN 420
    0x58ed0bd65a10 ---------A   00410  IF Z=1 THEN 450
    0x58ed0bd65c90 ---------A   00415  Q=1:GOTO 430
    0x58ed0bd661a0 ---------A T 00420  IF W(R,S+1)<>0 THEN 450
    0x58ed0bd66790 ---------A T 00430  X=INT(RND(1)*3+1)
    0x58ed0bd66b20 ---------A   00440  ON X GOTO 790,860,910
    0x58ed0bd67100 ---------A T 00450  X=INT(RND(1)*2+1)
    0x58ed0bd673d0 ---------A   00460  ON X GOTO 790,860
    0x58ed0bd67650 ---------A T 00470  IF S<>V THEN 490
    0x58ed0bd678b0 ---------A   00480  IF Z=1 THEN 520
    0x58ed0bd67b30 ---------A   00485  Q=1:GOTO 500
    0x58ed0bd68040 ---------A T 00490  IF W(R,S+1)<>0 THEN 520
    0x58ed0bd68620 ---------A T 00500  X=INT(RND(1)*2+1)
    0x58ed0bd688f0 ---------A   00510  ON X GOTO 790,910
    0x58ed0bd68970 ---------A T 00520  GOTO 790
    0x58ed0bd68cd0 ---------A T 00530  IF S-1=0 THEN 670
    0x58ed0bd691f0 ---------A   00540  IF W(R,S-1)<>0 THEN 670
    0x58ed0bd69480 ---------A   00545  IF R=H THEN 610
    0x58ed0bd699a0 ---------A   00547  IF W(R+1,S)<>0 THEN 610
    0x58ed0bd69c20 ---------A   00550  IF S<>V THEN 560
    0x58ed0bd69e80 ---------A   00552  IF Z=1 THEN 590
    0x58ed0bd6a510 ---------A   00554  Q=1:GOTO 570
    0x58ed0bd6aa20 ---------A T 00560  IF W(R,S+1)<>0 THEN 590
    0x58ed0bd6b010 ---------A T 00570  X=INT(RND(1)*3+1)
    0x58ed0bd6b3a0 ---------A   00580  ON X GOTO 820,860,910
    0x58ed0bd6b980 ---------A T 00590  X=INT(RND(1)*2+1)
    0x58ed0bd6bc50 ---------A   00600  ON X GOTO 820,860
    0x58ed0bd6bed0 ---------A T 00610  IF S<>V THEN 630
    0x58ed0bd6c130 ---------A   00620  IF Z=1 THEN 660
    0x58ed0bd6c3b0 ---------A   00625  Q=1:GOTO 640
    0x58ed0bd6c8c0 ---------A T 00630  IF W(R,S+1)<>0 THEN 660
    0x58ed0bd6cea0 ---------A T 00640  X=INT(RND(1)*2+1)
    0x58ed0bd6d170 ---------A   00650  ON X GOTO 820,910
    0x58ed0bd6d1f0 ---------A T 00660  GOTO 820
    0x58ed0bd6d470 ---------A T 00670  IF R=H THEN 740
    0x58ed0bd6d990 ---------A   00680  IF W(R+1,S)<>0 THEN 740
    0x58ed0bd6dc10 ---------A   00685  IF S<>V THEN 700
    0x58ed0bd6de70 ---------A   00690  IF Z=1 THEN 730
    0x58ed0bd6e0f0 ---------A   00695  Q=1:GOTO 830
    0x58ed0bd6e600 ---------A T 00700  IF W(R,S+1)<>0 THEN 730
    0x58ed0bd6ebe0 ---------A   00710  X=INT(RND(1)*2+1)
    0x58ed0bd6eeb0 ---------A   00720  ON X GOTO 860,910
    0x58ed0bd6ef30 ---------A T 00730  GOTO 860
    0x58ed0bd6f1a0 ---------A T 00740  IF S<>V THEN 760
    0x58ed0bd6f400 ---------A   00750  IF Z=1 THEN 780
    0x58ed0bd6f680 ---------A   00755  Q=1:GOTO 770
    0x58ed0bd6fb90 ---------A T 00760  IF W(R,S+1)<>0 THEN 780
    0x58ed0bd6fc10 ---------A T 00770  GOTO 910
    0x58ed0bd6fc80 ---------A T 00780  GOTO 1000
    0x58ed0bd70180 ---------A T 00790  W(R-1,S)=C
    0x58ed0bd70c80 ---------A   00800  C=C+1:V(R-1,S)=2:R=R-1
    0x58ed0bd71110 ---------A   00810  IF C=H*V+1 THEN 1010
    0x58ed0bd71380 ---------A   00815  Q=0:GOTO 260
    0x58ed0bd71870 ---------A T 00820  W(R,S-1)=C
    0x58ed0bd71bc0 ---------A T 00830  C=C+1
    0x58ed0bd72810 ---------A   00840  V(R,S-1)=1:S=S-1:IF C=H*V+1 THEN 1010
    0x58ed0bd72a80 ---------A   00850  Q=0:GOTO 260
    0x58ed0bd72f80 ---------A T 00860  W(R+1,S)=C
    0x58ed0bd736a0 ---------A   00870  C=C+1:IF V(R,S)=0 THEN 880
    0x58ed0bd73ad0 ---------A   00875  V(R,S)=3:GOTO 890
    0x58ed0bd73ea0 ---------A T 00880  V(R,S)=2
    0x58ed0bd741e0 ---------A T 00890  R=R+1
    0x58ed0bd74670 ---------A   00900  IF C=H*V+1 THEN 1010
    0x58ed0bd746f0 ---------A   00905  GOTO 530
    0x58ed0bd74960 ---------A T 00910  IF Q=1 THEN 960
    0x58ed0bd75560 ---------A   00920  W(R,S+1)=C:C=C+1:IF V(R,S)=0 THEN 940
    0x58ed0bd75990 ---------A   00930  V(R,S)=3:GOTO 950
    0x58ed0bd75d70 ---------A T 00940  V(R,S)=1
    0x58ed0bd76510 ---------A T 00950  S=S+1:IF C=H*V+1 THEN 1010
    0x58ed0bd76590 ---------A   00955  GOTO 260
    0x58ed0bd767b0 ---------A T 00960  Z=1
    0x58ed0bd76bd0 ---------A   00970  IF V(R,S)=0 THEN 980
    0x58ed0bd77200 ---------A   00975  V(R,S)=3:Q=0:GOTO 1000
    0x58ed0bd77bf0 ---------A T 00980  V(R,S)=1:Q=0:R=1:S=1:GOTO 250
    0x58ed0bd77c60 ---------A T 01000  GOTO 210
    0x58ed0bd78010 ---------A T 01010  FOR J=1 TO V
    0x58ed0bd78190 ---------A   01011  PRINT "I";
    0x58ed0bd784a0 ---------A   01012  FOR I=1 TO H
    0x58ed0bd788c0 ---------A   01013  IF V(I,J)<2 THEN 1030
    0x58ed0bd78a40 ---------A   01020  PRINT "   ";
    0x58ed0bd78ac0 ---------A   01021  GOTO 1040
    0x58ed0bd78c30 ---------A T 01030  PRINT "  I";
    0x58ed0bd78d70 ---------A T 01040  NEXT I
    0x58ed0bd78e00 ---------A   01041  PRINT
    0x58ed0bd79110 ---------A   01043  FOR I=1 TO H
    0x58ed0bd79d50 ---------A   01045  IF V(I,J)=0 THEN 1060
    0x58ed0bd7a170 ---------A   01050  IF V(I,J)=2 THEN 1060
    0x58ed0bd7a2f0 ---------A   01051  PRINT ":  ";
    0x58ed0bd7a370 ---------A   01052  GOTO 1070
    0x58ed0bd7a4e0 ---------A T 01060  PRINT ":--";
    0x58ed0bd7a620 ---------A T 01070  NEXT I
    0x58ed0bd7a790 ---------A   01071  PRINT "."
    0x58ed0bd7a8d0 ---------A   01072  NEXT J
    0x58ed0bd7a940 ---------A   01073  END
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
   A) 0x58ed0bd546d0 (00010)   0x58ed0bd546d0 (00010)   0x58ed0bd7a940 (01073)   0x58ed0bd7a940 (01073)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/amazing.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x58ed0bd546d0 ---------A   00010  PRINT TAB(28);"AMAZING PROGRAM"
    0x58ed0bd54670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x58ed0bd452b0 ----------   00030  PRINT
    0x58ed0bd549e0 ----------        a PRINT
    0x58ed0bd547f0 ----------        b PRINT
    0x58ed0bd56ae0 ---------A        c PRINT
    0x58ed0bd566a0 ---------A T 00100  INPUT "WHAT ARE YOUR WIDTH AND LENGTH";H,V
    0x58ed0bd55620 ---------A   00102  IF H<>1 AND V<>1 THEN 110
    0x58ed0bd55740 ----------   00104  PRINT "MEANINGLESS DIMENSIONS.  TRY AGAIN."
    0x58ed0bd56e70 ---------A        a GOTO 100
    0x58ed0bd56ff0 ---------A T 00110  DIM W(H,V),V(H,V)
    0x58ed0bd5cd00 ---------A   00120  PRINT
    0x58ed0bd5cd60 ---------A   00130  PRINT
    0x58ed0bd5cdc0 ---------A   00140  PRINT
    0x58ed0bd5ce20 ---------A   00150  PRINT
    0x58ed0bd56f30 ----------   00160  Q=0
    0x58ed0bd570b0 ----------        a Z=0
    0x58ed0bd5d900 ---------A        b X=INT(RND(1)*H+1)
    0x58ed0bd5dcb0 ---------A   00165  FOR I=1 TO H
    0x58ed0bd5df10 ---------A   00170  IF I=X THEN 173
    0x58ed0bd5e070 ----------   00171  PRINT ".--";
    0x58ed0bd5e0f0 ---------A        a GOTO 180
    0x58ed0bd5e260 ---------A T 00173  PRINT ".  ";
    0x58ed0bd5e3a0 ---------A T 00180  NEXT I
    0x58ed0bd5e510 ---------A   00190  PRINT "."
    0x58ed0bd5e7d0 ----------   00195  C=1
    0x58ed0bd5eb80 ----------        a W(X,1)=C
    0x58ed0bd5eeb0 ---------A        b C=C+1
    0x58ed0bd5f180 ----------   00200  R=X
    0x58ed0bd5f430 ----------        a S=1
    0x58ed0bd5f4a0 ---------A        b GOTO 260
    0x58ed0bd5f710 ---------A T 00210  IF R<>H THEN 240
    0x58ed0bd5f990 ---------A   00215  IF S<>V THEN 230
    0x58ed0bd5fb90 ----------   00220  R=1
    0x58ed0bd5fd80 ----------        a S=1
    0x58ed0bd5fdf0 ---------A        b GOTO 250
    0x58ed0bd5ffe0 ---------- T 00230  R=1
    0x58ed0bd602f0 ---------- T      a S=S+1
    0x58ed0bd60360 ---------A T      b GOTO 250
    0x58ed0bd60670 ---------A T 00240  R=R+1
    0x58ed0bd60a80 ---------A T 00250  IF W(R,S)=0 THEN 210
    0x58ed0bd60df0 ---------A T 00260  IF R-1=0 THEN 530
    0x58ed0bd61310 ---------A   00265  IF W(R-1,S)<>0 THEN 530
    0x58ed0bd61680 ---------A   00270  IF S-1=0 THEN 390
    0x58ed0bd61ba0 ---------A   00280  IF W(R,S-1)<>0 THEN 390
    0x58ed0bd61e30 ---------A   00290  IF R=H THEN 330
    0x58ed0bd62350 ---------A   00300  IF W(R+1,S)<>0 THEN 330
    0x58ed0bd62940 ---------A   00310  X=INT(RND(1)*3+1)
    0x58ed0bd62ee0 ---------A   00320  ON X GOTO 790,820,860
    0x58ed0bd63160 ---------A T 00330  IF S<>V THEN 340
    0x58ed0bd633c0 ---------A   00334  IF Z=1 THEN 370
    0x58ed0bd635c0 ----------   00338  Q=1
    0x58ed0bd63640 ---------A        a GOTO 350
    0x58ed0bd63b50 ---------A T 00340  IF W(R,S+1)<>0 THEN 370
    0x58ed0bd64140 ---------A T 00350  X=INT(RND(1)*3+1)
    0x58ed0bd644d0 ---------A   00360  ON X GOTO 790,820,910
    0x58ed0bd64ab0 ---------A T 00370  X=INT(RND(1)*2+1)
    0x58ed0bd64d80 ---------A   00380  ON X GOTO 790,820
    0x58ed0bd65010 ---------A T 00390  IF R=H THEN 470
    0x58ed0bd65530 ---------A   00400  IF W(R+1,S)<>0 THEN 470
    0x58ed0bd657b0 ---------A   00405  IF S<>V THEN 420
    0x58ed0bd65a10 ---------A   00410  IF Z=1 THEN 450
    0x58ed0bd65c10 ----------   00415  Q=1
    0x58ed0bd65c90 ---------A        a GOTO 430
    0x58ed0bd661a0 ---------A T 00420  IF W(R,S+1)<>0 THEN 450
    0x58ed0bd66790 ---------A T 00430  X=INT(RND(1)*3+1)
    0x58ed0bd66b20 ---------A   00440  ON X GOTO 790,860,910
    0x58ed0bd67100 ---------A T 00450  X=INT(RND(1)*2+1)
    0x58ed0bd673d0 ---------A   00460  ON X GOTO 790,860
    0x58ed0bd67650 ---------A T 00470  IF S<>V THEN 490
    0x58ed0bd678b0 ---------A   00480  IF Z=1 THEN 520
    0x58ed0bd67ab0 ----------   00485  Q=1
    0x58ed0bd67b30 ---------A        a GOTO 500
    0x58ed0bd68040 ---------A T 00490  IF W(R,S+1)<>0 THEN 520
    0x58ed0bd68620 ---------A T 00500  X=INT(RND(1)*2+1)
    0x58ed0bd688f0 ---------A   00510  ON X GOTO 790,910
    0x58ed0bd68970 ---------A T 00520  GOTO 790
    0x58ed0bd68cd0 ---------A T 00530  IF S-1=0 THEN 670
    0x58ed0bd691f0 ---------A   00540  IF W(R,S-1)<>0 THEN 670
    0x58ed0bd69480 ---------A   00545  IF R=H THEN 610
    0x58ed0bd699a0 ---------A   00547  IF W(R+1,S)<>0 THEN 610
    0x58ed0bd69c20 ---------A   00550  IF S<>V THEN 560
    0x58ed0bd69e80 ---------A   00552  IF Z=1 THEN 590
    0x58ed0bd6a490 ----------   00554  Q=1
    0x58ed0bd6a510 ---------A        a GOTO 570
    0x58ed0bd6aa20 ---------A T 00560  IF W(R,S+1)<>0 THEN 590
    0x58ed0bd6b010 ---------A T 00570  X=INT(RND(1)*3+1)
    0x58ed0bd6b3a0 ---------A   00580  ON X GOTO 820,860,910
    0x58ed0bd6b980 ---------A T 00590  X=INT(RND(1)*2+1)
    0x58ed0bd6bc50 ---------A   00600  ON X GOTO 820,860
    0x58ed0bd6bed0 ---------A T 00610  IF S<>V THEN 630
    0x58ed0bd6c130 ---------A   00620  IF Z=1 THEN 660
    0x58ed0bd6c330 ----------   00625  Q=1
    0x58ed0bd6c3b0 ---------A        a GOTO 640
    0x58ed0bd6c8c0 ---------A T 00630  IF W(R,S+1)<>0 THEN 660
    0x58ed0bd6cea0 ---------A T 00640  X=INT(RND(1)*2+1)
    0x58ed0bd6d170 ---------A   00650  ON X GOTO 820,910
    0x58ed0bd6d1f0 ---------A T 00660  GOTO 820
    0x58ed0bd6d470 ---------A T 00670  IF R=H THEN 740
    0x58ed0bd6d990 ---------A   00680  IF W(R+1,S)<>0 THEN 740
    0x58ed0bd6dc10 ---------A   00685  IF S<>V THEN 700
    0x58ed0bd6de70 ---------A   00690  IF Z=1 THEN 730
    0x58ed0bd6e070 ----------   00695  Q=1
    0x58ed0bd6e0f0 ---------A        a GOTO 830
    0x58ed0bd6e600 ---------A T 00700  IF W(R,S+1)<>0 THEN 730
    0x58ed0bd6ebe0 ---------A   00710  X=INT(RND(1)*2+1)
    0x58ed0bd6eeb0 ---------A   00720  ON X GOTO 860,910
    0x58ed0bd6ef30 ---------A T 00730  GOTO 860
    0x58ed0bd6f1a0 ---------A T 00740  IF S<>V THEN 760
    0x58ed0bd6f400 ---------A   00750  IF Z=1 THEN 780
    0x58ed0bd6f600 ----------   00755  Q=1
    0x58ed0bd6f680 ---------A        a GOTO 770
    0x58ed0bd6fb90 ---------A T 00760  IF W(R,S+1)<>0 THEN 780
    0x58ed0bd6fc10 ---------A T 00770  GOTO 910
    0x58ed0bd6fc80 ---------A T 00780  GOTO 1000
    0x58ed0bd70180 ---------A T 00790  W(R-1,S)=C
    0x58ed0bd70490 ----------   00800  C=C+1
    0x58ed0bd70940 ----------        a V(R-1,S)=2
    0x58ed0bd70c80 ---------A        b R=R-1
    0x58ed0bd71110 ---------A   00810  IF C=H*V+1 THEN 1010
    0x58ed0bd71310 ----------   00815  Q=0
    0x58ed0bd71380 ---------A        a GOTO 260
    0x58ed0bd71870 ---------A T 00820  W(R,S-1)=C
    0x58ed0bd71bc0 ---------A T 00830  C=C+1
    0x58ed0bd72070 ----------   00840  V(R,S-1)=1
    0x58ed0bd72380 ----------        a S=S-1
    0x58ed0bd72810 ---------A        b IF C=H*V+1 THEN 1010
    0x58ed0bd72a10 ----------   00850  Q=0
    0x58ed0bd72a80 ---------A        a GOTO 260
    0x58ed0bd72f80 ---------A T 00860  W(R+1,S)=C
    0x58ed0bd73290 ----------   00870  C=C+1
    0x58ed0bd736a0 ---------A        a IF V(R,S)=0 THEN 880
    0x58ed0bd73a60 ----------   00875  V(R,S)=3
    0x58ed0bd73ad0 ---------A        a GOTO 890
    0x58ed0bd73ea0 ---------A T 00880  V(R,S)=2
    0x58ed0bd741e0 ---------A T 00890  R=R+1
    0x58ed0bd74670 ---------A   00900  IF C=H*V+1 THEN 1010
    0x58ed0bd746f0 ---------A   00905  GOTO 530
    0x58ed0bd74960 ---------A T 00910  IF Q=1 THEN 960
    0x58ed0bd74e40 ----------   00920  W(R,S+1)=C
    0x58ed0bd75150 ----------        a C=C+1
    0x58ed0bd75560 ---------A        b IF V(R,S)=0 THEN 940
    0x58ed0bd75920 ----------   00930  V(R,S)=3
    0x58ed0bd75990 ---------A        a GOTO 950
    0x58ed0bd75d70 ---------A T 00940  V(R,S)=1
    0x58ed0bd76080 ---------- T 00950  S=S+1
    0x58ed0bd76510 ---------A T      a IF C=H*V+1 THEN 1010
    0x58ed0bd76590 ---------A   00955  GOTO 260
    0x58ed0bd767b0 ---------A T 00960  Z=1
    0x58ed0bd76bd0 ---------A   00970  IF V(R,S)=0 THEN 980
    0x58ed0bd76f90 ----------   00975  V(R,S)=3
    0x58ed0bd77180 ----------        a Q=0
    0x58ed0bd77200 ---------A        b GOTO 1000
    0x58ed0bd775b0 ---------- T 00980  V(R,S)=1
    0x58ed0bd777a0 ---------- T      a Q=0
    0x58ed0bd77990 ---------- T      b R=1
    0x58ed0bd77b80 ---------- T      c S=1
    0x58ed0bd77bf0 ---------A T      d GOTO 250
    0x58ed0bd77c60 ---------A T 01000  GOTO 210
    0x58ed0bd78010 ---------A T 01010  FOR J=1 TO V
    0x58ed0bd78190 ---------A   01011  PRINT "I";
    0x58ed0bd784a0 ---------A   01012  FOR I=1 TO H
    0x58ed0bd788c0 ---------A   01013  IF V(I,J)<2 THEN 1030
    0x58ed0bd78a40 ---------A   01020  PRINT "   ";
    0x58ed0bd78ac0 ---------A   01021  GOTO 1040
    0x58ed0bd78c30 ---------A T 01030  PRINT "  I";
    0x58ed0bd78d70 ---------A T 01040  NEXT I
    0x58ed0bd78e00 ---------A   01041  PRINT
    0x58ed0bd79110 ---------A   01043  FOR I=1 TO H
    0x58ed0bd79d50 ---------A   01045  IF V(I,J)=0 THEN 1060
    0x58ed0bd7a170 ---------A   01050  IF V(I,J)=2 THEN 1060
    0x58ed0bd7a2f0 ---------A   01051  PRINT ":  ";
    0x58ed0bd7a370 ---------A   01052  GOTO 1070
    0x58ed0bd7a4e0 ---------A T 01060  PRINT ":--";
    0x58ed0bd7a620 ---------A T 01070  NEXT I
    0x58ed0bd7a790 ---------A   01071  PRINT "."
    0x58ed0bd7a8d0 ---------A   01072  NEXT J
    0x58ed0bd7a940 ---------A   01073  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/amazing.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x58ed0bd546d0 ---------A T 01000  PRINT TAB(28);"AMAZING PROGRAM"
    0x58ed0bd54670 ---------A T 01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x58ed0bd452b0 ----------   01020  PRINT
    0x58ed0bd549e0 ---------- T 01030  PRINT
    0x58ed0bd547f0 ---------- T 01040  PRINT
    0x58ed0bd56ae0 ---------A   01050  PRINT
    0x58ed0bd566a0 ---------A T 01060  INPUT "WHAT ARE YOUR WIDTH AND LENGTH";H,V
    0x58ed0bd55620 ---------A T 01070  IF H<>1 AND V<>1 THEN 1100
    0x58ed0bd55740 ----------   01080  PRINT "MEANINGLESS DIMENSIONS.  TRY AGAIN."
    0x58ed0bd56e70 ---------A   01090  GOTO 1060
    0x58ed0bd56ff0 ---------A   01100  DIM W(H,V),V(H,V)
    0x58ed0bd5cd00 ---------A   01110  PRINT
    0x58ed0bd5cd60 ---------A   01120  PRINT
    0x58ed0bd5cdc0 ---------A   01130  PRINT
    0x58ed0bd5ce20 ---------A   01140  PRINT
    0x58ed0bd56f30 ----------   01150  Q=0
    0x58ed0bd570b0 ----------   01160  Z=0
    0x58ed0bd5d900 ---------A   01170  X=INT(RND(1)*H+1)
    0x58ed0bd5dcb0 ---------A   01180  FOR I=1 TO H
    0x58ed0bd5df10 ---------A   01190  IF I=X THEN 1220
    0x58ed0bd5e070 ----------   01200  PRINT ".--";
    0x58ed0bd5e0f0 ---------A   01210  GOTO 1230
    0x58ed0bd5e260 ---------A   01220  PRINT ".  ";
    0x58ed0bd5e3a0 ---------A   01230  NEXT I
    0x58ed0bd5e510 ---------A   01240  PRINT "."
    0x58ed0bd5e7d0 ----------   01250  C=1
    0x58ed0bd5eb80 ----------   01260  W(X,1)=C
    0x58ed0bd5eeb0 ---------A   01270  C=C+1
    0x58ed0bd5f180 ----------   01280  R=X
    0x58ed0bd5f430 ----------   01290  S=1
    0x58ed0bd5f4a0 ---------A   01300  GOTO 1410
    0x58ed0bd5f710 ---------A   01310  IF R<>H THEN 1390
    0x58ed0bd5f990 ---------A   01320  IF S<>V THEN 1380
    0x58ed0bd5fb90 ----------   01330  R=1
    0x58ed0bd5fd80 ----------   01340  S=1
    0x58ed0bd5fdf0 ---------A   01350  GOTO 1400
    0x58ed0bd5ffe0 ----------   01360  R=1
    0x58ed0bd602f0 ----------   01370  S=S+1
    0x58ed0bd60360 ---------A   01380  GOTO 1400
    0x58ed0bd60670 ---------A   01390  R=R+1
    0x58ed0bd60a80 ---------A   01400  IF W(R,S)=0 THEN 1310
    0x58ed0bd60df0 ---------A   01410  IF R-1=0 THEN 1770
    0x58ed0bd61310 ---------A   01420  IF W(R-1,S)<>0 THEN 1770
    0x58ed0bd61680 ---------A   01430  IF S-1=0 THEN 1580
    0x58ed0bd61ba0 ---------A   01440  IF W(R,S-1)<>0 THEN 1580
    0x58ed0bd61e30 ---------A   01450  IF R=H THEN 1490
    0x58ed0bd62350 ---------A   01460  IF W(R+1,S)<>0 THEN 1490
    0x58ed0bd62940 ---------A   01470  X=INT(RND(1)*3+1)
    0x58ed0bd62ee0 ---------A   01480  ON X GOTO 2150,2220,2290
    0x58ed0bd63160 ---------A   01490  IF S<>V THEN 1530
    0x58ed0bd633c0 ---------A   01500  IF Z=1 THEN 1560
    0x58ed0bd635c0 ----------   01510  Q=1
    0x58ed0bd63640 ---------A   01520  GOTO 1540
    0x58ed0bd63b50 ---------A   01530  IF W(R,S+1)<>0 THEN 1560
    0x58ed0bd64140 ---------A   01540  X=INT(RND(1)*3+1)
    0x58ed0bd644d0 ---------A   01550  ON X GOTO 2150,2220,2380
    0x58ed0bd64ab0 ---------A   01560  X=INT(RND(1)*2+1)
    0x58ed0bd64d80 ---------A   01570  ON X GOTO 2150,2220
    0x58ed0bd65010 ---------A   01580  IF R=H THEN 1690
    0x58ed0bd65530 ---------A   01590  IF W(R+1,S)<>0 THEN 1690
    0x58ed0bd657b0 ---------A   01600  IF S<>V THEN 1640
    0x58ed0bd65a10 ---------A   01610  IF Z=1 THEN 1670
    0x58ed0bd65c10 ----------   01620  Q=1
    0x58ed0bd65c90 ---------A   01630  GOTO 1650
    0x58ed0bd661a0 ---------A   01640  IF W(R,S+1)<>0 THEN 1670
    0x58ed0bd66790 ---------A   01650  X=INT(RND(1)*3+1)
    0x58ed0bd66b20 ---------A   01660  ON X GOTO 2150,2290,2380
    0x58ed0bd67100 ---------A   01670  X=INT(RND(1)*2+1)
    0x58ed0bd673d0 ---------A   01680  ON X GOTO 2150,2290
    0x58ed0bd67650 ---------A   01690  IF S<>V THEN 1730
    0x58ed0bd678b0 ---------A   01700  IF Z=1 THEN 1760
    0x58ed0bd67ab0 ----------   01710  Q=1
    0x58ed0bd67b30 ---------A   01720  GOTO 1740
    0x58ed0bd68040 ---------A   01730  IF W(R,S+1)<>0 THEN 1760
    0x58ed0bd68620 ---------A   01740  X=INT(RND(1)*2+1)
    0x58ed0bd688f0 ---------A   01750  ON X GOTO 2150,2380
    0x58ed0bd68970 ---------A   01760  GOTO 2150
    0x58ed0bd68cd0 ---------A   01770  IF S-1=0 THEN 1980
    0x58ed0bd691f0 ---------A   01780  IF W(R,S-1)<>0 THEN 1980
    0x58ed0bd69480 ---------A   01790  IF R=H THEN 1900
    0x58ed0bd699a0 ---------A   01800  IF W(R+1,S)<>0 THEN 1900
    0x58ed0bd69c20 ---------A   01810  IF S<>V THEN 1850
    0x58ed0bd69e80 ---------A   01820  IF Z=1 THEN 1880
    0x58ed0bd6a490 ----------   01830  Q=1
    0x58ed0bd6a510 ---------A   01840  GOTO 1860
    0x58ed0bd6aa20 ---------A   01850  IF W(R,S+1)<>0 THEN 1880
    0x58ed0bd6b010 ---------A   01860  X=INT(RND(1)*3+1)
    0x58ed0bd6b3a0 ---------A   01870  ON X GOTO 2220,2290,2380
    0x58ed0bd6b980 ---------A   01880  X=INT(RND(1)*2+1)
    0x58ed0bd6bc50 ---------A   01890  ON X GOTO 2220,2290
    0x58ed0bd6bed0 ---------A   01900  IF S<>V THEN 1940
    0x58ed0bd6c130 ---------A   01910  IF Z=1 THEN 1970
    0x58ed0bd6c330 ----------   01920  Q=1
    0x58ed0bd6c3b0 ---------A   01930  GOTO 1950
    0x58ed0bd6c8c0 ---------A   01940  IF W(R,S+1)<>0 THEN 1970
    0x58ed0bd6cea0 ---------A   01950  X=INT(RND(1)*2+1)
    0x58ed0bd6d170 ---------A   01960  ON X GOTO 2220,2380
    0x58ed0bd6d1f0 ---------A   01970  GOTO 2220
    0x58ed0bd6d470 ---------A   01980  IF R=H THEN 2080
    0x58ed0bd6d990 ---------A   01990  IF W(R+1,S)<>0 THEN 2080
    0x58ed0bd6dc10 ---------A   02000  IF S<>V THEN 2040
    0x58ed0bd6de70 ---------A   02010  IF Z=1 THEN 2070
    0x58ed0bd6e070 ----------   02020  Q=1
    0x58ed0bd6e0f0 ---------A   02030  GOTO 2230
    0x58ed0bd6e600 ---------A   02040  IF W(R,S+1)<>0 THEN 2070
    0x58ed0bd6ebe0 ---------A   02050  X=INT(RND(1)*2+1)
    0x58ed0bd6eeb0 ---------A   02060  ON X GOTO 2290,2380
    0x58ed0bd6ef30 ---------A   02070  GOTO 2290
    0x58ed0bd6f1a0 ---------A   02080  IF S<>V THEN 2120
    0x58ed0bd6f400 ---------A   02090  IF Z=1 THEN 2140
    0x58ed0bd6f600 ----------   02100  Q=1
    0x58ed0bd6f680 ---------A   02110  GOTO 2130
    0x58ed0bd6fb90 ---------A   02120  IF W(R,S+1)<>0 THEN 2140
    0x58ed0bd6fc10 ---------A   02130  GOTO 2380
    0x58ed0bd6fc80 ---------A   02140  GOTO 2580
    0x58ed0bd70180 ---------A   02150  W(R-1,S)=C
    0x58ed0bd70490 ----------   02160  C=C+1
    0x58ed0bd70940 ----------   02170  V(R-1,S)=2
    0x58ed0bd70c80 ---------A   02180  R=R-1
    0x58ed0bd71110 ---------A   02190  IF C=H*V+1 THEN 2590
    0x58ed0bd71310 ----------   02200  Q=0
    0x58ed0bd71380 ---------A   02210  GOTO 1410
    0x58ed0bd71870 ---------A   02220  W(R,S-1)=C
    0x58ed0bd71bc0 ---------A   02230  C=C+1
    0x58ed0bd72070 ----------   02240  V(R,S-1)=1
    0x58ed0bd72380 ----------   02250  S=S-1
    0x58ed0bd72810 ---------A   02260  IF C=H*V+1 THEN 2590
    0x58ed0bd72a10 ----------   02270  Q=0
    0x58ed0bd72a80 ---------A   02280  GOTO 1410
    0x58ed0bd72f80 ---------A   02290  W(R+1,S)=C
    0x58ed0bd73290 ----------   02300  C=C+1
    0x58ed0bd736a0 ---------A   02310  IF V(R,S)=0 THEN 2340
    0x58ed0bd73a60 ----------   02320  V(R,S)=3
    0x58ed0bd73ad0 ---------A   02330  GOTO 2350
    0x58ed0bd73ea0 ---------A   02340  V(R,S)=2
    0x58ed0bd741e0 ---------A   02350  R=R+1
    0x58ed0bd74670 ---------A   02360  IF C=H*V+1 THEN 2590
    0x58ed0bd746f0 ---------A   02370  GOTO 1770
    0x58ed0bd74960 ---------A   02380  IF Q=1 THEN 2480
    0x58ed0bd74e40 ----------   02390  W(R,S+1)=C
    0x58ed0bd75150 ----------   02400  C=C+1
    0x58ed0bd75560 ---------A   02410  IF V(R,S)=0 THEN 2440
    0x58ed0bd75920 ----------   02420  V(R,S)=3
    0x58ed0bd75990 ---------A   02430  GOTO 2460
    0x58ed0bd75d70 ---------A   02440  V(R,S)=1
    0x58ed0bd76080 ----------   02450  S=S+1
    0x58ed0bd76510 ---------A   02460  IF C=H*V+1 THEN 2590
    0x58ed0bd76590 ---------A   02470  GOTO 1410
    0x58ed0bd767b0 ---------A   02480  Z=1
    0x58ed0bd76bd0 ---------A   02490  IF V(R,S)=0 THEN 2570
    0x58ed0bd76f90 ----------   02500  V(R,S)=3
    0x58ed0bd77180 ----------   02510  Q=0
    0x58ed0bd77200 ---------A   02520  GOTO 2580
    0x58ed0bd775b0 ----------   02530  V(R,S)=1
    0x58ed0bd777a0 ----------   02540  Q=0
    0x58ed0bd77990 ----------   02550  R=1
    0x58ed0bd77b80 ----------   02560  S=1
    0x58ed0bd77bf0 ---------A   02570  GOTO 1400
    0x58ed0bd77c60 ---------A   02580  GOTO 1310
    0x58ed0bd78010 ---------A   02590  FOR J=1 TO V
    0x58ed0bd78190 ---------A   02600  PRINT "I";
    0x58ed0bd784a0 ---------A   02610  FOR I=1 TO H
    0x58ed0bd788c0 ---------A   02620  IF V(I,J)<2 THEN 2650
    0x58ed0bd78a40 ---------A   02630  PRINT "   ";
    0x58ed0bd78ac0 ---------A   02640  GOTO 2660
    0x58ed0bd78c30 ---------A   02650  PRINT "  I";
    0x58ed0bd78d70 ---------A   02660  NEXT I
    0x58ed0bd78e00 ---------A   02670  PRINT
    0x58ed0bd79110 ---------A   02680  FOR I=1 TO H
    0x58ed0bd79d50 ---------A   02690  IF V(I,J)=0 THEN 2730
    0x58ed0bd7a170 ---------A   02700  IF V(I,J)=2 THEN 2730
    0x58ed0bd7a2f0 ---------A   02710  PRINT ":  ";
    0x58ed0bd7a370 ---------A   02720  GOTO 2740
    0x58ed0bd7a4e0 ---------A   02730  PRINT ":--";
    0x58ed0bd7a620 ---------A   02740  NEXT I
    0x58ed0bd7a790 ---------A   02750  PRINT "."
    0x58ed0bd7a8d0 ---------A   02760  NEXT J
    0x58ed0bd7a940 ---------A   02770  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02720 - 10000    7290 

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
    0x58ed0bd546d0 ---------A   01000  PRINT TAB(28);"AMAZING PROGRAM"
    0x58ed0bd54670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x58ed0bd452b0 ---------A   01020  PRINT
    0x58ed0bd549e0 ---------A   01030  PRINT
    0x58ed0bd547f0 ---------A   01040  PRINT
    0x58ed0bd56ae0 ---------A   01050  PRINT
    0x58ed0bd566a0 ---------A T 01060  INPUT "WHAT ARE YOUR WIDTH AND LENGTH";H,V
    0x58ed0bd55620 ---------A   01070  IF H<>1 AND V<>1 THEN 1100
    0x58ed0bd55740 ---------A   01080  PRINT "MEANINGLESS DIMENSIONS.  TRY AGAIN."
    0x58ed0bd56e70 ---------A   01090  GOTO 1060
    0x58ed0bd56ff0 ---------A T 01100  DIM W(H,V),V(H,V)
    0x58ed0bd5cd00 ---------A   01110  PRINT
    0x58ed0bd5cd60 ---------A   01120  PRINT
    0x58ed0bd5cdc0 ---------A   01130  PRINT
    0x58ed0bd5ce20 ---------A   01140  PRINT
    0x58ed0bd56f30 ---------A   01150  Q=0
    0x58ed0bd570b0 ---------A   01160  Z=0
    0x58ed0bd5d900 ---------A   01170  X=INT(RND(1)*H+1)
    0x58ed0bd5dcb0 ---------A   01180  FOR I=1 TO H
    0x58ed0bd5df10 ---------A   01190  IF I=X THEN 1220
    0x58ed0bd5e070 ---------A   01200  PRINT ".--";
    0x58ed0bd5e0f0 ---------A   01210  GOTO 1230
    0x58ed0bd5e260 ---------A T 01220  PRINT ".  ";
    0x58ed0bd5e3a0 ---------A T 01230  NEXT I
    0x58ed0bd5e510 ---------A   01240  PRINT "."
    0x58ed0bd5e7d0 ---------A   01250  C=1
    0x58ed0bd5eb80 ---------A   01260  W(X,1)=C
    0x58ed0bd5eeb0 ---------A   01270  C=C+1
    0x58ed0bd5f180 ---------A   01280  R=X
    0x58ed0bd5f430 ---------A   01290  S=1
    0x58ed0bd5f4a0 ---------A   01300  GOTO 1390
    0x58ed0bd5f710 ---------A T 01310  IF R<>H THEN 1370
    0x58ed0bd5f990 ---------A   01320  IF S<>V THEN 1360
    0x58ed0bd5fb90 ---------A   01330  R=1
    0x58ed0bd5fd80 ---------A   01340  S=1
    0x58ed0bd5fdf0 ---------A   01350  GOTO 1380
    0x58ed0bd60360 ---------A T 01360  GOTO 1380
    0x58ed0bd60670 ---------A T 01370  R=R+1
    0x58ed0bd60a80 ---------A T 01380  IF W(R,S)=0 THEN 1310
    0x58ed0bd60df0 ---------A T 01390  IF R-1=0 THEN 1750
    0x58ed0bd61310 ---------A   01400  IF W(R-1,S)<>0 THEN 1750
    0x58ed0bd61680 ---------A   01410  IF S-1=0 THEN 1560
    0x58ed0bd61ba0 ---------A   01420  IF W(R,S-1)<>0 THEN 1560
    0x58ed0bd61e30 ---------A   01430  IF R=H THEN 1470
    0x58ed0bd62350 ---------A   01440  IF W(R+1,S)<>0 THEN 1470
    0x58ed0bd62940 ---------A   01450  X=INT(RND(1)*3+1)
    0x58ed0bd62ee0 ---------A   01460  ON X GOTO 2130,2200,2270
    0x58ed0bd63160 ---------A T 01470  IF S<>V THEN 1510
    0x58ed0bd633c0 ---------A   01480  IF Z=1 THEN 1540
    0x58ed0bd635c0 ---------A   01490  Q=1
    0x58ed0bd63640 ---------A   01500  GOTO 1520
    0x58ed0bd63b50 ---------A T 01510  IF W(R,S+1)<>0 THEN 1540
    0x58ed0bd64140 ---------A T 01520  X=INT(RND(1)*3+1)
    0x58ed0bd644d0 ---------A   01530  ON X GOTO 2130,2200,2360
    0x58ed0bd64ab0 ---------A T 01540  X=INT(RND(1)*2+1)
    0x58ed0bd64d80 ---------A   01550  ON X GOTO 2130,2200
    0x58ed0bd65010 ---------A T 01560  IF R=H THEN 1670
    0x58ed0bd65530 ---------A   01570  IF W(R+1,S)<>0 THEN 1670
    0x58ed0bd657b0 ---------A   01580  IF S<>V THEN 1620
    0x58ed0bd65a10 ---------A   01590  IF Z=1 THEN 1650
    0x58ed0bd65c10 ---------A   01600  Q=1
    0x58ed0bd65c90 ---------A   01610  GOTO 1630
    0x58ed0bd661a0 ---------A T 01620  IF W(R,S+1)<>0 THEN 1650
    0x58ed0bd66790 ---------A T 01630  X=INT(RND(1)*3+1)
    0x58ed0bd66b20 ---------A   01640  ON X GOTO 2130,2270,2360
    0x58ed0bd67100 ---------A T 01650  X=INT(RND(1)*2+1)
    0x58ed0bd673d0 ---------A   01660  ON X GOTO 2130,2270
    0x58ed0bd67650 ---------A T 01670  IF S<>V THEN 1710
    0x58ed0bd678b0 ---------A   01680  IF Z=1 THEN 1740
    0x58ed0bd67ab0 ---------A   01690  Q=1
    0x58ed0bd67b30 ---------A   01700  GOTO 1720
    0x58ed0bd68040 ---------A T 01710  IF W(R,S+1)<>0 THEN 1740
    0x58ed0bd68620 ---------A T 01720  X=INT(RND(1)*2+1)
    0x58ed0bd688f0 ---------A   01730  ON X GOTO 2130,2360
    0x58ed0bd68970 ---------A T 01740  GOTO 2130
    0x58ed0bd68cd0 ---------A T 01750  IF S-1=0 THEN 1960
    0x58ed0bd691f0 ---------A   01760  IF W(R,S-1)<>0 THEN 1960
    0x58ed0bd69480 ---------A   01770  IF R=H THEN 1880
    0x58ed0bd699a0 ---------A   01780  IF W(R+1,S)<>0 THEN 1880
    0x58ed0bd69c20 ---------A   01790  IF S<>V THEN 1830
    0x58ed0bd69e80 ---------A   01800  IF Z=1 THEN 1860
    0x58ed0bd6a490 ---------A   01810  Q=1
    0x58ed0bd6a510 ---------A   01820  GOTO 1840
    0x58ed0bd6aa20 ---------A T 01830  IF W(R,S+1)<>0 THEN 1860
    0x58ed0bd6b010 ---------A T 01840  X=INT(RND(1)*3+1)
    0x58ed0bd6b3a0 ---------A   01850  ON X GOTO 2200,2270,2360
    0x58ed0bd6b980 ---------A T 01860  X=INT(RND(1)*2+1)
    0x58ed0bd6bc50 ---------A   01870  ON X GOTO 2200,2270
    0x58ed0bd6bed0 ---------A T 01880  IF S<>V THEN 1920
    0x58ed0bd6c130 ---------A   01890  IF Z=1 THEN 1950
    0x58ed0bd6c330 ---------A   01900  Q=1
    0x58ed0bd6c3b0 ---------A   01910  GOTO 1930
    0x58ed0bd6c8c0 ---------A T 01920  IF W(R,S+1)<>0 THEN 1950
    0x58ed0bd6cea0 ---------A T 01930  X=INT(RND(1)*2+1)
    0x58ed0bd6d170 ---------A   01940  ON X GOTO 2200,2360
    0x58ed0bd6d1f0 ---------A T 01950  GOTO 2200
    0x58ed0bd6d470 ---------A T 01960  IF R=H THEN 2060
    0x58ed0bd6d990 ---------A   01970  IF W(R+1,S)<>0 THEN 2060
    0x58ed0bd6dc10 ---------A   01980  IF S<>V THEN 2020
    0x58ed0bd6de70 ---------A   01990  IF Z=1 THEN 2050
    0x58ed0bd6e070 ---------A   02000  Q=1
    0x58ed0bd6e0f0 ---------A   02010  GOTO 2210
    0x58ed0bd6e600 ---------A T 02020  IF W(R,S+1)<>0 THEN 2050
    0x58ed0bd6ebe0 ---------A   02030  X=INT(RND(1)*2+1)
    0x58ed0bd6eeb0 ---------A   02040  ON X GOTO 2270,2360
    0x58ed0bd6ef30 ---------A T 02050  GOTO 2270
    0x58ed0bd6f1a0 ---------A T 02060  IF S<>V THEN 2100
    0x58ed0bd6f400 ---------A   02070  IF Z=1 THEN 2120
    0x58ed0bd6f600 ---------A   02080  Q=1
    0x58ed0bd6f680 ---------A   02090  GOTO 2110
    0x58ed0bd6fb90 ---------A T 02100  IF W(R,S+1)<>0 THEN 2120
    0x58ed0bd6fc10 ---------A T 02110  GOTO 2360
    0x58ed0bd6fc80 ---------A T 02120  GOTO 2520
    0x58ed0bd70180 ---------A T 02130  W(R-1,S)=C
    0x58ed0bd70490 ---------A   02140  C=C+1
    0x58ed0bd70940 ---------A   02150  V(R-1,S)=2
    0x58ed0bd70c80 ---------A   02160  R=R-1
    0x58ed0bd71110 ---------A   02170  IF C=H*V+1 THEN 2530
    0x58ed0bd71310 ---------A   02180  Q=0
    0x58ed0bd71380 ---------A   02190  GOTO 1390
    0x58ed0bd71870 ---------A T 02200  W(R,S-1)=C
    0x58ed0bd71bc0 ---------A T 02210  C=C+1
    0x58ed0bd72070 ---------A   02220  V(R,S-1)=1
    0x58ed0bd72380 ---------A   02230  S=S-1
    0x58ed0bd72810 ---------A   02240  IF C=H*V+1 THEN 2530
    0x58ed0bd72a10 ---------A   02250  Q=0
    0x58ed0bd72a80 ---------A   02260  GOTO 1390
    0x58ed0bd72f80 ---------A T 02270  W(R+1,S)=C
    0x58ed0bd73290 ---------A   02280  C=C+1
    0x58ed0bd736a0 ---------A   02290  IF V(R,S)=0 THEN 2320
    0x58ed0bd73a60 ---------A   02300  V(R,S)=3
    0x58ed0bd73ad0 ---------A   02310  GOTO 2330
    0x58ed0bd73ea0 ---------A T 02320  V(R,S)=2
    0x58ed0bd741e0 ---------A T 02330  R=R+1
    0x58ed0bd74670 ---------A   02340  IF C=H*V+1 THEN 2530
    0x58ed0bd746f0 ---------A   02350  GOTO 1750
    0x58ed0bd74960 ---------A T 02360  IF Q=1 THEN 2460
    0x58ed0bd74e40 ---------A   02370  W(R,S+1)=C
    0x58ed0bd75150 ---------A   02380  C=C+1
    0x58ed0bd75560 ---------A   02390  IF V(R,S)=0 THEN 2420
    0x58ed0bd75920 ---------A   02400  V(R,S)=3
    0x58ed0bd75990 ---------A   02410  GOTO 2440
    0x58ed0bd75d70 ---------A T 02420  V(R,S)=1
    0x58ed0bd76080 ---------A   02430  S=S+1
    0x58ed0bd76510 ---------A T 02440  IF C=H*V+1 THEN 2530
    0x58ed0bd76590 ---------A   02450  GOTO 1390
    0x58ed0bd767b0 ---------A T 02460  Z=1
    0x58ed0bd76bd0 ---------A   02470  IF V(R,S)=0 THEN 2510
    0x58ed0bd76f90 ---------A   02480  V(R,S)=3
    0x58ed0bd77180 ---------A   02490  Q=0
    0x58ed0bd77200 ---------A   02500  GOTO 2520
    0x58ed0bd77bf0 ---------A T 02510  GOTO 1380
    0x58ed0bd77c60 ---------A T 02520  GOTO 1310
    0x58ed0bd78010 ---------A T 02530  FOR J=1 TO V
    0x58ed0bd78190 ---------A   02540  PRINT "I";
    0x58ed0bd784a0 ---------A   02550  FOR I=1 TO H
    0x58ed0bd788c0 ---------A   02560  IF V(I,J)<2 THEN 2590
    0x58ed0bd78a40 ---------A   02570  PRINT "   ";
    0x58ed0bd78ac0 ---------A   02580  GOTO 2600
    0x58ed0bd78c30 ---------A T 02590  PRINT "  I";
    0x58ed0bd78d70 ---------A T 02600  NEXT I
    0x58ed0bd78e00 ---------A   02610  PRINT
    0x58ed0bd79110 ---------A   02620  FOR I=1 TO H
    0x58ed0bd79d50 ---------A   02630  IF V(I,J)=0 THEN 2670
    0x58ed0bd7a170 ---------A   02640  IF V(I,J)=2 THEN 2670
    0x58ed0bd7a2f0 ---------A   02650  PRINT ":  ";
    0x58ed0bd7a370 ---------A   02660  GOTO 2680
    0x58ed0bd7a4e0 ---------A T 02670  PRINT ":--";
    0x58ed0bd7a620 ---------A T 02680  NEXT I
    0x58ed0bd7a790 ---------A   02690  PRINT "."
    0x58ed0bd7a8d0 ---------A   02700  NEXT J
    0x58ed0bd7a940 ---------A   02710  END
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
    // 01000 PRINT TAB(28);"AMAZING PROGRAM"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,28);strcat(buf,"AMAZING PROGRAM");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01060:
    // 01060 INPUT "WHAT ARE YOUR WIDTH AND LENGTH";H,V
    // Start of Basic INPUT statement 01060
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,"WHAT ARE YOUR WIDTH AND LENGTH");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&H_int,args,0)) ||
                (err += b2c_strtoi(&V_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01060
    // 01070 IF H<>1 AND V<>1 THEN 1100
    if(H_int!=1&&V_int!=1)goto Lbl_01100;
    // 01080 PRINT "MEANINGLESS DIMENSIONS.  TRY AGAIN."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"MEANINGLESS DIMENSIONS.  TRY AGAIN.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 GOTO 1060
    goto Lbl_01060;

  Lbl_01100:
    // 01100 DIM W(H,V),V(H,V)
    // 01110 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01150 Q=0
    Q_int = 0;
    // 01160 Z=0
    Z_int = 0;
    // 01170 X=INT(RND(1)*H+1)
    X_int = INT(RND(1)*H_int+1);
    // 01180 FOR I=1 TO H
    for(I_int=1;I_int<=H_int;I_int++){
        // 01190 IF I=X THEN 1220
        if(I_int==X_int)goto Lbl_01220;
        // 01200 PRINT ".--";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,".--");fputs(buf,fh); };
        // 01210 GOTO 1230
        goto Lbl_01230;

  Lbl_01220:
        // 01220 PRINT ".  ";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,".  ");fputs(buf,fh); };

  Lbl_01230:
        // 01230 NEXT I
        int dummy_1230=0; // Ignore this line.
    }; // End-For(I_int)
    // 01240 PRINT "."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 C=1
    C_int = 1;
    // 01260 W(X,1)=C
    W_int_arr[X_int][1] = C_int;
    // 01270 C=C+1
    C_int = C_int+1;
    // 01280 R=X
    R_int = X_int;
    // 01290 S=1
    S_int = 1;
    // 01300 GOTO 1390
    goto Lbl_01390;

  Lbl_01310:
    // 01310 IF R<>H THEN 1370
    if(R_int!=H_int)goto Lbl_01370;
    // 01320 IF S<>V THEN 1360
    if(S_int!=V_int)goto Lbl_01360;
    // 01330 R=1
    R_int = 1;
    // 01340 S=1
    S_int = 1;
    // 01350 GOTO 1380
    goto Lbl_01380;

  Lbl_01360:
    // 01360 GOTO 1380
    goto Lbl_01380;

  Lbl_01370:
    // 01370 R=R+1
    R_int = R_int+1;

  Lbl_01380:
    // 01380 IF W(R,S)=0 THEN 1310
    if(W_int_arr[R_int][S_int]==0)goto Lbl_01310;

  Lbl_01390:
    // 01390 IF R-1=0 THEN 1750
    if(R_int-1==0)goto Lbl_01750;
    // 01400 IF W(R-1,S)<>0 THEN 1750
    if(W_int_arr[R_int-1][S_int]!=0)goto Lbl_01750;
    // 01410 IF S-1=0 THEN 1560
    if(S_int-1==0)goto Lbl_01560;
    // 01420 IF W(R,S-1)<>0 THEN 1560
    if(W_int_arr[R_int][S_int-1]!=0)goto Lbl_01560;
    // 01430 IF R=H THEN 1470
    if(R_int==H_int)goto Lbl_01470;
    // 01440 IF W(R+1,S)<>0 THEN 1470
    if(W_int_arr[R_int+1][S_int]!=0)goto Lbl_01470;
    // 01450 X=INT(RND(1)*3+1)
    X_int = INT(RND(1)*3+1);
    // 01460 ON X GOTO 2130,2200,2270
    switch((int)(X_int)){
        case 1: goto Lbl_02130;
        case 2: goto Lbl_02200;
        case 3: goto Lbl_02270;
        default: break; 
    };

  Lbl_01470:
    // 01470 IF S<>V THEN 1510
    if(S_int!=V_int)goto Lbl_01510;
    // 01480 IF Z=1 THEN 1540
    if(Z_int==1)goto Lbl_01540;
    // 01490 Q=1
    Q_int = 1;
    // 01500 GOTO 1520
    goto Lbl_01520;

  Lbl_01510:
    // 01510 IF W(R,S+1)<>0 THEN 1540
    if(W_int_arr[R_int][S_int+1]!=0)goto Lbl_01540;

  Lbl_01520:
    // 01520 X=INT(RND(1)*3+1)
    X_int = INT(RND(1)*3+1);
    // 01530 ON X GOTO 2130,2200,2360
    switch((int)(X_int)){
        case 1: goto Lbl_02130;
        case 2: goto Lbl_02200;
        case 3: goto Lbl_02360;
        default: break; 
    };

  Lbl_01540:
    // 01540 X=INT(RND(1)*2+1)
    X_int = INT(RND(1)*2+1);
    // 01550 ON X GOTO 2130,2200
    switch((int)(X_int)){
        case 1: goto Lbl_02130;
        case 2: goto Lbl_02200;
        default: break; 
    };

  Lbl_01560:
    // 01560 IF R=H THEN 1670
    if(R_int==H_int)goto Lbl_01670;
    // 01570 IF W(R+1,S)<>0 THEN 1670
    if(W_int_arr[R_int+1][S_int]!=0)goto Lbl_01670;
    // 01580 IF S<>V THEN 1620
    if(S_int!=V_int)goto Lbl_01620;
    // 01590 IF Z=1 THEN 1650
    if(Z_int==1)goto Lbl_01650;
    // 01600 Q=1
    Q_int = 1;
    // 01610 GOTO 1630
    goto Lbl_01630;

  Lbl_01620:
    // 01620 IF W(R,S+1)<>0 THEN 1650
    if(W_int_arr[R_int][S_int+1]!=0)goto Lbl_01650;

  Lbl_01630:
    // 01630 X=INT(RND(1)*3+1)
    X_int = INT(RND(1)*3+1);
    // 01640 ON X GOTO 2130,2270,2360
    switch((int)(X_int)){
        case 1: goto Lbl_02130;
        case 2: goto Lbl_02270;
        case 3: goto Lbl_02360;
        default: break; 
    };

  Lbl_01650:
    // 01650 X=INT(RND(1)*2+1)
    X_int = INT(RND(1)*2+1);
    // 01660 ON X GOTO 2130,2270
    switch((int)(X_int)){
        case 1: goto Lbl_02130;
        case 2: goto Lbl_02270;
        default: break; 
    };

  Lbl_01670:
    // 01670 IF S<>V THEN 1710
    if(S_int!=V_int)goto Lbl_01710;
    // 01680 IF Z=1 THEN 1740
    if(Z_int==1)goto Lbl_01740;
    // 01690 Q=1
    Q_int = 1;
    // 01700 GOTO 1720
    goto Lbl_01720;

  Lbl_01710:
    // 01710 IF W(R,S+1)<>0 THEN 1740
    if(W_int_arr[R_int][S_int+1]!=0)goto Lbl_01740;

  Lbl_01720:
    // 01720 X=INT(RND(1)*2+1)
    X_int = INT(RND(1)*2+1);
    // 01730 ON X GOTO 2130,2360
    switch((int)(X_int)){
        case 1: goto Lbl_02130;
        case 2: goto Lbl_02360;
        default: break; 
    };

  Lbl_01740:
    // 01740 GOTO 2130
    goto Lbl_02130;

  Lbl_01750:
    // 01750 IF S-1=0 THEN 1960
    if(S_int-1==0)goto Lbl_01960;
    // 01760 IF W(R,S-1)<>0 THEN 1960
    if(W_int_arr[R_int][S_int-1]!=0)goto Lbl_01960;
    // 01770 IF R=H THEN 1880
    if(R_int==H_int)goto Lbl_01880;
    // 01780 IF W(R+1,S)<>0 THEN 1880
    if(W_int_arr[R_int+1][S_int]!=0)goto Lbl_01880;
    // 01790 IF S<>V THEN 1830
    if(S_int!=V_int)goto Lbl_01830;
    // 01800 IF Z=1 THEN 1860
    if(Z_int==1)goto Lbl_01860;
    // 01810 Q=1
    Q_int = 1;
    // 01820 GOTO 1840
    goto Lbl_01840;

  Lbl_01830:
    // 01830 IF W(R,S+1)<>0 THEN 1860
    if(W_int_arr[R_int][S_int+1]!=0)goto Lbl_01860;

  Lbl_01840:
    // 01840 X=INT(RND(1)*3+1)
    X_int = INT(RND(1)*3+1);
    // 01850 ON X GOTO 2200,2270,2360
    switch((int)(X_int)){
        case 1: goto Lbl_02200;
        case 2: goto Lbl_02270;
        case 3: goto Lbl_02360;
        default: break; 
    };

  Lbl_01860:
    // 01860 X=INT(RND(1)*2+1)
    X_int = INT(RND(1)*2+1);
    // 01870 ON X GOTO 2200,2270
    switch((int)(X_int)){
        case 1: goto Lbl_02200;
        case 2: goto Lbl_02270;
        default: break; 
    };

  Lbl_01880:
    // 01880 IF S<>V THEN 1920
    if(S_int!=V_int)goto Lbl_01920;
    // 01890 IF Z=1 THEN 1950
    if(Z_int==1)goto Lbl_01950;
    // 01900 Q=1
    Q_int = 1;
    // 01910 GOTO 1930
    goto Lbl_01930;

  Lbl_01920:
    // 01920 IF W(R,S+1)<>0 THEN 1950
    if(W_int_arr[R_int][S_int+1]!=0)goto Lbl_01950;

  Lbl_01930:
    // 01930 X=INT(RND(1)*2+1)
    X_int = INT(RND(1)*2+1);
    // 01940 ON X GOTO 2200,2360
    switch((int)(X_int)){
        case 1: goto Lbl_02200;
        case 2: goto Lbl_02360;
        default: break; 
    };

  Lbl_01950:
    // 01950 GOTO 2200
    goto Lbl_02200;

  Lbl_01960:
    // 01960 IF R=H THEN 2060
    if(R_int==H_int)goto Lbl_02060;
    // 01970 IF W(R+1,S)<>0 THEN 2060
    if(W_int_arr[R_int+1][S_int]!=0)goto Lbl_02060;
    // 01980 IF S<>V THEN 2020
    if(S_int!=V_int)goto Lbl_02020;
    // 01990 IF Z=1 THEN 2050
    if(Z_int==1)goto Lbl_02050;
    // 02000 Q=1
    Q_int = 1;
    // 02010 GOTO 2210
    goto Lbl_02210;

  Lbl_02020:
    // 02020 IF W(R,S+1)<>0 THEN 2050
    if(W_int_arr[R_int][S_int+1]!=0)goto Lbl_02050;
    // 02030 X=INT(RND(1)*2+1)
    X_int = INT(RND(1)*2+1);
    // 02040 ON X GOTO 2270,2360
    switch((int)(X_int)){
        case 1: goto Lbl_02270;
        case 2: goto Lbl_02360;
        default: break; 
    };

  Lbl_02050:
    // 02050 GOTO 2270
    goto Lbl_02270;

  Lbl_02060:
    // 02060 IF S<>V THEN 2100
    if(S_int!=V_int)goto Lbl_02100;
    // 02070 IF Z=1 THEN 2120
    if(Z_int==1)goto Lbl_02120;
    // 02080 Q=1
    Q_int = 1;
    // 02090 GOTO 2110
    goto Lbl_02110;

  Lbl_02100:
    // 02100 IF W(R,S+1)<>0 THEN 2120
    if(W_int_arr[R_int][S_int+1]!=0)goto Lbl_02120;

  Lbl_02110:
    // 02110 GOTO 2360
    goto Lbl_02360;

  Lbl_02120:
    // 02120 GOTO 2520
    goto Lbl_02520;

  Lbl_02130:
    // 02130 W(R-1,S)=C
    W_int_arr[R_int-1][S_int] = C_int;
    // 02140 C=C+1
    C_int = C_int+1;
    // 02150 V(R-1,S)=2
    V_int = 2;
    // 02160 R=R-1
    R_int = R_int-1;
    // 02170 IF C=H*V+1 THEN 2530
    if(C_int==H_int*V_int+1)goto Lbl_02530;
    // 02180 Q=0
    Q_int = 0;
    // 02190 GOTO 1390
    goto Lbl_01390;

  Lbl_02200:
    // 02200 W(R,S-1)=C
    W_int_arr[R_int][S_int-1] = C_int;

  Lbl_02210:
    // 02210 C=C+1
    C_int = C_int+1;
    // 02220 V(R,S-1)=1
    V_int = 1;
    // 02230 S=S-1
    S_int = S_int-1;
    // 02240 IF C=H*V+1 THEN 2530
    if(C_int==H_int*V_int+1)goto Lbl_02530;
    // 02250 Q=0
    Q_int = 0;
    // 02260 GOTO 1390
    goto Lbl_01390;

  Lbl_02270:
    // 02270 W(R+1,S)=C
    W_int_arr[R_int+1][S_int] = C_int;
    // 02280 C=C+1
    C_int = C_int+1;
    // 02290 IF V(R,S)=0 THEN 2320
    if(V_int==0)goto Lbl_02320;
    // 02300 V(R,S)=3
    V_int = 3;
    // 02310 GOTO 2330
    goto Lbl_02330;

  Lbl_02320:
    // 02320 V(R,S)=2
    V_int = 2;

  Lbl_02330:
    // 02330 R=R+1
    R_int = R_int+1;
    // 02340 IF C=H*V+1 THEN 2530
    if(C_int==H_int*V_int+1)goto Lbl_02530;
    // 02350 GOTO 1750
    goto Lbl_01750;

  Lbl_02360:
    // 02360 IF Q=1 THEN 2460
    if(Q_int==1)goto Lbl_02460;
    // 02370 W(R,S+1)=C
    W_int_arr[R_int][S_int+1] = C_int;
    // 02380 C=C+1
    C_int = C_int+1;
    // 02390 IF V(R,S)=0 THEN 2420
    if(V_int==0)goto Lbl_02420;
    // 02400 V(R,S)=3
    V_int = 3;
    // 02410 GOTO 2440
    goto Lbl_02440;

  Lbl_02420:
    // 02420 V(R,S)=1
    V_int = 1;
    // 02430 S=S+1
    S_int = S_int+1;

  Lbl_02440:
    // 02440 IF C=H*V+1 THEN 2530
    if(C_int==H_int*V_int+1)goto Lbl_02530;
    // 02450 GOTO 1390
    goto Lbl_01390;

  Lbl_02460:
    // 02460 Z=1
    Z_int = 1;
    // 02470 IF V(R,S)=0 THEN 2510
    if(V_int==0)goto Lbl_02510;
    // 02480 V(R,S)=3
    V_int = 3;
    // 02490 Q=0
    Q_int = 0;
    // 02500 GOTO 2520
    goto Lbl_02520;

  Lbl_02510:
    // 02510 GOTO 1380
    goto Lbl_01380;

  Lbl_02520:
    // 02520 GOTO 1310
    goto Lbl_01310;

  Lbl_02530:
    // 02530 FOR J=1 TO V
    for(J_int=1;J_int<=V_int;J_int++){
        // 02540 PRINT "I";
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"I");fputs(buf,fh); };
        // 02550 FOR I=1 TO H
        for(I_int=1;I_int<=H_int;I_int++){
            // 02560 IF V(I,J)<2 THEN 2590
            if(V_int<2)goto Lbl_02590;
            // 02570 PRINT "   ";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"   ");fputs(buf,fh); };
            // 02580 GOTO 2600
            goto Lbl_02600;

  Lbl_02590:
            // 02590 PRINT "  I";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"  I");fputs(buf,fh); };

  Lbl_02600:
            // 02600 NEXT I
            int dummy_2600=0; // Ignore this line.
        }; // End-For(I_int)
        // 02610 PRINT
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
        // 02620 FOR I=1 TO H
        for(I_int=1;I_int<=H_int;I_int++){
            // 02630 IF V(I,J)=0 THEN 2670
            if(V_int==0)goto Lbl_02670;
            // 02640 IF V(I,J)=2 THEN 2670
            if(V_int==2)goto Lbl_02670;
            // 02650 PRINT ":  ";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,":  ");fputs(buf,fh); };
            // 02660 GOTO 2680
            goto Lbl_02680;

  Lbl_02670:
            // 02670 PRINT ":--";
            { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,":--");fputs(buf,fh); };

  Lbl_02680:
            // 02680 NEXT I
            int dummy_2680=0; // Ignore this line.
        }; // End-For(I_int)
        // 02690 PRINT "."
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,".");strcat(buf,"\n");fputs(buf,fh); };
        // 02700 NEXT J
        int dummy_2700=0; // Ignore this line.
    }; // End-For(J_int)
    // 02710 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
