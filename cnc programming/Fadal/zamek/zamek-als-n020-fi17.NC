N1 O3 ( zamek-INTERP )
N2 ( UWAGA NA E! )
N3 L900
N4 G91
N5 G91 X4.5 Y0 Z0 F80.
N6 G91 G3 I-4.5 Z-0.5 L14
N7 G3 I-4.5 L2
N8 G91 X-4.5
N9 G90 G0 Z20.
N10 G90
N11 M17
N12 M30

N13 G0 G17 G40 G80 G90 H0 Z0

N14 T6 M6 ( FP-8 )
N15 E1
N16 X0 Y0 S2000 M3
N17 Z50. H6 M8
N18 G40
N19 X-12.5 Y11. ( 1 WSPOLRZ. )
N20 G0 Z0
N21 L901
N22 G0 Z50.
N23 X12.5 Y11. ( 2 WSPOLRZ. )
N24 G0 Z0
N25 L901
N26 G0 Z50.


N27 M5
N28 G0 G90 H0 Z0
N29 X0. Y250. E0
N30 M2
