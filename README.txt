Oct 16,2025
----------------------------------------------------------------------------------------------------------------------
NOTE: At the moment the C-language translations, that exist, within each project subdirectory are not working 
      properly, due to a broken b2c being run on all the directories.  This problem will be corrected shortly 
      and this README.txt updated.

NOTE: Only a few directories have working C-programs (sumer, depth, etc).  When I have a chance to upgrate
      my b2c program I'll regenerate all the C-programs which should bring some new translations online.
----------------------------------------------------------------------------------------------------------------------

Sept 26,2025

This directory contains all the Basic source files that I've been able to collect over the years.  It consists mainly
of tokenized basic (used to shrink the Basic files for smaller machines) and actual ASCII Basic listings.

I've developed a program, dump2asc, to convert from tokenized Basic to ASCII Basic listings.  Currently it only converts in 
one direction -- I didn't see any reason to go back to tokenized Basic since I wasn't interested in running these
programs on small machines.  dump2asc can convert a number of tokenized file varieties (GW-Basic un/protected mostly).  

The b2c program converts a variety of Basics to C.  Originally the idea was to take any Basic and convert it over, but 
it turns out that there are some inconsistancies in the Basic language from vendor to vendor.  The program does have
the ability to produce a good guess at which Basic is being translated by counting the translation errors for the
program for each Basic that it understands.  This isn't completely foolproof since b2c isn't complete yet and may
not understand all statements, but more importantly because different versions of Basic can have mutually incompatible 
statements which run differently for each Basic.  

The list at the bottom of this file contains just two directory tree levels of my larger tree.  The listing below
shows what each subdirectory in the 'base' directory looks like (roughly).

    sumer/
    ├── basic
    │   └── sumer.bas
    ├── c
    │   ├── intrinsics.h
    │   ├── sumer
    │   ├── sumer.c
    │   └── sumer.c.r38
    ├── cpp
    │   ├── intrinsics.h
    │   └── Place holder directory (future work)
    ├── python
    │   └── Place holder directory (future work)
    ├── sumer.dbg
    ├── sumer.log
    └── sumer.vars

The files above include the BAS file(s) of the original Basic program.  Sometimes there are multiple BAS files if the Basic
program is large and CHAINed together.  The C directory contains the b2c translated files of the corresponding BAS files.
The cpp and python directories are for future development.  The VARS file in the base directory of the program is a 
file that allows the program to give the C-listing more meaningfull names and is just a straight subsitution: C-name for 
Basic-name.  Currently these files have to be hand generated but in the future I'll have b2c generate VARS files for
each program it compiles.  This is what part of SUMER's VARS file looks like:

    # Routines
    Routine_06510 | Get_Budget_Input
    Routine_06640 | Bribe_Computer
    Routine_06740 | Dsp_Performance
    
    # Intrinsics (Change mangled name back to original name)
    SPACE_str     | SPACE
    MID_str       | MID
    CHR_str       | CHR
    RIGHT_str     | RIGHT
    LEFT_str      | LEFT
    
    # Labels
    # Routine Get_Budget_Input
    Lbl_06510   | LoopForInput
    Lbl_06580   | CheckForExit
    Lbl_06600   | ChainExit
    Lbl_06620   | FunctReturn
    # Routine Bribe_Computer
    Lbl_06640   | Start
    Lbl_06730   | PrintPerformance
    # Routine Dsp_Performance
    Lbl_06780   | FoundPerfLvl
    Lbl_06810   | Finish
    
    # Routine main
    Lbl_02030   | MinYearsOK
    Lbl_02140   | StateOfDomain
    Lbl_02190   | SingleDeath
    Lbl_02200   | NumbImigrants
    Lbl_02230   | SingleImigrant
    Lbl_02280   | CheckPlague
    ...
    Lbl_06090   | YearsSufferedUnderReign
    Lbl_06140   | YearsProsperedUnderReign
    Lbl_06160   | PopulanceFuture
    Lbl_06200   | SmartFuture
    Lbl_06210   | ComplementRuler
    Lbl_06220   | DspPerformanceAndExit
    
    # Variables
    A_flt       | Initial_Land_Owned
    A_str_arr   | Ruler_Performance_Evaluations
    A1_flt      | Defense_Budget
    B_flt       | Pre_Integerized_Budget_Figure
    B_str       | TimeStr
    C1_flt      | ScorePopulation
    C2_flt      | ScoreWheat
    C3_flt      | ScoreLand
    ...
    T_flt_arr   | Performance_Thresholds
    T_flt       | Performance_Score
    W_flt       | Bad_Weather_Flag
    W0_flt      | Who_We_Borrowed_From
    W2_flt      | Temp1
    X_flt       | Loop_Index
    Y_flt       | Max_Years
    Z_flt       | Temp2
    Z_str_arr   | MoneyLender_Names
    Z8_flt      | Acres_Reposessed

