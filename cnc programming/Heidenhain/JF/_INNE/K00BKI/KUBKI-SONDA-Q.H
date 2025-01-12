0  BEGIN PGM KUBKI-SONDA-Q MM 
1  ;
2  Q80 = 156 ; ROZSTAW KUBKOW
3  Q81 = 24 ; SREDNICA KUBKOW
4  Q82 = 15.8 ; GLEBOKOSC KUBKOW
5  Q83 = 38 ; X - DLA 1. PARY
6  Q84 = 119 ; X - DLA 2. PARY
7  Q85 = 223 ; X - DLA 3. PARY
8  Q86 = 0.15 ; DL - DLA 1. PARY
9  Q87 = 0.15 ; DL - DLA 2. PARY
10 Q88 = 0.15 ; DL - DLA 3. PARY
11 ;
12 ;---
13 Q50 = - 10 ; X1 - 1 PLASZCZYZNA
14 Q51 = - 63 ; Y1 - 1 PLASZCZYZNA
15 Q52 = 10 ; X2/X3 - 1 PLASZCZYZNA
16 Q53 = 63 ; Y2/Y3 - 1 PLASZCZYZNA
17 ;
18 Q60 = - 10 ; X1 - 2 PLASZCZYZNA
19 Q61 = - 63 ; Y1 - 2 PLASZCZYZNA
20 Q62 = 10 ; X2/X3 - 2 PLASZCZYZNA
21 Q63 = 63 ; Y2/Y3 - 2 PLASZCZYZNA
22 ;
23 Q70 = - 10 ; X1 - 3 PLASZCZYZNA
24 Q71 = - 63 ; Y1 - 3 PLASZCZYZNA
25 Q72 = 10 ; X2/X3 - 3 PLASZCZYZNA
26 Q73 = 63 ; Y2/Y3 - 3 PLASZCZYZNA
27 ;-----------------------------------
28 ;-----------------------------------
29 ;-----------------------------------
30 Q90 = Q80 / 2 ; rozstaw / 2
31 Q91 = Q81 - 0.2 ; srednica zgrubnie
32 Q92 = Q81 + 0.05 ; srednica wyk.
33 Q93 = Q82 - 0.1 ; glebokosc zgrubnie
34 ;-----------------------------------
35 ;-----------------------------------
36 ;-----------------------------------
37 BLK FORM 0.1 Z  X+0  Y-90  Z-75
38 BLK FORM 0.2  X+241  Y+90  Z+0
39 CALL PGM TNC:\Z19
40 CALL PGM TNC:\REF
41 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
42 PLANE RESET TURN F4000
43 ;
44 STOP
45 * - SONDA
46 TOOL CALL "SONDA" Z S10
47 TCH PROBE 419 PKT.BAZOW.POJED. OSI ~
    Q263=+0    ;1.PKT POMIAROW 1.OSI ~
    Q264=-56   ;1.PKT 2.OSI ~
    Q261=-5    ;WYSOKOSC POMIARU ~
    Q320=+10   ;BEZPIECZNA WYSOKOSC ~
    Q260=+20   ;BEZPIECZNA WYSOKOSC ~
    Q272=+1    ;OS POMIAROWA ~
    Q267=+1    ;KIERUNEK RUCHU ~
    Q305=+1    ;NR W TABELI ~
    Q333=+0    ;PUNKT ODNIESIENIA ~
    Q303=+1    ;PRZEKAZ DANYCH POM.
48 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
49 TCH PROBE 427 POMIAR WSPOLRZEDNA ~
    Q263=+0    ;1.PKT POMIAROW 1.OSI ~
    Q264=-56   ;1.PKT 2.OSI ~
    Q261=-5    ;WYSOKOSC POMIARU ~
    Q320=+10   ;BEZPIECZNA WYSOKOSC ~
    Q272=+1    ;OS POMIAROWA ~
    Q267=+1    ;KIERUNEK RUCHU ~
    Q260=+20   ;BEZPIECZNA WYSOKOSC ~
    Q281=+1    ;PROTOKOL POMIARU ~
    Q288=+0.004 ;MAKSYMALNY WYMIAR ~
    Q289=-0.004 ;MINIMALNY WYMIAR ~
    Q309=+1    ;PGM-STOP JESLI BLAD ~
    Q330=+0    ;NARZEDZIE
