`include "../include/defines.v"

module game_logic (

  // Inputs (Clock and reset)
  input        clk50m_i,
  input        rst_n_i,
  
  // Inputs (data)
  input [1:0] movement_i,
  
  // Outputs (snake tail)
  output [`SIZE_XY:0] snake_tail_o,
  
  // Outputs (dats)
  output [3:0] apple_x_o,
  output [3:0] apple_y_o,
  
  output [7:0] score_o
);

  reg [`SIZE_XY:0] snake_tail;
  
  wire [7:0] score;
  
  wire [15:0] apple;
  wire [15:0] snake_head;
  wire [15:0] erace;
  
  reg [7:0] rst_loop;
  reg [7:0] game_over_loop;
  always @( posedge clk50m_i or negedge rst_n_i ) begin
    if ( ~rst_n_i ) begin
      for (rst_loop = 0; rst_loop < `SIZE_XY; rst_loop = rst_loop + 1) begin
          snake_tail[rst_loop] <= 0;
      end
    end
    else begin
      if ( score == 255 ) begin
        for (game_over_loop = 0; game_over_loop < `SIZE_XY; game_over_loop = game_over_loop + 1) begin
          snake_tail[game_over_loop] <= 0;
        end
      end
      snake_tail[snake_head[15:8] * `SIZE_Y + snake_head[7:0]] <= 1;
      snake_tail[erace[15:8] * `SIZE_Y + erace[7:0]] <= 0;
    end
  end
  
  cpu cpu (
    .clk_clk             ( clk50m_i   ),
    .rst_n_i_export      ( rst_n_i    ),
     
    .movement_i_export   ( movement_i ),
     
    .apple_o_export      ( apple      ),
    .snake_head_o_export ( snake_head ),
    .erace_o_export      ( erace      ),
     
    .score_o_export      ( score      )
  );
  
  assign snake_tail_o = snake_tail;
  
  assign apple_x_o = apple[15:8];
  assign apple_y_o = apple[ 7:0];
  
  assign score_o = score;
  
endmodule
