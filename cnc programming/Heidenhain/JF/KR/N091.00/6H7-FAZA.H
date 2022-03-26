0  BEGIN PGM 6H7-FAZA MM 
1  BLK FORM 0.1 Z  X-35  Y-35  Z-15
2  BLK FORM 0.2  X+35  Y+35  Z+0.1
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+2    ;NR PKT BAZOWEGO
5  ;---------------------------------------------
6  ;
7  * - NAW-8
8  TOOL CALL 9 Z S1111 F30 DL-0.05
9  TOOL DEF 30
10 M8
11 CYCL DEF 200 WIERCENIE ~
    Q200=+0    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+1    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=-27   ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
12 CALL LBL 1
13 M5 M9
14 ;
15 ;---------------------------------------------
16 L  Z-5 R0 FMAX M91
17 L  X+260  Y+535 R0 FMAX M91
/ 18 L M30
19 CALL LBL 99
20 * - -----------------------------------------
21 * - LBL1 
22 LBL 1
23 M3
24 L  X+0  Y+0 R0 FMAX M99
25 LBL 0
26 LBL 99
27 END PGM 6H7-FAZA MM 