50 M140 MB MAX
51 ;
52 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
53 PLANE RESET TURN F4000
54 ;
55 * - para 1: ustawianie plaszczyzny (sonda)
56 TOOL CALL 1 Z S50
57 CYCL DEF 7.0 PUNKT BAZOWY
58 CYCL DEF 7.1  X+Q83
59 TCH PROBE 431 POMIAR PLASZCZYZNY ~
    Q263=+Q50  ;1.PKT POMIAROW 1.OSI ~
    Q264=+Q51  ;1.PKT 2.OSI ~
    Q294=+0    ;1.PKT 3.OSI ~
    Q265=+Q52  ;2-GI PUNKT W 1. OSI ~
    Q266=-Q53  ;2-GI PUNKT W 2. OSI ~
    Q295=+0    ;2-GI PUNKT W 3. OSI ~
    Q296=+Q52  ;3-CI PUNKT W 1. OSI ~
    Q297=+Q53  ;3-CI PUNKT W 2. OSI ~
    Q298=+0    ;3-CI PUNKT W 3. OSI ~
    Q320=+10   ;BEZPIECZNA WYSOKOSC ~
    Q260=+20   ;BEZPIECZNA WYSOKOSC ~
    Q281=+1    ;PROTOKOL POMIARU
60 M140 MB MAX
61 ;
62 * - para 1: FP-14
63 TOOL CALL 7 Z S5000 F1200 DL+Q86
64 PLANE SPATIAL SPA+Q170 SPB+Q171 SPC+Q172 TURN F4000
/ 65 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-Q93  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+2    ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+Q91  ;SREDNICA NOMINALNA ~
    Q342=+5    ;WYW.WSTEP. SREDNICA
66 CYCL DEF 253 FREZOWANIE KANALKA ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q218=+28   ;DLUGOSC ROWKA ~
    Q219=+24   ;SZEROKOSC ROWKA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q374=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE ROWKA ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-Q93  ;GLEBOKOSC ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206=+666  ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385= AUTO ;POSUW OBR.WYKAN.
67 LBL 1
68 L  X+0  Y-Q90 R0 FMAX M99 M13
69 L  X+0  Y+Q90 R0 FMAX M99 M13
70 LBL 0
/ 71 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-Q82  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+5    ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+Q92  ;SREDNICA NOMINALNA ~
    Q342=+Q91  ;WYW.WSTEP. SREDNICA
72 CYCL DEF 253 FREZOWANIE KANALKA ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q218=+28   ;DLUGOSC ROWKA ~
    Q219=+24   ;SZEROKOSC ROWKA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q374=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE ROWKA ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-Q82  ;GLEBOKOSC ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206=+666  ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385= AUTO ;POSUW OBR.WYKAN.
73 CALL LBL 1
74 M5
75 M9
76 M140 MB MAX
77 PLANE RESET TURN F4000
78 ;
79 * - PRZEDMUCH
80 CYCL DEF 7.0 PUNKT BAZOWY
81 CYCL DEF 7.1  X+Q84
82 TOOL CALL 7 Z S5000 F150
83 M3
84 M25
85 LBL 60 ;PRZEDMUCH
86 L  X-2  Y-67 FMAX
87 L  Z+15 FMAX
88 L  Z+5 F1500
89 L  X+2 F AUTO
90 L  Y+67 F5000
91 L  X-2 F AUTO
92 L  Z+50 FMAX
93 LBL 0
94 M5
95 M9
96 M140 MB MAX
97 PLANE RESET TURN F4000
98 ;
99 * - para 2: ustawianie plaszczyzny (sonda)
100 ;
101 TOOL CALL 1 Z S50
102 PLANE RESET TURN F4000
103 CYCL DEF 7.0 PUNKT BAZOWY
104 CYCL DEF 7.1  X+Q84
105 TCH PROBE 431 POMIAR PLASZCZYZNY ~
    Q263=+Q60  ;1.PKT POMIAROW 1.OSI ~
    Q264=+Q61  ;1.PKT 2.OSI ~
    Q294=+0    ;1.PKT 3.OSI ~
    Q265=+Q62  ;2-GI PUNKT W 1. OSI ~
    Q266=-Q63  ;2-GI PUNKT W 2. OSI ~
    Q295=+0    ;2-GI PUNKT W 3. OSI ~
    Q296=+Q62  ;3-CI PUNKT W 1. OSI ~
    Q297=+Q63  ;3-CI PUNKT W 2. OSI ~
    Q298=+0    ;3-CI PUNKT W 3. OSI ~
    Q320=+10   ;BEZPIECZNA WYSOKOSC ~
    Q260=+20   ;BEZPIECZNA WYSOKOSC ~
    Q281=+1    ;PROTOKOL POMIARU
