`timescale  1ns / 1ps

`include "../include/defines.v"

module draw_field_tb;
  
  reg  [`SIZE_XY:0] snake_tail_i;
  
  reg  [ 3:0] apple_x_i;
  reg  [ 3:0] apple_y_i;
  
  reg  [11:0] pixel_x_i;
  reg  [11:0] pixel_y_i;
  
  wire [ 2:0] color_o;
  
  
  draw_field DUT (
    .snake_tail_i ( snake_tail_i ),
    
    .apple_x_i    ( apple_x_i    ),
    .apple_y_i    ( apple_y_i    ),
    
    .pixel_x_i    ( pixel_x_i    ),
    .pixel_y_i    ( pixel_y_i    ),
    
    .color_o      ( color_o      )
  );
  
endmodule
