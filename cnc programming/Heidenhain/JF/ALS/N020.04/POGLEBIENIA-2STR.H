0  BEGIN PGM POGLEBIENIA-2STR MM 
1  BLK FORM 0.1 Z  X-30.1  Y-0.2  Z-13.8
2  BLK FORM 0.2  X+30.1  Y+26.2  Z+0
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  ;
/ 6  STOP
7  L  X+0  Y+0 R0 FMAX
8  TOOL CALL 30 Z
9  TOOL DEF 1
10 ;
11 TCH PROBE 401 OBROT 2 WIERCENIE ~
    Q268=+0    ;1.SRODEK 1.OSI ~
    Q269=+0    ;1.SRODEK 2.OSI ~
    Q270=+25   ;2.SRODEK 1.OSI ~
    Q271=+0    ;2.SRODEK 2.OSI ~
    Q261=+2    ;WYSOKOSC POMIARU ~
    Q260=+35   ;BEZPIECZNA WYSOKOSC ~
    Q307=+0    ;USTAW.WST. KATA OBR. ~
    Q305=+1    ;NR W TABELI ~
    Q402=+0    ;KOMPENSACJA ~
    Q337=+0    ;USTAWIC ZERO
12 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
13 ;
14 TCH PROBE 412 PKT.BAZ.OKRAG WEWN. ~
    Q321=+0    ;SRODEK W 1-SZEJ OSI ~
    Q322=+0    ;SRODEK W 2-SZEJ OSI ~
    Q262=+11   ;SREDNICA NOMINALNA ~
    Q325=+0    ;KAT POCZATKOWY ~
    Q247=+90   ;KATOWY PRZYROST-KROK ~
    Q261=+2    ;WYSOKOSC POMIARU ~
    Q320=+0    ;BEZPIECZNA WYSOKOSC ~
    Q260=+35   ;BEZPIECZNA WYSOKOSC ~
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
15 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
16 ;---------------------------------------------
17 ;
18 * - POGL 17  FP-12
19 TOOL CALL 1 Z S1700 F200
/ 20 STOP
21 TOOL DEF 6
22 M8
23 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+8    ;BEZPIECZNA WYSOKOSC ~
    Q201=-7    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+0.7  ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+17   ;SREDNICA NOMINALNA ~
    Q342=+11   ;WYW.WSTEP. SREDNICA ~
    Q351=+1    ;RODZAJ FREZOWANIA
24 CALL LBL 1
25 M5 M9
26 ;
/ 27 * - FAZA  FAZ-10 VHM
/ 28 TOOL CALL 6 Z S5500 F400 DR-4
/ 29 STOP
/ 30 TOOL DEF 30
/ 31 M8
/ 32 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+0    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1.1  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+1    ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+17.05 ;SREDNICA NOMINALNA ~
    Q342=+17   ;WYW.WSTEP. SREDNICA ~
    Q351=+1    ;RODZAJ FREZOWANIA
/ 33 CALL LBL 1
/ 34 M5 M9
35 ;
/ 36 * - FAZY INTERPOLACJA
/ 37 * - UWAGA! FAZOWNIK MUSI MIEC R=2 W TABELI NARZEDZI!
/ 38 TOOL CALL 9 Z S1600 F150
/ 39 STOP
/ 40 TOOL DEF 30
/ 41 M8
/ 42 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-2    ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+3.5  ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+17   ;SREDNICA NOMINALNA ~
    Q342=+15   ;WYW.WSTEP. SREDNICA ~
    Q351=+1    ;RODZAJ FREZOWANIA
/ 43 CALL LBL 1
/ 44 M5 M9
45 ;
46 ;---------------------------------------------
47 L  Z-5 R0 FMAX M91
48 L  X+260  Y+535 R0 FMAX M91
49 L M30
50 * - -----------------------------------------
51 * - LBL1 POGLEBIENIA 17X7
52 LBL 1
53 M3
54 L  X+0  Y+0 R0 FMAX M99
55 L  X+25  Y+0 R0 FMAX M99
56 LBL 0
57 END PGM POGLEBIENIA-2STR MM 
