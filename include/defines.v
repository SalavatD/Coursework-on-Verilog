`ifndef DEFINES
`define DEFINES


`define SEVEN_SEGMENT_DELAY  50000
`define SEVEN_SEGMENT_DIGITS 16

`define SECOND_DELAY  50000000
`define SECOND_DIGITS 26


`define KEYBOARD_ARROW_UP    8'h75
`define KEYBOARD_ARROW_DOWN  8'h72
`define KEYBOARD_ARROW_RIGHT 8'h74
`define KEYBOARD_ARROW_LEFT  8'h6B

`define MOVEMENT_UP    0
`define MOVEMENT_DOWN  1
`define MOVEMENT_RIGHT 2
`define MOVEMENT_LEFT  3


`define H_DISP   640
`define H_FPORCH  16
`define H_SYNC    96
`define H_BPORCH  48

`define V_DISP   480
`define V_FPORCH  10
`define V_SYNC     2
`define V_BPORCH  33

`define HS_POLARITY      0
`define VS_POLARITY      0
`define FRAME_INTERLACED 0

`define COLOR_BLACK  0
`define COLOR_BLUE   1
`define COLOR_GREEN  2
`define COLOR_CYAN   3
`define COLOR_RED    4
`define COLOR_PURPLE 5
`define COLOR_YELLOW 6
`define COLOR_WHITE  7


`define SQUARE_SIZE 40

`define SIZE_X   16
`define SIZE_Y   12
`define SIZE_XY 192

`endif
