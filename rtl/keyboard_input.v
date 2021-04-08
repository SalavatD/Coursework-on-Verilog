`include "../include/defines.v"

module keyboard_input (

  // Inputs (Clock and reset)
  input        clk50m_i,
  input        rst_n_i,

  // Inputs (data)
  input  [7:0] received_data,
  input        received_data_en,
  
  // Outputs (data)
  output [1:0] movement_o
);

  reg [1:0] movement_data;
  
  always @( posedge clk50m_i or negedge rst_n_i ) begin
    if ( ~rst_n_i )
      movement_data <= `MOVEMENT_RIGHT;
    else if ( received_data_en )
      case ( received_data )
        `KEYBOARD_ARROW_UP    : movement_data <= movement_data != `MOVEMENT_DOWN ? `MOVEMENT_UP : `MOVEMENT_DOWN;
        `KEYBOARD_ARROW_DOWN  : movement_data <= movement_data != `MOVEMENT_UP ? `MOVEMENT_DOWN : `MOVEMENT_UP;
        `KEYBOARD_ARROW_RIGHT : movement_data <= movement_data != `MOVEMENT_LEFT ? `MOVEMENT_RIGHT : `MOVEMENT_LEFT;
        `KEYBOARD_ARROW_LEFT  : movement_data <= movement_data != `MOVEMENT_RIGHT ? `MOVEMENT_LEFT : `MOVEMENT_RIGHT;
      endcase
  end
  
  assign movement_o = movement_data;

endmodule
