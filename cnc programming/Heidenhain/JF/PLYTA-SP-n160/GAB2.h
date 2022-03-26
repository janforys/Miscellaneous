0  BEGIN PGM GAB2 MM 
1  BLK FORM 0.1 Z  X+0  Y-15  Z-5
2  BLK FORM 0.2  X+208.9  Y+15  Z+0
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  ;
6  L  X+0  Y+0 R0 FMAX
7  ;
8  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
9  CYCL DEF 7.0 PUNKT BAZOWY
10 CYCL DEF 7.1 IZ+0
11 ;---------------------------------------------
12 ;
/ 13 STOP
14 * - GLOW-20
15 TOOL CALL 22 Z S6000 F2000 DL+0
16 TOOL DEF 30
17 M8 M3
18 ;
19 ;
20 L  X+0  Y-20 FMAX
21 L  Z+0 FMAX
22 ;
23 Q22 = - 3
24 LBL 2
25 L  Z+Q22
26 L  Y+0.05 RR
27 L  X+400
28 L  Z+5 R0 FMAX
29 L  X+0  Y-20 FMAX
30 Q22 = Q22 - 3
31 LBL 0
32 CALL LBL 2 REP14
33 ;
34 M5 M9
35 ;
36 ;---------------------------------------------
37 L  Z-5 R0 FMAX M91
38 L  X+260  Y+535 R0 FMAX M91
39 L M30
40 * - -----------------------------------------
41 * - LBL1
/ 42 LBL 1
/ 43 M3
/ 44 L  X+0  Y+0 R0 FMAX M99
/ 45 LBL 0
46 END PGM GAB2 MM 
