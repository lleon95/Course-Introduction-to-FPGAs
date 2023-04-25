// MIT License
// Author: Luis G. Leon Vega
// This is a sample script for teaching purposes

`timescale 1ns / 10ps

module multiplier(op_a, op_b, op_c);
  input wire [11:0] op_a;  //! First input operand of the multiplier
  input wire [11:0] op_b;  //! Second input operand of the multiplier
  output wire [11:0] op_c; //! Output operand of the multiplier

  // FIXME: Is this OK?
  assign op_c = op_a * op_b;
endmodule
