0  BEGIN PGM 001-KUBKI MM 
1  ;
2  BLK FORM 0.1 Z  X+0  Y-75  Z-75
3  BLK FORM 0.2  X+200  Y+75  Z+1
4  CALL PGM TNC:\REF
5  CALL PGM TNC:\Z19
6  CYCL DEF 247 USTAWIENIE PKT.BAZ ~
    Q339=+1    ;NR PKT BAZOWEGO
7  PLANE RESET TURN F3000
8  ;
9  * - SONDA
10 TOOL CALL 1 Z S10
11 ;
12 ; X
13 ;
14 TCH PROBE 419 PKT.BAZOW.POJED. OSI ~
    Q263=+0    ;1.PKT POMIAROW 1.OSI ~
    Q264=-54   ;1.PKT 2.OSI ~
    Q261=-7    ;WYSOKOSC POMIARU ~
    Q320=+10   ;BEZPIECZNA WYSOKOSC ~
    Q260=+20   ;BEZPIECZNA WYSOKOSC ~
    Q272=+1    ;OS POMIAROWA ~
    Q267=+1    ;KIERUNEK RUCHU ~
    Q305=+1    ;NR W TABELI ~
    Q333=+0    ;PUNKT ODNIESIENIA ~
    Q303=+1    ;PRZEKAZ DANYCH POM.
15 ;
16 M140 MB MAX
/ 17 STOP
18 CALL PGM kubki-sd-sonda
/ 19 STOP
20 ;
21 M30
22 END PGM 001-KUBKI MM 