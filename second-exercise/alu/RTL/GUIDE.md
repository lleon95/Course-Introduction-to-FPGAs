# Creating an ALU in RTL

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

1. Complete the hardware implementation of the ALU units

You can find some units already implemented. For instance:

* [adder](src/adder.v)
* [and](src/ander.v)
* [multiplier](src/multiplier.v)
* [rightshifter](src/rightshifter.v)

However, the following are still missing:

* substraction
* left shifter
* or
* not

Create a new file and implement the module. Remember that the module must be named in the same way as in the file name.

2. Register the units into the ALU

Open the file [alu.v](src/alu.v) and do the following:

* Create a new wire to catch the output coming from the missing operations
* Create a new unit instance
* Add the case to multiplex with the respective output depending on the opcode.

3. Run the project

Run the project with the instructions presented below.

4. Complete the following questions:

* What's a reg and what's a wire?
* Is the logic fully combinational?
* What's the overall resource consumption in terms of LUT, BRAM, DSPs, and FFs
* What's the contribution of each unit?
* What are the main differences between schematics? What's the DSP38?
* What are the main differences between the simulation wave forms? Can you infer the a frequency due to delay?
* Is there a difference between HLS and RTL in terms of resources?

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

A new tab will appear below. Expand the "Summary one"

## Viewing the simulations

There are two kinds of simulations:

1. The behavioural simulation, which checks that the logic is correct.

Click on SIMULATION > Run Simulation > Run Behavioural Simulation

2. The post-synthesis simulation, which checks that the logic is correct after the implementation in RTL.

Click on SIMULATION > Run Simulation > Run Post-Synthesis Timing Simulation
