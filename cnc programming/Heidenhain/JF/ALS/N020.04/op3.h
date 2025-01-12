0  BEGIN PGM op3 MM 
1  BLK FORM 0.1 Z  X-30.1  Y-0.2  Z-13.8
2  BLK FORM 0.2  X+30.1  Y+26.2  Z+0.2
3  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
4  ;---------------------------------------------
5  STOP
6  * - TOROID-25
7  TOOL CALL 3 Z S1200 F1000
8  TOOL DEF 1
9  L  Z+300 R0 FMAX M3 M8
10 CYCL DEF 232 FREZOW.PLANOWE ~
    Q389=+1    ;STRATEGIA ~
    Q225=-40   ;PKT.STARTU 1SZEJ OSI ~
    Q226=+35   ;PKT.STARTU 2GIEJ OSI ~
    Q227=+9    ;PKT.STARTU 3CIEJ OSI ~
    Q386=+0.1  ;PUNKT KONCOWY 3. OSI ~
    Q218=+80   ;DLUG. 1-SZEJ STRONY ~
    Q219=-51   ;DLUG. 2-GIEJ STRONY ~
    Q202=+0.8  ;MAX. GLEB. DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q370=+1    ;MAX. NAKLADANIE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q385= AUTO ;POSUW OBR.WYKAN. ~
    Q253= MAX ;PREDK. POS. ZAGLEB. ~
    Q200=+5    ;BEZPIECZNA WYSOKOSC ~
    Q357=+5    ;ODST. BEZP. Z BOKU ~
    Q204=+100  ;2-GA BEZPIECZNA WYS.
11 CYCL CALL
12 L  Z+300 R0 FMAX
13 ;
14 * - FP-12
15 TOOL CALL 1 Z S2222 F400
16 TOOL DEF 26
/ 17 STOP
18 L  Z+300 R0 FMAX M3
19 L  X+0  Y-12 R0 FMAX
20 L  Z+5 R0 FMAX M7
21 L  Z+0 R0 F AUTO
22 LBL 1
23 L IZ-1
24 L  X+12 RL
25 CC  X+0  Y-12
26 C  X+0  Y+0 DR+
27 L  X-29.75
28 CC  X-29.75  Y+0.1
29 C  X-29.85  Y+0.1 DR-
30 L  Y+19.759
31 CC  X-19.85  Y+19.759
32 C  X-26.85  Y+26.9 DR-
33 L  X+26.85
34 CC  X+19.85  Y+19.759
35 C  X+29.85  Y+19.759 DR-
36 L  Y+0.1
37 CC  X+29.75  Y+0.1
38 C  X+29.75  Y+0 DR-
39 L  X+0
40 CC  X+0  Y-12
41 C  X-12  Y-12 DR+
42 L  X+0 R0
43 LBL 0
44 CALL LBL 1 REP14
45 L  Z+300 R0 FMAX
46 M9 M5
47 M5
48 ;
49 * - FAZO-16
50 TOOL CALL 26 Z S500 F50 DL-0.05
/ 51 STOP
52 L  Z+300 R0 FMAX M3
53 L  X+31  Y-8 R0 FMAX
54 L  Z+5 R0 FMAX M8
55 L  Z-1 R0 F AUTO
56 LBL 2
57 L IZ-1
58 L  Y+35
59 L IZ-1
60 L  Y-8
61 LBL 0
62 CALL LBL 2 REP2
63 L  Z+300 R0 FMAX
64 ;
65 * - FAZO-16
66 TOOL CALL 26 Z S500 F50 DL-0.05
/ 67 STOP
68 L  Z+300 R0 FMAX M3
69 L  X-31  Y+35 R0 FMAX
70 L  Z+5 R0 FMAX M8
71 L  Z-1 R0 F AUTO
72 LBL 3
73 L IZ-1
74 L  Y-8
75 L IZ-1
76 L  Y+35
77 LBL 0
78 CALL LBL 3 REP2
79 L  Z+300 R0 FMAX
80 ;
81 * - FAZO-16
82 TOOL CALL 26 Z S500 F50 DL-0.05
/ 83 STOP
84 L  Z+300 R0 FMAX M3
85 L  X-30  Y+28 R0 FMAX
86 L  Z+5 R0 FMAX M8
87 L  Z-1.8 R0 F AUTO
88 L  X+30
89 L  Z+300 R0 FMAX
90 ;
91 * - FP-8
92 TOOL CALL 11 Z S3000 F500 DL-0.045
/ 93 STOP
94 TOOL DEF 20
95 L  Z+300 R0 FMAX M3 M8
96 CYCL DEF 232 FREZOW.PLANOWE ~
    Q389=+2    ;STRATEGIA ~
    Q225=-35   ;PKT.STARTU 1SZEJ OSI ~
    Q226=+32.5 ;PKT.STARTU 2GIEJ OSI ~
    Q227=+0.5  ;PKT.STARTU 3CIEJ OSI ~
    Q386=+0    ;PUNKT KONCOWY 3. OSI ~
    Q218=+70   ;DLUG. 1-SZEJ STRONY ~
    Q219=-40   ;DLUG. 2-GIEJ STRONY ~
    Q202=+0.5  ;MAX. GLEB. DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q370=+1    ;MAX. NAKLADANIE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q385= AUTO ;POSUW OBR.WYKAN. ~
    Q253= MAX ;PREDK. POS. ZAGLEB. ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q357=+2    ;ODST. BEZP. Z BOKU ~
    Q204=+100  ;2-GA BEZPIECZNA WYS.
97 CYCL CALL
98 L  Z+300 R0 FMAX
99 ;
100 * - FP-8
101 TOOL CALL 19 Z S3000 F300 DR-0.04
/ 102 STOP
103 L  Z+300 R0 FMAX M3
104 L  X+0  Y-12 R0 FMAX
105 L  Z+5 R0 FMAX M8
106 L  Z-15 R0 F AUTO
107 L  X+12 RL
108 CC  X+0  Y-12
109 C  X+0  Y+0 DR+
110 L  X-29.75
111 CC  X-29.75  Y+0.1
112 C  X-29.85  Y+0.1 DR-
113 L  Y+19.759
114 CC  X-19.85  Y+19.759
115 C  X-26.85  Y+26.9 DR-
116 L  X+26.85
117 CC  X+19.85  Y+19.759
118 C  X+29.85  Y+19.759 DR-
119 L  Y+0.1
120 CC  X+29.75  Y+0.1
121 C  X+29.75  Y+0 DR-
122 L  X+0
123 CC  X+0  Y-12
124 C  X-12  Y-12 DR+
125 L  X+0 R0
126 L  Z+300 R0 FMAX
127 L  Z-15 R0 FMAX M91 M9
128 L  X+300  Y+529 R0 FMAX M91
129 STOP M30
130 END PGM op3 MM 
