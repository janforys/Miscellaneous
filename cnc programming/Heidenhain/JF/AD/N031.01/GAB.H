0  BEGIN PGM GAB MM 
1  BLK FORM 0.1 Z  X-41  Y-12  Z-40
2  BLK FORM 0.2  X+41  Y+12  Z+0.5
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
/ 5  STOP
6  L  X+0  Y+0 R0 FMAX
7  ;---------------------------------------------
8  ;
/ 9  STOP
10 TOOL CALL 30 Z S50
11 TOOL DEF 6
12 ;
13 TCH PROBE 411 PKT.BAZ.PROST.ZEWN. ~
    Q321=+0    ;SRODEK W 1-SZEJ OSI ~
    Q322=+11   ;SRODEK W 2-SZEJ OSI ~
    Q323=+102  ;DLUG. 1-SZEJ STRONY ~
    Q324=+28   ;DLUG. 2-GIEJ STRONY ~
    Q261=-5    ;WYSOKOSC POMIARU ~
    Q320=+15   ;BEZPIECZNA WYSOKOSC ~
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
14 ;
15 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
16 ;
/ 17 STOP
18 * - PLAN-ZGR
19 TOOL CALL 6 Z S2222 F400
20 M3 M7
21 CYCL DEF 232 FREZOW.PLANOWE ~
    Q389=+2    ;STRATEGIA ~
    Q225=-55   ;PKT.STARTU 1SZEJ OSI ~
    Q226=-11   ;PKT.STARTU 2GIEJ OSI ~
    Q227=+4    ;PKT.STARTU 3CIEJ OSI ~
    Q386=+0.15 ;PUNKT KONCOWY 3. OSI ~
    Q218=+104  ;DLUG. 1-SZEJ STRONY ~
    Q219=+30   ;DLUG. 2-GIEJ STRONY ~
    Q202=+4    ;MAX. GLEB. DOSUWU ~
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
25 * - GAB-ZGR
26 TOOL CALL 14 Z S2000 F700
/ 27 STOP
28 M3 M8
29 CYCL DEF 256 CZOP PROSTOKATNY ~
    Q218=+80   ;DLUG. 1-SZEJ STRONY ~
    Q424=+101  ;WYMIAR POLWYROBU 1 ~
    Q219=+22   ;DLUG. 2-GIEJ STRONY ~
    Q425=+27   ;WYMIAR POLWYROBU 2 ~
    Q220=+0.1  ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE CZOPU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-33   ;GLEBOKOSC ~
    Q202=+0.6  ;GLEBOKOSC DOSUWU ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1.4  ;ZACHODZENIE TOROW ~
    Q437=+0    ;POZYCJA NAJAZDU
30 L  X+0  Y+0 R0 FMAX M99
31 M5 M9
32 ;
33 * - PLAN-WYK
34 TOOL CALL 24 Z S3000 F400
/ 35 STOP
36 M3 M7
37 CYCL DEF 232 FREZOW.PLANOWE ~
    Q389=+2    ;STRATEGIA ~
    Q225=-45   ;PKT.STARTU 1SZEJ OSI ~
    Q226=-11   ;PKT.STARTU 2GIEJ OSI ~
    Q227=+0.15 ;PKT.STARTU 3CIEJ OSI ~
    Q386=+0.1  ;PUNKT KONCOWY 3. OSI ~
    Q218=+85   ;DLUG. 1-SZEJ STRONY ~
    Q219=+30   ;DLUG. 2-GIEJ STRONY ~
    Q202=+0.05 ;MAX. GLEB. DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q370=+0.9  ;MAX. NAKLADANIE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q385= AUTO ;POSUW OBR.WYKAN. ~
    Q253= MAX ;PREDK. POS. ZAGLEB. ~
    Q200=+5    ;BEZPIECZNA WYSOKOSC ~
    Q357=+5    ;ODST. BEZP. Z BOKU ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
38 CYCL CALL
39 M5 M9
40 ;
41 * - GAB-WYK
42 TOOL CALL 5 Z S3000 F400 DR-0.02
/ 43 STOP
44 M3 M7
45 CYCL DEF 256 CZOP PROSTOKATNY ~
    Q218=+80   ;DLUG. 1-SZEJ STRONY ~
    Q424=+81   ;WYMIAR POLWYROBU 1 ~
    Q219=+22   ;DLUG. 2-GIEJ STRONY ~
    Q425=+23   ;WYMIAR POLWYROBU 2 ~
    Q220=+0.1  ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE CZOPU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-33   ;GLEBOKOSC ~
    Q202=+4    ;GLEBOKOSC DOSUWU ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1.4  ;ZACHODZENIE TOROW ~
    Q437=+0    ;POZYCJA NAJAZDU
46 L  X+0  Y+0 R0 FMAX M99
47 M5 M9
48 ;
49 L  Z-5 R0 FMAX M91
50 L  X+200  Y+535 R0 FMAX M91
/ 51 STOP
52 CALL PGM TNC:\JF\AD\N031.01\STR-Z-WYBRANIEM.h
53 L M30
54 END PGM GAB MM 
