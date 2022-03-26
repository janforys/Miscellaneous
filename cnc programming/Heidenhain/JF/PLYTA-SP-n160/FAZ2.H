0  BEGIN PGM FAZ2 MM 
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
13 L  X+0  Y-10 FMAX
14 L  Z+0 FMAX
15 ;
16 L  Z-1
17 L  Y-1
18 L  X+400
19 L  Z+5 FMAX
20 ;
21 M5 M9
22 ;
23 ;---------------------------------------------
24 L  Z-5 R0 FMAX M91
25 L  X+260  Y+535 R0 FMAX M91
26 L M30
27 * - -----------------------------------------
/ 28 * - LBL1 
/ 29 LBL 1
/ 30 M3
/ 31 L  X+0  Y+0 R0 FMAX M99
/ 32 LBL 0
33 END PGM FAZ2 MM 