106 M140 MB MAX
107 ;
108 * - para 2: FP-14
109 TOOL CALL 7 Z S5000 F1200 DL+Q87
110 PLANE SPATIAL SPA+Q170 SPB+Q171 SPC+Q172 TURN F4000
/ 111 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-Q93  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+2    ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+Q91  ;SREDNICA NOMINALNA ~
    Q342=+5    ;WYW.WSTEP. SREDNICA
112 CYCL DEF 253 FREZOWANIE KANALKA ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q218=+28   ;DLUGOSC ROWKA ~
    Q219=+24   ;SZEROKOSC ROWKA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q374=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE ROWKA ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-Q93  ;GLEBOKOSC ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206=+666  ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385= AUTO ;POSUW OBR.WYKAN.
113 CALL LBL 1
/ 114 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-Q82  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+5    ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+Q92  ;SREDNICA NOMINALNA ~
    Q342=+Q91  ;WYW.WSTEP. SREDNICA
115 CYCL DEF 253 FREZOWANIE KANALKA ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q218=+28   ;DLUGOSC ROWKA ~
    Q219=+24   ;SZEROKOSC ROWKA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q374=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE ROWKA ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-Q82  ;GLEBOKOSC ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206=+666  ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385= AUTO ;POSUW OBR.WYKAN.
116 CALL LBL 1
117 M5
118 M9
119 M140 MB MAX
120 PLANE RESET TURN F4000
121 ;
122 * - PRZEDMUCH
123 ;
124 CYCL DEF 7.0 PUNKT BAZOWY
125 CYCL DEF 7.1  X+Q85
126 TOOL CALL 7 Z S5000 F150
127 M3
128 M25
129 CALL LBL 60
130 M5
131 M9
132 M140 MB MAX
133 PLANE RESET TURN F4000
134 ;
135 * - para 3: ustawianie plaszczyzny (sonda)
136 TOOL CALL 1 Z S50
137 CYCL DEF 7.0 PUNKT BAZOWY
138 CYCL DEF 7.1  X+Q85
139 TCH PROBE 431 POMIAR PLASZCZYZNY ~
    Q263=+Q70  ;1.PKT POMIAROW 1.OSI ~
    Q264=+Q71  ;1.PKT 2.OSI ~
    Q294=+0    ;1.PKT 3.OSI ~
    Q265=+Q72  ;2-GI PUNKT W 1. OSI ~
    Q266=-Q73  ;2-GI PUNKT W 2. OSI ~
    Q295=+0    ;2-GI PUNKT W 3. OSI ~
    Q296=+Q72  ;3-CI PUNKT W 1. OSI ~
    Q297=+Q73  ;3-CI PUNKT W 2. OSI ~
    Q298=+0    ;3-CI PUNKT W 3. OSI ~
    Q320=+10   ;BEZPIECZNA WYSOKOSC ~
    Q260=+20   ;BEZPIECZNA WYSOKOSC ~
    Q281=+1    ;PROTOKOL POMIARU
140 M140 MB MAX
141 ;
142 * - para 3: FP-14
143 TOOL CALL 7 Z S5000 F1200 DL+Q88
144 PLANE SPATIAL SPA+Q170 SPB+Q171 SPC+Q172 TURN F4000
/ 145 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-Q93  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+2    ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+Q91  ;SREDNICA NOMINALNA ~
    Q342=+5    ;WYW.WSTEP. SREDNICA
146 CYCL DEF 253 FREZOWANIE KANALKA ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q218=+28   ;DLUGOSC ROWKA ~
    Q219=+24   ;SZEROKOSC ROWKA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q374=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE ROWKA ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-Q93  ;GLEBOKOSC ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206=+666  ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385= AUTO ;POSUW OBR.WYKAN.
147 CALL LBL 1
/ 148 CYCL DEF 208 SPIRALNE FREZ. OTW. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-Q82  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q334=+5    ;GLEBOKOSC DOSUWU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q335=+Q92  ;SREDNICA NOMINALNA ~
    Q342=+Q91  ;WYW.WSTEP. SREDNICA
149 CYCL DEF 253 FREZOWANIE KANALKA ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q218=+28   ;DLUGOSC ROWKA ~
    Q219=+24   ;SZEROKOSC ROWKA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q374=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE ROWKA ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-Q82  ;GLEBOKOSC ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206=+666  ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385= AUTO ;POSUW OBR.WYKAN.
150 CALL LBL 1
151 M5
152 M9
153 ;
154 CALL PGM TNC:\Z19
155 CALL PGM TNC:\REF
156 PLANE RESET TURN F4000
157 CALL PGM TNC:\FIN
158 M30
159 END PGM KUBKI-SONDA-Q MM 
