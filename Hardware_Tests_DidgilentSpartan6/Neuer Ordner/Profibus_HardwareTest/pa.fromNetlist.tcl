
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name Profibus_HardwareTest -dir "C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Hardware_Tests_DidgilentSpartan6/Neuer Ordner/Profibus_HardwareTest/planAhead_run_2" -part xc6slx45csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Hardware_Tests_DidgilentSpartan6/Neuer Ordner/Profibus_HardwareTest/Hardware_Test.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Hardware_Tests_DidgilentSpartan6/Neuer Ordner/Profibus_HardwareTest} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "Hardware_Test.ucf" [current_fileset -constrset]
add_files [list {Hardware_Test.ucf}] -fileset [get_property constrset [current_run]]
link_design
