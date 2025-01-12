0  BEGIN PGM GABARYT MM 
1  BLK FORM 0.1 Z  X-61  Y-18  Z-20
2  BLK FORM 0.2  X+61  Y+18  Z+0.1
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  ;
6  STOP
7  L  X+0  Y+0 R0 FMAX
8  ;
9  TOOL CALL 30 Z
10 TOOL DEF 7
11 ;
12 TCH PROBE 411 PKT.BAZ.PROST.ZEWN. ~
    Q321=+0    ;SRODEK W 1-SZEJ OSI ~
    Q322=+0    ;SRODEK W 2-SZEJ OSI ~
    Q323=+126  ;DLUG. 1-SZEJ STRONY ~
    Q324=+41   ;DLUG. 2-GIEJ STRONY ~
    Q261=-5    ;WYSOKOSC POMIARU ~
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
13 ;
14 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
15 ;
16 ;---------------------------------------------
17 ;
18 * - TOROID ZGRUBNIE
19 TOOL CALL 3 Z S1300 F800 DR+0.5
/ 20 STOP
21 TOOL DEF 17
22 M8 M3
23 CYCL DEF 256 CZOP PROSTOKATNY ~
    Q218=+120  ;DLUG. 1-SZEJ STRONY ~
    Q424=+126  ;WYMIAR POLWYROBU 1 ~
    Q219=+33   ;DLUG. 2-GIEJ STRONY ~
    Q425=+41   ;WYMIAR POLWYROBU 2 ~
    Q220=+0.2  ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE CZOPU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-19.8 ;GLEBOKOSC ~
    Q202=+0.8  ;GLEBOKOSC DOSUWU ~
    Q206=+3000 ;WARTOSC POSUWU WGL. ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q437=+1    ;POZYCJA NAJAZDU
24 CALL LBL 1
25 M5 M9
26 ;
/ 27 STOP
28 ;          SPRAWDZ PODKLADY
29 ;
30 * - PLANOWANIE
31 TOOL CALL 12 Z S3000 F600
/ 32 STOP
33 TOOL DEF 12
34 M8 M3
35 CYCL DEF 232 FREZOW.PLANOWE ~
    Q389=+2    ;STRATEGIA ~
    Q225=-63   ;PKT.STARTU 1SZEJ OSI ~
    Q226=-21   ;PKT.STARTU 2GIEJ OSI ~
    Q227=+0.2  ;PKT.STARTU 3CIEJ OSI ~
    Q386=+0    ;PUNKT KONCOWY 3. OSI ~
    Q218=+126  ;DLUG. 1-SZEJ STRONY ~
    Q219=+42   ;DLUG. 2-GIEJ STRONY ~
    Q202=+0.1  ;MAX. GLEB. DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q370=+1    ;MAX. NAKLADANIE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q385= AUTO ;POSUW OBR.WYKAN. ~
    Q253= MAX ;PREDK. POS. ZAGLEB. ~
    Q200=+5    ;BEZPIECZNA WYSOKOSC ~
    Q357=+5    ;ODST. BEZP. Z BOKU ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
36 CYCL CALL
37 M5 M9
38 ;
39 STOP
40 * - FREZ ZGRUBNY ZBIERA PROMIEN PO TOROIDZIE
41 TOOL CALL 1 Z S1300 F600 DR+0.5
42 TOOL DEF 12
43 M8 M3
44 CYCL DEF 256 CZOP PROSTOKATNY ~
    Q218=+120  ;DLUG. 1-SZEJ STRONY ~
    Q424=+126  ;WYMIAR POLWYROBU 1 ~
    Q219=+33   ;DLUG. 2-GIEJ STRONY ~
    Q425=+41   ;WYMIAR POLWYROBU 2 ~
    Q220=+0.2  ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE CZOPU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-5.8  ;GLEBOKOSC ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q206=+3000 ;WARTOSC POSUWU WGL. ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q203=-14   ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q437=+1    ;POZYCJA NAJAZDU
45 CALL LBL 1
46 M5 M9
47 ;
48 * - FREZ ZGRUBNY 12 MALY NADDATEK
49 TOOL CALL 1 Z S1300 F600 DR+0.05
/ 50 STOP
51 TOOL DEF 17
52 M8 M3
53 CYCL DEF 256 CZOP PROSTOKATNY ~
    Q218=+120  ;DLUG. 1-SZEJ STRONY ~
    Q424=+126  ;WYMIAR POLWYROBU 1 ~
    Q219=+33   ;DLUG. 2-GIEJ STRONY ~
    Q425=+41   ;WYMIAR POLWYROBU 2 ~
    Q220=+0.2  ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE CZOPU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-19.8 ;GLEBOKOSC ~
    Q202=+4    ;GLEBOKOSC DOSUWU ~
    Q206=+3000 ;WARTOSC POSUWU WGL. ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q437=+1    ;POZYCJA NAJAZDU
54 CALL LBL 1
55 M5 M9
56 ;
57 * - FREZ  8 WYKONCZENIOWY
58 TOOL CALL 11 Z S1200 F400 DL+0 DR-0.04
/ 59 STOP
60 TOOL DEF 9
61 M8 M3
62 CYCL DEF 256 CZOP PROSTOKATNY ~
    Q218=+120  ;DLUG. 1-SZEJ STRONY ~
    Q424=+126  ;WYMIAR POLWYROBU 1 ~
    Q219=+33   ;DLUG. 2-GIEJ STRONY ~
    Q425=+41   ;WYMIAR POLWYROBU 2 ~
    Q220=+0.2  ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE CZOPU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-19.8 ;GLEBOKOSC ~
    Q202=+4    ;GLEBOKOSC DOSUWU ~
    Q206=+3000 ;WARTOSC POSUWU WGL. ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q437=+1    ;POZYCJA NAJAZDU
63 CALL LBL 1
64 M5 M9
65 ;
66 * - FAZA CZOP
67 TOOL CALL 9 Z S4000 F200 DR-3
/ 68 STOP
69 TOOL DEF 24
70 M7 M3
71 CYCL DEF 256 CZOP PROSTOKATNY ~
    Q218=+120  ;DLUG. 1-SZEJ STRONY ~
    Q424=+120.1 ;WYMIAR POLWYROBU 1 ~
    Q219=+33   ;DLUG. 2-GIEJ STRONY ~
    Q425=+33.1 ;WYMIAR POLWYROBU 2 ~
    Q220=+0    ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE CZOPU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-1.5  ;GLEBOKOSC ~
    Q202=+2.5  ;GLEBOKOSC DOSUWU ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q437=+1    ;POZYCJA NAJAZDU
72 CALL LBL 1
73 M5 M9
74 ;
75 STOP
76 ;---------------------------------------------
77 L  Z-5 R0 FMAX M91
78 L  X+260  Y+535 R0 FMAX M91
/ 79 STOP
80 CALL PGM TNC:\JF\ALS\N030.05\n03003z.h
/ 81 STOP
82 CALL PGM TNC:\JF\ALS\N030.05\n03003w.h
83 L M30
84 * - -----------------------------------------
85 * - LBL1 
86 LBL 1
87 M3
88 L  X+0  Y+0 R0 FMAX M99
89 LBL 0
90 ;
91 END PGM GABARYT MM 
