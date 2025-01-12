0  BEGIN PGM 10,2 MM 
1  BLK FORM 0.1 Z  X-42.5  Y-42.5  Z-5
2  BLK FORM 0.2  X+42.5  Y+42.5  Z+1
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  ;---------------------------------------------
6  ;
7  * - NAW
8  STOP
9  TOOL CALL 8 Z S600 F30
10 TOOL DEF 16
11 M8
12 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1.8  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+1    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+20   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
13 CALL LBL 1
14 M5 M9
15 ;
16 * - W 6.6 HSS
17 TOOL CALL 16 Z S600 F30
/ 18 STOP
19 TOOL DEF 12
20 M8
21 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-23.5 ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+20   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
22 CALL LBL 1
23 M5 M9
24 ;
25 * - FP 8 ZGR
26 TOOL CALL 12 Z S1800 F150
/ 27 STOP
28 TOOL DEF 11
29 M8
30 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q201=-23.5 ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+0.5  ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+10.1 ;SREDNICA NOMINALNA ~
    Q342=+10   ;WYW.WSTEP. SREDNICA ~
    Q351=+1    ;RODZAJ FREZOWANIA
31 CALL LBL 1
32 M5 M9
33 ;
34 * - FP 8 WYK
35 TOOL CALL 11 Z S1800 F200 DR-0.045
/ 36 STOP
37 TOOL DEF 26
38 M8
39 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q201=-23.5 ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+0.5  ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+10.2 ;SREDNICA NOMINALNA ~
    Q342=+10   ;WYW.WSTEP. SREDNICA ~
    Q351=+1    ;RODZAJ FREZOWANIA
40 CALL LBL 1
41 M5 M9
42 ;
43 * - FAZA
44 TOOL CALL 26 Z S600 F30
/ 45 STOP
46 TOOL DEF 30
47 M8
48 CYCL DEF 200 WIERCENIE ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q201=-5.1  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+5.1  ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+20   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
49 CALL LBL 1
50 M5 M9
51 ;
52 ;---------------------------------------------
53 L  Z-5 R0 FMAX M91
54 L  X+260  Y+535 R0 FMAX M91
55 L M30
56 * - -----------------------------------------
57 * - LBL1 10.2+0.1
58 LBL 1
59 M3
60 L  X+0  Y+0 R0 FMAX M99
61 LBL 0
62 END PGM 10,2 MM 
