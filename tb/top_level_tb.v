`timescale  1ns / 1ps

`include "../include/defines.v"

module top_level_tb;

  localparam CLK_FREQ_MHZ   = 50;
  localparam CLK_PERIOD     = 1000 / CLK_FREQ_MHZ;
  localparam CLK_SEMIPERIOD = 1000 / 2  / CLK_FREQ_MHZ;
  
  
  reg        clk50m_i;
  reg        rst_n_i;
  
  reg        ps2_clk_i;
  reg        ps2_data_i;
  
  wire [2:0] vga_rgb_o;
  wire       vga_hsync_o;
  wire       vga_vsync_o;
  
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
  
  
  top_level DUT (
    .clk50m_i               ( clk50m_i               ),
    .rst_n_i                ( rst_n_i                ),
    
    .ps2_clk_i              ( ps2_clk_i              ),
    .ps2_data_i             ( ps2_data_i             ),
	 
    .vga_rgb_o              ( vga_rgb_o              ),
    .vga_hsync_o            ( vga_hsync_o            ),
    .vga_vsync_o            ( vga_vsync_o            ),
	 
    .seven_segment_o        ( seven_segment_o        ),
    .seven_segment_select_o ( seven_segment_select_o )
  );
  
endmodule
