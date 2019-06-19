0  BEGIN PGM polp-gorny MM 
1  BLK FORM 0.1 Z  X-50  Y-50  Z-15
2  BLK FORM 0.2  X+50  Y+50  Z+1
3  ;
4  * - SONDA
5  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
6  TOOL CALL 30 Z S50
7  TCH PROBE 412 PKT.BAZ.OKRAG WEWN. ~
    Q321=+0    ;SRODEK W 1-SZEJ OSI ~
    Q322=+0    ;SRODEK W 2-SZEJ OSI ~
    Q262=+35.62 ;SREDNICA NOMINALNA ~
    Q325=+0    ;KAT POCZATKOWY ~
    Q247=+90   ;KATOWY PRZYROST-KROK ~
    Q261=+1.5  ;WYSOKOSC POMIARU ~
    Q320=+10   ;BEZPIECZNA WYSOKOSC ~
    Q260=+50   ;BEZPIECZNA WYSOKOSC ~
    Q301=+0    ;ODJAZD NA BEZP.WYS. ~
    Q305=+1    ;NR W TABELI ~
    Q331=+0    ;PUNKT ODNIESIENIA ~
    Q332=+0    ;PUNKT ODNIESIENIA ~
    Q303=+1    ;PRZEKAZ DANYCH POM. ~
    Q381=+0    ;PROBKOW. NA OSI TS ~
    Q382=+0    ;1.WSPOL. DLA OSI TS ~
    Q383=+0    ;2.WSPOLRZ.DLA OSI TS ~
    Q384=+0    ;3. WSPOL. DLA OSI TS ~
    Q333=+0    ;PUNKT ODNIESIENIA ~
    Q423=+4    ;LICZBA PKT POMIAR. ~
    Q365=+1    ;RODZAJ PRZEMIESZCZ.
8  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
9  ;
10 * - *****************
11 ;
12 * - NAW
13 TOOL CALL 9 Z S650 F20
14 TOOL DEF 25
15 M8
16 CYCL DEF 200 WIERCENIE ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q201=-1    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+1    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
17 CALL LBL 1
18 CALL LBL 2
19 CYCL DEF 200 WIERCENIE ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q201=-0.1  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+1    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
20 CALL LBL 3
21 M5 M9
22 ;
23 * - W-6.6
24 TOOL CALL 25 Z S650 F30
25 TOOL DEF 15
26 M8
27 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-9    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
28 CALL LBL 2
29 M5 M9
30 ;
31 * - W-5.8
32 TOOL CALL 15 Z S700 F30
33 TOOL DEF 12
34 M8
35 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-9    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
36 CALL LBL 1
37 M5 M9
38 ;
39 * - R-6
40 TOOL CALL 12 Z S150 F40
41 TOOL DEF 13
42 M8
43 CYCL DEF 201 ROZWIERCANIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-8    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q208= AUTO ;POSUW RUCHU POWROTN. ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
44 CALL LBL 1
45 M5 M9
46 ;
47 * - FP-8
48 TOOL CALL 13 Z S2500 F150
49 TOOL DEF 26
50 M8
51 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-4.5  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+0.25 ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+11   ;SREDNICA NOMINALNA ~
    Q342=+6.6  ;WYW.WSTEP. SREDNICA ~
    Q351=+1    ;RODZAJ FREZOWANIA
52 CALL LBL 2
53 M5 M9
54 ;
55 * - FAZ-16
56 TOOL CALL 26 Z S700 F60
57 TOOL DEF 30
58 M8
59 CYCL DEF 200 WIERCENIE ~
    Q200=+0    ;BEZPIECZNA WYSOKOSC ~
    Q201=-3    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0.5  ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
60 CALL LBL 1
61 CYCL DEF 200 WIERCENIE ~
    Q200=+0    ;BEZPIECZNA WYSOKOSC ~
    Q201=-5.5  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+6    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0.5  ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
62 CALL LBL 2
63 M5 M9
64 ;
65 * - *****************
66 L  Z+0 R0 FMAX M91
67 L  X+550  Y+535 R0 FMAX M91
68 L M30
69 ;
70 * - -------------------------
71 * - LBL 1 - 6H7
72 LBL 1
73 M13
74 L  X-28.285  Y+28.28 R0 FMAX M99
75 L  X+28.285  Y+28.28 R0 FMAX M99
76 LBL 0
77 * - LBL 2 - 6.6/11
78 LBL 2
79 M13
80 L  X-39.15  Y+8.3 R0 FMAX M99
81 L  X+39.15  Y+8.3 R0 FMAX M99
82 L  X+0  Y+40 R0 FMAX M99
83 LBL 0
84 * - LBL 3 - TRAS
85 LBL 3
86 M13
87 L  X-49  Y+0 R0 FMAX M99
88 L  X-47  Y+0 R0 FMAX M99
89 L  X+47  Y+0 R0 FMAX M99
90 L  X+49  Y+0 R0 FMAX M99
91 LBL 0
92 END PGM polp-gorny MM 
