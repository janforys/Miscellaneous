N1 O2 (plytka gorna, als_5326.01)

N2 L100
N3 X-27. Y14.1
N4 X-27. Y-14.1
N5 X27. Y-14.1
N6 X27. Y14.1
N7 M17

N8 L200
N9 X-50. Y0.
N10 X-47. Y0.
N11 X-44. Y0.
N12 X50. Y0.
N13 X47. Y0.
N14 X44. Y0.
N15 M17

N16 L300
N17 X-32. Y21.3
N18 X-32. Y-21.3
N19 X32. Y-21.3
N20 X32. Y21.3
N21 X0. Y36.3
N22 X0. Y-36.3
N23 M17

N24 ( UWAGA NA E! )
N25 L900
N26 G91
N27 G91 X2. Y0 Z0. F200.
N28 G91 G3 I-2. Z-0.2 L19
N29 G3 I-2. L2
N30 G91 X-2.
N31 G90 G0 Z20.
N32 G90
N33 M17

N34 M30

N35 G0 G90 G80 G40 G17

N36 M6 T1 ( trasowanie, nawiercanie 6H7 )
N37 M3 S600
N38 G0 G90 G0 X0 Y0 E1 M8
N39 H1 Z20.
N40 G8
N41 G98 G81 X0 Y0 Z-0.15 R2. F50.L0
N42 L201
N43 G80
N44 G8
N45 G98 G81 X0 Y0 Z-1. R2. F30.L0
N46 L101
N47 G80
N48 G8
N49 G98 G81 X0 Y0 Z-1. R2. F30.L0
N50 L301
N51 G80
N52 G8

N53 M5 M9

N54 M6 T2 ( W-5.8 )
N55 M3 S650
N56 G0 G90 G0 X0 Y0 E1 M8
N57 H2 Z20.
N58 G8
N59 G98 G83 X0 Y0 Z-8. R2. F30. L0 Q2. P0.500
N60 L101
N61 G80
N62 G8

N63 M5 M9

N64 M6 T5 ( R-6 )
N65 M3 S150
N66 G0 G90 G0 X0 Y0 E1 M8
N67 H5 Z20.
N68 G8
N69 G98 G85 X0 Y0 Z-8. R2. F30. L0
N70 L101
N71 G80
N72 G8

N73 M5 M9

N74 M6 T4 ( W-5.5 )
N75 M3 S700
N76 G0 G90 G0 X0 Y0 E1 M8
N77 H4 Z20.
N78 G8
N79 G98 G83 X0 Y0 Z-8. R2. F30. L0 Q2. P0.500
N80 L301
N81 G80
N82 G8

N83 M5 M9

N84 G0 Z50.
N85 G90 H0 Z0.

N86 G0 G17 G40 G80 G90 H0 Z0

N87 T3 M6 ( FP-5-frezowanie fi9 )
N88 E1
N89 X0 Y0 S2600 M3
N90 Z50. H3 M8
N91 G40
N92 X-32. Y21.3 ( 1 WSPOLRZ. )
N93 G0 Z0
N94 L901
N95 G0 Z50.

N96 X-32. Y-21.3 ( 2 WSPOLRZ. )
N97 G0 Z0
N98 L901
N99 G0 Z50.

N100 X32. Y-21.3 ( 3 WSPOLRZ. )
N101 G0 Z0
N102 L901
N103 G0 Z50.

N104 X32. Y21.3 ( 4 WSPOLRZ. )
N105 G0 Z0
N106 L901
N107 G0 Z50.

N108 X0. Y36.3 ( 5 WSPOLRZ. )
N109 G0 Z0
N110 L901
N111 G0 Z50.

N112 X0. Y-36.3 ( 6 WSPOLRZ. )
N113 G0 Z0
N114 L901
N115 G0 Z50.

N116 M5 M9

N117 G0 Z50.
N118 G0 G90 H0 Z0.

N119 M1 ( opcjonalny stop )

N120 G0 G90 G80 G40 G17

N121 M6 T6 ( FAZ-16 )
N122 M3 S600
N123 G0 G90 G0 X0 Y0 E1 M8
N124 H6 Z20.
N125 G8
N126 G98 G81 X0 Y0 Z-4.55 R2. F50. L0
N127 L301
N128 G80
N129 G8
N130 G98 G81 X0 Y0 Z-3.1 R2. F50. L0
N131 L101
N132 G80
N133 G8

N134 M5 M9

N135 G0 Z50.
N136 G90 H0 Z0.
N137 E0 X0. Y245.
N138 M2