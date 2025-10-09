# NOTE: Type forced to be:
# trs2 - TRS-80 Level II BASIC tokenized file
   10 CLS 
   11 : REM ' ****** BIORYTHM ******
   12 : REM ' CREATIVE COMPUTING : JAN-FEB 1978 P. 75
   13 : REM ' MCIROSOFT BASIC PROGRAM
   14 P = 6.23819
   15 FOR I = 1 TO 4 : PRINT : NEXT I
   16 PRINT TAB 16)"Wait please --- working!"
   17 DIM P1(23),P2(23),E1(28),E2(28),I1(33),I2(33)
   18 DIM W$(7),L$(41),M$(12)
   19 DATA SUN,MON,TUE,WED,THR,FRI,SAT
   20 DATA JAN,FEB,MAR,APR,MAY,JUN
   21 DATA JUL,AUG,SEP,OCT,NOV,DEC
   22 FOR N = 1 TO 23
   23 P2(N) = SIN (P * (N - 1) / 23)
   24 P1(N) = INT (21.5 + 20 * P2(N))
   25 NEXT N
   26 FOR N = 1 TO 28
   27 E2(N) = SIN (P * (N - 1) / 28)
   28 E1(N) = INT (21.5 + 20 * E2(N))
   29 NEXT N
   30 FOR N = 1 TO 33
   31 I2(N) = SIN (P * (N - 1) / 33)
   32 I1(N) = INT (21.5 + 20 * I2(N))
   33 NEXT N
   34 FOR N = 1 TO 7
   35 READ W$(N)
   36 NEXT N
   37 FOR N = 1 TO 12
   38 READ M$(N)
   39 NEXT N
   40 FOR N = 1 TO 41
   41 L$(N) = " "
   42 NEXT N
   43 PRINT CHR$ (12)
   44 PRINT "Enter name :  ";
   45 INPUT N$
   46 PRINT "Enter birth date :  "
   47 PRINT "10,9,43 means Oct 9, 1943"
   48 INPUT M,D,Y
   49 Y = Y + 1900
   50 PRINT "Enter month and year for biorhythmic calender"
   51 PRINT "4, 77 means Apr, 1977"
   52 INPUT M4,Y4
   53 Y7 = Y : M7 = M : D7 = D
   54 Y4 = Y4 + 1900
   55 Y = Y7 : M = M7 : D = D7
   56 GOSUB 154
   57 M = M4
   58 D = 1
   59 Y = Y4
   60 GOSUB 117
   61 S1 = J
   62 GOSUB 154
   63 L1 = 31
   64 IF M4 = 12 THEN 70
   65 GOSUB 130
   66 S3 = N3
   67 M = M4 + 1
   68 GOSUB 130
   69 L1 = N3 - S3
   70 B = J - S1 + 1
   71 E = B + L1 - 1
   72 PRINT "  BIO"; TAB 56);M$(M4)
   73 PRINT " INDEX"; TAB 54);Y
   74 PRINT TAB 9);"-....................0";
   75 PRINT "....................+"
   76 V = 0
   77 FOR I = B TO E
   78 V = V + 1
   79 J3 = I - 1
   80 K1 = INT (J3 / 23)
   81 K2 = J3 - (K1 * 23) + 1
   82 K3 = INT (J3 / 28)
   83 K4 = J3 - (K3 * 28) + 1
   84 K5 = INT (J3 / 33)
   85 K6 = J3 - (K5 * 33) + 1
   86 P = P1(K2)
   87 Q = E1(K4)
   88 R = I1(K6)
   89 O = P2(K2) + E2(K4) + I2(K6)
   90 O = INT (16666 * (O + 3)) + 1
   91 L$(21) = "."
   92 L$(P) = "P"
   93 L$(Q) = "E"
   94 L$(R) = "I"
   95 PRINT O; TAB 10)
   96 FOR N = 1 TO 41
   97 PRINT L$(N);
   98 NEXT N
   99 PRINT TAB 54);V; TAB 58);W$(N2)
  100 L$(P) = " "
  101 L$(Q) = " "
  102 L$(R) = " "
  103 N2 = N2 + 1
  104 IF N2 < 8 THEN 106
  105 N2 = 1
  106 NEXT I
  107 PRINT TAB 9);"-....................0";
  108 PRINT "....................+"
  109 IF LEN (N$) / 2 = INT ( LEN (N$) / 2) THEN PL = 31 - LEN (N$) / 2 : ELSE PL = 30 - INT ( LEN (N$) / 2)
  110 PRINT TAB PL);N$
  111 INPUT "Do you want the next month";Q$
  112 IF LEFT$ (Q$,1) = "Y" OR LEFT$ (Q$,1) = "y" THEN 113 : ELSE IF LEFT$ (Q$,1) = "N" OR LEFT$ (Q$,1) = "n" THEN 116 : ELSE 111
  113 M4 = M4 + 1
  114 IF M4 < = 12 THEN 55
  115 M4 = 1 : Y4 = Y4 + 1 : GOTO 55
  116 STOP 
  117 IF M < 3 THEN 121
  118 M1 = M - 2
  119 Y1 = Y
  120 GOTO 123
  121 M1 = M + 10
  122 Y1 = Y - 1
  123 C = INT (Y1 / 100)
  124 D1 = Y1 - (C * 100)
  125 N4 = INT ((13 * M1 - 1) / 5) + D + D1 + INT (D1 / 4)
  126 N = N4 + INT (C / 4) - 2 * C + 77
  127 N1 = INT (N / 7)
  128 N2 = N - (N1 * 7) + 1
  129 RETURN 
  130 Y2 = INT (Y / 4)
  131 Y3 = Y - (Y2 * 4)
  132 IF Y3 = 0 THEN 134
  133 GOTO 144
  134 Y2 = INT (Y / 100)
  135 Y3 = Y - (Y2 * 100)
  136 IF Y3 = 0 THEN 138
  137 GOTO 142
  138 Y2 = INT (Y / 400)
  139 Y3 = Y - (Y2 * 400)
  140 IF Y3 = 0 THEN 142
  141 GOTO 144
  142 L1 = 1
  143 GOTO 145
  144 L1 = 0
  145 N1 = INT ((3055 * (M + 2)) / 100) - 91
  146 L = 0
  147 IF M < 3 THEN 152
  148 IF L1 = 0 THEN 151
  149 L = 1
  150 GOTO 152
  151 L = 2
  152 N3 = N1 + D - L
  153 RETURN 
  154 IF M < 3 THEN 158
  155 M1 = M - 3
  156 Y1 = Y
  157 GOTO 160
  158 M1 = M + 9
  159 Y1 = Y - 1
  160 C = INT (Y1 / 100)
  161 D1 = Y1 - (C * 100)
  162 N = INT ((146097! * C) / 4) + D + INT ((1461 * D1) / 4)
  163 J = N + 1.72112E + 06 + INT ((153 * M1 + 2) / 5)
  164 RETURN 
  165 END 
