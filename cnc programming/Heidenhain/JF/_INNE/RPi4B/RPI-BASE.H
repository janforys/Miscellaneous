0  BEGIN PGM RPI-BASE MM 
1  BLK FORM 0.1 Z  X-60  Y-60  Z-22
2  BLK FORM 0.2  X+60  Y+60  Z+1
3  ;---------------------------------------------
4  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
5  ;---------------------------------------------
6  STOP
7  ;
8  * - FP-12 -PLAN
9  TOOL CALL 17 Z S9987 F1111
10 STOP
11 M8
12 CYCL DEF 232 FREZOW.PLANOWE ~
    Q389=+1    ;STRATEGIA ~
    Q225=-60   ;PKT.STARTU 1SZEJ OSI ~
    Q226=-60   ;PKT.STARTU 2GIEJ OSI ~
    Q227=+1    ;PKT.STARTU 3CIEJ OSI ~
    Q386=+0    ;PUNKT KONCOWY 3. OSI ~
    Q218=+120  ;DLUG. 1-SZEJ STRONY ~
    Q219=+120  ;DLUG. 2-GIEJ STRONY ~
    Q202=+1    ;MAX. GLEB. DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q370=+1    ;MAX. NAKLADANIE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q385= AUTO ;POSUW OBR.WYKAN. ~
    Q253= MAX ;PREDK. POS. ZAGLEB. ~
    Q200=+5    ;BEZPIECZNA WYSOKOSC ~
    Q357=+5    ;ODST. BEZP. Z BOKU ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
13 CALL LBL 2
14 M5 M9
15 ;
16 * - FP-12 -GAB/TOR
17 TOOL CALL 13 Z S6000 F3000
18 STOP
19 M8
20 CYCL DEF 256 CZOP PROSTOKATNY ~
    Q218=+85   ;DLUG. 1-SZEJ STRONY ~
    Q424=+118  ;WYMIAR POLWYROBU 1 ~
    Q219=+85   ;DLUG. 2-GIEJ STRONY ~
    Q425=+107  ;WYMIAR POLWYROBU 2 ~
    Q220=+3    ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE CZOPU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-14.4 ;GLEBOKOSC ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q206= MAX ;WARTOSC POSUWU WGL. ~
    Q200=+5    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q437=+0    ;POZYCJA NAJAZDU
21 CALL LBL 2
22 M5 M9
23 ;
24 * - FP-12 -GAB WYK
25 TOOL CALL 17 Z S9987 F700 DR+0
26 STOP
27 M8
28 CYCL DEF 256 CZOP PROSTOKATNY ~
    Q218=+85   ;DLUG. 1-SZEJ STRONY ~
    Q424=+87   ;WYMIAR POLWYROBU 1 ~
    Q219=+85   ;DLUG. 2-GIEJ STRONY ~
    Q425=+87   ;WYMIAR POLWYROBU 2 ~
    Q220=+3    ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE CZOPU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-14.4 ;GLEBOKOSC ~
    Q202=+14.4 ;GLEBOKOSC DOSUWU ~
    Q206= MAX ;WARTOSC POSUWU WGL. ~
    Q200=+5    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q437=+0    ;POZYCJA NAJAZDU
29 CALL LBL 2
30 M5 M9
31 ;
32 * - FP-12 -GAB WYK
33 TOOL CALL 17 Z S9987 F700 DR-0.02
34 STOP
35 M8
36 CYCL DEF 256 CZOP PROSTOKATNY ~
    Q218=+85   ;DLUG. 1-SZEJ STRONY ~
    Q424=+86   ;WYMIAR POLWYROBU 1 ~
    Q219=+85   ;DLUG. 2-GIEJ STRONY ~
    Q425=+86   ;WYMIAR POLWYROBU 2 ~
    Q220=+3    ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE CZOPU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-14.4 ;GLEBOKOSC ~
    Q202=+14.4 ;GLEBOKOSC DOSUWU ~
    Q206= MAX ;WARTOSC POSUWU WGL. ~
    Q200=+5    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q437=+0    ;POZYCJA NAJAZDU
37 CALL LBL 2
38 M5 M9
39 ;
40 * - NAW
41 TOOL CALL 9 Z S1111 F111
42 STOP
43 M8
44 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1.6  ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
45 CALL LBL 1
46 CALL LBL 3
47 M5 M9
48 ;
49 * - W4.2
50 TOOL CALL 22 Z S1900 F100
51 STOP
52 TOOL DEF 23
53 M8
54 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-30   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
55 CALL LBL 3
56 M5 M9
57 ;
58 * - W2.5
59 TOOL CALL 18 Z S2800 F80
60 STOP
61 TOOL DEF 23
62 M8
63 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-23   ;GLEBOKOSC ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE ~
    Q395=+0    ;REFERENCJA GLEB.
