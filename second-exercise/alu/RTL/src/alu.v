// MIT License
// Author: Luis G. Leon Vega
// This is a sample script for teaching purposes

`timescale 1ns / 10ps

module alu(op_a, op_b, op_c, opcode);
  input wire [11:0] op_a;  //! First input operand of the adder
  input wire [11:0] op_b;  //! Second input operand of the adder
  output reg [11:0] op_c; //! Output operand of the adder
  input wire [2:0] opcode; //! Opcode input

  // TODO: Complete Wires
  wire [11:0] output_adder;
  wire [11:0] output_multiplier;
  wire [11:0] output_and;
  wire [11:0] output_rs;

  // TODO: Complete Units
  adder adder_1(op_a, op_b, output_adder);
  multiplier multiplier_1(op_a, op_b, output_multiplier);
  ander ander_1(op_a, op_b, output_and);
  rightshifter rser_1(op_a, op_b, output_rs);

  // TODO: Complete Units
  always @*
  case (opcode)
    3'h00:
        op_c = output_adder;
    3'h02:
        op_c = output_multiplier;
    3'h03:
        op_c = output_rs;
    3'h05:
        op_c = output_and;
    default:
        op_c = 0'h000;
  endcase

endmodule
