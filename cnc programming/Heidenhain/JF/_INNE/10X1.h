0  BEGIN PGM 10X1 MM 
1  BLK FORM 0.1 Z  X-60  Y-34  Z-119
2  BLK FORM 0.2  X+60  Y+0  Z+0
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  STOP
6  L  X+0  Y+0 R0 FMAX
7  TOOL CALL 30 Z S50
8  TOOL DEF 27
9  TCH PROBE 409 PKT BAZ.SR.MOSTKA ~
    Q321=+0    ;SRODEK W 1-SZEJ OSI ~
    Q322=+0    ;SRODEK W 2-SZEJ OSI ~
    Q311=+85   ;SZEROKOSC MOSTKA ~
    Q272=+1    ;OS POMIAROWA ~
    Q261=-30   ;WYSOKOSC POMIARU ~
    Q320=+15   ;BEZPIECZNA WYSOKOSC ~
    Q260=+30   ;BEZPIECZNA WYSOKOSC ~
    Q305=+1    ;NR W TABELI ~
    Q405=+0    ;PUNKT ODNIESIENIA ~
    Q303=+1    ;PRZEKAZ DANYCH POM. ~
    Q381=+0    ;PROBKOW. NA OSI TS ~
    Q382=+0    ;1.WSPOL. DLA OSI TS ~
    Q383=+0    ;2.WSPOLRZ.DLA OSI TS ~
    Q384=+0    ;3. WSPOL. DLA OSI TS ~
    Q333=+0    ;PUNKT ODNIESIENIA
10 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
11 ;---------------------------------------------
12 ;
13 ;
/ 14 * - NAW
/ 15 TOOL CALL 9 Z S1111 F111
/ 16 STOP
/ 17 TOOL DEF 23
/ 18 M8
/ 19 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-3    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
/ 20 CALL LBL 1
/ 21 M5 M9
22 ;
23 * - FI 11 FP8
24 TOOL CALL 27 Z S9987 F500
25 TOOL DEF 19
26 M8
27 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+0.6  ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+10   ;SREDNICA NOMINALNA ~
    Q342=+0    ;WYW.WSTEP. SREDNICA ~
    Q351=+1    ;RODZAJ FREZOWANIA
28 CALL LBL 1
29 M5 M9
30 ;
31 TOOL CALL 9 Z S1111 F111
32 TOOL DEF 19
33 M8
34 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-2    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=-1    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
35 CALL LBL 1
36 M5 M9
37 ;
/ 38 * - W 7.2
/ 39 TOOL CALL 19 Z S4417 F813
/ 40 STOP
/ 41 TOOL DEF 5
/ 42 M8
/ 43 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-20   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+20   ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=-1    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
/ 44 CALL LBL 1
/ 45 M5 M9
46 ;
47 * - W 6
48 TOOL CALL 5 Z S1300 F120
/ 49 STOP
50 TOOL DEF 13
51 M8
52 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-40   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=-1    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
53 CALL LBL 1
54 M5 M9
55 ;
56 * - FI 7.2 FP6
57 TOOL CALL 10 Z S6000 F500
58 TOOL DEF 19
59 M8
60 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-15   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+0.6  ;GLEBOKOSC DOSUWU ~
    Q203=-1    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+7.2  ;SREDNICA NOMINALNA ~
    Q342=+6    ;WYW.WSTEP. SREDNICA ~
    Q351=+1    ;RODZAJ FREZOWANIA
61 CALL LBL 1
62 M5 M9
63 ;
64 * - GW M8X0.75
65 TOOL CALL 13 Z S200
66 TOOL DEF 30
67 M8
68 CYCL DEF 207 GWINTOWANIE GS  ~
    Q200=+4    ;BEZPIECZNA WYSOKOSC ~
    Q201=-12.5 ;GLEBOKOSC GWINTU ~
    Q239=+0.75 ;SKOK GWINTU ~
    Q203=-1    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
69 CALL LBL 1
70 M5 M9
71 ;
72 ;
73 ;---------------------------------------------
74 L  Z-5 R0 FMAX M91
75 L  X+260  Y+535 R0 FMAX M91
76 L M30
77 * - -----------------------------------------
78 * - LBL1 O
79 LBL 1
80 M3
81 L  X+0  Y+0 R0 FMAX M99
82 LBL 0
83 END PGM 10X1 MM 
