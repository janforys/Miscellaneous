0  BEGIN PGM GRAWERKI-ZMIENIAJ-NR MM 
1  BLK FORM 0.1 Z  X-42.5  Y+0  Z-6
2  BLK FORM 0.2  X+42.5  Y+42.5  Z+0
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  ;---------------------------------------------
/ 6  STOP
7  * - KULA 2 DLA WIERZCHOLKA
8  TOOL CALL 22 Z S9987 F70
9  TOOL DEF 0
10 M3 M8
11 ;
12 L  X-22.65  Y+30 R0 FMAX
13 CYCL DEF 225 GRAWEROWANIE ~
    QS500="P2002-B008-06 2.0L" ;TEKST GRAWER. ~
    Q513=+4    ;WYSOK.ZNAKU ~
    Q514=+0.6  ;WSPOL.ODSTEPU ~
    Q515=+0    ;FONT ~
    Q516=+0    ;UKLAD TEKSTU ~
    Q374=+0    ;KAT OBROTU ~
    Q517=+50   ;PROMIEN OKREGU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q201=-0.07 ;GLEBOKOSC ~
    Q206=+20   ;WARTOSC POSUWU WGL. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
14 CYCL CALL
15 ;
/ 16 STOP
17 L  X-35  Y+2.5 R0 FMAX
18 CYCL DEF 225 GRAWEROWANIE ~
    QS500="06"   ;TEKST GRAWER. ~
    Q513=+4    ;WYSOK.ZNAKU ~
    Q514=+0.6  ;WSPOL.ODSTEPU ~
    Q515=+0    ;FONT ~
    Q516=+0    ;UKLAD TEKSTU ~
    Q374=+0    ;KAT OBROTU ~
    Q517=+50   ;PROMIEN OKREGU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q201=-0.07 ;GLEBOKOSC ~
    Q206=+20   ;WARTOSC POSUWU WGL. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
19 CYCL CALL
20 ;
/ 21 STOP
22 L  X+25.6  Y+2.5 R0 FMAX
23 CYCL DEF 225 GRAWEROWANIE ~
    QS500="5608" ;TEKST GRAWER. ~
    Q513=+4    ;WYSOK.ZNAKU ~
    Q514=+0.6  ;WSPOL.ODSTEPU ~
    Q515=+0    ;FONT ~
    Q516=+0    ;UKLAD TEKSTU ~
    Q374=+0    ;KAT OBROTU ~
    Q517=+50   ;PROMIEN OKREGU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q201=-0.07 ;GLEBOKOSC ~
    Q206=+20   ;WARTOSC POSUWU WGL. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
24 CYCL CALL
25 ;
26 M5 M9
27 ;
28 ;---------------------------------------------
29 L  Z-5 R0 FMAX M91
30 L  X+260  Y+535 R0 FMAX M91
31 L M30
32 * - -----------------------------------------
33 END PGM GRAWERKI-ZMIENIAJ-NR MM 
