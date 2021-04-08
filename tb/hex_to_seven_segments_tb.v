`timescale  1ns / 1ps

`include "../include/defines.v"

module hex_to_seven_segments_tb;

  localparam CLK_FREQ_MHZ   = 50;
  localparam CLK_PERIOD     = 1000 / CLK_FREQ_MHZ;
  localparam CLK_SEMIPERIOD = 1000 / 2  / CLK_FREQ_MHZ;
  
  
  reg        clk50m_i;
  reg        rst_n_i;
  
  reg [15:0] hex_data_bus_i;
  
  wire [7:0] seven_segment_o;
  wire [3:0] seven_segment_select_o;
  
  
  initial begin
    clk50m_i = 1;
    forever
      #CLK_SEMIPERIOD clk50m_i = ~clk50m_i;
  end

  initial begin
    rst_n_i = 0;
    #CLK_SEMIPERIOD rst_n_i = 1;
  end
  
  
  hex_to_seven_segments DUT (
    .clk50m_i               ( clk50m_i               ),
    .rst_n_i                ( rst_n_i                ),
    
    .hex_data_bus_i         ( hex_data_bus_i         ),
    
    .seven_segment_o        ( seven_segment_o        ),
    .seven_segment_select_o ( seven_segment_select_o )
  );
  
endmodule
