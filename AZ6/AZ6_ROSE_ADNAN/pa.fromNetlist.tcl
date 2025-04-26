
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name AZ6_ROSE_ADNAN -dir "/home/ise/ISE_Share/AZ6_ROSE_ADNAN/planAhead_run_1" -part xc3s400pq208-5
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "/home/ise/ISE_Share/AZ6_ROSE_ADNAN/Shift_Register_Top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {/home/ise/ISE_Share/AZ6_ROSE_ADNAN} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "Shift_Register_Top.ucf" [current_fileset -constrset]
add_files [list {Shift_Register_Top.ucf}] -fileset [get_property constrset [current_run]]
link_design
