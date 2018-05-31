
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name test_board -dir "Z:/WangRui/Programming/FPGA/test_board/planAhead_run_1" -part xc6slx4tqg144-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "Z:/WangRui/Programming/FPGA/test_board/pwm.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {Z:/WangRui/Programming/FPGA/test_board} }
set_property target_constrs_file "pwm.ucf" [current_fileset -constrset]
add_files [list {pwm.ucf}] -fileset [get_property constrset [current_run]]
link_design
