0  BEGIN PGM GAB MM 
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
15 TOOL CALL 22 Z S6000 F2000
16 TOOL DEF 30
17 M8 M3
18 ;
19 ;
20 L  X-210  Y-15 FMAX
21 L  Z+0 FMAX
22 ;
23 Q22 = - 3
24 LBL 2
25 L  Z+Q22
26 L  Y-8
27 L  X+8
28 L  Y+391.8
29 L  X-210
30 L  Z+5 FMAX
31 L  X-210  Y-15 FMAX
32 Q22 = Q22 - 3
33 LBL 0
34 CALL LBL 2 REP14
35 ;
36 M5 M9
37 ;
38 ;---------------------------------------------
39 L  Z-5 R0 FMAX M91
40 L  X+260  Y+535 R0 FMAX M91
41 L M30
42 * - -----------------------------------------
43 * - LBL1
/ 44 LBL 1
/ 45 M3
/ 46 L  X+0  Y+0 R0 FMAX M99
/ 47 LBL 0
48 END PGM GAB MM 
