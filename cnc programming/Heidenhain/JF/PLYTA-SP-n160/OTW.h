0  BEGIN PGM OTW MM 
1  BLK FORM 0.1 Z  X+0  Y-15  Z-5
2  BLK FORM 0.2  X+208.9  Y+15  Z+0
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  ;
6  L  X+0  Y+0 FMAX
7  ;
8  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
9  ;---------------------------------------------
10 ;
/ 11 STOP
12 * - W-5-VHM
13 TOOL CALL 27 Z S6360 F890
14 TOOL DEF 30
15 M8
16 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-8    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+8    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
17 CALL LBL 1
18 M5 M9
19 ;
20 ;---------------------------------------------
21 L  Z-5 R0 FMAX M91
22 L  X+260  Y+535 R0 FMAX M91
23 L M30
24 * - -----------------------------------------
25 * - LBL1 5
26 LBL 1
27 M3
28 L  X+21  Y-155 R0 FMAX M99
29 LBL 0
30 END PGM OTW MM 
