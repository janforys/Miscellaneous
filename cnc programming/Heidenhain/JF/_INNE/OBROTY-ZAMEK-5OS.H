0  BEGIN PGM OBROTY-ZAMEK-5OS MM 
1  CALL PGM TNC:\Z19
2  CALL PGM TNC:\REF
3  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
4  L  B+0  C+0 R0 FMAX M94
5  ;(999999 )
6  ;( NAME )
7  BLK FORM 0.1 Z  X+0  Y+0  Z+0
8  BLK FORM 0.2  X+0  Y+0  Z+0
9  CYCL DEF 19.0 PLASZCZ.ROBOCZA
10 CYCL DEF 19.1  A+0  B+0  C+0
11 CYCL DEF 19.0 PLASZCZ.ROBOCZA
12 CYCL DEF 19.1
13 ; TOOL DEF 21 L+30. D+4. R+0.
14 ; TOOL DEF 22 L+40. D+4. R+0.
15 ; TOOL DEF 1 L+20. D+1. R+0.
16 L  Z-5 FMAX M91
17 L  X-500 FMAX M91
18 L  Y-5 R0 FMAX M91
/ 19 L  Z-5 FMAX M91
/ 20 L  X-500 FMAX M91
/ 21 L  Y-5 R0 FMAX M91
22 ;
23 ;
24 * - NAW STAL
25 STOP
26 TOOL CALL 21 Z S650 ;
27 CYCL DEF 32.0 TOLERANCJA
28 CYCL DEF 32.1 T0.01
29 L  B+0  C+0 F2500 M94
30 CYCL DEF 19.0 PLASZCZ.ROBOCZA
31 CYCL DEF 19.1  A+90  B+0  C+21.5
32 L  B+Q121  C+Q122 R0 FMAX M126
33 L  X+0  Y-7.5 R0 FMAX M3
34 M8
35 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1    ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+1.5  ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
36 CYCL CALL
/ 37 M140 MB MAX
/ 38 L  Z-5 FMAX M91
/ 39 L  X-500 FMAX M91
/ 40 L  Y-5 R0 FMAX M91
41 CYCL DEF 19.0 PLASZCZ.ROBOCZA
42 CYCL DEF 19.1  A+0  B+0  C+0
43 CYCL DEF 19.0 PLASZCZ.ROBOCZA
44 CYCL DEF 19.1
45 ;
46 ;
47 ;
48 CYCL DEF 19.0 PLASZCZ.ROBOCZA
49 CYCL DEF 19.1  A+90  B+0  C+98.5
50 L  B+Q121  C+Q122 R0 FMAX M126
51 ;
52 L  X+0  Y-7.5 R0 FMAX M3
53 M8
54 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1    ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+1.5  ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
55 CYCL CALL
/ 56 M140 MB MAX
/ 57 L  Z-5 FMAX M91
/ 58 L  X-500 FMAX M91
/ 59 L  Y-5 R0 FMAX M91
60 ;
61 ;
62 ;
63 CYCL DEF 19.0 PLASZCZ.ROBOCZA
64 CYCL DEF 19.1  A+90  B+0  C+141.5
65 L  B+Q121  C+Q122 R0 FMAX M126
66 ;
67 L  X+0  Y-7.5 R0 FMAX M3
68 M8
69 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1    ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+1.5  ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
70 CYCL CALL
71 ;
72 ;
73 CYCL DEF 19.0 PLASZCZ.ROBOCZA
74 CYCL DEF 19.1  A+90  B+0  C+218.5
75 L  B+Q121  C+Q122 R0 FMAX M126
76 ;
77 L  X+0  Y-7.5 R0 FMAX M3
78 M8
79 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1    ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+1.5  ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
80 CYCL CALL
81 ;
82 ;
83 CYCL DEF 19.0 PLASZCZ.ROBOCZA
84 CYCL DEF 19.1  A+90  B+0  C+261.5
85 L  B+Q121  C+Q122 R0 FMAX M126
86 ;
87 L  X+0  Y-7.5 R0 FMAX M3
88 M8
89 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1    ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+1.5  ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
90 CYCL CALL
91 ;
92 ;
93 CYCL DEF 19.0 PLASZCZ.ROBOCZA
94 CYCL DEF 19.1  A+90  B+0  C+338.5
95 L  B+Q121  C+Q122 R0 FMAX M126
96 ;
97 L  X+0  Y-7.5 R0 FMAX M3
98 M8
99 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-1    ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+1.5  ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
100 CYCL CALL
101 M9 M5
102 ;
103 ;
104 * - W-5
105 STOP
106 TOOL CALL 28 Z S800 ;
107 CYCL DEF 32.0 TOLERANCJA
108 CYCL DEF 32.1 T0.01
109 L  B+0  C+0 F2500 M94
110 CYCL DEF 19.0 PLASZCZ.ROBOCZA
111 CYCL DEF 19.1  A+90  B+0  C+21.5
112 L  B+Q121  C+Q122 R0 FMAX M126
113 L  X+0  Y-7.5 R0 FMAX M3
114 M8
115 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-18   ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
116 CYCL CALL
/ 117 M140 MB MAX
/ 118 L  Z-5 FMAX M91
/ 119 L  X-500 FMAX M91
/ 120 L  Y-5 R0 FMAX M91
121 CYCL DEF 19.0 PLASZCZ.ROBOCZA
122 CYCL DEF 19.1  A+0  B+0  C+0
123 CYCL DEF 19.0 PLASZCZ.ROBOCZA
124 CYCL DEF 19.1
125 ;
126 ;
127 ;
128 CYCL DEF 19.0 PLASZCZ.ROBOCZA
129 CYCL DEF 19.1  A+90  B+0  C+98.5
130 L  B+Q121  C+Q122 R0 FMAX M126
131 ;
132 L  X+0  Y-7.5 R0 FMAX M3
133 M8
134 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-18   ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
135 CYCL CALL
/ 136 M140 MB MAX
/ 137 L  Z-5 FMAX M91
/ 138 L  X-500 FMAX M91
/ 139 L  Y-5 R0 FMAX M91
140 ;
141 ;
142 ;
143 CYCL DEF 19.0 PLASZCZ.ROBOCZA
144 CYCL DEF 19.1  A+90  B+0  C+141.5
145 L  B+Q121  C+Q122 R0 FMAX M126
146 ;
147 L  X+0  Y-7.5 R0 FMAX M3
148 M8
149 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-18   ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
150 CYCL CALL
151 ;
152 ;
153 CYCL DEF 19.0 PLASZCZ.ROBOCZA
154 CYCL DEF 19.1  A+90  B+0  C+218.5
155 L  B+Q121  C+Q122 R0 FMAX M126
156 ;
157 L  X+0  Y-7.5 R0 FMAX M3
158 M8
159 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-18   ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
160 CYCL CALL
161 ;
162 ;
163 CYCL DEF 19.0 PLASZCZ.ROBOCZA
164 CYCL DEF 19.1  A+90  B+0  C+261.5
165 L  B+Q121  C+Q122 R0 FMAX M126
166 ;
167 L  X+0  Y-7.5 R0 FMAX M3
168 M8
169 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-18   ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
170 CYCL CALL
171 ;
172 ;
173 CYCL DEF 19.0 PLASZCZ.ROBOCZA
174 CYCL DEF 19.1  A+90  B+0  C+338.5
175 L  B+Q121  C+Q122 R0 FMAX M126
176 ;
177 L  X+0  Y-7.5 R0 FMAX M3
178 M8
179 CYCL DEF 200 WIERCENIE ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q201=-18   ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+2    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
180 CYCL CALL
181 M9 M5
182 ;
183 * - NAW
184 STOP
185 TOOL CALL 10 Z S650 ;
186 CYCL DEF 32.0 TOLERANCJA
187 CYCL DEF 32.1 T0.01
188 L  B+0  C+0 F2500 M94
189 CYCL DEF 19.0 PLASZCZ.ROBOCZA
190 CYCL DEF 19.1  A+90  B+0  C+21.5
191 L  B+Q121  C+Q122 R0 FMAX M126
192 L  X+0  Y-7.5 R0 FMAX M3
193 M8
194 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-3    ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
195 CYCL CALL
/ 196 M140 MB MAX
/ 197 L  Z-5 FMAX M91
/ 198 L  X-500 FMAX M91
/ 199 L  Y-5 R0 FMAX M91
200 CYCL DEF 19.0 PLASZCZ.ROBOCZA
201 CYCL DEF 19.1  A+0  B+0  C+0
202 CYCL DEF 19.0 PLASZCZ.ROBOCZA
203 CYCL DEF 19.1
204 ;
205 ;
206 ;
207 CYCL DEF 19.0 PLASZCZ.ROBOCZA
208 CYCL DEF 19.1  A+90  B+0  C+98.5
209 L  B+Q121  C+Q122 R0 FMAX M126
210 ;
211 L  X+0  Y-7.5 R0 FMAX M3
212 M8
213 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-3    ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
214 CYCL CALL
/ 215 M140 MB MAX
/ 216 L  Z-5 FMAX M91
/ 217 L  X-500 FMAX M91
/ 218 L  Y-5 R0 FMAX M91
219 ;
220 ;
221 ;
222 CYCL DEF 19.0 PLASZCZ.ROBOCZA
223 CYCL DEF 19.1  A+90  B+0  C+141.5
224 L  B+Q121  C+Q122 R0 FMAX M126
225 ;
226 L  X+0  Y-7.5 R0 FMAX M3
227 M8
228 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-3    ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
229 CYCL CALL
230 ;
231 ;
232 CYCL DEF 19.0 PLASZCZ.ROBOCZA
233 CYCL DEF 19.1  A+90  B+0  C+218.5
234 L  B+Q121  C+Q122 R0 FMAX M126
235 ;
236 L  X+0  Y-7.5 R0 FMAX M3
237 M8
238 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-3    ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
239 CYCL CALL
240 ;
241 ;
242 CYCL DEF 19.0 PLASZCZ.ROBOCZA
243 CYCL DEF 19.1  A+90  B+0  C+261.5
244 L  B+Q121  C+Q122 R0 FMAX M126
245 ;
246 L  X+0  Y-7.5 R0 FMAX M3
247 M8
248 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-3    ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
249 CYCL CALL
250 ;
251 ;
252 CYCL DEF 19.0 PLASZCZ.ROBOCZA
253 CYCL DEF 19.1  A+90  B+0  C+338.5
254 L  B+Q121  C+Q122 R0 FMAX M126
255 ;
256 L  X+0  Y-7.5 R0 FMAX M3
257 M8
258 CYCL DEF 200 WIERCENIE ~
    Q200=+1    ;BEZPIECZNA WYSOKOSC ~
    Q201=-3    ;GLEBOKOSC ~
    Q206=+30   ;WARTOSC POSUWU WGL. ~
    Q202=+3    ;GLEBOKOSC DOSUWU ~
    Q210=+0    ;PRZER. CZAS.NA GORZE ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS. ~
    Q211=+0    ;PRZERWA CZAS. DNIE
