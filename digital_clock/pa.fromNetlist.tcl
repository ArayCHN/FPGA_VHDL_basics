
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name digital_clock -dir "Z:/WangRui/Programming/FPGA/digital_clock/planAhead_run_1" -part xc6slx4tqg144-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "Z:/WangRui/Programming/FPGA/digital_clock/digital_clock.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {Z:/WangRui/Programming/FPGA/digital_clock} }
set_property target_constrs_file "digital_clock.ucf" [current_fileset -constrset]
add_files [list {digital_clock.ucf}] -fileset [get_property constrset [current_run]]
link_design
