`include "../include/defines.v"

module top_level (

  // Inputs (Clock and reset)
  input        clk50m_i,
  input        rst_n_i,
  
  // Inputs (Keyboard)
  input        ps2_clk_i,
  input        ps2_data_i,
  
  // Outputs (VGA)
  output [2:0] vga_rgb_o,
  output       vga_hsync_o,
  output       vga_vsync_o,
  
  // Outputs (HEX)
  output [7:0] seven_segment_o,
  output [3:0] seven_segment_select_o
);


  wire [`SIZE_XY:0] snake_tail;
  
  wire [3:0] apple_x;
  wire [3:0] apple_y;
  wire [7:0] score;
  
  
  wire [2:0] color;
  
  
  wire vga_clk;
  
  
  wire        vga_hs;
  wire        vga_vs;
  wire        vga_de;
  wire [11:0] pixel_x;
  wire [11:0] pixel_y;
  
  
  wire [1:0] movement;
  
  
  wire [7:0] ps2_received_data;
  wire       ps2_received_data_en;
  
  
  game_logic game_logic (
    .clk50m_i     ( clk50m_i   ),
    .rst_n_i      ( rst_n_i    ),
    
    .movement_i   ( movement   ),
    
    .snake_tail_o ( snake_tail ),
    
    .apple_x_o    ( apple_x    ),
    .apple_y_o    ( apple_y    ),
    
    .score_o      ( score      )
  );
  
  
  draw_field draw_field (
    .snake_tail_i ( snake_tail ),
    
    .apple_x_i    ( apple_x    ),
    .apple_y_i    ( apple_y    ),
    
    .pixel_x_i    ( pixel_x    ),
    .pixel_y_i    ( pixel_y    ),
    
    .color_o      ( color      )
  );
  
  
  pll25m pll25m (
    .areset ( ~rst_n_i ),
    .inclk0 ( clk50m_i ),
    
    .c0     ( vga_clk  )
  );
  
  
  vga_time_generator vga_time_generator (
    .clk              ( vga_clk           ),
    .reset_n          ( rst_n_i           ),
    .h_disp           ( `H_DISP           ),
    .h_fporch         ( `H_FPORCH         ),
    .h_sync           ( `H_SYNC           ),
    .h_bporch         ( `H_BPORCH         ),

    .v_disp           ( `V_DISP           ),
    .v_fporch         ( `V_FPORCH         ),
    .v_sync           ( `V_SYNC           ),
    .v_bporch         ( `V_BPORCH         ),
    .hs_polarity      ( `HS_POLARITY      ),
    .vs_polarity      ( `VS_POLARITY      ),
    .frame_interlaced ( `FRAME_INTERLACED ),

    .vga_hs           ( vga_hs            ),
    .vga_vs           ( vga_vs            ),
    .vga_de           ( vga_de            ),
    .pixel_x          ( pixel_x           ),
    .pixel_y          ( pixel_y           )
  );
  
  
  keyboard_input keyboard_input (
    .clk50m_i         ( clk50m_i             ),
    .rst_n_i          ( rst_n_i              ),
    
    .received_data    ( ps2_received_data    ),
    .received_data_en ( ps2_received_data_en ),
    
    .movement_o       ( movement             )
  );
  
  
  PS2_Controller PS2_Controller ( 
    .CLOCK_50         ( clk50m_i             ),
    .reset            ( ~rst_n_i             ),
    
    .PS2_CLK          ( ps2_clk_i            ),
    .PS2_DAT          ( ps2_data_i           ),
    
    .received_data    ( ps2_received_data    ),
    .received_data_en ( ps2_received_data_en )
  );
  
  
  hex_to_seven_segments hex_to_seven_segments (
    .clk50m_i               ( clk50m_i               ),
    .rst_n_i                ( rst_n_i                ),
    
    .hex_data_bus_i         ( score                  ),
    
    .seven_segment_o        ( seven_segment_o        ),
    .seven_segment_select_o ( seven_segment_select_o )
  );
  
  
  assign vga_hsync_o = vga_hs;
  assign vga_vsync_o = vga_vs;
  assign vga_rgb_o   = vga_de ? color : 0;
  
  
endmodule
