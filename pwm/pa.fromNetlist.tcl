
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name pwm -dir "Z:/WangRui/Programming/FPGA/pwm/planAhead_run_1" -part xc6slx4tqg144-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "Z:/WangRui/Programming/FPGA/pwm/pwm.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {Z:/WangRui/Programming/FPGA/pwm} }
set_property target_constrs_file "pwm.ucf" [current_fileset -constrset]
add_files [list {pwm.ucf}] -fileset [get_property constrset [current_run]]
link_design
