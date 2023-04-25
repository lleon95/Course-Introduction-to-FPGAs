# MIT License
# Author: Luis G. Leon Vega
# This is a sample script for teaching purposes

# Starts the GUI
start_gui

# Create the project
create_project rtladder ../executions/rtladder -part xc7z020clg484-1

# Add source files
add_files -norecurse ./adder.v
update_compile_order -fileset sources_1
set_property top adder [current_fileset]

# Add testbench files
set_property SOURCE_SET sources_1 [get_filesets sim_1]
add_files -fileset sim_1 -norecurse ./tb_adder.v
update_compile_order -fileset sim_1

# Pre-behavioural simulation
launch_simulation

# Synthesis
launch_runs synth_1 -jobs 4

# Schematics
synth_design -rtl -name rtl_1

