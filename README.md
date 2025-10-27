--------------------------------------------------------------------------------------------------------------
--------
NOTES: 

- Only a few directories have working C-programs (sumer, depth, etc).  When I have a chance to upgrate
      my b2c program I'll regenerate all the C-programs which should bring some new translations online.

- The translator program b2c and all these Basic programs are translated on a linux (Ubuntu) system and 
      may have adjustments that need to be made for other OSes.  Please let me know about these if you
      trip across them.

- The status of each program is available in the README.md in each group directory.

- Currently only the following files are translated, compiled and runable:
    - base/depth
    - base/gunner
    - base/number
    - base/craps
    - base/sumer
    - base/baseball
    - external/test1 (trival test program)
    - external/bombsawy
    
--------------------------------------------------------------------------------------------------------------
--------

Sept 26,2025

This directory contains all the Basic source files that I've been able to collect over the years.  It 
consists mainly of tokenized basic (used to shrink the Basic files for smaller machines) and actual 
ASCII Basic listings.

I've developed a program, dump2asc, to convert from tokenized Basic to ASCII Basic listings.  Currently it 
only converts in one direction -- I didn't see any reason to go back to tokenized Basic since I wasn't 
interested in running these programs on small machines.  dump2asc can convert a number of tokenized file 
varieties (GW-Basic un/protected mostly).  

The b2c program converts a variety of Basics to C.  Originally the idea was to take any Basic and convert 
it over, but it turns out that there are some inconsistancies in the Basic language from vendor to vendor.  
The program does have the ability to produce a good guess at which Basic is being translated by counting 
the translation errors for the program for each Basic that it understands.  This isn't completely 
foolproof since b2c isn't complete yet and may not understand all statements, but more importantly 
because different versions of Basic can have mutually incompatible statements which run differently 
for each Basic.  

The list at the bottom of this file contains just two directory tree levels of my larger tree.  The listing 
below shows what each subdirectory in the 'base' directory looks like (roughly).

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

The files above include the BAS file(s) of the original Basic program.  Sometimes there are multiple 
BAS files if the Basic program is large and CHAINed together.  The C directory contains the b2c translated 
188d3c940ffiles of the corresponding BAS files.  The cpp and python directories are for future development.  The 
VARS file in the base directory of the program is a file that allows the program to give the C-listing 
more meaningfull names and is just a straight subsitution: C-name for Basic-name.  Currently these files 
have to be hand generated but in the future I'll have b2c generate VARS files for each program it compiles.  
This is what part of SUMER's VARS file looks like:

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

The sumer.vars file was generated iteratively using b2c to insert more and more descriptive labels 
and names into the C-source as it becomes obvious how the original Basic programmer used them.  This 
is a fairly simple process for anybody comfortable with reading Basic code.
    
Only some of the programs in 'base' have been converted to working 'C' language programs by my b2c program.  
This list of programs are my test suite for my b2c (Basic to C) translation program.  b2c is currently 
being developed and so these C-translations may change as I figure out the translation problem.  As well, 
as b2c becomes more complete the list of programs that have working copies will increase (and not decrease 
hopefully).

As well, I will move more of the other subdirectories/Bas-source into this repo as time permits.  Currently 
only the 'base' directory is available.  I'll also make b2c and dump2asc sources available on my github.

The b2c/dump2asc projects were developed originally because a friend, Dave, and I hand-typed these BAS 
programs in to the machine we were working on.  It was tedious and no-fun at all.  Playing the games was 
fun which of course made us wish for improvements in the games.  However, Basic was really a tedious 
language to develop programs in because it lead to spagetti code and all sorts of bad programming practices.  
At the time C was my preferred language and so I thought "why spend 10s of hours of my time hand converting 
these programs when I could make a commpiler to translate them in a split second, and it would only 
require thousands of hours."  That may be a good approximation -- programmer economics ;-).  Anyway, the 
compiler project is much more fun. 

If you find these Basic programs interesting or are interested in the b2c/dump2asc programs let me know. 

/Alan 
NonAligned@gmail.com


