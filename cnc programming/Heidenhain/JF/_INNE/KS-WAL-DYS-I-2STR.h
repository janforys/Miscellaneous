0  BEGIN PGM KS-WAL-DYS-I-2STR MM 
1  BLK FORM 0.1 Z  X-49.5  Y-49.5  Z-101.1
2  BLK FORM 0.2  X+49.5  Y+49.5  Z+0
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  ;
6  L  X+0  Y+0 R0 FMAX
7  STOP
8  TOOL CALL 30 Z
9  TOOL DEF 14
10 ;
11 TCH PROBE 413 PKT.BAZ.OKRAG ZEWN. ~
    Q321=+0    ;SRODEK W 1-SZEJ OSI ~
    Q322=+0    ;SRODEK W 2-SZEJ OSI ~
    Q262=+99   ;SREDNICA NOMINALNA ~
    Q325=+0    ;KAT POCZATKOWY ~
    Q247=+90   ;KATOWY PRZYROST-KROK ~
    Q261=-11   ;WYSOKOSC POMIARU ~
    Q320=+10   ;BEZPIECZNA WYSOKOSC ~
    Q260=+20   ;BEZPIECZNA WYSOKOSC ~
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
12 ;
13 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
14 ;---------------------------------------------
15 ;
16 * - W 3.6
17 STOP
18 TOOL CALL 14 Z S8833 F989
19 TOOL DEF 8
20 M7
21 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-7.5  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+7.5  ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
22 CALL LBL 1
23 M5 M9
24 ;
25 * - W 5
26 TOOL CALL 8 Z S6360 F890
27 STOP
28 TOOL DEF 5
29 M7
30 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-16   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+16   ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=-7.4  ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
31 CALL LBL 2
32 M5 M9
33 ;
34 * - W 6 WIDIA
35 TOOL CALL 5 Z S5300 F848
36 STOP
37 TOOL DEF 20
38 M7
39 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-35   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+25   ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
40 CALL LBL 3
41 M5 M9
42 ;
43 * - NAW 8
44 TOOL CALL 12 Z S1200 F100
45 STOP
46 TOOL DEF 999
47 M8
48 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-3    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=-7.4  ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
49 CALL LBL 2
50 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1.75 ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+1.75 ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
51 CALL LBL 1
52 M5 M9
53 ;
54 * - GW M6
55 TOOL CALL 999 Z S100
56 STOP
57 TOOL DEF 30
58 M8
59 CYCL DEF 207 GWINTOWANIE GS  ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-17   ;GLEBOKOSC GWINTU ~
    Q239=+1    ;SKOK GWINTU ~
    Q203=-7.4  ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
60 CALL LBL 2
61 M5 M9
62 ;
63 ;---------------------------------------------
64 L  Z+0 R0 FMAX M91
/ 65 L  X+260  Y+535 R0 FMAX M91
66 L  X+100  Y+365 R0 FMAX
67 L M30
68 * - -----------------------------------------
69 * - LBL1 3.6
70 LBL 1
71 M3
72 L  X-14.8  Y-2.8 R0 FMAX M99
73 LBL 0
74 * - LBL2 6.6
75 LBL 2
76 M3
77 L  X-13.1  Y-40.4 R0 FMAX M99
78 L  X+34.4  Y-25 R0 FMAX M99
79 L  X+34.4  Y+25 R0 FMAX M99
80 L  X-13.1  Y+40.4 R0 FMAX M99
81 L  X-42.5  Y+0 R0 FMAX M99
82 LBL 0
83 * - LBL3 6
84 LBL 3
85 M3
86 L  X-26.1  Y-11.5 R0 FMAX M99
87 LBL 0
88 END PGM KS-WAL-DYS-I-2STR MM 
