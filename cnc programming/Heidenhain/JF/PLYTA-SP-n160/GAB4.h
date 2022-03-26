0  BEGIN PGM GAB4 MM 
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
20 L  X-150  Y-20 FMAX
21 L  Z+0 FMAX
22 ;
23 Q22 = - 3
24 LBL 2
25 L  Z+Q22
26 L  Y+0.05 RL
27 L  X-429.9
28 L  Y+379.95
29 L  X-150
30 ;
31 L  Z+5 R0 FMAX
32 L  X-150  Y-20 FMAX
33 Q22 = Q22 - 3
34 LBL 0
35 CALL LBL 2 REP14
36 ;
37 M5 M9
38 ;
39 ;---------------------------------------------
40 L  Z-5 R0 FMAX M91
41 L  X+260  Y+535 R0 FMAX M91
42 L M30
43 * - -----------------------------------------
44 * - LBL1
/ 45 LBL 1
/ 46 M3
/ 47 L  X+0  Y+0 R0 FMAX M99
/ 48 LBL 0
49 END PGM GAB4 MM 
