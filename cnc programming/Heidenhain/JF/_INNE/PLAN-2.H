0  BEGIN PGM PLAN-2 MM 
1  BLK FORM 0.1 Z  X-90  Y-50  Z-24
2  BLK FORM 0.2  X+90  Y+50  Z+0
3  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
4  CYCL DEF 7.0 PUNKT BAZOWY
5  CYCL DEF 7.1 IZ+0
6  TOOL CALL 27 Z S8000 F2500
7  L  Z+300 R0 FMAX M3 M8
8  CYCL DEF 232 FREZOW.PLANOWE ~
    Q389=+2    ;STRATEGIA ~
    Q225=-96   ;PKT.STARTU 1SZEJ OSI ~
    Q226=-56   ;PKT.STARTU 2GIEJ OSI ~
    Q227=+0.2  ;PKT.STARTU 3CIEJ OSI ~
    Q386=-0.1  ;PUNKT KONCOWY 3. OSI ~
    Q218=+190  ;DLUG. 1-SZEJ STRONY ~
    Q219=+110  ;DLUG. 2-GIEJ STRONY ~
    Q202=+0.3  ;MAX. GLEB. DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q370=+1    ;MAX. NAKLADANIE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q385= AUTO ;POSUW OBR.WYKAN. ~
    Q253= MAX ;PREDK. POS. ZAGLEB. ~
    Q200=+3    ;BEZPIECZNA WYSOKOSC ~
    Q357=+2    ;ODST. BEZP. Z BOKU ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
9  CYCL CALL
10 L  Z+300 R0 FMAX
11 L  Y+535 R0 FMAX
12 M30
13 END PGM PLAN-2 MM 
