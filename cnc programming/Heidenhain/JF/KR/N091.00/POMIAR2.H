0  BEGIN PGM POMIAR2 MM 
1  BLK FORM 0.1 Z  X-35  Y-35  Z-15
2  BLK FORM 0.2  X+35  Y+35  Z+0.1
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  L  X+0  Y+0 R0 FMAX
6  TOOL CALL 30 Z
7  TOOL DEF 8
8  TCH PROBE 412 PKT.BAZ.OKRAG WEWN. ~
    Q321=+0    ;SRODEK W 1-SZEJ OSI ~
    Q322=+0    ;SRODEK W 2-SZEJ OSI ~
    Q262=+6    ;SREDNICA NOMINALNA ~
    Q325=+0    ;KAT POCZATKOWY ~
    Q247=+90   ;KATOWY PRZYROST-KROK ~
    Q261=-29   ;WYSOKOSC POMIARU ~
    Q320=+5    ;BEZPIECZNA WYSOKOSC ~
    Q260=+50   ;BEZPIECZNA WYSOKOSC ~
    Q301=+0    ;ODJAZD NA BEZP.WYS. ~
    Q305=+1    ;NR W TABELI ~
    Q331=+0    ;PUNKT ODNIESIENIA ~
    Q332=+0    ;PUNKT ODNIESIENIA ~
    Q303=+1    ;PRZEKAZ DANYCH POM. ~
    Q381=+1    ;PROBKOW. NA OSI TS ~
    Q382=+0    ;1.WSPOL. DLA OSI TS ~
    Q383=+11   ;2.WSPOLRZ.DLA OSI TS ~
    Q384=+0    ;3. WSPOL. DLA OSI TS ~
    Q333=+0    ;PUNKT ODNIESIENIA ~
    Q423=+4    ;LICZBA PKT POMIAR. ~
    Q365=+1    ;RODZAJ PRZEMIESZCZ.
9  ;
10 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
11 ;---------------------------------------------
12 ;
/ 13 STOP
14 CALL PGM TNC:\5646-KR\N091.00\n091d.h
/ 15 STOP
16 CALL PGM TNC:\5646-KR\N091.00\KOLEK-MOC-STR2.H
/ 17 STOP
18 CALL PGM TNC:\5646-KR\N091.00\SONDA-6H7.H
19 ;
20 ;---------------------------------------------
21 L  Z-5 R0 FMAX M91
22 L  X+260  Y+535 R0 FMAX M91
23 L M30
24 * - -----------------------------------------
25 END PGM POMIAR2 MM 