64 CALL LBL 1
65 M5 M9
66 ;
67 * - M3
68 TOOL CALL 15 Z S60
69 STOP
70 TOOL DEF 23
71 M8
72 CYCL DEF 207 GWINTOWANIE GS  ~
    Q200=+4    ;BEZPIECZNA WYSOKOSC ~
    Q201=-8    ;GLEBOKOSC GWINTU ~
    Q239=+0.5  ;SKOK GWINTU ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
73 CALL LBL 1
74 M5 M9
75 ;
76 * - FP-12 -WYSPY
77 TOOL CALL 17 Z S9987 F1200 DL+0.2
78 STOP
79 M8
80 CYCL DEF 257 CZOP OKRAGLY ~
    Q223=+6    ;SRED.WYBR.OBR.NA GOT ~
    Q222=+20   ;SREDNICA WST.OBR.WYB ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-3.5  ;GLEBOKOSC ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q206=+500  ;WARTOSC POSUWU WGL. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q376=-1    ;KAT POCZATKOWY
81 CALL LBL 1
82 M5 M9
83 ;
84 * - FP-12 -WYBRANIE
85 TOOL CALL 17 Z S9987 F1200 DL+0.2
86 STOP
87 M8
88 CYCL DEF 251 KIESZEN PROSTOKATNA ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q218=+100  ;DLUG. 1-SZEJ STRONY ~
    Q219=+40   ;DLUG. 2-GIEJ STRONY ~
    Q220=+0    ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE KIESZENI ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-3.5  ;GLEBOKOSC ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206=+500  ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385= AUTO ;POSUW OBR.WYKAN.
89 CALL LBL 2
90 M5 M9
91 ;
92 CYCL DEF 7.0 PUNKT BAZOWY
93 CYCL DEF 7.1  X-10
94 ;
95 * - FP-12 -WYBRANIE
96 TOOL CALL 17 Z S9987 F1200 DL+0.2
97 STOP
98 M8
99 CYCL DEF 251 KIESZEN PROSTOKATNA ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q218=+50   ;DLUG. 1-SZEJ STRONY ~
    Q219=+100  ;DLUG. 2-GIEJ STRONY ~
    Q220=+0    ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE KIESZENI ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-3.5  ;GLEBOKOSC ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206=+500  ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385= AUTO ;POSUW OBR.WYKAN.
100 CALL LBL 2
101 M5 M9
102 ;
103 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
104 ;
105 ;
106 CYCL DEF 7.0 PUNKT BAZOWY
107 CYCL DEF 7.1  X+35
108 ;
109 * - FP-12 -WYBRANIE
110 TOOL CALL 17 Z S9987 F1200 DL+0.2
111 STOP
112 M8
113 CYCL DEF 251 KIESZEN PROSTOKATNA ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q218=+20   ;DLUG. 1-SZEJ STRONY ~
    Q219=+120  ;DLUG. 2-GIEJ STRONY ~
    Q220=+0    ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE KIESZENI ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-3.5  ;GLEBOKOSC ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206=+500  ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385= AUTO ;POSUW OBR.WYKAN.
114 CALL LBL 2
115 M5 M9
116 ;
117 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
118 ;
119 * - FP-12 -WYSPY
120 TOOL CALL 17 Z S9987 F1200 DL-0.05
121 STOP
122 M8
123 CYCL DEF 257 CZOP OKRAGLY ~
    Q223=+6    ;SRED.WYBR.OBR.NA GOT ~
    Q222=+20   ;SREDNICA WST.OBR.WYB ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-3.5  ;GLEBOKOSC ~
    Q202=+4    ;GLEBOKOSC DOSUWU ~
    Q206=+500  ;WARTOSC POSUWU WGL. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q376=-1    ;KAT POCZATKOWY
124 CALL LBL 1
125 M5 M9
126 ;
127 * - FP-12 -WYBRANIE
128 TOOL CALL 17 Z S9987 F1200 DL-0.05
129 STOP
130 M8
131 CYCL DEF 251 KIESZEN PROSTOKATNA ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q218=+100  ;DLUG. 1-SZEJ STRONY ~
    Q219=+40   ;DLUG. 2-GIEJ STRONY ~
    Q220=+0    ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE KIESZENI ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-3.5  ;GLEBOKOSC ~
    Q202=+4    ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206=+500  ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385= AUTO ;POSUW OBR.WYKAN.
132 CALL LBL 2
133 M5 M9
134 ;
135 CYCL DEF 7.0 PUNKT BAZOWY
136 CYCL DEF 7.1  X-10
137 ;
138 * - FP-12 -WYBRANIE
139 TOOL CALL 17 Z S9987 F1200 DL-0.05
140 STOP
141 M8
142 CYCL DEF 251 KIESZEN PROSTOKATNA ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q218=+50   ;DLUG. 1-SZEJ STRONY ~
    Q219=+100  ;DLUG. 2-GIEJ STRONY ~
    Q220=+0    ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE KIESZENI ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-3.5  ;GLEBOKOSC ~
    Q202=+4    ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206=+500  ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385= AUTO ;POSUW OBR.WYKAN.
