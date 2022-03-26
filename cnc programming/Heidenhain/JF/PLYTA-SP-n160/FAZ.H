0  BEGIN PGM FAZ MM 
1  BLK FORM 0.1 Z  X-400  Y-150  Z-35
2  BLK FORM 0.2  X+400  Y+150  Z+1
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  ;
6  ;---------------------------------------------
7  ;
8  * - FAZA
9  TOOL CALL 9 Z S5000 F700 DL-1 DR+0
10 TOOL DEF 30
11 M8 M3
12 ;
13 L  X-210  Y-15 FMAX
14 L  Z+0 FMAX
15 ;
16 L  Z-1
17 L  Y-1
18 L  X+1
19 L  Y+380.9
20 L  X-210
21 L  Z+5 FMAX
22 ;
23 M5 M9
24 ;
25 ;---------------------------------------------
26 L  Z-5 R0 FMAX M91
27 L  X+260  Y+535 R0 FMAX M91
28 L M30
29 * - -----------------------------------------
/ 30 * - LBL1 
/ 31 LBL 1
/ 32 M3
/ 33 L  X+0  Y+0 R0 FMAX M99
/ 34 LBL 0
35 END PGM FAZ MM 
