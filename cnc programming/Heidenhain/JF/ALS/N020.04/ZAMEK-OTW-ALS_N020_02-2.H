0  BEGIN PGM ZAMEK-OTW-ALS_N020_02-2 MM 
1  BLK FORM 0.1 Z  X-30.1  Y-0.2  Z-13.8
2  BLK FORM 0.2  X+30.1  Y+26.2  Z+0
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  ;
6  L  X+0  Y+0 R0 FMAX
/ 7  STOP
8  TOOL CALL 30 Z
9  TOOL DEF 3
10 ;
11 TCH PROBE 411 PKT.BAZ.PROST.ZEWN. ~
    Q321=+0    ;SRODEK W 1-SZEJ OSI ~
    Q322=+0    ;SRODEK W 2-SZEJ OSI ~
    Q323=+70   ;DLUG. 1-SZEJ STRONY ~
    Q324=+47   ;DLUG. 2-GIEJ STRONY ~
    Q261=-4    ;WYSOKOSC POMIARU ~
    Q320=+20   ;BEZPIECZNA WYSOKOSC ~
    Q260=+30   ;BEZPIECZNA WYSOKOSC ~
    Q301=+1    ;ODJAZD NA BEZP.WYS. ~
    Q305=+1    ;NR W TABELI ~
    Q331=+0    ;PUNKT ODNIESIENIA ~
    Q332=+0    ;PUNKT ODNIESIENIA ~
    Q303=+1    ;PRZEKAZ DANYCH POM. ~
    Q381=+0    ;PROBKOW. NA OSI TS ~
    Q382=+0    ;1.WSPOL. DLA OSI TS ~
    Q383=+0    ;2.WSPOLRZ.DLA OSI TS ~
    Q384=+0    ;3. WSPOL. DLA OSI TS ~
    Q333=+0    ;PUNKT ODNIESIENIA
12 ;
13 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
14 ;---------------------------------------------
15 ;
16 * - PLANOWANIE ZGR TOR
17 TOOL CALL 3 Z S1600 F800
/ 18 STOP
19 TOOL DEF 12
20 M8 M3
21 CYCL DEF 232 FREZOW.PLANOWE ~
    Q389=+2    ;STRATEGIA ~
    Q225=-35   ;PKT.STARTU 1SZEJ OSI ~
    Q226=-25   ;PKT.STARTU 2GIEJ OSI ~
    Q227=+1.5  ;PKT.STARTU 3CIEJ OSI ~
    Q386=+0.1  ;PUNKT KONCOWY 3. OSI ~
    Q218=+70   ;DLUG. 1-SZEJ STRONY ~
    Q219=+50   ;DLUG. 2-GIEJ STRONY ~
    Q202=+0.5  ;MAX. GLEB. DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q370=+1    ;MAX. NAKLADANIE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q385= AUTO ;POSUW OBR.WYKAN. ~
    Q253= MAX ;PREDK. POS. ZAGLEB. ~
    Q200=+5    ;BEZPIECZNA WYSOKOSC ~
    Q357=+5    ;ODST. BEZP. Z BOKU ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
22 CYCL CALL
23 M5 M9
24 ;
25 * - PLANOWANIE WYK
26 TOOL CALL 11 Z S3000 F600
/ 27 STOP
28 TOOL DEF 8
29 M7 M3
30 CYCL DEF 232 FREZOW.PLANOWE ~
    Q389=+2    ;STRATEGIA ~
    Q225=-35   ;PKT.STARTU 1SZEJ OSI ~
    Q226=-24   ;PKT.STARTU 2GIEJ OSI ~
    Q227=+0.1  ;PKT.STARTU 3CIEJ OSI ~
    Q386=+0    ;PUNKT KONCOWY 3. OSI ~
    Q218=+70   ;DLUG. 1-SZEJ STRONY ~
    Q219=+50   ;DLUG. 2-GIEJ STRONY ~
    Q202=+0.5  ;MAX. GLEB. DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q370=+1    ;MAX. NAKLADANIE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q385= AUTO ;POSUW OBR.WYKAN. ~
    Q253= MAX ;PREDK. POS. ZAGLEB. ~
    Q200=+5    ;BEZPIECZNA WYSOKOSC ~
    Q357=+5    ;ODST. BEZP. Z BOKU ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
31 CYCL CALL
32 M5 M9
33 ;
34 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
35 ;
36 CYCL DEF 7.0 PUNKT BAZOWY
37 CYCL DEF 7.1 IY-13.45
38 ;
39 * - NAW
40 TOOL CALL 8 Z S600 F30
/ 41 STOP
42 TOOL DEF 21
43 M8
44 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1.45 ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+1.5  ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
45 CALL LBL 1
46 M5 M9
47 ;
48 * - W 4.8 HSS
49 TOOL CALL 21 Z S600 F30
/ 50 STOP
51 TOOL DEF 28
52 M8
53 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-10   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
54 CALL LBL 1
55 M5 M9
56 ;
57 * - W 10 VHM
58 TOOL CALL 28 Z S795 F87
/ 59 STOP
60 TOOL DEF 26
61 M8
62 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-28   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+15   ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
63 CALL LBL 2
64 M5 M9
65 ;
66 * - FAZY
67 TOOL CALL 26 Z S600 F30 DL-0.1
/ 68 STOP
69 TOOL DEF 25
70 M8
71 CYCL DEF 200 WIERCENIE ~
    Q200=+0    ;BEZPIECZNA WYSOKOSC ~
    Q201=-2    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=-3.5  ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
72 CALL LBL 2
73 M5 M9
74 ;
75 * - W 11 HSS
76 TOOL CALL 25 Z S300 F30
/ 77 STOP
78 TOOL DEF 20
79 M8
80 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-31   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
81 CALL LBL 2
82 M5 M9
83 ;
84 * - R 5H7 
85 TOOL CALL 20 Z S150 F30
/ 86 STOP
87 TOOL DEF 30
88 M8
89 CYCL DEF 201 ROZWIERCANIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-8.5  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q208=+90   ;POSUW RUCHU POWROTN. ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
90 CALL LBL 1
91 M5 M9
92 ;
93 ;---------------------------------------------
94 L  Z-5 R0 FMAX M91
95 L  X+260  Y+535 R0 FMAX M91
96 L  X+150 R0 FMAX
97 L M30
98 * - -----------------------------------------
99 * - LBL1 5H7
100 LBL 1
101 M3
102 L  X-24  Y+6 R0 FMAX M99
103 L  X+24  Y+6 R0 FMAX M99
104 LBL 0
105 * - LBL2 11
106 LBL 2
107 M3
108 L  X-12.5  Y+11 R0 FMAX M99
109 L  X+12.5  Y+11 R0 FMAX M99
110 LBL 0
111 END PGM ZAMEK-OTW-ALS_N020_02-2 MM 