The sumer.vars file was generated iteratively using b2c to insert more and more descriptive labels and names into the C-source
as it becomes obvious how the original Basic programmer used them.  This is a fairly simple process for anybody 
comfortable with reading Basic code.
    
Only some of the programs in 'base' have been converted to working 'C' language programs by my b2c program.  This list
of programs are my test suite for my b2c (Basic to C) translation program.  b2c is currently being developed
and so these C-translations may change as I figure out the translation problem.  As well, as b2c becomes more complete
the list of programs that have working copies will increase (and not decrease hopefully).

As well, I will move more of the other subdirectories/Bas-source into this repo as time permits.  Currently only the
'base' directory is available.  I'll also make b2c and dump2asc sources available on my github.

The b2c/dump2asc projects were developed originally because a friend, Dave, and I hand-typed these BAS programs in to the
machine we were working on.  It was tedious and no-fun at all.  Playing the games was fun which of course made us wish
for improvements in the games.  However, Basic was really a tedious language to develop programs in because it lead
to spagetti code and all sorts of bad programming practices.  At the time C was my preferred language and so I thought
"why spend 10s of hours of my time hand converting these programs when I could make a commpiler to translate them in 
a split second, and it would only require thousands of hours."  That may be a good approximation -- programmer economics ;-).
Anyway, the compiler project is much more fun. 

If you find these Basic programs interesting or are interested in the b2c/dump2asc programs let me know. 

/Alan 
NonAligned@gmail.com

    .
    ├── base
    │   ├── 3dpltcc
    │   ├── 6502
    │   ├── advdraw
    │   ├── amazing
    │   ├── animal
    │   ├── bandit
    │   ├── baseball
    │   ├── battle
    │   ├── biocljr
    │   ├── biorhythm
    │   ├── blkbxcc1
    │   ├── bshipcc
    │   ├── btlstr
    │   ├── cartoon
    │   ├── chase
    │   ├── chkrscc
    │   ├── civilwar2
    │   ├── clewso
    │   ├── cowboy
    │   ├── craps
    │   ├── depth
    │   ├── dndchar
    │   ├── dptchgcc
    │   ├── drawart
    │   ├── elisa
    │   ├── empire
    │   ├── escape
    │   ├── evasncc
    │   ├── flipdsc
    │   ├── ftballcc
    │   ├── galem30
    │   ├── golf
    │   ├── greed2
    │   ├── gunner
    │   ├── hamurabi
    │   ├── hangmn
    │   ├── hanoi
    │   ├── hockey
    │   ├── horses
    │   ├── icbm
    │   ├── jigsawcc
    │   ├── joust
    │   ├── lander
    │   ├── lem
    │   ├── life
    │   ├── lifetwo
    │   ├── litquiz
    │   ├── lovepst
    │   ├── lunar
    │   ├── masmind
    │   ├── masters
    │   ├── maze
    │   ├── mgwmpcc
    │   ├── notonecc
    │   ├── number
    │   ├── othelo
    │   ├── pressup
    │   ├── queen
    │   ├── rabbit
    │   ├── robot
    │   ├── romlncc
    │   ├── rsxmasd
    │   ├── salvocc
    │   ├── seabatl
    │   ├── seabtcc
    │   ├── spacetax
    │   ├── spacewar
    │   ├── startrader
    │   ├── startrek
    │   ├── strek2
    │   ├── strek40
    │   ├── strwrscc
    │   ├── sumer
    │   ├── supst
    │   ├── tictac
    │   ├── tomb
    │   ├── trade
    │   ├── trek
    │   ├── tunlv
    │   ├── war
    │   ├── warfish
    │   ├── wrsrccc
    │   ├── wumpus
    │   └── xstrek
    ├── ccgames
    │   ├── disk1
    │   └── disk2
    ├── classics
    │   ├── ASCII Art
    │   ├── AW Software
    │   ├── Classics
    │   ├── Creative Computing
    │   └── Other
    ├── cpm_games
    │   └── docs
    ├── external
    │   ├── token -> /home/alan/dev/BasicGames/dump2asc/token/
    │   └── tokenized
    ├── misc
    └── programs
        ├── Samples
        ├── SFC
        ├── token -> ../../dump2asc/token
        ├── tokenized
        ├── Trek
        └── Trek88

