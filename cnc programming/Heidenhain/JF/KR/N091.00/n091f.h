0  BEGIN PGM n091f MM 
1  ;MASTERCAM - X9
2  ;MCX FILE  -~
 Z:\00NZL\KR\KRN09100\MCX\KOEK_MOCUJCY_ZAPFEN_N091_FASOLKA_MIKRON.MCX-9
3  ;POST      - MPPOSTABILITY_AVIA_VMC_800_4X.PST
4  ;PROGRAM   - n091f.h
5  ;DATE      - 2018.02.01
6  ;TIME      - 8:57 AM
7  ;2   - NAWIERTAK FI 4       - D4.000mm
8  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
9  M126
10 M129
11 PLANE RESET TURN FMAX
12 ;
13 * - NAWIERTAK FI 4
14 TOOL CALL 8 Z S1000 DL+0.1
15 TOOL DEF 3
16 * - FAZUJE FASOLKE
17 ;NAWIERTAK FI 4  TOOL - 2  DIA. OFF. - 2  LEN. - 2  DIA. - 4.
18 ;HOLDER - DEFAULT HOLDER
19 CYCL DEF 32.0 TOLERANCJA
20 CYCL DEF 32.1 T0.003
21 CYCL DEF 32.2 HSC-MODE:0
/ 22 L  A+0 FMAX
23 M3
24 L  X-1.92  Y-16.5 FMAX M8
25 L  Z+15 FMAX
26 L  Z+2 FMAX
27 L  Z-1.58 F50
28 L  Y-17.5
29 CC  X+0  Y-17.5
30 C  X+1.92 DR+
31 L  Y-16.5
32 CC  X+0  Y-16.5
33 C  X-1.92 DR+
34 L  Z+15 FMAX
35 CYCL DEF 32.0 TOLERANCJA
36 CYCL DEF 32.1
37 M5
38 L  Z-15 R0 FMAX M91 M9
39 L  X+273  Y+529 R0 FMAX M91
/ 40 L  A+0 FMAX M91
/ 41 M2
42 END PGM n091f MM 
