# Welcome to the Introduction to acceleration with FPGAs

This course covers the basics of FPGAs.

This course is based on the **Vivado 2018.2 WebPack Suite**.

## First day

### Laboratories

* First Exercise: Describing an adder in RTL and HLS

This exercise aims to introduce the student to the RTL and HLS workflow. The RTL is the legacy workflow whereas the HLS is a novel workflow that claims to be more than 10x faster than the conventional RTL workflow.

This exercise is composed of to steps:

* [RTL Guide](first-exercise/adder/RTL/GUIDE.md)
* [HLS Guide](first-exercise/adder/HLS/GUIDE.md)

Both implement a 12-bit fixed-point adder with simple code. There are differences in the workflow and the idea is to prepare the environment.

* Second Exercise: Describing an ALU

This exercise is a hands-on laboratory to give a better understanding about the circuit integration with RTL and HLS. Similar to the previous exercise, the student has to face the RTL and HLS workflows to create an Arithmetic Logic Unit (ALU) that performs arithmetic and logic operations based on an opcode. The circuit MUST be combinational and it must not consume any clock cycle.

This exercise is composed of to steps:

* [RTL Guide](second-exercise/alu/RTL/GUIDE.md)
* [HLS Guide](second-exercise/alu/HLS/GUIDE.md)

Both steps must be implemented using 12-bit logic.

## Second day

### Laboratories

* Third exercise: Describing and optimising an accelerator for $\tanh(x)$.

This exercise aims the use of the [Flexible Accelerators Library](https://gitlab.com/ecas-lab-tec/approximate-flexible-acceleration-ml/flexible-accelerators-library-fal) for describing an accelerator to perform a matricial `tanh(x)` operation. This exercise will limit to the following aspects:

* The role of the interfaces
* The optimisation process from the architecture point-of-view
* The role of the configurability of the just-right architectures
* Design Space Exploration for seeking "just-right" solutions
* Comparison against CPU execution

Please, follow the steps from the following guide:

* [HLS Guide](third-exercise/GUIDE.md)

This exercise will only be in HLS. RTL won't be covered from now on.

## Final Project

The final project will involve:

* Development of an accelerator
* Optimisation
* Testing and validation

The whole process will be simulated in Vivado 2018.2, using HLS and the Flexible Accelerators Library.

You can find the details in the following guide:

* [Project Guide](final-exercise/GUIDE.md)

## Notes

This is part of the course on Introduction to FPGA Acceleration for the MHPC 2023.