259 CYCL CALL
260 M9 M5
261 ;
262 ;
263 * - GW-M6
264 STOP
265 TOOL CALL 7 Z S120 ;
266 CYCL DEF 32.0 TOLERANCJA
267 CYCL DEF 32.1 T0.01
268 L  B+0  C+0 F2500 M94
269 CYCL DEF 19.0 PLASZCZ.ROBOCZA
270 CYCL DEF 19.1  A+90  B+0  C+21.5
271 L  B+Q121  C+Q122 R0 FMAX M126
272 L  X+0  Y-7.5 R0 FMAX M3
273 M8
274 CYCL DEF 207 GWINTOWANIE GS  ~
    Q200=+4    ;BEZPIECZNA WYSOKOSC ~
    Q201=-16   ;GLEBOKOSC GWINTU ~
    Q239=+1    ;SKOK GWINTU ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS.
275 CYCL CALL
/ 276 M140 MB MAX
/ 277 L  Z-5 FMAX M91
/ 278 L  X-500 FMAX M91
/ 279 L  Y-5 R0 FMAX M91
280 CYCL DEF 19.0 PLASZCZ.ROBOCZA
281 CYCL DEF 19.1  A+0  B+0  C+0
282 CYCL DEF 19.0 PLASZCZ.ROBOCZA
283 CYCL DEF 19.1
284 ;
285 ;
286 ;
287 CYCL DEF 19.0 PLASZCZ.ROBOCZA
288 CYCL DEF 19.1  A+90  B+0  C+98.5
289 L  B+Q121  C+Q122 R0 FMAX M126
290 ;
291 L  X+0  Y-7.5 R0 FMAX M3
292 M8
293 CYCL DEF 207 GWINTOWANIE GS  ~
    Q200=+4    ;BEZPIECZNA WYSOKOSC ~
    Q201=-16   ;GLEBOKOSC GWINTU ~
    Q239=+1    ;SKOK GWINTU ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS.
