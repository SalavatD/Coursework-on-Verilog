`timescale  1ns / 1ps

`include "../include/defines.v"

module game_logic_tb;

  localparam CLK_FREQ_MHZ   = 50;
  localparam CLK_PERIOD     = 1000 / CLK_FREQ_MHZ;
  localparam CLK_SEMIPERIOD = 1000 / 2  / CLK_FREQ_MHZ;
  
  
  reg        clk50m_i;
  reg        rst_n_i;
  
  reg  [1:0] movement_i;
  
  wire [`SIZE_XY:0] snake_tail_o;
  
  wire [3:0] apple_x_o;
  wire [3:0] apple_y_o;
  
  wire [7:0] score_o;
  
  
  initial begin
    clk50m_i = 1;
    forever
      #CLK_SEMIPERIOD clk50m_i = ~clk50m_i;
  end

  initial begin
    rst_n_i = 0;
    #CLK_SEMIPERIOD rst_n_i = 1;
  end
  
  
  game_logic DUT (
    .clk50m_i     ( clk50m_i     ),
    .rst_n_i      ( rst_n_i      ),
    
    .movement_i   ( movement_i   ),
    
    .snake_tail_o ( snake_tail_o ),
    
    .apple_x_o    ( apple_x_o    ),
    .apple_y_o    ( apple_y_o    ),
    
    .score_o      ( score_o      )
  );
  
endmodule
