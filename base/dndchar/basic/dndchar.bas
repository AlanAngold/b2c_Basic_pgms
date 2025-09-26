DECLARE FUNCTION RollDice! (number!, sides!, adj!)
CLS
DIM ProfName$(5)
ProfName$(1) = "Cleric"
ProfName$(2) = "MagicUser"
ProfName$(3) = "Fighter"
ProfName$(4) = "Paladin"
ProfName$(5) = "Ranger"

RANDOMIZE TIMER
OPEN "test.txt" FOR OUTPUT AS #100
    PRINT "Character Name ";
    INPUT Name$
    PRINT "Select Profession:"
    FOR p = 1 TO 5
        PRINT "  "; p; ProfName$(p)
    NEXT p
    PRINT "Profession ";
    INPUT prof
   
    PRINT #100, "Character Name:"; Name$
    PRINT #100, "Profession : "; ProfName$(prof)
    PRINT #100, "STR "; RollDice(3, 6, 1)
    PRINT #100, "DEX "; RollDice(3, 6, 1)
    PRINT #100, "INT "; RollDice(3, 6, 1)
    PRINT #100, "WIS "; RollDice(3, 6, 1)
    PRINT #100, "CON "; RollDice(3, 6, 1)
    PRINT #100, "CHA "; RollDice(3, 6, 1)
CLOSE #100


FUNCTION RollDice (number, sides, adj)
    sum = 0
    FOR r = 1 TO number
        sum = sum + INT(RND * sides + 1)
    NEXT r
    sum = sum + adj
    RollDice = sum
END FUNCTION

