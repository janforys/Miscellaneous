0  BEGIN PGM n091 MM 
1  BLK FORM 0.1 Z  X-35  Y-35  Z-15
2  BLK FORM 0.2  X+35  Y+35  Z+0.1
3  ;MASTERCAM - X9
4  ;MCX FILE  -~
 Z:\00NZL\KR\KRN09100\MCX\KOEK_MOCUJCY_ZAPFEN_N091_FASOLKA_MIKRON.MCX-9
5  ;POST      - MPPOSTABILITY_AVIA_VMC_800_4X.PST
6  ;PROGRAM   - N091.H
7  ;DATE      - 2018.02.01
8  ;TIME      - 8:56 AM
9  ;1   - FREZ PLASKI FI 5     - D5.000mm
10 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
11 M126
12 M129
13 PLANE RESET TURN FMAX
14 ;
15 * - FREZ PLASKI FI 5
16 TOOL CALL 2 Z S3800 DL-0.2
17 TOOL DEF 16
18 * - FASOLKA FI6 ZGRUBNIE
19 ;FREZ PLASKI FI 5  TOOL - 1  DIA. OFF. - 1  LEN. - 1  DIA. - 5.
20 ;HOLDER - DEFAULT HOLDER
21 CYCL DEF 32.0 TOLERANCJA
22 CYCL DEF 32.1 T0.003
23 CYCL DEF 32.2 HSC-MODE:0
/ 24 L  A+0 FMAX
25 M3
26 L  X-0.4  Y-16.5 FMAX M8
27 L  Z+15 FMAX
28 L  Z+6 FMAX
29 L  Z+1 F60
30 L  Y-17.5  Z+0.956 F115
31 CC  X+0  Y-17.5
32 CP IPA+180  Z+0.9 DR+
33 L  Y-16.5  Z+0.856
34 CC  X+0  Y-16.5
35 CP IPA+180  Z+0.8 DR+
36 L  Y-17.5  Z+0.756
37 CC  X+0  Y-17.5
38 CP IPA+180  Z+0.7 DR+
39 L  Y-16.5  Z+0.656
40 CC  X+0  Y-16.5
41 CP IPA+180  Z+0.6 DR+
42 L  Y-17.5  Z+0.556
43 CC  X+0  Y-17.5
44 CP IPA+180  Z+0.5 DR+
45 L  Y-16.5  Z+0.456
46 CC  X+0  Y-16.5
47 CP IPA+180  Z+0.4 DR+
48 L  Y-17.5  Z+0.356
49 CC  X+0  Y-17.5
50 CP IPA+180  Z+0.3 DR+
51 L  Y-16.5  Z+0.256
52 CC  X+0  Y-16.5
53 CP IPA+180  Z+0.2 DR+
54 L  Y-17.5  Z+0.156
55 CC  X+0  Y-17.5
56 CP IPA+180  Z+0.1 DR+
57 L  Y-16.5  Z+0.056
58 CC  X+0  Y-16.5
59 CP IPA+180  Z+0 DR+
60 L  Y-17.5  Z-0.044
61 CC  X+0  Y-17.5
62 CP IPA+180  Z-0.1 DR+
63 L  Y-16.5  Z-0.144
64 CC  X+0  Y-16.5
65 CP IPA+180  Z-0.2 DR+
66 L  Y-17.5  Z-0.244
67 CC  X+0  Y-17.5
68 CP IPA+180  Z-0.3 DR+
69 L  Y-16.5  Z-0.344
70 CC  X+0  Y-16.5
71 CP IPA+180  Z-0.4 DR+
72 L  Y-17.5  Z-0.444
73 CC  X+0  Y-17.5
74 CP IPA+180  Z-0.5 DR+
75 L  Y-16.5  Z-0.544
76 CC  X+0  Y-16.5
77 CP IPA+180  Z-0.6 DR+
78 L  Y-17.5  Z-0.644
79 CC  X+0  Y-17.5
80 CP IPA+180  Z-0.7 DR+
81 L  Y-16.5  Z-0.744
82 CC  X+0  Y-16.5
83 CP IPA+180  Z-0.8 DR+
84 L  Y-17.5  Z-0.844
85 CC  X+0  Y-17.5
86 CP IPA+180  Z-0.9 DR+
87 L  Y-16.5  Z-0.944
88 CC  X+0  Y-16.5
89 CP IPA+180  Z-1 DR+
90 L  Y-17.5  Z-1.044
91 CC  X+0  Y-17.5
92 CP IPA+180  Z-1.1 DR+
93 L  Y-16.5  Z-1.144
94 CC  X+0  Y-16.5
95 CP IPA+180  Z-1.2 DR+
96 L  Y-17.5  Z-1.244
97 CC  X+0  Y-17.5
98 CP IPA+180  Z-1.3 DR+
99 L  Y-16.5  Z-1.344
100 CC  X+0  Y-16.5
101 CP IPA+180  Z-1.4 DR+
102 L  Y-17.5  Z-1.444
103 CC  X+0  Y-17.5
104 CP IPA+180  Z-1.5 DR+
105 L  Y-16.5  Z-1.544
106 CC  X+0  Y-16.5
107 CP IPA+180  Z-1.6 DR+
108 L  Y-17.5  Z-1.644
109 CC  X+0  Y-17.5
110 CP IPA+180  Z-1.7 DR+
111 L  Y-16.5  Z-1.744
112 CC  X+0  Y-16.5
113 CP IPA+180  Z-1.8 DR+
114 L  Y-17.5  Z-1.844
115 CC  X+0  Y-17.5
116 CP IPA+180  Z-1.9 DR+
117 L  Y-16.5  Z-1.944
118 CC  X+0  Y-16.5
119 CP IPA+180  Z-2 DR+
120 L  Y-17.5  Z-2.044
121 CC  X+0  Y-17.5
122 CP IPA+180  Z-2.1 DR+
123 L  Y-16.5  Z-2.144
124 CC  X+0  Y-16.5
125 CP IPA+180  Z-2.2 DR+
126 L  Y-17.5  Z-2.244
127 CC  X+0  Y-17.5
128 CP IPA+180  Z-2.3 DR+
129 L  Y-16.5  Z-2.344
130 CC  X+0  Y-16.5
131 CP IPA+180  Z-2.4 DR+
132 L  Y-17.5  Z-2.444
133 CC  X+0  Y-17.5
134 CP IPA+180  Z-2.5 DR+
135 L  Y-16.5  Z-2.544
136 CC  X+0  Y-16.5
137 CP IPA+180  Z-2.6 DR+
138 L  Y-17.5  Z-2.644
139 CC  X+0  Y-17.5
140 CP IPA+180  Z-2.7 DR+
141 L  Y-16.5  Z-2.744
142 CC  X+0  Y-16.5
143 CP IPA+180  Z-2.8 DR+
144 L  Y-17.5  Z-2.844
145 CC  X+0  Y-17.5
146 CP IPA+180  Z-2.9 DR+
147 L  Y-16.5  Z-2.944
148 CC  X+0  Y-16.5
149 CP IPA+180  Z-3 DR+
150 L  Y-17.5  Z-3.044
151 CC  X+0  Y-17.5
152 CP IPA+180  Z-3.1 DR+
153 L  Y-16.5  Z-3.144
154 CC  X+0  Y-16.5
155 CP IPA+180  Z-3.2 DR+
156 L  Y-17.5  Z-3.244
157 CC  X+0  Y-17.5
158 CP IPA+180  Z-3.3 DR+
159 L  Y-16.5  Z-3.344
160 CC  X+0  Y-16.5
161 CP IPA+180  Z-3.4 DR+
162 L  Y-17.5  Z-3.444
163 CC  X+0  Y-17.5
164 CP IPA+180  Z-3.5 DR+
165 L  Y-16.5  Z-3.544
166 CC  X+0  Y-16.5
167 CP IPA+180  Z-3.6 DR+
168 L  Y-17.5  Z-3.644
169 CC  X+0  Y-17.5
170 CP IPA+180  Z-3.7 DR+
171 L  Y-16.5  Z-3.744
172 CC  X+0  Y-16.5
173 CP IPA+180  Z-3.8 DR+
174 L  Y-17.5  Z-3.844
175 CC  X+0  Y-17.5
176 CP IPA+180  Z-3.9 DR+
177 L  Y-16.5  Z-3.944
178 CC  X+0  Y-16.5
179 CP IPA+180  Z-4 DR+
180 L  Y-17.5  Z-4.044
181 CC  X+0  Y-17.5
182 CP IPA+180  Z-4.1 DR+
183 L  Y-16.5  Z-4.144
184 CC  X+0  Y-16.5
185 CP IPA+180  Z-4.2 DR+
186 L  Y-17.5  Z-4.244
187 CC  X+0  Y-17.5
188 CP IPA+180  Z-4.3 DR+
189 L  Y-16.5  Z-4.344
190 CC  X+0  Y-16.5
191 CP IPA+180  Z-4.4 DR+
192 L  Y-17.5  Z-4.444
193 CC  X+0  Y-17.5
194 CP IPA+180  Z-4.5 DR+
195 L  Y-16.5  Z-4.544
196 CC  X+0  Y-16.5
197 CP IPA+180  Z-4.6 DR+
198 L  Y-17.5  Z-4.644
199 CC  X+0  Y-17.5
200 CP IPA+180  Z-4.7 DR+
201 L  Y-16.5  Z-4.744
202 CC  X+0  Y-16.5
203 CP IPA+180  Z-4.8 DR+
204 L  Y-17.5  Z-4.844
205 CC  X+0  Y-17.5
206 CP IPA+180  Z-4.9 DR+
207 L  Y-16.5  Z-4.944
208 CC  X+0  Y-16.5
209 CP IPA+180  Z-5 DR+
210 L  Y-17.5  Z-5.044
211 CC  X+0  Y-17.5
212 CP IPA+180  Z-5.1 DR+
213 L  Y-16.5  Z-5.144
214 CC  X+0  Y-16.5
215 CP IPA+180  Z-5.2 DR+
216 L  Y-17.5  Z-5.244
217 CC  X+0  Y-17.5
218 CP IPA+180  Z-5.3 DR+
219 L  Y-16.5  Z-5.344
220 CC  X+0  Y-16.5
221 CP IPA+180  Z-5.4 DR+
222 L  Y-17.5  Z-5.444
223 CC  X+0  Y-17.5
224 CP IPA+180  Z-5.5 DR+
225 L  Y-16.5  Z-5.544
226 CC  X+0  Y-16.5
227 CP IPA+180  Z-5.6 DR+
228 L  Y-17.5  Z-5.644
229 CC  X+0  Y-17.5
230 CP IPA+180  Z-5.7 DR+
231 L  Y-16.5  Z-5.744
232 CC  X+0  Y-16.5
233 CP IPA+180  Z-5.8 DR+
234 L  Y-17.5  Z-5.844
235 CC  X+0  Y-17.5
236 CP IPA+180  Z-5.9 DR+
237 L  Y-16.5  Z-5.944
238 CC  X+0  Y-16.5
239 CP IPA+180  Z-6 DR+
240 L  Y-17.5  Z-6.044
241 CC  X+0  Y-17.5
242 CP IPA+180  Z-6.1 DR+
243 L  Y-16.5  Z-6.144
244 CC  X+0  Y-16.5
245 CP IPA+180  Z-6.2 DR+
246 L  Y-17.5  Z-6.244
247 CC  X+0  Y-17.5
248 CP IPA+180  Z-6.3 DR+
249 L  Y-16.5  Z-6.344
250 CC  X+0  Y-16.5
251 CP IPA+180  Z-6.4 DR+
252 L  Y-17.5  Z-6.444
253 CC  X+0  Y-17.5
254 CP IPA+180  Z-6.5 DR+
255 L  Y-16.5  Z-6.544
256 CC  X+0  Y-16.5
257 CP IPA+180  Z-6.6 DR+
258 L  Y-17.5  Z-6.644
259 CC  X+0  Y-17.5
260 CP IPA+180  Z-6.7 DR+
261 L  Y-16.5  Z-6.744
262 CC  X+0  Y-16.5
263 CP IPA+180  Z-6.8 DR+
264 L  Y-17.5  Z-6.844
265 CC  X+0  Y-17.5
266 CP IPA+180  Z-6.9 DR+
267 L  Y-16.5  Z-6.944
268 CC  X+0  Y-16.5
269 CP IPA+180  Z-7 DR+
270 L  Y-17.5  Z-7.044
271 CC  X+0  Y-17.5
272 CP IPA+180  Z-7.1 DR+
273 L  Y-16.5  Z-7.144
274 CC  X+0  Y-16.5
275 CP IPA+180  Z-7.2 DR+
276 L  Y-17.5  Z-7.244
277 CC  X+0  Y-17.5
278 CP IPA+180  Z-7.3 DR+
279 L  Y-16.5  Z-7.344
280 CC  X+0  Y-16.5
281 CP IPA+180  Z-7.4 DR+
282 L  Y-17.5  Z-7.444
283 CC  X+0  Y-17.5
284 CP IPA+180  Z-7.5 DR+
285 L  Y-16.5  Z-7.544
286 CC  X+0  Y-16.5
287 CP IPA+180  Z-7.6 DR+
288 L  Y-17.5  Z-7.644
289 CC  X+0  Y-17.5
290 CP IPA+180  Z-7.7 DR+
291 L  Y-16.5  Z-7.744
292 CC  X+0  Y-16.5
293 CP IPA+180  Z-7.8 DR+
294 L  Y-17.5  Z-7.844
295 CC  X+0  Y-17.5
296 CP IPA+180  Z-7.9 DR+
297 L  Y-16.5  Z-7.944
298 CC  X+0  Y-16.5
299 CP IPA+180  Z-8 DR+
300 L  Y-17.5  Z-8.044
301 CC  X+0  Y-17.5
302 CP IPA+180  Z-8.1 DR+
303 L  Y-16.5  Z-8.144
304 CC  X+0  Y-16.5
305 CP IPA+180  Z-8.2 DR+
306 L  Y-17.5  Z-8.244
307 CC  X+0  Y-17.5
308 CP IPA+180  Z-8.3 DR+
309 L  Y-16.5  Z-8.344
310 CC  X+0  Y-16.5
311 CP IPA+180  Z-8.4 DR+
312 L  Y-17.5  Z-8.444
313 CC  X+0  Y-17.5
314 CP IPA+180  Z-8.5 DR+
315 L  Y-16.5  Z-8.544
316 CC  X+0  Y-16.5
317 CP IPA+180  Z-8.6 DR+
318 L  Y-17.5  Z-8.644
319 CC  X+0  Y-17.5
320 CP IPA+180  Z-8.7 DR+
321 L  Y-16.5  Z-8.744
322 CC  X+0  Y-16.5
323 CP IPA+180  Z-8.8 DR+
324 L  Y-17.5  Z-8.844
325 CC  X+0  Y-17.5
326 CP IPA+180  Z-8.9 DR+
327 L  Y-16.5  Z-8.944
328 CC  X+0  Y-16.5
329 CP IPA+180  Z-9 DR+
330 L  Y-17.5  Z-9.044
331 CC  X+0  Y-17.5
332 CP IPA+180  Z-9.1 DR+
333 L  Y-16.5  Z-9.144
334 CC  X+0  Y-16.5
335 CP IPA+180  Z-9.2 DR+
336 L  Y-17.5  Z-9.244
337 CC  X+0  Y-17.5
338 CP IPA+180  Z-9.3 DR+
339 L  Y-16.5  Z-9.344
340 CC  X+0  Y-16.5
341 CP IPA+180  Z-9.4 DR+
342 L  Y-17.5  Z-9.444
343 CC  X+0  Y-17.5
344 CP IPA+180  Z-9.5 DR+
345 L  Y-16.5  Z-9.544
346 CC  X+0  Y-16.5
347 CP IPA+180  Z-9.6 DR+
348 L  Y-17.5  Z-9.644
349 CC  X+0  Y-17.5
350 CP IPA+180  Z-9.7 DR+
351 L  Y-16.5  Z-9.744
352 CC  X+0  Y-16.5
353 CP IPA+180  Z-9.8 DR+
354 L  Y-17.5  Z-9.844
355 CC  X+0  Y-17.5
356 CP IPA+180  Z-9.9 DR+
357 L  Y-16.5  Z-9.944
358 CC  X+0  Y-16.5
359 CP IPA+180  Z-10 DR+
360 L  Y-17.5  Z-10.044
361 CC  X+0  Y-17.5
362 CP IPA+180  Z-10.1 DR+
363 L  Y-16.5  Z-10.144
364 CC  X+0  Y-16.5
365 CP IPA+180  Z-10.2 DR+
366 L  Y-17.5  Z-10.244
367 CC  X+0  Y-17.5
368 CP IPA+180  Z-10.3 DR+
369 L  Y-16.5  Z-10.344
370 CC  X+0  Y-16.5
371 CP IPA+180  Z-10.4 DR+
372 L  Y-17.5  Z-10.444
373 CC  X+0  Y-17.5
374 CP IPA+180  Z-10.5 DR+
375 L  Y-16.5  Z-10.544
376 CC  X+0  Y-16.5
377 CP IPA+180  Z-10.6 DR+
378 L  Y-17.5  Z-10.644
379 CC  X+0  Y-17.5
380 CP IPA+180  Z-10.7 DR+
381 L  Y-16.5  Z-10.744
382 CC  X+0  Y-16.5
383 CP IPA+180  Z-10.8 DR+
384 L  Y-17.5  Z-10.844
385 CC  X+0  Y-17.5
386 CP IPA+180  Z-10.9 DR+
387 L  Y-16.5  Z-10.944
388 CC  X+0  Y-16.5
389 CP IPA+180  Z-11 DR+
390 L  Y-17.5  Z-11.044
391 CC  X+0  Y-17.5
392 CP IPA+180  Z-11.1 DR+
393 L  Y-16.5  Z-11.144
394 CC  X+0  Y-16.5
395 CP IPA+180  Z-11.2 DR+
396 L  Y-17.5  Z-11.244
397 CC  X+0  Y-17.5
398 CP IPA+180  Z-11.3 DR+
399 L  Y-16.5  Z-11.344
400 CC  X+0  Y-16.5
401 CP IPA+180  Z-11.4 DR+
402 L  Y-17.5  Z-11.444
403 CC  X+0  Y-17.5
404 CP IPA+180  Z-11.5 DR+
405 L  Y-16.5  Z-11.544
406 CC  X+0  Y-16.5
407 CP IPA+180  Z-11.6 DR+
408 L  Y-17.5  Z-11.644
409 CC  X+0  Y-17.5
410 CP IPA+180  Z-11.7 DR+
411 L  Y-16.5  Z-11.744
412 CC  X+0  Y-16.5
413 CP IPA+180  Z-11.8 DR+
414 L  Y-17.5  Z-11.844
415 CC  X+0  Y-17.5
416 CP IPA+180  Z-11.9 DR+
417 L  Y-16.5  Z-11.944
418 CC  X+0  Y-16.5
419 CP IPA+180  Z-12 DR+
420 L  Y-17.5  Z-12.044
421 CC  X+0  Y-17.5
422 CP IPA+180  Z-12.1 DR+
423 L  Y-16.5  Z-12.144
424 CC  X+0  Y-16.5
425 CP IPA+180  Z-12.2 DR+
426 L  Y-17.5  Z-12.244
427 CC  X+0  Y-17.5
428 CP IPA+180  Z-12.3 DR+
429 L  Y-16.5  Z-12.344
430 CC  X+0  Y-16.5
431 CP IPA+180  Z-12.4 DR+
432 L  Y-17.5  Z-12.444
433 CC  X+0  Y-17.5
434 CP IPA+180  Z-12.5 DR+
435 L  Y-16.5  Z-12.544
436 CC  X+0  Y-16.5
437 CP IPA+180  Z-12.6 DR+
438 L  Y-17.5  Z-12.644
439 CC  X+0  Y-17.5
440 CP IPA+180  Z-12.7 DR+
441 L  Y-16.5  Z-12.744
442 CC  X+0  Y-16.5
443 CP IPA+180  Z-12.8 DR+
444 L  Y-17.5  Z-12.844
445 CC  X+0  Y-17.5
446 CP IPA+180  Z-12.9 DR+
447 L  Y-16.5  Z-12.944
448 CC  X+0  Y-16.5
449 CP IPA+180  Z-13 DR+
450 L  Y-17.5  Z-13.044
451 CC  X+0  Y-17.5
452 CP IPA+180  Z-13.1 DR+
453 L  Y-16.5  Z-13.144
454 CC  X+0  Y-16.5
455 CP IPA+180  Z-13.2 DR+
456 L  Y-17.5  Z-13.244
457 CC  X+0  Y-17.5
458 CP IPA+180  Z-13.3 DR+
459 L  Y-16.5  Z-13.344
460 CC  X+0  Y-16.5
461 CP IPA+180  Z-13.4 DR+
462 L  Y-17.5  Z-13.444
463 CC  X+0  Y-17.5
464 CP IPA+180  Z-13.5 DR+
465 L  Y-16.5  Z-13.544
466 CC  X+0  Y-16.5
467 CP IPA+180  Z-13.6 DR+
468 L  Y-17.5  Z-13.644
469 CC  X+0  Y-17.5
470 CP IPA+180  Z-13.7 DR+
471 L  Y-16.5  Z-13.744
472 CC  X+0  Y-16.5
473 CP IPA+180  Z-13.8 DR+
474 L  Y-17.5  Z-13.844
475 CC  X+0  Y-17.5
476 CP IPA+180  Z-13.9 DR+
477 L  Y-16.5  Z-13.944
478 CC  X+0  Y-16.5
479 CP IPA+180  Z-14 DR+
480 L  Y-17.5  Z-14.044
481 CC  X+0  Y-17.5
482 CP IPA+180  Z-14.1 DR+
483 L  Y-16.5  Z-14.144
484 CC  X+0  Y-16.5
485 CP IPA+180  Z-14.2 DR+
486 L  Y-17.5  Z-14.244
487 CC  X+0  Y-17.5
488 CP IPA+180  Z-14.3 DR+
489 L  Y-16.5  Z-14.344
490 CC  X+0  Y-16.5
491 CP IPA+180  Z-14.4 DR+
492 L  Y-17.5  Z-14.444
493 CC  X+0  Y-17.5
494 CP IPA+180  Z-14.5 DR+
495 L  Y-16.5  Z-14.544
496 CC  X+0  Y-16.5
497 CP IPA+180  Z-14.6 DR+
498 L  Y-17.5  Z-14.644
499 CC  X+0  Y-17.5
500 CP IPA+180  Z-14.7 DR+
501 L  Y-16.5  Z-14.744
502 CC  X+0  Y-16.5
503 CP IPA+180  Z-14.8 DR+
504 L  Y-17.5  Z-14.844
505 CC  X+0  Y-17.5
506 CP IPA+180  Z-14.9 DR+
507 L  Y-16.5  Z-14.944
508 CC  X+0  Y-16.5
509 CP IPA+180  Z-15 DR+
510 L  Y-17.5  Z-15.044
511 CC  X+0  Y-17.5
512 CP IPA+180  Z-15.1 DR+
513 L  Y-16.5
514 CC  X+0  Y-16.5
515 C  X-0.4 DR+
516 L  Y-17.5
517 CC  X+0  Y-17.5
518 C  X+0.4 DR+
519 L  Z+15 FMAX
520 CYCL DEF 32.0 TOLERANCJA
521 CYCL DEF 32.1
522 M5
523 L  Z-15 R0 FMAX M91 M9
524 L  X+273  Y+529 R0 FMAX M91
/ 525 L  A+0 FMAX M91
/ 526 M2
527 END PGM n091 MM 
