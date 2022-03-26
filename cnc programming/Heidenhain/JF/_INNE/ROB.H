0  BEGIN PGM ROB MM 
1  BLK FORM 0.1 Z  X-100  Y-100  Z-15
2  BLK FORM 0.2  X+100  Y+100  Z+0.1
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  L  X+0  Y+0 R0 FMAX
6  ;---------------------------------------------
7  ;
8  TOOL CALL 27 Z S8000 F1000
9  M8 M3
10 ;
11 ;
12 L  X-80  Y-80 R0 FMAX
13 L  Z+1 FMAX
14 L  Z-0.1 F150
15 L  Y-30 F AUTO
16 L  X-65
17 CR  X-65  Y-55 R+15 DR-
18 CC  X-75  Y-35
19 L  X-75
20 L  X-55  Y-80
21 L  Z+2 FMAX
22 ;
23 L  X-40  Y-65 R0 FMAX
24 L  Z+1 FMAX
25 L  Z-0.1 F150
26 CR  X-10  Y-65 R+15 DR+ F AUTO
27 L  Y-45
28 CR  X-40  Y-45 R+15 DR+
29 L  X-40  Y-70
30 L  Z+2 FMAX
31 ;
32 L  X+10  Y-80 R0 FMAX
33 L  Z+1 FMAX
34 L  Z-0.1 F150
35 L  Y-30 F AUTO
36 L  X+20
37 CR  X+20  Y-55 R+15 DR-
38 L  X+10
39 L  X+25
40 CR  X+25  Y-80 R+20 DR-
41 L  X+10
42 L  Z+2 FMAX
43 ;
44 ;
45 ;
46 ;
47 ;
48 L  Z+50 FMAX
49 ;
50 ;---------------------------------------------
51 L  Z-5 R0 FMAX M91
52 L  X+260  Y+535 R0 FMAX M91
53 L M30
54 * - -----------------------------------------
55 * - LBL1 
56 LBL 1
57 M3
58 L  X+0  Y+0 R0 FMAX M99
59 LBL 0
60 END PGM ROB MM 
