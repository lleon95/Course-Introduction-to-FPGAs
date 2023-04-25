# MIT License
# Author: Luis G. Leon Vega
# This is a sample script for teaching purposes

# Starts the GUI
start_gui

# Create the project
create_project rtlalu ../executions/rtlalu -part xc7z020clg484-1

# Add source files
add_files -norecurse ./alu.v
add_files -norecurse ./adder.v
add_files -norecurse ./ander.v
add_files -norecurse ./multiplier.v
add_files -norecurse ./rightshifter.v
update_compile_order -fileset sources_1
set_property top alu [current_fileset]

# Add testbench files
set_property SOURCE_SET sources_1 [get_filesets sim_1]
add_files -fileset sim_1 -norecurse ./tb_alu.v
update_compile_order -fileset sim_1

# Pre-behavioural simulation
launch_simulation

# Synthesis
launch_runs synth_1 -jobs 4

# Schematics
synth_design -rtl -name rtl_1

