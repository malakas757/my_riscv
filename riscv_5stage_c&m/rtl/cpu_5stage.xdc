set_property PACKAGE_PIN E3 [get_ports clk]
set_property IOSTANDARD LVCMOS33 [get_ports clk]
create_clock -period 20.000 -name clk -waveform {0.000 10.000} -add [get_ports clk]
set_property PACKAGE_PIN T8 [get_ports {led[0]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[0]}]
##Bank = 34, Pin name = IO_L21N_T3_DQS_34,					Sch name = LED1
set_property PACKAGE_PIN V9 [get_ports {led[1]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[1]}]
##Bank = 34, Pin name = IO_L24P_T3_34,						Sch name = LED2
set_property PACKAGE_PIN R8 [get_ports {led[2]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[2]}]
##Bank = 34, Pin name = IO_L23N_T3_34,						Sch name = LED3
set_property PACKAGE_PIN T6 [get_ports {led[3]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[3]}]
##Bank = 34, Pin name = IO_L12P_T1_MRCC_34,					Sch name = LED4
set_property PACKAGE_PIN T5 [get_ports {led[4]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[4]}]
##Bank = 34, Pin name = IO_L12N_T1_MRCC_34,					Sch	name = LED5
set_property PACKAGE_PIN T4 [get_ports {led[5]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[5]}]
##Bank = 34, Pin name = IO_L22P_T3_34,						Sch name = LED6
set_property PACKAGE_PIN U7 [get_ports {led[6]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[6]}]
##Bank = 34, Pin name = IO_L22N_T3_34,						Sch name = LED7
set_property PACKAGE_PIN U6 [get_ports {led[7]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[7]}]
##Bank = 34, Pin name = IO_L10N_T1_34,

set_property PACKAGE_PIN V4 [get_ports debug_flush]
set_property IOSTANDARD LVCMOS33 [get_ports debug_flush]

set_property PACKAGE_PIN U3 [get_ports debug_is_bj]
set_property IOSTANDARD LVCMOS33 [get_ports debug_is_bj]

set_property PACKAGE_PIN C4 [get_ports io_rx]
set_property IOSTANDARD LVCMOS33 [get_ports io_rx]

set_property PACKAGE_PIN U8 [get_ports rstn_cpu]
set_property IOSTANDARD LVCMOS33 [get_ports rstn_cpu]
set_property PACKAGE_PIN U9 [get_ports rstn_uart]
set_property IOSTANDARD LVCMOS33 [get_ports rstn_uart]

