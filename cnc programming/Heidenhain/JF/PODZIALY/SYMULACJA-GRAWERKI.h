0  BEGIN PGM SYMULACJA-GRAWERKI MM 
1  BLK FORM 0.1 Z  X-50  Y+0  Z-6
2  BLK FORM 0.2  X+50  Y+50  Z+0
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  ;---------------------------------------------
6  * - FI 96   (100 MINUS FAZA)
7  TOOL CALL 19 Z S2000 F200
/ 8  STOP
9  M8
10 CYCL DEF 257 CZOP OKRAGLY ~
    Q223=+96   ;SRED.WYBR.OBR.NA GOT ~
    Q222=+97   ;SREDNICA WST.OBR.WYB ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-6    ;GLEBOKOSC ~
    Q202=+6    ;GLEBOKOSC DOSUWU ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q376=-1    ;KAT POCZATKOWY
11 CALL LBL 3
/ 12 CYCL DEF 252 WYBRANIE KOLOWE ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q223=+36.5 ;SREDNICA OKREGU ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q207=+500  ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-20   ;GLEBOKOSC ~
    Q202=+5    ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206=+150  ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385=+500  ;POSUW OBR.WYKAN.
/ 13 CALL LBL 3
14 M5 M9
15 ;
16 * - FI 11
17 TOOL CALL 18 Z S2000 F200
/ 18 STOP
19 M8
20 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-4.5  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+0.4  ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+20   ;2-GA BEZPIECZNA WYS. ~
    Q335=+11   ;SREDNICA NOMINALNA ~
    Q342=+0    ;WYW.WSTEP. SREDNICA ~
    Q351=+1    ;RODZAJ FREZOWANIA
21 CALL LBL 2
22 M5 M9
23 ;
24 * - R 6H7
25 TOOL CALL 24 Z S150 F30
/ 26 STOP
27 M8
28 CYCL DEF 201 ROZWIERCANIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-8    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q208=+90   ;POSUW RUCHU POWROTN. ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+20   ;2-GA BEZPIECZNA WYS.
29 CALL LBL 1
30 M5 M9
31 ;
32 ;---------------------------------------------
33 ;
/ 34 STOP
35 * - FK 1 DLA WIERZCHOLKA
36 TOOL CALL 19 Z S9987 F70
37 TOOL DEF 0
38 M3 M8
39 ;
/ 40 STOP
41 L  X+0  Y+0 R0 FMAX
42 CYCL DEF 225 GRAWEROWANIE ~
    QS500="250ml" ;TEKST GRAWER. ~
    Q513=+3    ;WYSOK.ZNAKU ~
    Q514=+0.7  ;WSPOL.ODSTEPU ~
    Q515=+0    ;FONT ~
    Q516=+1    ;UKLAD TEKSTU ~
    Q374=+150  ;KAT OBROTU ~
    Q517=+43   ;PROMIEN OKREGU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q201=-0.07 ;GLEBOKOSC ~
    Q206=+15   ;WARTOSC POSUWU WGL. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
43 CYCL CALL
44 L  X+0  Y+0 R0 FMAX
45 CYCL DEF 225 GRAWEROWANIE ~
    QS500="PRET SQUARE" ;TEKST GRAWER. ~
    Q513=+3    ;WYSOK.ZNAKU ~
    Q514=+0.7  ;WSPOL.ODSTEPU ~
    Q515=+0    ;FONT ~
    Q516=+1    ;UKLAD TEKSTU ~
    Q374=+114.5 ;KAT OBROTU ~
    Q517=+43   ;PROMIEN OKREGU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q201=-0.07 ;GLEBOKOSC ~
    Q206=+15   ;WARTOSC POSUWU WGL. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
46 CYCL CALL
47 L  X+0  Y+0 R0 FMAX
48 CYCL DEF 225 GRAWEROWANIE ~
    QS500="E2266-B-02" ;TEKST GRAWER. ~
    Q513=+3    ;WYSOK.ZNAKU ~
    Q514=+0.7  ;WSPOL.ODSTEPU ~
    Q515=+0    ;FONT ~
    Q516=+1    ;UKLAD TEKSTU ~
    Q374=+65   ;KAT OBROTU ~
    Q517=+43   ;PROMIEN OKREGU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q201=-0.07 ;GLEBOKOSC ~
    Q206=+15   ;WARTOSC POSUWU WGL. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
49 CYCL CALL
50 L  X+0  Y+0 R0 FMAX
51 CYCL DEF 225 GRAWEROWANIE ~
    QS500="5625/01" ;TEKST GRAWER. ~
    Q513=+3    ;WYSOK.ZNAKU ~
    Q514=+0.7  ;WSPOL.ODSTEPU ~
    Q515=+0    ;FONT ~
    Q516=+1    ;UKLAD TEKSTU ~
    Q374=+30   ;KAT OBROTU ~
    Q517=+43   ;PROMIEN OKREGU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q201=-0.07 ;GLEBOKOSC ~
    Q206=+15   ;WARTOSC POSUWU WGL. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
52 CYCL CALL
53 ;
54 M5 M9
55 ;
56 ;---------------------------------------------
57 L  Z-5 R0 FMAX M91
58 L  X+260  Y+535 R0 FMAX M91
59 L M30
60 * - -----------------------------------------
61 * - LBL1 6H7
62 LBL 1
63 M3
64 L  X-28.285  Y+28.28 R0 FMAX M99
65 L  X+28.285  Y+28.28 R0 FMAX M99
66 LBL 0
67 * - LBL2 6.6/11
68 LBL 2
69 M3
70 L  X-39.15  Y+8.3 R0 FMAX M99
71 L  X+0  Y+40 R0 FMAX M99
72 L  X+39.15  Y+8.3 R0 FMAX M99
73 LBL 0
74 * - LBL3 SRODEK
75 LBL 3
76 M3
77 L  X+0  Y+0 R0 FMAX M99
78 LBL 0
79 END PGM SYMULACJA-GRAWERKI MM 