Directory structure of projects in repo:

    .
    ├── ascii art
    │   ├── monalisa
    │   ├── nude82
    │   ├── playbcal
    │   ├── snoopy
    │   ├── spock
    │   └── tokenized
    ├── aw software
    │   ├── advdraw2
    │   ├── Autorun
    │   ├── battle
    │   ├── escape
    │   ├── spacetax
    │   ├── tokenized
    │   └── tomb
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
    │   ├── 23-match
    │   ├── aceyducy
    │   ├── amazing
    │   ├── amazingp
    │   ├── animal
    │   ├── awari
    │   ├── bagels
    │   ├── banner
    │   ├── basketbl
    │   ├── batnum
    │   ├── battle
    │   ├── blackjck
    │   ├── bombard
    │   ├── bombsawy
    │   ├── bounce
    │   ├── bowling
    │   ├── boxing
    │   ├── bug
    │   ├── bullfght
    │   ├── bullseye
    │   ├── bunny
    │   ├── buzzword
    │   ├── calendar
    │   ├── change
    │   ├── checkers
    │   ├── chemist
    │   ├── chief
    │   ├── chomp
    │   ├── civilwar
    │   ├── combat
    │   ├── craps
    │   ├── cube
    │   ├── depthchg
    │   ├── diamond
    │   ├── dice
    │   ├── digits
    │   ├── dspace
    │   ├── evenwin1
    │   ├── evenwin2
    │   ├── flipflop
    │   ├── footbal1
    │   ├── footbal2
    │   ├── furtradr
    │   ├── golf
    │   ├── gomoko
    │   ├── granprix
    │   ├── guess
    │   ├── gunner
    │   ├── hamurabi
    │   ├── hangman
    │   ├── hello
    │   ├── hexapawn
    │   ├── hilo
    │   ├── hi-q
    │   ├── hockey
    │   ├── hockey1
    │   ├── horsrace
    │   ├── hurkle
    │   ├── kinema
    │   ├── king
    │   ├── lem
    │   ├── letter
    │   ├── life2
    │   ├── litquiz
    │   ├── love
    │   ├── love-p
    │   ├── madlibs
    │   ├── mastrmnd
    │   ├── mathdice
    │   ├── menu_disk1
    │   ├── menu_disk2
    │   ├── mugwump
    │   ├── name
    │   ├── nicoma
    │   ├── nim
    │   ├── number
    │   ├── onecheck
    │   ├── orbit
    │   ├── pizza
    │   ├── poetry
    │   ├── poker
    │   ├── qubic
    │   ├── queen
    │   ├── reverse
    │   ├── rocksp
    │   ├── roulette
    │   ├── rusrou
    │   ├── salvo
    │   ├── sinewave
    │   ├── slalom
    │   ├── splat
    │   ├── stars
    │   ├── stock
    │   ├── synonym
    │   ├── target
    │   ├── tictac1
    │   ├── tictac2
    │   ├── towers
    │   ├── train
    │   ├── trap
    │   ├── war
    │   ├── weekday
    │   ├── word
    │   └── yahtzee
    ├── classics
    │   ├── animal
    │   ├── biorhythm
    │   ├── elisa
    │   ├── hamurabi
    │   ├── hanoi
    │   ├── lander
    │   ├── life
    │   ├── startrek
    │   ├── startrek1
    │   ├── tictac
    │   ├── tokenized
    │   └── Wumpus
    ├── cpm_games
    │   ├── 23-match
    │   ├── aceyducy
    │   ├── amazing
    │   ├── amazingp
    │   ├── animal
    │   ├── awari
    │   ├── baccrrt
    │   ├── bagels
    │   ├── banner
    │   ├── baseball
    │   ├── basketbl
    │   ├── batnum
    │   ├── battle
    │   ├── bigtrek
    │   ├── bigtrek_z
    │   ├── biocal
    │   ├── birthday
    │   ├── blackjck
    │   ├── blackjck1
    │   ├── bombard
    │   ├── bombsawy
    │   ├── bounce
    │   ├── bowling
    │   ├── boxing
    │   ├── budget
    │   ├── bug
    │   ├── bullfght
    │   ├── bullseye
    │   ├── bunny
    │   ├── buzzword
    │   ├── calendar
    │   ├── chain
    │   ├── change
    │   ├── chase
    │   ├── checkers
    │   ├── chemist
    │   ├── chess
    │   ├── chief
    │   ├── chomp
    │   ├── civilwar
    │   ├── civilwar1
    │   ├── climates
    │   ├── cloud-9
    │   ├── combat
    │   ├── craps
    │   ├── craps1
    │   ├── crazy-8
    │   ├── cube
    │   ├── depthchg
    │   ├── diamond
    │   ├── dice
    │   ├── digits
    │   ├── docs
    │   ├── dspace
    │   ├── evenwin1
    │   ├── evenwin2
    │   ├── flipflop
    │   ├── footbal1
    │   ├── footbal2
    │   ├── furtradr
    │   ├── galaxy
    │   ├── galaxy2
    │   ├── golf
    │   ├── gomoko
    │   ├── granprix
    │   ├── guess
    │   ├── gunner
    │   ├── hamurabi
    │   ├── hangman
    │   ├── hello
    │   ├── hexapawn
    │   ├── hilo
    │   ├── hi-q
    │   ├── hockey
    │   ├── hockey1
    │   ├── horsrace
    │   ├── hurkle
    │   ├── kinema
    │   ├── king
    │   ├── lem
    │   ├── letter
    │   ├── life2
    │   ├── litquiz
    │   ├── love
    │   ├── love-p
    │   ├── madlibs
    │   ├── mastrmnd
    │   ├── mathdice
    │   ├── menu
    │   ├── menu2
    │   ├── monoply
    │   ├── monster
    │   ├── mugwump
    │   ├── name
    │   ├── nicoma
    │   ├── nim
    │   ├── nuketank
    │   ├── number
    │   ├── onecheck
    │   ├── orbit
    │   ├── pizza
    │   ├── poetry
    │   ├── poker
    │   ├── qubic
    │   ├── queen
    │   ├── reverse
    │   ├── rocksp
    │   ├── rose
    │   ├── roulette
    │   ├── rusrou
    │   ├── salvo
    │   ├── sinewave
    │   ├── slalom
    │   ├── splat
    │   ├── square
    │   ├── star
    │   ├── stars
    │   ├── startrek
    │   ├── starwars
    │   ├── stock
    │   ├── strtrk#2
    │   ├── swarms
    │   ├── synonym
    │   ├── target
    │   ├── tictac1
    │   ├── tictac2
    │   ├── towers
    │   ├── train
    │   ├── trap
    │   ├── trekmod
    │   ├── tvigammo
    │   ├── war
    │   ├── weather
    │   ├── weekday
    │   ├── word
    │   ├── wordpuzl
    │   ├── word-pzl
    │   ├── yahtzee
    │   └── zilch
    ├── creative computing
    │   ├── 3dpltcc1
    │   ├── 3dpltcc2
    │   ├── biocljr1
    │   ├── biocljr2
    │   ├── blkbxcc1
    │   ├── bshipcc
    │   ├── chase
    │   ├── chkrscc1
    │   ├── chkrscc2
    │   ├── dptchgcc
    │   ├── drawart
    │   ├── evasncc1
    │   ├── evasncc2
    │   ├── flipdsc1
    │   ├── flipdsc2
    │   ├── flipdsc3
    │   ├── ftballcc
    │   ├── golf
    │   ├── greed2a
    │   ├── greed2b
    │   ├── hockey
    │   ├── jigsawcc
    │   ├── lem
    │   ├── lifetwo
    │   ├── litquiz
    │   ├── lovepst1
    │   ├── lovepst2
    │   ├── lovepst3
    │   ├── lovepst4
    │   ├── masters1
    │   ├── masters2
    │   ├── masters3
    │   ├── mgwmpcc1
    │   ├── mgwmpcc2
    │   ├── notonecc
    │   ├── queen
    │   ├── romlncc1
    │   ├── romlncc2
    │   ├── romlncc3
    │   ├── salvocc
    │   ├── seabatl
    │   ├── seabtcc1
    │   ├── seabtcc2
    │   ├── strwrscc
    │   ├── supstrkg
    │   ├── supstrki
    │   ├── supstrtb
    │   ├── tokenized
    │   ├── tunlvis5
    │   ├── tunlvsn1
    │   ├── tunlvsn2
    │   ├── tunlvsn3
    │   ├── tunlvsn4
    │   ├── warfish
    │   ├── wrsrccc1
    │   ├── wrsrccc2
    │   ├── wrsrccc3
    │   ├── wrsrccc4
    │   └── wumpus2a
    ├── external
    │   ├── 23-match
    │   ├── 3dplot
    │   ├── aceyducy
    │   ├── amazing
    │   ├── animal
    │   ├── awari
    │   ├── bagels
    │   ├── banner
    │   ├── basketbl
    │   ├── batnum
    │   ├── battle
    │   ├── blackjck
    │   ├── bombard
    │   ├── bombsawy
    │   ├── bounce
    │   ├── bowling
    │   ├── boxing
    │   ├── bug
    │   ├── bullfght
    │   ├── bullseye
    │   ├── bunny
    │   ├── buzzword
    │   ├── calendar
    │   ├── change
    │   ├── checkers
    │   ├── chemist
    │   ├── chief
    │   ├── chomp
    │   ├── combat
    │   ├── craps
    │   ├── cube
    │   ├── depthchg
    │   ├── diamond
    │   ├── dice
    │   ├── digits
    │   ├── evenwin1
    │   ├── evenwin2
    │   ├── flipflop
    │   ├── footbal1
    │   ├── footbal2
    │   ├── furtradr
    │   ├── golf
    │   ├── gomoko
    │   ├── guess
    │   ├── gunner
    │   ├── hamurabi
    │   ├── hangman
    │   ├── hello
    │   ├── hexapawn
    │   ├── hilo
    │   ├── hi-q
    │   ├── hockey
    │   ├── horsrace
    │   ├── hurkle
    │   ├── kaleido
    │   ├── kinema
    │   ├── king
    │   ├── lem
    │   ├── letter
    │   ├── life
    │   ├── life2
    │   ├── litquiz
    │   ├── love
    │   ├── lunar
    │   ├── mandelbt
    │   ├── mastrmnd
    │   ├── mathdice
    │   ├── mugwump
    │   ├── name
    │   ├── neoload
    │   ├── nicoma
    │   ├── nim
    │   ├── number
    │   ├── onecheck
    │   ├── orbit
    │   ├── pizza
    │   ├── poetry
    │   ├── poker
    │   ├── qubic
    │   ├── queen
    │   ├── reverse
    │   ├── rocket
    │   ├── rocksp
    │   ├── roulette
    │   ├── rusrou
    │   ├── salvo
    │   ├── sinewave
    │   ├── slalom
    │   ├── slots
    │   ├── splat
    │   ├── stars
    │   ├── stock
    │   ├── suite
    │   ├── synonym
    │   ├── target
    │   ├── test
    │   ├── test1
    │   ├── tictac1
    │   ├── tictac2
    │   ├── tokenized
    │   ├── towers
    │   ├── train
    │   ├── trap
    │   ├── war
    │   ├── weekday
    │   └── word
    ├── misc
    │   ├── mayfield_super_trek
    │   └── superstartrek
    ├── other
    │   ├── amazing
    │   ├── cartoon
    │   ├── masmind
    │   ├── robot11
    │   ├── rsxmasd1
    │   ├── startrek2
    │   └── tokenized
    ├── programs
    │   ├── civil
    │   ├── devil
    │   ├── duke
    │   ├── elements
    │   ├── farkle
    │   ├── flash
    │   ├── fur
    │   ├── intro
    │   ├── launch
    │   ├── lunar
    │   ├── manor
    │   ├── merchant
    │   ├── monster
    │   ├── poker
    │   ├── pres2000
    │   ├── pres90
    │   ├── quad
    │   ├── rabbit
    │   ├── seabat
    │   ├── stat
    │   ├── stocks
    │   ├── super
    │   ├── superint
    │   ├── tokenized
    │   ├── twonky
    │   ├── vidpin
    │   └── wumpus1
    ├── samples
    │   ├── art
    │   ├── ball
    │   ├── calendar
    │   ├── circle
    │   ├── colorbar
    │   ├── comm
    │   ├── donkey
    │   ├── mortgage
    │   ├── music
    │   ├── piechart
    │   ├── samples
    │   ├── space
    │   └── tokenized
    ├── struggle
    │   └── sfc
    └── trek
        ├── trek
        └── trek89
    
    