294 CYCL CALL
/ 295 M140 MB MAX
/ 296 L  Z-5 FMAX M91
/ 297 L  X-500 FMAX M91
/ 298 L  Y-5 R0 FMAX M91
299 ;
300 ;
301 ;
302 CYCL DEF 19.0 PLASZCZ.ROBOCZA
303 CYCL DEF 19.1  A+90  B+0  C+141.5
304 L  B+Q121  C+Q122 R0 FMAX M126
305 ;
306 L  X+0  Y-7.5 R0 FMAX M3
307 M8
308 CYCL DEF 207 GWINTOWANIE GS  ~
    Q200=+4    ;BEZPIECZNA WYSOKOSC ~
    Q201=-16   ;GLEBOKOSC GWINTU ~
    Q239=+1    ;SKOK GWINTU ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS.
309 CYCL CALL
310 ;
311 ;
312 CYCL DEF 19.0 PLASZCZ.ROBOCZA
313 CYCL DEF 19.1  A+90  B+0  C+218.5
314 L  B+Q121  C+Q122 R0 FMAX M126
315 ;
316 L  X+0  Y-7.5 R0 FMAX M3
317 M8
318 CYCL DEF 207 GWINTOWANIE GS  ~
    Q200=+4    ;BEZPIECZNA WYSOKOSC ~
    Q201=-16   ;GLEBOKOSC GWINTU ~
    Q239=+1    ;SKOK GWINTU ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS.
