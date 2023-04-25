############################################################
## Copyright 2021-2022
## Author: Luis G. Leon-Vega <lleon95@estudiantec.cr>
############################################################
open_project hlsadder
set_top adder_top
add_files "./adder.cpp ./adder.hpp" -cflags "-std=c++11"
add_files -tb ./adder-tb.cpp -cflags "-std=c++11 -Wno-unknown-pragmas"
open_solution "solution"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
source ./directives.tcl

# Running behavioral
puts "----- Running Behavioral Simulation -----"
csim_design -clean

# Running synthesis
puts "----- Running Synthesis -----"
csynth_design

# Running co-simulation
puts "----- Running Synthesis Simulation -----"
cosim_design

exit
