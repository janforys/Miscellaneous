0  BEGIN PGM FAZA MM 
1  BLK FORM 0.1 Z  X-61  Y-18  Z-20
2  BLK FORM 0.2  X+61  Y+18  Z+0.1
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  ;
6  L  X+0  Y+0 R0 FMAX
7  ;
8  TOOL CALL 30 Z
9  TOOL DEF 7
10 ;
11 TCH PROBE 411 PKT.BAZ.PROST.ZEWN. ~
    Q321=+0    ;SRODEK W 1-SZEJ OSI ~
    Q322=+0    ;SRODEK W 2-SZEJ OSI ~
    Q323=+126  ;DLUG. 1-SZEJ STRONY ~
    Q324=+41   ;DLUG. 2-GIEJ STRONY ~
    Q261=-4.6  ;WYSOKOSC POMIARU ~
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
14 ;
15 ;---------------------------------------------
16 ;
17 ;
18 * - FAZA CZOP
19 TOOL CALL 9 Z S4000 F200 DL+0.3 DR-3
20 TOOL DEF 24
21 M7 M3
22 CYCL DEF 256 CZOP PROSTOKATNY ~
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
23 CALL LBL 1
24 M5 M9
25 ;
26 ;---------------------------------------------
27 L  Z-5 R0 FMAX M91
28 L  X+260  Y+535 R0 FMAX M91
29 L M30
30 * - -----------------------------------------
31 * - LBL1 
32 LBL 1
33 M3
34 L  X+0  Y+0 R0 FMAX M99
35 LBL 0
36 ;
37 END PGM FAZA MM 