319 CYCL CALL
320 ;
321 ;
322 CYCL DEF 19.0 PLASZCZ.ROBOCZA
323 CYCL DEF 19.1  A+90  B+0  C+261.5
324 L  B+Q121  C+Q122 R0 FMAX M126
325 ;
326 L  X+0  Y-7.5 R0 FMAX M3
327 M8
328 CYCL DEF 207 GWINTOWANIE GS  ~
    Q200=+4    ;BEZPIECZNA WYSOKOSC ~
    Q201=-16   ;GLEBOKOSC GWINTU ~
    Q239=+1    ;SKOK GWINTU ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS.
329 CYCL CALL
330 ;
331 ;
332 CYCL DEF 19.0 PLASZCZ.ROBOCZA
333 CYCL DEF 19.1  A+90  B+0  C+338.5
334 L  B+Q121  C+Q122 R0 FMAX M126
335 ;
336 L  X+0  Y-7.5 R0 FMAX M3
337 M8
338 CYCL DEF 207 GWINTOWANIE GS  ~
    Q200=+4    ;BEZPIECZNA WYSOKOSC ~
    Q201=-16   ;GLEBOKOSC GWINTU ~
    Q239=+1    ;SKOK GWINTU ~
    Q203=+62.5 ;WSPOLRZEDNE POWIERZ. ~
    Q204=+70   ;2-GA BEZPIECZNA WYS.
339 CYCL CALL
340 M9 M5
341 ;
342 ;
343 ;
344 STOP
345 L  Z-5 FMAX M91
346 L  X-500 FMAX M91
347 L  Y-5 R0 FMAX M91
348 ;
349 CYCL DEF 19.0 PLASZCZ.ROBOCZA
350 CYCL DEF 19.1  A+0  B+0  C+0
351 CYCL DEF 19.0 PLASZCZ.ROBOCZA
352 CYCL DEF 19.1
353 L  C+0  B+0 R0 FMAX M94
354 M30
355 END PGM OBROTY-ZAMEK-5OS MM 
