/Add part to machine
$AddRegPart 1, 30, 30 
/Set zero point
G92 X30 Y30 Z25
/Set tool and change
T1 M06 
/Tool now moves with specified speed to location
G00 X15 Y15 Z2
/Set the motion of tool (feed and spindle)
G01 Z-5 F250 S2000 M03 
/Move one direction in Y
Y70
/Set to arc motion (interpolated) and specify end point arc center
G02 X30 Y85 I15 J0
/Now enter the rest of coords and set motion back to linear
G01 X85
Y15
X15
/Move away from part and then change to drill holes
T2 M06
G00 X30 Y30 Z2
/Tell to drill multiple positions and add collant (M08)
G81 Z-15 R1 M03 M08  
/Move to new position
Y70
X70
Y30
/End drill cycle
G80
Z50
/End program
M30 
