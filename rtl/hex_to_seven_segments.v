`include "../include/defines.v"

module hex_to_seven_segments (

  // Inputs (Clock and reset)
  input        clk50m_i,
  input        rst_n_i,
  
  // Inputs (data)
  input [15:0] hex_data_bus_i,
  
  // Outputs (data)
  output [7:0] seven_segment_o,
  output [3:0] seven_segment_select_o
);

  reg [`SEVEN_SEGMENT_DIGITS - 1:0] delay;
  reg [ 1:0] seven_segment_number;
  reg [ 7:0] hex_data;
  
  reg [ 7:0] seven_segment_data;
  reg [ 3:0] seven_segment_select_data;
  
  always @( posedge clk50m_i or negedge rst_n_i ) begin
    if( ~rst_n_i ) begin
      delay <= 0;
      seven_segment_number <= 0;
    end
    else begin
      delay <= delay + 1;
      if( delay == `SEVEN_SEGMENT_DELAY ) begin
        delay <= 0;
        seven_segment_number = seven_segment_number + 1;
      end
    end
  end
  
  always@( seven_segment_number ) begin
    case( seven_segment_number )
      0 : begin
            hex_data <= hex_data_bus_i % 10;
            seven_segment_select_data <= 4'hE;
          end
      1 : begin
            hex_data <= (hex_data_bus_i % 100) / 10;
            seven_segment_select_data <= 4'hD;
          end
      2 : begin
            hex_data <= (hex_data_bus_i % 1000) / 100;
            seven_segment_select_data <= 4'hB;
          end
      3 : begin
            hex_data <= hex_data_bus_i / 1000;
            seven_segment_select_data <= 4'h7;
          end
    endcase
  end
  
  always @( * ) begin
    case ( hex_data )
      4'h0 : seven_segment_data <= 8'hC0;
      4'h1 : seven_segment_data <= 8'hF9;
      4'h2 : seven_segment_data <= 8'hA4;
      4'h3 : seven_segment_data <= 8'hB0;
      4'h4 : seven_segment_data <= 8'h99;
      4'h5 : seven_segment_data <= 8'h92;
      4'h6 : seven_segment_data <= 8'h82;
      4'h7 : seven_segment_data <= 8'hF8;
      4'h8 : seven_segment_data <= 8'h80;
      4'h9 : seven_segment_data <= 8'h90;
    endcase
  end
  
  assign seven_segment_o = seven_segment_data;
  assign seven_segment_select_o = seven_segment_select_data;
  
endmodule
