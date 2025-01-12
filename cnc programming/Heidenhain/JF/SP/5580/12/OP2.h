0  BEGIN PGM OP2 MM 
1  BLK FORM 0.1 Z  X-33  Y-45.3  Z-12
2  BLK FORM 0.2  X+33  Y+0  Z+6
3  ;
4  ; -- BAZA Y NA SZTYWNEJ SZCZECE --
5  ; -- BAZA X NA SRODKU --
6  ; -- BAZA Z NA PODKLADZIE (-5.6mm) --
7  ;
8  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
9  CYCL DEF 7.0 PUNKT BAZOWY
10 CYCL DEF 7.1 IZ+0
11 L  X+0  Y+0 FMAX
12 ;
13 * - SONDA
/ 14 STOP
15 TOOL CALL 30 Z S50
16 TOOL DEF 10
17 TCH PROBE 409 PKT BAZ.SR.MOSTKA ~
    Q321=+0    ;SRODEK W 1-SZEJ OSI ~
    Q322=-27   ;SRODEK W 2-SZEJ OSI ~
    Q311=+68   ;SZEROKOSC MOSTKA ~
    Q272=+1    ;OS POMIAROWA ~
    Q261=+3.5  ;WYSOKOSC POMIARU ~
    Q320=+15   ;BEZPIECZNA WYSOKOSC ~
    Q260=+20   ;BEZPIECZNA WYSOKOSC ~
    Q305=+1    ;NR W TABELI ~
    Q405=+0    ;PUNKT ODNIESIENIA ~
    Q303=+1    ;PRZEKAZ DANYCH POM. ~
    Q381=+0    ;PROBKOW. NA OSI TS ~
    Q382=+0    ;1.WSPOL. DLA OSI TS ~
    Q383=+0    ;2.WSPOLRZ.DLA OSI TS ~
    Q384=+0    ;3. WSPOL. DLA OSI TS ~
    Q333=+0    ;PUNKT ODNIESIENIA
18 ;
19 CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
20 ;
21 * - PLAN 5.6 -ZGR
22 TOOL CALL 10 Z S600 F240
23 TOOL DEF 10
24 L  Z+300 R0 FMAX M3 M8
25 CYCL DEF 232 FREZOW.PLANOWE ~
    Q389=+0    ;STRATEGIA ~
    Q225=-33   ;PKT.STARTU 1SZEJ OSI ~
    Q226=+5    ;PKT.STARTU 2GIEJ OSI ~
    Q227=+5.5  ;PKT.STARTU 3CIEJ OSI ~
    Q386=+0.1  ;PUNKT KONCOWY 3. OSI ~
    Q218=+66   ;DLUG. 1-SZEJ STRONY ~
    Q219=-60   ;DLUG. 2-GIEJ STRONY ~
    Q202=+1    ;MAX. GLEB. DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q370=+0.9  ;MAX. NAKLADANIE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q385= AUTO ;POSUW OBR.WYKAN. ~
    Q253= MAX ;PREDK. POS. ZAGLEB. ~
    Q200=+7    ;BEZPIECZNA WYSOKOSC ~
    Q357=+5    ;ODST. BEZP. Z BOKU ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
26 CYCL CALL
27 L  Z+300 R0 FMAX
28 ;
29 * - ZANIZENIE 1.3 -ZGR
30 TOOL CALL 10 Z S600 F240 DL+0
31 TOOL DEF 18
32 L  Z+300 R0 FMAX M3 M8
33 CYCL DEF 251 KIESZEN PROSTOKATNA ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q218=+85   ;DLUG. 1-SZEJ STRONY ~
    Q219=+41.7 ;DLUG. 2-GIEJ STRONY ~
    Q220=+0    ;PROMIEN NAROZA ~
    Q368=+0.01 ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE KIESZENI ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-1.2  ;GLEBOKOSC ~
    Q202=+0.6  ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1.4  ;ZACHODZENIE TOROW ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385= AUTO ;POSUW OBR.WYKAN.
/ 34 L  X+0  Y-24.65 R0 FMAX M99
35 L  X+0  Y-25.65 R0 FMAX M99
36 L  Z+300 R0 FMAX
37 M5 M9
38 ;
39 * - PLAN 5.6 -WYK
40 TOOL CALL 18 Z S2000 F200
41 TOOL DEF 18
42 L  Z+300 R0 FMAX M3 M8
43 CYCL DEF 232 FREZOW.PLANOWE ~
    Q389=+2    ;STRATEGIA ~
    Q225=-33   ;PKT.STARTU 1SZEJ OSI ~
    Q226=+0    ;PKT.STARTU 2GIEJ OSI ~
    Q227=+0.1  ;PKT.STARTU 3CIEJ OSI ~
    Q386=+0    ;PUNKT KONCOWY 3. OSI ~
    Q218=+66   ;DLUG. 1-SZEJ STRONY ~
    Q219=-6    ;DLUG. 2-GIEJ STRONY ~
    Q202=+0.2  ;MAX. GLEB. DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q370=+1    ;MAX. NAKLADANIE ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q385= AUTO ;POSUW OBR.WYKAN. ~
    Q253= MAX ;PREDK. POS. ZAGLEB. ~
    Q200=+2    ;BEZPIECZNA WYSOKOSC ~
    Q357=+5    ;ODST. BEZP. Z BOKU ~
    Q204=+50   ;2-GA BEZPIECZNA WYS.
44 L  X+0  Y+0 R0 FMAX M99
45 L  Z+300 R0 FMAX
46 ;
47 * - ZANIZENIE 1.3 -WYK
48 TOOL CALL 18 Z S2000 F180 DL+0.03 DR-0.05
49 TOOL DEF 30
50 L  Z+300 R0 FMAX M3 M8
51 CYCL DEF 251 KIESZEN PROSTOKATNA ~
    Q215=+0    ;RODZAJ OBROBKI ~
    Q218=+85   ;DLUG. 1-SZEJ STRONY ~
    Q219=+41.7 ;DLUG. 2-GIEJ STRONY ~
    Q220=+0    ;PROMIEN NAROZA ~
    Q368=+0.01 ;NADDATEK NA STRONE ~
    Q224=+0    ;KAT OBROTU ~
    Q367=+0    ;POLOZENIE KIESZENI ~
    Q207= AUTO ;POSUW FREZOWANIA ~
    Q351=+1    ;RODZAJ FREZOWANIA ~
    Q201=-1.3  ;GLEBOKOSC ~
    Q202=+1.3  ;GLEBOKOSC DOSUWU ~
    Q369=+0    ;NADDATEK NA DNIE ~
    Q206= AUTO ;WARTOSC POSUWU WGL. ~
    Q338=+0    ;DOSUW - OBR.WYKONCZ. ~
    Q200=+0.5  ;BEZPIECZNA WYSOKOSC ~
    Q203=+0    ;WSPOLRZEDNE POWIERZ. ~
    Q204=+50   ;2-GA BEZPIECZNA WYS. ~
    Q370=+1.4  ;ZACHODZENIE TOROW ~
    Q366=+1    ;ZAGLEBIANIE ~
    Q385= AUTO ;POSUW OBR.WYKAN.
52 L  X+0  Y-25.55 R0 FMAX M99
53 L  Z+300 R0 FMAX
54 M5 M9
55 ;
56 ;
57 L  Z-5 R0 FMAX M91
58 L  X+260  Y+535 R0 FMAX M91
59 M30
60 ;
61 END PGM OP2 MM 
