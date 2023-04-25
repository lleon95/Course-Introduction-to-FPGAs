# Creating an ALU in HLS

In this exercise, you are asked to create an ALU that performs the following operations:

| Operation | Op Code | C Operation   |
|-----------|---------|---------------|
| Add       | 0x00    | C = A + B     |
| Sub       | 0x01    | C = A - B     |
| Mult      | 0x02    | C = Hi{A * B} |
| Shift R   | 0x03    | C = A >> B    |
| Shift L   | 0x04    | C = A << B    |
| AND       | 0x05    | C = A & B     |
| OR        | 0x06    | C = A | B     |
| Not A     | 0x07    | C = ~A        |

The operands have 12-bit data length and you are asked to have them fixed.

## Instructions

The following items needs to be covered along the exercise:

1. Complete the hardware implementation of the ALU

It requires you to write the operations in the [alu-hw.cpp](src/alu-hw.cpp) file, declare the signatures in [alu.hpp](src/alu.hpp) and register the operation in the top function [alu.cpp](src/alu.cpp).

2. Complete the testbench

It requires you to write code in order to exercise the function. It is highly recommended to print the outputs from the code. It will give you a better understanding of the error associated to the data type.

The testbench file is [alu-tb.hpp](alu-tb.hpp).

3. Run the project

Run the project with the instructions presented below.

4. Complete the following questions:

* What's the overall resource consumption in terms of LUT, BRAM, DSPs, and FFs
* Is the logic fully combinational?
* What's the maximum frequency due to the delay (timing (ns))?
* What's the contribution of each unit?

## Run the script to generate the project and products

```bash
cd src
vivado_hls -f script.tcl
```

## Looking at the resource utilisation and latency

After running the HLS toolchain, a series of reports and artefacts are generated. Regarding the consumptions and latency, you can see the reports in the following file:

* Report: [alu_top_csynth.rpt](src/hlsalu/solution/syn/report/alu_top_csynth.rpt)
* Behavioural C Simulation: [alu_top_csim.log](src/hlsalu/solution/csim/report/alu_top_csim.log)
* Co-Simulation: [alu_top.log](src/hlsalu/solution/sim/report/verilog/alu_top.log)
