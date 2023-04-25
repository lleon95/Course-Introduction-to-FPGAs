// MIT License
// Author: Luis G. Leon Vega
// This is a sample script for teaching purposes

`timescale 1ns / 10ps

module tb_adder;
  reg [11:0] op_a;    //! Testbench op_a holder
  reg [11:0] op_b;    //! Testbench op_b holder
  reg [2:0] opcode;  //! Testbench opcode holder
  wire [11:0] op_c;   //! Testbench op_c retriever

  // Instance an adder
  alu uut(.op_a(op_a), .op_b(op_b), .op_c(op_c), .opcode(opcode));

  // Main testbench script
  initial begin
    op_a = 0'h00;
    op_b = 0'h00;
    opcode = 0'h00;
    #1000; // Duration of the simulation in ns
  end

  // Updates
  always begin
    #50 op_a = op_a + 1;
  end

  always begin
    #10 op_b = op_b + 1;
  end

  always begin
    #20 opcode = opcode + 1;
  end

endmodule