143 CALL LBL 2
144 M5 M9
145 ;
146 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
147 ;
148 ;
149 CYCL DEF 7.0 PUNKT BAZOWY
150 CYCL DEF 7.1  X+35
151 ;
152 * - FP-12 -WYBRANIE
153 TOOL CALL 17 Z S9987 F1200 DL-0.05
154 STOP
155 M8
156 CYCL DEF 251 KIESZEN PROSTOKATNA ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q218=+20   ;DLUG. 1-SZEJ STRONY ~
    Q219=+120  ;DLUG. 2-GIEJ STRONY ~
    Q220=+0    ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE KIESZENI ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-3.5  ;GLEBOKOSC ~
    Q202=+4    ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206=+500  ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385= AUTO ;POSUW OBR.WYKAN.
157 CALL LBL 2
158 M5 M9
159 ;
160 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
161 ;
162 * - FAZY
163 TOOL CALL 9 Z S5000 F400 DL-0.5 DR-3
164 STOP
165 M8 M3
166 L  X-39  Y+24.5 R0 FMAX
167 CYCL DEF 257 CZOP OKRAGLY ~
    Q223=+6    ;SRED.WYBR.OBR.NA GOT ~
    Q222=+6.1  ;SREDNICA WST.OBR.WYB ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-0.4  ;GLEBOKOSC ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q206= MAX ;WARTOSC POSUWU WGL. ~
    Q200=+0    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q376=-1    ;KAT POCZATKOWY
168 CYCL CALL
169 L  X-39  Y-24.5 R0 FMAX
170 CYCL CALL
171 L  X+19  Y+24.5 R0 FMAX
172 CYCL CALL
173 L  X+19  Y-24.5 R0 FMAX
174 CYCL CALL
175 M5 M9
176 ;
177 * - FAZA-GAB
178 TOOL CALL 9 Z S5000 F400 DL-2.5 DR-0.5
179 STOP
180 M8 M3
181 CYCL DEF 256 CZOP PROSTOKATNY ~
    Q218=+85   ;DLUG. 1-SZEJ STRONY ~
    Q424=+85.1 ;WYMIAR POLWYROBU 1 ~
    Q219=+85   ;DLUG. 2-GIEJ STRONY ~
    Q425=+85.1 ;WYMIAR POLWYROBU 2 ~
    Q220=+3    ;PROMIEN NAROZA ~
    Q368=+0    ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE CZOPU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-0.1  ;GLEBOKOSC ~
    Q202=+1    ;GLEBOKOSC DOSUWU ~
    Q206= MAX ;WARTOSC POSUWU WGL. ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1    ;ZACHODZENIE TOROW ~
    Q437=+0    ;POZYCJA NAJAZDU
182 CALL LBL 2
183 M5 M9
184 ;
185 * - KULA 1 DLA WIERZCHOLKA
186 TOOL CALL 2 Z S9987 F70 DL-0.05
187 STOP
188 M3 M8
189 L  X-22  Y-1 R0 FMAX
190 CYCL DEF 225 GRAWEROWANIE ~
    QS500="Raspberry Pi 4B" ;TEKST GRAWER. ~
    Q513=+4.3  ;WYSOK.ZNAKU ~
    Q514=+0.75 ;WSPOL.ODSTEPU ~
    Q515=+0    ;FONT ~
    Q516=+0    ;UKLAD TEKSTU ~
    Q374=+0    ;KAT OBROTU ~
    Q517=+50   ;PROMIEN OKREGU ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q201=-0.07 ;GLEBOKOSC ~
    Q206=+20   ;WARTOSC POSUWU WGL. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=-3.5  ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
191 CYCL CALL
192 M5 M9
193 ;
194 ;---------------------------------------------
195 L  Z-5 R0 FMAX M91
196 L  X+260  Y+535 R0 FMAX M91
197 L M30
198 * - -----------------------------------------
199 * - LBL1 GW/OTW
200 LBL 1
201 M3
202 L  X-39  Y+24.5 R0 FMAX M99
203 L  X-39  Y-24.5 R0 FMAX M99
204 L  X+19  Y+24.5 R0 FMAX M99
205 L  X+19  Y-24.5 R0 FMAX M99
206 LBL 0
207 * - LBL2 SRODEK
208 LBL 2
209 M3
210 L  X+0  Y+0 R0 FMAX M99
211 LBL 0
212 * - LBL3 OTW
213 LBL 3
214 M3
215 L  X-37.5  Y+37.5 R0 FMAX M99
216 L  X+37.5  Y+37.5 R0 FMAX M99
217 L  X-37.5  Y-37.5 R0 FMAX M99
218 L  X+37.5  Y-37.5 R0 FMAX M99
219 LBL 0
220 END PGM RPI-BASE MM 
