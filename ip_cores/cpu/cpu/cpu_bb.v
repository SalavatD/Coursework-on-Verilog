
module cpu (
	apple_o_export,
	clk_clk,
	erace_o_export,
	movement_i_export,
	rst_n_i_export,
	score_o_export,
	snake_head_o_export);	

	output	[15:0]	apple_o_export;
	input		clk_clk;
	output	[15:0]	erace_o_export;
	input	[1:0]	movement_i_export;
	input		rst_n_i_export;
	output	[7:0]	score_o_export;
	output	[15:0]	snake_head_o_export;
endmodule
