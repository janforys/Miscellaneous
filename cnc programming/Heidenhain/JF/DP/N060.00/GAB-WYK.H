0  BEGIN PGM GAB-WYK MM 
1  BLK FORM 0.1 Z  X-125  Y-10  Z-20
2  BLK FORM 0.2  X+125  Y+10  Z+0.1
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  ;---------------------------------------------
6  ;
/ 7  STOP
8  TOOL CALL 23 Z S1222 F300 DL-0.05 DR-0.04
9  M8 M3
10 CYCL DEF 256 CZOP PROSTOKATNY ~
    Q218=+240  ;DLUG. 1-SZEJ STRONY ~
    Q424=+250  ;WYMIAR POLWYROBU 1 ~
    Q219=+15   ;DLUG. 2-GIEJ STRONY ~
    Q425=+19   ;WYMIAR POLWYROBU 2 ~
    Q220=+0.1  ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE CZOPU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-18   ;GLEBOKOSC ~
    Q202=+5    ;GLEBOKOSC DOSUWU ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q437=+0    ;POZYCJA NAJAZDU
11 CALL LBL 1
12 ;
13 M5 M9
14 ;
15 ;---------------------------------------------
16 L  Z-5 R0 FMAX M91
17 L  X+260  Y+535 R0 FMAX M91
/ 18 L M30
19 CALL LBL 99
20 * - -----------------------------------------
21 * - LBL1 
22 LBL 1
23 M3
24 L  X+0  Y+0 R0 FMAX M99
25 LBL 0
26 ;
27 LBL 99
28 END PGM GAB-WYK MM 
