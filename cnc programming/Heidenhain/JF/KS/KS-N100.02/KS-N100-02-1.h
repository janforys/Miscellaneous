0  BEGIN PGM KS-N100-02-1 MM 
1  BLK FORM 0.1 Z  X-55  Y-55  Z-51.5
2  BLK FORM 0.2  X+55  Y+55  Z+1
3  ;
4  ;===================================
5  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
6  ;
7  L  X+0  Y+0 FMAX
8  ;
/ 9  STOP
10 TOOL CALL 30 Z S50
11 TOOL DEF 9
12 TCH PROBE 413 PKT.BAZ.OKRAG ZEWN. ~
    Q321=+0    ;SRODEK W 1-SZEJ OSI ~
    Q322=+0    ;SRODEK W 2-SZEJ OSI ~
    Q262=+109  ;SREDNICA NOMINALNA ~
    Q325=+0    ;KAT POCZATKOWY ~
    Q247=+90   ;KATOWY PRZYROST-KROK ~
    Q261=-10   ;WYSOKOSC POMIARU ~
    Q320=+10   ;BEZPIECZNA WYSOKOSC ~
    Q260=+30   ;BEZPIECZNA WYSOKOSC ~
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
13 ;
14 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
15 ;===================================
16 ;
17 * - NAW-8
18 TOOL CALL 9 Z S1200 F100
19 TOOL DEF 17
20 M8
21 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-2.5  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+1.5  ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=-7.5  ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
22 CALL LBL 1
23 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-3.3  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+1.7  ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=-7.5  ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
24 CALL LBL 2
25 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1.55 ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
26 CALL LBL 3
27 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-3    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+1.5  ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
28 CALL LBL 4
29 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1.5  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+1.5  ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
30 CALL LBL 5
31 M5 M9
32 ;
33 * - W-4.8
34 TOOL CALL 17 Z S1666 F120
35 TOOL DEF 25
36 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-13   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=-7.5  ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
37 M8
38 CALL LBL 1
39 M5 M9
40 ;
41 * - W-6.6
42 TOOL CALL 25 Z S1212 F120
43 TOOL DEF 10
44 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-47   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=-7.5  ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
45 M8
46 CALL LBL 2
47 M5 M9
48 ;
49 * - 5H7
50 TOOL CALL 10 Z S120 F30
51 TOOL DEF 14
52 CYCL DEF 201 ROZWIERCANIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-11   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q208=+60   ;POSUW RUCHU POWROTN. ~
    Q203=-7.5  ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
53 M8
54 CALL LBL 1
55 M5 M9
56 ;
57 * - W-3.2
58 TOOL CALL 14 Z S2500 F120
59 TOOL DEF 21
60 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-9.5  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
61 M8
62 CALL LBL 3
63 M5 M9
64 ;
65 * - W-6
66 TOOL CALL 1 Z S1340 F120
67 TOOL DEF 26
68 M8
69 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-34   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
70 CALL LBL 4
71 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-34   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
72 CALL LBL 5
73 M5 M9
74 ;
75 * - 7.2 pod M8x0.75
76 TOOL CALL 21 Z S1050 F100
77 TOOL DEF 1
78 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-14   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
79 M8
80 CALL LBL 5
81 M5 M9
82 ;
83 * - FAZ-16
84 TOOL CALL 26 Z S1200 F100
85 TOOL DEF 3
86 M8
87 CYCL DEF 200 WIERCENIE ~
    Q200=+0    ;BEZPIECZNA WYSOKOSC ~
    Q201=-4.2  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+5    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
88 CALL LBL 5
89 M5 M9
90 ;
91 * - M8x0.75
92 TOOL CALL 3 Z S100
93 TOOL DEF 30
94 CYCL DEF 207 GWINTOWANIE GS  ~
    Q200=+4    ;BEZPIECZNA WYSOKOSC ~
    Q201=-12   ;GLEBOKOSC GWINTU ~
    Q239=+0.75 ;SKOK GWINTU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
95 M8
96 CALL LBL 5
97 M5 M9
98 ;
99 * - -------------------------
100 ;
101 L  Z+0 R0 FMAX M91
102 L  X+430  Y+535 R0 FMAX M91
103 CALL LBL 999
104 L M30
105 ;
106 * - -------------------------
107 ;
108 * - LBL1 5H7
109 LBL 1
110 M3
111 L  X-42.5  Y+0 R0 FMAX M99
112 LBL 0
113 ;
114 * - LBL2 6.6
115 LBL 2
116 M3
117 L  X-34.4  Y+25 R0 FMAX M99
118 L  X+13.1  Y+40.4 R0 FMAX M99
119 L  X+42.5  Y+0 R0 FMAX M99
120 L  X+13.1  Y-40.4 R0 FMAX M99
121 L  X-34.4  Y-25 R0 FMAX M99
122 LBL 0
123 ;
124 * - LBL3 3.2
125 LBL 3
126 M3
127 L  X+14.8  Y-2.8 R0 FMAX M99
128 LBL 0
129 ;
130 * - LBL4 6
131 LBL 4
132 M3
133 L  X+26  Y-11.5 R0 FMAX M99
134 LBL 0
135 ;
136 * - LBL5 M8X0.75
137 LBL 5
138 M3
139 L  X+26  Y+9 R0 FMAX M99
140 LBL 0
141 LBL 999
142 ;
143 END PGM KS-N100-02-1 MM 
