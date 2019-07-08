$AddRegPart 1, 1, 1

/Wybierz narzedzie i zmien je
T1 M06

/Ustaw punkt poczatkowy
G92 X1 Y6 Z2

/Przesun narzedzie do pozycji
G00 X-0.25 Y0.25
Z-2

/Nadaj szybkosc posuwu przy pierwszym ruchu liniowym, 
/ustaw predkosc wrzeciona oraz kierunek obrotu
G01 F200 S2500 M03

/Pierwszy ruch liniowy
X3.5

/Wykonaj ruch CW, okresl punkt koncowy i dlugosc łuku
G02 X5.25 Y-1.5 I0 J-1.75

/Powroc do ruchu liniowego w dół
G01 Y-4.75

/Powroć do ruchu CW oraz okresl pkt koncowy i łuk
G03 X4.75 Y-5.25 I0.25 J-0.75

/Powroc do ruchu liniowego i okresl ruch
G01 X1

/Powroć do ruchu CW oraz okresl pkt koncowy i łuk
G02 X-0.25 Y-4 I0 J1.25

/Powroc do ruchu liniowego aby wykonczyc detal
G01 Y0.25

/Odsun glowice od detalu i zakoncz program
G00 Z3
M02  


