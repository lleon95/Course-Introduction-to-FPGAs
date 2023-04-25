# Creating an Adder (Guided Exercise)

This is a guided exercise that illustrates how to work with HLS to describe a simple Fixed-Point adder of 12-bits. This small exercise will allow you to:

1. Seeing how an adder can be implemented (quite easy actually)
2. Running the Vivado HLS Tool chain from a script
3. Looking and analysing simulations

> The main difference is that the HLS workflow converts the C++ code to Verilog/VHDL code that continues with the RTL workflow from the other exercise.

## Look at the code

* The actual adder implementation in C++: [adder.cpp](./src/adder.cpp)
* The testbench in C++: [tb_adder.v](./src/tb_adder.v)
* The execution script: [script.tcl](./src/script.tcl)
* The directives script: [directives.tcl](./src/directives.tcl)

## Run the script to generate the project and products

```bash
cd src
vivado_hls -f script.tcl
```

## Looking at the resource utilisation and latency

After running the HLS toolchain, a series of reports and artefacts are generated. Regarding the consumptions and latency, you can see the reports in the following file:

* Report: [adder_top_csynth.rpt](src/hlsadder/solution/syn/report/adder_top_csynth.rpt)
* Behavioural C Simulation: [adder_top_csim.log](src/hlsadder/solution/csim/report/adder_top_csim.log)
* Co-Simulation: [adder_top.log](src/hlsadder/solution/sim/report/verilog/adder_top.log)

## Looking at the generated code

* Unit: [adder_top.v](src/hlsadder/solution/impl/verilog/adder_top.v)

## Questions

1. Is the same consumption?
2. What kind of simulation is the C Simulation?
3. What kind of simulation is the co-simulation?
4. What's the next step after having the RTL?
5. Why does the final implementation have more ports?
