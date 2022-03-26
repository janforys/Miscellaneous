0  BEGIN PGM POMIAR1 MM 
1  BLK FORM 0.1 Z  X-100  Y-100  Z-35
2  BLK FORM 0.2  X+100  Y+100  Z+0
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  ;---------------------------------------------
6  ;
7  TOOL CALL 30 Z S50
8  TCH PROBE 409 PKT BAZ.SR.MOSTKA ~
    Q321=+0    ;SRODEK W 1-SZEJ OSI ~
    Q322=+0    ;SRODEK W 2-SZEJ OSI ~
    Q311=+250  ;SZEROKOSC MOSTKA ~
    Q272=+1    ;OS POMIAROWA ~
    Q261=-5    ;WYSOKOSC POMIARU ~
    Q320=+10   ;BEZPIECZNA WYSOKOSC ~
    Q260=+30   ;BEZPIECZNA WYSOKOSC ~
    Q305=+1    ;NR W TABELI ~
    Q405=+0    ;PUNKT ODNIESIENIA ~
    Q303=+1    ;PRZEKAZ DANYCH POM. ~
    Q381=+0    ;PROBKOW. NA OSI TS ~
    Q382=+0    ;1.WSPOL. DLA OSI TS ~
    Q383=+0    ;2.WSPOLRZ.DLA OSI TS ~
    Q384=+0    ;3. WSPOL. DLA OSI TS ~
    Q333=+0    ;PUNKT ODNIESIENIA
9  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
10 ;
11 ;---------------------------------------------
/ 12 L  Z-5 R0 FMAX M91
/ 13 L  X+260  Y+535 R0 FMAX M91
/ 14 L M30
15 CALL LBL 99
16 * - -----------------------------------------
17 * - LBL1 
18 LBL 1
19 M3
20 L  X+0  Y+0 R0 FMAX M99
21 LBL 0
22 ;
23 LBL 99
24 END PGM POMIAR1 MM 
