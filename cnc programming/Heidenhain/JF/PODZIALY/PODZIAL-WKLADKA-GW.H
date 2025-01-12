0  BEGIN PGM PODZIAL-WKLADKA-GW MM 
1  BLK FORM 0.1 Z  X-50  Y-50  Z+0
2  BLK FORM 0.2  X+50  Y+50  Z+11
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  L  X+0  Y+0 FMAX
6  STOP
7  ;
8  TOOL CALL 30 Z S50
9  TOOL DEF 27
10 TCH PROBE 413 PKT.BAZ.OKRAG ZEWN. ~
    Q321=+0    ;SRODEK W 1-SZEJ OSI ~
    Q322=+0    ;SRODEK W 2-SZEJ OSI ~
    Q262=+108  ;SREDNICA NOMINALNA ~
    Q325=+5    ;KAT POCZATKOWY ~
    Q247=+85   ;KATOWY PRZYROST-KROK ~
    Q261=+4.5  ;WYSOKOSC POMIARU ~
    Q320=+15   ;BEZPIECZNA WYSOKOSC ~
    Q260=+30   ;BEZPIECZNA WYSOKOSC ~
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
    Q423=+3    ;LICZBA PKT POMIAR. ~
    Q365=+1    ;RODZAJ PRZEMIESZCZ.
11 ;
12 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
13 ;---------------------------------------------
14 ;
/ 15 STOP
16 * - FP-8-CIECIE
17 TOOL CALL 27 Z S7000 F3000
18 TOOL DEF 27
19 M8 M3
20 L  X-60  Y-6 FMAX
21 L  Z+14 FMAX
22 ;
23 LBL 1
24 L IZ-1 FMAX
25 L  X+60
26 L IZ-1 FMAX
27 L  X-60
28 LBL 0
29 ;
30 CALL LBL 1 REP6
31 L  Z+50 FMAX
32 ;
33 M5 M9
34 ;
/ 35 STOP
36 * - FP-8-ZGR
37 TOOL CALL 27 Z S7000 F140
38 TOOL DEF 14
39 M8 M3
40 L  X-60  Y-4.6 FMAX
41 L  Z-1 FMAX
42 ;
43 L  X+60
44 L  Z+50 FMAX
45 ;
46 M5 M9
47 ;
/ 48 STOP
49 * - FP-8-WYK
50 TOOL CALL 27 Z S7000 F140 DR+0
51 TOOL DEF 30
52 M3 M8
53 L  X-60  Y-5 FMAX
54 L  Z-1 FMAX
55 ;
56 L  Y-0.5 RR
57 L  X+60
58 L  Z+50 FMAX
59 M5 M9
60 ;
61 ;
62 ;---------------------------------------------
63 L  Z-5 R0 FMAX M91
64 L  X+160  Y+535 R0 FMAX M91
65 L M30
66 * - -----------------------------------------
67 ;
68 END PGM PODZIAL-WKLADKA-GW MM 
