0  BEGIN PGM 1-STRONA MM 
1  BLK FORM 0.1 Z  X-62  Y-62  Z-36
2  BLK FORM 0.2  X+62  Y+62  Z+0
3  CALL PGM TNC:\Z19
4  CALL PGM TNC:\REF
5  ;
6  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
7  PLANE RESET TURN F2500
8  ;---------------------------------
9  ;
10 * - CZOP ZGR
/ 11 STOP
12 TOOL CALL 2 Z S5600 F2400 DR+0.2
13 M3 M8
14 CYCL DEF 215 WYSEP.KOL.NA GOT. ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-32   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+32   ;GLEBOKOSC DOSUWU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q216=+0    ;SRODEK W 1-SZEJ OSI ~
    Q217=+0    ;SRODEK W 2-SZEJ OSI ~
    Q222=+120  ;SREDNICA WST.OBR.WYB ~
    Q223=+119  ;SRED.WYBR.OBR.NA GOT
15 CALL LBL 1
16 M5 M9
17 ;
18 * - CZOP WYK
19 TOOL CALL 2 Z S5600 F2400 DR+0
/ 20 STOP
21 M3 M8
22 CYCL DEF 215 WYSEP.KOL.NA GOT. ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-32   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+32   ;GLEBOKOSC DOSUWU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q216=+0    ;SRODEK W 1-SZEJ OSI ~
    Q217=+0    ;SRODEK W 2-SZEJ OSI ~
    Q222=+120  ;SREDNICA WST.OBR.WYB ~
    Q223=+119  ;SRED.WYBR.OBR.NA GOT
23 CALL LBL 1
24 M5 M9
25 ;
26 * - 80H7 ZGR
27 TOOL CALL 3 Z S16987 F5000
/ 28 STOP
29 M13
30 CYCL DEF 252 WYBRANIE KOLOWE ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q223=+79.8 ;SREDNICA OKREGU ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-8.8  ;GLEBOKOSC ~
    Q202=+8.8  ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206=+1000 ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+0.5  ;ZACHODZENIE TOROW ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385=+500  ;POSUW OBR.WYKAN.
31 CALL LBL 1
32 M5 M9
33 ;
34 * - GLEBOKOSC NA GOTOWO
35 TOOL CALL 3 Z S16987 F3000 DL+0.025
/ 36 STOP
37 M13
38 CYCL DEF 252 WYBRANIE KOLOWE ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q223=+79.8 ;SREDNICA OKREGU ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-9    ;GLEBOKOSC ~
    Q202=+9    ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206=+1000 ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385=+500  ;POSUW OBR.WYKAN.
39 CALL LBL 1
40 M5 M9
41 ;
42 * - 80H7 NA GOTOWO
43 TOOL CALL 3 Z S16987 F1500 DL+0.025 DR-0.002
/ 44 STOP
45 M13
46 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+0    ;BEZPIECZNA WYSOKOSC ~
    Q201=-9    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+3    ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+80   ;SREDNICA NOMINALNA ~
    Q342=+79.8 ;WYW.WSTEP. SREDNICA ~
    Q351=+1    ;RODZAJ FREZOWANIA
47 CALL LBL 1
48 M5 M9
49 ;
50 * - W 6.6 VHM
51 TOOL CALL 25 Z S4818 F829
/ 52 STOP
53 M13
54 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-22   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+22   ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
55 CALL LBL 2
56 M5 M9
57 ;
58 * - W 8 VHM
59 TOOL CALL 17 Z S3975 F795
/ 60 STOP
61 M13
62 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-30   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+30   ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=-9    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
63 CALL LBL 3
64 M5 M9
65 ;
66 * - W 3.2
67 TOOL CALL 26 Z S9938 F1034
/ 68 STOP
69 M13
70 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-8    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+8    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=-9    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
71 CALL LBL 4
72 M5 M9
73 ;
74 * - FAZY
75 TOOL CALL 30 Z S12000 F200
/ 76 STOP
77 M13
78 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-3.5  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+3.5  ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
79 CALL LBL 2
80 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-4    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+4    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=-9    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
81 CALL LBL 3
82 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1.6  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+1.6  ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=-9    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
83 CALL LBL 4
84 M5 M9
85 ;
86 * - FAZA 80H7
87 TOOL CALL 30 Z S12000 F2000 DR-1
/ 88 STOP
89 M13
90 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+0    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1.5  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+5    ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+80   ;SREDNICA NOMINALNA ~
    Q342=+79.8 ;WYW.WSTEP. SREDNICA ~
    Q351=+1    ;RODZAJ FREZOWANIA
91 CALL LBL 1
/ 92 M5 M9
93 ;
94 * - FAZA 119
95 TOOL CALL 30 Z S12000 F2000 DR-1
/ 96 STOP
97 M3 M8
98 CYCL DEF 215 WYSEP.KOL.NA GOT. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-2    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+5    ;GLEBOKOSC DOSUWU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q216=+0    ;SRODEK W 1-SZEJ OSI ~
    Q217=+0    ;SRODEK W 2-SZEJ OSI ~
    Q222=+120  ;SREDNICA WST.OBR.WYB ~
    Q223=+119  ;SRED.WYBR.OBR.NA GOT
99 CALL LBL 1
100 M5 M9
101 ;
102 ;---------------------------------
103 CALL PGM TNC:\REF
104 CALL PGM TNC:\Z19
105 L M30
106 * - ------------------------------
107 ;
108 * - LBL1 SRODEK
109 LBL 1
110 L M3
111 L  X+0  Y+0 FMAX M99
112 LBL 0
113 ;
114 * - LBL2 6.6
115 LBL 2
116 L M3
117 L  X-15  Y-46.1 FMAX M99
118 L  X-48.5  Y+0 FMAX M99
119 L  X-15  Y+46.1 FMAX M99
120 L  X+39.2  Y+28.5 FMAX M99
121 L  X+39.2  Y-28.5 FMAX M99
122 LBL 0
123 ;
124 * - LBL3 8
125 LBL 3
126 L M3
127 L  X-27.6  Y+11.8 FMAX M99
128 L  X-27.6  Y-11.8 FMAX M99
129 LBL 0
130 ;
131 * - LBL4 3.2
132 LBL 4
133 L M3
134 L  X-24  Y+20 FMAX M99
135 LBL 0
136 ;
137 END PGM 1-STRONA MM 