create_debug_core u_ila_0 ila
set_property ALL_PROBE_SAME_MU true [get_debug_cores u_ila_0]
set_property ALL_PROBE_SAME_MU_CNT 1 [get_debug_cores u_ila_0]
set_property C_ADV_TRIGGER false [get_debug_cores u_ila_0]
set_property C_DATA_DEPTH 1024 [get_debug_cores u_ila_0]
set_property C_EN_STRG_QUAL false [get_debug_cores u_ila_0]
set_property C_INPUT_PIPE_STAGES 0 [get_debug_cores u_ila_0]
set_property C_TRIGIN_EN false [get_debug_cores u_ila_0]
set_property C_TRIGOUT_EN false [get_debug_cores u_ila_0]
set_property port_width 1 [get_debug_ports u_ila_0/clk]
connect_debug_port u_ila_0/clk [get_nets [list clk_IBUF_BUFG]]
set_property PROBE_TYPE DATA_AND_TRIGGER [get_debug_ports u_ila_0/probe0]
set_property port_width 32 [get_debug_ports u_ila_0/probe0]
connect_debug_port u_ila_0/probe0 [get_nets [list {debug_reg[1][0]} {debug_reg[1][1]} {debug_reg[1][2]} {debug_reg[1][3]} {debug_reg[1][4]} {debug_reg[1][5]} {debug_reg[1][6]} {debug_reg[1][7]} {debug_reg[1][8]} {debug_reg[1][9]} {debug_reg[1][10]} {debug_reg[1][11]} {debug_reg[1][12]} {debug_reg[1][13]} {debug_reg[1][14]} {debug_reg[1][15]} {debug_reg[1][16]} {debug_reg[1][17]} {debug_reg[1][18]} {debug_reg[1][19]} {debug_reg[1][20]} {debug_reg[1][21]} {debug_reg[1][22]} {debug_reg[1][23]} {debug_reg[1][24]} {debug_reg[1][25]} {debug_reg[1][26]} {debug_reg[1][27]} {debug_reg[1][28]} {debug_reg[1][29]} {debug_reg[1][30]} {debug_reg[1][31]}]]
create_debug_port u_ila_0 probe
set_property PROBE_TYPE DATA_AND_TRIGGER [get_debug_ports u_ila_0/probe1]
set_property port_width 32 [get_debug_ports u_ila_0/probe1]
connect_debug_port u_ila_0/probe1 [get_nets [list {debug_reg[3][0]} {debug_reg[3][1]} {debug_reg[3][2]} {debug_reg[3][3]} {debug_reg[3][4]} {debug_reg[3][5]} {debug_reg[3][6]} {debug_reg[3][7]} {debug_reg[3][8]} {debug_reg[3][9]} {debug_reg[3][10]} {debug_reg[3][11]} {debug_reg[3][12]} {debug_reg[3][13]} {debug_reg[3][14]} {debug_reg[3][15]} {debug_reg[3][16]} {debug_reg[3][17]} {debug_reg[3][18]} {debug_reg[3][19]} {debug_reg[3][20]} {debug_reg[3][21]} {debug_reg[3][22]} {debug_reg[3][23]} {debug_reg[3][24]} {debug_reg[3][25]} {debug_reg[3][26]} {debug_reg[3][27]} {debug_reg[3][28]} {debug_reg[3][29]} {debug_reg[3][30]} {debug_reg[3][31]}]]
create_debug_port u_ila_0 probe
set_property PROBE_TYPE DATA_AND_TRIGGER [get_debug_ports u_ila_0/probe2]
set_property port_width 32 [get_debug_ports u_ila_0/probe2]
connect_debug_port u_ila_0/probe2 [get_nets [list {debug_reg[5][0]} {debug_reg[5][1]} {debug_reg[5][2]} {debug_reg[5][3]} {debug_reg[5][4]} {debug_reg[5][5]} {debug_reg[5][6]} {debug_reg[5][7]} {debug_reg[5][8]} {debug_reg[5][9]} {debug_reg[5][10]} {debug_reg[5][11]} {debug_reg[5][12]} {debug_reg[5][13]} {debug_reg[5][14]} {debug_reg[5][15]} {debug_reg[5][16]} {debug_reg[5][17]} {debug_reg[5][18]} {debug_reg[5][19]} {debug_reg[5][20]} {debug_reg[5][21]} {debug_reg[5][22]} {debug_reg[5][23]} {debug_reg[5][24]} {debug_reg[5][25]} {debug_reg[5][26]} {debug_reg[5][27]} {debug_reg[5][28]} {debug_reg[5][29]} {debug_reg[5][30]} {debug_reg[5][31]}]]
create_debug_port u_ila_0 probe
set_property PROBE_TYPE DATA_AND_TRIGGER [get_debug_ports u_ila_0/probe3]
set_property port_width 32 [get_debug_ports u_ila_0/probe3]
connect_debug_port u_ila_0/probe3 [get_nets [list {debug_reg[4][0]} {debug_reg[4][1]} {debug_reg[4][2]} {debug_reg[4][3]} {debug_reg[4][4]} {debug_reg[4][5]} {debug_reg[4][6]} {debug_reg[4][7]} {debug_reg[4][8]} {debug_reg[4][9]} {debug_reg[4][10]} {debug_reg[4][11]} {debug_reg[4][12]} {debug_reg[4][13]} {debug_reg[4][14]} {debug_reg[4][15]} {debug_reg[4][16]} {debug_reg[4][17]} {debug_reg[4][18]} {debug_reg[4][19]} {debug_reg[4][20]} {debug_reg[4][21]} {debug_reg[4][22]} {debug_reg[4][23]} {debug_reg[4][24]} {debug_reg[4][25]} {debug_reg[4][26]} {debug_reg[4][27]} {debug_reg[4][28]} {debug_reg[4][29]} {debug_reg[4][30]} {debug_reg[4][31]}]]
create_debug_port u_ila_0 probe
set_property PROBE_TYPE DATA_AND_TRIGGER [get_debug_ports u_ila_0/probe4]
set_property port_width 32 [get_debug_ports u_ila_0/probe4]
connect_debug_port u_ila_0/probe4 [get_nets [list {debug_reg[2][0]} {debug_reg[2][1]} {debug_reg[2][2]} {debug_reg[2][3]} {debug_reg[2][4]} {debug_reg[2][5]} {debug_reg[2][6]} {debug_reg[2][7]} {debug_reg[2][8]} {debug_reg[2][9]} {debug_reg[2][10]} {debug_reg[2][11]} {debug_reg[2][12]} {debug_reg[2][13]} {debug_reg[2][14]} {debug_reg[2][15]} {debug_reg[2][16]} {debug_reg[2][17]} {debug_reg[2][18]} {debug_reg[2][19]} {debug_reg[2][20]} {debug_reg[2][21]} {debug_reg[2][22]} {debug_reg[2][23]} {debug_reg[2][24]} {debug_reg[2][25]} {debug_reg[2][26]} {debug_reg[2][27]} {debug_reg[2][28]} {debug_reg[2][29]} {debug_reg[2][30]} {debug_reg[2][31]}]]
set_property C_CLK_INPUT_FREQ_HZ 300000000 [get_debug_cores dbg_hub]
set_property C_ENABLE_CLK_DIVIDER false [get_debug_cores dbg_hub]
set_property C_USER_SCAN_CHAIN 1 [get_debug_cores dbg_hub]
connect_debug_port dbg_hub/clk [get_nets clk_IBUF_BUFG]
