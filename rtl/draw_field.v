`include "../include/defines.v"

module draw_field (

  // Inputs (field matrix)
  input [`SIZE_XY:0] snake_tail_i,
  
  // Inputs (data)
  input  [ 3:0] apple_x_i,
  input  [ 3:0] apple_y_i,
  
  input  [11:0] pixel_x_i,
  input  [11:0] pixel_y_i,
  
  // Outputs (data)
  output [ 2:0] color_o
);

  reg [2:0] color_data;
  
  reg [4:0] i, j;
  always @( * ) begin
    for (i = 0; i < `SIZE_X; i = i + 1) begin
      for (j = 0; j < `SIZE_Y; j = j + 1) begin
        if(( pixel_x_i >= i * `SQUARE_SIZE ) && ( pixel_x_i <= ( i + 1 ) * `SQUARE_SIZE ) &&
           ( pixel_y_i >= j * `SQUARE_SIZE ) && ( pixel_y_i <= ( j + 1 ) * `SQUARE_SIZE )) begin
          if ( i == apple_x_i && j == apple_y_i ) color_data <= `COLOR_RED;
          else if ( snake_tail_i[i * `SIZE_Y + j] ) color_data <= `COLOR_GREEN;
          else color_data <= `COLOR_WHITE;
        end
      end
    end
  end
  
  assign color_o = color_data;
  
endmodule
