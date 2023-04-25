## Look at the code

* The actual adder implementation in Verilog: [adder.v](./src/adder.v)
* The testbench in Verilog: [tb_adder.v](./src/tb_adder.v)
* The execution script: [script.tcl](./src/script.tcl)

## Run the script to generate the project and products

```bash
cd src
vivado -mode tcl -source script.tcl 
```

## Viewing the schematic

There are two kinds of schematics:

1. The basic description in terms of behaviour:

Go to RTL Analysis > Open Elaborated Design > Schematic

2. The RTL after synthesis, which represents the actual implementation on the FPGA:

Go to SYNTHESIS > Open Synthesise Design > Schematic

## Viewing the resource utilisation

This is the resource consumption in terms of FPGA resources

Go to SYNTHESIS > Open Synthesise Design > Report Utilization

A new tab will appear below. Expand the "Summary one":

![utilisation.png](utilisation.png)

## Viewing the simulations

There are two kinds of simulations:

1. The behavioural simulation, which checks that the logic is correct.

Click on SIMULATION > Run Simulation > Run Behavioural Simulation

2. The post-synthesis simulation, which checks that the logic is correct after the implementation in RTL.

Click on SIMULATION > Run Simulation > Run Post-Synthesis Timing Simulation

Can you spot the differences?

