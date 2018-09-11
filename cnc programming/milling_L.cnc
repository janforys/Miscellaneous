/Dodaj materiał
$AddRegPart 1, 1, 1,
/Zaloz narzedzie
T1 M06
/Punkt poczatkowy
G92 X0 Y22 Z10
/Przesun wrzeciono do pozycji
G00 X3 Y-3 Z2
/Rozpocznij ruch liniowy
G01 Z-0.5 F50 S2500 M03 
X8
Y-10
/Interpolacja kołowa CCW
G03 X10 Y-12 I2 J0
/Powroc do ruchu liniowego
G01 X14
/Interpolacja kołowa CW
G02 X16 Y-14 I0 J-2
/Powroc do ruchu liniowego
G01 Y-18 
X3
Y-3
/Opcja stop
M01 
/Zmien narzedzie
T2 M06 
/Przesun glowice do pozycji
G00 X14 Y-14 Z2
/Wywierć otwor
G81 Z-1 M03 
/Dwa kolejne otwory
X12
X10
/Zatrzymaj wrzeciono
M05 
/Powrót głowicy
G28
/Zakoncz program
M30 




