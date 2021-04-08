`timescale  1ns / 1ps

`include "../include/defines.v"

module keyboard_input_tb;

  localparam CLK_FREQ_MHZ   = 50;
  localparam CLK_PERIOD     = 1000 / CLK_FREQ_MHZ;
  localparam CLK_SEMIPERIOD = 1000 / 2  / CLK_FREQ_MHZ;
  
  
  reg        clk50m_i;
  reg        rst_n_i;
  
  reg  [7:0] received_data;
  reg        received_data_en;
  
  wire [1:0] movement_o;
  
  
  initial begin
    clk50m_i = 1;
    forever
      #CLK_SEMIPERIOD clk50m_i = ~clk50m_i;
  end

  initial begin
    rst_n_i = 0;
    #CLK_SEMIPERIOD rst_n_i = 1;
  end
  
  
  keyboard_input DUT (
    .clk50m_i         ( clk50m_i         ),
    .rst_n_i          ( rst_n_i          ),
    
    .received_data    ( received_data    ),
    .received_data_en ( received_data_en ),
    
    .movement_o       ( movement_o       )
  );
  
endmodule
