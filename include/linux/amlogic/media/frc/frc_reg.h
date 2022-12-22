/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */
#ifndef __FRC_REG_H__
#define __FRC_REG_H__

#define FRC_TOP_SW_RESET                           0x0000
//Bit 31:30        reserved
//Bit 29:0         reg_top_sw_resets    // unsigned ,   RW, default = 0  ,
#define FRC_REG_TOP_CTRL1                          0x0001
//Bit 31:29        reserved
//Bit 28:16        reg_frc_probe_pt_y    // unsigned ,   RW, default = 100  reg_mc_probe_pt_y mc_probe positon registers
//Bit 15:13        reserved
//Bit 12:0         reg_frc_probe_pt_x    // unsigned ,   RW, default = 100  reg_mc_probe_pt_x mc_probe positon registers
#define FRC_INP_HOLD_CTRL                          0x0002
//Bit 31           pls_inp_frm_start     // unsigned ,   RW, default = 0,start by write high in pluse start mode
//Bit 30:21        reserved
//Bit 20           reg_frc_win_en        // unsigned ,   RW, default = 1,0:auto start mode 1:pluse start mode
//Bit 19:17        reserved
//Bit 16           reg_inp_frm_start_sel // unsigned ,   RW, default = 0,0:auto start mode 1:pluse start mode
//Bit 15:13        reserved
//Bit 12:0         reg_inp_hold_line     // unsigned ,   RW, default = 6,inp start reg_inp_hold_line after go_field in auto start mode
#define FRC_OUT_HOLD_CTRL                          0x0003
//Bit 31           reg_mc_frm_ctrl       // unsigned ,   RW, default = 1,1:use mc_frm_rst/en by frc_top 0:generate mc_frm_rst/en before first me out
//Bit 30:24        reg_mc_hold_regen     // unsigned ,   RW, default = 2,hold_line for  regenerate frm_rst/me
//Bit 23:16        reg_out_hold_line     // unsigned ,   RW, default = 2,output data reg_out_hold_line lines after go_field
//Bit 15:8         reg_mc_hold_line      // unsigned ,   RW, default = 2,start  work reg_mc_hold_line  lines after frm_mc_rst
//Bit 7 :0         reg_me_hold_line      // unsigned ,   RW, default = 2,start  work reg_me_hold_line  lines after frm_me_rst
#define FRC_TOP_ASYNC_CTRL                         0x0004
//Bit 31:24         reserved
//Bit 23:20         reg_async_mask_num   // unsigned ,   RW, default = 12       ,mask_num
//Bit 19:0          reg_axi_asyn_ctrl    // unsigned ,   RW, default = 20'h44444,reg_axi_asyn_ctrl
#define FRC_LINE_INT_CTRL0                         0x0005
//Bit 31:16         reg_me_line_int_num   // unsigned ,   RW, default = 100,get a interupt when ref_line = reg_me_line_int_num
//Bit 15:0          reg_inp_line_int_num  // unsigned ,   RW, default = 100,get a interupt when ref_line = reg_inp_line_int_num
#define FRC_LINE_INT_CTRL1                         0x0006
//Bit 31:16         reserved
//Bit 15:0          reg_mc_line_int_num   // unsigned ,   RW, default = 100,get a interupt when ref_line = reg_mc_line_int_num
#define FRC_REG_TOP_CTRL7                          0x0007
//Bit 31:29         reserved
//Bit 28:24         reg_buf_cfg_en       // unsigned ,    RW, default = 0  [0]:force mc buf_idx [1] force logo buf_idx [2]:force me_phase [3] force mc_phase [4] force input_buf_idx
//Bit 23:20         reg_bufwr_idx        // unsigned ,    RW, default = 0  input buf_idx setting less than logo_fb_num
//Bit 19:0          reg_bufrd_idx        // unsigned ,    RW, default = 0  19:16 logo_cur_idx 15:12 logo_pre_idx, 11:8 pix_nxt_idx,7:4 pix_cur_idx,3:0 pix_pre_idx
#define FRC_REG_TOP_CTRL8                          0x0008
//Bit 31:16         reserved
//Bit 15:8          reg_mc_phase         // unsigned ,    RW, default = 0   mc_phase in force condition
//Bit  7:0          reg_me_phase         // unsigned ,    RW, default = 0   me_phase in force condition
#define FRC_REG_TOP_CTRL9                          0x0009
//Bit 31            reg_sleep_sel        // unsigned ,    RW, default = 0 ,ddr sleep module enable
//Bit 30:29         reserved
//Bit 28            reg_frm_hold         // unsigned ,    RW, default = 0  buffer stop refresh when enable this bit
//Bit 27:24         reg_out_frm_dly_num  // unsigned ,    RW, default = 3  frm dly number of frc
//Bit 23:0          reserved
#define FRC_REG_TOP_CTRL10                         0x000a
//Bit 31:8          reserved
//Bit  7:0          reg_inp_wrmif_en     // unsigned ,RW, default = 32'hff 0:mc_wr_en 1:me_wr_en 2:hme_wr_en 3:iplogo_wr_en 4:ip_blklogo_wr_en 5:iplogo_iir0_wr_en 6 iplogo_iir1_wr_en
#define FRC_REG_TOP_CTRL11                         0x000b
//Bit 31:24         reg_frc_me_loss_slice_num      // unsigned ,    RW, default = 4
//Bit 23:16         reg_frc_mc_loss_slice_num      // unsigned ,    RW, default = 4
//Bit 15:4          reserved
//Bit  3            reg_frc_me_loss_slice_num_bpmd // unsigned ,    RW, default = 1
//Bit  2            reg_frc_mc_loss_slice_num_bpmd // unsigned ,    RW, default = 1
//Bit  1            reg_frc_me_loss_en             // unsigned ,    RW, default = 0
//Bit  0            reg_frc_mc_loss_en             // unsigned ,    RW, default = 0
#define FRC_AUTO_RST_SEL                           0x000c
//Bit 31:6  reserved
//Bit 5 :0  reg_auto_rst_sel      // unsigned ,   RW, default = 6'h3c,{lut,mc,mevp,inp,top,ctrl} 1:software reset 0:auto_reset
#define FRC_REG_TOP_CTRL13                         0x000d
//Bit 31:7          reserved
//Bit 6             reg_force_film_end       // unsigned ,    RW, default = 0  force film_end of every phase high
//Bit 5             reg_mevp_mc_sync_en      // unsigned ,    RW, default = 1  sync enable singal for mevp and mc
//Bit 4             reg_mevp_mv_force_en     // unsigned ,    RW, default = 0  force module mevp mv
//Bit 3             reg_mevp_logo_force_en   // unsigned ,    RW, default = 0  force module mevp logo
//Bit 2:0           reserved
#define FRC_REG_TOP_CTRL14                         0x000e
//Bit 31:16         reg_me_dly_vofst         // unsigned ,    RW, default = 8
//Bit 15:0          reg_post_dly_vofst       // unsigned ,    RW, default = 0
#define FRC_REG_TOP_CTRL15                         0x000f
//Bit 31:16         reg_mc_dly_vofst1        // unsigned ,    RW, default = 190   8x8 : 190  16x16: 160
//Bit 15:0          reg_mc_dly_vofst0        // unsigned ,    RW, default = 35
#define FRC_REG_TOP_CTRL16                         0x0010
//Bit 31:16         reserved
//Bit 15:0          reg_disp_dly_vofst       // unsigned ,    RW, default = 195
#define FRC_REG_TOP_CTRL17                         0x0011
//Bit 31:10         reserved
//Bit 9             reg_film_phs_test        // unsigned ,    RW, default = 0
//Bit 8             reg_post_buf_prot        // unsigned ,    RW, default = 0
//Bit 7 :5          reserved
//Bit 4             pls_lut_cfg_end          // unsigned ,    RW, default = 0 ,finish config phs_lut
//Bit 3             pls_lut_cfg_en           // unsigned ,    RW, default = 0 ,start  config phs_lut
//Bit 2             reg_lut_sel              // unsigned ,    RW, default = 0
//Bit 1             reg_inp_frm_en_sel       // unsigned ,    RW, default = 0
//Bit 0             reg_lutrd_latch_sel      // unsigned ,    RW, default = 0
#define FRC_REG_TOP_CTRL18                         0x0012
//Bit 31:0          reg_inp_frm_vld_lut_0    // unsigned ,    RW, default = 0  frc_phase
#define FRC_REG_TOP_CTRL19                         0x0013
//Bit 31:0          reg_inp_frm_vld_lut_1    // unsigned ,    RW, default = 0  frc_phase
#define FRC_FRM_VLD_LUT_2                          0x0014
//Bit 31:0          reg_inp_frm_vld_lut_2    // unsigned ,    RW, default = 0  frc_phase
#define FRC_FRM_VLD_LUT_3                          0x0015
//Bit 31:0          reg_inp_frm_vld_lut_3    // unsigned ,    RW, default = 0  frc_phase
#define FRC_FRM_VLD_LUT_4                          0x0016
//Bit 31:0          reg_inp_frm_vld_lut_4    // unsigned ,    RW, default = 0  frc_phase
#define FRC_FRM_VLD_LUT_5                          0x0017
//Bit 31:0          reg_inp_frm_vld_lut_5    // unsigned ,    RW, default = 0  frc_phase
#define FRC_FRM_VLD_LUT_6                          0x0018
//Bit 31:0          reg_inp_frm_vld_lut_6    // unsigned ,    RW, default = 0  frc_phase
#define FRC_FRM_VLD_LUT_7                          0x0019
//Bit 31:0          reg_inp_frm_vld_lut_7    // unsigned ,    RW, default = 0  frc_phase
#define FRC_RO_TOP_STAT1                           0x0021
//Bit 31:0          ro_frc_stat1             // unsigned ,   RW, default = 0  ro_frc_stat2
#define FRC_RO_TOP_STAT2                           0x0022
//Bit 31:0          ro_frc_stat2             // unsigned ,   RW, default = 0  ro_frc_stat2
#define FRC_RO_TOP_STAT3                           0x0023
//Bit 31:0          ro_frc_stat3             // unsigned ,   RW, default = 0  ro_frc_stat3
#define FRC_RO_TOP_STAT4                           0x0024
//Bit 31:0          ro_frc_stat4             // unsigned ,   RW, default = 0  ro_frc_stat4
#define FRC_SYNC_SW_RESETS                         0x0025
//Bit 31:6  reserved
//Bit 5 :0  pls_frc_sw_rst        // unsigned ,   RW, default = 0,{lut,mc,mevp,inp,top,ctrl}
#define FRC_REG_TOP_CTRL25                         0x0026
//Bit 31            reg_inp_padding_en       // unsigned ,   RW, default = 0  reg_inp_padding_en
//Bit 30:0          reg_padding_value        // unsigned ,   RW, default = 0  reg_padding_value
#define FRC_REG_TOP_CTRL26                         0x0027
//Bit 31:26         reserved
//Bit 25:13         reg_org_inp_frm_vsize    // unsigned ,   RW, default = 0  reg_org_inp_frm_vsize
//Bit 12:0          reg_org_inp_frm_hsize    // unsigned ,   RW, default = 0  reg_org_inp_frm_hsize
#define FRC_REG_TOP_CTRL27                         0x0028
//Bit 31:26         reserved
//Bit 25:13         reg_inp_padding_xofset   // unsigned ,   RW, default = 0  reg_inp_padding_xofset
//Bit 12:0          reg_inp_padding_yofset   // unsigned ,   RW, default = 0  reg_inp_padding_yofset
#define FRC_REG_TOP_CTRL28                         0x0029
//Bit 31:0         reserved
#define FRC_REG_TOP_CTRL29                         0x002a
//Bit 31:0         reserved
#define FRC_BYP_PATH_CTRL                          0x002d
//Bit 31:1         reserved
//Bit 0            reg_byp_path_en           // unsigned ,   RW, default = 1  1: data bypass to display when memc prefetch data 0: data don't bypass to display when memc prefetch data
#define FRC_REG_INP_INT_MASK                       0x0030
//Bit 31:1         reserved
//Bit 0            reg_inp_int_mask          // unsigned ,   RW, default = 0  reg_inp_int_mask 1:mask interupt 0:open interupt
#define FRC_REG_INP_INT_FLAG                       0x0031
//Bit 31:2         reserved
//Bit 1            ro_inp_int_24hz           // unsigned ,   RO, default = 0   inpu  interupt 24hz flag
//Bit 0            ro_inp_int_flag           // unsigned ,   RO, default = 0   input interupt flag
#define FRC_REG_INP_INT_CLR                        0x0032
//Bit 31:1         reserved
//Bit 0            pls_inp_int_clr           // unsigned ,   RW, default = 0   input interupt flag clr bit
#define FRC_REG_OUT_INT_SEL                        0x0033
//Bit 31:13        reserved
//Bit 12           reg_inp_int_sel           // unsigned ,   RW, default = 0   0:frm_en_pre as interupt 1:out_frm_en as interupt
//Bit 11           reserved
//Bit 10:8         reg_out_frm_int_sel       // unsigned ,   RW, default = 4   0:me_int 1:melogo_int 2:vp_int 3:mc_int 4:disp_int
//Bit 7 :5         reserved
//Bit 4 :0         reg_out_int_sel           // unsigned ,   RW, default = 0   0:frm_en as interupt 1:frm_end as interupt
#define FRC_REG_OUT_INT_MASK                       0x0034
//Bit 31:9         reserved
//Bit 8            reg_out_frm_int_mask       // unsigned ,  RW, default = 0   out_frm_int mask bit
//Bit 7 :5         reserved
//Bit 4 :0         reg_out_int_mask           // unsigned ,  RW, default = 0   0:me_int mask 1:melogo_int mask 2:vp_int mask 3:mc_int mask
#define FRC_REG_OUT_INT_FLAG                       0x0035
//Bit 31:9         reserved
//Bit 8            ro_out_frm_int_flag       // unsigned ,   RO, default = 0   out_frm_int flag bit
//Bit 7 :5         reserved
//Bit 4 :0         ro_out_int_flag           // unsigned ,   RO, default = 0   0:me_int flag 1:melogo_int flag 2:vp_int flag 3:mc_int flag
#define FRC_REG_OUT_INT_CLR                        0x0036
//Bit 31:9         reserved
//Bit 8            pls_out_frm_int_clr       // unsigned ,   RW, default = 0   output     interupt flag clr bit
//Bit 7 :5         reserved
//Bit 4            pls_out_int4_clr          // unsigned ,   RW, default = 0   out_domain interupt flag clr bit4
//Bit 3            pls_out_int3_clr          // unsigned ,   RW, default = 0   out_domain interupt flag clr bit3
//Bit 2            pls_out_int2_clr          // unsigned ,   RW, default = 0   out_domain interupt flag clr bit2
//Bit 1            pls_out_int1_clr          // unsigned ,   RW, default = 0   out_domain interupt flag clr bit1
//Bit 0            pls_out_int0_clr          // unsigned ,   RW, default = 0   out_domain interupt flag clr bit0
#define FRC_REG_INT_VCNT_DLY                       0x0037
//Bit 31:29        reserved
//Bit 28:16        reg_out_int_line_dly     // unsigned ,   RW, default = 0  reg_out_int_line_dly
//Bit 15:13        reserved
//Bit 12:0         reg_inp_int_line_dly     // unsigned ,   RW, default = 0  reg_inp_int_line_dly
#define FRC_INP_LINE_SEL                           0x0038
//Bit 31:3         reserved
//Bit 2 :0         reg_ref_line_sel        // unsigned ,   RW, default = 0   ,bit0:inp_line_int ,bit1:me_line_int ,bit2:mc_line_int 0:use hsync from venc 1:inner counter
#define FRC_REG_LINE_INT_MASK                      0x0039
//Bit 31:3         reserved
//Bit 2 :0         reg_line_int_mask       // unsigned ,   RW, default = 6   0:inp_line_int 1:me_line_int 2:mc_line_int
#define FRC_REG_LINE_INT_FLAG                      0x003a
//Bit 31:3         reserved
//Bit 2 :0         ro_line_int_flag        // unsigned ,   RO, default = 0   0:inp_line_int 1:me_line_int 2:mc_line_int
#define FRC_REG_LINE_INT_CLR                       0x003b
//Bit 31:3         reserved
//Bit 2 :0         pls_line_int_clr        // unsigned ,   RW, default = 0   0:inp_line_int 1:me_line_int 2:mc_line_int
#define FRC_REG_MODE_OPT                           0x003d
//Bit 31:7  reserved
//Bit 6             reg_apb_prot_opt         // unsigned ,    RW, default = 0   reg_out_int_opt
//Bit 5             reg_out_int_opt          // unsigned ,    RW, default = 0   reg_out_int_opt
//Bit 4             reg_load_frm_opt         // unsigned ,    RW, default = 0   reg_load_frm_opt
//Bit 3             reg_para_mux_opt         // unsigned ,    RW, default = 0   reg_para_mux_opt
//Bit 2             reg_bd_ro_syn_mode       // unsigned ,    RW, default = 0   reg_bd_ro_syn_mode
//Bit 1             reg_bd_inp_syn_mode      // unsigned ,    RW, default = 0   reg_bd_inp_syn_mode
//Bit 0             reg_cfg_syn_mode         // unsigned ,    RW, default = 0   reg_cfg_syn_mode
#define FRC_TOTAL_NUM_MODE                         0x003e
//Bit 31:1          reserved
//Bit 0             reg_total_num_mode      // unsigned ,    RW, default = 0   reg_total_num_mode
#define FRC_REG_BW_FRM_LINE_CNT                    0x0040
//Bit 31:8         reserved
//Bit 7 :3         reg_bw_frm_cnt            // unsigned ,   RW, default = 0   stat frm cnt
//Bit 2 :0         reg_bw_line_cnt           // unsigned ,   RW, default = 0   stat line cnt
#define FRC_REG_FRC0_R_BW_AVG                      0x0041
//Bit 31:0         ro_frc0_r_bw_avg          // unsigned,   RO, default = 0
#define FRC_REG_FRC0_R_BW_PEAK                     0x0042
//Bit 31:0         ro_frc0_r_bw_peak         // unsigned,   RO, default = 0
#define FRC_REG_FRC1_R_BW_AVG                      0x0043
//Bit 31:0         ro_frc1_r_bw_avg          // unsigned,   RO, default = 0
#define FRC_REG_FRC1_R_BW_PEAK                     0x0044
//Bit 31:0         ro_frc1_r_bw_peak         // unsigned,   RO, default = 0
#define FRC_REG_FRC2_R_BW_AVG                      0x0045
//Bit 31:0         ro_frc2_r_bw_avg          // unsigned,   RO, default = 0
#define FRC_REG_FRC2_R_BW_PEAK                     0x0046
//Bit 31:0         ro_frc2_r_bw_peak         // unsigned,   RO, default = 0
#define FRC_REG_FRC0_W_BW_AVG                      0x0047
//Bit 31:0         ro_frc0_w_bw_avg          // unsigned,   RO, default = 0
#define FRC_REG_FRC0_W_BW_PEAK                     0x0048
//Bit 31:0         ro_frc0_w_bw_peak         // unsigned,   RO, default = 0
#define FRC_REG_FRC1_W_BW_AVG                      0x0049
//Bit 31:0         ro_frc1_w_bw_avg          // unsigned,   RO, default = 0
#define FRC_REG_FRC1_W_BW_PEAK                     0x004a
//Bit 31:0         ro_frc1_w_bw_peak         // unsigned,   RO, default = 0
#define FRC_REG_INP_RESERVED                       0x004b
//Bit 31:0         reserved
#define FRC_REG_RST_CTRL                           0x004c
//Bit 31:16       reserved
//Bit 15:0        reg_frc_rst_ctrl           // unsigned,   RW, default = 16'h5555
#define FRC_RO_DBG0_STAT                           0x004d
//Bit 31:16       ro_ref_vs_dly_num          // unsigned,   RO, default = 0   the delay from ref_frm_en to vs
//Bit 15:0        ro_ref_de_dly_num          // unsigned,   RO, default = 0   the delay from ref_frm_en to de
#define FRC_RO_DBG1_STAT                           0x004e
//Bit 31:16       ro_mevp_dly_num            // unsigned,   RO, default = 0   the delay from me frm en to vp first out data
//Bit 15:0        ro_mc2out_dly_num          // unsigned,   RO, default = 0   the delay from mc frm en to mc first out data
#define FRC_RO_DBG2_STAT                           0x004f
//Bit 31          reserved
//Bit 30:29       ro_memc_corr_st            // unsigned,   RO, default = 0   1: me_wait_mc_st 2: mc_wait_me_st
//Bit 28:16       ro_memc_corr_dly_num       // unsigned,   RO, default = 0   wait delay
//Bit 15:14       reserved
//Bit 13          ro_out_dly_err             // unsigned,   RO, default = 0   out delay error, the frc output is later than enc DE start
//Bit 12:0        ro_out_de_dly_num          // unsigned,   RO, default = 0   out delay measure, the dly from mc dout to enc DE
#define FRC_TOP_MISC_CTRL                          0x0050
//Bit 31:4        reserved
//Bit 3           reg_be_latch_mode      // unsigned ,  RW, default = 1    1.output  domain ro registers of badedit latch with output interupt 0:latch with  input interupt
//Bit 2           reg_ref_mode           // unsigned ,  RW, default = 1    1:badedit singal latch!#!+
//Bit 1           reg_use_otb_cnt_en     // unsigned ,  RW, default = 1    1:look_up phase_tab from   0 to reg_otb_cnt 0:look_up phase_tab from 0 to 255
//Bit 0           reg_auto_align_en      // unsigned ,  RW, default = 1    1:memc proc size 16 align  0:memc proc size set by FRC_PROC_SIZE_IN
#define FRC_PROC_SIZE                              0x0051
//Bit 31:30       reserved
//Bit 29:16       reg_vsize_proc        // unsigned ,   RW, default = 1080  reg_vsize_proc
//Bit 15:14       reserved
//Bit 13:0        reg_hsize_proc        // unsigned ,   RW, default = 1920  reg_hsize_proc
#define FRC_BE_CLR_FLAG                            0x0054
//Bit 31:1        reserved
//Bit 0           pls_clr_fw_proc_err_flag    // unsigned ,  RW, default = 0,fw proc error flag clr bit
#define FRC_RO_INT_CNT                             0x0055
//Bit 31:29       reserved
//Bit 28:16       ro_out_int_cnt        // unsigned ,   RW, default = 1080 output interupt counter
//Bit 15:13       reserved
//Bit 12:0        ro_inp_int_cnt        // unsigned ,   RW, default = 1920 input  interupt counter
#define FRC_DDR_SLEEP_CTRL                         0x0056
//Bit 31:0        reg_sleep_ctrl_num    // unsigned  ,   RW, default =  32'h8000_0000 reg_sleep_ctrl_num
#define FRC_TOP_GCLK_CTRL                          0x0057
//Bit 31:2        reserved
//Bit 1 :0        reg_bd_reg_gclk_ctrl  // unsigned  ,   RW, default = 0 ,badedit reg gclk
#define FRC_RO_INP_PHS                             0x0058
//Bit 31:8         reserved
//Bit 7 :0         ro_frc_inp_phs       // unsigned ,   RO, default = 0  ro_frc_inp_phs,[0,input_n-1] for n:m mode
#define FRC_RO_FRM_SEC_STAT                        0x0059
//Bit 31:17     reserved
//Bit 16        ro_inp_sec_frm  // unsigned ,   RO,default = 0,current input  frame  is  security frame
//Bit 15:1      reserved
//Bit 0         ro_oup_sec_frm  // unsigned ,   RO,default = 0,current output frame  is  security frame
#define FRC_TOP_INP_RDSEC_CTRL                     0x005a
//Bit 31:18     reserved
//Bit 17:16     reg_inp_rd_sec_foc_en  // unsigned ,   RW,default = 0 , bit0:mc_rd       bit1:me_c_rd
//Bit 15:2      reserved
//Bit 1 :0      reg_inp_rd_sec_foc     // unsigned ,   RW,default = 3 , bit0:mc_rd       bit1:me_c_rd
#define FRC_TOP_ME_RDSEC_CTRL                      0x005b
//Bit 31:17     reserved
//Bit 16        reg_me_rd_sec_foc_en   // unsigned ,   RW,default = 0 , bit0:me_rd
//Bit 15:3      reserved
//Bit 2 :0      reg_me_rd_sec_foc      // unsigned ,   RW,default = 7 , bit0:pre_me_rd   bit1:cur_me_rd bit2:nxt_me_rd
#define FRC_TOP_MC_RDSEC_CTRL                      0x005c
//Bit 31:17     reserved
//Bit 16        reg_mc_rd_sec_foc_en  // unsigned ,   RW,default = 0 , bit0:mc_rd
//Bit 15:2      reserved
//Bit 1 :0      reg_mc_rd_sec_foc     // unsigned ,   RW,default = 3 , bit0:pre_mc_rd   bit1:cur_mc_rd
#define FRC_TOP_MC_HSC_CTRL                        0x005e
//Bit 31:2      reserved
//Bit 1:0       reg_mc_hsc_scale    // unsigned ,  RW, default = 0  downscale mode of x direction for me input data; 0: no downscale; 1:1/2 downscale; 2:1/4 downscale
#define FRC_REG_TOP_RESERVE0                       0x0060
//Bit 31:0        reg_top_reserve0  // unsigned ,   RW, default = 0 reg_top_reserve0 for fpga test
#define FRC_REG_TOP_RESERVE1                       0x0061
//Bit 31:0        reg_top_reserve1  // unsigned ,   RW, default = 0 reg_top_reserve1 for fpga test
#define FRC_REG_TOP_RESERVE2                       0x0062
//Bit 31:0        reg_top_reserve2  // unsigned ,   RW, default = 0 reg_top_reserve2 for fpga test
#define FRC_REG_TOP_RESERVE3                       0x0063
//Bit 31:0        reg_top_reserve3  // unsigned ,   RW, default = 0 reg_top_reserve3 for fpga test
#define FRC_REG_TOP_RESERVE4                       0x0064
//Bit 31:0        reg_top_reserve4  // unsigned ,   RW, default = 0 reg_top_reserve4 for fpga test
#define FRC_REG_TOP_RESERVE5                       0x0065
//Bit 31:0        reg_top_reserve5  // unsigned ,   RW, default = 0 reg_top_reserve5 for fpga test
#define FRC_REG_TOP_RESERVE6                       0x0066
//Bit 31:0        reg_top_reserve6  // unsigned ,   RW, default = 0 reg_top_reserve6 for fpga test
#define FRC_REG_TOP_RESERVE7                       0x0067
//Bit 31:0        reg_top_reserve7  // unsigned ,   RW, default = 0 reg_top_reserve7 for fpga test
#define FRC_REG_TOP_RESERVE8                       0x0068
//Bit 31:0        reg_top_reserve8  // unsigned ,   RW, default = 0 reg_top_reserve8 for fpga test
#define FRC_REG_TOP_RESERVE9                       0x0069
//Bit 31:0        reg_top_reserve9  // unsigned ,   RW, default = 0 reg_top_reserve9 for fpga test
#define FRC_REG_TOP_RESERVE10                      0x006a
//Bit 31:0        reg_top_reserve10 // unsigned ,   RW, default = 0 reg_top_reserve10 for fpga test
#define FRC_REG_TOP_RESERVE11                      0x006b
//Bit 31:0        reg_top_reserve11 // unsigned ,   RW, default = 0 reg_top_reserve11 for fpga test
#define FRC_REG_TOP_RESERVE12                      0x006c
//Bit 31:0        reg_top_reserve12 // unsigned ,   RW, default = 0 reg_top_reserve12 for fpga test
#define FRC_REG_TOP_RESERVE13                      0x006d
//Bit 31:0        reg_top_reserve13 // unsigned ,   RW, default = 0 reg_top_reserve13 for fpga test
#define FRC_REG_TOP_RESERVE14                      0x006e
//Bit 31:0        reg_top_reserve14 // unsigned ,   RW, default = 0 reg_top_reserve14 for fpga test
#define FRC_REG_TOP_RESERVE15                      0x006f
//Bit 31:0        reg_top_reserve15 // unsigned ,   RW, default = 0 reg_top_reserve15 for fpga test
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_top_regs.h
//
//
// Reading file:  ./frc_inc/frc_top_sec_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_TOP_SEC_STATUS                         0x0070
//Bit 31:1      reserved
//Bit 0         reg_sec_reg_keep       // unsigned  ,  RW,default = 0    , security registers
#define FRC_TOP_OUT_SEC_CTRL                       0x0071
//Bit 31:17     reserved
//Bit 16        reg_frc_isec_foc_en    // unsigned  ,  RW,default = 0 , output security  force enable
//Bit 15:1      reserved
//Bit 0         reg_frc_isec_foc       // unsigned  ,  RW,default = 1 , output security  force value
#define FRC_TOP_IN_SEC_CTRL                        0x0072
//Bit 31:17     reserved
//Bit 16        reg_frc_osec_foc_en    // unsigned  ,  RW,default = 0 , output security  force enable
//Bit 15:1      reserved
//Bit 0         reg_frc_osec_foc       // unsigned  ,  RW,default = 1 , output security  force value
#define FRC_TOP_INP_SEC_CTRL                       0x0073
//Bit 31:18     reserved
//Bit 17:16     reg_inp_wr_sec_foc_en  // unsigned ,   RW,default = 0 , bit0:mc_wr       bit1:me_c_wr
//Bit 15:2      reserved
//Bit 1 :0      reg_inp_wr_sec_foc     // unsigned ,   RW,default = 3 , bit0:mc_wr       bit1:me_c_wr
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_top_sec_regs.h
//
//
// Reading file:  ./frc_inc/frc_top_lut.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_TOP_LUT_ADDR                           0x0080
//Bit  31: 0        frc_top_lut_addr            // unsigned ,    RW, default = 10  frc frame buffer lut addr port
#define FRC_TOP_LUT_DATA                           0x0081
//Bit  31: 0        frc_top_lut_data            // unsigned ,    RW, default = 10  frc frame buffer lut data port
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_top_lut.h
//
// -----------------------------------------------
// REG_BASE:  FRC_TOP2_APB_BASE = 0x01
// -----------------------------------------------
//
// Reading file:  ./frc_inc/frc_top_regs2.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_REG_INPUT_SIZE                         0x0100
//Bit 31            reserved
//Bit 30           reg_frc_en                // unsigned ,    RW, default = 0  enable frc
//Bit 29           reg_frc_inp_yuv422        // unsigned ,    RW, default = 0  input is yuv444, 0: yuv444, 1:yuv422, default=1
//Bit 28           reg_frc_ddr_yuv422        // unsigned ,    RW, default = 1  using yuv422 in the ddr storage data, 0: yuv444, 1:yuv422, default=1
//Bit 27:26        reserved
//Bit 25:13        reg_frc_input_xsize       // unsigned ,    RW, default = 1920  horizontal pixel number of input picture. constant4rtl
//Bit 12: 0        reg_frc_input_ysize       // unsigned ,    RW, default = 1080  vertical line number of input picture. constant4rtl
#define FRC_REG_INPUT_FUL_IDX                      0x0101
//Bit 31: 0        ro_frc_input_ful_idx      // unsigned ,    RO, default = 0  sim. latest input frame idx from the input sequence. in load_org_frame_HW, ++.
#define FRC_REG_PAT_POINTER                        0x0102
//Bit 31:24        reg_init_load_num         // unsigned ,    RW, default = 0  for sim only.    load frame num. set by fw in phase_table_core
//Bit 23:16        ro_frc_pat_pointer        // unsigned ,    RO, default = 0  0~reg_frc_pd_pat_num, current input frame phase in pd pattern. in fid_loop, ++.
//Bit 15:13        reserved
//Bit 12           ro_frc_load_frm_flag      // unsigned ,    RO, default = 0  load input frame flag. prm_phase_table[(ofrm_idx+1)%otb_cnt].load_frm_flag.set by HW from lut
//Bit 11: 8        ro_frc_input_fid_p        // unsigned ,    RO, default = 0  input port the frame id just before latest frame in the memory.in load_org_frame_HW, from ro_frc_input_fid
//Bit  7: 4        ro_frc_input_fid          // unsigned ,    RO, default = 0  input port latest frame id in the memory. in load_org_frame_HW, ++reg_ip_incr[reg_film_phase].
//Bit  3: 0        ro_frc_logo_input_fid     // unsigned ,    RO, default = 0  ip logo input port latest frame id in the memory
#define FRC_REG_LOAD_ORG_FRAME_0                   0x0103
//Bit 31:28        reg_ip_incr_0             // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_0         // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_1             // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_1         // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_2             // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_2         // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_3             // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_3         // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_LOAD_ORG_FRAME_1                   0x0104
//Bit 31:28        reg_ip_incr_4             // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_4         // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_5             // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_5         // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_6             // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_6         // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_7             // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_7         // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_LOAD_ORG_FRAME_2                   0x0105
//Bit 31:28        reg_ip_incr_8             // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_8         // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_9             // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_9         // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_10            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_10        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_11            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_11        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_LOAD_ORG_FRAME_3                   0x0106
//Bit 31:28        reg_ip_incr_12            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_12        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_13            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_13        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_14            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_14        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_15            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_15        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_LOAD_ORG_FRAME_4                   0x0107
//Bit 31:28        reg_ip_incr_16            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_16        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_17            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_17        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_18            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_18        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_19            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_19        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_LOAD_ORG_FRAME_5                   0x0108
//Bit 31:28        reg_ip_incr_20            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_20        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_21            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_21        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_22            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_22        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_23            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_23        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_LOAD_ORG_FRAME_6                   0x0109
//Bit 31:28        reg_ip_incr_24            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_24        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_25            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_25        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_26            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_26        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_27            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_27        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_LOAD_ORG_FRAME_7                   0x010a
//Bit 31:28        reg_ip_incr_28            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_28        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_29            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_29        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_30            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_30        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_31            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_31        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_LOAD_ORG_FRAME_8                   0x010b
//Bit 31:28        reg_ip_incr_32            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_32        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_33            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_33        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_34            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_34        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_35            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_35        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_LOAD_ORG_FRAME_9                   0x010c
//Bit 31:28        reg_ip_incr_36            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_36        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_37            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_37        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_38            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_38        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_39            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_39        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_LOAD_ORG_FRAME_10                  0x010d
//Bit 31:28        reg_ip_incr_40            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_40        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_41            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_41        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_42            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_42        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_43            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_43        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_LOAD_ORG_FRAME_11                  0x010e
//Bit 31:28        reg_ip_incr_44            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_44        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_45            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_45        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_46            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_46        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_47            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_47        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_LOAD_ORG_FRAME_12                  0x010f
//Bit 31:28        reg_ip_incr_48            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_48        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_49            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_49        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_50            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_50        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_51            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_51        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_LOAD_ORG_FRAME_13                  0x0110
//Bit 31:28        reg_ip_incr_52            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_52        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_53            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_53        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_54            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_54        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_55            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_55        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_LOAD_ORG_FRAME_14                  0x0111
//Bit 31:28        reg_ip_incr_56            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_56        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_57            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_57        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_58            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_58        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_59            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_59        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_LOAD_ORG_FRAME_15                  0x0112
//Bit 31:28        reg_ip_incr_60            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 27           reg_ip_film_end_60        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 26:24        reserved
//Bit 23:20        reg_ip_incr_61            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 19           reg_ip_film_end_61        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 18:16        reserved
//Bit 15:12        reg_ip_incr_62            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit 11           reg_ip_film_end_62        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit 10: 8        reserved
//Bit  7: 4        reg_ip_incr_63            // unsigned ,    RW, default = 0  used in load_org_frame, reg_ip_incr[reg_film_phase].set by fw in phase_table_core
//Bit  3           reg_ip_film_end_63        // unsigned ,    RW, default = 0  used in load_org_frame, when (reg_ip_film_end[reg_film_phase]==1).set by fw in phase_table_core
//Bit  2: 0        reserved
#define FRC_REG_OUT_FID                            0x0113
//Bit 31:24        reg_otb_cnt               // unsigned ,    RW, default = 0  for sim. output period table count, for ro_frc_load_frm_flag to drive input load_org_frame_HW, set by fw in phase_table_core.
//Bit 23:21        reserved
//Bit 20           ro_frc_otb_start          // unsigned ,    RO, default = 0  when 1, delay the mv frame buffers. prm_phase_table[index].data_lut.phase_start;set by HW from lut
//Bit 19:16        ro_frc_opre_fid           // unsigned ,    RO, default = 0  output phase previous (left) frame id in the memory;
//Bit 15:12        ro_frc_ocur_fid           // unsigned ,    RO, default = 0  output phase current (right) frame id in the memory;
//Bit 11: 8        ro_frc_onex_fid           // unsigned ,    RO, default = 0  output phase future  (right right) frame id in the memory
//Bit  7: 4        ro_frc_opre_logo_fid      // unsigned ,    RO, default = 0  phase previous (left) logo frame-id in the memory
//Bit  3: 0        ro_frc_ocur_logo_fid      // unsigned ,    RO, default = 0  phase current (right)logo frame-id in the memory
#define FRC_REG_OUT_PHS                            0x0114
//Bit 31:24        reserved
//Bit 23:12        ro_frc_output_phase             // unsigned ,    RO, default = 0  output phase between opre and ocur frames (0~4095) 12 bits
//Bit 11: 0        ro_frc_output_phase_me          // unsigned ,    RO, default = 0  output phase between opre and ocur frames (0~4095) 12 bits. for ME and VP.set by HW from lut
#define FRC_REG_OUT_FRAME_IDX                      0x0115
//Bit 31: 0        ro_frc_ofrm_idx           // unsigned ,    RO, default = 0  for sim ONLY. frame number index of the output frame. in main, ++
#define FRC_REG_PHS_TABLE                          0x0116
//Bit 31:24        reg_frc_input_n           // unsigned ,    RW, default = 2  input_n, constant4rtl
//Bit 23:16        reg_frc_output_m          // unsigned ,    RW, default = 5  output_m, constant4rtl
//Bit 15: 8        reg_frc_film_mode         // unsigned ,    RW, default = 0  film mode for firmware. 5bits should be enough. constant4rtl
//Bit  7: 0        reg_frc_film_mode_fw      // unsigned ,    RW, default = 0  film mode for firmware. 5bits should be enough.
#define FRC_REG_FILM_PHS_1                         0x0117
//Bit 31:24        reg_film_phase_fw         // unsigned ,    RW, default = 0  film_phase index. set by fw: fd_fwdet_core
//Bit 23:18        reserved
//Bit 17           reg_film_mix_mode_fw      // unsigned ,    RW, default = 0  film mix mode
//Bit 16           reg_film_hwfw_sel         // unsigned ,    RW, default = 0  0: use hw for film det; 1: use fw for film det
//Bit 15: 8        ro_frc_film_mode_hw       // unsigned ,    RO, default = 0  0: video; 1:22; 2:32; 3: 3223; 4: 2224; 5:32322; 6:44; 7:21111; 8:23322; 9:2111; 10 22224; 11: 33, 12:334; 13:55; 14: 64; 15:66; 16:87; 17:212;
//Bit  7: 0        ro_film_phase_hw          // unsigned ,    RO, default = 0  film_phase index. set by hw: fd_hwdet_core
#define FRC_REG_FILM_PHS_2                         0x0118
//Bit 31:24        ro_frc_frc_phase          // unsigned ,    RO, default = 0  output frc phase index. ro_frc_ofrm_idx%output_m. set by HW in update_ofrm_info_HW.
//Bit 23:16        ro_film_phase             // unsigned ,    RO, default = 0  film_phase index. set by fw: fd_fwdet_core
//Bit 15: 8        reserved
//Bit  7: 2        reserved
//Bit  1           ro_clear_vbuffer_trigger  // unsigned ,    RO, default = 0  signal to trigger clear vector buffer function.
//Bit  0           ro_clear_vbuffer_en       // unsigned ,    RO, default = 0  signal to clear vector buffer.
#define FRC_REG_BLACKBAR_XYXY_ST                   0x0119
//Bit 31:16        reg_blackbar_xyxy_0       // unsigned ,    RW, default = 0  blackbar x st
//Bit 15: 0        reg_blackbar_xyxy_1       // unsigned ,    RW, default = 0  blackbar y st
#define FRC_REG_BLACKBAR_XYXY_ED                   0x011a
//Bit 31:16        reg_blackbar_xyxy_2       // unsigned ,    RW, default = 1919  blackbar x ed
//Bit 15: 0        reg_blackbar_xyxy_3       // unsigned ,    RW, default = 1079  blackbar y ed
#define FRC_REG_BLACKBAR_XYXY_ME_ST                0x011b
//Bit 31:16        reg_blackbar_xyxy_me_0    // unsigned ,    RW, default = 0  me blackbar x st
//Bit 15: 0        reg_blackbar_xyxy_me_1    // unsigned ,    RW, default = 0  me blackbar y st
#define FRC_REG_BLACKBAR_XYXY_ME_ED                0x011c
//Bit 31:16        reg_blackbar_xyxy_me_2    // unsigned ,    RW, default = 1919  me blackbar x ed
//Bit 15: 0        reg_blackbar_xyxy_me_3    // unsigned ,    RW, default = 1079  me blackbar y ed
#define FRC_REG_DEMOWINDOW1_XYXY_ST                0x011d
//Bit 31:16        reg_demowindow1_xyxy_0    // unsigned ,    RW, default = 0  demowindow1 x st
//Bit 15: 0        reg_demowindow1_xyxy_1    // unsigned ,    RW, default = 0  demowindow1 y st
#define FRC_REG_DEMOWINDOW1_XYXY_ED                0x011e
//Bit 31:16        reg_demowindow1_xyxy_2    // unsigned ,    RW, default = 1919  demowindow1 x ed
//Bit 15: 0        reg_demowindow1_xyxy_3    // unsigned ,    RW, default = 1079  demowindow1 y ed
#define FRC_REG_DEMOWINDOW2_XYXY_ST                0x011f
//Bit 31:16        reg_demowindow2_xyxy_0    // unsigned ,    RW, default = 0  demowindow2 x st
//Bit 15: 0        reg_demowindow2_xyxy_1    // unsigned ,    RW, default = 0  demowindow2 y st
#define FRC_REG_DEMOWINDOW2_XYXY_ED                0x0120
//Bit 31:16        reg_demowindow2_xyxy_2    // unsigned ,    RW, default = 1919  demowindow2 x ed
//Bit 15: 0        reg_demowindow2_xyxy_3    // unsigned ,    RW, default = 1079  demowindow2 y ed
#define FRC_REG_DEMOWINDOW3_XYXY_ST                0x0121
//Bit 31:16        reg_demowindow3_xyxy_0    // unsigned ,    RW, default = 0  demowindow3 x st
//Bit 15: 0        reg_demowindow3_xyxy_1    // unsigned ,    RW, default = 0  demowindow3 y st
#define FRC_REG_DEMOWINDOW3_XYXY_ED                0x0122
//Bit 31:16        reg_demowindow3_xyxy_2    // unsigned ,    RW, default = 1919  demowindow3 x ed
//Bit 15: 0        reg_demowindow3_xyxy_3    // unsigned ,    RW, default = 1079  demowindow3 y ed
#define FRC_REG_DEMOWINDOW4_XYXY_ST                0x0123
//Bit 31:16        reg_demowindow4_xyxy_0    // unsigned ,    RW, default = 0  demowindow4 x st
//Bit 15: 0        reg_demowindow4_xyxy_1    // unsigned ,    RW, default = 0  demowindow4 y st
#define FRC_REG_DEMOWINDOW4_XYXY_ED                0x0124
//Bit 31:16        reg_demowindow4_xyxy_2    // unsigned ,    RW, default = 1919  demowindow4 x ed
//Bit 15: 0        reg_demowindow4_xyxy_3    // unsigned ,    RW, default = 1079  demowindow4 y ed
#define FRC_LOGO_BB_LFT_TOP                        0x0125
//Bit 31:16        reg_logo_bb_xyxy_0        // unsigned ,    RW, default = 0  logo lft,   dft0
//Bit 15: 0        reg_logo_bb_xyxy_1        // unsigned ,    RW, default = 0  logo top,   dft0
#define FRC_LOGO_BB_RIT_BOT                        0x0126
//Bit 31:16        reg_logo_bb_xyxy_2        // unsigned ,    RW, default = 1919  logo rit,   dft xsize - 1
//Bit 15: 0        reg_logo_bb_xyxy_3        // unsigned ,    RW, default = 1079  logo bot,   dft ysize - 1
#define FRC_REG_MELOGO_BB_BLK_XYXY_ST              0x0127
//Bit 31:16        reg_melogo_bb_blk_xyxy_0  // unsigned ,    RW, default = 0  melogo x st
//Bit 15: 0        reg_melogo_bb_blk_xyxy_1  // unsigned ,    RW, default = 0  melogo y st
#define FRC_REG_MELOGO_BB_BLK_XYXY_ED              0x0128
//Bit 31:16        reg_melogo_bb_blk_xyxy_2  // unsigned ,    RW, default = 239  melogo x ed
//Bit 15: 0        reg_melogo_bb_blk_xyxy_3  // unsigned ,    RW, default = 134  melogo y ed
#define FRC_REG_DS_WIN_SETTING_LFT_TOP             0x0129
//Bit 31:16        reg_bb_ds_xyxy_0          // unsigned ,    RW, default = 0  ds lft posi,    dft0
//Bit 15: 0        reg_bb_ds_xyxy_1          // unsigned ,    RW, default = 0  ds top posi,    dft0
#define FRC_BBD_DS_WIN_SETTING_RIT_BOT             0x012a
//Bit 31:16        reg_bb_ds_xyxy_2          // unsigned ,    RW, default = 1919  ds rit posi,    dft xsize-1
//Bit 15: 0        reg_bb_ds_xyxy_3          // unsigned ,    RW, default = 1079  ds bot posi,    dft ysize-1
#define FRC_REG_BLK_SIZE_XY                        0x012b
//Bit 31:26        reserved
//Bit 25           reg_me_logo_dsx_ratio     // unsigned ,    RW, default = 0  0: ME_image size/logo_image_size =1; 1: ME_image size/logo_image_size =2 (me_image_size=1920*1080);
//Bit 24           reg_me_logo_dsy_ratio     // unsigned ,    RW, default = 0  0: ME_image size/logo_image_size =1; 1: ME_image size/logo_image_size =2 (me_image_size=1920*1080);
//Bit 23:22        reserved
//Bit 21:19        reg_me_blksize_x          // unsigned ,    RW, default = 2  block size x(2^reg) in ME submodule under the Buf_blend data (downsampled); default = 2;
//Bit 18:16        reg_me_blksize_y          // unsigned ,    RW, default = 2  block size y(2^reg) in ME submodule under the Buf_blend data (downsampled); default = 2;
//Bit 15:14        reg_me_mvx_div_mode       // unsigned ,    RW, default = 0  0: MVx has 2bits decimal; 1: 3bits decimal; 2: 4bits decimal @ME resolution.
//Bit 13:12        reg_me_mvy_div_mode       // unsigned ,    RW, default = 0  0: MVy has 2bits decimal; 1: 3bits decimal; 2: 4bits decimal @ME resolution.
//Bit 11: 0        reserved
#define FRC_REG_BLK_SCALE                          0x012c
//Bit 31:20        reserved
//Bit 19:18        reg_osd_logo_ratio        // unsigned ,    RW, default = 1  ratio for osd to logo. 0, 1:1; 1, 1:2; 2, 1:4; 3, 1:8
//Bit 17:14        reg_osd_logo_ratio_th     // unsigned ,    RW, default = 1  aggregation threshold for osd alpha bit to iplogo path.
//Bit 13:12        reg_ip_blklogo_mode       // unsigned ,    RW, default = 2  0: fBuf_ip_blklogo; 1: fBuf_ip_blklogo_sync[frc_opre_logo_fid]; 2: fBuf_ip_blklogo_sync[frc_ocur_logo_fid]; 3: and.
//Bit 11: 9        reg_mc_blksize_xscale     // unsigned ,    RW, default = 3  (0~4), mc block horizontal size in full pixel scale = (1x2^xscal), set to (reg_me_dsx_scale + 2) as default
//Bit  8: 6        reg_mc_blksize_yscale     // unsigned ,    RW, default = 3  (0~4), mc block vertical size in full pixel scale = (1x2^yscal), set to (reg_me_dsy_scale + 2) as default
//Bit  5: 4        reg_logo_mc_ratio         // unsigned ,    RW, default = 1  0, 1:1; 1, 1:2; 2, 1:4; 3, 1:8
//Bit  3: 2        reserved
//Bit  1           reg_iplogo_osdmerge       // unsigned ,    RW, default = 0  0: do iplogo only at new original frame input. 1: do the last two stages of iplogo at every frame. work with reg_iplogo_osdbit.
//Bit  0           reg_iplogo_osdmode        // unsigned ,    RW, default = 0  0: use separate logo fid for both input/output.1: use mc fid for logo osdmode for both input/output.
#define FRC_REG_ME_HME_SCALE                       0x012d
//Bit 31: 8        reserved
//Bit  7: 6        reg_me_dsx_scale          // unsigned ,    RW, default = 1  downscale mode of x direction for me input data; 0: no downscale; 1:1/2 downscale; 2:1/4 downscale
//Bit  5: 4        reg_me_dsy_scale          // unsigned ,    RW, default = 1  downscale mode of x direction for me input data; 0: no downscale; 1:1/2 downscale; 2:1/4 downscale
//Bit  3: 0        reserved
#define FRC_REG_CURSOR                             0x012e
//Bit 31:29        reserved
//Bit 28           reg_cursor_ipdisp_en      // unsigned ,    RW, default = 0  for ip cursor display: enable
//Bit 27:20        reg_cursor_ipdisp_color   // unsigned ,    RW, default = 200  for ip cursor display: luma
//Bit 19:17        reserved
//Bit 16           reg_cursor_mcdisp_en      // unsigned ,    RW, default = 0  for mc cursor display: enable
//Bit 15:11        reserved
//Bit 10: 8        reg_cursor_mcdisp_color   // unsigned ,    RW, default = 0  for mc cursor display: luma
//Bit  7: 0        reserved
#define FRC_REG_IP_CURSOR_0                        0x012f
//Bit 31:23        reserved
//Bit 22:13        ro_cursor_ip_0            // unsigned ,    RO, default = 0  for ip cursor readback.
//Bit 12: 0        reg_cursor_ip_coordi_0    // unsigned ,    RW, default = 0  for ip cursor readback: [0]:col; [1]:row
#define FRC_REG_IP_CURSOR_1                        0x0130
//Bit 31:23        reserved
//Bit 22:13        ro_cursor_ip_1            // unsigned ,    RO, default = 0  for ip cursor readback.
//Bit 12: 0        reg_cursor_ip_coordi_1    // unsigned ,    RW, default = 0  for ip cursor readback: [0]:col; [1]:row
#define FRC_REG_MC_CURSOR_0                        0x0131
//Bit 31:23        reserved
//Bit 22:13        ro_cursor_mc_0            // unsigned ,    RO, default = 0  for mc cursor readback.
//Bit 12: 0        reg_cursor_mc_coordi_0    // unsigned ,    RW, default = 0  for mc cursor readback: [0]:col; [1]:row
#define FRC_REG_MC_CURSOR_1                        0x0132
//Bit 31:23        reserved
//Bit 22:13        ro_cursor_mc_1            // unsigned ,    RO, default = 0  for mc cursor readback.
//Bit 12: 0        reg_cursor_mc_coordi_1    // unsigned ,    RW, default = 0  for mc cursor readback: [0]:col; [1]:row
#define FRC_REG_MC_CURSOR_2                        0x0133
//Bit 31:23        reserved
//Bit 22:13        ro_cursor_mc_2            // unsigned ,    RO, default = 0  for mc cursor readback.
//Bit 12: 0        reg_cursor_mc_coordi_2    // unsigned ,    RW, default = 0  for mc cursor readback: [0]:col; [1]:row
#define FRC_REG_DEBUG_PATH_TOP_BOT_MOTION_POSI2    0x0134
//Bit 31:16        reg_debug_top_motion_posi2 // unsigned ,    RW, default = 0  top motion posi2
//Bit 15: 0        reg_debug_bot_motion_posi2 // unsigned ,    RW, default = 1079  bot motion posi2
#define FRC_REG_DEBUG_PATH_LFT_RIT_MOTION_POSI2    0x0135
//Bit 31:16        reg_debug_lft_motion_posi2 // unsigned ,    RW, default = 0  lft motion posi2
//Bit 15: 0        reg_debug_rit_motion_posi2 // unsigned ,    RW, default = 1919  rit motion posi2
#define FRC_REG_DEBUG_PATH_TOP_BOT_MOTION_POSI1    0x0136
//Bit 31:16        reg_debug_top_motion_posi1 // unsigned ,    RW, default = 0  top motion posi1
//Bit 15: 0        reg_debug_bot_motion_posi1 // unsigned ,    RW, default = 1079  bot motion posi1
#define FRC_REG_DEBUG_PATH_LFT_RIT_MOTION_POSI1    0x0137
//Bit 31:16        reg_debug_lft_motion_posi1 // unsigned ,    RW, default = 0  lft motion posi1
//Bit 15: 0        reg_debug_rit_motion_posi1 // unsigned ,    RW, default = 1919  rit motion posi1
#define FRC_REG_DEBUG_PATH_TOP_BOT_EDGE_POSI2      0x0138
//Bit 31:16        reg_debug_top_edge_posi2  // unsigned ,    RW, default = 0  top edge posi2
//Bit 15: 0        reg_debug_bot_edge_posi2  // unsigned ,    RW, default = 1079  bot edge posi2
#define FRC_REG_DEBUG_PATH_LFT_RIT_EDGE_POSI2      0x0139
//Bit 31:16        reg_debug_lft_edge_posi2  // unsigned ,    RW, default = 0  lft edge posi2
//Bit 15: 0        reg_debug_rit_edge_posi2  // unsigned ,    RW, default = 1919  rit edge posi2
#define FRC_REG_DEBUG_PATH_TOP_BOT_EDGE_POSI1      0x013a
//Bit 31:16        reg_debug_top_edge_posi1  // unsigned ,    RW, default = 0  top edge posi1
//Bit 15: 0        reg_debug_bot_edge_posi1  // unsigned ,    RW, default = 1079  bot edge posi1
#define FRC_REG_DEBUG_PATH_LFT_RIT_EDGE_POSI1      0x013b
//Bit 31:16        reg_debug_lft_edge_posi1  // unsigned ,    RW, default = 0  lft edge posi1
//Bit 15: 0        reg_debug_rit_edge_posi1  // unsigned ,    RW, default = 1919  rit edge posi1
#define FRC_REG_DEBUG_FALSE_COLOR                  0x013c
//Bit 31: 2        reserved
//Bit  1: 0        reg_debug_false_color_mv_show_mode // unsigned ,    RW, default = 0  0, mvx on cb mvy on cr, 1 mvx on luma,2 mvy on luma, 3 abs mvx + abs mvy avg on luma, default 0
#define FRC_REG_ME_DEBUG1                          0x013d
//Bit 31           reg_debug_path_en         // unsigned ,    RW, default = 0
//Bit 30           reg_me_debug_cn_fs_en     // unsigned ,    RW, default = 0  enable signal of debug cn full search mv, 0: disable, 1:enable
//Bit 29           reg_me_debug_nc_fs_en     // unsigned ,    RW, default = 0  enable signal of debug nc full search mv, 0: disable, 1:enable
//Bit 28:26        reg_me_debug_pc_prj_mode  // unsigned ,    RW, default = 0  enable signal of debug pc proj mv , 0: disable, 1: prj mv0, 2: prj mv1, 3: prj mv2, 4: prj mv3
//Bit 25:23        reg_me_debug_cp_prj_mode  // unsigned ,    RW, default = 0  enable signal of debug cp proj mv , 0: disable, 1: prj mv0, 2: prj mv1, 3: prj mv2, 4: prj mv3
//Bit 22:20        reg_me_debug_pc_sad_mode  // unsigned ,    RW, default = 0  enable signal of debug sad, 0: disable ,1:pc_phs_mv sad,2:weighted sad_dc, 3:weighted sad_ac,4:pc_phs_mv.sad_4x4
//Bit 19:17        reg_me_debug_cn_sad_mode  // unsigned ,    RW, default = 0  enable signal of debug sad, 0: disable ,1:cn_uni_mv sad,2:weighted sad_dc, 3:weighted sad_ac,4:cn_uni_mv.sad_4x4
//Bit 16:14        reg_me_debug_nc_sad_mode  // unsigned ,    RW, default = 0  enable signal of debug sad, 0: disable ,1:nc_uni_mv sad,2:weighted sad_dc, 3:weighted sad_ac,4:nc_uni_mv.sad_4x4
//Bit 13:11        reg_me_debug_sad_div      // unsigned ,    RW, default = 2  the bits to clip,0:255 clip,1:511 clip,2:1023 clip
//Bit 10           reg_me_debug_pc_acdc_flg_en // unsigned ,    RW, default = 0  enable signal of debug acdc flag, 0: disable, 1:enable
//Bit  9           reg_me_debug_cn_acdc_flg_en // unsigned ,    RW, default = 0  enable signal of debug acdc flag, 0: disable, 1:enable
//Bit  8           reg_me_debug_nc_acdc_flg_en // unsigned ,    RW, default = 0  enable signal of debug acdc flag, 0: disable, 1:enable
//Bit  7            reserved
//Bit  6           reg_me_debug_pc_smooth0_en // unsigned ,    RW, default = 0  enable signal of debug mv_smooth0 func, 0: disable, 1:enable
//Bit  5           reg_me_debug_cn_smooth0_en // unsigned ,    RW, default = 0  enable signal of debug mv_smooth0 func, 0: disable, 1:enable
//Bit  4           reg_me_debug_nc_smooth0_en // unsigned ,    RW, default = 0  enable signal of debug mv_smooth0 func, 0: disable, 1:enable
//Bit  3            reserved
//Bit  2           reg_me_debug_pc_smooth1_en // unsigned ,    RW, default = 0  enable signal of debug mv_smooth1 func, 0: disable, 1:enable
//Bit  1           reg_me_debug_cn_smooth1_en // unsigned ,    RW, default = 0  enable signal of debug mv_smooth1 func, 0: disable, 1:enable
//Bit  0           reg_me_debug_nc_smooth1_en // unsigned ,    RW, default = 0  enable signal of debug mv_smooth1 func, 0: disable, 1:enable
#define FRC_REG_ME_DEBUG2                          0x013e
//Bit 31:24        reserved
//Bit 23           reg_me_debug_pc_smooth2_en // unsigned ,    RW, default = 0  enable signal of debug mv_smooth2 func, 0: disable, 1:enable
//Bit 22           reg_me_debug_cn_smooth2_en // unsigned ,    RW, default = 0  enable signal of debug mv_smooth2 func, 0: disable, 1:enable
//Bit 21           reg_me_debug_nc_smooth2_en // unsigned ,    RW, default = 0  enable signal of debug mv_smooth2 func, 0: disable, 1:enable
//Bit 20           reg_me_debug_pc_smobj_en  // unsigned ,    RW, default = 0  enable signal of debug limit func, 0: disable, 1:enable
//Bit 19            reserved
//Bit 18           reg_me_debug_pc_smooth3_en // unsigned ,    RW, default = 0  enable signal of debug mv_smooth2 func, 0: disable, 1:enable
//Bit 17           reg_me_debug_cn_smooth3_en // unsigned ,    RW, default = 0  enable signal of debug mv_smooth2 func, 0: disable, 1:enable
//Bit 16           reg_me_debug_nc_smooth3_en // unsigned ,    RW, default = 0  enable signal of debug mv_smooth2 func, 0: disable, 1:enable
//Bit 15            reserved
//Bit 14           reg_me_debug_pc_limit_en  // unsigned ,    RW, default = 0  enable signal of debug limit func, 0: disable, 1:enable
//Bit 13           reg_me_debug_cn_limit_en  // unsigned ,    RW, default = 0  enable signal of debug limit func, 0: disable, 1:enable
//Bit 12           reg_me_debug_nc_limit_en  // unsigned ,    RW, default = 0  enable signal of debug limit func, 0: disable, 1:enable
//Bit 11            reserved
//Bit 10: 8        reg_me_debug_raw_rp_flg_mode // unsigned ,    RW, default = 0  enable signal of debug raw_rp_flg, 0: disable,1:flg,2:t1_flg,3:t2_flg_strict,4:t2_flg,5:t3_flg
//Bit  7           reg_me_debug_fine_rp_flg_en // unsigned ,    RW, default = 0  enable signal of debug fine_rp_flg, 0: disable , 1:enable
//Bit  6           reg_me_debug_final_rp_flg_en // unsigned ,    RW, default = 0  enable signal of debug final_rp_flg, 0: disable , 1:enable
//Bit  5           reg_me_debug_line_flg_en  // unsigned ,    RW, default = 0  enable signal of debug line_flg, 0: disable , 1:enable
//Bit  4           reg_me_debug_map_drt_en   // unsigned ,    RW, default = 0  enable signal of debug map_drt, 0: disable , 1:enable
//Bit  3            reserved
//Bit  2           reg_me_debug_auto_flat_flg_en // unsigned ,    RW, default = 0  enable signal of debug auto_flag_flg, 0: disable , 1:enable
//Bit  1           reg_me_debug_hard_ab_flg_en // unsigned ,    RW, default = 0  enable signal of debug hard_ab_flg, 0: disable , 1:enable
//Bit  0           reg_me_debug_fs_en_flg_en // unsigned ,    RW, default = 0  enable signal of debug fs_en_flg, 0: disable , 1:enable
#define FRC_REG_ME_DEBUG3                          0x013f
//Bit 31:22        reserved
//Bit 21:20        reg_me_debug_sad_surface_mode // unsigned ,    RW, default = 0  enable signal of debug auto_sad_surface, 0:disable,1:40*24,2:80*48,3:160*96
//Bit 19:12        reg_me_debug_sad_surface_row // unsigned ,    RW, default = 0  row of debug auto sad surface
//Bit 11: 0        reg_me_debug_sad_surface_col // unsigned ,    RW, default = 0  col of debug auto sad surface
#define FRC_REG_VP_DEBUG1                          0x0140
//Bit 31:20        reserved
//Bit 19           reg_vp_debug_occl_type_en // unsigned ,    RW, default = 0  enable of occl_type
//Bit 18           reg_vp_debug_cpt_8_cn_flg_en // unsigned ,    RW, default = 0  enable of cpt_8_cp_flg
//Bit 17           reg_vp_debug_cnt_8_cp_flg_en // unsigned ,    RW, default = 0  enable of cnt_8_cp_flg
//Bit 16:13        reg_vp_debug_retimer_mvs_mode // unsigned ,    RW, default = 0  enable of retimer,1:NC,2:CN,3:CN2NCr,4:CN2NCrr,5:CP,6:CP2PCr,7:CP2PCrr,8:CN2PCr,9:CP2NCr
//Bit 12: 8        reg_vp_debug_dehalo_mvs_mode // unsigned ,    RW, default = 0  enable of dehalo,1:PC_PHS,2:CP,3:CPr,4:CPrr,5:CPr2PCr,6:CPrr2PCr,7:CPr4PBr,8:CPrr4PBr,9:avgCPr4PBr,10:PC,11:PCr,12:PCrr,13:PCr2CPr,14:PCrr2CPr,15:PCr4CNr,16:PCrr4CNr,17:avgPCrCNr
//Bit  7           reg_vp_debug_cover_mv_phs_en // unsigned ,    RW, default = 0  enable of cover mv phs
//Bit  6           reg_vp_debug_uncov_mv_phs_en // unsigned ,    RW, default = 0  enable of uncov mv phs
//Bit  5           reg_vp_debug_occl_fhri_en // unsigned ,    RW, default = 0  enable of occl_fhri
//Bit  4           reg_vp_debug_type_replace_phs_mv_en // unsigned ,    RW, default = 0  enable of type replace phs mv
//Bit  3           reg_vp_debug_phs_rp_flg_en // unsigned ,    RW, default = 0  enable of phs rp flg en
//Bit  2           reg_vp_debug_phs_sobj_flg_en // unsigned ,    RW, default = 0  enable of phs sobj flg en
//Bit  1           reg_mv_debug_var_level_en // unsigned ,    RW, default = 0  enable of var level debug
//Bit  0           reg_mv_debug_var2_level_en // unsigned ,    RW, default = 0  enable of var2 level debug
#define FRC_REG_MC_DEBUG1                          0x0141
//Bit 31:24        reserved
//Bit 23           reg_mc_debug_show_blksize_en // unsigned ,    RW, default = 0  enable of show blksize
//Bit 22           reg_mc_debug_show_grid_en // unsigned ,    RW, default = 0  enable of show grid
//Bit 21           reg_mc_debug_show_bbd_en  // unsigned ,    RW, default = 0  enable of show bbd
//Bit 20:17        reg_mc_debug_show_demowindow_mode // unsigned ,    RW, default = 0  enable of show demowindow 4321
//Bit 16           reg_mc_debug_show_deflicker_pix_en // unsigned ,    RW, default = 0  enable of show deflicker block en
//Bit 15           reg_mc_debug_show_pts_en  // unsigned ,    RW, default = 0  enable of show pts
//Bit 14:12        reg_mc_debug_show_pts_mode // unsigned ,    RW, default = 0  0: p_pts_y 1: p_pts_c 2: c_pts_y 3: c_pts_c 4: p_pts_y and p_pts_y 5:c_pts_c and c_pts_c
//Bit 11           reg_mc_debug_show_ptb_en  // unsigned ,    RW, default = 0  enable of show ptb
//Bit 10: 8        reg_mc_debug_show_ptb_mode // unsigned ,    RW, default = 0  0: p_ptb_y 1: p_ptb_c 2: c_ptb_y 3: c_ptb_c 4: p_ptb_y and p_ptb_y 5:c_ptb_c and c_ptb_c
//Bit  7           reg_mc_debug_show_ptl_en  // unsigned ,    RW, default = 0  enable of show ptl
//Bit  6: 4        reg_mc_debug_show_ptl_mode // unsigned ,    RW, default = 0  0: p_ptl 1: c_ptl 2: p_ptl or c_ptl
//Bit  3           reg_mc_debug_show_ptw_en  // unsigned ,    RW, default = 0  enable of show ptw
//Bit  2: 0        reg_mc_debug_show_ptw_mode // unsigned ,    RW, default = 0  0: p_ptl 1: c_ptl 2: p_ptl or c_ptl
#define FRC_LOGO_DEBUG                             0x0142
//Bit 31:20        reserved
//Bit 19           reg_logo_debug_ip_pix_logo_en // unsigned ,    RW, default = 0
//Bit 18           reg_logo_debug_ip_blk_logo_en // unsigned ,    RW, default = 0
//Bit 17           reg_logo_debug_me_blk_logo_en // unsigned ,    RW, default = 0
//Bit 16           reg_logo_debug_mc_logo_en // unsigned ,    RW, default = 0
//Bit 15           reg_iplogo_inner_pxl_debug_en // unsigned ,    RW, default = 0  dft=0; 0: close inner debug, show ip_pxllogo result;   1: open inner debug, show inner pxl signal in iplogo
//Bit 14:10        reg_iplogo_inner_pxl_debug_mode // unsigned ,    RW, default = 0  dft=0; MUX many inner pxl signals in iplogo
//Bit  9           reg_iplogo_pxl_fid_mode   // unsigned ,    RW, default = 0  0, pre, 1, cur
//Bit  8           reg_iplogo_inner_blk_debug_en // unsigned ,    RW, default = 0  dft=0; 0: close inner debug, show ip_blklogo result;   1: open inner debug, show inner blk signal in iplogo
//Bit  7: 3        reg_iplogo_inner_blk_debug_mode // unsigned ,    RW, default = 0  dft=0; MUX many inner blk signals in iplogo
//Bit  2           reg_melogo_inner_debug_en // unsigned ,    RW, default = 0  0: close inner debug, show me_blklogo result;   1: open inner debug, show inner signal in melogo
//Bit  1: 0        reg_melogo_inner_debug_mode // unsigned ,    RW, default = 0  0: show ip_blklogo;  1: show smv_clr_flag, 2: show pan_clr_flag, 3:  show disap_clr_flag;
#define FRC_BBD_DEBUG_LINE_EN                      0x0143
//Bit 31: 4        reserved
//Bit  3           reg_bbd_debug_motion_line1_en // unsigned ,    RW, default = 0  debug motion line 1 en
//Bit  2           reg_bbd_debug_motion_line2_en // unsigned ,    RW, default = 0  debug motion line2 en
//Bit  1           reg_bbd_debug_edge_line1_en // unsigned ,    RW, default = 0  debug edge line1 en
//Bit  0           reg_bbd_debug_edge_line2_en // unsigned ,    RW, default = 0  debug edge line2 en
#define FRC_FRAME_BUFFER_NUM                       0x0144
//Bit 31:16        reserved
//Bit 15:13        reserved
//Bit 12: 8        reg_logo_fb_num           // unsigned ,    RW, default = 10  logo frame buffer number
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_fb_num            // unsigned ,    RW, default = 10  frc frame buffer number
#define FRC_REG_DEBUG_PATH_MV                      0x0145
//Bit 31: 4        reserved
//Bit  3            reserved
//Bit  2           reg_mc_debug_oct1_en      // unsigned ,    RW, default = 0  show oct1 flag
//Bit  1            reserved
//Bit  0           reg_mc_debug_disp_pht1_en // unsigned ,    RW, default = 0  show pht mvx1 mvy1
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_top_regs2.h
//
//
// Reading file:  ./frc_inc/frc_badedit_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_REG_FWD_PHS                            0x0146
//Bit 31:30        reserved
//Bit 29           reg_frc_phs_dec_sel       // unsigned ,    RW, default = 0  0 :HW lut method, 1 : HW auto calculation method, for Bad-edit
//Bit 28           reg_frc_logo_buf_ctrl     // unsigned ,    RW, default = 0  0 :HW lut method for logo id, 1 : HW auto calculation method for logo id, for Bad-edit
//Bit 27:26        reserved
//Bit 25           ro_frc_load_frm_flag_mux  // unsigned ,    RO, default = 0  load input frame flag. set by fw
//Bit 24           ro_frc_otb_start_mux      // unsigned ,    RO, default = 0  1, delay the mv frame buffers. prm_phase_table[index].data_lut.phase_start;set by fw from
//Bit 23:12        reg_frc_phase            // unsigned ,    RW, default = 0  phase between opre and ocur frames (0~4095) 12 bits  set by fw
//Bit 11: 0        reg_frc_phase_me         // unsigned ,    RW, default = 0  phase between opre and ocur frames (0~4095) 12 bits. for ME and VP.set by fw
#define FRC_REG_FWD_FID                            0x0147
//Bit 31:28        reg_frc_input_fid_p       // unsigned ,    RW, default = 0  input port the frame id just before latest frame in the memory.fw cal,from reg_frc_input_fid
//Bit 27:24        reg_frc_input_fid         // unsigned ,    RW, default = 3  input port latest frame id in the memory. in fw cal
//Bit 23:20        reg_frc_logo_input_fid    // unsigned ,    RW, default = 0  ip logo input port latest frame id in the memory. when (reg_ip_film_end[reg_film_phase]==1), ++.
//Bit 19:16        reg_frc_opre_logo_fid     // unsigned ,    RW, default = 1  phase previous (left) logo frame-id in the memory
//Bit 15:12        reg_frc_ocur_logo_fid     // unsigned ,    RW, default = 0  output phase current (right)logo frame-id in the memory
//Bit 11: 8        ro_frc_opre_fid_mux       // unsigned ,    RO, default = 0  pre fid set by fw
//Bit  7: 4        ro_frc_ocur_fid_mux       // unsigned ,    RO, default = 0  cur fid set by fw
//Bit  3: 0        ro_frc_onex_fid_mux       // unsigned ,    RO, default = 0  nex fid set by fw
#define FRC_REG_FWD_FID_POSI                       0x0148
//Bit 31:28        reg_frc_opre_point        // unsigned ,    RW, default = 0  fid position in lut
//Bit 27:24        reg_frc_ocur_point        // unsigned ,    RW, default = 1  fid position in lut
//Bit 23:20        reg_frc_onex_point        // unsigned ,    RW, default = 2  fid position in lut
//Bit 19:16        reg_frc_out_point         // unsigned ,    RW, default = 2  fid position in lut
//Bit 15            reserved
//Bit 14:12        reg_frc_opre_idx          // unsigned ,    RW, default = 0  pre fid index in lut
//Bit 11            reserved
//Bit 10: 8        reg_frc_ocur_idx          // unsigned ,    RW, default = 0  cur fid index in lut
//Bit  7            reserved
//Bit  6: 4        reg_frc_onex_idx          // unsigned ,    RW, default = 0  nex fid index in lut
//Bit  3            reserved
//Bit  2: 0        reg_frc_out_idx           // unsigned ,    RW, default = 0  current index in lut
#define FRC_REG_LOAD_FRAME_FLAG_0                  0x0149
//Bit 31           reg_frc_A1A2_change_flag_31 // unsigned ,    RW, default = 0  input frame flag lut
//Bit 30           reg_frc_A1A2_change_flag_30 // unsigned ,    RW, default = 0
//Bit 29           reg_frc_A1A2_change_flag_29 // unsigned ,    RW, default = 0
//Bit 28           reg_frc_A1A2_change_flag_28 // unsigned ,    RW, default = 0
//Bit 27           reg_frc_A1A2_change_flag_27 // unsigned ,    RW, default = 0
//Bit 26           reg_frc_A1A2_change_flag_26 // unsigned ,    RW, default = 0
//Bit 25           reg_frc_A1A2_change_flag_25 // unsigned ,    RW, default = 0
//Bit 24           reg_frc_A1A2_change_flag_24 // unsigned ,    RW, default = 0
//Bit 23           reg_frc_A1A2_change_flag_23 // unsigned ,    RW, default = 0
//Bit 22           reg_frc_A1A2_change_flag_22 // unsigned ,    RW, default = 0
//Bit 21           reg_frc_A1A2_change_flag_21 // unsigned ,    RW, default = 0
//Bit 20           reg_frc_A1A2_change_flag_20 // unsigned ,    RW, default = 0
//Bit 19           reg_frc_A1A2_change_flag_19 // unsigned ,    RW, default = 0
//Bit 18           reg_frc_A1A2_change_flag_18 // unsigned ,    RW, default = 0
//Bit 17           reg_frc_A1A2_change_flag_17 // unsigned ,    RW, default = 0
//Bit 16           reg_frc_A1A2_change_flag_16 // unsigned ,    RW, default = 0
//Bit 15           reg_frc_A1A2_change_flag_15 // unsigned ,    RW, default = 0
//Bit 14           reg_frc_A1A2_change_flag_14 // unsigned ,    RW, default = 0
//Bit 13           reg_frc_A1A2_change_flag_13 // unsigned ,    RW, default = 0
//Bit 12           reg_frc_A1A2_change_flag_12 // unsigned ,    RW, default = 0
//Bit 11           reg_frc_A1A2_change_flag_11 // unsigned ,    RW, default = 0
//Bit 10           reg_frc_A1A2_change_flag_10 // unsigned ,    RW, default = 0
//Bit  9           reg_frc_A1A2_change_flag_9 // unsigned ,    RW, default = 0
//Bit  8           reg_frc_A1A2_change_flag_8 // unsigned ,    RW, default = 0
//Bit  7           reg_frc_A1A2_change_flag_7 // unsigned ,    RW, default = 0
//Bit  6           reg_frc_A1A2_change_flag_6 // unsigned ,    RW, default = 0
//Bit  5           reg_frc_A1A2_change_flag_5 // unsigned ,    RW, default = 0
//Bit  4           reg_frc_A1A2_change_flag_4 // unsigned ,    RW, default = 0
//Bit  3           reg_frc_A1A2_change_flag_3 // unsigned ,    RW, default = 0
//Bit  2           reg_frc_A1A2_change_flag_2 // unsigned ,    RW, default = 0
//Bit  1           reg_frc_A1A2_change_flag_1 // unsigned ,    RW, default = 0
//Bit  0           reg_frc_A1A2_change_flag_0 // unsigned ,    RW, default = 1
#define FRC_REG_LOAD_FRAME_FLAG_1                  0x014a
//Bit 31           reg_frc_A1A2_change_flag_63 // unsigned ,    RW, default = 0  input frame flag lut
//Bit 30           reg_frc_A1A2_change_flag_62 // unsigned ,    RW, default = 0
//Bit 29           reg_frc_A1A2_change_flag_61 // unsigned ,    RW, default = 0
//Bit 28           reg_frc_A1A2_change_flag_60 // unsigned ,    RW, default = 0
//Bit 27           reg_frc_A1A2_change_flag_59 // unsigned ,    RW, default = 0
//Bit 26           reg_frc_A1A2_change_flag_58 // unsigned ,    RW, default = 0
//Bit 25           reg_frc_A1A2_change_flag_57 // unsigned ,    RW, default = 0
//Bit 24           reg_frc_A1A2_change_flag_56 // unsigned ,    RW, default = 0
//Bit 23           reg_frc_A1A2_change_flag_55 // unsigned ,    RW, default = 0
//Bit 22           reg_frc_A1A2_change_flag_54 // unsigned ,    RW, default = 0
//Bit 21           reg_frc_A1A2_change_flag_53 // unsigned ,    RW, default = 0
//Bit 20           reg_frc_A1A2_change_flag_52 // unsigned ,    RW, default = 0
//Bit 19           reg_frc_A1A2_change_flag_51 // unsigned ,    RW, default = 0
//Bit 18           reg_frc_A1A2_change_flag_50 // unsigned ,    RW, default = 0
//Bit 17           reg_frc_A1A2_change_flag_49 // unsigned ,    RW, default = 0
//Bit 16           reg_frc_A1A2_change_flag_48 // unsigned ,    RW, default = 0
//Bit 15           reg_frc_A1A2_change_flag_47 // unsigned ,    RW, default = 0
//Bit 14           reg_frc_A1A2_change_flag_46 // unsigned ,    RW, default = 0
//Bit 13           reg_frc_A1A2_change_flag_45 // unsigned ,    RW, default = 0
//Bit 12           reg_frc_A1A2_change_flag_44 // unsigned ,    RW, default = 0
//Bit 11           reg_frc_A1A2_change_flag_43 // unsigned ,    RW, default = 0
//Bit 10           reg_frc_A1A2_change_flag_42 // unsigned ,    RW, default = 0
//Bit  9           reg_frc_A1A2_change_flag_41 // unsigned ,    RW, default = 0
//Bit  8           reg_frc_A1A2_change_flag_40 // unsigned ,    RW, default = 0
//Bit  7           reg_frc_A1A2_change_flag_39 // unsigned ,    RW, default = 0
//Bit  6           reg_frc_A1A2_change_flag_38 // unsigned ,    RW, default = 0
//Bit  5           reg_frc_A1A2_change_flag_37 // unsigned ,    RW, default = 0
//Bit  4           reg_frc_A1A2_change_flag_36 // unsigned ,    RW, default = 0
//Bit  3           reg_frc_A1A2_change_flag_35 // unsigned ,    RW, default = 0
//Bit  2           reg_frc_A1A2_change_flag_34 // unsigned ,    RW, default = 0
//Bit  1           reg_frc_A1A2_change_flag_33 // unsigned ,    RW, default = 0
//Bit  0           reg_frc_A1A2_change_flag_32 // unsigned ,    RW, default = 1
#define FRC_REG_FWD_FID_LUT_1_0                    0x014b
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_0_7    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_0_6    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_0_5    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_0_4    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_0                    0x014c
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_0_3    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_0_2    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_0_1    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_0_0    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_1_1                    0x014d
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_1_7    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_1_6    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_1_5    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_1_4    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_1                    0x014e
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_1_3    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_1_2    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_1_1    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_1_0    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_1_2                    0x014f
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_2_7    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_2_6    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_2_5    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_2_4    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_2                    0x0150
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_2_3    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_2_2    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_2_1    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_2_0    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_1_3                    0x0151
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_3_7    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_3_6    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_3_5    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_3_4    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_3                    0x0152
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_3_3    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_3_2    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_3_1    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_3_0    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_1_4                    0x0153
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_4_7    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_4_6    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_4_5    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_4_4    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_4                    0x0154
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_4_3    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_4_2    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_4_1    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_4_0    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_1_5                    0x0155
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_5_7    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_5_6    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_5_5    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_5_4    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_5                    0x0156
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_5_3    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_5_2    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_5_1    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_5_0    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_1_6                    0x0157
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_6_7    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_6_6    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_6_5    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_6_4    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_6                    0x0158
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_6_3    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_6_2    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_6_1    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_6_0    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_1_7                    0x0159
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_7_7    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_7_6    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_7_5    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_7_4    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_7                    0x015a
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_7_3    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_7_2    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_7_1    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_7_0    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_1_8                    0x015b
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_8_7    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_8_6    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_8_5    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_8_4    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_8                    0x015c
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_8_3    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_8_2    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_8_1    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_8_0    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_1_9                    0x015d
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_9_7    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_9_6    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_9_5    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_9_4    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_9                    0x015e
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_9_3    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_9_2    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_9_1    // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_9_0    // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_1_10                   0x015f
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_10_7   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_10_6   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_10_5   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_10_4   // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_10                   0x0160
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_10_3   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_10_2   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_10_1   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_10_0   // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_1_11                   0x0161
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_11_7   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_11_6   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_11_5   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_11_4   // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_11                   0x0162
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_11_3   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_11_2   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_11_1   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_11_0   // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_1_12                   0x0163
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_12_7   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_12_6   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_12_5   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_12_4   // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_12                   0x0164
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_12_3   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_12_2   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_12_1   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_12_0   // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_1_13                   0x0165
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_13_7   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_13_6   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_13_5   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_13_4   // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_13                   0x0166
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_13_3   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_13_2   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_13_1   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_13_0   // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_1_14                   0x0167
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_14_7   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_14_6   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_14_5   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_14_4   // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_14                   0x0168
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_14_3   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_14_2   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_14_1   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_14_0   // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_1_15                   0x0169
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_15_7   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_15_6   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_15_5   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_15_4   // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_FID_LUT_2_15                   0x016a
//Bit 31:29        reserved
//Bit 28:24        reg_frc_out_id_lut_15_3   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 23:21        reserved
//Bit 20:16        reg_frc_out_id_lut_15_2   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit 15:13        reserved
//Bit 12: 8        reg_frc_out_id_lut_15_1   // unsigned ,    RW, default = 0  lut calculated by fw
//Bit  7: 5        reserved
//Bit  4: 0        reg_frc_out_id_lut_15_0   // unsigned ,    RW, default = 0  lut calculated by fw
#define FRC_REG_FWD_PHS_ADJ                        0x016b
//Bit 31           reg_frc_output_phase_reset      // unsigned ,    RW, default = 0  phase between opre and ocur reset 0 (eg :mode change)
//Bit 30           reg_frc_output_phase_ofset_en   // unsigned ,    RW, default = 1  phase_ofset enable
//Bit 29           reg_frc_phsoft_left_reset_en // unsigned ,    RW, default = 1  enable of phase ofset reset 0
//Bit 28           reg_frc_phsoft_right_reset_en // unsigned ,    RW, default = 1  enable of phase ofset reset 0
//Bit 27:22        reg_frc_zeros_phase_th    // unsigned ,    RW, default = 2  if phase less than th
//Bit 21: 0        reg_frc_phase_delta       // unsigned ,    RW, default = 0  phase delta
#define FRC_REG_FWD_TABLE_CNT_PHAOFS               0x016c
//Bit 31:12        ro_frc_output_phase_ofset       // unsigned ,    RO, default = 0  for fw mc_phase precision
//Bit 11: 4        reg_frc_table_cnt         // unsigned ,    RW, default = 0  for fw. output period table count, => ro_frc_load_frm_flag to drive input load_org_frame_HW, set by fw in fw_ofrm_det_core.
//Bit  3           reg_frc_otb_up_flag       // unsigned ,    RW, default = 0  when 1, reg_frc_otb_start=1, set by fw
//Bit  2           reg_frc_fid_balance_en    // unsigned ,    RW, default = 0  enable signal of balance frame id
//Bit  1           reg_fix_nex_idx_zero      // unsigned ,    RW, default = 1  fix next index to zero
//Bit  0           ro_frc_no_new_frm_in_flag // unsigned ,    RO, default = 0  no new frame flag
#define FRC_REG_PD_PAT_NUM                         0x016d
//Bit 31: 8        reserved
//Bit  7: 0        reg_frc_pd_pat_num        // unsigned ,    RW, default = 0  , pull-down period of sequence, if 32 pulldown, period = 5. set by fw in phase_table_core
#define FRC_REG_FWD_SIGN_RO                        0x016e
//Bit 31           reg_frc_tbl_wr_down_en    // unsigned ,    RW, default = 0  the signal for notifier hw the table have already write down
//Bit 30           ro_frc_hw_latch_error     // unsigned ,    RO, default = 0  the signal for hw vsync latch error
//Bit 29           reg_frc_force_point_idx_en // unsigned ,    RW, default = 1  force pre/cur/nex id point ,use the result of fw calculate
//Bit 28           reg_frc_force_phase_en    // unsigned ,    RW, default = 0  force me/mc phase
//Bit 27:24        ro_frc_opre_point         // unsigned ,    RO, default = 0  fid position in lut
//Bit 23:20        ro_frc_ocur_point         // unsigned ,    RO, default = 0  fid position in lut
//Bit 19:16        ro_frc_onex_point         // unsigned ,    RO, default = 0  fid position in lut
//Bit 15:12        reserved
//Bit 11            reserved
//Bit 10: 8        ro_frc_opre_idx           // unsigned ,    RO, default = 0  fid index in lut
//Bit  7            reserved
//Bit  6: 4        ro_frc_ocur_idx           // unsigned ,    RO, default = 0  fid index in lut
//Bit  3            reserved
//Bit  2: 0        ro_frc_onex_idx           // unsigned ,    RO, default = 0  fid index in lut
#define FRC_REG_FWD_PHS_RO                         0x016f
//Bit 31:24        reserved
//Bit 23:12        ro_frc_output_phase_mux         // unsigned ,    RO, default = 0  phase between opre and ocur frames(0-4095) 12 bits set by fw
//Bit 11: 0        ro_frc_output_phase_me_mux      // unsigned ,    RO, default = 0  phase between opre and ocur frames (0-4095) 12 bits for ME and VP. set by fw
#define FRC_INPUT_SIZE_ALIGN                       0x0170
//Bit 31: 2        reserved
//Bit  1           reg_h_size_align_mode     // unsigned ,    RW, default = 0  the alignment mode of Hsize, 0: 8 , 1: 16
//Bit  0           reg_v_size_align_mode     // unsigned ,    RW, default = 0  the alignment mode of Vsize, 0: 8	, 1: 16
#define FRC_REG_FWD_PHS_GAIN                       0x0171
//Bit 31:24        reg_frc_phase_mux_gain    // unsigned ,    RW, default = 255  mc phase gain for memc level
//Bit 23:16        reg_frc_phase_me_mux_gain // unsigned ,    RW, default = 255  me phase gain for memc level
//Bit 15:12        reserved
//Bit 11: 0        ro_frc_phase_mux_raw     // unsigned ,    RO, default = 0  phase between opre and ocur frames(0-4095) 12 bits set by fw, memc level "1";
#define FRC_BADEDIT_DBG0                           0x0181
//Bit 31:0         ro_frc_badedit_dbg0      // unsigned ,    RO, default = 0 frc_badedit_inf0
#define FRC_BADEDIT_DBG1                           0x0182
//Bit 31:0         ro_frc_badedit_dbg1      // unsigned ,    RO, default = 0 frc_badedit_inf1
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_badedit_regs.h
//
// -----------------------------------------------
// REG_BASE:  FRC_BUFF_ADDR_APB_BASE = 0x02
// -----------------------------------------------
//
// Reading file:  ./frc_inc/frc_buff_addr_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_REG_MC_YINFO_BADDR                     0x0271
//Bit 31:0 reg_mc_yinfo_baddr        // unsigned ,    RW, default = 32'h00510000  reg_mc_yinfo_baddr
#define FRC_REG_MC_CINFO_BADDR                     0x0272
//Bit 31:0 reg_mc_cinfo_baddr        // unsigned ,    RW, default = 32'h00512000  reg_mc_cinfo_baddr
#define FRC_REG_MC_VINFO_BADDR                     0x0273
//Bit 31:0 reg_mc_vinfo_baddr        // unsigned ,    RW, default = 32'h00514000  reg_mc_vinfo_baddr
#define FRC_REG_ME_XINFO_BADDR                     0x0274
//Bit 31:0 reg_me_xinfo_baddr        // unsigned ,    RW, default = 32'h00516000  reg_me_xinfo_baddr
#define FRC_REG_VP_MC_MV_ADDRX_0                   0x027c
//Bit 31:0 reg_vp_mc_mv_addrx_0      // unsigned ,    RW, default = 32'h01800000 reg_vp_mc_mv_addrx_0,must be burst4 align
#define FRC_REG_VP_MC_MV_ADDRX_1                   0x027d
//Bit 31:0 reg_vp_mc_mv_addrx_1      // unsigned ,    RW, default = 32'h01900000 reg_vp_mc_mv_addrx_1,must be burst4 align
#define FRC_REG_MC_YBUF_ADDRX_0                    0x0280
//Bit 31:0 reg_mc_ybuf_addrx_0        // unsigned ,   RW, default = 32'h00600000  mif_addr
#define FRC_REG_MC_YBUF_ADDRX_1                    0x0281
//Bit 31:0 reg_mc_ybuf_addrx_1        // unsigned ,   RW, default = 32'h00603000  mif_addr
#define FRC_REG_MC_YBUF_ADDRX_2                    0x0282
//Bit 31:0 reg_mc_ybuf_addrx_2        // unsigned ,   RW, default = 32'h00606000  mif_addr
#define FRC_REG_MC_YBUF_ADDRX_3                    0x0283
//Bit 31:0 reg_mc_ybuf_addrx_3        // unsigned ,   RW, default = 32'h00609000  mif_addr
#define FRC_REG_MC_YBUF_ADDRX_4                    0x0284
//Bit 31:0 reg_mc_ybuf_addrx_4        // unsigned ,   RW, default = 32'h0060c000  mif_addr
#define FRC_REG_MC_YBUF_ADDRX_5                    0x0285
//Bit 31:0 reg_mc_ybuf_addrx_5        // unsigned ,   RW, default = 32'h0060f000 mif_addr
#define FRC_REG_MC_YBUF_ADDRX_6                    0x0286
//Bit 31:0 reg_mc_ybuf_addrx_6        // unsigned ,   RW, default = 32'h00612000 mif_addr
#define FRC_REG_MC_YBUF_ADDRX_7                    0x0287
//Bit 31:0 reg_mc_ybuf_addrx_7        // unsigned ,   RW, default = 32'h00615000 mif_addr
#define FRC_REG_MC_YBUF_ADDRX_8                    0x0288
//Bit 31:0 reg_mc_ybuf_addrx_8        // unsigned ,   RW, default = 32'h00618000 mif_addr
#define FRC_REG_MC_YBUF_ADDRX_9                    0x0289
//Bit 31:0 reg_mc_ybuf_addrx_9        // unsigned ,   RW, default = 32'h0061b000 mif_addr
#define FRC_REG_MC_YBUF_ADDRX_10                   0x028a
//Bit 31:0 reg_mc_ybuf_addrx_10       // unsigned ,   RW, default = 32'h0061e000 mif_addr
#define FRC_REG_MC_YBUF_ADDRX_11                   0x028b
//Bit 31:0 reg_mc_ybuf_addrx_11       // unsigned ,   RW, default = 32'h00621000 mif_addr
#define FRC_REG_MC_YBUF_ADDRX_12                   0x028c
//Bit 31:0 reg_mc_ybuf_addrx_12       // unsigned ,   RW, default = 32'h00624000 mif_addr
#define FRC_REG_MC_YBUF_ADDRX_13                   0x028d
//Bit 31:0 reg_mc_ybuf_addrx_13       // unsigned ,   RW, default = 32'h00627000 mif_addr
#define FRC_REG_MC_YBUF_ADDRX_14                   0x028e
//Bit 31:0 reg_mc_ybuf_addrx_14       // unsigned ,   RW, default = 32'h0062a000 mif_addr
#define FRC_REG_MC_YBUF_ADDRX_15                   0x028f
//Bit 31:0 reg_mc_ybuf_addrx_15        // unsigned ,  RW, default = 32'h0062d000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_0                    0x0290
//Bit 31:0 reg_mc_cbuf_addrx_0        // unsigned ,    RW, default = 32'h00630000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_1                    0x0291
//Bit 31:0 reg_mc_cbuf_addrx_1        // unsigned ,    RW, default = 32'h00633000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_2                    0x0292
//Bit 31:0 reg_mc_cbuf_addrx_2        // unsigned ,    RW, default = 32'h00636000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_3                    0x0293
//Bit 31:0 reg_mc_cbuf_addrx_3        // unsigned ,    RW, default = 32'h00639000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_4                    0x0294
//Bit 31:0 reg_mc_cbuf_addrx_4        // unsigned ,    RW, default = 32'h0063c000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_5                    0x0295
//Bit 31:0 reg_mc_cbuf_addrx_5        // unsigned ,    RW, default = 32'h0063f000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_6                    0x0296
//Bit 31:0 reg_mc_cbuf_addrx_6        // unsigned ,    RW, default = 32'h00642000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_7                    0x0297
//Bit 31:0 reg_mc_cbuf_addrx_7        // unsigned ,    RW, default = 32'h00645000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_8                    0x0298
//Bit 31:0 reg_mc_cbuf_addrx_8        // unsigned ,    RW, default = 32'h00648000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_9                    0x0299
//Bit 31:0 reg_mc_cbuf_addrx_9        // unsigned ,    RW, default = 32'h0064b000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_10                   0x029a
//Bit 31:0 reg_mc_cbuf_addrx_10       // unsigned ,    RW, default = 32'h0064e000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_11                   0x029b
//Bit 31:0 reg_mc_cbuf_addrx_11       // unsigned ,    RW, default = 32'h00651000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_12                   0x029c
//Bit 31:0 reg_mc_cbuf_addrx_12       // unsigned ,    RW, default = 32'h00654000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_13                   0x029d
//Bit 31:0 reg_mc_cbuf_addrx_13       // unsigned ,    RW, default = 32'h00657000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_14                   0x029e
//Bit 31:0 reg_mc_cbuf_addrx_14       // unsigned ,    RW, default = 32'h0065a000 mif_addr
#define FRC_REG_MC_CBUF_ADDRX_15                   0x029f
//Bit 31:0 reg_mc_cbuf_addrx_15       // unsigned ,    RW, default = 32'h0065d000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_0                    0x02a0
//Bit 31:0 reg_mc_vbuf_addrx_0       // unsigned ,    RW, default = 32'h00660000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_1                    0x02a1
//Bit 31:0 reg_mc_vbuf_addrx_1       // unsigned ,    RW, default = 32'h00663000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_2                    0x02a2
//Bit 31:0 reg_mc_vbuf_addrx_2       // unsigned ,    RW, default = 32'h00666000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_3                    0x02a3
//Bit 31:0 reg_mc_vbuf_addrx_3       // unsigned ,    RW, default = 32'h00669000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_4                    0x02a4
//Bit 31:0 reg_mc_vbuf_addrx_4       // unsigned ,    RW, default = 32'h0066c000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_5                    0x02a5
//Bit 31:0 reg_mc_vbuf_addrx_5       // unsigned ,    RW, default = 32'h0066f000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_6                    0x02a6
//Bit 31:0 reg_mc_vbuf_addrx_6       // unsigned ,    RW, default = 32'h00672000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_7                    0x02a7
//Bit 31:0 reg_mc_vbuf_addrx_7       // unsigned ,    RW, default = 32'h00675000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_8                    0x02a8
//Bit 31:0 reg_mc_vbuf_addrx_8       // unsigned ,    RW, default = 32'h00678000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_9                    0x02a9
//Bit 31:0 reg_mc_vbuf_addrx_9       // unsigned ,    RW, default = 32'h0067b000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_10                   0x02aa
//Bit 31:0 reg_mc_vbuf_addrx_10      // unsigned ,    RW, default = 32'h0067e000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_11                   0x02ab
//Bit 31:0 reg_mc_vbuf_addrx_11      // unsigned ,    RW, default = 32'h00681000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_12                   0x02ac
//Bit 31:0 reg_mc_vbuf_addrx_12      // unsigned ,    RW, default = 32'h00684000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_13                   0x02ad
//Bit 31:0 reg_mc_vbuf_addrx_13      // unsigned ,    RW, default = 32'h00687000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_14                   0x02ae
//Bit 31:0 reg_mc_vbuf_addrx_14      // unsigned ,    RW, default = 32'h0068a000 mif_addr
#define FRC_REG_MC_VBUF_ADDRX_15                   0x02af
//Bit 31:0 reg_mc_vbuf_addrx_15      // unsigned ,    RW, default = 32'h0068d000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_0                     0x02b0
//Bit 31:0 reg_me_buf_addrx_0        // unsigned ,    RW, default = 32'h00690000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_1                     0x02b1
//Bit 31:0 reg_me_buf_addrx_1        // unsigned ,    RW, default = 32'h00693000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_2                     0x02b2
//Bit 31:0 reg_me_buf_addrx_2        // unsigned ,    RW, default = 32'h00696000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_3                     0x02b3
//Bit 31:0 reg_me_buf_addrx_3        // unsigned ,    RW, default = 32'h00699000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_4                     0x02b4
//Bit 31:0 reg_me_buf_addrx_4        // unsigned ,    RW, default = 32'h0069c000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_5                     0x02b5
//Bit 31:0 reg_me_buf_addrx_5        // unsigned ,    RW, default = 32'h0069f000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_6                     0x02b6
//Bit 31:0 reg_me_buf_addrx_6        // unsigned ,    RW, default = 32'h006a2000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_7                     0x02b7
//Bit 31:0 reg_me_buf_addrx_7        // unsigned ,    RW, default = 32'h006a5000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_8                     0x02b8
//Bit 31:0 reg_me_buf_addrx_8        // unsigned ,    RW, default = 32'h006a8000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_9                     0x02b9
//Bit 31:0 reg_me_buf_addrx_9        // unsigned ,    RW, default = 32'h006ab000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_10                    0x02ba
//Bit 31:0 reg_me_buf_addrx_10       // unsigned ,    RW, default = 32'h006ae000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_11                    0x02bb
//Bit 31:0 reg_me_buf_addrx_11       // unsigned ,    RW, default = 32'h006b1000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_12                    0x02bc
//Bit 31:0 reg_me_buf_addrx_12       // unsigned ,    RW, default = 32'h006b4000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_13                    0x02bd
//Bit 31:0 reg_me_buf_addrx_13       // unsigned ,    RW, default = 32'h006b7000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_14                    0x02be
//Bit 31:0 reg_me_buf_addrx_14       // unsigned ,    RW, default = 32'h006ba000 mif_addr
#define FRC_REG_ME_BUF_ADDRX_15                    0x02bf
//Bit 31:0 reg_me_buf_addrx_15       // unsigned ,    RW, default = 32'h006bd000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_0                    0x02c0
//Bit 31:0 reg_hme_buf_addrx_0       // unsigned ,    RW, default = 32'h00100000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_1                    0x02c1
//Bit 31:0 reg_hme_buf_addrx_1       // unsigned ,    RW, default = 32'h00120000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_2                    0x02c2
//Bit 31:0 reg_hme_buf_addrx_2       // unsigned ,    RW, default = 32'h00140000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_3                    0x02c3
//Bit 31:0 reg_hme_buf_addrx_3       // unsigned ,    RW, default = 32'h00160000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_4                    0x02c4
//Bit 31:0 reg_hme_buf_addrx_4       // unsigned ,    RW, default = 32'h00180000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_5                    0x02c5
//Bit 31:0 reg_hme_buf_addrx_5       // unsigned ,    RW, default = 32'h001a0000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_6                    0x02c6
//Bit 31:0 reg_hme_buf_addrx_6       // unsigned ,    RW, default = 32'h001c0000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_7                    0x02c7
//Bit 31:0 reg_hme_buf_addrx_7       // unsigned ,    RW, default = 32'h001e0000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_8                    0x02c8
//Bit 31:0 reg_hme_buf_addrx_8       // unsigned ,    RW, default = 32'h00200000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_9                    0x02c9
//Bit 31:0 reg_hme_buf_addrx_9       // unsigned ,    RW, default = 32'h00220000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_10                   0x02ca
//Bit 31:0 reg_hme_buf_addrx_10      // unsigned ,    RW, default = 32'h00240000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_11                   0x02cb
//Bit 31:0 reg_hme_buf_addrx_11      // unsigned ,    RW, default = 32'h00260000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_12                   0x02cc
//Bit 31:0 reg_hme_buf_addrx_12      // unsigned ,    RW, default = 32'h00280000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_13                   0x02cd
//Bit 31:0 reg_hme_buf_addrx_13      // unsigned ,    RW, default = 32'h002a0000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_14                   0x02ce
//Bit 31:0 reg_hme_buf_addrx_14      // unsigned ,    RW, default = 32'h002c0000 mif_addr
#define FRC_REG_HME_BUF_ADDRX_15                   0x02cf
//Bit 31:0 reg_hme_buf_addrx_15      // unsigned ,    RW, default = 32'h002e0000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_0                    0x02d0
//Bit 31:0 reg_ip_logo_addrx_0        // unsigned ,    RW, default = 32'h00300000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_1                    0x02d1
//Bit 31:0 reg_ip_logo_addrx_1        // unsigned ,    RW, default = 32'h00318000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_2                    0x02d2
//Bit 31:0 reg_ip_logo_addrx_2        // unsigned ,    RW, default = 32'h00330000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_3                    0x02d3
//Bit 31:0 reg_ip_logo_addrx_3        // unsigned ,    RW, default = 32'h00348000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_4                    0x02d4
//Bit 31:0 reg_ip_logo_addrx_4        // unsigned ,    RW, default = 32'h00360000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_5                    0x02d5
//Bit 31:0 reg_ip_logo_addrx_5        // unsigned ,    RW, default = 32'h00378000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_6                    0x02d6
//Bit 31:0 reg_ip_logo_addrx_6        // unsigned ,    RW, default = 32'h00390000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_7                    0x02d7
//Bit 31:0 reg_ip_logo_addrx_7        // unsigned ,    RW, default = 32'h003a8000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_8                    0x02d8
//Bit 31:0 reg_ip_logo_addrx_8        // unsigned ,    RW, default = 32'h003c0000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_9                    0x02d9
//Bit 31:0 reg_ip_logo_addrx_9        // unsigned ,    RW, default = 32'h003d8000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_10                   0x02da
//Bit 31:0 reg_ip_logo_addrx_10       // unsigned ,    RW, default = 32'h003f0000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_11                   0x02db
//Bit 31:0 reg_ip_logo_addrx_11       // unsigned ,    RW, default = 32'h00408000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_12                   0x02dc
//Bit 31:0 reg_ip_logo_addrx_12       // unsigned ,    RW, default = 32'h00420000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_13                   0x02dd
//Bit 31:0 reg_ip_logo_addrx_13       // unsigned ,    RW, default = 32'h00438000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_14                   0x02de
//Bit 31:0 reg_ip_logo_addrx_14       // unsigned ,    RW, default = 32'h00450000 mif_addr
#define FRC_REG_IP_LOGO_ADDRX_15                   0x02df
//Bit 31:0 reg_ip_logo_addrx_15       // unsigned ,    RW, default = 32'h00468000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_0                    0x02e0
//Bit 31:0 reg_me_logo_addrx_0        // unsigned ,    RW, default = 32'h00480000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_1                    0x02e1
//Bit 31:0 reg_me_logo_addrx_1        // unsigned ,    RW, default = 32'h00488000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_2                    0x02e2
//Bit 31:0 reg_me_logo_addrx_2        // unsigned ,    RW, default = 32'h00490000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_3                    0x02e3
//Bit 31:0 reg_me_logo_addrx_3        // unsigned ,    RW, default = 32'h00498000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_4                    0x02e4
//Bit 31:0 reg_me_logo_addrx_4        // unsigned ,    RW, default = 32'h004a0000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_5                    0x02e5
//Bit 31:0 reg_me_logo_addrx_5        // unsigned ,    RW, default = 32'h004a8000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_6                    0x02e6
//Bit 31:0 reg_me_logo_addrx_6        // unsigned ,    RW, default = 32'h004b0000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_7                    0x02e7
//Bit 31:0 reg_me_logo_addrx_7        // unsigned ,    RW, default = 32'h004b8000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_8                    0x02e8
//Bit 31:0 reg_me_logo_addrx_8        // unsigned ,    RW, default = 32'h004c0000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_9                    0x02e9
//Bit 31:0 reg_me_logo_addrx_9        // unsigned ,    RW, default = 32'h004c8000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_10                   0x02ea
//Bit 31:0 reg_me_logo_addrx_10       // unsigned ,    RW, default = 32'h004d0000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_11                   0x02eb
//Bit 31:0 reg_me_logo_addrx_11       // unsigned ,    RW, default = 32'h004d8000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_12                   0x02ec
//Bit 31:0 reg_me_logo_addrx_12       // unsigned ,    RW, default = 32'h004e0000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_13                   0x02ed
//Bit 31:0 reg_me_logo_addrx_13       // unsigned ,    RW, default = 32'h004e8000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_14                   0x02ee
//Bit 31:0 reg_me_logo_addrx_14       // unsigned ,    RW, default = 32'h004f0000 mif_addr
#define FRC_REG_ME_LOGO_ADDRX_15                   0x02ef
//Bit 31:0 reg_me_logo_addrx_15       // unsigned ,    RW, default = 32'h004f8000 mif_addr
#define FRC_REG_ME_NC_UNI_MV_ADDRX_0               0x02f0
//Bit 31:0 reg_me_nc_uni_mv_addrx_0        // unsigned ,    RW, default = 32'h01000000 mif_addr
#define FRC_REG_ME_NC_UNI_MV_ADDRX_1               0x02f1
//Bit 31:0 reg_me_nc_uni_mv_addrx_1        // unsigned ,    RW, default = 32'h010a0000 mif_addr
#define FRC_REG_ME_NC_UNI_MV_ADDRX_2               0x02f2
//Bit 31:0 reg_me_nc_uni_mv_addrx_2        // unsigned ,    RW, default = 32'h01140000 mif_addr
#define FRC_REG_ME_CN_UNI_MV_ADDRX_0               0x02f3
//Bit 31:0 reg_me_cn_uni_mv_addrx_0        // unsigned ,    RW, default = 32'h011e0000 mif_addr
#define FRC_REG_ME_CN_UNI_MV_ADDRX_1               0x02f4
//Bit 31:0 reg_me_cn_uni_mv_addrx_1        // unsigned ,    RW, default = 32'h01280000 mif_addr
#define FRC_REG_ME_PC_PHS_MV_ADDR                  0x02f5
//Bit 31:0 reg_me_pc_phs_mv_addrx          // unsigned ,    RW, default = 32'h01320000 mif_addr
#define FRC_REG_HME_NC_UNI_MV_ADDRX_0              0x02f6
//Bit 31:0 reg_hme_nc_uni_mv_addrx_0       // unsigned ,    RW, default = 32'h013c0000  mif_addr
#define FRC_REG_HME_NC_UNI_MV_ADDRX_1              0x02f7
//Bit 31:0 reg_hme_nc_uni_mv_addrx_1       // unsigned ,    RW, default = 32'h013ca000  mif_addr
#define FRC_REG_HME_NC_UNI_MV_ADDRX_2              0x02f8
//Bit 31:0 reg_hme_nc_uni_mv_addrx_2       // unsigned ,    RW, default = 32'h013d4000  mif_addr
#define FRC_REG_HME_CN_UNI_MV_ADDRX_0              0x02f9
//Bit 31:0 reg_hme_cn_uni_mv_addrx_0       // unsigned ,    RW, default = 32'h013de000  mif_addr,
#define FRC_REG_HME_CN_UNI_MV_ADDRX_1              0x02fa
//Bit 31:0 reg_hme_cn_uni_mv_addrx_1       // unsigned ,    RW, default = 32'h013e8000  mif_addr
#define FRC_REG_HME_PC_PHS_MV_ADDR                 0x02fb
//Bit 31:0 reg_hme_pc_phs_mv_addrx         // unsigned ,    RW, default = 32'h01400000  mif_addr
#define FRC_REG_VP_PF_UNI_MV_ADDR                  0x02fc
//Bit 31:0 reg_vp_pf_uni_mv_addrx          // unsigned ,    RW, default = 32'h01410000  mif_addr
#define FRC_REG_LOGO_IIR_BUF_ADDR                  0x02fd
//Bit 31:0 reg_logo_iir_buf_baddr          // unsigned ,    RW, default = 32'h01500000 mif_addr
#define FRC_REG_LOGO_SCC_BUF_ADDR                  0x02fe
//Bit 31:0 reg_logo_scc_buf_baddr          // unsigned ,    RW, default = 32'h01600000  mif_addr
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_buff_addr_regs.h
//
// -----------------------------------------------
// REG_BASE:  FRC_INP_TOP_APB_BASE = 0x04
// -----------------------------------------------
//
// Reading file:  ./frc_inc/frc_inp_top_reg.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_REG_ME_BLD_COEF                        0x0400
//Bit 31            reserved
//Bit 30           reg_me_yc_bld_mode        // unsigned ,    RW, default = 0  yc blending mode, 0: cb/cr; 1: max(r,g,b)
//Bit 29:24        reg_me_bld_coef_0         // unsigned ,    RW, default = 12  blending coef of yuv to get yuv blended data for ME, normalized to 32 as 1 for Y
//Bit 23:18        reg_me_bld_coef_1         // unsigned ,    RW, default = 4  blending coef of yuv to get yuv blended data for ME, normalized to 32 as 1 for Y
//Bit 17:12        reg_me_bld_coef_2         // unsigned ,    RW, default = 4  blending coef of yuv to get yuv blended data for ME, normalized to 32 as 1 for Y
//Bit 11: 8        reserved
//Bit  7: 4        reg_me_dsx_ofset          // signed ,    RW, default = 0  horizontal pixel offset for the input pixel to downsample filter
//Bit  3: 0        reg_me_dsy_ofset          // signed ,    RW, default = 0  vertical pixel offset for the input pixel to downsample filter
#define FRC_REG_CORING                             0x0401
//Bit 31: 8        reserved
//Bit  7: 0        reg_ds_glb_motion_coring_th // unsigned ,    RW, default = 4  coring threshold for global motion calc.
#define FRC_REG_ME_DS_COEF_0                       0x0402
//Bit 31:16        reserved
//Bit 15: 8        reg_me_dsx_coef_0         // signed ,    RW, default = 24  coef of AA filter for horizontal downsampling of blended data, normalized to 128 as 1
//Bit  7: 0        reg_me_dsy_coef_0         // signed ,    RW, default = 24  coef of AA filter for vertical downsampling of blended data, normalized to 128 as 1
#define FRC_REG_ME_DS_COEF_1                       0x0403
//Bit 31:16        reserved
//Bit 15: 8        reg_me_dsx_coef_1         // signed ,    RW, default = 20  coef of AA filter for horizontal downsampling of blended data, normalized to 128 as 1
//Bit  7: 0        reg_me_dsy_coef_1         // signed ,    RW, default = 20  coef of AA filter for vertical downsampling of blended data, normalized to 128 as 1
#define FRC_REG_ME_DS_COEF_2                       0x0404
//Bit 31:16        reserved
//Bit 15: 8        reg_me_dsx_coef_2         // signed ,    RW, default = 16  coef of AA filter for horizontal downsampling of blended data, normalized to 128 as 1
//Bit  7: 0        reg_me_dsy_coef_2         // signed ,    RW, default = 16  coef of AA filter for vertical downsampling of blended data, normalized to 128 as 1
#define FRC_REG_ME_DS_COEF_3                       0x0405
//Bit 31:16        reserved
//Bit 15: 8        reg_me_dsx_coef_3         // signed ,    RW, default = 16  coef of AA filter for horizontal downsampling of blended data, normalized to 128 as 1
//Bit  7: 0        reg_me_dsy_coef_3         // signed ,    RW, default = 16  coef of AA filter for vertical downsampling of blended data, normalized to 128 as 1
#define FRC_REG_HME_BLD_COEF                       0x0406
//Bit 31: 0        reserved
#define FRC_REG_HME_DS_COEF_0                      0x0407
//Bit 31: 0        reserved
#define FRC_REG_HME_DS_COEF_1                      0x0408
//Bit 31: 0        reserved
#define FRC_REG_HME_DS_COEF_2                      0x0409
//Bit 31: 0        reserved
#define FRC_REG_HME_DS_COEF_3                      0x040a
//Bit 31: 0        reserved
#define FRC_REG_NR_LUT_0                           0x040b
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_0           // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_NR_LUT_1                           0x040c
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_1           // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_NR_LUT_2                           0x040d
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_2           // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_NR_LUT_3                           0x040e
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_3           // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_NR_LUT_4                           0x040f
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_4           // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_NR_LUT_5                           0x0410
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_5           // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_NR_LUT_6                           0x0411
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_6           // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_NR_LUT_7                           0x0412
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_7           // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_NR_LUT_8                           0x0413
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_8           // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_NR_LUT_9                           0x0414
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_9           // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_NR_LUT_10                          0x0415
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_10          // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_NR_LUT_11                          0x0416
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_11          // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_NR_LUT_12                          0x0417
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_12          // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_NR_LUT_13                          0x0418
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_13          // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_NR_LUT_14                          0x0419
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_14          // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_NR_LUT_15                          0x041a
//Bit 31: 4        reserved
//Bit  3: 0        reg_ds_nr_lut_15          // unsigned ,    RW, default = 0  coef of NR temporal filter for ME image.
#define FRC_REG_GLB_MOTION                         0x041b
//Bit 31: 0        ro_ds_glb_motion          // unsigned ,    RO, default = 0  global motion based on downsample data
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_inp_top_reg.h
//
//
// Reading file:  ./frc_inc/frc_inp_hw_reg.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_INP_UE_CLR                             0x0450
//Bit 31:6          reserved
//Bit 5:0           pls_inp_ue_clr          // unsigned ,   WO, default = 0 error flag clear
#define FRC_INP_UE_DBG                             0x0451
//Bit 31:6          reserved
//Bit 5:0           ro_inp_ue_dbg           // unsigned ,    RO, default = 0 inp undone error flag
#define FRC_REG_INP_HS_DBG1                        0x0452
//Bit 31:0          ro_inp_hs_dbg1         // unsigned ,    RO, default = 0 inp handshake package
#define FRC_REG_INP_HS_DBG2                        0x0453
//Bit 31:0          ro_inp_hs_dbg2         // unsigned ,    RO, default = 0 inp handshake package
#define FRC_REG_INP_HS_DBG3                        0x0454
//Bit 31:0          ro_inp_hs_dbg3         // unsigned ,    RO, default = 0 inp handshake package
#define FRC_REG_MIF_INT_FLAG_DBG                   0x0455
//Bit 31:28         reserved
//Bit 27:0          ro_mif_int_flag_dbg    // unsigned ,    RO, default = 0 inp handshake package
#define FRC_REG_INP_CTRL1                          0x0456
//Bit 31:28         reserved
//Bit 27            reg_osd_pat_gen_en         // unsigned ,   RW, default = 0  reg_osd_pat_gen_en
//Bit 26            reg_osd_pat_gen_mode       // unsigned ,   RW, default = 0  reg_osd_pat_gen_mode
//Bit 25:13         reg_pat_gen_xyxy_v0        // unsigned ,   RW, default = 0  reg_pat_gen_xyxy_v0
//Bit 12:0          reg_pat_gen_xyxy_h0        // unsigned ,   RW, default = 0  reg_pat_gen_xyxy_h0
#define FRC_REG_INP_CTRL2                          0x0457
//Bit 31:26         reserved
//Bit 25:13         reg_pat_gen_xyxy_v1        // unsigned ,   RW, default = 0  reg_pat_gen_xyxy_v1
//Bit 12:0          reg_pat_gen_xyxy_h1        // unsigned ,   RW, default = 0  reg_pat_gen_xyxy_h1
#define FRC_REG_INP_GCLK_CTRL                      0x0458
//Bit 31:22         reserved
//Bit 21:20         reg_inp_mc_hds_gclk_ctrl   // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 19:18         reg_inp_hw_reg_gclk_ctrl   // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 17:16         reg_inp_top_reg_gclk_ctrl  // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 15:14         reg_cur_wbuf_gclk_ctrl     // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 13:12         reg_blend_gclk_ctrl        // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 11:10         reg_menr_gclk_ctrl         // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 9:8           reg_inp_reg_gclk_ctrl      // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 7:6           reg_hme_dsc_gclk_ctrl      // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 5:4           reg_me_dsc_gclk_ctrl       // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 3:2           reg_inp_osd_gclk_ctrl      // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 1:0           reg_inp_fmt_gclk_ctrl      // unsigned,   RW, default = 0 clk gating ctrl signal
#define FRC_REG_INP_MODULE_EN                      0x0459
//Bit 31:14         reserved
//Bit 13            reg_fmt_en                 // unsigned,   RW, default = 1 yuv444toyuv422 convert for mc enable signal,active high
//Bit 12:10         reg_inp_fmt422_mode        // unsigned,   RW, default = 0 input fmt yuv444 or yuv422
//Bit 9             reg_mc_nr_en               // unsigned,   RW, default = 0 mc nr enable signal,active high
//Bit 8             reg_inp_logo_en            // unsigned,   RW, default = 0 iplogo data path enable signal,active high
//Bit 7             reg_inp_bbd_en             // unsigned,   RW, default = 0 bb detection enable signal,active high
//Bit 6             reg_inp_pat_gen_en         // unsigned,   RW, default = 0 pat_gen mode enable signal,active high
//Bit 5             reg_menr_en                // unsigned,   RW, default = 1 me nr enable signal,active high
//Bit 4             reg_me_vdsc_en             // unsigned,   RW, default = 1 vertical downsample of blend for me enale signal,active high
//Bit 3             reg_me_hdsc_en             // unsigned,   RW, default = 1 horizontal downsample of blend for me enale signal,active high
//Bit 2             reg_hme_vdsc_en            // unsigned,   RW, default = 1 vertical downsample of blend for hme enale signal,active high
//Bit 1             reg_hme_hdsc_en            // unsigned,   RW, default = 1 horizontal downsample of blend for hme enale signal,active high
//Bit 0             reg_inp_bld_fmt422_mode    // unsigned,   RW, default = 0 input fmt of blend,0-yuv444,1-yuv422
#define FRC_REG_INP_DBG_CTRL1                      0x045a
//Bit 31:16         reserved
//Bit 15:12         reg_inp_dbg_ctrl          // unsigned ,    RW, default = 0  reg_inp_dbg_ctrl
//Bit 11: 0         reserved
#define FRC_REG_INP_DBG_CTRL2                      0x045b
//Bit 31:30         reserved
//Bit 29:0          reg_inp_dbg_data          // unsigned ,    RW, default = 0  reg_inp_dbg_data
#define FRC_REG_INP_DBG_CTRL3                      0x045c
//Bit 31:30         reg_osd_force_en          // unsigned ,    RW, default = 0  osd debug force enable
//Bit 29: 0         reg_osd_force_yuv         // unsigned ,    RW, default = 0  osd debug force color
#define FRC_REG_INP_MIF_GCLK_CTRL                  0x045d
//Bit 31:20         reserved
//Bit 19:18         reg_hme_wrmif_gclk_ctrl    // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 17:16         reg_logo_rdmif0_gclk_ctrl  // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 15:14         reg_logo_rdmif1_gclk_ctrl  // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 13:12         reg_logo_wrmif0_gclk_ctrl  // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 11:10         reg_logo_wrmif1_gclk_ctrl  // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 9:8           reg_melogo_wrmif_gclk_ctrl // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 7:6           reg_iplogo_wrmif_gclk_ctrl // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 5:4           reg_rd_arb_gclk_ctrl       // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 3:2           reg_wr_arb_1x4_gclk_ctrl   // unsigned,   RW, default = 0 clk gating ctrl signal
//Bit 1:0           reg_wr_arb_1x8_gclk_ctrl   // unsigned,   RW, default = 0 clk gating ctrl signal
#define FRC_INP_LOSS_SLICE_SEC                     0x045e
//Bit 31:1          reserved
//Bit 0             reg_inp_loss_slice_sec    // unsigned,   RW, default = 0,1:same as lossy-body 0:non_security
#define FRC_INP_MC_HDS_CTRL0                       0x0470
//Bit 31:4          reserved
//Bit 3:0           reg_inp_mc_hds_dsx_ofset // signed ,    RW, default = 0  horizontal pixel offset for the input pixel to downsample filter
#define FRC_INP_MC_HDS_WIN_SETTING_SCP             0x0471
//Bit 31:16        reg_inp_mc_hds_hscp0          // unsigned ,    RW, default = 0
//Bit 15: 0        reg_inp_mc_hds_hscp1          // unsigned ,    RW, default = 0
#define FRC_INP_MC_HDS_COEFX3                      0x0472
//Bit 31:24         reg_inp_mc_hds_coef_3    // signed ,    RW, default = 16  coef of AA filter for horizontal downsampling of csc_out data, normalized to 128 as 1
//Bit 23:16         reg_inp_mc_hds_coef_2    // signed ,    RW, default = 16  coef of AA filter for horizontal downsampling of csc_out data, normalized to 128 as 1
//Bit 15:8          reg_inp_mc_hds_coef_1    // signed ,    RW, default = 16  coef of AA filter for horizontal downsampling of csc_out data, normalized to 128 as 1
//Bit 7:0           reg_inp_mc_hds_coef_0    // signed ,    RW, default = 16  coef of AA filter for horizontal downsampling of csc_out data, normalized to 128 as 1
#define FRC_INP_CUR_ME_ORECON_EN                   0x0473
//Bit 31:1          reserved
//Bit 0             reg_cur_me_orecon_en     // unsigned ,  RW, default = 1
#define FRC_INP_PD_DIFF_MODE                       0x0474
//Bit 31:2          reserved
//Bit 1:0           reg_pd_diff_mode         // unsigned ,  RW, default = 0
#define FRC_INP_HME_RAM_DLY_DEPTH                  0x0475
//Bit 31:13         reserved
//Bit 12:0          reg_inp_me_ram_dly_depth         // unsigned ,  RW, default = 200
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_inp_hw_reg.h
// Reading file:  ./frc_inc/pat_gen_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_IP_PAT_CTRL                            0x0480
//Bit 31: 9        reserved
//Bit  8           reg_ip_pat_en             // unsigned ,    RW, default = 0  enable ip pattern generation
//Bit  7            reserved
//Bit  6            reserved
//Bit  5: 4        reg_ip_pat_sel            // unsigned ,    RW, default = 2  selection ip pattern generation, 0: static dot-by-dot check pattern, 1: ramp or purely color, 2or3: moving blocks  with cadences;
//Bit  3           reg_ip_pat_xrmp_mode      // unsigned ,    RW, default = 0  0: ramp-up; 1: 256 gain for this direction
//Bit  2           reg_ip_pat_yrmp_mode      // unsigned ,    RW, default = 1  0: ramp-up; 1: 256 gain for this direction
//Bit  1           reg_ip_pat_xinvt          // unsigned ,    RW, default = 0  enable x index invert
//Bit  0           reg_ip_pat_yinvt          // unsigned ,    RW, default = 0  enable y index invert
#define FRC_IP_PAT_XY_SCL                          0x0481
//Bit 31:29        reserved
//Bit 28           reg_frame_hold            // unsigned ,    RW, default = 0
//Bit 27:16        reg_ip_pat_xidx_scale     // unsigned ,    RW, default = 34  index scale
//Bit 15:12        reserved
//Bit 11: 0        reg_ip_pat_yidx_scale     // unsigned ,    RW, default = 30  index scale
#define FRC_IP_PAT_XY_OF_SHFT                      0x0482
//Bit 31:28        reserved
//Bit 27:16        reg_ip_pat_xidx_ofset     // unsigned ,    RW, default = 0  index offset
//Bit 15: 4        reg_ip_pat_yidx_ofset     // unsigned ,    RW, default = 0  index offset
//Bit  3: 2        reg_ip_pat_xidx_rshft     // unsigned ,    RW, default = 0  0~3
//Bit  1: 0        reg_ip_pat_yidx_rshft     // unsigned ,    RW, default = 0  0~3
#define FRC_IP_PAT_FG_XRMP_RGB                     0x0483
//Bit 31:24        reserved
//Bit 23:16        reg_ip_pat_fg_xrmp_rgb_0  // unsigned ,    RW, default = 255
//Bit 15: 8        reg_ip_pat_fg_xrmp_rgb_1  // unsigned ,    RW, default = 255
//Bit  7: 0        reg_ip_pat_fg_xrmp_rgb_2  // unsigned ,    RW, default = 255  ramp scale
#define FRC_IP_PAT_BG_YRMP_RGB                     0x0484
//Bit 31:24        reserved
//Bit 23:16        reg_ip_pat_bg_yrmp_rgb_0  // unsigned ,    RW, default = 0
//Bit 15: 8        reg_ip_pat_bg_yrmp_rgb_1  // unsigned ,    RW, default = 0
//Bit  7: 0        reg_ip_pat_bg_yrmp_rgb_2  // unsigned ,    RW, default = 0  ramp scale
#define FRC_IP_PAT_RECT_LOCATION                   0x0485
//Bit 31            reserved
//Bit 30:16        reg_ip_pat_rect_xy_0      // unsigned ,    RW, default = 128  rectangle size x_st;
//Bit 15            reserved
//Bit 14: 0        reg_ip_pat_rect_xy_1      // unsigned ,    RW, default = 128  rectangle size y_st;
#define FRC_IP_PAT_RECT_SIZE                       0x0486
//Bit 31            reserved
//Bit 30:16        reg_ip_pat_rect_xsize     // unsigned ,    RW, default = 128  rectangle xsize width;
//Bit 15            reserved
//Bit 14: 0        reg_ip_pat_rect_ysize     // unsigned ,    RW, default = 128  rectangle ysize height;
#define FRC_IP_PAT_RECT_MV                         0x0487
//Bit 31:29        reserved
//Bit 28:16        reg_ip_pat_rect_mvx       // signed ,    RW, default = 256  rectangle mvx;
//Bit 15:12        reserved
//Bit 11: 0        reg_ip_pat_rect_mvy       // signed ,    RW, default = 0  rectangle mvy;
#define FRC_IP_PAT_RECT_CYCLE                      0x0488
//Bit 31: 9        reserved
//Bit  8           reg_ip_pat_move_mode      // unsigned ,    RW, default = 0  rectangle move mode, 0:beyond rectangle no display; 1:beyond rectangle return
//Bit  7: 5        reg_ip_pat_mode           // unsigned ,    RW, default = 0  0: video; 1:22; 2:32; 3: 3223; 4: 2224; 5:32322; 6:44; refer to reg_ip_pat_rect_cycle and reg_ip_pat_rect_flg.
//Bit  4: 0        reg_ip_pat_rect_cycle     // unsigned ,    RW, default = 6  cycle of rectangle, work with rectangle flags, 0 or 1: video, 2: 22, 5: 32, 10: 4222, 12: 32322 ....
#define FRC_IP_PAT_RECT_FLG                        0x0489
//Bit 31: 0        reg_ip_pat_rect_flg       // unsigned ,    RW, default = 62  0 or 1: video; 0x2: 22; 0x12: 32; 0xa94: 22323; 0x2a8: 2224 ...
#define FRC_IP_PAT_GCLK_CTRL                       0x048a
//Bit 31: 4        reserved
//Bit  3: 2        reg_reg_gclk_ctrl         // unsigned ,    RW, default = 0  reg clk gate ctrl;
//Bit  1: 0        reg_ip_pat_gclk_ctrl      // unsigned ,    RW, default = 0  pat gen clk gate ctrl;
#define FRC_HW_IP_PAT_TEST_BG                      0x048b
//Bit  31:25       reserved
//Bit  24          reg_hw_test_pat_en        // unsigned ,    RW, default = 0  reg_test_bg3_mv;
//Bit  23:16       reg_test_bg3_mv           // unsigned ,    RW, default = 5  reg_test_bg3_mv;
//Bit  15: 8       reg_test_bg2_mv           // unsigned ,    RW, default = 5  reg_test_bg2_mv;
//Bit  7 : 0       reg_test_bg1_mv           // unsigned ,    RW, default = 5  reg_test_bg1_mv;
#define FRC_HW_IP_PAT_TEST_GRID                    0x048c
//Bit  31:24       reg_test_grid_w           // unsigned ,    RW, default = 5   reg_test_grid_w;
//Bit  23:16       reg_test_grid_r           // unsigned ,    RW, default = 60  reg_test_grid_r;
//Bit  15:8        reg_test_grid_g           // unsigned ,    RW, default = 70  reg_test_grid_g;
//Bit  7: 0        reg_test_grid_b           // unsigned ,    RW, default = 80  reg_test_grid_b;
#define FRC_HW_IP_PAT_TEST_BB0                     0x048d
//Bit  31:26       reserved
//Bit  25:13       reg_test_bb0              // unsigned ,    RW, default = 0  reg_test_bb0;
//Bit  12:0        reg_test_bb1              // unsigned ,    RW, default = 0  reg_test_bb1;
#define FRC_HW_IP_PAT_TEST_BB1                     0x048f
//Bit  31:26       reserved
//Bit  25:13       reg_test_bb2              // unsigned ,    RW, default = 4095  reg_test_bb2;
//Bit  12:0        reg_test_bb3              // unsigned ,    RW, default = 4095  reg_test_bb3;
#define FRC_HW_IP_PAT_TEST_LOGO0                   0x0490
//Bit  31:26       reserved
//Bit  25:13       reg_test_logo0            // unsigned ,    RW, default = 0  reg_test_logo0;
//Bit  12:0        reg_test_logo1            // unsigned ,    RW, default = 0  reg_test_logo1;
#define FRC_HW_IP_PAT_TEST_LOGO1                   0x0491
//Bit  31:26       reserved
//Bit  25:13       reg_test_logo2            // unsigned ,    RW, default = 0  reg_test_logo2;
//Bit  12:0        reg_test_logo3            // unsigned ,    RW, default = 0  reg_test_logo3;
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/pat_gen_regs.h
//
//
// Reading file:  ./frc_inc/frc_inp_csc_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_INP_CSC_CTRL                           0x04e0
//Bit 31: 10       reserved
//Bit 9 : 8        reg_glk_ctrl      // unsigned ,    RW, default = 0  csc reg_glk_ctrl enable 2'b00:gating 2'b01:close 2'b1x:always open
//Bit 7: 5         reserved
//Bit  4           reg_sync_en       // unsigned ,    RW, default = 0  reg_csc_en sync enable
//Bit  3           reg_csc_en        // unsigned ,    RW, default = 1  enable rgb2yuv matrix for ip pattern generation
//Bit 2:0          reg_csc_rs        // unsigned ,    RW, default = 0  0: normalized to 1024 as 1; 1: norm to 2048; 2: norm to 4096; 3: norm to 8192
#define FRC_INP_CSC_OFFSET_INP01                   0x04e5
//Bit 31:29        reserved
//Bit 28:16        reg_csc_offst_inp_0 // signed ,    RW, default = 0
//Bit 15:13        reserved
//Bit 12: 0        reg_csc_offst_inp_1 // signed ,    RW, default = 0
#define FRC_INP_CSC_OFFSET_INP2                    0x04e6
//Bit 31:13        reserved
//Bit 12: 0        reg_csc_offst_inp_2 // signed ,    RW, default = 0
#define FRC_INP_CSC_COEF_00_01                     0x04e7
//Bit 31:29        reserved
//Bit 28:16        reg_csc_coef_0_0  // signed ,    RW, default = 218
//Bit 15:13        reserved
//Bit 12: 0        reg_csc_coef_0_1  // signed ,    RW, default = 732
#define FRC_INP_CSC_COEF_02_10                     0x04e8
//Bit 31:29        reserved
//Bit 28:16        reg_csc_coef_0_2  // signed ,    RW, default = 74
//Bit 15:13        reserved
//Bit 12: 0        reg_csc_coef_1_0  // signed ,    RW, default = -117
#define FRC_INP_CSC_COEF_11_12                     0x04e9
//Bit 31:29        reserved
//Bit 28:16        reg_csc_coef_1_1  // signed ,    RW, default = -395
//Bit 15:13        reserved
//Bit 12: 0        reg_csc_coef_1_2  // signed ,    RW, default = 512
#define FRC_INP_CSC_COEF_20_21                     0x04ea
//Bit 31:29        reserved
//Bit 28:16        reg_csc_coef_2_0  // signed ,    RW, default = 512
//Bit 15:13        reserved
//Bit 12: 0        reg_csc_coef_2_1  // signed ,    RW, default = -465
#define FRC_INP_CSC_COEF_22                        0x04eb
//Bit 31:13        reserved
//Bit 12: 0        reg_csc_coef_2_2  // signed ,    RW, default = -48
#define FRC_INP_CSC_OFFSET_OUP01                   0x04ec
//Bit 31:29        reserved
//Bit 28:16        reg_csc_offst_oup_0 // signed ,    RW, default = 0
//Bit 15:13        reserved
//Bit 12: 0        reg_csc_offst_oup_1 // signed ,    RW, default = 512
#define FRC_INP_CSC_OFFSET_OUP2                    0x04ee
//Bit 31:13        reserved
//Bit 12: 0        reg_csc_offst_oup_2 // signed ,    RW, default = 512
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_inp_csc_regs.h
//
//
// -----------------------------------------------
// REG_BASE:  FRC_INP_LOGO_APB_BASE = 0x05
// -----------------------------------------------
//
// Reading file:  ./frc_inc/iplogo_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_IPLOGO_BB_CORING                       0x0500
//Bit 31:24        reg_iplogo_blackbar_top_coring // unsigned ,    RW, default = 2  IPLOGO_bb_coring
//Bit 23:16        reg_iplogo_blackbar_bot_coring // unsigned ,    RW, default = 2  IPLOGO_bb_coring
//Bit 15: 8        reg_iplogo_blackbar_lft_coring // unsigned ,    RW, default = 2  IPLOGO_bb_coring
//Bit  7: 0        reg_iplogo_blackbar_rit_coring // unsigned ,    RW, default = 2  IPLOGO_bb_coring
#define FRC_IPLOGO_BB_PIX_ST                       0x0501
//Bit 31:28        reserved
//Bit 27:16        reg_iplogo_bb_xyxy_0      // unsigned ,    RW, default = 0  IPLOGO part black bar index x_st updated by firmware
//Bit 15:12        reserved
//Bit 11: 0        reg_iplogo_bb_xyxy_1      // unsigned ,    RW, default = 0  IPLOGO part black bar index y_st updated by firmware
#define FRC_IPLOGO_BB_PIX_ED                       0x0502
//Bit 31:28        reserved
//Bit 27:16        reg_iplogo_bb_xyxy_2      // unsigned ,    RW, default = 959  IPLOGO part black bar index x_ed updated by firmware, xsize/2^(reg_me_dsx_scale) - 1;
//Bit 15:12        reserved
//Bit 11: 0        reg_iplogo_bb_xyxy_3      // unsigned ,    RW, default = 539  IPLOGO part black bar index y_ed updated by firmware, ysize/2^(reg_me_dsy_scale) - 1;
#define FRC_IPLOGO_EN                              0x0503
//Bit 31:25        reserved
//Bit 24           reg_iplogo_imgiir_en      // unsigned ,    RW, default = 1  dft=1; 0: imgiir disable, use cur and pre diff  1: imgiir enable;
//Bit 23:20        reg_iplogo_osdbit         // unsigned ,    RW, default = 0  dft=0; b0: logo_ip_blklogo_detection, b1:remap_to_1b, b2:dilation, b3: erosion
//Bit 19           reg_iplogo_edge_dir_en_0  // unsigned ,    RW, default = 1  dft=1; 1: open 0   degree
//Bit 18           reg_iplogo_edge_dir_en_1  // unsigned ,    RW, default = 1  dft=1; 1: open 45  degree
//Bit 17           reg_iplogo_edge_dir_en_2  // unsigned ,    RW, default = 1  dft=1; 1: open 90  degree
//Bit 16           reg_iplogo_edge_dir_en_3  // unsigned ,    RW, default = 1  dft=1; 1: open 135 degree
//Bit 15           reg_iplogo_scc_gray_dif_en // unsigned ,    RW, default = 1  dft=1;  scc_gray_dif  en
//Bit 14           reg_iplogo_scc_sad4_corr_en // unsigned ,    RW, default = 1  dft=1;  scc_sad4_corr en
//Bit 13           reg_iplogo_pxl_clr_en     // unsigned ,    RW, default = 1  dft=1;  pxl clr master en
//Bit 12           reg_iplogo_blk_clr_en     // unsigned ,    RW, default = 1  dft=1;  blk clr master en
//Bit 11            reserved
//Bit 10           reg_iplogo_edge_strength_clr_en // unsigned ,    RW, default = 1  dft=1;  0: edge_strength_clr disable, 1: edge_strength_clr enable
//Bit  9           reg_iplogo_edge_dif_clr_en // unsigned ,    RW, default = 1  dft=0;  0: edge_dif_clr disable, 1: edge_dif_clr enable
//Bit  8           reg_iplogo_gray_dif_clr_en // unsigned ,    RW, default = 1  dft=1;  0: gray_dif_clr disable, 1: gray_dif_clr enable
//Bit  7           reg_iplogo_blk_logodir4_corr_clr_en // unsigned ,    RW, default = 1  dft=1;  0: blk_logodir4_corr_clr disable, 1: blk_logodir4_corr_clr enable
//Bit  6           reg_iplogo_blk_edgedir4_corr_clr_en // unsigned ,    RW, default = 1  dft=1;  0: blk_edgedir4_corr_clr disable, 1: blk_edgedir4_corr_clr enable
//Bit  5           reg_iplogo_blk_dir4_clr_scc_en // unsigned ,    RW, default = 0  dft=1;  0: blk dir4 ratio clr disable, 1: blk dir4 ratio clr enable
//Bit  4           reg_iplogo_blk_disappear_clr_scc_en // unsigned ,    RW, default = 1  dft=0;  0: blk sudden disappear clr disable, 1: blk sudden disappear clr enable
//Bit  3           reg_iplogo_scc_remap_imclose_en // unsigned ,    RW, default = 1  dft=1;  0: ip pxllogo imclose disable, 1: ip pxllogo imclose enable
//Bit  2           reg_iplogo_blk_dil_en     // unsigned ,    RW, default = 1  dft=1;  0: ip blklogo dilate disable, 1: ip blklogo dilate enable
//Bit  1           reg_iplogo_blk_ero_en     // unsigned ,    RW, default = 1  dft=1;  0: ip blklogo erosion disable, 1: ip blklogo erosion enable
//Bit  0           reg_iplogo_lpf_en         // unsigned ,    RW, default = 0  dft=0;  0: ip pxllogo glpf disable, 1: ip pxllogo glpf enable
#define FRC_IPLOGO_FINAL_GAIN                      0x0504
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_protdeg_fwd_final_gain // unsigned ,    RW, default = 256  baseline is 256, the greater this value, the better of logo protection
//Bit 15:10        reserved
//Bit  9: 0        reg_iplogo_protdeg_bwd_final_gain // unsigned ,    RW, default = 256  baseline is 256, the smaller this value, the better of logo protection
#define FRC_IPLOGO_SCC_FORM_PARAM                  0x0505
//Bit 31:27        reserved
//Bit 26           reg_iplogo_is_edge_strength_mode // unsigned ,    RW, default = 1  dft=1;   0: iir and (cur or pre) , 1:  is_edge_strength 0--7
//Bit 25           reg_iplogo_nbor_dif_use_mode // unsigned ,    RW, default = 1  dft=1;   1: use gray neighbor_dif, 0: use  gray dif;
//Bit 24           reg_iplogo_scc_gray_dif_use_mode // unsigned ,    RW, default = 1  dft=1;   1: use cur_pre_dif(or use cur_pre_nbor_dif),  0: use cur_iir_dif(or cur_iir_nbor_dif);
//Bit 23:21        reserved
//Bit 20:16        reg_iplogo_scc_as_marker_coring // unsigned ,    RW, default = 10  dft=10;  pre scc value as marker coring
//Bit 15:13        reserved
//Bit 12: 8        reg_iplogo_scc_lpfout_coring // unsigned ,    RW, default = 10  dft=10;  scc value remap coring
//Bit  7: 0        reg_iplogo_imgiir_alpha   // unsigned ,    RW, default = 36  dft=36;  image iir filter degree
#define FRC_IPLOGO_CORR_FORM_CORING                0x0506
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_edgedir4_corr_form_cnt_coring // unsigned ,    RW, default = 1  dir4 corr form logo same weight cnt coring
#define FRC_IPLOGO_CORR_FORM_UB_GWEIGHT_0          0x0507
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_edgedir4_corr_weight_5x5_4_0 // unsigned ,    RW, default = 7  dir4 corr form logo gaussian weight
#define FRC_IPLOGO_CORR_FORM_LB_GWEIGHT_0          0x0508
//Bit 31:24        reg_iplogo_edgedir4_corr_weight_5x5_3_0 // unsigned ,    RW, default = 9  dir4 corr form logo gaussian weight
//Bit 23:16        reg_iplogo_edgedir4_corr_weight_5x5_2_0 // unsigned ,    RW, default = 10  dir4 corr form logo gaussian weight
//Bit 15: 8        reg_iplogo_edgedir4_corr_weight_5x5_1_0 // unsigned ,    RW, default = 9  dir4 corr form logo gaussian weight
//Bit  7: 0        reg_iplogo_edgedir4_corr_weight_5x5_0_0 // unsigned ,    RW, default = 7  dir4 corr form logo gaussian weight
#define FRC_IPLOGO_CORR_FORM_UB_GWEIGHT_1          0x0509
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_edgedir4_corr_weight_5x5_4_1 // unsigned ,    RW, default = 9  dir4 corr form logo gaussian weight
#define FRC_IPLOGO_CORR_FORM_LB_GWEIGHT_1          0x050a
//Bit 31:24        reg_iplogo_edgedir4_corr_weight_5x5_3_1 // unsigned ,    RW, default = 11  dir4 corr form logo gaussian weight
//Bit 23:16        reg_iplogo_edgedir4_corr_weight_5x5_2_1 // unsigned ,    RW, default = 12  dir4 corr form logo gaussian weight
//Bit 15: 8        reg_iplogo_edgedir4_corr_weight_5x5_1_1 // unsigned ,    RW, default = 11  dir4 corr form logo gaussian weight
//Bit  7: 0        reg_iplogo_edgedir4_corr_weight_5x5_0_1 // unsigned ,    RW, default = 9  dir4 corr form logo gaussian weight
#define FRC_IPLOGO_CORR_FORM_UB_GWEIGHT_2          0x050b
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_edgedir4_corr_weight_5x5_4_2 // unsigned ,    RW, default = 10  dir4 corr form logo gaussian weight
#define FRC_IPLOGO_CORR_FORM_LB_GWEIGHT_2          0x050c
//Bit 31:24        reg_iplogo_edgedir4_corr_weight_5x5_3_2 // unsigned ,    RW, default = 12  dir4 corr form logo gaussian weight
//Bit 23:16        reg_iplogo_edgedir4_corr_weight_5x5_2_2 // unsigned ,    RW, default = 13  dir4 corr form logo gaussian weight
//Bit 15: 8        reg_iplogo_edgedir4_corr_weight_5x5_1_2 // unsigned ,    RW, default = 12  dir4 corr form logo gaussian weight
//Bit  7: 0        reg_iplogo_edgedir4_corr_weight_5x5_0_2 // unsigned ,    RW, default = 10  dir4 corr form logo gaussian weight
#define FRC_IPLOGO_CORR_FORM_UB_GWEIGHT_3          0x050d
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_edgedir4_corr_weight_5x5_4_3 // unsigned ,    RW, default = 9  dir4 corr form logo gaussian weight
#define FRC_IPLOGO_CORR_FORM_LB_GWEIGHT_3          0x050e
//Bit 31:24        reg_iplogo_edgedir4_corr_weight_5x5_3_3 // unsigned ,    RW, default = 11  dir4 corr form logo gaussian weight
//Bit 23:16        reg_iplogo_edgedir4_corr_weight_5x5_2_3 // unsigned ,    RW, default = 12  dir4 corr form logo gaussian weight
//Bit 15: 8        reg_iplogo_edgedir4_corr_weight_5x5_1_3 // unsigned ,    RW, default = 11  dir4 corr form logo gaussian weight
//Bit  7: 0        reg_iplogo_edgedir4_corr_weight_5x5_0_3 // unsigned ,    RW, default = 9  dir4 corr form logo gaussian weight
#define FRC_IPLOGO_CORR_FORM_UB_GWEIGHT_4          0x050f
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_edgedir4_corr_weight_5x5_4_4 // unsigned ,    RW, default = 7  dir4 corr form logo gaussian weight
#define FRC_IPLOGO_CORR_FORM_LB_GWEIGHT_4          0x0510
//Bit 31:24        reg_iplogo_edgedir4_corr_weight_5x5_3_4 // unsigned ,    RW, default = 9  dir4 corr form logo gaussian weight
//Bit 23:16        reg_iplogo_edgedir4_corr_weight_5x5_2_4 // unsigned ,    RW, default = 10  dir4 corr form logo gaussian weight
//Bit 15: 8        reg_iplogo_edgedir4_corr_weight_5x5_1_4 // unsigned ,    RW, default = 9  dir4 corr form logo gaussian weight
//Bit  7: 0        reg_iplogo_edgedir4_corr_weight_5x5_0_4 // unsigned ,    RW, default = 7  dir4 corr form logo gaussian weight
#define FRC_IPLOGO_SCC_GRAY_TH_0                   0x0511
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_dif_th_0   // unsigned ,    RW, default = 20  scc gray dif rough threshold
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_dif_finer_incre_th_0 // unsigned ,    RW, default = 4  scc gray dif finer increase threshold
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_dif_finer_decre_th_0 // unsigned ,    RW, default = 19  scc gray dif finer decrease threshold
#define FRC_IPLOGO_SCC_GRAY_TH_1                   0x0512
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_dif_th_1   // unsigned ,    RW, default = 12  scc gray dif rough threshold
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_dif_finer_incre_th_1 // unsigned ,    RW, default = 3  scc gray dif finer increase threshold
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_dif_finer_decre_th_1 // unsigned ,    RW, default = 17  scc gray dif finer decrease threshold
#define FRC_IPLOGO_SCC_GRAY_TH_2                   0x0513
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_dif_th_2   // unsigned ,    RW, default = 6  scc gray dif rough threshold
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_dif_finer_incre_th_2 // unsigned ,    RW, default = 2  scc gray dif finer increase threshold
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_dif_finer_decre_th_2 // unsigned ,    RW, default = 15  scc gray dif finer decrease threshold
#define FRC_IPLOGO_SCC_GRAY_TH_3                   0x0514
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_dif_th_3   // unsigned ,    RW, default = 0  scc gray dif rough threshold
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_dif_finer_incre_th_3 // unsigned ,    RW, default = 1  scc gray dif finer increase threshold
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_dif_finer_decre_th_3 // unsigned ,    RW, default = 13  scc gray dif finer decrease threshold
#define FRC_IPLOGO_SCC_GRAY_UB_STEP_0              0x0515
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_6_0 // signed ,    RW, default = 11  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_5_0 // signed ,    RW, default = 10  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_4_0 // signed ,    RW, default = 8  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_LB_STEP_0              0x0516
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_gray_dif_step_3_0 // signed ,    RW, default = 7  gray dif scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_2_0 // signed ,    RW, default = 6  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_1_0 // signed ,    RW, default = 5  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_0_0 // signed ,    RW, default = 4  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_UB_STEP_1              0x0517
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_6_1 // signed ,    RW, default = 10  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_5_1 // signed ,    RW, default = 8  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_4_1 // signed ,    RW, default = 7  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_LB_STEP_1              0x0518
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_gray_dif_step_3_1 // signed ,    RW, default = 5  gray dif scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_2_1 // signed ,    RW, default = 4  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_1_1 // signed ,    RW, default = 3  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_0_1 // signed ,    RW, default = 2  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_UB_STEP_2              0x0519
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_6_2 // signed ,    RW, default = 8  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_5_2 // signed ,    RW, default = 7  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_4_2 // signed ,    RW, default = 5  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_LB_STEP_2              0x051a
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_gray_dif_step_3_2 // signed ,    RW, default = 4  gray dif scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_2_2 // signed ,    RW, default = 3  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_1_2 // signed ,    RW, default = 2  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_0_2 // signed ,    RW, default = 1  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_UB_STEP_3              0x051b
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_6_3 // signed ,    RW, default = 6  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_5_3 // signed ,    RW, default = 5  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_4_3 // signed ,    RW, default = 4  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_LB_STEP_3              0x051c
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_gray_dif_step_3_3 // signed ,    RW, default = 3  gray dif scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_2_3 // signed ,    RW, default = 2  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_1_3 // signed ,    RW, default = 1  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_0_3 // signed ,    RW, default = 1  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_UB_STEP_4              0x051d
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_6_4 // signed ,    RW, default = 4  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_5_4 // signed ,    RW, default = 3  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_4_4 // signed ,    RW, default = 2  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_LB_STEP_4              0x051e
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_gray_dif_step_3_4 // signed ,    RW, default = 1  gray dif scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_2_4 // signed ,    RW, default = 1  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_1_4 // signed ,    RW, default = 1  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_0_4 // signed ,    RW, default = 1  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_UB_STEP_5              0x051f
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_6_5 // signed ,    RW, default = -8  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_5_5 // signed ,    RW, default = -7  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_4_5 // signed ,    RW, default = -6  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_LB_STEP_5              0x0520
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_gray_dif_step_3_5 // signed ,    RW, default = -5  gray dif scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_2_5 // signed ,    RW, default = -4  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_1_5 // signed ,    RW, default = -3  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_0_5 // signed ,    RW, default = -2  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_UB_STEP_6              0x0521
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_6_6 // signed ,    RW, default = -10  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_5_6 // signed ,    RW, default = -9  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_4_6 // signed ,    RW, default = -8  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_LB_STEP_6              0x0522
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_gray_dif_step_3_6 // signed ,    RW, default = -7  gray dif scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_2_6 // signed ,    RW, default = -6  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_1_6 // signed ,    RW, default = -5  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_0_6 // signed ,    RW, default = -4  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_UB_STEP_7              0x0523
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_6_7 // signed ,    RW, default = -13  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_5_7 // signed ,    RW, default = -12  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_4_7 // signed ,    RW, default = -11  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_LB_STEP_7              0x0524
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_gray_dif_step_3_7 // signed ,    RW, default = -10  gray dif scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_2_7 // signed ,    RW, default = -9  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_1_7 // signed ,    RW, default = -8  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_0_7 // signed ,    RW, default = -7  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_UB_STEP_8              0x0525
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_6_8 // signed ,    RW, default = -17  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_5_8 // signed ,    RW, default = -16  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_4_8 // signed ,    RW, default = -15  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_LB_STEP_8              0x0526
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_gray_dif_step_3_8 // signed ,    RW, default = -14  gray dif scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_2_8 // signed ,    RW, default = -13  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_1_8 // signed ,    RW, default = -12  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_0_8 // signed ,    RW, default = -11  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_UB_STEP_9              0x0527
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_6_9 // signed ,    RW, default = -22  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_5_9 // signed ,    RW, default = -21  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_4_9 // signed ,    RW, default = -20  gray dif scc curve step
#define FRC_IPLOGO_SCC_GRAY_LB_STEP_9              0x0528
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_gray_dif_step_3_9 // signed ,    RW, default = -19  gray dif scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_gray_dif_step_2_9 // signed ,    RW, default = -18  gray dif scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_gray_dif_step_1_9 // signed ,    RW, default = -17  gray dif scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_gray_dif_step_0_9 // signed ,    RW, default = -16  gray dif scc curve step
#define FRC_IPLOGO_SCC_DELTA_FUSION                0x0529
//Bit 31:22        reserved
//Bit 21:20        reg_iplogo_scc_delta_step_mode3 // unsigned ,    RW, default = 0  dft =0, 0: gray, 1: corr, 2: MAX_MIN method, 3: gray + corr
//Bit 19:18        reserved
//Bit 17:16        reg_iplogo_scc_delta_step_mode2 // unsigned ,    RW, default = 0  dft =0, 0: gray, 1: corr, 2: MAX_MIN method, 3: gray + corr
//Bit 15:14        reserved
//Bit 13:12        reg_iplogo_scc_delta_step_mode1 // unsigned ,    RW, default = 0  dft =0, 0: gray, 1: corr, 2: MAX_MIN method, 3: gray + corr
//Bit 11:10        reserved
//Bit  9: 8        reg_iplogo_scc_delta_step_mode0 // unsigned ,    RW, default = 0  dft =0, 0: gray, 1: corr, 2: MAX_MIN method, 3: gray + corr
//Bit  7            reserved
//Bit  6           reg_iplogo_scc_delta_degree_3 // unsigned ,    RW, default = 1  dft=1   0: MIN(gray_dif_step, sad4_corr_step), 1: MAX(gray_dif_step, sad4_corr_step)
//Bit  5            reserved
//Bit  4           reg_iplogo_scc_delta_degree_2 // unsigned ,    RW, default = 1  dft=1   0: MIN(gray_dif_step, sad4_corr_step), 1: MAX(gray_dif_step, sad4_corr_step)
//Bit  3            reserved
//Bit  2           reg_iplogo_scc_delta_degree_1 // unsigned ,    RW, default = 1  dft=1   0: MIN(gray_dif_step, sad4_corr_step), 1: MAX(gray_dif_step, sad4_corr_step)
//Bit  1            reserved
//Bit  0           reg_iplogo_scc_delta_degree_0 // unsigned ,    RW, default = 1  dft=1   0: MIN(gray_dif_step, sad4_corr_step), 1: MAX(gray_dif_step, sad4_corr_step)
#define FRC_IPLOGO_SCC_CORR_TH_0                   0x052a
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_scc_sad4_corr_th_0 // unsigned ,    RW, default = 230  sad4 corr scc curve threshold
#define FRC_IPLOGO_SCC_CORR_TH_1                   0x052b
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_scc_sad4_corr_th_1 // unsigned ,    RW, default = 220  sad4 corr scc curve threshold
#define FRC_IPLOGO_SCC_CORR_TH_2                   0x052c
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_scc_sad4_corr_th_2 // unsigned ,    RW, default = 205  sad4 corr scc curve threshold
#define FRC_IPLOGO_SCC_CORR_TH_3                   0x052d
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_scc_sad4_corr_th_3 // unsigned ,    RW, default = 190  sad4 corr scc curve threshold
#define FRC_IPLOGO_SCC_CORR_TH_4                   0x052e
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_scc_sad4_corr_th_4 // unsigned ,    RW, default = 175  sad4 corr scc curve threshold
#define FRC_IPLOGO_SCC_CORR_TH_5                   0x052f
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_scc_sad4_corr_th_5 // unsigned ,    RW, default = 160  sad4 corr scc curve threshold
#define FRC_IPLOGO_SCC_CORR_TH_6                   0x0530
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_scc_sad4_corr_th_6 // unsigned ,    RW, default = 140  sad4 corr scc curve threshold
#define FRC_IPLOGO_SCC_CORR_TH_7                   0x0531
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_scc_sad4_corr_th_7 // unsigned ,    RW, default = 130  sad4 corr scc curve threshold
#define FRC_IPLOGO_SCC_CORR_TH_8                   0x0532
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_scc_sad4_corr_th_8 // unsigned ,    RW, default = 120  sad4 corr scc curve threshold
#define FRC_IPLOGO_SCC_CORR_TH_9                   0x0533
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_scc_sad4_corr_th_9 // unsigned ,    RW, default = 110  sad4 corr scc curve threshold
#define FRC_IPLOGO_SCC_CORR_TH_10                  0x0534
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_scc_sad4_corr_th_10 // unsigned ,    RW, default = 100  sad4 corr scc curve threshold
#define FRC_IPLOGO_SCC_CORR_TH_11                  0x0535
//Bit 31: 8        reserved
//Bit  7: 0        reg_iplogo_scc_sad4_corr_th_11 // unsigned ,    RW, default = 90  sad4 corr scc curve threshold
#define FRC_IPLOGO_SCC_CORR_UB_STEP_0              0x0536
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_6_0 // signed ,    RW, default = 10  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_5_0 // signed ,    RW, default = 9  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_4_0 // signed ,    RW, default = 8  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_LB_STEP_0              0x0537
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_sad4_corr_step_3_0 // signed ,    RW, default = 7  sad4 corr scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_2_0 // signed ,    RW, default = 6  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_1_0 // signed ,    RW, default = 5  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_0_0 // signed ,    RW, default = 4  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_UB_STEP_1              0x0538
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_6_1 // signed ,    RW, default = 9  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_5_1 // signed ,    RW, default = 8  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_4_1 // signed ,    RW, default = 7  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_LB_STEP_1              0x0539
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_sad4_corr_step_3_1 // signed ,    RW, default = 6  sad4 corr scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_2_1 // signed ,    RW, default = 5  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_1_1 // signed ,    RW, default = 4  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_0_1 // signed ,    RW, default = 3  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_UB_STEP_2              0x053a
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_6_2 // signed ,    RW, default = 8  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_5_2 // signed ,    RW, default = 7  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_4_2 // signed ,    RW, default = 6  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_LB_STEP_2              0x053b
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_sad4_corr_step_3_2 // signed ,    RW, default = 5  sad4 corr scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_2_2 // signed ,    RW, default = 4  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_1_2 // signed ,    RW, default = 3  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_0_2 // signed ,    RW, default = 2  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_UB_STEP_3              0x053c
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_6_3 // signed ,    RW, default = 7  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_5_3 // signed ,    RW, default = 6  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_4_3 // signed ,    RW, default = 5  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_LB_STEP_3              0x053d
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_sad4_corr_step_3_3 // signed ,    RW, default = 4  sad4 corr scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_2_3 // signed ,    RW, default = 3  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_1_3 // signed ,    RW, default = 2  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_0_3 // signed ,    RW, default = 1  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_UB_STEP_4              0x053e
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_6_4 // signed ,    RW, default = 4  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_5_4 // signed ,    RW, default = 3  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_4_4 // signed ,    RW, default = 3  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_LB_STEP_4              0x053f
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_sad4_corr_step_3_4 // signed ,    RW, default = 2  sad4 corr scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_2_4 // signed ,    RW, default = 2  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_1_4 // signed ,    RW, default = 1  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_0_4 // signed ,    RW, default = 1  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_UB_STEP_5              0x0540
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_6_5 // signed ,    RW, default = 3  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_5_5 // signed ,    RW, default = 2  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_4_5 // signed ,    RW, default = 2  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_LB_STEP_5              0x0541
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_sad4_corr_step_3_5 // signed ,    RW, default = 1  sad4 corr scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_2_5 // signed ,    RW, default = 1  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_1_5 // signed ,    RW, default = 1  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_0_5 // signed ,    RW, default = 1  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_UB_STEP_6              0x0542
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_6_6 // signed ,    RW, default = 0  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_5_6 // signed ,    RW, default = 0  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_4_6 // signed ,    RW, default = 0  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_LB_STEP_6              0x0543
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_sad4_corr_step_3_6 // signed ,    RW, default = 0  sad4 corr scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_2_6 // signed ,    RW, default = 0  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_1_6 // signed ,    RW, default = 0  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_0_6 // signed ,    RW, default = 0  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_UB_STEP_7              0x0544
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_6_7 // signed ,    RW, default = -8  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_5_7 // signed ,    RW, default = -7  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_4_7 // signed ,    RW, default = -6  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_LB_STEP_7              0x0545
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_sad4_corr_step_3_7 // signed ,    RW, default = -5  sad4 corr scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_2_7 // signed ,    RW, default = -4  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_1_7 // signed ,    RW, default = -3  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_0_7 // signed ,    RW, default = -2  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_UB_STEP_8              0x0546
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_6_8 // signed ,    RW, default = -10  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_5_8 // signed ,    RW, default = -9  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_4_8 // signed ,    RW, default = -8  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_LB_STEP_8              0x0547
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_sad4_corr_step_3_8 // signed ,    RW, default = -7  sad4 corr scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_2_8 // signed ,    RW, default = -6  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_1_8 // signed ,    RW, default = -5  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_0_8 // signed ,    RW, default = -4  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_UB_STEP_9              0x0548
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_6_9 // signed ,    RW, default = -13  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_5_9 // signed ,    RW, default = -12  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_4_9 // signed ,    RW, default = -11  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_LB_STEP_9              0x0549
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_sad4_corr_step_3_9 // signed ,    RW, default = -10  sad4 corr scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_2_9 // signed ,    RW, default = -9  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_1_9 // signed ,    RW, default = -8  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_0_9 // signed ,    RW, default = -7  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_UB_STEP_10             0x054a
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_6_10 // signed ,    RW, default = -16  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_5_10 // signed ,    RW, default = -15  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_4_10 // signed ,    RW, default = -14  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_LB_STEP_10             0x054b
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_sad4_corr_step_3_10 // signed ,    RW, default = -13  sad4 corr scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_2_10 // signed ,    RW, default = -12  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_1_10 // signed ,    RW, default = -11  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_0_10 // signed ,    RW, default = -10  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_UB_STEP_11             0x054c
//Bit 31:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_6_11 // signed ,    RW, default = -21  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_5_11 // signed ,    RW, default = -20  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_4_11 // signed ,    RW, default = -19  sad4 corr scc curve step
#define FRC_IPLOGO_SCC_CORR_LB_STEP_11             0x054d
//Bit 31:30        reserved
//Bit 29:24        reg_iplogo_scc_sad4_corr_step_3_11 // signed ,    RW, default = -18  sad4 corr scc curve step
//Bit 23:22        reserved
//Bit 21:16        reg_iplogo_scc_sad4_corr_step_2_11 // signed ,    RW, default = -17  sad4 corr scc curve step
//Bit 15:14        reserved
//Bit 13: 8        reg_iplogo_scc_sad4_corr_step_1_11 // signed ,    RW, default = -16  sad4 corr scc curve step
//Bit  7: 6        reserved
//Bit  5: 0        reg_iplogo_scc_sad4_corr_step_0_11 // signed ,    RW, default = -15  sad4 corr scc curve step
#define FRC_IPLOGO_DIF_CLR_PARAM                   0x054e
//Bit 31: 6        reserved
//Bit  5: 4        reg_iplogo_edge_dif_clr_mode // unsigned ,    RW, default = 2  dft=2; 0: cur_iir  1:cur_pre  2: MAX, 3: min
//Bit  3: 2        reserved
//Bit  1: 0        reg_iplogo_gray_dif_clr_mode // unsigned ,    RW, default = 2  dft=2: 0: cur_iir  1:cur_pre  2: MAX, 3: min
#define FRC_IPLOGO_EDGE_STRENGTH_TH_0              0x054f
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_cur_edge_th_0  // unsigned ,    RW, default = 290  calc edge strength threshold
//Bit 15:10        reserved
//Bit  9: 0        reg_iplogo_iir_edge_th_0  // unsigned ,    RW, default = 250  calc edge strength threshold
#define FRC_IPLOGO_PXLCLR_DIF_TH_0                 0x0550
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_edge_dif_th_0  // unsigned ,    RW, default = 420  edge dif for logo misdet clr threshold
//Bit 15: 6        reserved
//Bit  5: 0        reg_iplogo_gray_dif_th_0  // unsigned ,    RW, default = 24  gray dif for logo misdet clr threshold
#define FRC_IPLOGO_CLR_FLAG_MAPPING_0              0x0551
//Bit 31:21        reserved
//Bit 20:16        reg_iplogo_pxl_clr_flag_mapping_0 // unsigned ,    RW, default = 0  pxl clr methods flag mapping threshold
//Bit 15: 5        reserved
//Bit  4: 0        reg_iplogo_blk_clr_flag_mapping_0 // unsigned ,    RW, default = 0  blk clr methods flag mapping threshold
#define FRC_IPLOGO_EDGE_STRENGTH_TH_1              0x0552
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_cur_edge_th_1  // unsigned ,    RW, default = 245  calc edge strength threshold
//Bit 15:10        reserved
//Bit  9: 0        reg_iplogo_iir_edge_th_1  // unsigned ,    RW, default = 205  calc edge strength threshold
#define FRC_IPLOGO_PXLCLR_DIF_TH_1                 0x0553
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_edge_dif_th_1  // unsigned ,    RW, default = 390  edge dif for logo misdet clr threshold
//Bit 15: 6        reserved
//Bit  5: 0        reg_iplogo_gray_dif_th_1  // unsigned ,    RW, default = 22  gray dif for logo misdet clr threshold
#define FRC_IPLOGO_CLR_FLAG_MAPPING_1              0x0554
//Bit 31:21        reserved
//Bit 20:16        reg_iplogo_pxl_clr_flag_mapping_1 // unsigned ,    RW, default = 1  pxl clr methods flag mapping threshold
//Bit 15: 5        reserved
//Bit  4: 0        reg_iplogo_blk_clr_flag_mapping_1 // unsigned ,    RW, default = 1  blk clr methods flag mapping threshold
#define FRC_IPLOGO_EDGE_STRENGTH_TH_2              0x0555
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_cur_edge_th_2  // unsigned ,    RW, default = 200  calc edge strength threshold
//Bit 15:10        reserved
//Bit  9: 0        reg_iplogo_iir_edge_th_2  // unsigned ,    RW, default = 165  calc edge strength threshold
#define FRC_IPLOGO_PXLCLR_DIF_TH_2                 0x0556
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_edge_dif_th_2  // unsigned ,    RW, default = 360  edge dif for logo misdet clr threshold
//Bit 15: 6        reserved
//Bit  5: 0        reg_iplogo_gray_dif_th_2  // unsigned ,    RW, default = 20  gray dif for logo misdet clr threshold
#define FRC_IPLOGO_CLR_FLAG_MAPPING_2              0x0557
//Bit 31:21        reserved
//Bit 20:16        reg_iplogo_pxl_clr_flag_mapping_2 // unsigned ,    RW, default = 3  pxl clr methods flag mapping threshold
//Bit 15: 5        reserved
//Bit  4: 0        reg_iplogo_blk_clr_flag_mapping_2 // unsigned ,    RW, default = 3  blk clr methods flag mapping threshold
#define FRC_IPLOGO_EDGE_STRENGTH_TH_3              0x0558
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_cur_edge_th_3  // unsigned ,    RW, default = 145  calc edge strength threshold
//Bit 15:10        reserved
//Bit  9: 0        reg_iplogo_iir_edge_th_3  // unsigned ,    RW, default = 125  calc edge strength threshold
#define FRC_IPLOGO_PXLCLR_DIF_TH_3                 0x0559
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_edge_dif_th_3  // unsigned ,    RW, default = 330  edge dif for logo misdet clr threshold
//Bit 15: 6        reserved
//Bit  5: 0        reg_iplogo_gray_dif_th_3  // unsigned ,    RW, default = 18  gray dif for logo misdet clr threshold
#define FRC_IPLOGO_CLR_FLAG_MAPPING_3              0x055a
//Bit 31:21        reserved
//Bit 20:16        reg_iplogo_pxl_clr_flag_mapping_3 // unsigned ,    RW, default = 6  pxl clr methods flag mapping threshold
//Bit 15: 5        reserved
//Bit  4: 0        reg_iplogo_blk_clr_flag_mapping_3 // unsigned ,    RW, default = 6  blk clr methods flag mapping threshold
#define FRC_IPLOGO_EDGE_STRENGTH_TH_4              0x055b
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_cur_edge_th_4  // unsigned ,    RW, default = 100  calc edge strength threshold
//Bit 15:10        reserved
//Bit  9: 0        reg_iplogo_iir_edge_th_4  // unsigned ,    RW, default = 95  calc edge strength threshold
#define FRC_IPLOGO_PXLCLR_DIF_TH_4                 0x055c
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_edge_dif_th_4  // unsigned ,    RW, default = 300  edge dif for logo misdet clr threshold
//Bit 15: 6        reserved
//Bit  5: 0        reg_iplogo_gray_dif_th_4  // unsigned ,    RW, default = 16  gray dif for logo misdet clr threshold
#define FRC_IPLOGO_CLR_FLAG_MAPPING_4              0x055d
//Bit 31:21        reserved
//Bit 20:16        reg_iplogo_pxl_clr_flag_mapping_4 // unsigned ,    RW, default = 8  pxl clr methods flag mapping threshold
//Bit 15: 5        reserved
//Bit  4: 0        reg_iplogo_blk_clr_flag_mapping_4 // unsigned ,    RW, default = 8  blk clr methods flag mapping threshold
#define FRC_IPLOGO_EDGE_STRENGTH_TH_5              0x055e
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_cur_edge_th_5  // unsigned ,    RW, default = 70  calc edge strength threshold
//Bit 15:10        reserved
//Bit  9: 0        reg_iplogo_iir_edge_th_5  // unsigned ,    RW, default = 68  calc edge strength threshold
#define FRC_IPLOGO_PXLCLR_DIF_TH_5                 0x055f
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_edge_dif_th_5  // unsigned ,    RW, default = 270  edge dif for logo misdet clr threshold
//Bit 15: 6        reserved
//Bit  5: 0        reg_iplogo_gray_dif_th_5  // unsigned ,    RW, default = 15  gray dif for logo misdet clr threshold
#define FRC_IPLOGO_CLR_FLAG_MAPPING_5              0x0560
//Bit 31:21        reserved
//Bit 20:16        reg_iplogo_pxl_clr_flag_mapping_5 // unsigned ,    RW, default = 10  pxl clr methods flag mapping threshold
//Bit 15: 5        reserved
//Bit  4: 0        reg_iplogo_blk_clr_flag_mapping_5 // unsigned ,    RW, default = 10  blk clr methods flag mapping threshold
#define FRC_IPLOGO_EDGE_STRENGTH_TH_6              0x0561
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_cur_edge_th_6  // unsigned ,    RW, default = 40  calc edge strength threshold
//Bit 15:10        reserved
//Bit  9: 0        reg_iplogo_iir_edge_th_6  // unsigned ,    RW, default = 40  calc edge strength threshold
#define FRC_IPLOGO_PXLCLR_DIF_TH_6                 0x0562
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_edge_dif_th_6  // unsigned ,    RW, default = 250  edge dif for logo misdet clr threshold
//Bit 15: 6        reserved
//Bit  5: 0        reg_iplogo_gray_dif_th_6  // unsigned ,    RW, default = 14  gray dif for logo misdet clr threshold
#define FRC_IPLOGO_CLR_FLAG_MAPPING_6              0x0563
//Bit 31:21        reserved
//Bit 20:16        reg_iplogo_pxl_clr_flag_mapping_6 // unsigned ,    RW, default = 12  pxl clr methods flag mapping threshold
//Bit 15: 5        reserved
//Bit  4: 0        reg_iplogo_blk_clr_flag_mapping_6 // unsigned ,    RW, default = 15  blk clr methods flag mapping threshold
#define FRC_IPLOGO_EDGE_STRENGTH_TH_7              0x0564
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_cur_edge_th_7  // unsigned ,    RW, default = 0  calc edge strength threshold
//Bit 15:10        reserved
//Bit  9: 0        reg_iplogo_iir_edge_th_7  // unsigned ,    RW, default = 0  calc edge strength threshold
#define FRC_IPLOGO_PXLCLR_DIF_TH_7                 0x0565
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_edge_dif_th_7  // unsigned ,    RW, default = 0  edge dif for logo misdet clr threshold
//Bit 15: 6        reserved
//Bit  5: 0        reg_iplogo_gray_dif_th_7  // unsigned ,    RW, default = 0  gray dif for logo misdet clr threshold
#define FRC_IPLOGO_CLR_FLAG_MAPPING_7              0x0566
//Bit 31:21        reserved
//Bit 20:16        reg_iplogo_pxl_clr_flag_mapping_7 // unsigned ,    RW, default = 31  pxl clr methods flag mapping threshold
//Bit 15: 5        reserved
//Bit  4: 0        reg_iplogo_blk_clr_flag_mapping_7 // unsigned ,    RW, default = 31  blk clr methods flag mapping threshold
#define FRC_IPLOGO_CORR_CLR_PARAM                  0x0567
//Bit 31:27        reserved
//Bit 26:24        reg_iplogo_two_dir4_corr_flag_dif_th // unsigned ,    RW, default = 6  the dif threshold of two dir4 corr clr flag
//Bit 23:16        reg_iplogo_blk_dir4_corr_clr_cnt_coring // unsigned ,    RW, default = 8  dir4 corr clr misdet logo weight cnt coring
//Bit 15:10        reserved
//Bit  9: 8        reg_iplogo_blk_dir4_corr_clr_masky // unsigned ,    RW, default = 3  dft = 3; dir4_corr_clr method masky size
//Bit  7: 4        reg_iplogo_blk_dir4_corr_clr_maskx_r // unsigned ,    RW, default = 5  dft = 5; dir4_corr_clr method right maskx size
//Bit  3: 0        reg_iplogo_blk_dir4_corr_clr_maskx_l // unsigned ,    RW, default = 5  dft = 5; dir4_corr_clr method left  maskx size
#define FRC_IPLOGO_CORR_CLR_TH0_0                  0x0568
//Bit 31:16        reserved
//Bit 15: 8        reg_iplogo_blk_logodir4_corr_clr_th_0 // unsigned ,    RW, default = 170  blk logodir4 corr clr method threshold
//Bit  7: 0        reg_iplogo_blk_edgedir4_corr_clr_th_0 // unsigned ,    RW, default = 180  blk edgedir4 corr clr method threshold
#define FRC_IPLOGO_CORR_CLR_TH0_1                  0x0569
//Bit 31:16        reserved
//Bit 15: 8        reg_iplogo_blk_logodir4_corr_clr_th_1 // unsigned ,    RW, default = 160  blk logodir4 corr clr method threshold
//Bit  7: 0        reg_iplogo_blk_edgedir4_corr_clr_th_1 // unsigned ,    RW, default = 170  blk edgedir4 corr clr method threshold
#define FRC_IPLOGO_CORR_CLR_TH0_2                  0x056a
//Bit 31:16        reserved
//Bit 15: 8        reg_iplogo_blk_logodir4_corr_clr_th_2 // unsigned ,    RW, default = 150  blk logodir4 corr clr method threshold
//Bit  7: 0        reg_iplogo_blk_edgedir4_corr_clr_th_2 // unsigned ,    RW, default = 160  blk edgedir4 corr clr method threshold
#define FRC_IPLOGO_CORR_CLR_TH0_3                  0x056b
//Bit 31:16        reserved
//Bit 15: 8        reg_iplogo_blk_logodir4_corr_clr_th_3 // unsigned ,    RW, default = 140  blk logodir4 corr clr method threshold
//Bit  7: 0        reg_iplogo_blk_edgedir4_corr_clr_th_3 // unsigned ,    RW, default = 150  blk edgedir4 corr clr method threshold
#define FRC_IPLOGO_CORR_CLR_TH0_4                  0x056c
//Bit 31:16        reserved
//Bit 15: 8        reg_iplogo_blk_logodir4_corr_clr_th_4 // unsigned ,    RW, default = 130  blk logodir4 corr clr method threshold
//Bit  7: 0        reg_iplogo_blk_edgedir4_corr_clr_th_4 // unsigned ,    RW, default = 140  blk edgedir4 corr clr method threshold
#define FRC_IPLOGO_CORR_CLR_TH0_5                  0x056d
//Bit 31:16        reserved
//Bit 15: 8        reg_iplogo_blk_logodir4_corr_clr_th_5 // unsigned ,    RW, default = 120  blk logodir4 corr clr method threshold
//Bit  7: 0        reg_iplogo_blk_edgedir4_corr_clr_th_5 // unsigned ,    RW, default = 130  blk edgedir4 corr clr method threshold
#define FRC_IPLOGO_CORR_CLR_TH0_6                  0x056e
//Bit 31:16        reserved
//Bit 15: 8        reg_iplogo_blk_logodir4_corr_clr_th_6 // unsigned ,    RW, default = 110  blk logodir4 corr clr method threshold
//Bit  7: 0        reg_iplogo_blk_edgedir4_corr_clr_th_6 // unsigned ,    RW, default = 120  blk edgedir4 corr clr method threshold
#define FRC_IPLOGO_CORR_CLR_TH0_7                  0x056f
//Bit 31:16        reserved
//Bit 15: 8        reg_iplogo_blk_logodir4_corr_clr_th_7 // unsigned ,    RW, default = 0  blk logodir4 corr clr method threshold
//Bit  7: 0        reg_iplogo_blk_edgedir4_corr_clr_th_7 // unsigned ,    RW, default = 0  blk edgedir4 corr clr method threshold
#define FRC_IPLOGO_DOC_FROM_EDGE_CORING            0x0570
//Bit 31:16        reserved
//Bit 15: 0        reg_iplogo_logo_doc_from_edge_coring // unsigned ,    RW, default = 20  logo_doc_from_edge_coring
#define FRC_IPLOGO_DIR4_RATIO_PXL_PARAM            0x0571
//Bit 31:16        reserved
//Bit 15: 8        reg_iplogo_blk_dir4_pxl_cnt_th // unsigned ,    RW, default = 1  blk dir4 ratio clr method pxl cnt threshold
//Bit  7: 0        reg_iplogo_blk_dir4_pxl_rate // unsigned ,    RW, default = 200  blk dir4 ratio clr method pxl principal rate threshold
#define FRC_IPLOGO_DIR4_RATIO_BLK_PARAM            0x0572
//Bit 31:22        reserved
//Bit 21:20        reg_iplogo_blk_dir4_clr_masky // unsigned ,    RW, default = 3  blk dir4 ratio clr method pxl mask ysize
//Bit 19:16        reg_iplogo_blk_dir4_clr_maskx // unsigned ,    RW, default = 12  blk dir4 ratio clr method pxl mask xsize
//Bit 15: 8        reg_iplogo_blk_dir4_clr_blk_cnt_th // unsigned ,    RW, default = 0  blk dir4 ratio clr method blk cnt threshold
//Bit  7: 0        reg_iplogo_blk_dir4_clr_blk_rate // unsigned ,    RW, default = 190  blk dir4 ratio clr method blk principal rate threshold upper limit
#define FRC_IPLOGO_DISAPER_PXL_PARAM               0x0573
//Bit 31:15        reserved
//Bit 14:12        reg_iplogo_blk_disappear_edge_dif_coring // unsigned ,    RW, default = 5  blk sudden disappear clr edge dif flag coring
//Bit 11            reserved
//Bit 10: 8        reg_iplogo_blk_disappear_edge_coring // unsigned ,    RW, default = 5  blk sudden disappear clr edge strength coring
//Bit  7: 0        reg_iplogo_blk_disappear_pxl_cnt_th // unsigned ,    RW, default = 3  blk sudden disappear clr pxl cnt threshold
#define FRC_IPLOGO_DISAPER_BLKCLR_PARAM            0x0574
//Bit 31:14        reserved
//Bit 13:12        reg_iplogo_blk_disappear_clr_masky // unsigned ,    RW, default = 2  blk sudden disappear clr method mask ysize
//Bit 11: 8        reg_iplogo_blk_disappear_clr_maskx // unsigned ,    RW, default = 5  blk sudden disappear clr method mask xsize
//Bit  7: 0        reg_iplogo_blk_disappear_clr_blk_cnt_th // unsigned ,    RW, default = 6  blk sudden disappear clr blk cnt threshold
#define FRC_IPLOGO_DISAPER_DIF_TH_0                0x0575
//Bit 31: 6        reserved
//Bit  5: 0        reg_iplogo_blk_disappear_avg_diff_th_0 // unsigned ,    RW, default = 25  blk sudden disappear clr method avg gray dif threshold
#define FRC_IPLOGO_DISAPER_DIF_TH_1                0x0576
//Bit 31: 6        reserved
//Bit  5: 0        reg_iplogo_blk_disappear_avg_diff_th_1 // unsigned ,    RW, default = 24  blk sudden disappear clr method avg gray dif threshold
#define FRC_IPLOGO_DISAPER_DIF_TH_2                0x0577
//Bit 31: 6        reserved
//Bit  5: 0        reg_iplogo_blk_disappear_avg_diff_th_2 // unsigned ,    RW, default = 22  blk sudden disappear clr method avg gray dif threshold
#define FRC_IPLOGO_DISAPER_DIF_TH_3                0x0578
//Bit 31: 6        reserved
//Bit  5: 0        reg_iplogo_blk_disappear_avg_diff_th_3 // unsigned ,    RW, default = 20  blk sudden disappear clr method avg gray dif threshold
#define FRC_IPLOGO_DISAPER_DIF_TH_4                0x0579
//Bit 31: 6        reserved
//Bit  5: 0        reg_iplogo_blk_disappear_avg_diff_th_4 // unsigned ,    RW, default = 18  blk sudden disappear clr method avg gray dif threshold
#define FRC_IPLOGO_DISAPER_DIF_TH_5                0x057a
//Bit 31: 6        reserved
//Bit  5: 0        reg_iplogo_blk_disappear_avg_diff_th_5 // unsigned ,    RW, default = 16  blk sudden disappear clr method avg gray dif threshold
#define FRC_IPLOGO_DISAPER_DIF_TH_6                0x057b
//Bit 31: 6        reserved
//Bit  5: 0        reg_iplogo_blk_disappear_avg_diff_th_6 // unsigned ,    RW, default = 15  blk sudden disappear clr method avg gray dif threshold
#define FRC_IPLOGO_DISAPER_DIF_TH_7                0x057c
//Bit 31: 6        reserved
//Bit  5: 0        reg_iplogo_blk_disappear_avg_diff_th_7 // unsigned ,    RW, default = 0  blk sudden disappear clr method avg gray dif threshold
#define FRC_IPLOGO_PXLCLOSE_MSIZE                  0x057d
//Bit 31:28        reg_iplogo_scc_remap_imclose_masksize_7 // unsigned ,    RW, default = 5  pxllogo msize erosion:  down
//Bit 27:24        reg_iplogo_scc_remap_imclose_masksize_6 // unsigned ,    RW, default = 5  pxllogo msize erosion:  up
//Bit 23:20        reg_iplogo_scc_remap_imclose_masksize_5 // unsigned ,    RW, default = 5  pxllogo msize erosion:  right
//Bit 19:16        reg_iplogo_scc_remap_imclose_masksize_4 // unsigned ,    RW, default = 5  pxllogo msize erosion:  left
//Bit 15:12        reg_iplogo_scc_remap_imclose_masksize_3 // unsigned ,    RW, default = 5  pxllogo msize dilation: down
//Bit 11: 8        reg_iplogo_scc_remap_imclose_masksize_2 // unsigned ,    RW, default = 5  pxllogo msize dilation: up
//Bit  7: 4        reg_iplogo_scc_remap_imclose_masksize_1 // unsigned ,    RW, default = 5  pxllogo msize dilation: right
//Bit  3: 0        reg_iplogo_scc_remap_imclose_masksize_0 // unsigned ,    RW, default = 5  pxllogo msize dilation: left
#define FRC_IPLOGO_BLK_DET_TH                      0x057e
//Bit 31:29        reserved
//Bit 28:24        reg_iplogo_blk_det_method_th // unsigned ,    RW, default = 3  dft=3;  blk logo edge detection cnt threshold
//Bit 23:21        reserved
//Bit 20:16        reg_iplogo_blk_det_scc_th // unsigned ,    RW, default = 10  dft=10; blk logo edge detection scc threshold
//Bit 15:13        reserved
//Bit 12: 8        reg_iplogo_blk_dil_cnt_th // unsigned ,    RW, default = 3  dft=3;  blk logo edge detection dilate threshold
//Bit  7: 5        reserved
//Bit  4: 0        reg_iplogo_blk_ero_cnt_th // unsigned ,    RW, default = 12  dft=12; blk logo edge detection erosion threshold
#define FRC_IPLOGO_BLKCLOSE_MSIZE                  0x057f
//Bit 31:16        reserved
//Bit 15:12        reg_iplogo_blkclose_masksize_3 // unsigned ,    RW, default = 1  blkclose_masksize, down
//Bit 11: 8        reg_iplogo_blkclose_masksize_2 // unsigned ,    RW, default = 1  blkclose_masksize, up
//Bit  7: 4        reg_iplogo_blkclose_masksize_1 // unsigned ,    RW, default = 2  blkclose_masksize, right
//Bit  3: 0        reg_iplogo_blkclose_masksize_0 // unsigned ,    RW, default = 2  blkclose_masksize, left
#define FRC_IPLOGO_GLPF_COEF                       0x0580
//Bit 31:28        reg_iplogo_lpf_coef_7     // unsigned ,    RW, default = 8  gaussian lpf coef
//Bit 27:24        reg_iplogo_lpf_coef_6     // unsigned ,    RW, default = 15  gaussian lpf coef
//Bit 23:20        reg_iplogo_lpf_coef_5     // unsigned ,    RW, default = 8  gaussian lpf coef
//Bit 19:16        reg_iplogo_lpf_coef_4     // unsigned ,    RW, default = 15  gaussian lpf coef
//Bit 15:12        reg_iplogo_lpf_coef_3     // unsigned ,    RW, default = 15  gaussian lpf coef
//Bit 11: 8        reg_iplogo_lpf_coef_2     // unsigned ,    RW, default = 8  gaussian lpf coef
//Bit  7: 4        reg_iplogo_lpf_coef_1     // unsigned ,    RW, default = 15  gaussian lpf coef
//Bit  3: 0        reg_iplogo_lpf_coef_0     // unsigned ,    RW, default = 8  gaussian lpf coef
#define FRC_IPLOGO_GLB_REGION_CLR                  0x0581
//Bit 31:18        reserved
//Bit 17           reg_iplogo_region_master_en // unsigned ,    RW, default = 0  dft=0;  0: region12 logo clr disable; 1: region12 logo clr enable;
//Bit 16           reg_iplogo_scc_glb_clr_en // unsigned ,    RW, default = 0  dft=1;  gmv reset scc en
//Bit 15:13        reserved
//Bit 12: 8        reg_iplogo_scc_glb_clr_step // unsigned ,    RW, default = 0  dft=0,  for fw_logo reset
//Bit  7: 0        reserved
#define FRC_IPLOGO_REGION_CLR_EN                   0x0582
//Bit 31:12        reserved
//Bit 11           reg_iplogo_region_en_11   // unsigned ,    RW, default = 1  enable signal for region 11 logo clr
//Bit 10           reg_iplogo_region_en_10   // unsigned ,    RW, default = 1  enable signal for region 10 logo clr
//Bit  9           reg_iplogo_region_en_9    // unsigned ,    RW, default = 1  enable signal for region 9  logo clr
//Bit  8           reg_iplogo_region_en_8    // unsigned ,    RW, default = 1  enable signal for region 8  logo clr
//Bit  7           reg_iplogo_region_en_7    // unsigned ,    RW, default = 1  enable signal for region 7  logo clr
//Bit  6           reg_iplogo_region_en_6    // unsigned ,    RW, default = 1  enable signal for region 6  logo clr
//Bit  5           reg_iplogo_region_en_5    // unsigned ,    RW, default = 1  enable signal for region 5  logo clr
//Bit  4           reg_iplogo_region_en_4    // unsigned ,    RW, default = 1  enable signal for region 4  logo clr
//Bit  3           reg_iplogo_region_en_3    // unsigned ,    RW, default = 1  enable signal for region 3  logo clr
//Bit  2           reg_iplogo_region_en_2    // unsigned ,    RW, default = 1  enable signal for region 2  logo clr
//Bit  1           reg_iplogo_region_en_1    // unsigned ,    RW, default = 1  enable signal for region 1  logo clr
//Bit  0           reg_iplogo_region_en_0    // unsigned ,    RW, default = 1  enable signal for region 0  logo clr
#define FRC_IPLOGO_REGION_CLR_STEP2                0x0583
//Bit 31:29        reserved
//Bit 28:24        reg_iplogo_scc_region_clr_step_11 // unsigned ,    RW, default = 0  12 region for scc clr step
//Bit 23:21        reserved
//Bit 20:16        reg_iplogo_scc_region_clr_step_10 // unsigned ,    RW, default = 0  12 region for scc clr step
//Bit 15:13        reserved
//Bit 12: 8        reg_iplogo_scc_region_clr_step_9 // unsigned ,    RW, default = 0  12 region for scc clr step
//Bit  7: 5        reserved
//Bit  4: 0        reg_iplogo_scc_region_clr_step_8 // unsigned ,    RW, default = 0  12 region for scc clr step
#define FRC_IPLOGO_REGION_CLR_STEP1                0x0584
//Bit 31:29        reserved
//Bit 28:24        reg_iplogo_scc_region_clr_step_7 // unsigned ,    RW, default = 0  12 region for scc clr step
//Bit 23:21        reserved
//Bit 20:16        reg_iplogo_scc_region_clr_step_6 // unsigned ,    RW, default = 0  12 region for scc clr step
//Bit 15:13        reserved
//Bit 12: 8        reg_iplogo_scc_region_clr_step_5 // unsigned ,    RW, default = 0  12 region for scc clr step
//Bit  7: 5        reserved
//Bit  4: 0        reg_iplogo_scc_region_clr_step_4 // unsigned ,    RW, default = 0  12 region for scc clr step
#define FRC_IPLOGO_REGION_CLR_STEP0                0x0585
//Bit 31:29        reserved
//Bit 28:24        reg_iplogo_scc_region_clr_step_3 // unsigned ,    RW, default = 0  12 region for scc clr step
//Bit 23:21        reserved
//Bit 20:16        reg_iplogo_scc_region_clr_step_2 // unsigned ,    RW, default = 0  12 region for scc clr step
//Bit 15:13        reserved
//Bit 12: 8        reg_iplogo_scc_region_clr_step_1 // unsigned ,    RW, default = 0  12 region for scc clr step
//Bit  7: 5        reserved
//Bit  4: 0        reg_iplogo_scc_region_clr_step_0 // unsigned ,    RW, default = 0  12 region for scc clr step
#define FRC_IPLOGO_REGION_HWINDOW_2                0x0586
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_stat_region_hend_3 // unsigned ,    RW, default = 960  logo statistic region horizontal end3, relative to hstart, updated by fw
//Bit 15:10        reserved
//Bit  9: 0        reg_iplogo_stat_region_hend_2 // unsigned ,    RW, default = 720  logo statistic region horizontal end2, relative to hstart, updated by fw
#define FRC_IPLOGO_REGION_HWINDOW_1                0x0587
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_stat_region_hend_1 // unsigned ,    RW, default = 480  logo statistic region horizontal end1, relative to hstart, updated by fw
//Bit 15:10        reserved
//Bit  9: 0        reg_iplogo_stat_region_hend_0 // unsigned ,    RW, default = 240  logo statistic region horizontal end0, relative to hstart, updated by fw
#define FRC_IPLOGO_REGION_HWINDOW_0                0x0588
//Bit 31:10        reserved
//Bit  9: 0        reg_iplogo_stat_region_hstart // unsigned ,    RW, default = 0  logo statistic region horizontal start, updated by fw
#define FRC_IPLOGO_REGION_VWINDOW_1                0x0589
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_stat_region_vend_2 // unsigned ,    RW, default = 540  logo statistic region vertical end2, relative to vstart, updated by fw
//Bit 15:10        reserved
//Bit  9: 0        reg_iplogo_stat_region_vend_1 // unsigned ,    RW, default = 360  logo statistic region vertical end1, relative to vstart, updated by fw
#define FRC_IPLOGO_REGION_VWINDOW_0                0x058a
//Bit 31:26        reserved
//Bit 25:16        reg_iplogo_stat_region_vend_0 // unsigned ,    RW, default = 180  logo statistic region vertical end0, relative to vstart, updated by fw
//Bit 15:10        reserved
//Bit  9: 0        reg_iplogo_stat_region_vstart // unsigned ,    RW, default = 0  logo statistic region vertical start, updated by fw
#define FRC_IPLOGO_PXL_DBG_TH_0                    0x058b
//Bit 31:19        reserved
//Bit 18:16        reg_iplogo_cur_edge_strength_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit 15            reserved
//Bit 14:12        reg_iplogo_iir_edge_strength_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit 11            reserved
//Bit 10: 8        reg_iplogo_logo_edge_strength_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit  7            reserved
//Bit  6: 4        reg_iplogo_gray_dif_clr_flag_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit  3            reserved
//Bit  2: 0        reg_iplogo_edge_dif_clr_flag_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
#define FRC_IPLOGO_PXL_DBG_TH_1                    0x058c
//Bit 31:29        reserved
//Bit 28:24        reg_iplogo_pxl_clr_value_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit 23:21        reserved
//Bit 20:16        reg_iplogo_blk_clr_value_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit 15:11        reserved
//Bit 10: 8        reg_iplogo_cur_edge_sad4_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit  7            reserved
//Bit  6: 4        reg_iplogo_pre_edge_sad4_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit  3            reserved
//Bit  2: 0        reg_iplogo_edge_dir4_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
#define FRC_IPLOGO_PXL_DBG_TH_2                    0x058d
//Bit 31:21        reserved
//Bit 20:16        reg_iplogo_scc_temp_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit 15:13        reserved
//Bit 12: 8        reg_iplogo_scc_dbg_th     // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit  7: 0        reg_iplogo_dir4_corr_form_rate_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
#define FRC_IPLOGO_BLK_DBG_TH_0                    0x058e
//Bit 31:23        reserved
//Bit 22:20        reg_iplogo_dir4_corr_clr_flag_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit 19            reserved
//Bit 18:16        reg_iplogo_edgedir4_corr_clr_flag_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit 15            reserved
//Bit 14:12        reg_iplogo_dir4_for_ratio_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit 11            reserved
//Bit 10: 8        reg_iplogo_disappear_flag_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit  7            reserved
//Bit  6: 4        reg_iplogo_disappear_clr_flag_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit  3            reserved
//Bit  2: 0        reg_iplogo_blk_clr_flag_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
#define FRC_IPLOGO_BLK_DBG_TH_1                    0x058f
//Bit 31:24        reg_iplogo_edgedir4_corr_rate_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit 23:16        reg_iplogo_dir4_corr_rate_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit 15:12        reg_iplogo_sad4_corrdif_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit 11: 8        reg_iplogo_sad4_marker_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit  7: 4        reg_iplogo_edge_sad4_corrdif_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
//Bit  3: 0        reg_iplogo_edge_sad4_marker_dbg_th // unsigned ,    RW, default = 0  dft = 0,  inner signal debug threshold
#define FRC_IPLOGO_RO_LOGOPIX_CNT                  0x0590
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_logopix_cnt     // unsigned ,    RO, default = 0  read back for pixel logo count in a frame.
#define FRC_IPLOGO_RO_PIXLOGO_RGN_CNT_0            0x0591
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_pixlogo_rgn_cnt_0 // unsigned ,    RO, default = 0  12 region pixlogo counter
#define FRC_IPLOGO_RO_OSDBIT_RGN_CNT_0             0x0592
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_osdbit_rgn_cnt_0 // unsigned ,    RO, default = 0  12 region osdbit counter
#define FRC_IPLOGO_RO_PIXLOGO_RGN_CNT_1            0x0593
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_pixlogo_rgn_cnt_1 // unsigned ,    RO, default = 0  12 region pixlogo counter
#define FRC_IPLOGO_RO_OSDBIT_RGN_CNT_1             0x0594
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_osdbit_rgn_cnt_1 // unsigned ,    RO, default = 0  12 region osdbit counter
#define FRC_IPLOGO_RO_PIXLOGO_RGN_CNT_2            0x0595
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_pixlogo_rgn_cnt_2 // unsigned ,    RO, default = 0  12 region pixlogo counter
#define FRC_IPLOGO_RO_OSDBIT_RGN_CNT_2             0x0596
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_osdbit_rgn_cnt_2 // unsigned ,    RO, default = 0  12 region osdbit counter
#define FRC_IPLOGO_RO_PIXLOGO_RGN_CNT_3            0x0597
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_pixlogo_rgn_cnt_3 // unsigned ,    RO, default = 0  12 region pixlogo counter
#define FRC_IPLOGO_RO_OSDBIT_RGN_CNT_3             0x0598
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_osdbit_rgn_cnt_3 // unsigned ,    RO, default = 0  12 region osdbit counter
#define FRC_IPLOGO_RO_PIXLOGO_RGN_CNT_4            0x0599
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_pixlogo_rgn_cnt_4 // unsigned ,    RO, default = 0  12 region pixlogo counter
#define FRC_IPLOGO_RO_OSDBIT_RGN_CNT_4             0x059a
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_osdbit_rgn_cnt_4 // unsigned ,    RO, default = 0  12 region osdbit counter
#define FRC_IPLOGO_RO_PIXLOGO_RGN_CNT_5            0x059b
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_pixlogo_rgn_cnt_5 // unsigned ,    RO, default = 0  12 region pixlogo counter
#define FRC_IPLOGO_RO_OSDBIT_RGN_CNT_5             0x059c
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_osdbit_rgn_cnt_5 // unsigned ,    RO, default = 0  12 region osdbit counter
#define FRC_IPLOGO_RO_PIXLOGO_RGN_CNT_6            0x059d
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_pixlogo_rgn_cnt_6 // unsigned ,    RO, default = 0  12 region pixlogo counter
#define FRC_IPLOGO_RO_OSDBIT_RGN_CNT_6             0x059e
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_osdbit_rgn_cnt_6 // unsigned ,    RO, default = 0  12 region osdbit counter
#define FRC_IPLOGO_RO_PIXLOGO_RGN_CNT_7            0x059f
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_pixlogo_rgn_cnt_7 // unsigned ,    RO, default = 0  12 region pixlogo counter
#define FRC_IPLOGO_RO_OSDBIT_RGN_CNT_7             0x05a0
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_osdbit_rgn_cnt_7 // unsigned ,    RO, default = 0  12 region osdbit counter
#define FRC_IPLOGO_RO_PIXLOGO_RGN_CNT_8            0x05a1
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_pixlogo_rgn_cnt_8 // unsigned ,    RO, default = 0  12 region pixlogo counter
#define FRC_IPLOGO_RO_OSDBIT_RGN_CNT_8             0x05a2
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_osdbit_rgn_cnt_8 // unsigned ,    RO, default = 0  12 region osdbit counter
#define FRC_IPLOGO_RO_PIXLOGO_RGN_CNT_9            0x05a3
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_pixlogo_rgn_cnt_9 // unsigned ,    RO, default = 0  12 region pixlogo counter
#define FRC_IPLOGO_RO_OSDBIT_RGN_CNT_9             0x05a4
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_osdbit_rgn_cnt_9 // unsigned ,    RO, default = 0  12 region osdbit counter
#define FRC_IPLOGO_RO_PIXLOGO_RGN_CNT_10           0x05a5
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_pixlogo_rgn_cnt_10 // unsigned ,    RO, default = 0  12 region pixlogo counter
#define FRC_IPLOGO_RO_OSDBIT_RGN_CNT_10            0x05a6
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_osdbit_rgn_cnt_10 // unsigned ,    RO, default = 0  12 region osdbit counter
#define FRC_IPLOGO_RO_PIXLOGO_RGN_CNT_11           0x05a7
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_pixlogo_rgn_cnt_11 // unsigned ,    RO, default = 0  12 region pixlogo counter
#define FRC_IPLOGO_RO_OSDBIT_RGN_CNT_11            0x05a8
//Bit 31:20        reserved
//Bit 19: 0        ro_iplogo_osdbit_rgn_cnt_11 // unsigned ,    RO, default = 0  12 region osdbit counter
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/iplogo_regs.h
//
//
// Reading file:  ./frc_inc/iplogo_regs_hw.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_IPLOGO_HW_CTRL                         0x05e0
//Bit 31:10         reserved
//Bit 12            reg_osd_bit_en                 // unsigned ,    RW, default = 1  reg_osd_bit_en
//Bit 11:10         reserved
//Bit 9 :8          reg_remap_hw_en                // unsigned ,    RW, default = 3  reg_remap_hw_en
//Bit 7 :6          reserved
//Bit 5             reg_remap_proc_en              // unsigned ,    RW, default = 1  reg_remap_proc_en 1:open dilation and erosion 0:close
//Bit 4             reg_pre_me_mux                 // unsigned ,    RW, default = 0  1:pre_me_in force 0 in fst frame 0:get pre_me_in from nr out
//Bit 3 :0          reg_logo_sync_sel              // unsigned ,    RW, default = 7  reg_logo_sync_sel:sync select singal for iplogo
#define FRC_IPLOGO_HW_GCLK_CTRL                    0x05e1
//Bit 31:26         reserved
//Bit 25:6          reg_gclk_ctrl                  // unsigned ,    RW, default = 0  reg_gclk_ctrl
//Bit 5:4           reg_scc_det_gclk_ctrl          // unsigned ,    RW, default = 0  reg_scc_det_gclk_ctrl   0b00:gating 0b1x:free run clock
//Bit 3:2           reg_blk_clr_gclk_ctrl          // unsigned ,    RW, default = 0  reg_blk_clr_gclk_ctrl   0b00:gating 0b1x:free run clock
//Bit 1:0           reg_pix_logo_gclk_ctrl         // unsigned ,    RW, default = 0  reg_pix_logo_gclk_ctrl  0b00:gating 0b1x:free run clock
#define FRC_IPLOGO_HW_FORCE_CTRL                   0x05e2
//Bit 31:3          reserved
//Bit 2             reg_force_dila_logo_en         // unsigned ,    RW, default = 0  reg_force_dila_logo_en  force output of dila
//Bit 1             reg_force_eros_logo_en         // unsigned ,    RW, default = 0  reg_force_eros_logo_en  force output of eros
//Bit 0             reg_force_out_logo_en          // unsigned ,    RW, default = 0  reg_force_out_logo_en   force output of pix_logo
#define FRC_IPLOGO_HW_OUT_FORCE_VSCOPE             0x05e3
//Bit 31:26         reserved
//Bit 25:16         reg_pix_logo_row_end           // unsigned ,    RW, default = 127  reg_pix_logo_row_end force zone of pix_logo
//Bit 15:10         reserved
//Bit  9:0          reg_pix_logo_row_st            // unsigned ,    RW, default = 127  reg_pix_logo_row_st force zone of pix_logo
#define FRC_IPLOGO_HW_DILA_FORCE_VSCOPE            0x05e4
//Bit 31:26         reserved
//Bit 25:16         reg_dila_logo_row_end          // unsigned ,    RW, default = 127  reg_dila_logo_row_end force zone of dila
//Bit 15:10         reserved
//Bit  9:0          reg_dila_logo_row_st           // unsigned ,    RW, default = 127  reg_dila_logo_row_st  force zone of dila
#define FRC_IPLOGO_HW_EROS_FORCE_VSCOPE            0x05e5
//Bit 31:26         reserved
//Bit 25:16         reg_eros_logo_row_end          // unsigned ,    RW, default = 127  reg_eros_logo_row_end force zone of eros
//Bit 15:10         reserved
//Bit  9:0          reg_eros_logo_row_st           // unsigned ,    RW, default = 127  reg_eros_logo_row_st  force zone of eros
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/iplogo_regs_hw.h
//
// -----------------------------------------------
// REG_BASE:  FRC_INP_BBD_APB_BASE = 0x06
// -----------------------------------------------
//
// Reading file:  ./frc_inc/bbd_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_BBD_MISC                               0x0600
//Bit 31:16        reserved
//Bit 15           reg_bb_adv2ro_lvl         // unsigned ,    RW, default = 0  default = 0 rtl use
//Bit 14            reserved
//Bit 13: 0        reg_bb_gclk_ctrl          // unsigned ,    RW, default = 0  default = 0 rtl use
#define FRC_BBD_CTRL                               0x0601
//Bit 31:16        reg_bb_misc                //unsigned,     RW, default = 0
//Bit 15:4         reserved
//Bit  3           reg_bb_finer_line_check_en // unsigned ,    RW, default = 1  check finer line valid according rough
//Bit  2           reg_bb_choose_rough_posi_mode // unsigned ,    RW, default = 0  0: not use fw handle result; 1:using fw handle result
//Bit  1           reg_bb_detail_en          // unsigned ,    RW, default = 1  bbd detail enable dft1
//Bit  0           reg_bb_bbd_enable         // unsigned ,    RW, default = 1  bbd enable,  dft1
#define FRC_BBD_BLACK_TH_PRE_CUR                   0x0602
//Bit 31:26        reserved
//Bit 25:16        reg_bb_black_th_pre       // unsigned ,    RW, default = 25  pre black pixel th, dft25
//Bit 15:10        reserved
//Bit  9: 0        reg_bb_black_th           // unsigned ,    RW, default = 25  black pixel th,     dft25
#define FRC_BBD_ROUGH_BLK_STEP                     0x0603
//Bit 31: 8        reserved
//Bit  7: 0        reg_bb_rough_blk_step     // unsigned ,    RW, default = 16  cols num in one rough block,    dft16 when 1080p, dft32 when 4k, need max = 64
#define FRC_BBD_DETECT_REGION_TOP2BOT              0x0604
//Bit 31:16        reg_bb_det_top            // unsigned ,    RW, default = 0  detection range top start,   dft0
//Bit 15: 0        reg_bb_det_bot            // unsigned ,    RW, default = 1079  detection range bot end,  dft ysize-1
#define FRC_BBD_DETECT_REGION_LFT2RIT              0x0605
//Bit 31:16        reg_bb_det_lft            // unsigned ,    RW, default = 0  detection range lft start,   dft0
//Bit 15: 0        reg_bb_det_rit            // unsigned ,    RW, default = 1919  detection range rit end,  dft xsize-1
#define FRC_BBD_DETECT_DETAIL_H_TOP2BOT            0x0606
//Bit 31:16        reg_bb_det_detail_h_top   // unsigned ,    RW, default = 0  detail detection range top start, dft 0
//Bit 15: 0        reg_bb_det_detail_h_bot   // unsigned ,    RW, default = 1079  detail detection range bot  end,  dft ysize -1
#define FRC_BBD_DETECT_DETAIL_H_LFT2RIT            0x0607
//Bit 31:16        reg_bb_det_detail_h_lft   // unsigned ,    RW, default = 0  detail detection range lft start, dft 0
//Bit 15: 0        reg_bb_det_detail_h_rit   // unsigned ,    RW, default = 1919  detail detection range lft start, dft xsize;
#define FRC_BBD_DETECT_DETAIL_V_TOP2BOT            0x0608
//Bit 31:16        reg_bb_det_detail_v_top   // unsigned ,    RW, default = 0  detail detection range top start, dft 0
//Bit 15: 0        reg_bb_det_detail_v_bot   // unsigned ,    RW, default = 1079  detail detection range bot  end,  dft ysize -1
#define FRC_BBD_DETECT_DETAIL_V_LFT2RIT            0x0609
//Bit 31:16        reg_bb_det_detail_v_lft   // unsigned ,    RW, default = 0  detail detection range lft start, dft 0
//Bit 15: 0        reg_bb_det_detail_v_rit   // unsigned ,    RW, default = 959  detail detection range lft start, dft xsize;
#define FRC_BBD_DETECT_MOTION_REGION_TOP2BOT       0x060a
//Bit 31:16        reg_bb_det_motion_top     // unsigned ,    RW, default = 0  detection range top start,   dft0
//Bit 15: 0        reg_bb_det_motion_bot     // unsigned ,    RW, default = 539  detection range bot end,   dft ysize-1
#define FRC_BBD_DETECT_MOTION_REGION_LFT2RIT       0x060b
//Bit 31:16        reg_bb_det_motion_lft     // unsigned ,    RW, default = 0  detection range lft start,   dft0
//Bit 15: 0        reg_bb_det_motion_rit     // unsigned ,    RW, default = 959  detection range rit end,   dft xsize-1
#define FRC_BBD_VER_TH                             0x060c
//Bit 31:16        reg_bb_ver_th1            // unsigned ,    RW, default = 8  top-bot line bright number th in row,    dft8
//Bit 15: 0        reg_bb_ver_th2            // unsigned ,    RW, default = 560  top-bot line bright number th in row,  dft560
#define FRC_BBD_ROUGH_HOR_TH                       0x060d
//Bit 31:16        reg_bb_rough_hor_th1      // unsigned ,    RW, default = 200  Rough block bright number th,  dft200
//Bit 15: 0        reg_bb_rough_hor_th2      // unsigned ,    RW, default = 560  Rough block bright number th   dft560
#define FRC_BBD_FINER_HOR_TH                       0x060e
//Bit 31:16        reg_bb_finer_hor_th1      // unsigned ,    RW, default = 100  Left-right line bright number th in col,   dft100
//Bit 15: 0        reg_bb_finer_hor_th2      // unsigned ,    RW, default = 200  Left-right line bright number th in col,   dft200
#define FRC_BBD_ADV_ROUGH_LFT_POSI                 0x060f
//Bit 31:16        reg_bb_adv_rough_lft_posi1 // unsigned ,    RW, default = 0  fw rough-left-block1 position
//Bit 15: 0        reg_bb_adv_rough_lft_posi2 // unsigned ,    RW, default = 0  fw rough-left-block2 position
#define FRC_BBD_ADV_ROUGH_RIT_POSI                 0x0610
//Bit 31:16        reg_bb_adv_rough_rit_posi1 // unsigned ,    RW, default = 1904  fw rough-left-block1 position
//Bit 15: 0        reg_bb_adv_rough_rit_posi2 // unsigned ,    RW, default = 1904  fw rough-left-block2 position
#define FRC_BBD_OOB_APL_CAL_LFT_TOP_RANGE          0x0611
//Bit 31:16        reg_bb_oob_apl_xyxy_0     // unsigned ,    RW, default = 0  apl window lft position, dft0
//Bit 15: 0        reg_bb_oob_apl_xyxy_1     // unsigned ,    RW, default = 0  apl window top position, dft0
#define FRC_BBD_OOB_APL_CAL_RIT_BOT_RANGE          0x0612
//Bit 31:16        reg_bb_oob_apl_xyxy_2     // unsigned ,    RW, default = 1919  apl window rit position,  dft xsize - 1
//Bit 15: 0        reg_bb_oob_apl_xyxy_3     // unsigned ,    RW, default = 1079  apl window bot position,  dft ysize - 1
#define FRC_BBD_DETAIL_SETTING                     0x0613
//Bit 31:29        reserved
//Bit 28           reg_bb_detail_option      // unsigned ,    RW, default = 0  0: pixel by pixel; 1: (pixel1 - pixel3) (pixel0 - pixel2), dft0
//Bit 27:26        reserved
//Bit 25:16        reg_bb_detail_coring_th   // unsigned ,    RW, default = 5  detail coring th value,  dft5
//Bit 15:10        reserved
//Bit  9: 0        reg_bb_detail_cnt_th      // unsigned ,    RW, default = 16  detail th for count num,dft16
#define FRC_BBD_OOB_DETAIL_WIN_LFT_TOP             0x0614
//Bit 31:16        reg_bb_oob_h_detail_xyxy_0 // unsigned ,    RW, default = 0  detail lft window,  dft0
//Bit 15: 0        reg_bb_oob_h_detail_xyxy_1 // unsigned ,    RW, default = 0  detail top window,  dft0
#define FRC_BBD_OOB_DETAIL_WIN_RIT_BOT             0x0615
//Bit 31:16        reg_bb_oob_h_detail_xyxy_2 // unsigned ,    RW, default = 1919  detail rit window,  dft xsize - 1
//Bit 15: 0        reg_bb_oob_h_detail_xyxy_3 // unsigned ,    RW, default = 1079  detail bot window,  dft ysize - 1
#define FRC_BBD_OOB_V_DETAIL_WIN_LFT_TOP           0x0616
//Bit 31:16        reg_bb_oob_v_detail_xyxy_0 // unsigned ,    RW, default = 0  detail lft window,  dft 0
//Bit 15: 0        reg_bb_oob_v_detail_xyxy_1 // unsigned ,    RW, default = 0  detail top window,  dft 0
#define FRC_BBD_OOB_V_DETAIL_WIN_RIT_BOT           0x0617
//Bit 31:16        reg_bb_oob_v_detail_xyxy_2 // unsigned ,    RW, default = 959  detail rit window,  dft xsize right shift dsx - 1
//Bit 15: 0        reg_bb_oob_v_detail_xyxy_3 // unsigned ,    RW, default = 1079  detail bot window,  dft ysize - 1
#define FRC_BBD_MOTION_SETTING                     0x0618
//Bit 31:10        reserved
//Bit  9           reg_bb_choose_rough_motion_posi_mode // unsigned ,    RW, default = 1  0: choose fw 1:choose hw
//Bit  8           reg_bb_choose_finer_motion_th_mode // unsigned ,    RW, default = 1  0: choose fw 1:choose hw
//Bit  7: 0        reg_bb_motion_luma_coring_th // unsigned ,    RW, default = 16  motion coring,   dft16
#define FRC_BBD_MOTION_DETEC_REGION_LFT_TOP_DS     0x0619
//Bit 31:16        reg_bb_motion_xyxy_ds_0   // unsigned ,    RW, default = 0  motion detc lft posi, dft0
//Bit 15: 0        reg_bb_motion_xyxy_ds_1   // unsigned ,    RW, default = 0  motion detc top posi, dft0
#define FRC_BBD_MOTION_DETEC_REGION_RIT_BOT_DS     0x061a
//Bit 31:16        reg_bb_motion_xyxy_ds_2   // unsigned ,    RW, default = 959  motion detc rit posi, dft me xsize - 1
//Bit 15: 0        reg_bb_motion_xyxy_ds_3   // unsigned ,    RW, default = 539  motion detc bot posi, dft me ysize - 1
#define FRC_BBD_FLATNESS_SETTING                   0x061b
//Bit 31:16        reserved
//Bit 15: 0        reg_bb_flat_th            // unsigned ,    RW, default = 4  flatness th, dft4
#define FRC_BBD_TOP_BOT_EDGE_TH                    0x061c
//Bit 31:28        reserved
//Bit 27:16        reg_bb_top_bot_edge_th1   // unsigned ,    RW, default = 384  edge th case1 param,   dft5
//Bit 15:12        reserved
//Bit 11: 0        reg_bb_top_bot_edge_th2   // unsigned ,    RW, default = 480  edge th case2 param,   dft4
#define FRC_BBD_LFT_RIT_EDGE_TH                    0x061d
//Bit 31:28        reserved
//Bit 27:16        reg_bb_lft_rit_edge_th1   // unsigned ,    RW, default = 216  edge th case1 param,   dft5
//Bit 15:12        reserved
//Bit 11: 0        reg_bb_lft_rit_edge_th2   // unsigned ,    RW, default = 270  edge th case2 param,   dft4
#define FRC_BBD_FLATNESS_DETEC_REGION_LFT_TOP      0x061e
//Bit 31:16        reg_bb_flat_xyxy_0        // unsigned ,    RW, default = 0  lft flat line posi,    dft0
//Bit 15: 0        reg_bb_flat_xyxy_1        // unsigned ,    RW, default = 0  top flat line posi,    dft0
#define FRC_BBD_FLATNESS_DETEC_REGION_RIT_BOT      0x061f
//Bit 31:16        reg_bb_flat_xyxy_2        // unsigned ,    RW, default = 1919  rit flat line posi,    dft xsize - 1
//Bit 15: 0        reg_bb_flat_xyxy_3        // unsigned ,    RW, default = 1079  bot flat line posi,    dft ysize - 1
#define FRC_BBD_DETECT_EDGE_LINE_NUM               0x0620
//Bit 31:16        reg_bb_top_bot_det_edge_line_num // unsigned ,    RW, default = 512  detection line number in top or bot region edge, MUST BE EVEN
//Bit 15: 0        reg_bb_lft_rit_det_edge_line_num // unsigned ,    RW, default = 512  detection line number in lft or rit region edge, MEST BE EVEN
#define FRC_BBD_DETECT_MOTION_LINE_NUM             0x0621
//Bit 31:16        reg_bb_top_bot_det_motion_line_num // unsigned ,    RW, default = 256  detection line number in top or bot region motion, MUST BE EVEN
//Bit 15: 0        reg_bb_lft_rit_det_motion_line_num // unsigned ,    RW, default = 256  detection line number in lft or rit region motion, MEST BE EVEN
#define FRC_BBD_MOTION_NUM                         0x0622
//Bit 31: 7        reserved
//Bit  6: 0        reg_bb_motion_finer_col_num // unsigned ,    RW, default = 64  motion finer col num, dft 64, max 64
#define FRC_BBD_EDGE_DIFF                          0x0623
//Bit 31:16        reserved
//Bit 15: 0        reg_bb_edge_diff_th       // unsigned ,    RW, default = 10  edge th in scheme1, dft10
#define FRC_BBD_PIX_MOTION_TH                      0x0624
//Bit 31:28        reserved
//Bit 27:16        reg_bb_pix_motion_th1     // unsigned ,    RW, default = 64  motion th1, dft64
//Bit 15:12        reserved
//Bit 11: 0        reg_bb_pix_motion_th2     // unsigned ,    RW, default = 16  motion th2,   dft16
#define FRC_BBD_ROW_MOTION_TH                      0x0625
//Bit 31:28        reserved
//Bit 27:16        reg_bb_row_motion_th1     // unsigned ,    RW, default = 9  motion th in row dft9
//Bit 15:12        reserved
//Bit 11: 0        reg_bb_row_motion_th2     // unsigned ,    RW, default = 17  motion th in row    dft17
#define FRC_BBD_COL_MOTION_TH                      0x0626
//Bit 31:28        reserved
//Bit 27:16        reg_bb_col_motion_th1     // unsigned ,    RW, default = 9  motion th in col dft9
//Bit 15:12        reserved
//Bit 11: 0        reg_bb_col_motion_th2     // unsigned ,    RW, default = 17  motion th in col    dft17
#define FRC_BBD_FINER_LFT_MOTION_TH                0x0627
//Bit 31:28        reserved
//Bit 27:16        reg_bb_finer_lft_motion_th1 // unsigned ,    RW, default = 8  finer lft motion th1
//Bit 15:12        reserved
//Bit 11: 0        reg_bb_finer_lft_motion_th2 // unsigned ,    RW, default = 16  finer lft motion th2
#define FRC_BBD_FINER_RIT_MOTION_TH                0x0628
//Bit 31:28        reserved
//Bit 27:16        reg_bb_finer_rit_motion_th1 // unsigned ,    RW, default = 8  finer rit motion th1
//Bit 15:12        reserved
//Bit 11: 0        reg_bb_finer_rit_motion_th2 // unsigned ,    RW, default = 16  finer rit motion th2
#define FRC_BBD_ADV_ROUGH_LFT_MOTION_POSI          0x0629
//Bit 31:16        reg_bb_adv_rough_lft_motion_posi1 // unsigned ,    RW, default = 0  rough adv lft motion posi1
//Bit 15: 0        reg_bb_adv_rough_lft_motion_posi2 // unsigned ,    RW, default = 0  rough adv lft motion posi2
#define FRC_BBD_ADV_ROUGH_RIT_MOTION_POSI          0x062a
//Bit 31:16        reg_bb_adv_rough_rit_motion_posi1 // unsigned ,    RW, default = 896  rough adv rit motion posi1
//Bit 15: 0        reg_bb_adv_rough_rit_motion_posi2 // unsigned ,    RW, default = 896  rough adv rit motion posi2
#define FRC_BBD_APL_HIST_WIN_LFT_TOP               0x062b
//Bit 31:16        reg_bb_apl_hist_xyxy_0    // unsigned ,    RW, default = 0  apl_hist_lft_window,    0
//Bit 15: 0        reg_bb_apl_hist_xyxy_1    // unsigned ,    RW, default = 0  apl_hist_top_window,    dft0
#define FRC_BBD_APL_HIST_WIN_RIT_BOT               0x062c
//Bit 31:16        reg_bb_apl_hist_xyxy_2    // unsigned ,    RW, default = 1919  apl_hist_rit_window,    dft xsize - 1
//Bit 15: 0        reg_bb_apl_hist_xyxy_3    // unsigned ,    RW, default = 1079  apl_hist_bot_window,    dft ysize - 1
#define FRC_BBD_RO_LINE_AND_BLOCK_VALID            0x062d
//Bit 31:12        reserved
//Bit 11           ro_bb_top_valid1          // unsigned ,    RO, default = 0  if top-line1 existed, valid = 1; else = 0;
//Bit 10           ro_bb_top_valid2          // unsigned ,    RO, default = 0  if top-line2 existed, valid = 1; else = 0;
//Bit  9           ro_bb_bot_valid1          // unsigned ,    RO, default = 0  if bot-line1 existed, valid = 1; else = 0;
//Bit  8           ro_bb_bot_valid2          // unsigned ,    RO, default = 0  if bot-line2 existed, valid = 1; else = 0;
//Bit  7           ro_bb_rough_lft_valid1    // unsigned ,    RO, default = 0  if rough-left-block1 existed, valid = 1; else = 0;
//Bit  6           ro_bb_rough_lft_valid2    // unsigned ,    RO, default = 0  if rough-left-block2 existed, valid = 1; else = 0;
//Bit  5           ro_bb_rough_rit_valid1    // unsigned ,    RO, default = 0  if rough-right-block1 existed, valid = 1; else = 0;
//Bit  4           ro_bb_rough_rit_valid2    // unsigned ,    RO, default = 0  if rough-right-block2 existed, valid = 1; else = 0;
//Bit  3           ro_bb_finer_lft_valid1    // unsigned ,    RO, default = 0  if left-line1 existed, valid = 1; else = 0;
//Bit  2           ro_bb_finer_lft_valid2    // unsigned ,    RO, default = 0  if left-line2 existed, valid = 1; else = 0;
//Bit  1           ro_bb_finer_rit_valid1    // unsigned ,    RO, default = 0  if right-line1 existed, valid = 1; else = 0;
//Bit  0           ro_bb_finer_rit_valid2    // unsigned ,    RO, default = 0  if right-line2 existed, valid = 1; else = 0;
#define FRC_BBD_RO_TOP_POSI                        0x062e
//Bit 31:16        ro_bb_top_posi1           // unsigned ,    RO, default = 0  top line1 position,    dft0
//Bit 15: 0        ro_bb_top_posi2           // unsigned ,    RO, default = 0  top line2 position,    dft0
#define FRC_BBD_RO_TOP_BRIGHT_NUM_CNT              0x062f
//Bit 31:16        ro_bb_top_cnt1            // unsigned ,    RO, default = 0  the bright pixel num in top line1, dft0
//Bit 15: 0        ro_bb_top_cnt2            // unsigned ,    RO, default = 0  the bright pixel num in top line2, dft0
#define FRC_BBD_RO_BOT_POSI                        0x0630
//Bit 31:16        ro_bb_bot_posi1           // unsigned ,    RO, default = 1079  bot line1 position,    dft ysize - 1
//Bit 15: 0        ro_bb_bot_posi2           // unsigned ,    RO, default = 1079  bot line2 position,    dft ysize - 1
#define FRC_BBD_RO_BOT_BRIGHT_NUM_CNT              0x0631
//Bit 31:16        ro_bb_bot_cnt1            // unsigned ,    RO, default = 0  the bright pixel num in bot line1, dft0
//Bit 15: 0        ro_bb_bot_cnt2            // unsigned ,    RO, default = 0  the bright pixel num in bot line2, dft0
#define FRC_BBD_RO_ROUGH_LFT_POSI                  0x0632
//Bit 31:16        ro_bb_rough_lft_posi1     // unsigned ,    RO, default = 0  rough-left-block1 start position,    dft0
//Bit 15: 0        ro_bb_rough_lft_posi2     // unsigned ,    RO, default = 0  rough-left-block2 start position,    dft0
#define FRC_BBD_RO_ROUGH_LFT_BRIGHT_NUM_CNT        0x0633
//Bit 31:16        ro_bb_rough_lft_cnt1      // unsigned ,    RO, default = 0  the bright pixel num in rough-left-block1, dft0
//Bit 15: 0        ro_bb_rough_lft_cnt2      // unsigned ,    RO, default = 0  the bright pixel num in rough-left-block2, dft0
#define FRC_BBD_RO_ROUGH_RIT_POSI                  0x0634
//Bit 31:16        ro_bb_rough_rit_posi1     // unsigned ,    RO, default = 0  rough-right-block1 start position,   dft0
//Bit 15: 0        ro_bb_rough_rit_posi2     // unsigned ,    RO, default = 0  rough-right-block2 start position,   dft0
#define FRC_BBD_RO_ROUGH_RIT_BRIGHT_NUM_CNT        0x0635
//Bit 31:16        ro_bb_rough_rit_cnt1      // unsigned ,    RO, default = 0  the bright pixel num in rough-right-block1,    dft0
//Bit 15: 0        ro_bb_rough_rit_cnt2      // unsigned ,    RO, default = 0  the bright pixel num in rough-right-block2,    dft0
#define FRC_BBD_RO_ROUGH_INDEX                     0x0636
//Bit 31:24        ro_bb_rough_lft_index1    // unsigned ,    RO, default = 0  rough-left-block1 position,    dft0
//Bit 23:16        ro_bb_rough_lft_index2    // unsigned ,    RO, default = 0  rough-left-block2 position,    dft0
//Bit 15: 8        ro_bb_rough_rit_index1    // unsigned ,    RO, default = 0  rough-left-block1 position,    dft0
//Bit  7: 0        ro_bb_rough_rit_index2    // unsigned ,    RO, default = 0  rough-left-block2 position,    dft0
#define FRC_BBD_RO_LFT_POSI                        0x0637
//Bit 31:16        ro_bb_finer_lft_posi1     // unsigned ,    RO, default = 0  left line1 position,   dft0
//Bit 15: 0        ro_bb_finer_lft_posi2     // unsigned ,    RO, default = 0  left line2 position,   dft0
#define FRC_BBD_RO_LFT_BRIGHT_NUM_CNT              0x0638
//Bit 31:16        ro_bb_finer_lft_cnt1      // unsigned ,    RO, default = 0  the bright pixel num in left line1,    dft0
//Bit 15: 0        ro_bb_finer_lft_cnt2      // unsigned ,    RO, default = 0  the bright pixel num in left line2,    dft0
#define FRC_BBD_RO_RIT_POSI                        0x0639
//Bit 31:16        ro_bb_finer_rit_posi1     // unsigned ,    RO, default = 1919  right line1 position,  dft xsize-1
//Bit 15: 0        ro_bb_finer_rit_posi2     // unsigned ,    RO, default = 1919  right line2 position,  dft xsize-1
#define FRC_BBD_RO_RIT_BRIGHT_NUM_CNT              0x063a
//Bit 31:16        ro_bb_finer_rit_cnt1      // unsigned ,    RO, default = 0  the bright pixel num in right line1,   dft0
//Bit 15: 0        ro_bb_finer_rit_cnt2      // unsigned ,    RO, default = 0  the bright pixel num in right line2,   dft0
#define FRC_BBD_RO_OOB_APL_TOP_SUM                 0x063b
//Bit 31: 0        ro_bb_oob_apl_top_sum     // unsigned ,    RO, default = 0  apl value in top region A, dft0
#define FRC_BBD_RO_OOB_APL_BOT_SUM                 0x063c
//Bit 31: 0        ro_bb_oob_apl_bot_sum     // unsigned ,    RO, default = 0  apl value in bot region E, dft0
#define FRC_BBD_RO_OOB_APL_LFT_SUM                 0x063d
//Bit 31: 0        ro_bb_oob_apl_lft_sum     // unsigned ,    RO, default = 0  apl value in lft region B, dft0
#define FRC_BBD_RO_OOB_APL_RIT_SUM                 0x063e
//Bit 31: 0        ro_bb_oob_apl_rit_sum     // unsigned ,    RO, default = 0  apl value in rit region D, dft0
#define FRC_BBD_RO_OOB_H_DETAIL_TOP_VAL            0x063f
//Bit 31: 0        ro_bb_oob_h_detail_top_val // unsigned ,    RO, default = 0  H_detail value in top region A, dft0
#define FRC_BBD_RO_OOB_V_DETAIL_TOP_VAL            0x0640
//Bit 31: 0        ro_bb_oob_v_detail_top_val // unsigned ,    RO, default = 0  V_detail value in top region A, dft0
#define FRC_BBD_RO_OOB_H_DETAIL_TOP_CNT            0x0641
//Bit 31: 0        ro_bb_oob_h_detail_top_cnt // unsigned ,    RO, default = 0  how many H_detail value large than detail_cnt_th in top region A,    dft0
#define FRC_BBD_RO_OOB_V_DETAIL_TOP_CNT            0x0642
//Bit 31: 0        ro_bb_oob_v_detail_top_cnt // unsigned ,    RO, default = 0  how many V_detail value large than detail_cnt_th in top region A,    dft0
#define FRC_BBD_RO_OOB_H_DETAIL_BOT_VAL            0x0643
//Bit 31: 0        ro_bb_oob_h_detail_bot_val // unsigned ,    RO, default = 0  H_detail value in bot region E, dft0
#define FRC_BBD_RO_OOB_V_DETAIL_BOT_VAL            0x0644
//Bit 31: 0        ro_bb_oob_v_detail_bot_val // unsigned ,    RO, default = 0  V_detail value in bot region E, dft0
#define FRC_BBD_RO_OOB_H_DETAIL_BOT_CNT            0x0645
//Bit 31: 0        ro_bb_oob_h_detail_bot_cnt // unsigned ,    RO, default = 0  how many H_detail value  detail_cnt_th in bot region E,    dft0
#define FRC_BBD_RO_OOB_V_DETAIL_BOT_CNT            0x0646
//Bit 31: 0        ro_bb_oob_v_detail_bot_cnt // unsigned ,    RO, default = 0  how many V_detail value large than detail_cnt_th in bot region E,    dft0
#define FRC_BBD_RO_OOB_H_DETAIL_LFT_VAL            0x0647
//Bit 31: 0        ro_bb_oob_h_detail_lft_val // unsigned ,    RO, default = 0  H_detail value in lft region B, dft0
#define FRC_BBD_RO_OOB_V_DETAIL_LFT_VAL            0x0648
//Bit 31: 0        ro_bb_oob_v_detail_lft_val // unsigned ,    RO, default = 0  V_detail value in lft region B, dft0
#define FRC_BBD_RO_OOB_H_DETAIL_LFT_CNT            0x0649
//Bit 31: 0        ro_bb_oob_h_detail_lft_cnt // unsigned ,    RO, default = 0  how many H_detail value large than detail_cnt_th in lft region B,    dft0
#define FRC_BBD_RO_OOB_V_DETAIL_LFT_CNT            0x064a
//Bit 31: 0        ro_bb_oob_v_detail_lft_cnt // unsigned ,    RO, default = 0  how many V_detail value large than detail_cnt_th in lft region B,    dft0
#define FRC_BBD_RO_OOB_H_DETAIL_RIT_VAL            0x064b
//Bit 31: 0        ro_bb_oob_h_detail_rit_val // unsigned ,    RO, default = 0  H_detail value in rit region D, dft0
#define FRC_BBD_RO_OOB_V_DETAIL_RIT_VAL            0x064c
//Bit 31: 0        ro_bb_oob_v_detail_rit_val // unsigned ,    RO, default = 0  V_detail value in rit region D, dft0
#define FRC_BBD_RO_OOB_H_DETAIL_RIT_CNT            0x064d
//Bit 31: 0        ro_bb_oob_h_detail_rit_cnt // unsigned ,    RO, default = 0  how many H_detail value large than detail_cnt_th in rit region D,    dft0
#define FRC_BBD_RO_OOB_V_DETAIL_RIT_CNT            0x064e
//Bit 31: 0        ro_bb_oob_v_detail_rit_cnt // unsigned ,    RO, default = 0  how many V_detail value large than detail_cnt_th in rit region D,    dft0
#define FRC_BBD_RO_H_DETAIL_GLB_VAL                0x064f
//Bit 31: 0        ro_bb_h_detail_glb_val    // unsigned ,    RO, default = 0  HV_detail value in center region C, dft0
#define FRC_BBD_RO_V_DETAIL_GLB_VAL                0x0650
//Bit 31: 0        ro_bb_v_detail_glb_val    // unsigned ,    RO, default = 0  HV_detail value in center region C, dft0
#define FRC_BBD_RO_H_DETAIL_GLB_CNT                0x0651
//Bit 31: 0        ro_bb_h_detail_glb_cnt    // unsigned ,    RO, default = 0  how many H_detail value large than detail_cnt_th in center region C, dft0
#define FRC_BBD_RO_V_DETAIL_GLB_CNT                0x0652
//Bit 31: 0        ro_bb_v_detail_glb_cnt    // unsigned ,    RO, default = 0  how many V_detail value large than detail_cnt_th in center region C, dft0
#define FRC_BBD_RO_REGION_MOTION_DIFF_VAL_TOP_BOT  0x0653
//Bit 31:16        ro_bb_oob_motion_diff_top_val // unsigned ,    RO, default = 0  motion diff cnt,    dft0
//Bit 15: 0        ro_bb_oob_motion_diff_bot_val // unsigned ,    RO, default = 0  motion diff cnt,    dft0
#define FRC_BBD_RO_REGION_MOTION_DIFF_VAL_LFT_RIT  0x0654
//Bit 31:16        ro_bb_oob_motion_diff_lft_val // unsigned ,    RO, default = 0  motion diff cnt,    dft0
//Bit 15: 0        ro_bb_oob_motion_diff_rit_val // unsigned ,    RO, default = 0  motion diff cnt,    dft0
#define FRC_BBD_RO_FLATNESS_CNT_TOP_BOT            0x0655
//Bit 31:16        ro_bb_flat_top_cnt        // unsigned ,    RO, default = 0  top flat pixel num,    dft0
//Bit 15: 0        ro_bb_flat_bot_cnt        // unsigned ,    RO, default = 0  bot flat pixel num,    dft0
#define FRC_BBD_RO_FLATNESS_CNT_LFT_RIT            0x0656
//Bit 31:16        ro_bb_flat_lft_cnt        // unsigned ,    RO, default = 0  lft flat pixel num,    dft0
//Bit 15: 0        ro_bb_flat_rit_cnt        // unsigned ,    RO, default = 0  rit flat pixel num,    dft0
#define FRC_BBD_RO_EDGE_POSI_VALID                 0x0657
//Bit 31:12        reserved
//Bit 11           ro_bb_top_edge_posi_valid1 // unsigned ,    RO, default = 0  top edge posi valid,    dft0
//Bit 10           ro_bb_bot_edge_posi_valid1 // unsigned ,    RO, default = 0  bot edge posi valid,    dft0
//Bit  9           ro_bb_top_edge_posi_valid2 // unsigned ,    RO, default = 0  top edge posi valid,    dft0
//Bit  8           ro_bb_bot_edge_posi_valid2 // unsigned ,    RO, default = 0  bot edge posi valid,    dft0
//Bit  7           ro_bb_lft_edge_posi_valid1 // unsigned ,    RO, default = 0  lft edge posi valid,    dft0
//Bit  6           ro_bb_rit_edge_posi_valid1 // unsigned ,    RO, default = 0  rit edge posi valid,    dft0
//Bit  5           ro_bb_lft_edge_posi_valid2 // unsigned ,    RO, default = 0  lft edge posi valid,    dft0
//Bit  4           ro_bb_rit_edge_posi_valid2 // unsigned ,    RO, default = 0  rit edge posi valid,    dft0
//Bit  3           ro_bb_top_edge_first_posi_valid // unsigned ,    RO, default = 0  first top edge posi valid,    dft0
//Bit  2           ro_bb_bot_edge_first_posi_valid // unsigned ,    RO, default = 0  first bot edge posi valid,    dft0
//Bit  1           ro_bb_lft_edge_first_posi_valid // unsigned ,    RO, default = 0  first lft edge posi valid,    dft0
//Bit  0           ro_bb_rit_edge_first_posi_valid // unsigned ,    RO, default = 0  first rit edge posi valid,    dft0
#define FRC_BBD_RO_TOP_EDGE_POSI                   0x0658
//Bit 31:16        ro_bb_top_edge_posi1      // unsigned ,    RO, default = 0  top edge posi1,    dft0
//Bit 15: 0        ro_bb_top_edge_posi2      // unsigned ,    RO, default = 0  top edge posi2,    dft0
#define FRC_BBD_RO_TOP_EDGE_VAL                    0x0659
//Bit 31:16        ro_bb_top_edge_val1       // unsigned ,    RO, default = 0  top edge val max1,    dft0
//Bit 15: 0        ro_bb_top_edge_val2       // unsigned ,    RO, default = 0  top edge val max2,    dft0
#define FRC_BBD_RO_BOT_EDGE_POSI                   0x065a
//Bit 31:16        ro_bb_bot_edge_posi1      // unsigned ,    RO, default = 1079  bot edge posi1, dft ysize - 1
//Bit 15: 0        ro_bb_bot_edge_posi2      // unsigned ,    RO, default = 1079  bot edge posi2, dft ysize - 1
#define FRC_BBD_RO_BOT_EDGE_VAL                    0x065b
//Bit 31:16        ro_bb_bot_edge_val1       // unsigned ,    RO, default = 0  bot edge val max1,    dft0
//Bit 15: 0        ro_bb_bot_edge_val2       // unsigned ,    RO, default = 0  bot edge val max2,    dft0
#define FRC_BBD_RO_LFT_EDGE_POSI                   0x065c
//Bit 31:16        ro_bb_lft_edge_posi1      // unsigned ,    RO, default = 0  lft edge posi1,    dft0
//Bit 15: 0        ro_bb_lft_edge_posi2      // unsigned ,    RO, default = 0  lft edge posi2,    dft0
#define FRC_BBD_RO_LFT_EDGE_VAL                    0x065d
//Bit 31:16        ro_bb_lft_edge_val1       // unsigned ,    RO, default = 0  lft edge posi max1,    dft0
//Bit 15: 0        ro_bb_lft_edge_val2       // unsigned ,    RO, default = 0  lft edge posi max2,    dft0
#define FRC_BBD_RO_RIT_EDGE_POSI                   0x065e
//Bit 31:16        ro_bb_rit_edge_posi1      // unsigned ,    RO, default = 1919  rit edge posi1,    dft xsize - 1
//Bit 15: 0        ro_bb_rit_edge_posi2      // unsigned ,    RO, default = 1919  rit edge posi2,    dft xsize - 1
#define FRC_BBD_RO_RIT_EDGE_VAL                    0x065f
//Bit 31:16        ro_bb_rit_edge_val1       // unsigned ,    RO, default = 0  rit edge posi max1,    dft0
//Bit 15: 0        ro_bb_rit_edge_val2       // unsigned ,    RO, default = 0  rit edge posi max2,    dft0
#define FRC_BBD_RO_TOP_EDGE_FIRST                  0x0660
//Bit 31:16        ro_bb_top_edge_first_posi // unsigned ,    RO, default = 0  first top edge posi,    dft0
//Bit 15: 0        ro_bb_top_edge_first_val  // unsigned ,    RO, default = 0  first top edge posi val,    dft0
#define FRC_BBD_RO_BOT_EDGE_FIRST                  0x0661
//Bit 31:16        ro_bb_bot_edge_first_posi // unsigned ,    RO, default = 1079  first bot edge posi,   dft ysize - 1
//Bit 15: 0        ro_bb_bot_edge_first_val  // unsigned ,    RO, default = 0  first bot edge posi val,    dft0
#define FRC_BBD_RO_LFT_EDGE_FIRST                  0x0662
//Bit 31:16        ro_bb_lft_edge_first_posi // unsigned ,    RO, default = 0  first lft edge posi,    dft0
//Bit 15: 0        ro_bb_lft_edge_first_val  // unsigned ,    RO, default = 0  first lft edge posi val,    dft0
#define FRC_BBD_RO_RIT_EDGE_FIRST                  0x0663
//Bit 31:16        ro_bb_rit_edge_first_posi // unsigned ,    RO, default = 1919  first rit edge posi,    dft xsize - 1
//Bit 15: 0        ro_bb_rit_edge_first_val  // unsigned ,    RO, default = 0  first rit edge posi val,    dft0
#define FRC_BBD_RO_MOTION_POSI_VALID               0x0664
//Bit 31:12        reserved
//Bit 11           ro_bb_rough_lft_motion_posi_valid1 // unsigned ,    RO, default = 0  rough lft motion posi1 valid,    dft0
//Bit 10           ro_bb_rough_lft_motion_posi_valid2 // unsigned ,    RO, default = 0  rough lft motion posi2 valid,    dft0
//Bit  9           ro_bb_rough_rit_motion_posi_valid1 // unsigned ,    RO, default = 0  rough rit motion posi1 valid,    dft0
//Bit  8           ro_bb_rough_rit_motion_posi_valid2 // unsigned ,    RO, default = 0  rough rit motion posi2 valid,    dft0
//Bit  7           ro_bb_top_motion_posi_valid1 // unsigned ,    RO, default = 0  top motion posi1 valid,    dft0
//Bit  6           ro_bb_bot_motion_posi_valid1 // unsigned ,    RO, default = 0  bot motion posi1 valid,    dft0
//Bit  5           ro_bb_top_motion_posi_valid2 // unsigned ,    RO, default = 0  top motion posi2 valid,    dft0
//Bit  4           ro_bb_bot_motion_posi_valid2 // unsigned ,    RO, default = 0  bot motion posi2 valid,    dft0
//Bit  3           ro_bb_lft_motion_posi_valid1 // unsigned ,    RO, default = 0  lft motion posi1 valid,    dft0
//Bit  2           ro_bb_rit_motion_posi_valid1 // unsigned ,    RO, default = 0  rit motion posi1 valid,    dft0
//Bit  1           ro_bb_lft_motion_posi_valid2 // unsigned ,    RO, default = 0  lft motion posi2 valid,    dft0
//Bit  0           ro_bb_rit_motion_posi_valid2 // unsigned ,    RO, default = 0  rit motion posi2 valid,    dft0
#define FRC_BBD_RO_FINER_LFT_MOTION_TH             0x0665
//Bit 31:28        reserved
//Bit 27:16        ro_bb_finer_lft_motion_th1 // unsigned ,    RO, default = 8  finer lft motion th1, dft8
//Bit 15:12        reserved
//Bit 11: 0        ro_bb_finer_lft_motion_th2 // unsigned ,    RO, default = 16  finer lft motion th2, dft16
#define FRC_BBD_RO_FINER_RIT_MOTION_TH             0x0666
//Bit 31:28        reserved
//Bit 27:16        ro_bb_finer_rit_motion_th1 // unsigned ,    RO, default = 8  finer rit motion th1, dft8
//Bit 15:12        reserved
//Bit 11: 0        ro_bb_finer_rit_motion_th2 // unsigned ,    RO, default = 16  finer rit motion th2, dft16
#define FRC_BBD_RO_TOP_MOTION_POSI                 0x0667
//Bit 31:16        ro_bb_top_motion_posi1    // unsigned ,    RO, default = 0  top motion posi1,    dft0
//Bit 15: 0        ro_bb_top_motion_posi2    // unsigned ,    RO, default = 0  top motion posi2,    dft0
#define FRC_BBD_RO_TOP_MOTION_CNT                  0x0668
//Bit 31:16        ro_bb_top_motion_cnt1     // unsigned ,    RO, default = 0  top motion cnt1,    dft0
//Bit 15: 0        ro_bb_top_motion_cnt2     // unsigned ,    RO, default = 0  top motion cnt2,    dft0
#define FRC_BBD_RO_BOT_MOTION_POSI                 0x0669
//Bit 31:16        ro_bb_bot_motion_posi1    // unsigned ,    RO, default = 1079  bot motion posi1,  dft ysize - 1
//Bit 15: 0        ro_bb_bot_motion_posi2    // unsigned ,    RO, default = 1079  bot motion posi2,  dft ysize - 1
#define FRC_BBD_RO_BOT_MOTION_CNT                  0x066a
//Bit 31:16        ro_bb_bot_motion_cnt1     // unsigned ,    RO, default = 0  bot motion cnt1,    dft0
//Bit 15: 0        ro_bb_bot_motion_cnt2     // unsigned ,    RO, default = 0  bot motion cnt2,    dft0
#define FRC_BBD_RO_ROUGH_MOTION_POSI               0x066b
//Bit 31:24        ro_bb_rough_lft_motion_index1 // unsigned ,    RO, default = 0  rough lft motion index1,    dft0
//Bit 23:16        ro_bb_rough_lft_motion_index2 // unsigned ,    RO, default = 0  rough lft motion index2,    dft0
//Bit 15: 8        ro_bb_rough_rit_motion_index1 // unsigned ,    RO, default = 0  rough rit motion index1,    dft0
//Bit  7: 0        ro_bb_rough_rit_motion_index2 // unsigned ,    RO, default = 0  rough rit motion index2,    dft0
#define FRC_BBD_RO_ROUGH_LFT_MOTION_POSI           0x066c
//Bit 31:16        ro_bb_rough_lft_motion_posi1 // unsigned ,    RO, default = 0  rough lft motion posi1
//Bit 15: 0        ro_bb_rough_lft_motion_posi2 // unsigned ,    RO, default = 0  rough lft motion posi2
#define FRC_BBD_RO_ROUGH_RIT_MOTION_POSI           0x066d
//Bit 31:16        ro_bb_rough_rit_motion_posi1 // unsigned ,    RO, default = 0  rough rit motion posi1
//Bit 15: 0        ro_bb_rough_rit_motion_posi2 // unsigned ,    RO, default = 0  rough rit motion posi2
#define FRC_BBD_RO_ROUGH_LFT_MOTION_CNT            0x066e
//Bit 31:16        ro_bb_rough_lft_motion_cnt1 // unsigned ,    RO, default = 0  rough lft motion cnt1
//Bit 15: 0        ro_bb_rough_lft_motion_cnt2 // unsigned ,    RO, default = 0  rough lft motion cnt2
#define FRC_BBD_RO_ROUGH_RIT_MOTION_CNT            0x066f
//Bit 31:16        ro_bb_rough_rit_motion_cnt1 // unsigned ,    RO, default = 0  rough rit motion cnt1
//Bit 15: 0        ro_bb_rough_rit_motion_cnt2 // unsigned ,    RO, default = 0  rough rit motion cnt2
#define FRC_BBD_RO_LFT_MOTION_POSI                 0x0670
//Bit 31:16        ro_bb_lft_motion_posi1    // unsigned ,    RO, default = 0  lft motion posi1,    dft0
//Bit 15: 0        ro_bb_lft_motion_posi2    // unsigned ,    RO, default = 0  lft motion posi2,    dft0
#define FRC_BBD_RO_LFT_MOTION_CNT                  0x0671
//Bit 31:16        ro_bb_lft_motion_cnt1     // unsigned ,    RO, default = 0  lft motion cnt1,    dft0
//Bit 15: 0        ro_bb_lft_motion_cnt2     // unsigned ,    RO, default = 0  lft motion cnt2,    dft0
#define FRC_BBD_RO_RIT_MOTION_POSI                 0x0672
//Bit 31:16        ro_bb_rit_motion_posi1    // unsigned ,    RO, default = 1919  rit motion posi1,    dft xsize - 1
//Bit 15: 0        ro_bb_rit_motion_posi2    // unsigned ,    RO, default = 1919  rit motion posi2,    dft xsize - 1
#define FRC_BBD_RO_RIT_MOTION_CNT                  0x0673
//Bit 31:16        ro_bb_rit_motion_cnt1     // unsigned ,    RO, default = 0  rit motion cnt1,    dft0
//Bit 15: 0        ro_bb_rit_motion_cnt2     // unsigned ,    RO, default = 0  rit motion cnt2,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_0               0x0674
//Bit 31: 0        ro_bb_finer_hist_data_0   // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_1               0x0675
//Bit 31: 0        ro_bb_finer_hist_data_1   // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_2               0x0676
//Bit 31: 0        ro_bb_finer_hist_data_2   // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_3               0x0677
//Bit 31: 0        ro_bb_finer_hist_data_3   // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_4               0x0678
//Bit 31: 0        ro_bb_finer_hist_data_4   // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_5               0x0679
//Bit 31: 0        ro_bb_finer_hist_data_5   // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_6               0x067a
//Bit 31: 0        ro_bb_finer_hist_data_6   // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_7               0x067b
//Bit 31: 0        ro_bb_finer_hist_data_7   // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_8               0x067c
//Bit 31: 0        ro_bb_finer_hist_data_8   // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_9               0x067d
//Bit 31: 0        ro_bb_finer_hist_data_9   // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_10              0x067e
//Bit 31: 0        ro_bb_finer_hist_data_10  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_11              0x067f
//Bit 31: 0        ro_bb_finer_hist_data_11  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_12              0x0680
//Bit 31: 0        ro_bb_finer_hist_data_12  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_13              0x0681
//Bit 31: 0        ro_bb_finer_hist_data_13  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_14              0x0682
//Bit 31: 0        ro_bb_finer_hist_data_14  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_15              0x0683
//Bit 31: 0        ro_bb_finer_hist_data_15  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_16              0x0684
//Bit 31: 0        ro_bb_finer_hist_data_16  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_17              0x0685
//Bit 31: 0        ro_bb_finer_hist_data_17  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_18              0x0686
//Bit 31: 0        ro_bb_finer_hist_data_18  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_19              0x0687
//Bit 31: 0        ro_bb_finer_hist_data_19  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_20              0x0688
//Bit 31: 0        ro_bb_finer_hist_data_20  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_21              0x0689
//Bit 31: 0        ro_bb_finer_hist_data_21  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_22              0x068a
//Bit 31: 0        ro_bb_finer_hist_data_22  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_23              0x068b
//Bit 31: 0        ro_bb_finer_hist_data_23  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_24              0x068c
//Bit 31: 0        ro_bb_finer_hist_data_24  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_25              0x068d
//Bit 31: 0        ro_bb_finer_hist_data_25  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_26              0x068e
//Bit 31: 0        ro_bb_finer_hist_data_26  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_27              0x068f
//Bit 31: 0        ro_bb_finer_hist_data_27  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_28              0x0690
//Bit 31: 0        ro_bb_finer_hist_data_28  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_29              0x0691
//Bit 31: 0        ro_bb_finer_hist_data_29  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_30              0x0692
//Bit 31: 0        ro_bb_finer_hist_data_30  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_FINER_HIST_DATA_31              0x0693
//Bit 31: 0        ro_bb_finer_hist_data_31  // unsigned ,    RO, default = 0  histogram for active region,    dft0
#define FRC_BBD_RO_HIST_IDX                        0x0694
//Bit 31:24        reserved
//Bit 23:16        ro_bb_max1_hist_idx       // unsigned ,    RO, default = 0  index for the first most max num hist,  dft0
//Bit 15: 8        ro_bb_max2_hist_idx       // unsigned ,    RO, default = 0  index for the second most max num hist, dft0
//Bit  7: 0        ro_bb_min1_hist_idx       // unsigned ,    RO, default = 0  index for the most min num hist,    dft0
#define FRC_BBD_RO_MAX1_HIST_CNT                   0x0695
//Bit 31: 0        ro_bb_max1_hist_cnt       // unsigned ,    RO, default = 0  number in the first most max num hist,  dft0
#define FRC_BBD_RO_MAX2_HIST_CNT                   0x0696
//Bit 31: 0        ro_bb_max2_hist_cnt       // unsigned ,    RO, default = 0  number in the second most max num hist, dft0
#define FRC_BBD_RO_MIN1_HIST_CNT                   0x0697
//Bit 31: 0        ro_bb_min1_hist_cnt       // unsigned ,    RO, default = 0  number in the most min num hist,    dft0
#define FRC_BBD_RO_APL_GLB_SUM                     0x0698
//Bit 31: 0        ro_bb_apl_glb_sum         // unsigned ,    RO, default = 0  apl value in active region, dft0
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/bbd_regs.h
//
// -----------------------------------------------
// REG_BASE:  FRC_INP_PD_APB_BASE = 0x07
// -----------------------------------------------
//
// Reading file:  ./frc_inc/frc_pd_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_FD_ENABLE                              0x0700
//Bit 31:24        reg_fd_enter_fd_th        // unsigned ,    RW, default = 15
//Bit 23           reg_fd_hwfw_enter_th_en   // unsigned ,    RW, default = 1
//Bit 22           reg_fd_film_mot_flag      // unsigned ,    RW, default = 1
//Bit 21:16        reg_fd_edge_ratio         // unsigned ,    RW, default = 0  ratio of edge_level to calculate coring; coring = ratio*edge_level + noise_th ; dif = abs(cur-pre) - coring;
//Bit 15:14        reserved
//Bit 13:12        reg_fd_edge_mode          // unsigned ,    RW, default = 0  mode of edge mode ; 0 : MAX  ,1:MIN 2 : mean
//Bit 11: 9        reserved
//Bit  8           reg_fd_mot_clip_en        // unsigned ,    RW, default = 0  enable for dif clip to (0,thd) ;
//Bit  7: 6        reserved
//Bit  5           reg_fd_reverse_en         // unsigned ,    RW, default = 0  enable for reverse (outside window is valid)
//Bit  4           reg_fd_mute_en            // unsigned ,    RW, default = 0
//Bit  3           reg_film_motion_hwfw_sel  // unsigned ,    RW, default = 1  0: use reg_fd_film_mot_flag;  1: use HW
//Bit  2            reserved
//Bit  1           reg_fd_phase_err_flg_film // unsigned ,    RW, default = 0  global, phase error flag in A1A2 period
//Bit  0           reg_fd_mot_en             // unsigned ,    RW, default = 1  enable for pixel dif  sum calculate
#define FRC_FD_CLIP_TH                             0x0701
//Bit 31:24        reg_fd_mot_clip_th4       // unsigned ,    RW, default = 100
//Bit 23:16        reg_fd_mot_clip_th3       // unsigned ,    RW, default = 100
//Bit 15: 8        reg_fd_mot_clip_th2       // unsigned ,    RW, default = 100
//Bit  7: 0        reg_fd_mot_clip_th1       // unsigned ,    RW, default = 100
#define FRC_FD_COUNT_TH                            0x0702
//Bit 31:24        reg_fd_mot_count_th4      // unsigned ,    RW, default = 50
//Bit 23:16        reg_fd_mot_count_th3      // unsigned ,    RW, default = 50
//Bit 15: 8        reg_fd_mot_count_th2      // unsigned ,    RW, default = 50
//Bit  7: 0        reg_fd_mot_count_th1      // unsigned ,    RW, default = 50
#define FRC_FD_NOISE_OFST                          0x0703
//Bit 31:24        reg_fd_noise_th4          // unsigned ,    RW, default = 4
//Bit 23:16        reg_fd_noise_th3          // unsigned ,    RW, default = 4
//Bit 15: 8        reg_fd_noise_th2          // unsigned ,    RW, default = 4
//Bit  7: 0        reg_fd_noise_th1          // unsigned ,    RW, default = 4
#define FRC_FD_AVEG_RATIO                          0x0704
//Bit 31:24        reg_fd_averag_num         // unsigned ,    RW, default = 20
//Bit 23:21        reserved
//Bit 20:16        reg_fd_averag_rate        // unsigned ,    RW, default = 10  average ratio, average = average * ratio/16
//Bit 15:13        reserved
//Bit 12: 8        reg_fd_quit_reset_thd     // unsigned ,    RW, default = 15  reset quit thd
//Bit  7: 5        reserved
//Bit  4: 0        reg_fd_quit_thd           // unsigned ,    RW, default = 5  quit film mode thd
#define FRC_FD_AVEG_OFST                           0x0705
//Bit 31: 0        reg_fd_averag_ofst        // unsigned ,    RW, default = 1024  average ofst,average = average + reg_fd_averag_ofst;
#define FRC_FD_DIF_THD                             0x0706
//Bit 31: 0        reg_fd_dif_thd            // unsigned ,    RW, default = 4096  dif thd
#define FRC_FD_WIND_0                              0x0707
//Bit 31:16        reg_fd_wind_x_1           // unsigned ,    RW, default = 720  global window, horizontal begin and end
//Bit 15: 0        reg_fd_wind_x_0           // unsigned ,    RW, default = 0  global window, horizontal begin and end
#define FRC_FD_WIND_1                              0x0708
//Bit 31:16        reg_fd_wind_y_1           // unsigned ,    RW, default = 540  global window, horizontal begin and end
//Bit 15: 0        reg_fd_wind_y_0           // unsigned ,    RW, default = 0  global window, horizontal begin and end
#define FRC_FD_WIND_2                              0x0709
//Bit 31:16        reg_fd_wind6_x_1          // unsigned ,    RW, default = 360  6 window, horizontal  begin and end
//Bit 15: 0        reg_fd_wind6_x_0          // unsigned ,    RW, default = 100  6 window, horizontal  begin and end
#define FRC_FD_WIND_3                              0x070a
//Bit 31:16        reg_fd_wind6_x_3          // unsigned ,    RW, default = 620  6 window, horizontal  begin and end
//Bit 15: 0        reg_fd_wind6_x_2          // unsigned ,    RW, default = 360  6 window, horizontal  begin and end
#define FRC_FD_WIND_4                              0x070b
//Bit 31:16        reg_fd_wind6_x_5          // unsigned ,    RW, default = 576  6 window, horizontal  begin and end
//Bit 15: 0        reg_fd_wind6_x_4          // unsigned ,    RW, default = 144  6 window, horizontal  begin and end
#define FRC_FD_WIND_5                              0x070c
//Bit 31:16        reg_fd_wind6_y_1          // unsigned ,    RW, default = 140  6 window, vertical begin and end
//Bit 15: 0        reg_fd_wind6_y_0          // unsigned ,    RW, default = 50
#define FRC_FD_WIND_6                              0x070d
//Bit 31:16        reg_fd_wind6_y_3          // unsigned ,    RW, default = 430
//Bit 15: 0        reg_fd_wind6_y_2          // unsigned ,    RW, default = 330
#define FRC_FD_WIND_7                              0x070e
//Bit 31:16        reg_fd_wind6_y_5          // unsigned ,    RW, default = 520
//Bit 15: 0        reg_fd_wind6_y_4          // unsigned ,    RW, default = 430
#define FRC_FD_WIND_8                              0x070f
//Bit 31:16        reg_fd_wind6_y_7          // unsigned ,    RW, default = 432
//Bit 15: 0        reg_fd_wind6_y_6          // unsigned ,    RW, default = 108
#define FRC_FD_WIND_9                              0x0710
//Bit 31:16        reg_fd_mot_wind12_x_1     // unsigned ,    RW, default = 180  12 window, horizontal  begin and end
//Bit 15: 0        reg_fd_mot_wind12_x_0     // unsigned ,    RW, default = 0
#define FRC_FD_WIND_10                             0x0711
//Bit 31:16        reg_fd_mot_wind12_x_3     // unsigned ,    RW, default = 360
//Bit 15: 0        reg_fd_mot_wind12_x_2     // unsigned ,    RW, default = 180
#define FRC_FD_WIND_11                             0x0712
//Bit 31:16        reg_fd_mot_wind12_x_5     // unsigned ,    RW, default = 540
//Bit 15: 0        reg_fd_mot_wind12_x_4     // unsigned ,    RW, default = 360
#define FRC_FD_WIND_12                             0x0713
//Bit 31:16        reg_fd_mot_wind12_x_7     // unsigned ,    RW, default = 720
//Bit 15: 0        reg_fd_mot_wind12_x_6     // unsigned ,    RW, default = 540
#define FRC_FD_WIND_13                             0x0714
//Bit 31:16        reg_fd_mot_wind12_y_1     // unsigned ,    RW, default = 180  12 window, vertical  begin and end
//Bit 15: 0        reg_fd_mot_wind12_y_0     // unsigned ,    RW, default = 0
#define FRC_FD_WIND_14                             0x0715
//Bit 31:16        reg_fd_mot_wind12_y_3     // unsigned ,    RW, default = 360
//Bit 15: 0        reg_fd_mot_wind12_y_2     // unsigned ,    RW, default = 180
#define FRC_FD_WIND_15                             0x0716
//Bit 31:16        reg_fd_mot_wind12_y_5     // unsigned ,    RW, default = 540
//Bit 15: 0        reg_fd_mot_wind12_y_4     // unsigned ,    RW, default = 360
#define FRC_FD_WIND_16                             0x0717
//Bit 31:16        reg_fd_mot2_wind12_x_1    // unsigned ,    RW, default = 180  12 window, horizontal  begin and end
//Bit 15: 0        reg_fd_mot2_wind12_x_0    // unsigned ,    RW, default = 0
#define FRC_FD_WIND_17                             0x0718
//Bit 31:16        reg_fd_mot2_wind12_x_3    // unsigned ,    RW, default = 360
//Bit 15: 0        reg_fd_mot2_wind12_x_2    // unsigned ,    RW, default = 180
#define FRC_FD_WIND_18                             0x0719
//Bit 31:16        reg_fd_mot2_wind12_x_5    // unsigned ,    RW, default = 540
//Bit 15: 0        reg_fd_mot2_wind12_x_4    // unsigned ,    RW, default = 360
#define FRC_FD_WIND_19                             0x071a
//Bit 31:16        reg_fd_mot2_wind12_x_7    // unsigned ,    RW, default = 720
//Bit 15: 0        reg_fd_mot2_wind12_x_6    // unsigned ,    RW, default = 540
#define FRC_FD_WIND_20                             0x071b
//Bit 31:16        reg_fd_mot2_wind12_y_1    // unsigned ,    RW, default = 180  12 window, vertical  begin and end
//Bit 15: 0        reg_fd_mot2_wind12_y_0    // unsigned ,    RW, default = 0
#define FRC_FD_WIND_21                             0x071c
//Bit 31:16        reg_fd_mot2_wind12_y_3    // unsigned ,    RW, default = 360
//Bit 15: 0        reg_fd_mot2_wind12_y_2    // unsigned ,    RW, default = 180
#define FRC_FD_WIND_22                             0x071d
//Bit 31:16        reg_fd_mot2_wind12_y_5    // unsigned ,    RW, default = 540
//Bit 15: 0        reg_fd_mot2_wind12_y_4    // unsigned ,    RW, default = 360
#define FRC_FD_DIF_GL                              0x071e
//Bit 31: 0        ro_fd_glb_mot_all         // unsigned ,    RO, default = 0  global ,difference of cur and pre
#define FRC_FD_DIF_COUNT_GL                        0x071f
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_all       // unsigned ,    RO, default = 0  global ,count of difference of cur and pre
#define FRC_FD_DIF_GL_FILM                         0x0720
//Bit 31: 0        ro_fd_glb_mot_all_film    // unsigned ,    RO, default = 0  global ,difference of cur and pre
#define FRC_FD_DIF_COUNT_GL_FILM                   0x0721
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_all_film  // unsigned ,    RO, default = 0  global ,count of difference of cur and pre
#define FRC_FD_DIF_6WIND_0                         0x0722
//Bit 31: 0        ro_fd_glb_mot_wind6_0     // unsigned ,    RO, default = 0  6 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_6WIND_0                   0x0723
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind6_0   // unsigned ,    RO, default = 0  6 window ,count of difference of cur and pre
#define FRC_FD_DIF_6WIND_1                         0x0724
//Bit 31: 0        ro_fd_glb_mot_wind6_1     // unsigned ,    RO, default = 0  6 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_6WIND_1                   0x0725
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind6_1   // unsigned ,    RO, default = 0  6 window ,count of difference of cur and pre
#define FRC_FD_DIF_6WIND_2                         0x0726
//Bit 31: 0        ro_fd_glb_mot_wind6_2     // unsigned ,    RO, default = 0  6 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_6WIND_2                   0x0727
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind6_2   // unsigned ,    RO, default = 0  6 window ,count of difference of cur and pre
#define FRC_FD_DIF_6WIND_3                         0x0728
//Bit 31: 0        ro_fd_glb_mot_wind6_3     // unsigned ,    RO, default = 0  6 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_6WIND_3                   0x0729
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind6_3   // unsigned ,    RO, default = 0  6 window ,count of difference of cur and pre
#define FRC_FD_DIF_6WIND_4                         0x072a
//Bit 31: 0        ro_fd_glb_mot_wind6_4     // unsigned ,    RO, default = 0  6 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_6WIND_4                   0x072b
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind6_4   // unsigned ,    RO, default = 0  6 window ,count of difference of cur and pre
#define FRC_FD_DIF_6WIND_5                         0x072c
//Bit 31: 0        ro_fd_glb_mot_wind6_5     // unsigned ,    RO, default = 0  6 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_6WIND_5                   0x072d
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind6_5   // unsigned ,    RO, default = 0  6 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND_0                        0x072e
//Bit 31: 0        ro_fd_glb_mot_wind12_0    // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND_0                  0x072f
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind12_0  // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND2_0                       0x0730
//Bit 31: 0        ro_fd_glb_mot2_wind12_0   // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND2_0                 0x0731
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot2_count_wind12_0 // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND_1                        0x0732
//Bit 31: 0        ro_fd_glb_mot_wind12_1    // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND_1                  0x0733
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind12_1  // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND2_1                       0x0734
//Bit 31: 0        ro_fd_glb_mot2_wind12_1   // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND2_1                 0x0735
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot2_count_wind12_1 // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND_2                        0x0736
//Bit 31: 0        ro_fd_glb_mot_wind12_2    // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND_2                  0x0737
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind12_2  // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND2_2                       0x0738
//Bit 31: 0        ro_fd_glb_mot2_wind12_2   // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND2_2                 0x0739
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot2_count_wind12_2 // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND_3                        0x073a
//Bit 31: 0        ro_fd_glb_mot_wind12_3    // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND_3                  0x073b
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind12_3  // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND2_3                       0x073c
//Bit 31: 0        ro_fd_glb_mot2_wind12_3   // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND2_3                 0x073d
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot2_count_wind12_3 // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND_4                        0x073e
//Bit 31: 0        ro_fd_glb_mot_wind12_4    // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND_4                  0x073f
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind12_4  // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND2_4                       0x0740
//Bit 31: 0        ro_fd_glb_mot2_wind12_4   // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND2_4                 0x0741
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot2_count_wind12_4 // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND_5                        0x0742
//Bit 31: 0        ro_fd_glb_mot_wind12_5    // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND_5                  0x0743
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind12_5  // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND2_5                       0x0744
//Bit 31: 0        ro_fd_glb_mot2_wind12_5   // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND2_5                 0x0745
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot2_count_wind12_5 // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND_6                        0x0746
//Bit 31: 0        ro_fd_glb_mot_wind12_6    // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND_6                  0x0747
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind12_6  // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND2_6                       0x0748
//Bit 31: 0        ro_fd_glb_mot2_wind12_6   // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND2_6                 0x0749
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot2_count_wind12_6 // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND_7                        0x074a
//Bit 31: 0        ro_fd_glb_mot_wind12_7    // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND_7                  0x074b
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind12_7  // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND2_7                       0x074c
//Bit 31: 0        ro_fd_glb_mot2_wind12_7   // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND2_7                 0x074d
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot2_count_wind12_7 // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND_8                        0x074e
//Bit 31: 0        ro_fd_glb_mot_wind12_8    // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND_8                  0x074f
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind12_8  // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND2_8                       0x0750
//Bit 31: 0        ro_fd_glb_mot2_wind12_8   // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND2_8                 0x0751
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot2_count_wind12_8 // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND_9                        0x0752
//Bit 31: 0        ro_fd_glb_mot_wind12_9    // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND_9                  0x0753
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind12_9  // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND2_9                       0x0754
//Bit 31: 0        ro_fd_glb_mot2_wind12_9   // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND2_9                 0x0755
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot2_count_wind12_9 // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND_10                       0x0756
//Bit 31: 0        ro_fd_glb_mot_wind12_10   // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND_10                 0x0757
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind12_10 // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND2_10                      0x0758
//Bit 31: 0        ro_fd_glb_mot2_wind12_10  // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND2_10                0x0759
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot2_count_wind12_10 // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND_11                       0x075a
//Bit 31: 0        ro_fd_glb_mot_wind12_11   // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND_11                 0x075b
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot_count_wind12_11 // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_12WIND2_11                      0x075c
//Bit 31: 0        ro_fd_glb_mot2_wind12_11  // unsigned ,    RO, default = 0  12 window ,difference of cur and pre
#define FRC_FD_DIF_COUNT_12WIND2_11                0x075d
//Bit 31:20        reserved
//Bit 19: 0        ro_fd_mot2_count_wind12_11 // unsigned ,    RO, default = 0  12 window ,count of difference of cur and pre
#define FRC_FD_DIF_GL_FILM_PRE                     0x075e
//Bit 31: 0        ro_fd_glb_mot_all_film_pre // unsigned ,    RO, default = 0  pre difference of cur and pre when AB change
#define FRC_FD_DIF_GL_AVG8                         0x075f
//Bit 31: 0        ro_fd_glb_mot_avg8        // unsigned ,    RO, default = 0  global, average 8 of difference of cur and pre
#define FRC_FD_PD_OUT                              0x0770
//Bit 31:13        reserved
//Bit 12: 8        ro_flmmod                  // unsigned ,    RO, default = 0
//Bit 7: 5         reserved
//Bit 4: 0         ro_phase                   // unsigned ,    RO, default = 0
#define FRC_PD_CTRL                                0x0771
//Bit 31: 9        reserved
//Bit 8            reg_pd_en         // unsigned ,    RW,    default = 1
//Bit 7: 6         reserved
//Bit 5: 0         reg_pd_gclk_ctrl  // unsigned ,    RW,    default = 0
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_pd_regs.h
//
// -----------------------------------------------
// REG_BASE:  FRC_INP_NR_APB_BASE = 0x08
// -----------------------------------------------
//
// Reading file:  ./frc_inc/frc_nr_reg.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_NR_MISC                                0x0800
//Bit 31: 0        reg_nr_misc               // unsigned ,    RW, default = 0  register
#define FRC_GCLK_CTRL                              0x0801
//Bit 31: 0        reg_gclk_ctrl             // unsigned ,    RW, default = 0  clock control
#define FRC_NR_SIZE                                0x0802
//Bit 31:16        reg_nr_vsize              // unsigned ,    RW, default = 0  size
//Bit 15: 0        reg_nr_hsize              // unsigned ,    RW, default = 0  size
#define FRC_NR_REG                                 0x0803
//Bit 31: 2        reserved
//Bit  1           reg_tnr_use_yc_maxalp     // unsigned ,    RW, default = 0
//Bit  0           reg_bld_use_yc_maxbeta    // unsigned ,    RW, default = 0  use maximum beta of  chroma and luma
#define FRC_NR_TNR_1_0                             0x0804
//Bit 31:29        reserved
//Bit 28           reg_tnr_en_0              // unsigned ,    RW, default = 1  enable of tnr
//Bit 27           reg_snr_en_0              // unsigned ,    RW, default = 1  enable of snr
//Bit 26           reg_tnr_mc_en_0           // unsigned ,    RW, default = 1  enable of simple mcnr
//Bit 25           reg_tnr_txt_mode_0        // unsigned ,    RW, default = 0  texture calculation mode:  0: min of HV texture; 1: average of HV texture
//Bit 24           reg_tnr_mot_window_size_0 // unsigned ,    RW, default = 0  window size for motion detection: 0: 5x1; 1: 7x1
//Bit 23:20        reg_tnr_mot_sad_margin_0  // unsigned ,    RW, default = 1  margin to bias towards middle
//Bit 19:16        reg_tnr_mot_cortxt_rate_0 // unsigned ,    RW, default = 4  coring rate to texture for motion of luma and chroma
//Bit 15: 8        reg_tnr_mot_distxt_ofst_0 // unsigned ,    RW, default = 5  disable motion offset to texture for luma and chroma
//Bit  7: 4        reg_tnr_mot_distxt_rate_0 // unsigned ,    RW, default = 4  disable motion rate to texture for luma and chroma
//Bit  3: 0        reg_tnr_mot_dismot_ofst_0 // unsigned ,    RW, default = 4  disable motion offset to motion luma and chroma to motion
#define FRC_NR_TNR_2_0                             0x0805
//Bit 31:24        reg_tnr_mot_frcsad_lock_0 // unsigned ,    RW, default = 8  force motion threshold for sad lock condition for luma and chroma
//Bit 23:16        reg_tnr_mot2alp_frc_gain_0 // unsigned ,    RW, default = 10  gain to motion to get alpha for frc motion, normalized to 32 as 1
//Bit 15: 8        reg_tnr_mot2alp_nrm_gain_0 // unsigned ,    RW, default = 20  gain to motion to get alpha for normal, normalized to 32 as 1
//Bit  7: 0        reg_tnr_mot2alp_dis_gain_0 // unsigned ,    RW, default = 32  gain to motion to get alpha for disable detected, normalized to 32 as 1
#define FRC_NR_TNR_3_0                             0x0806
//Bit 31:30        reserved
//Bit 29:24        reg_tnr_mot2alp_dis_ofst_0 // unsigned ,    RW, default = 32  ofst to motion to get alpha for disable detected, normalized to 32 as 1
//Bit 23:22        reserved
//Bit 21:16        reg_tnr_alpha_min_0       // unsigned ,    RW, default = 8  down limit to alpah of luma and chroma
//Bit 15:10        reg_tnr_alpha_max_0       // unsigned ,    RW, default = 63
//Bit  9: 8        reg_tnr_deghost_mode_0    // unsigned ,    RW, default = 1  window mode for deghost window: 0: 1x3; 1: 3x3; 2:5x5; 3: 7x7
//Bit  7: 0        reg_tnr_deghost_os_0      // unsigned ,    RW, default = 20  deghost overshoot margin
#define FRC_NR_SNR_1_0                             0x0807
//Bit 31:28        reg_snr_err_hgain_0       // unsigned ,    RW, default = 1  (1+x/8) to the ssim0
//Bit 27:24        reg_snr_err_vgain_0       // unsigned ,    RW, default = 1  (1+x/8) to the ssim2
//Bit 23            reserved
//Bit 22           reg_snr_err_norm_0        // unsigned ,    RW, default = 0  normalization to err: 0: 1x err; 1:2x err
//Bit 21:20        reg_snr_gau_mode_0        // unsigned ,    RW, default = 3  0: 1x5; 1:1x7; 2 3x3 filter; 3: 5x5 filter
//Bit 19:16        reg_snr_gau_bld_core_0    // unsigned ,    RW, default = 4  y= max(max_val- (min_val*x/8),0); y will be mapped to alp0
//Bit 15: 8        reg_snr_gau_bld_ofst_0    // signed ,    RW, default = -4  alp0 = (y+ofst)*rate/16;
//Bit  7: 6        reserved
//Bit  5: 0        reg_snr_gau_bld_rate_0    // unsigned ,    RW, default = 32  alp0 = (y+ofst)*rate/16;
#define FRC_NR_SNR_2_0                             0x0808
//Bit 31:30        reserved
//Bit 29:24        reg_snr_gau_alp0_min_0    // unsigned ,    RW, default = 0  low limit of the alph0
//Bit 23:22        reserved
//Bit 21:16        reg_snr_gau_alp0_max_0    // unsigned ,    RW, default = 63  high limit of the alph0, gauadp = (gau*(64-alp0) + org*alp0)/64
//Bit 15:12        reserved
//Bit 11: 8        reg_snr_dir_bld_core_0    // unsigned ,    RW, default = 10  y= max(max_val- (min_val*x/8),0); y will be mapped to alp1
//Bit  7: 0        reg_snr_dir_bld_ofst_0    // signed ,    RW, default = -4  alp1 = (y+ofst)*rate/16;
#define FRC_NR_SNR_3_0                             0x0809
//Bit 31:30        reserved
//Bit 29:24        reg_snr_dir_bld_rate_0    // unsigned ,    RW, default = 32  alp1 = (y+ofst)*rate/16;
//Bit 23:22        reserved
//Bit 21:16        reg_snr_dir_alp1_min_0    // unsigned ,    RW, default = 0  low limit of the alph1
//Bit 15:14        reserved
//Bit 13: 8        reg_snr_dir_alp1_max_0    // unsigned ,    RW, default = 63  high limit of the alph1, nrx = (gauadp*(64-alp1) + dir*alp1)/64
//Bit  7: 4        reg_snr_dir_min2_rat0_0   // unsigned ,    RW, default = 4  if min2_val smaller than (min_val*(1+x/8)), dir = (filt[min_idx] + filt[min2_idx])/2
//Bit  3: 0        reg_snr_dir_min2_rat1_0   // unsigned ,    RW, default = 7  if min2_val smaller than (min_val*(1+x/8)), dir = (filt[min_idx] + filt[min2_idx])/2
#define FRC_NR_SNR_4_0                             0x080a
//Bit 31:24        reg_snr_dir_adptap_thrd_0_0 // unsigned ,    RW, default = 20  min_err smaller than threshold to get 5 region for 5tap (3tap+5tap)/2, 3tap, (3tap+org)/2, org filter for dir, default [30 40 75 85]
//Bit 23:16        reg_snr_dir_adptap_thrd_0_1 // unsigned ,    RW, default = 25
//Bit 15: 8        reg_snr_dir_adptap_thrd_0_2 // unsigned ,    RW, default = 240
//Bit  7: 0        reg_snr_dir_adptap_thrd_0_3 // unsigned ,    RW, default = 255
#define FRC_NR_BLEND_0                             0x080b
//Bit 31:24        reg_bld_beta2alp_rate_0   // unsigned ,    RW, default = 24  rate to tnr alpa to get the beta for blending, alpa is before clipping, 32 as normalized 1
//Bit 23:22        reserved
//Bit 21:16        reg_bld_beta_min_0        // unsigned ,    RW, default = 0  min limit for the beta
//Bit 15:14        reserved
//Bit 13: 8        reg_bld_beta_max_0        // unsigned ,    RW, default = 63  max limit for the beta, beta==0 all tnr, beta=63 all snr
//Bit  7: 0        reserved
#define FRC_NR_TNR_1_1                             0x080c
//Bit 31:29        reserved
//Bit 28           reg_tnr_en_1              // unsigned ,    RW, default = 1  enable of tnr
//Bit 27           reg_snr_en_1              // unsigned ,    RW, default = 1  enable of snr
//Bit 26           reg_tnr_mc_en_1           // unsigned ,    RW, default = 1  enable of simple mcnr
//Bit 25           reg_tnr_txt_mode_1        // unsigned ,    RW, default = 0  texture calculation mode:  0: min of HV texture; 1: average of HV texture
//Bit 24           reg_tnr_mot_window_size_1 // unsigned ,    RW, default = 0  window size for motion detection: 0: 5x1; 1: 7x1
//Bit 23:20        reg_tnr_mot_sad_margin_1  // unsigned ,    RW, default = 1  margin to bias towards middle
//Bit 19:16        reg_tnr_mot_cortxt_rate_1 // unsigned ,    RW, default = 4  coring rate to texture for motion of luma and chroma
//Bit 15: 8        reg_tnr_mot_distxt_ofst_1 // unsigned ,    RW, default = 5  disable motion offset to texture for luma and chroma
//Bit  7: 4        reg_tnr_mot_distxt_rate_1 // unsigned ,    RW, default = 4  disable motion rate to texture for luma and chroma
//Bit  3: 0        reg_tnr_mot_dismot_ofst_1 // unsigned ,    RW, default = 4  disable motion offset to motion luma and chroma to motion
#define FRC_NR_TNR_2_1                             0x080d
//Bit 31:24        reg_tnr_mot_frcsad_lock_1 // unsigned ,    RW, default = 8  force motion threshold for sad lock condition for luma and chroma
//Bit 23:16        reg_tnr_mot2alp_frc_gain_1 // unsigned ,    RW, default = 10  gain to motion to get alpha for frc motion, normalized to 32 as 1
//Bit 15: 8        reg_tnr_mot2alp_nrm_gain_1 // unsigned ,    RW, default = 20  gain to motion to get alpha for normal, normalized to 32 as 1
//Bit  7: 0        reg_tnr_mot2alp_dis_gain_1 // unsigned ,    RW, default = 32  gain to motion to get alpha for disable detected, normalized to 32 as 1
#define FRC_NR_TNR_3_1                             0x080e
//Bit 31:30        reserved
//Bit 29:24        reg_tnr_mot2alp_dis_ofst_1 // unsigned ,    RW, default = 32  ofst to motion to get alpha for disable detected, normalized to 32 as 1
//Bit 23:22        reserved
//Bit 21:16        reg_tnr_alpha_min_1       // unsigned ,    RW, default = 8  down limit to alpah of luma and chroma
//Bit 15:10        reg_tnr_alpha_max_1       // unsigned ,    RW, default = 63
//Bit  9: 8        reg_tnr_deghost_mode_1    // unsigned ,    RW, default = 1  window mode for deghost window: 0: 1x3; 1: 3x3; 2:5x5; 3: 7x7
//Bit  7: 0        reg_tnr_deghost_os_1      // unsigned ,    RW, default = 20  deghost overshoot margin
#define FRC_NR_SNR_1_1                             0x080f
//Bit 31:28        reg_snr_err_hgain_1       // unsigned ,    RW, default = 1  (1+x/8) to the ssim0
//Bit 27:24        reg_snr_err_vgain_1       // unsigned ,    RW, default = 1  (1+x/8) to the ssim2
//Bit 23            reserved
//Bit 22           reg_snr_err_norm_1        // unsigned ,    RW, default = 1  normalization to err: 0: 1x err; 1:2x err
//Bit 21:20        reg_snr_gau_mode_1        // unsigned ,    RW, default = 3  0: 1x5; 1:1x7; 2 3x3 filter; 3: 5x5 filter
//Bit 19:16        reg_snr_gau_bld_core_1    // unsigned ,    RW, default = 4  y= max(max_val- (min_val*x/8),0); y will be mapped to alp0
//Bit 15: 8        reg_snr_gau_bld_ofst_1    // signed ,    RW, default = -4  alp0 = (y+ofst)*rate/16;
//Bit  7: 6        reserved
//Bit  5: 0        reg_snr_gau_bld_rate_1    // unsigned ,    RW, default = 32  alp0 = (y+ofst)*rate/16;
#define FRC_NR_SNR_2_1                             0x0810
//Bit 31:30        reserved
//Bit 29:24        reg_snr_gau_alp0_min_1    // unsigned ,    RW, default = 0  low limit of the alph0
//Bit 23:22        reserved
//Bit 21:16        reg_snr_gau_alp0_max_1    // unsigned ,    RW, default = 63  high limit of the alph0, gauadp = (gau*(64-alp0) + org*alp0)/64
//Bit 15:12        reserved
//Bit 11: 8        reg_snr_dir_bld_core_1    // unsigned ,    RW, default = 10  y= max(max_val- (min_val*x/8),0); y will be mapped to alp1
//Bit  7: 0        reg_snr_dir_bld_ofst_1    // signed ,    RW, default = -4  alp1 = (y+ofst)*rate/16;
#define FRC_NR_SNR_3_1                             0x0811
//Bit 31:30        reserved
//Bit 29:24        reg_snr_dir_bld_rate_1    // unsigned ,    RW, default = 32  alp1 = (y+ofst)*rate/16;
//Bit 23:22        reserved
//Bit 21:16        reg_snr_dir_alp1_min_1    // unsigned ,    RW, default = 0  low limit of the alph1
//Bit 15:14        reserved
//Bit 13: 8        reg_snr_dir_alp1_max_1    // unsigned ,    RW, default = 63  high limit of the alph1, nrx = (gauadp*(64-alp1) + dir*alp1)/64
//Bit  7: 4        reg_snr_dir_min2_rat0_1   // unsigned ,    RW, default = 4  if min2_val smaller than (min_val*(1+x/8)), dir = (filt[min_idx] + filt[min2_idx])/2
//Bit  3: 0        reg_snr_dir_min2_rat1_1   // unsigned ,    RW, default = 7  if min2_val smaller than (min_val*(1+x/8)), dir = (filt[min_idx] + filt[min2_idx])/2
#define FRC_NR_SNR_4_1                             0x0812
//Bit 31:24        reg_snr_dir_adptap_thrd_1_0 // unsigned ,    RW, default = 20  min_err smaller than threshold to get 5 region for 5tap (3tap+5tap)/2, 3tap, (3tap+org)/2, org filter for dir, default [30 40 75 85]
//Bit 23:16        reg_snr_dir_adptap_thrd_1_1 // unsigned ,    RW, default = 25
//Bit 15: 8        reg_snr_dir_adptap_thrd_1_2 // unsigned ,    RW, default = 240
//Bit  7: 0        reg_snr_dir_adptap_thrd_1_3 // unsigned ,    RW, default = 255
#define FRC_NR_BLEND_1                             0x0813
//Bit 31:24        reg_bld_beta2alp_rate_1   // unsigned ,    RW, default = 24  rate to tnr alpa to get the beta for blending, alpa is before clipping, 32 as normalized 1
//Bit 23:22        reserved
//Bit 21:16        reg_bld_beta_min_1        // unsigned ,    RW, default = 0  min limit for the beta
//Bit 15:14        reserved
//Bit 13: 8        reg_bld_beta_max_1        // unsigned ,    RW, default = 63  max limit for the beta, beta==0 all tnr, beta=63 all snr
//Bit  7: 0        reserved
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_nr_reg.h
//
// -----------------------------------------------
// REG_BASE:  FRC_INP_MIF0_APB_BASE = 0x09
// -----------------------------------------------
//
// Reading file:  ./frc_inc/frc_inp_mif.h
//
// synopsys translate_off
// synopsys translate_on
#define INP_ME_WMIF_BADDR                          0x0900
#define INP_ME_RMIF_BADDR                          0x0910
#define INP_MC_WMIF_BADDR                          0x0920
#define INP_HME_WMIF_CTRL0                         0x0950
#define INP_HME_WMIF_CTRL1                         0x0951
#define INP_HME_WMIF_STAT                          0x0952
#define INP_LOGO_RMIF0_CTRL0                       0x0954
#define INP_LOGO_RMIF0_CTRL1                       0x0955
#define INP_LOGO_RMIF0_STAT                        0x0956
#define INP_LOGO_RMIF1_CTRL0                       0x0958
#define INP_LOGO_RMIF1_CTRL1                       0x0959
#define INP_LOGO_RMIF1_STAT                        0x095a
#define INP_LOGO_WMIF0_CTRL0                       0x095c
#define INP_LOGO_WMIF0_CTRL1                       0x095d
#define INP_LOGO_WMIF0_STAT                        0x095e
#define INP_LOGO_WMIF1_CTRL0                       0x0960
#define INP_LOGO_WMIF1_CTRL1                       0x0961
#define INP_LOGO_WMIF1_STAT                        0x0962
#define INP_MELOGO_WMIF_CTRL0                      0x0964
#define INP_MELOGO_WMIF_CTRL1                      0x0965
#define INP_MELOGO_WMIF_STAT                       0x0966
#define INP_IPLOGO_WMIF_CTRL0                      0x0968
#define INP_IPLOGO_WMIF_CTRL1                      0x0969
#define INP_IPLOGO_WMIF_STAT                       0x096a
#define INP_AXIRD_ARBX8_BADDR                      0x0970
#define INP_AXIWR_ARBX4_BADDR                      0x0980
#define INP_AXIWR_ARBX8_BADDR                      0x0990
#define INP_AXIRD_ARBX4_BADDR                      0x09a0
#define INP_MCY_RMIF_BADDR                         0x09b0
#define INP_MCC_RMIF_BADDR                         0x09c0
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_inp_mif.h
//
// -----------------------------------------------
// REG_BASE:  FRC_INP_MIF1_APB_BASE = 0x0a
// -----------------------------------------------
//`include  "loss_enc_me_reg.h"
// -----------------------------------------------
// REG_BASE:  FRC_INP_MIF2_APB_BASE = 0x0b
// -----------------------------------------------
//`include  "loss_dec_me_reg.h"
// -----------------------------------------------
// REG_BASE:  FRC_INP_MIF3_APB_BASE = 0x0c
// -----------------------------------------------
//
// Reading file:  ./frc_inc/loss_main_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define CLOSS_MISC                                 0x0c00
//Bit 31:12        reg_misc                  // unsigned ,    RW, default = 0  reversed for global control
//Bit 11: 4        reg_sync_ctrl             // unsigned ,    RW, default = 0
//Bit  3           reg_use_sw_preslc_fifolevel // unsigned ,    RW, default = 0
//Bit  2           reg_use_sw_preslc_bitaccum // unsigned ,    RW, default = 0
//Bit  1           reg_inp_422               // unsigned ,    RW, default = 1  input is with yuv422 instead of 444. 0: yuv444; 1:yuv422
//Bit  0           reg_enable                // unsigned ,    RW, default = 0  1: to enable this unit
#define CLOSS_FRAME_HOLD_NUMS                      0x0c01
//Bit 31: 0        reg_frame_hold_nums       // unsigned ,    RW, default = 0  frame_hold_nums
#define CLOSS_GCLK_CTRL0                           0x0c02
//Bit 31: 0        reg_gclk_ctrl_0           // unsigned ,    RW, default = 0  reserved for gated-clock control0
#define CLOSS_GCLK_CTRL1                           0x0c03
//Bit 31: 0        reg_gclk_ctrl_1           // unsigned ,    RW, default = 0  reserved for gated-clock control1
#define CLOSS_PIC_SIZE                             0x0c04
//Bit 31:16        reg_pic_ysize             // unsigned ,    RW, default = 512  picture vertical size
//Bit 15: 0        reg_pic_xsize             // unsigned ,    RW, default = 1024  picture horizontal size
#define CLOSS_SLICE_XSIZE                          0x0c05
//Bit 31:16        reserved
//Bit 15: 0        reg_slice_x               // unsigned ,    RW, default = 1024  horizontal size (in pixel col) of the slice, each slice is independant encoded, decoded and rate controlled;: [0:2] for different components
#define CLOSS_SLICE_Y_0                            0x0c06
//Bit 31:16        reg_slice_y_1             // unsigned ,    RW, default = 0  vertical size (in pixel line)of the slice, each slice is independant encoded, decoded and rate controlled;: [0:2] for different components
//Bit 15: 0        reg_slice_y_0             // unsigned ,    RW, default = 512  vertical size (in pixel line)of the slice, each slice is independant encoded, decoded and rate controlled;: [0:2] for different components
#define CLOSS_SLICE_Y_1                            0x0c07
//Bit 31:16        reg_slice_y_3             // unsigned ,    RW, default = 0  vertical size (in pixel line)of the slice, each slice is independant encoded, decoded and rate controlled;: [0:2] for different components
//Bit 15: 0        reg_slice_y_2             // unsigned ,    RW, default = 0  vertical size (in pixel line)of the slice, each slice is independant encoded, decoded and rate controlled;: [0:2] for different components
#define CLOSS_PREFILT_0                            0x0c08
//Bit 31:28        reg_prefilt_alut_7        // unsigned ,    RW, default = 14  alpha on qlevel,  default= [0, 2, 4, 6, 8, 10,12...]
//Bit 27:24        reg_prefilt_alut_6        // unsigned ,    RW, default = 12  alpha on qlevel,  default= [0, 2, 4, 6, 8, 10,12...]
//Bit 23:20        reg_prefilt_alut_5        // unsigned ,    RW, default = 10  alpha on qlevel,  default= [0, 2, 4, 6, 8, 10,12...]
//Bit 19:16        reg_prefilt_alut_4        // unsigned ,    RW, default = 8  alpha on qlevel,  default= [0, 2, 4, 6, 8, 10,12...]
//Bit 15:12        reg_prefilt_alut_3        // unsigned ,    RW, default = 6  alpha on qlevel,  default= [0, 2, 4, 6, 8, 10,12...]
//Bit 11: 8        reg_prefilt_alut_2        // unsigned ,    RW, default = 4  alpha on qlevel,  default= [0, 2, 4, 6, 8, 10,12...]
//Bit  7: 4        reg_prefilt_alut_1        // unsigned ,    RW, default = 2  alpha on qlevel,  default= [0, 2, 4, 6, 8, 10,12...]
//Bit  3: 0        reg_prefilt_alut_0        // unsigned ,    RW, default = 0  alpha on qlevel,  default= [0, 2, 4, 6, 8, 10,12...]
#define CLOSS_PREFILT_1                            0x0c09
//Bit 31:16        reserved
//Bit 15:12        reg_prefilt_alut_11       // unsigned ,    RW, default = 15  alpha on qlevel,  default= [0, 2, 4, 6, 8, 10,12...]
//Bit 11: 8        reg_prefilt_alut_10       // unsigned ,    RW, default = 14  alpha on qlevel,  default= [0, 2, 4, 6, 8, 10,12...]
//Bit  7: 4        reg_prefilt_alut_9        // unsigned ,    RW, default = 14  alpha on qlevel,  default= [0, 2, 4, 6, 8, 10,12...]
//Bit  3: 0        reg_prefilt_alut_8        // unsigned ,    RW, default = 14  alpha on qlevel,  default= [0, 2, 4, 6, 8, 10,12...]
#define CLOSS_ERROR_THRD                           0x0c0a
//Bit 31:16        reserved
//Bit 15: 4        reg_error_count_thd       // unsigned ,    RW, default = 100  threshold to count number of error>thd
//Bit  3: 1        reserved
//Bit  0           reg_error_count_region_half_en // unsigned ,    RW, default = 0
#define CLOSS_DEBUG_MODE                           0x0c0b
//Bit 31:26        reserved
//Bit 25:24        reg_debug_mode            // unsigned ,    RW, default = 0
//Bit 23:16        reg_force_qp_2            // unsigned ,    RW, default = 0  force qp value for cpnt2
//Bit 15: 8        reg_force_qp_1            // unsigned ,    RW, default = 0  force qp value for cpnt1
//Bit  7: 0        reg_force_qp_0            // unsigned ,    RW, default = 0  force qp value for cpnt0
#define CLOSS_ACCUM_OFSET_0                        0x0c0c
//Bit 31:24        reg_accum_add_ofset_2     // unsigned ,    RW, default = 45
//Bit 23:16        reg_accum_add_ofset_1     // unsigned ,    RW, default = 20
//Bit 15: 8        reg_accum_add_ofset_0     // unsigned ,    RW, default = 0
//Bit  7: 4        reserved
//Bit  3: 1        reg_accum_ofset_shift     // unsigned ,    RW, default = 2
//Bit  0           reg_accum_ofset_en        // unsigned ,    RW, default = 0
#define CLOSS_ACCUM_OFSET_1                        0x0c0d
//Bit 31:24        reg_accum_add_ofset_6     // unsigned ,    RW, default = 180
//Bit 23:16        reg_accum_add_ofset_5     // unsigned ,    RW, default = 140
//Bit 15: 8        reg_accum_add_ofset_4     // unsigned ,    RW, default = 100
//Bit  7: 0        reg_accum_add_ofset_3     // unsigned ,    RW, default = 70
#define CLOSS_ACCUM_OFSET_2                        0x0c0e
//Bit 31:16        reserved
//Bit 15: 8        reg_accum_add_ofset_8     // unsigned ,    RW, default = 255
//Bit  7: 0        reg_accum_add_ofset_7     // unsigned ,    RW, default = 215
#define CLOSS_NORMAL_RATIO_O                       0x0c0f
//Bit 31:28        reserved
//Bit 27:16        reg_normalize_idx_ratio_1 // unsigned ,    RW, default = 0
//Bit 15:12        reserved
//Bit 11: 0        reg_normalize_idx_ratio_0 // unsigned ,    RW, default = 60
#define CLOSS_NORMAL_RATIO_1                       0x0c10
//Bit 31:28        reserved
//Bit 27:16        reg_normalize_idx_ratio_3 // unsigned ,    RW, default = 0
//Bit 15:12        reserved
//Bit 11: 0        reg_normalize_idx_ratio_2 // unsigned ,    RW, default = 0
#define CLOSS_LUMA_ADJ                             0x0c11
//Bit 31           reg_pixel_luma_adj_en     // unsigned ,    RW, default = 0
//Bit 30            reserved
//Bit 29:20        reg_pixel_luma_adj_th_1   // unsigned ,    RW, default = 128
//Bit 19:18        reserved
//Bit 17: 8        reg_pixel_luma_adj_th_0   // unsigned ,    RW, default = 64
//Bit  7: 4        reg_pixel_luma_adj_dlt_1  // unsigned ,    RW, default = 2
//Bit  3: 0        reg_pixel_luma_adj_dlt_0  // unsigned ,    RW, default = 1
#define CLOSS_DERIVA_ADJ                           0x0c12
//Bit 31            reserved
//Bit 30:28        reg_derivative_lut_0_9    // signed ,    RW, default = 3
//Bit 27            reserved
//Bit 26:24        reg_derivative_lut_0_8    // signed ,    RW, default = 2
//Bit 23            reserved
//Bit 22:20        reg_derivative_lut_0_7    // signed ,    RW, default = 2
//Bit 19            reserved
//Bit 18:16        reg_derivative_lut_0_6    // signed ,    RW, default = 1
//Bit 15            reserved
//Bit 14:12        reg_derivative_lut_0_5    // signed ,    RW, default = 1
//Bit 11            reserved
//Bit 10: 8        reg_derivative_lut_0_4    // signed ,    RW, default = 0
//Bit  7            reserved
//Bit  6: 4        reg_derivative_lut_1_9    // signed ,    RW, default = 2
//Bit  3: 1        reserved
//Bit  0           reg_derivative_en         // unsigned ,    RW, default = 0
#define CLOSS_DERIVA_ADJ_1                         0x0c13
//Bit 31            reserved
//Bit 30:28        reg_derivative_lut_1_8    // signed ,    RW, default = 2
//Bit 27            reserved
//Bit 26:24        reg_derivative_lut_1_7    // signed ,    RW, default = 1
//Bit 23            reserved
//Bit 22:20        reg_derivative_lut_1_6    // signed ,    RW, default = 1
//Bit 19            reserved
//Bit 18:16        reg_derivative_lut_1_5    // signed ,    RW, default = 0
//Bit 15            reserved
//Bit 14:12        reg_derivative_lut_2_9    // signed ,    RW, default = 0
//Bit 11            reserved
//Bit 10: 8        reg_derivative_lut_2_8    // signed ,    RW, default = 0
//Bit  7            reserved
//Bit  6: 4        reg_derivative_lut_2_7    // signed ,    RW, default = 0
//Bit  3            reserved
//Bit  2: 0        reg_derivative_lut_2_6    // signed ,    RW, default = 0
#define CLOSS_DERIVA_ADJ_2                         0x0c14
//Bit 31            reserved
//Bit 30:28        reg_derivative_lut_9_5    // signed ,    RW, default = 0
//Bit 27            reserved
//Bit 26:24        reg_derivative_lut_9_4    // signed ,    RW, default = 0
//Bit 23            reserved
//Bit 22:20        reg_derivative_lut_9_3    // signed ,    RW, default = -1
//Bit 19            reserved
//Bit 18:16        reg_derivative_lut_9_2    // signed ,    RW, default = -1
//Bit 15            reserved
//Bit 14:12        reg_derivative_lut_9_1    // signed ,    RW, default = -2
//Bit 11            reserved
//Bit 10: 8        reg_derivative_lut_9_0    // signed ,    RW, default = -2
//Bit  7            reserved
//Bit  6: 4        reg_derivative_lut_8_4    // signed ,    RW, default = 0
//Bit  3            reserved
//Bit  2: 0        reg_derivative_lut_8_3    // signed ,    RW, default = 0
#define CLOSS_DERIVA_ADJ_3                         0x0c15
//Bit 31            reserved
//Bit 30:28        reg_derivative_lut_8_2    // signed ,    RW, default = 0
//Bit 27            reserved
//Bit 26:24        reg_derivative_lut_8_1    // signed ,    RW, default = 0
//Bit 23            reserved
//Bit 22:20        reg_derivative_lut_8_0    // signed ,    RW, default = 0
//Bit 19            reserved
//Bit 18:16        reg_derivative_lut_7_4    // signed ,    RW, default = 0
//Bit 15            reserved
//Bit 14:12        reg_derivative_lut_7_3    // signed ,    RW, default = 0
//Bit 11            reserved
//Bit 10: 8        reg_derivative_lut_7_2    // signed ,    RW, default = 0
//Bit  7            reserved
//Bit  6: 4        reg_derivative_lut_7_1    // signed ,    RW, default = 0
//Bit  3            reserved
//Bit  2: 0        reg_derivative_lut_7_0    // signed ,    RW, default = 0
#define CLOSS_CODEC_STATUS_OP                      0x0c16
//Bit 31:30        reg_codec_status_rid      // unsigned ,    RW, default = 0
//Bit 29: 0        reg_codec_status_op       // unsigned ,    RW, default = 0
#define CLOSS_RO_CODEC_STATUS_0                    0x0c17
//Bit 31: 0        ro_codec_status_0         // unsigned ,    RO, default = 0
#define CLOSS_RO_CODEC_STATUS_1                    0x0c18
//Bit 31: 0        ro_codec_status_1         // unsigned ,    RO, default = 0
#define CLOSS_RO_PRESL_LAST_BITS_0                 0x0c19
//Bit 31: 0        ro_st_pre_slc_bitaccum_0  // unsigned ,    RO, default = 0  previous slice bits accum
#define CLOSS_RO_BITS_LENGTH_0                     0x0c1a
//Bit 31: 0        ro_st_cur_slc_bitslen_0   // unsigned ,    RO, default = 0  current slice bitstream length in 16bytes
#define CLOSS_RO_PRESL_LAST_BITS_1                 0x0c1b
//Bit 31: 0        ro_st_pre_slc_bitaccum_1  // unsigned ,    RO, default = 0  reg_presl_last_bits
#define CLOSS_RO_BITS_LENGTH_1                     0x0c1c
//Bit 31: 0        ro_st_cur_slc_bitslen_1   // unsigned ,    RO, default = 0  current slice bitstream length in 16bytes
#define CLOSS_RO_PRESL_LAST_BITS_2                 0x0c1d
//Bit 31: 0        ro_st_pre_slc_bitaccum_2  // unsigned ,    RO, default = 0  reg_presl_last_bits
#define CLOSS_RO_BITS_LENGTH_2                     0x0c1e
//Bit 31: 0        ro_st_cur_slc_bitslen_2   // unsigned ,    RO, default = 0  current slice bitstream length in 16bytes
#define CLOSS_RO_PRESL_LAST_BITS_3                 0x0c1f
//Bit 31: 0        ro_st_pre_slc_bitaccum_3  // unsigned ,    RO, default = 0  reg_presl_last_bits
#define CLOSS_RO_BITS_LENGTH_3                     0x0c20
//Bit 31: 0        ro_st_cur_slc_bitslen_3   // unsigned ,    RO, default = 0  current slice bitstream length in 16bytes
#define CLOSS_RO_FIFO_LEVEL_01                     0x0c21
//Bit 31:16        ro_st_pre_slc_fifolevel_1 // unsigned ,    RO, default = 0  previous slice fifo_level
//Bit 15: 0        ro_st_pre_slc_fifolevel_0 // unsigned ,    RO, default = 0  previous slice fifo_level
#define CLOSS_RO_FIFO_LEVEL_23                     0x0c22
//Bit 31:16        ro_st_pre_slc_fifolevel_3 // unsigned ,    RO, default = 0  previous slice fifo_level
//Bit 15: 0        ro_st_pre_slc_fifolevel_2 // unsigned ,    RO, default = 0  previous slice fifo_level
#define CLOSS_RO_DIR0_NUM                          0x0c23
//Bit 31:26        reserved
//Bit 25: 0        ro_st_direction_num_0     // unsigned ,    RO, default = 0  number of dir0 in prediction
#define CLOSS_RO_DIR1_NUM                          0x0c24
//Bit 31:26        reserved
//Bit 25: 0        ro_st_direction_num_1     // unsigned ,    RO, default = 0  number of dir1 in prediction
#define CLOSS_RO_DIR2_NUM                          0x0c25
//Bit 31:26        reserved
//Bit 25: 0        ro_st_direction_num_2     // unsigned ,    RO, default = 0  number of dir2 in prediction
#define CLOSS_RO_DIR3_NUM                          0x0c26
//Bit 31:26        reserved
//Bit 25: 0        ro_st_direction_num_3     // unsigned ,    RO, default = 0  number of dir3 in prediction
#define CLOSS_RO_MAX_ERROR                         0x0c27
//Bit 31:12        reserved
//Bit 11: 0        ro_st_max_error           // unsigned ,    RO, default = 0  channel max pixel diff
#define CLOSS_RO_ERROR_ACC_0                       0x0c28
//Bit 31: 0        ro_st_error_acc_l         // unsigned ,    RO, default = 0  channel square err sum
#define CLOSS_RO_ERROR_ACC_1                       0x0c29
//Bit 31: 4        reserved
//Bit  3: 0        ro_st_error_acc_h         // unsigned ,    RO, default = 0  channel square err sum
#define CLOSS_RO_ERROR_COUNT_0                     0x0c2a
//Bit 31: 0        ro_st_error_count2_0      // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
#define CLOSS_RO_ERROR_COUNT_1                     0x0c2b
//Bit 31: 0        ro_st_error_count2_1      // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
#define CLOSS_RO_ERROR_COUNT_2                     0x0c2c
//Bit 31: 0        ro_st_error_count2_2      // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
#define CLOSS_RO_ERROR_COUNT_3                     0x0c2d
//Bit 31: 0        ro_st_error_count2_3      // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
#define CLOSS_RO_ERROR_COUNT_4                     0x0c2e
//Bit 31: 0        ro_st_error_count2_4      // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
#define CLOSS_RO_ERROR_COUNT_5                     0x0c2f
//Bit 31: 0        ro_st_error_count2_5      // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
#define CLOSS_RO_ERROR_COUNT_6                     0x0c30
//Bit 31: 0        ro_st_error_count2_6      // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
#define CLOSS_RO_ERROR_COUNT_7                     0x0c31
//Bit 31: 0        ro_st_error_count2_7      // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
#define CLOSS_RO_ERROR_COUNT_8                     0x0c32
//Bit 31: 0        ro_st_error_count2_8      // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
#define CLOSS_RO_ERROR_COUNT_9                     0x0c33
//Bit 31: 0        ro_st_error_count2_9      // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
#define CLOSS_RO_ERROR_COUNT_10                    0x0c34
//Bit 31: 0        ro_st_error_count2_10     // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
#define CLOSS_RO_ERROR_COUNT_11                    0x0c35
//Bit 31: 0        ro_st_error_count2_11     // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
#define CLOSS_RO_ERROR_COUNT_12                    0x0c36
//Bit 31: 0        ro_st_error_count2_12     // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
#define CLOSS_RO_ERROR_COUNT_13                    0x0c37
//Bit 31: 0        ro_st_error_count2_13     // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
#define CLOSS_RO_ERROR_COUNT_14                    0x0c38
//Bit 31: 0        ro_st_error_count2_14     // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
#define CLOSS_RO_ERROR_COUNT_15                    0x0c39
//Bit 31: 0        ro_st_error_count2_15     // unsigned ,    RO, default = 0  num of error>reg_error_count_thd in region
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/loss_main_regs.h
//
//
// Reading file:  ./frc_inc/loss_cpnt_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define CLOSS1_OFFSET             (0x40 << 2)
//for RTL
//Bit 31:20        reserved
//Bit 19:16        reg_prefilt_alpha_0       // unsigned ,    RW, default = 0  prefilter lpf alpha on val2enc data, especially useful for high compression ratio,   0: no lpf; 8:lpf strong on: default= depends on compression ratio, higher ratio, stronger one
//Bit 15:11        reserved
//Bit 10: 0        reg_slcln_ratio_0         // unsigned ,    RW, default = 8  dynamic ratio to idx of extra bit budget for the cells within the line
//Bit 31:28        reg_pred_drt5_rate_0      // unsigned ,    RW, default = 0  dynamic ratio to max_err of coring for no valid edge det base on min_err, norm to 32 as 1,    default= 4
//Bit 27:16        reg_pred_drt5flat_thd_0   // unsigned ,    RW, default = 400  dynamic ratio to min_err  for no valid edge det base on err_flat
//Bit 15: 8        reg_pred_drt5_thrd_0      // unsigned ,    RW, default = 8  static threshold to detect no valid edge base on min_err,    default= 20
//Bit  7           reg_pred_errlp_0          // unsigned ,    RW, default = 1  enable of lpf on error,   0: no lpf; 1:lpf on: default= 1
//Bit  6           reg_pred_dir5flat_en_0    // unsigned ,    RW, default = 1  enable of flatness direction  0: 4 directions[0,45,90,135]  1:5 directions[0,45,90,135,no valid direction(flatness)]
//Bit  5           reg_adjsize_flatness_flag_0 // unsigned ,    RW, default = 1  enable signal for the flatness mode,adj_predicted_size should be small in flatness
//Bit  4           reg_adjsize_complex_flag_0 // unsigned ,    RW, default = 1  enable signal for the complex mode,adj_predicted_size should be large in complex
//Bit  3            reserved
//Bit  2           reg_pred_dirconf_valid_0_2 // unsigned ,    RW, default = 0
//Bit  1           reg_pred_dirconf_valid_0_1 // unsigned ,    RW, default = 1
//Bit  0           reg_pred_dirconf_valid_0_0 // unsigned ,    RW, default = 1  valid for adaptive dir_conf,   default= [1 1 1]
//Bit 31:24        reserved
//Bit 23:20        reg_pred_hgain_0          // unsigned ,    RW, default = 8  gain to herr normalized to 4 as 1,    default= 8
//Bit 19            reserved
//Bit 18:16        reg_pred_dirconf_thrd_0   // unsigned ,    RW, default = 1  threshold to max_err for adaptive dir_conf,  thrd= x*thred; default= 4
//Bit 15: 4        reg_pred_err0_0           // unsigned ,    RW, default = 200  y_b = 0 horizontal err
//Bit  3: 2        reserved
//Bit  1: 0        reg_pred_filter_mode_0    // unsigned ,    RW, default = 3  mode to do filter to get side value for the pred_value, sid= 0: ref; 1: side0, 2:(sid1+sid2)/2; 3: (2sid0+sid1 +sid2)    default= 3
//Bit 31:24        reserved
//Bit 23:20        reg_adjsize_flatness_sizedlt_0 // unsigned ,    RW, default = 4  delta size margin to adj_predicted_size when adj_predicted_size lower than  reg_adjsize_flatness_sizedlt, default=[1, 2]
//Bit 19:16        reg_adjsize_flatness_reduce_0 // unsigned ,    RW, default = 2  the cell is flatness and adj_predicted_size > thd,adj_predicted_size = adj_predicted_size- reg_adjsize_flatness_reduce
//Bit 15:12        reserved
//Bit 11: 0        reg_adjsize_flatness_pixthd_0 // unsigned ,    RW, default = 50  area if(MAX-MIN)<pixthd
//Bit 31:24        reserved
//Bit 23:20        reg_adjsize_complex_sizedlt_0 // unsigned ,    RW, default = 4  delta size margin to adj_predicted_size when adj_predicted_size bigger than  reg_adjsize_complex_sizedlt
//Bit 19:16        reg_adjsize_complex_increase_0 // unsigned ,    RW, default = 2  if the cell is complex and adj_predicted_size < thd,adj_predicted_size = adj_predicted_size + reg_adjsize_complex_increase
//Bit 15:12        reserved
//Bit 11: 0        reg_adjsize_complex_pixthd_0 // unsigned ,    RW, default = 512  complex area if(MAX-MIN) bigger than pixthd
//Bit 31:28        reg_lut_budget2qp_0_7     // unsigned ,    RW, default = 6  from budget2x to master_qp mapping
//Bit 27:24        reg_lut_budget2qp_0_6     // unsigned ,    RW, default = 6  from budget2x to master_qp mapping
//Bit 23:20        reg_lut_budget2qp_0_5     // unsigned ,    RW, default = 7  from budget2x to master_qp mapping
//Bit 19:16        reg_lut_budget2qp_0_4     // unsigned ,    RW, default = 7  from budget2x to master_qp mapping
//Bit 15:12        reg_lut_budget2qp_0_3     // unsigned ,    RW, default = 7  from budget2x to master_qp mapping
//Bit 11: 8        reg_lut_budget2qp_0_2     // unsigned ,    RW, default = 8  from budget2x to master_qp mapping
//Bit  7: 4        reg_lut_budget2qp_0_1     // unsigned ,    RW, default = 8  from budget2x to master_qp mapping
//Bit  3: 0        reg_lut_budget2qp_0_0     // unsigned ,    RW, default = 9  from budget2x to master_qp mapping
//Bit 31:28        reg_lut_budget2qp_0_15    // unsigned ,    RW, default = 3  from budget2x to master_qp mapping
//Bit 27:24        reg_lut_budget2qp_0_14    // unsigned ,    RW, default = 3  from budget2x to master_qp mapping
//Bit 23:20        reg_lut_budget2qp_0_13    // unsigned ,    RW, default = 4  from budget2x to master_qp mapping
//Bit 19:16        reg_lut_budget2qp_0_12    // unsigned ,    RW, default = 4  from budget2x to master_qp mapping
//Bit 15:12        reg_lut_budget2qp_0_11    // unsigned ,    RW, default = 4  from budget2x to master_qp mapping
//Bit 11: 8        reg_lut_budget2qp_0_10    // unsigned ,    RW, default = 5  from budget2x to master_qp mapping
//Bit  7: 4        reg_lut_budget2qp_0_9     // unsigned ,    RW, default = 5  from budget2x to master_qp mapping
//Bit  3: 0        reg_lut_budget2qp_0_8     // unsigned ,    RW, default = 5  from budget2x to master_qp mapping
//Bit 31:28        reg_lut_budget2qp_0_23    // unsigned ,    RW, default = 0  from budget2x to master_qp mapping
//Bit 27:24        reg_lut_budget2qp_0_22    // unsigned ,    RW, default = 0  from budget2x to master_qp mapping
//Bit 23:20        reg_lut_budget2qp_0_21    // unsigned ,    RW, default = 0  from budget2x to master_qp mapping
//Bit 19:16        reg_lut_budget2qp_0_20    // unsigned ,    RW, default = 0  from budget2x to master_qp mapping
//Bit 15:12        reg_lut_budget2qp_0_19    // unsigned ,    RW, default = 0  from budget2x to master_qp mapping
//Bit 11: 8        reg_lut_budget2qp_0_18    // unsigned ,    RW, default = 1  from budget2x to master_qp mapping
//Bit  7: 4        reg_lut_budget2qp_0_17    // unsigned ,    RW, default = 2  from budget2x to master_qp mapping
//Bit  3: 0        reg_lut_budget2qp_0_16    // unsigned ,    RW, default = 2  from budget2x to master_qp mapping
//Bit 31:24        reserved
//Bit 23:22        reserved
//Bit 21           reg_rc_bits_gap_dlt_down_en // unsigned ,    RW, default = 0  to dlt_buget2x reduced based on bits_gap value
//Bit 20           reg_rc_fifo_avgspeed_use_sbudget // unsigned ,    RW, default = 0  enable to use s_budget_block as budget_block: 0 use bits_perblk programable register, 1: use rc calculated s_budget_blk
//Bit 19           reserved
//Bit 18           reg_flatness_flag   // unsigned ,    RW, default = 1  enable signal for the flatness mode.
//Bit 17           reg_flatness_qerr_flag // unsigned ,    RW, default = 1  enable signal for the flatness mode.
//Bit 16           reg_flatness_pixel_err_flag // unsigned ,    RW, default = 1  enable signal for the flatness mode.
//Bit 15:12        reserved
//Bit 11: 0        reg_rc_qp_margin3_blkth // unsigned ,    RW, default = 256  final guard margin threshold to blocks_left_in_group, default= rc_dynamic_mxblk_long;
//Bit 31           reg_ich_enable      // unsigned ,    RW, default = 1  enable signal for the ich mode.
//Bit 30           reg_ich_pre_pixel_adjust_enable // unsigned ,    RW, default = 0  enable signal for the ich pre pixel adjust.
//Bit 29:20        reserved
//Bit 19:16        reg_ich_uphistory_th // unsigned ,    RW, default = 8  thresh for ICH history update
//Bit 15:13        reserved
//Bit 12           reg_ich_error_compare_pred_en // unsigned ,    RW, default = 0  ICH maxerror compare prediction maxerror en
//Bit 11: 8        reg_ich_max_error_sel // unsigned ,    RW, default = 5  ICH error th sel, th = 1<<sel
//Bit  7: 4        reg_ich_bits_weight // unsigned ,    RW, default = 8  cost bits weight
//Bit  3: 0        reg_pre_bits_weight // unsigned ,    RW, default = 8  cost bits weight   value: 0-4
//Bit 31:16        reg_rc_group_y_1    // unsigned ,    RW, default = 4  vertical size of group (super block) within slice for rate control algorithm
//Bit 15: 0        reg_rc_group_y_0    // unsigned ,    RW, default = 4  vertical size of group (super block) within slice for rate control algorithm
//Bit 31:16        reg_rc_group_y_3    // unsigned ,    RW, default = 4  vertical size of group (super block) within slice for rate control algorithm
//Bit 15: 0        reg_rc_group_y_2    // unsigned ,    RW, default = 4  vertical size of group (super block) within slice for rate control algorithm
//Bit 31:24        reg_rc_perln_16pec_xbdgt_3 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 23:16        reg_rc_perln_16pec_xbdgt_2 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 15: 8        reg_rc_perln_16pec_xbdgt_1 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit  7: 0        reg_rc_perln_16pec_xbdgt_0 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 31:24        reg_rc_perln_16pec_xbdgt_7 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 23:16        reg_rc_perln_16pec_xbdgt_6 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 15: 8        reg_rc_perln_16pec_xbdgt_5 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit  7: 0        reg_rc_perln_16pec_xbdgt_4 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 31:24        reg_rc_perln_16pec_xbdgt_11 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 23:16        reg_rc_perln_16pec_xbdgt_10 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 15: 8        reg_rc_perln_16pec_xbdgt_9 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit  7: 0        reg_rc_perln_16pec_xbdgt_8 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 31:24        reg_rc_perln_16pec_xbdgt_15 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 23:16        reg_rc_perln_16pec_xbdgt_14 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 15: 8        reg_rc_perln_16pec_xbdgt_13 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit  7: 0        reg_rc_perln_16pec_xbdgt_12 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 31:24        reg_rc_perln_16pec_xbdgt_16 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 23:16        reg_rc_1stln_slice_xbdgt // unsigned ,    RW, default = 20  extra bit budget (in pct= x/128) for the first line of the slice, no prediction from pre-line;
//Bit 15: 8        reg_rc_2ndln_slice_xbdgt // unsigned ,    RW, default = 12  extra bit budget (in pct= x/128) for the 2nd line of the slice, with limited prediction from pre-line;
//Bit  7: 0        reg_rc_1stln_group_xbdgt // unsigned ,    RW, default = 8  extra bit budget (in pct= x/128) for the first line of the group, still with prediction from pre-line;
//Bit 31:29        reserved
//Bit 28           reg_rc_precell_bits_reset // unsigned ,    RW, default = 1  enable for bits cell pre reset in each group
//Bit 27:20        reg_rc_dynamic_speed_short // unsigned ,    RW, default = 16  dynamic speed for using up the accumed bits, 1st order gain of loop filter. normalized to 64 as 1;
//Bit 19:12        reg_rc_dynamic_speed_long // unsigned ,    RW, default = 16  dynamic speed for using up the accumed bits, 2nd order gain of loop filter. normalized to 16 as 1;
//Bit 11: 0        reg_rc_dynamic_mxblk_long // unsigned ,    RW, default = 256  maximum number of blocks in group for long term dynamic factor, if set to 0, then no limit; otherwise set limit, default= numblk of one line
//Bit 31:30        reserved
//Bit 29:16        reg_rc_qp_margin_thd_1 // signed ,    RW, default = -16  threshold x16 to ibits_accum to assign extra pq margin to avoid buffer down flow, default=[-4*16, -16*16]
//Bit 15:14        reserved
//Bit 13: 0        reg_rc_qp_margin_thd_0 // signed ,    RW, default = -4  threshold x16 to ibits_accum to assign extra pq margin to avoid buffer down flow, default=[-4*16, -16*16]
//Bit 31:30        reserved
//Bit 29:16        reg_rc_qp_margin_thd_3 // signed ,    RW, default = 16  threshold x16 to ibits_accum to assign extra pq margin to avoid buffer down flow, default=[-4*16, -16*16]
//Bit 15:14        reserved
//Bit 13: 0        reg_rc_qp_margin_thd_2 // signed ,    RW, default = -32  threshold x16 to ibits_accum to assign extra pq margin to avoid buffer down flow, default=[-4*16, -16*16]
//Bit 31:30        reg_rc_qp_margin_dlt_mode // unsigned ,    RW, default = 0
//Bit 29:24        reserved
//Bit 23:20        reg_rc_master_qp_min // unsigned ,    RW, default = 0  maximum qp during the rc_loop
//Bit 19:16        reg_rc_master_qp_max // unsigned ,    RW, default = 6  minmum qp during the rc_loop
//Bit 15:12        reg_rc_qp_margin_dlt_3 // unsigned ,    RW, default = 4
//Bit 11: 8        reg_rc_qp_margin_dlt_2 // unsigned ,    RW, default = 3
//Bit  7: 4        reg_rc_qp_margin_dlt_1 // unsigned ,    RW, default = 2
//Bit  3: 0        reg_rc_qp_margin_dlt_0 // unsigned ,    RW, default = 1  delta qp margin to qp_max when ibits_accum lower than  rc_qp_margin_thd[2], default=[1, 2]
//Bit 31:20        reg_rc_fifo_qp_margin_thd_3 // unsigned ,    RW, default = 500  threshold to fifo_level to assign extra pq margin to avoid buffer down flow, default=[0, 500]
//Bit 19: 8        reg_rc_fifo_qp_margin_thd_2 // unsigned ,    RW, default = 350  threshold to fifo_level to assign extra pq margin to avoid buffer down flow, default=[0, 500]
//Bit  7: 4        reg_rc_fifo_qp_margin_dlt_3 // unsigned ,    RW, default = 2
//Bit  3: 0        reg_rc_fifo_qp_margin_dlt_2 // unsigned ,    RW, default = 1  delta qp margin to qp_max when ibits_accum lower than  reg_rc_qpx2_margin_dlt, default=[1, 32]
//Bit 31:20        reg_rc_fifo_qp_margin_thd_1 // unsigned ,    RW, default = 250  threshold to fifo_level to assign extra pq margin to avoid buffer down flow, default=[0, 500]
//Bit 19: 8        reg_rc_fifo_qp_margin_thd_0 // unsigned ,    RW, default = 150  threshold to fifo_level to assign extra pq margin to avoid buffer down flow, default=[0, 500]
//Bit  7: 4        reg_rc_fifo_qp_margin_dlt_1 // unsigned ,    RW, default = 2
//Bit  3: 0        reg_rc_fifo_qp_margin_dlt_0 // unsigned ,    RW, default = 1  delta qp margin to qp_max when ibits_accum lower than  reg_rc_qpx2_margin_dlt, default=[1, 32]
//Bit 31:24        reserved
//Bit 23:12        reg_flatness_det_thresh // unsigned ,    RW, default = 12  MAX-MIN for all components is required to be less than  this value , flatness to be used
//Bit 11: 0        reg_flatness_det_thresh_max // unsigned ,    RW, default = 25  MAX-MIN for all components is required to be less than this value , flatness to be used
//Bit 31:28        reg_flatness_qp_reduce // unsigned ,    RW, default = 2  if the cell is flatness qlevel = master_qp- flatness_qp_reduce
//Bit 27:24        reg_flatness_qp_thresh // unsigned ,    RW, default = 3  thresh qp for flatness to be used
//Bit 23:12        reg_flatness_accum_thresh // signed ,    RW, default = 4  thresh ibits_accum for flatness to be used x16
//Bit 11: 0        reg_flatness_q_err_thresh // unsigned ,    RW, default = 4  MAX_Q_ERR-MINQ_ERR for all components is required to be less than this value , flatness to be used
//Bit 31:24        reg_ratio_bppx16_0_3 // unsigned ,    RW, default = 72  bits per pixel x16, fracbits_bpp = x/16; [0:2] for different components
//Bit 23:16        reg_ratio_bppx16_0_2 // unsigned ,    RW, default = 72  bits per pixel x16, fracbits_bpp = x/16; [0:2] for different components
//Bit 15: 8        reg_ratio_bppx16_0_1 // unsigned ,    RW, default = 72  bits per pixel x16, fracbits_bpp = x/16; [0:2] for different components
//Bit  7: 0        reg_ratio_bppx16_0_0 // unsigned ,    RW, default = 72  bits per pixel x16, fracbits_bpp = x/16; [0:2] for different components
//Bit 31:12        reserved
//Bit 11: 0        reg_rc_fifo_avgspeed_bits_perblk_0 // unsigned ,    RW, default = 18  bits perblock fifo read/write speed, set to budget_block = (SIZE_BLK*(ratio_bppx16[cmp][chn]) )/16 as default
//Bit 31:24        reserved
//Bit 23:12        reg_rc_fifo_margin_thd_5 // unsigned ,    RW, default = 280  threshold of fifo level(in words=16bits) to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 11: 0        reg_rc_fifo_margin_thd_4 // unsigned ,    RW, default = 250  threshold of fifo level(in words=16bits) to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 31:24        reserved
//Bit 23:12        reg_rc_fifo_margin_thd_3 // unsigned ,    RW, default = 220  threshold of fifo level(in words=16bits) to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 11: 0        reg_rc_fifo_margin_thd_2 // unsigned ,    RW, default = 165  threshold of fifo level(in words=16bits) to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 31:24        reserved
//Bit 23:12        reg_rc_fifo_margin_thd_1 // unsigned ,    RW, default = 145  threshold of fifo level(in words=16bits) to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 11: 0        reg_rc_fifo_margin_thd_0 // unsigned ,    RW, default = 130  threshold of fifo level(in words=16bits) to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 31:24        reserved
//Bit 23:20        reg_rc_fifo_margin_dlt_5 // unsigned ,    RW, default = 6  delta of fifo level to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 19:16        reg_rc_fifo_margin_dlt_4 // unsigned ,    RW, default = 10  delta of fifo level to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 15:12        reg_rc_fifo_margin_dlt_3 // unsigned ,    RW, default = 8  delta of fifo level to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 11: 8        reg_rc_fifo_margin_dlt_2 // unsigned ,    RW, default = 6  delta of fifo level to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit  7: 4        reg_rc_fifo_margin_dlt_1 // unsigned ,    RW, default = 4  delta of fifo level to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit  3: 0        reg_rc_fifo_margin_dlt_0 // unsigned ,    RW, default = 2  delta of fifo level to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 31:26        reserved
//Bit 25:16        reg_rc_bits_gap_margin_thd_1 // unsigned ,    RW, default = 50  threshold of bits gap to reduced dlt_buget2x
//Bit 15:10        reserved
//Bit  9: 0        reg_rc_bits_gap_margin_thd_0 // unsigned ,    RW, default = 30
//Bit 31:10        reserved
//Bit  9: 0        reg_rc_bits_gap_margin_thd_2 // unsigned ,    RW, default = 82  threshold of bits gap to reduced dlt_buget2x
//Bit 31: 0        reg_pre_slc_bitaccum_0_0  // unsigned ,    RW, default = 0  previous slice bits accum
//Bit 31: 0        reg_pre_slc_bitaccum_0_1  // unsigned ,    RW, default = 0  reg_presl_last_bits
//Bit 31: 0        reg_pre_slc_bitaccum_0_2  // unsigned ,    RW, default = 0  reg_presl_last_bits
//Bit 31: 0        reg_pre_slc_bitaccum_0_3  // unsigned ,    RW, default = 0  reg_presl_last_bits
//Bit 31:16        reg_pre_slc_fifolevel_0_1 // unsigned ,    RW, default = 0  previous slice fifo_level
//Bit 15: 0        reg_pre_slc_fifolevel_0_0 // unsigned ,    RW, default = 0  previous slice fifo_level
//Bit 31:16        reg_pre_slc_fifolevel_0_3 // unsigned ,    RW, default = 0  previous slice fifo_level
//Bit 15: 0        reg_pre_slc_fifolevel_0_2 // unsigned ,    RW, default = 0  previous slice fifo_level
//for c driver
#define CLOSS0_BLK                                 0x0c40
//Bit 31:20        reserved
//Bit 19:16        reg_prefilt_alpha_0       // unsigned ,    RW, default = 0  prefilter lpf alpha on val2enc data, especially useful for high compression ratio,   0: no lpf; 8:lpf strong on: default= depends on compression ratio, higher ratio, stronger one
//Bit 15:11        reserved
//Bit 10: 0        reg_slcln_ratio_0         // unsigned ,    RW, default = 8  dynamic ratio to idx of extra bit budget for the cells within the line
#define CLOSS0_PRED_0                              0x0c41
//Bit 31:28        reg_pred_drt5_rate_0      // unsigned ,    RW, default = 0  dynamic ratio to max_err of coring for no valid edge det base on min_err, norm to 32 as 1,    default= 4
//Bit 27:16        reg_pred_drt5flat_thd_0   // unsigned ,    RW, default = 400  dynamic ratio to min_err  for no valid edge det base on err_flat
//Bit 15: 8        reg_pred_drt5_thrd_0      // unsigned ,    RW, default = 8  static threshold to detect no valid edge base on min_err,    default= 20
//Bit  7           reg_pred_errlp_0          // unsigned ,    RW, default = 1  enable of lpf on error,   0: no lpf; 1:lpf on: default= 1
//Bit  6           reg_pred_dir5flat_en_0    // unsigned ,    RW, default = 1  enable of flatness direction  0: 4 directions[0,45,90,135]  1:5 directions[0,45,90,135,no valid direction(flatness)]
//Bit  5           reg_adjsize_flatness_flag_0 // unsigned ,    RW, default = 1  enable signal for the flatness mode,adj_predicted_size should be small in flatness
//Bit  4           reg_adjsize_complex_flag_0 // unsigned ,    RW, default = 1  enable signal for the complex mode,adj_predicted_size should be large in complex
//Bit  3            reserved
//Bit  2           reg_pred_dirconf_valid_0_2 // unsigned ,    RW, default = 0
//Bit  1           reg_pred_dirconf_valid_0_1 // unsigned ,    RW, default = 1
//Bit  0           reg_pred_dirconf_valid_0_0 // unsigned ,    RW, default = 1  valid for adaptive dir_conf,   default= [1 1 1]
#define CLOSS0_PRED_1                              0x0c42
//Bit 31:24        reserved
//Bit 23:20        reg_pred_hgain_0          // unsigned ,    RW, default = 8  gain to herr normalized to 4 as 1,    default= 8
//Bit 19            reserved
//Bit 18:16        reg_pred_dirconf_thrd_0   // unsigned ,    RW, default = 1  threshold to max_err for adaptive dir_conf,  thrd= x*thred; default= 4
//Bit 15: 4        reg_pred_err0_0           // unsigned ,    RW, default = 200  y_b = 0 horizontal err
//Bit  3: 2        reserved
//Bit  1: 0        reg_pred_filter_mode_0    // unsigned ,    RW, default = 3  mode to do filter to get side value for the pred_value, sid= 0: ref; 1: side0, 2:(sid1+sid2)/2; 3: (2sid0+sid1 +sid2)    default= 3
#define CLOSS0_ADJ_PRED_SIZE_0                     0x0c43
//Bit 31:24        reserved
//Bit 23:20        reg_adjsize_flatness_sizedlt_0 // unsigned ,    RW, default = 4  delta size margin to adj_predicted_size when adj_predicted_size lower than  reg_adjsize_flatness_sizedlt, default=[1, 2]
//Bit 19:16        reg_adjsize_flatness_reduce_0 // unsigned ,    RW, default = 2  the cell is flatness and adj_predicted_size > thd,adj_predicted_size = adj_predicted_size- reg_adjsize_flatness_reduce
//Bit 15:12        reserved
//Bit 11: 0        reg_adjsize_flatness_pixthd_0 // unsigned ,    RW, default = 50  area if(MAX-MIN)<pixthd
#define CLOSS0_ADJ_PRED_SIZE_1                     0x0c44
//Bit 31:24        reserved
//Bit 23:20        reg_adjsize_complex_sizedlt_0 // unsigned ,    RW, default = 4  delta size margin to adj_predicted_size when adj_predicted_size bigger than  reg_adjsize_complex_sizedlt
//Bit 19:16        reg_adjsize_complex_increase_0 // unsigned ,    RW, default = 2  if the cell is complex and adj_predicted_size < thd,adj_predicted_size = adj_predicted_size + reg_adjsize_complex_increase
//Bit 15:12        reserved
//Bit 11: 0        reg_adjsize_complex_pixthd_0 // unsigned ,    RW, default = 512  complex area if(MAX-MIN) bigger than pixthd
#define CLOSS0_QP_MAP_0                            0x0c45
//Bit 31:28        reg_lut_budget2qp_0_7     // unsigned ,    RW, default = 6  from budget2x to master_qp mapping
//Bit 27:24        reg_lut_budget2qp_0_6     // unsigned ,    RW, default = 6  from budget2x to master_qp mapping
//Bit 23:20        reg_lut_budget2qp_0_5     // unsigned ,    RW, default = 7  from budget2x to master_qp mapping
//Bit 19:16        reg_lut_budget2qp_0_4     // unsigned ,    RW, default = 7  from budget2x to master_qp mapping
//Bit 15:12        reg_lut_budget2qp_0_3     // unsigned ,    RW, default = 7  from budget2x to master_qp mapping
//Bit 11: 8        reg_lut_budget2qp_0_2     // unsigned ,    RW, default = 8  from budget2x to master_qp mapping
//Bit  7: 4        reg_lut_budget2qp_0_1     // unsigned ,    RW, default = 8  from budget2x to master_qp mapping
//Bit  3: 0        reg_lut_budget2qp_0_0     // unsigned ,    RW, default = 9  from budget2x to master_qp mapping
#define CLOSS0_QP_MAP_1                            0x0c46
//Bit 31:28        reg_lut_budget2qp_0_15    // unsigned ,    RW, default = 3  from budget2x to master_qp mapping
//Bit 27:24        reg_lut_budget2qp_0_14    // unsigned ,    RW, default = 3  from budget2x to master_qp mapping
//Bit 23:20        reg_lut_budget2qp_0_13    // unsigned ,    RW, default = 4  from budget2x to master_qp mapping
//Bit 19:16        reg_lut_budget2qp_0_12    // unsigned ,    RW, default = 4  from budget2x to master_qp mapping
//Bit 15:12        reg_lut_budget2qp_0_11    // unsigned ,    RW, default = 4  from budget2x to master_qp mapping
//Bit 11: 8        reg_lut_budget2qp_0_10    // unsigned ,    RW, default = 5  from budget2x to master_qp mapping
//Bit  7: 4        reg_lut_budget2qp_0_9     // unsigned ,    RW, default = 5  from budget2x to master_qp mapping
//Bit  3: 0        reg_lut_budget2qp_0_8     // unsigned ,    RW, default = 5  from budget2x to master_qp mapping
#define CLOSS0_QP_MAP_2                            0x0c47
//Bit 31:28        reg_lut_budget2qp_0_23    // unsigned ,    RW, default = 0  from budget2x to master_qp mapping
//Bit 27:24        reg_lut_budget2qp_0_22    // unsigned ,    RW, default = 0  from budget2x to master_qp mapping
//Bit 23:20        reg_lut_budget2qp_0_21    // unsigned ,    RW, default = 0  from budget2x to master_qp mapping
//Bit 19:16        reg_lut_budget2qp_0_20    // unsigned ,    RW, default = 0  from budget2x to master_qp mapping
//Bit 15:12        reg_lut_budget2qp_0_19    // unsigned ,    RW, default = 0  from budget2x to master_qp mapping
//Bit 11: 8        reg_lut_budget2qp_0_18    // unsigned ,    RW, default = 1  from budget2x to master_qp mapping
//Bit  7: 4        reg_lut_budget2qp_0_17    // unsigned ,    RW, default = 2  from budget2x to master_qp mapping
//Bit  3: 0        reg_lut_budget2qp_0_16    // unsigned ,    RW, default = 2  from budget2x to master_qp mapping
#define CLOSS0_CODEC_OTHER                         0x0c48
//Bit 31:24        reserved
//Bit 23:22        reserved
//Bit 21           reg_rc_bits_gap_dlt_down_en // unsigned ,    RW, default = 0  to dlt_buget2x reduced based on bits_gap value
//Bit 20           reg_rc_fifo_avgspeed_use_sbudget // unsigned ,    RW, default = 0  enable to use s_budget_block as budget_block: 0 use bits_perblk programable register, 1: use rc calculated s_budget_blk
//Bit 19           reserved
//Bit 18           reg_flatness_flag   // unsigned ,    RW, default = 1  enable signal for the flatness mode.
//Bit 17           reg_flatness_qerr_flag // unsigned ,    RW, default = 1  enable signal for the flatness mode.
//Bit 16           reg_flatness_pixel_err_flag // unsigned ,    RW, default = 1  enable signal for the flatness mode.
//Bit 15:12        reserved
//Bit 11: 0        reg_rc_qp_margin3_blkth // unsigned ,    RW, default = 256  final guard margin threshold to blocks_left_in_group, default= rc_dynamic_mxblk_long;
#define CLOSS0_ICH                                 0x0c49
//Bit 31           reg_ich_enable      // unsigned ,    RW, default = 1  enable signal for the ich mode.
//Bit 30           reg_ich_pre_pixel_adjust_enable // unsigned ,    RW, default = 0  enable signal for the ich pre pixel adjust.
//Bit 29:20        reserved
//Bit 19:16        reg_ich_uphistory_th // unsigned ,    RW, default = 8  thresh for ICH history update
//Bit 15:13        reserved
//Bit 12           reg_ich_error_compare_pred_en // unsigned ,    RW, default = 0  ICH maxerror compare prediction maxerror en
//Bit 11: 8        reg_ich_max_error_sel // unsigned ,    RW, default = 5  ICH error th sel, th = 1<<sel
//Bit  7: 4        reg_ich_bits_weight // unsigned ,    RW, default = 8  cost bits weight
//Bit  3: 0        reg_pre_bits_weight // unsigned ,    RW, default = 8  cost bits weight   value: 0-4
#define CLOSS0_RC_GROUP_0                          0x0c4a
//Bit 31:16        reg_rc_group_y_1    // unsigned ,    RW, default = 4  vertical size of group (super block) within slice for rate control algorithm
//Bit 15: 0        reg_rc_group_y_0    // unsigned ,    RW, default = 4  vertical size of group (super block) within slice for rate control algorithm
#define CLOSS0_RC_GROUP_1                          0x0c4b
//Bit 31:16        reg_rc_group_y_3    // unsigned ,    RW, default = 4  vertical size of group (super block) within slice for rate control algorithm
//Bit 15: 0        reg_rc_group_y_2    // unsigned ,    RW, default = 4  vertical size of group (super block) within slice for rate control algorithm
#define CLOSS0_RC_BUDGET_0                         0x0c4c
//Bit 31:24        reg_rc_perln_16pec_xbdgt_3 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 23:16        reg_rc_perln_16pec_xbdgt_2 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 15: 8        reg_rc_perln_16pec_xbdgt_1 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit  7: 0        reg_rc_perln_16pec_xbdgt_0 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
#define CLOSS0_RC_BUDGET_1                         0x0c4d
//Bit 31:24        reg_rc_perln_16pec_xbdgt_7 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 23:16        reg_rc_perln_16pec_xbdgt_6 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 15: 8        reg_rc_perln_16pec_xbdgt_5 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit  7: 0        reg_rc_perln_16pec_xbdgt_4 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
#define CLOSS0_RC_BUDGET_2                         0x0c4e
//Bit 31:24        reg_rc_perln_16pec_xbdgt_11 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 23:16        reg_rc_perln_16pec_xbdgt_10 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 15: 8        reg_rc_perln_16pec_xbdgt_9 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit  7: 0        reg_rc_perln_16pec_xbdgt_8 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
#define CLOSS0_RC_BUDGET_3                         0x0c4f
//Bit 31:24        reg_rc_perln_16pec_xbdgt_15 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 23:16        reg_rc_perln_16pec_xbdgt_14 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 15: 8        reg_rc_perln_16pec_xbdgt_13 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit  7: 0        reg_rc_perln_16pec_xbdgt_12 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
#define CLOSS0_RC_BUDGET_4                         0x0c50
//Bit 31:24        reg_rc_perln_16pec_xbdgt_16 // signed ,    RW, default = 0  extra bit budget (in pct= x/128) for the cells within the line, defined by 17 nodes to split the line into 16 pieces.
//Bit 23:16        reg_rc_1stln_slice_xbdgt // unsigned ,    RW, default = 20  extra bit budget (in pct= x/128) for the first line of the slice, no prediction from pre-line;
//Bit 15: 8        reg_rc_2ndln_slice_xbdgt // unsigned ,    RW, default = 12  extra bit budget (in pct= x/128) for the 2nd line of the slice, with limited prediction from pre-line;
//Bit  7: 0        reg_rc_1stln_group_xbdgt // unsigned ,    RW, default = 8  extra bit budget (in pct= x/128) for the first line of the group, still with prediction from pre-line;
#define CLOSS0_RC_BUDGET_5                         0x0c51
//Bit 31:29        reserved
//Bit 28           reg_rc_precell_bits_reset // unsigned ,    RW, default = 1  enable for bits cell pre reset in each group
//Bit 27:20        reg_rc_dynamic_speed_short // unsigned ,    RW, default = 16  dynamic speed for using up the accumed bits, 1st order gain of loop filter. normalized to 64 as 1;
//Bit 19:12        reg_rc_dynamic_speed_long // unsigned ,    RW, default = 16  dynamic speed for using up the accumed bits, 2nd order gain of loop filter. normalized to 16 as 1;
//Bit 11: 0        reg_rc_dynamic_mxblk_long // unsigned ,    RW, default = 256  maximum number of blocks in group for long term dynamic factor, if set to 0, then no limit; otherwise set limit, default= numblk of one line
#define CLOSS0_RC_QP_MARGIN_0                      0x0c52
//Bit 31:30        reserved
//Bit 29:16        reg_rc_qp_margin_thd_1 // signed ,    RW, default = -16  threshold x16 to ibits_accum to assign extra pq margin to avoid buffer down flow, default=[-4*16, -16*16]
//Bit 15:14        reserved
//Bit 13: 0        reg_rc_qp_margin_thd_0 // signed ,    RW, default = -4  threshold x16 to ibits_accum to assign extra pq margin to avoid buffer down flow, default=[-4*16, -16*16]
#define CLOSS0_RC_QP_MARGIN_1                      0x0c53
//Bit 31:30        reserved
//Bit 29:16        reg_rc_qp_margin_thd_3 // signed ,    RW, default = 16  threshold x16 to ibits_accum to assign extra pq margin to avoid buffer down flow, default=[-4*16, -16*16]
//Bit 15:14        reserved
//Bit 13: 0        reg_rc_qp_margin_thd_2 // signed ,    RW, default = -32  threshold x16 to ibits_accum to assign extra pq margin to avoid buffer down flow, default=[-4*16, -16*16]
#define CLOSS0_RC_QP_MARGIN_2                      0x0c54
//Bit 31:30        reg_rc_qp_margin_dlt_mode // unsigned ,    RW, default = 0
//Bit 29:24        reserved
//Bit 23:20        reg_rc_master_qp_min // unsigned ,    RW, default = 0  maximum qp during the rc_loop
//Bit 19:16        reg_rc_master_qp_max // unsigned ,    RW, default = 6  minmum qp during the rc_loop
//Bit 15:12        reg_rc_qp_margin_dlt_3 // unsigned ,    RW, default = 4
//Bit 11: 8        reg_rc_qp_margin_dlt_2 // unsigned ,    RW, default = 3
//Bit  7: 4        reg_rc_qp_margin_dlt_1 // unsigned ,    RW, default = 2
//Bit  3: 0        reg_rc_qp_margin_dlt_0 // unsigned ,    RW, default = 1  delta qp margin to qp_max when ibits_accum lower than  rc_qp_margin_thd[2], default=[1, 2]
#define CLOSS0_RC_QP_MARGIN_3                      0x0c55
//Bit 31:20        reg_rc_fifo_qp_margin_thd_3 // unsigned ,    RW, default = 500  threshold to fifo_level to assign extra pq margin to avoid buffer down flow, default=[0, 500]
//Bit 19: 8        reg_rc_fifo_qp_margin_thd_2 // unsigned ,    RW, default = 350  threshold to fifo_level to assign extra pq margin to avoid buffer down flow, default=[0, 500]
//Bit  7: 4        reg_rc_fifo_qp_margin_dlt_3 // unsigned ,    RW, default = 2
//Bit  3: 0        reg_rc_fifo_qp_margin_dlt_2 // unsigned ,    RW, default = 1  delta qp margin to qp_max when ibits_accum lower than  reg_rc_qpx2_margin_dlt, default=[1, 32]
#define CLOSS0_RC_QP_MARGIN_4                      0x0c56
//Bit 31:20        reg_rc_fifo_qp_margin_thd_1 // unsigned ,    RW, default = 250  threshold to fifo_level to assign extra pq margin to avoid buffer down flow, default=[0, 500]
//Bit 19: 8        reg_rc_fifo_qp_margin_thd_0 // unsigned ,    RW, default = 150  threshold to fifo_level to assign extra pq margin to avoid buffer down flow, default=[0, 500]
//Bit  7: 4        reg_rc_fifo_qp_margin_dlt_1 // unsigned ,    RW, default = 2
//Bit  3: 0        reg_rc_fifo_qp_margin_dlt_0 // unsigned ,    RW, default = 1  delta qp margin to qp_max when ibits_accum lower than  reg_rc_qpx2_margin_dlt, default=[1, 32]
#define CLOSS0_FLATNESS_0                          0x0c57
//Bit 31:24        reserved
//Bit 23:12        reg_flatness_det_thresh // unsigned ,    RW, default = 12  MAX-MIN for all components is required to be less than  this value , flatness to be used
//Bit 11: 0        reg_flatness_det_thresh_max // unsigned ,    RW, default = 25  MAX-MIN for all components is required to be less than this value , flatness to be used
#define CLOSS0_FLATNESS_1                          0x0c58
//Bit 31:28        reg_flatness_qp_reduce // unsigned ,    RW, default = 2  if the cell is flatness qlevel = master_qp- flatness_qp_reduce
//Bit 27:24        reg_flatness_qp_thresh // unsigned ,    RW, default = 3  thresh qp for flatness to be used
//Bit 23:12        reg_flatness_accum_thresh // signed ,    RW, default = 4  thresh ibits_accum for flatness to be used x16
//Bit 11: 0        reg_flatness_q_err_thresh // unsigned ,    RW, default = 4  MAX_Q_ERR-MINQ_ERR for all components is required to be less than this value , flatness to be used
#define CLOSS0_RATIO_0                             0x0c59
//Bit 31:24        reg_ratio_bppx16_0_3 // unsigned ,    RW, default = 72  bits per pixel x16, fracbits_bpp = x/16; [0:2] for different components
//Bit 23:16        reg_ratio_bppx16_0_2 // unsigned ,    RW, default = 72  bits per pixel x16, fracbits_bpp = x/16; [0:2] for different components
//Bit 15: 8        reg_ratio_bppx16_0_1 // unsigned ,    RW, default = 72  bits per pixel x16, fracbits_bpp = x/16; [0:2] for different components
//Bit  7: 0        reg_ratio_bppx16_0_0 // unsigned ,    RW, default = 72  bits per pixel x16, fracbits_bpp = x/16; [0:2] for different components
#define CLOSS0_FIFO_AVG                            0x0c5a
//Bit 31:12        reserved
//Bit 11: 0        reg_rc_fifo_avgspeed_bits_perblk_0 // unsigned ,    RW, default = 18  bits perblock fifo read/write speed, set to budget_block = (SIZE_BLK*(ratio_bppx16[cmp][chn]) )/16 as default
#define CLOSS0_FIFO_THD_0                          0x0c5b
//Bit 31:24        reserved
//Bit 23:12        reg_rc_fifo_margin_thd_5 // unsigned ,    RW, default = 280  threshold of fifo level(in words=16bits) to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 11: 0        reg_rc_fifo_margin_thd_4 // unsigned ,    RW, default = 250  threshold of fifo level(in words=16bits) to guard the rc loop by adding delta to p_budget2x, default=[]
#define CLOSS0_FIFO_THD_1                          0x0c5c
//Bit 31:24        reserved
//Bit 23:12        reg_rc_fifo_margin_thd_3 // unsigned ,    RW, default = 220  threshold of fifo level(in words=16bits) to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 11: 0        reg_rc_fifo_margin_thd_2 // unsigned ,    RW, default = 165  threshold of fifo level(in words=16bits) to guard the rc loop by adding delta to p_budget2x, default=[]
#define CLOSS0_FIFO_THD_2                          0x0c5d
//Bit 31:24        reserved
//Bit 23:12        reg_rc_fifo_margin_thd_1 // unsigned ,    RW, default = 145  threshold of fifo level(in words=16bits) to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 11: 0        reg_rc_fifo_margin_thd_0 // unsigned ,    RW, default = 130  threshold of fifo level(in words=16bits) to guard the rc loop by adding delta to p_budget2x, default=[]
#define CLOSS0_FIFO_DLT                            0x0c5e
//Bit 31:24        reserved
//Bit 23:20        reg_rc_fifo_margin_dlt_5 // unsigned ,    RW, default = 6  delta of fifo level to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 19:16        reg_rc_fifo_margin_dlt_4 // unsigned ,    RW, default = 10  delta of fifo level to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 15:12        reg_rc_fifo_margin_dlt_3 // unsigned ,    RW, default = 8  delta of fifo level to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit 11: 8        reg_rc_fifo_margin_dlt_2 // unsigned ,    RW, default = 6  delta of fifo level to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit  7: 4        reg_rc_fifo_margin_dlt_1 // unsigned ,    RW, default = 4  delta of fifo level to guard the rc loop by adding delta to p_budget2x, default=[]
//Bit  3: 0        reg_rc_fifo_margin_dlt_0 // unsigned ,    RW, default = 2  delta of fifo level to guard the rc loop by adding delta to p_budget2x, default=[]
#define CLOSS0_BITSGAP_THD_0                       0x0c5f
//Bit 31:26        reserved
//Bit 25:16        reg_rc_bits_gap_margin_thd_1 // unsigned ,    RW, default = 50  threshold of bits gap to reduced dlt_buget2x
//Bit 15:10        reserved
//Bit  9: 0        reg_rc_bits_gap_margin_thd_0 // unsigned ,    RW, default = 30
#define CLOSS0_BITSGAP_THD_1                       0x0c60
//Bit 31:10        reserved
//Bit  9: 0        reg_rc_bits_gap_margin_thd_2 // unsigned ,    RW, default = 82  threshold of bits gap to reduced dlt_buget2x
#define CLOSS0_PRESL_LAST_BITS_0                   0x0c61
//Bit 31: 0        reg_pre_slc_bitaccum_0_0  // unsigned ,    RW, default = 0  previous slice bits accum
#define CLOSS0_PRESL_LAST_BITS_1                   0x0c62
//Bit 31: 0        reg_pre_slc_bitaccum_0_1  // unsigned ,    RW, default = 0  reg_presl_last_bits
#define CLOSS0_PRESL_LAST_BITS_2                   0x0c63
//Bit 31: 0        reg_pre_slc_bitaccum_0_2  // unsigned ,    RW, default = 0  reg_presl_last_bits
#define CLOSS0_PRESL_LAST_BITS_3                   0x0c64
//Bit 31: 0        reg_pre_slc_bitaccum_0_3  // unsigned ,    RW, default = 0  reg_presl_last_bits
#define CLOSS0_PRESL_FIFO_LEVEL_01                 0x0c65
//Bit 31:16        reg_pre_slc_fifolevel_0_1 // unsigned ,    RW, default = 0  previous slice fifo_level
//Bit 15: 0        reg_pre_slc_fifolevel_0_0 // unsigned ,    RW, default = 0  previous slice fifo_level
#define CLOSS0_PRESL_FIFO_LEVEL_02                 0x0c66
//Bit 31:16        reg_pre_slc_fifolevel_0_3 // unsigned ,    RW, default = 0  previous slice fifo_level
//Bit 15: 0        reg_pre_slc_fifolevel_0_2 // unsigned ,    RW, default = 0  previous slice fifo_level
#define CLOSS1_BLK                       CLOSS1_OFFSET + CLOSS0_BLK
#define CLOSS1_PRED_0                    CLOSS1_OFFSET + CLOSS0_PRED_0
#define CLOSS1_PRED_1                    CLOSS1_OFFSET + CLOSS0_PRED_1
#define CLOSS1_ADJ_PRED_SIZE_0           CLOSS1_OFFSET + CLOSS0_ADJ_PRED_SIZE_0
#define CLOSS1_ADJ_PRED_SIZE_1           CLOSS1_OFFSET + CLOSS0_ADJ_PRED_SIZE_1
#define CLOSS1_QP_MAP_0                  CLOSS1_OFFSET + CLOSS0_QP_MAP_0
#define CLOSS1_QP_MAP_1                  CLOSS1_OFFSET + CLOSS0_QP_MAP_1
#define CLOSS1_QP_MAP_2                  CLOSS1_OFFSET + CLOSS0_QP_MAP_2
#define CLOSS1_CODEC_OTHER               CLOSS1_OFFSET + CLOSS0_CODEC_OTHER
#define CLOSS1_ICH                       CLOSS1_OFFSET + CLOSS0_ICH
#define CLOSS1_RC_GROUP_0                CLOSS1_OFFSET + CLOSS0_RC_GROUP_0
#define CLOSS1_RC_GROUP_1                CLOSS1_OFFSET + CLOSS0_RC_GROUP_1
#define CLOSS1_RC_BUDGET_0               CLOSS1_OFFSET + CLOSS0_RC_BUDGET_0
#define CLOSS1_RC_BUDGET_1               CLOSS1_OFFSET + CLOSS0_RC_BUDGET_1
#define CLOSS1_RC_BUDGET_2               CLOSS1_OFFSET + CLOSS0_RC_BUDGET_2
#define CLOSS1_RC_BUDGET_3               CLOSS1_OFFSET + CLOSS0_RC_BUDGET_3
#define CLOSS1_RC_BUDGET_4               CLOSS1_OFFSET + CLOSS0_RC_BUDGET_4
#define CLOSS1_RC_BUDGET_5               CLOSS1_OFFSET + CLOSS0_RC_BUDGET_5
#define CLOSS1_RC_QP_MARGIN_0            CLOSS1_OFFSET + CLOSS0_RC_QP_MARGIN_0
#define CLOSS1_RC_QP_MARGIN_1            CLOSS1_OFFSET + CLOSS0_RC_QP_MARGIN_1
#define CLOSS1_RC_QP_MARGIN_2            CLOSS1_OFFSET + CLOSS0_RC_QP_MARGIN_2
#define CLOSS1_RC_QP_MARGIN_3            CLOSS1_OFFSET + CLOSS0_RC_QP_MARGIN_3
#define CLOSS1_RC_QP_MARGIN_4            CLOSS1_OFFSET + CLOSS0_RC_QP_MARGIN_4
#define CLOSS1_FLATNESS_0                CLOSS1_OFFSET + CLOSS0_FLATNESS_0
#define CLOSS1_FLATNESS_1                CLOSS1_OFFSET + CLOSS0_FLATNESS_1
#define CLOSS1_RATIO_0                   CLOSS1_OFFSET + CLOSS0_RATIO_0
#define CLOSS1_FIFO_AVG                  CLOSS1_OFFSET + CLOSS0_FIFO_AVG
#define CLOSS1_FIFO_THD_0                CLOSS1_OFFSET + CLOSS0_FIFO_THD_0
#define CLOSS1_FIFO_THD_1                CLOSS1_OFFSET + CLOSS0_FIFO_THD_1
#define CLOSS1_FIFO_THD_2                CLOSS1_OFFSET + CLOSS0_FIFO_THD_2
#define CLOSS1_FIFO_DLT                  CLOSS1_OFFSET + CLOSS0_FIFO_DLT
#define CLOSS1_BITSGAP_THD_0             CLOSS1_OFFSET + CLOSS0_BITSGAP_THD_0
#define CLOSS1_BITSGAP_THD_1             CLOSS1_OFFSET + CLOSS0_BITSGAP_THD_1
#define CLOSS1_PRESL_LAST_BITS_0         CLOSS1_OFFSET + CLOSS0_PRESL_LAST_BITS_0
#define CLOSS1_PRESL_LAST_BITS_1         CLOSS1_OFFSET + CLOSS0_PRESL_LAST_BITS_1
#define CLOSS1_PRESL_LAST_BITS_2         CLOSS1_OFFSET + CLOSS0_PRESL_LAST_BITS_2
#define CLOSS1_PRESL_LAST_BITS_3         CLOSS1_OFFSET + CLOSS0_PRESL_LAST_BITS_3
#define CLOSS1_PRESL_FIFO_LEVEL_01       CLOSS1_OFFSET + CLOSS0_PRESL_FIFO_LEVEL_01
#define CLOSS1_PRESL_FIFO_LEVEL_02       CLOSS1_OFFSET + CLOSS0_PRESL_FIFO_LEVEL_02
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/loss_cpnt_regs.h
//
//`include  "loss_enc3c_reg.h"
// -----------------------------------------------
// REG_BASE:  FRC_INP_MIF4_APB_BASE = 0x0d
// -----------------------------------------------
//`include  "loss_dec_nr_luma.h"
// -----------------------------------------------
// REG_BASE:  FRC_INP_MIF5_APB_BASE = 0x0e
// -----------------------------------------------
//`include  "loss_dec_nr_chrm.h"
// -----------------------------------------------
// REG_BASE:  FRC_ME_TOP0_HME_APB_BASE = 0x10
// -----------------------------------------------
//`include "hme_top_regs0.h"
//
// Reading file:  ./frc_inc/frc_mevp_wrap_reg.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_MEVP_CTRL0                             0x1080
//Bit 31            reg_mevp_clr_me_undone_flag  //unsigned  , RW, default = 0 ,me_process undone flag clear, write pulse
//Bit 30:4          reserved
//Bit 3 :1          reg_mevp_wrmif_en            //unsigned  , RW, default = 7 ,
//Bit 0             reg_hme_en                   //unsigned  , RW, default = 1 ,
#define FRC_MEVP_CTRL1                             0x1081
//Bit 31:5          reserved
//Bit    4          reg_mevp_frmswth_force       // unsigned , RW, default = 0 ,
//Bit 3 :0          reg_mevp_dbg_mvsel           // unsigned , RW, default = 0 ,
#define FRC_MEVP_CTRL2                             0x1082
//Bit 31:8          reserved
//Bit 7 :4          reg_vp2_frm_rst_line_num     // unsigned , RW, default = 5 ,
//Bit 3 :1          reserved
//Bit 0             reg_vp2_frm_rst_sel          // unsigned , RW, default = 0 ,
#define FRC_MEVP_CTRL3                             0x1083
//Bit 31:1          reserved
//Bit 0             reg_vpmc_mvwr_sel            // unsigned , RW, default = 1 1:mevp out write to ddr 0:mevp out connect to mc
#define FRC_MEVP_SW_RESETS                         0x1084
//Bit 31:24         reserved
//Bit 23: 0         reg_mevp_sw_resets           // unsigned , RW, default = 0 ,
#define FRC_ME_LOSS_SLICE_SEC                      0x1085
//Bit 31:1          reserved
//Bit 0             reg_me_loss_slice_sec        // unsigned , RW, default = 0,1:same as lossy-body 0:non_security
#define FRC_MEVP_RO_STAT0                          0x1088
//Bit 31:1          reserved
//Bit  0            ro_me_undone_flag            // unsigned , RO , default = 0  me_process undone flag
#define FRC_MEVP_RO_MIF_INT_FLAG                   0x1089
//Bit 31:14         ro_rdmif_frm_int             // unsigned , RO, default = 0
//Bit 13:6          ro_wrmif_frm_int             // unsigned , RO, default = 0
//Bit 5:0           ro_loss_frm_int             // unsigned , RO, default = 0
#define FRC_MEVP_CRC_CHECK_FRM                     0x108a
//Bit 31:6          reserved
//Bit 5:0           reg_crc_check_frm            //unsigned  , RW, default=0, mevp CRC frm num
#define FRC_MEVP_RO_MV_CRC_SUM                     0x108b
//Bit 31:0          ro_mevp_mv_crc_sum           //unsigned  , RO, default=0, mevp mv CRC sum
#define FRC_MEVP_RO_LOGO_CRC_SUM                   0x108c
//Bit 31:0          ro_vp_2mclogo_crc_sum        //unsigned  , RO, default=0, mevp mclogo CRC sum
#define FRC_MEVP_RO_MVS_ADDR                       0x108d
//Bit 31:0          ro_dbg_mvs_addr              //unsigned  , RO, default=0, 0:pcphs 1:nc 2:cpuni 3:pb 4:cn 5:pcuni 6:hmewr 7:hmerd
#define FRC_MEVP_SCAN_REG                          0x1090
//Bit 31:1          reserved
//Bit 0             reg_scan_reg                 // unsigned ,    RW,default = 0,
#define FRC_MEVP_TOP_GCLK_CTRL                     0x1091
//Bit 31:6          reserved
//Bit 5 :4          reg_gclk_ctrl                 // unsigned ,    RW,default = 3,
//Bit 3 :2          reg_rd_arb_gclk_ctrl          // unsigned ,    RW,default = 0,
//Bit 1 :0          reg_wr_arb_gclk_ctrl          // unsigned ,    RW,default = 3,
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_mevp_wrap_reg.h
//
// -----------------------------------------------
// REG_BASE:  FRC_ME_TOP0_APB_BASE = 0x11
// -----------------------------------------------
//
// Reading file:  ./frc_inc/me_top_regs0.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_ME_EN                                  0x1100
//Bit 31           reg_me_en                 // unsigned ,    RW, default = 0  enable me function.
//Bit 30           reg_me_lpf_en             // unsigned ,    RW, default = 0  lpf enable for me data
//Bit 29            reserved
//Bit 28:24        reg_me_max_num_cand_me    // unsigned ,    RW, default = 13  maximum number for ME candidates
//Bit 23:16        reserved
//Bit 15            reserved
//Bit 14:12        reg_me_blksize_x          // unsigned ,    RW, default = 2  block size x(2^reg) in ME sub module under the Buf_blend data (downsampled); default = 2;
//Bit 11            reserved
//Bit 10: 8        reg_me_blksize_y          // unsigned ,    RW, default = 2  block size y(2^reg) in ME sub module under the Buf_blend data (downsampled); default = 2;
//Bit  7: 6        reserved
//Bit  5: 4        reg_me_mvx_div_mode       // unsigned ,    RW, default = 0  0: MVx has 2bits decimal; 1: 3bits decimal; 2: 4bits decimal @ME resolution.
//Bit  3: 2        reserved
//Bit  1: 0        reg_me_mvy_div_mode       // unsigned ,    RW, default = 0  0: MVy has 2bits decimal; 1: 3bits decimal; 2: 4bits decimal @ME resolution.
#define FRC_ME_PRE_LBUF_OFST                       0x1101
//Bit 31            reserved
//Bit 30:16        reg_me_pre_lbuf_ofst_1    // signed ,    RW, default = 43  pre frame buffer offset [top_ofst bot_ofst]
//Bit 15            reserved
//Bit 14: 0        reg_me_pre_lbuf_ofst_0    // signed ,    RW, default = -48  pre frame buffer offset [top_ofst bot_ofst]
#define FRC_ME_CUR_LBUF_OFST                       0x1102
//Bit 31            reserved
//Bit 30:16        reg_me_cur_lbuf_ofst_1    // signed ,    RW, default = 43  cur frame buffer offset [top_ofst bot_ofst]
//Bit 15            reserved
//Bit 14: 0        reg_me_cur_lbuf_ofst_0    // signed ,    RW, default = -48  cur frame buffer offset [top_ofst bot_ofst]
#define FRC_ME_NEX_LBUF_OFST                       0x1103
//Bit 31            reserved
//Bit 30:16        reg_me_nex_lbuf_ofst_1    // signed ,    RW, default = 43  nex frame buffer offset [top_ofst bot_ofst]
//Bit 15            reserved
//Bit 14: 0        reg_me_nex_lbuf_ofst_0    // signed ,    RW, default = -48  nex frame buffer offset [top_ofst bot_ofst]
#define FRC_ME_LBUF_NUM                            0x1104
//Bit 31:24        reserved
//Bit 23:16        reg_me_lbuf_num_2         // unsigned ,    RW, default = 92  lbuf numbers for nex
//Bit 15: 8        reg_me_lbuf_num_1         // unsigned ,    RW, default = 92  lbuf numbers for cur
//Bit  7: 0        reg_me_lbuf_num_0         // unsigned ,    RW, default = 92  lbuf numbers for pre
#define FRC_ME_DBG                                 0x1105
//Bit 31:28        reserved
//Bit 27           reg_me_stmv_chk_en        // unsigned ,    RW, defult = 0  enable checking if spatial/temporal mv is new
//Bit 26           reg_me_rndmv_chk_en       // unsigned ,    RW, default = 0  enable checking if random mv is new
//Bit 25           reg_me_fsmv_chk_en        // unsigned ,    RW, default = 0  enable checking if full search mv is new
//Bit 24           reg_me_prjmv_chk_en       // unsigned ,    RW, default = 0  enable checking if projected mv is new
//Bit 23:16        reserved
//Bit 15: 6        reserved
//Bit  5           reg_me_force_bv_en        // unsigned ,    RW, default = 0
//Bit  4: 0        reg_me_debug_mode         // unsigned ,    RW, default = 0  only display for debug info. b0:mv_cn/nc; b1:mvfs_cn/nc; b2:sad_pre/cur_/2; b3:rpd related.
#define FRC_ME_LPF                                 0x1106
//Bit 31:28        reg_me_hlpf_coef_0        // unsigned ,    RW, default = 2  coef of horizontal low-pass filter of me data, normalized to 16 as 1
//Bit 27:24        reg_me_hlpf_coef_1        // unsigned ,    RW, default = 4  coef of horizontal low-pass filter of me data, normalized to 16 as 1
//Bit 23:20        reg_me_hlpf_coef_2        // unsigned ,    RW, default = 4  coef of horizontal low-pass filter of me data, normalized to 16 as 1
//Bit 19:16        reg_me_hlpf_coef_3        // unsigned ,    RW, default = 4  coef of horizontal low-pass filter of me data, normalized to 16 as 1
//Bit 15:12        reg_me_hlpf_coef_4        // unsigned ,    RW, default = 2  coef of horizontal low-pass filter of me data, normalized to 16 as 1
//Bit 11: 8        reg_me_vlpf_coef_0        // unsigned ,    RW, default = 2  coef of vertical low-pass filter of me data, normalized to 8 as 1
//Bit  7: 4        reg_me_vlpf_coef_1        // unsigned ,    RW, default = 4  coef of vertical low-pass filter of me data, normalized to 8 as 1
//Bit  3: 0        reg_me_vlpf_coef_2        // unsigned ,    RW, default = 2  coef of vertical low-pass filter of me data, normalized to 8 as 1
#define FRC_ME_BB_PIX_ST                           0x1107
//Bit 31           reg_me_bb_mode            // unsigned ,    RW, default = 0  me part black bar mode for cur block, 0: based on pixel bb, 1: based on block bb; to check oob signal for S and T position, random Candidate position, current block position.
//Bit 30:28        reserved
//Bit 27:16        reg_me_bb_xyxy_0          // unsigned ,    RW, default = 0  me part black bar index x_st updated by firmware
//Bit 15:12        reserved
//Bit 11: 0        reg_me_bb_xyxy_1          // unsigned ,    RW, default = 0  me part black bar index y_st updated by firmware
#define FRC_ME_BB_PIX_ED                           0x1108
//Bit 31:28        reserved
//Bit 27:16        reg_me_bb_xyxy_2          // unsigned ,    RW, default = 959  me part black bar index x_ed updated by firmware, xsize/(2^prm_me->reg_me_dsx_scale) - 1;
//Bit 15:12        reserved
//Bit 11: 0        reg_me_bb_xyxy_3          // unsigned ,    RW, default = 539  me part black bar index y_ed updated by firmware, ysize/(2^prm_me->reg_me_dsy_scale) - 1;
#define FRC_ME_BB_BLK_ST                           0x1109
//Bit 31:26        reserved
//Bit 25:16        reg_me_bb_blk_xyxy_0      // unsigned ,    RW, default = 0  me part black bar block index x_st updated by firmware
//Bit 15:10        reserved
//Bit  9: 0        reg_me_bb_blk_xyxy_1      // unsigned ,    RW, default = 0  me part black bar block index y_st updated by firmware
#define FRC_ME_BB_BLK_ED                           0x110a
//Bit 31:26        reserved
//Bit 25:16        reg_me_bb_blk_xyxy_2      // unsigned ,    RW, default = 239  me part black bar index x_ed updated by firmware, (xsize/(2^prm_me.reg_me_dsx_scale))/prm_me.reg_me_blksize_x - 1;
//Bit 15:10        reserved
//Bit  9: 0        reg_me_bb_blk_xyxy_3      // unsigned ,    RW, default = 134  me part black bar index y_ed updated by firmware, (ysize/(2^prm_me.reg_me_dsy_scale))/prm_me.reg_me_blksize_y - 1;
#define FRC_ME_STAT_12R_HST                        0x110b
//Bit 31:24        reg_gmv_rough_max_dst_th  // unsigned ,    RW, default = 0  rough max distance threshold for gmv calc.
//Bit 23:16        reg_gmv_finer_max_dst_th  // unsigned ,    RW, default = 3  finer max distance threshold for gmv calc.
//Bit 15:12        reserved
//Bit 11:10        reg_region_rp_use_neighbor_gmv_mode // unsigned ,    RW, default = 2  mode of use region rp gmv, 0: self-region 1: check neighbor region when self-region is invalid, 2: check 4 region rp gmv
//Bit  9: 0        reg_me_stat_region_hstart // unsigned ,    RW, default = 0  me statistic region horizontal start, updated by fw
#define FRC_ME_STAT_12R_H01                        0x110c
//Bit 31:26        reserved
//Bit 25:16        reg_me_stat_region_hend_0 // unsigned ,    RW, default = 59  me statistic region horizontal end0, relative to hstart, updated by fw
//Bit 15:10        reserved
//Bit  9: 0        reg_me_stat_region_hend_1 // unsigned ,    RW, default = 118  me statistic region horizontal end1, relative to hstart, updated by fw
#define FRC_ME_STAT_12R_H23                        0x110d
//Bit 31:26        reserved
//Bit 25:16        reg_me_stat_region_hend_2 // unsigned ,    RW, default = 177  me statistic region horizontal end2, relative to hstart, updated by fw
//Bit 15:10        reserved
//Bit  9: 0        reg_me_stat_region_hend_3 // unsigned ,    RW, default = 239  me statistic region horizontal end3, relative to hstart, updated by fw
#define FRC_ME_STAT_12R_V0                         0x110e
//Bit 31:26        reserved
//Bit 25:16        reg_me_stat_region_vstart // unsigned ,    RW, default = 0  me statistic region vertical start, updated by fw
//Bit 15:10        reserved
//Bit  9: 0        reg_me_stat_region_vend_0 // unsigned ,    RW, default = 44  me statistic region vertical end0, relative to vstart, updated by fw
#define FRC_ME_STAT_12R_V1                         0x110f
//Bit 31:26        reserved
//Bit 25:16        reg_me_stat_region_vend_1 // unsigned ,    RW, default = 88  me statistic region vertical end1, relative to vstart, updated by fw
//Bit 15:10        reserved
//Bit  9: 0        reg_me_stat_region_vend_2 // unsigned ,    RW, default = 134  me statistic region vertical end2, relative to vstart, updated by fw
#define FRC_ME_STAT_NEW_REGION                     0x1110
//Bit 31:26        reserved
//Bit 25:22        reg_me_region_fb_xnum     // unsigned ,    RW, default = 6  me statistic region horizontal number
//Bit 21:18        reg_me_region_fb_ynum     // unsigned ,    RW, default = 4  me statistic region vertical number
//Bit 17:16        reg_me_region_fb_loop_sel // unsigned ,    RW, default = 3  me statistic region for pf loop or pc_phs loop. 0: pc_phs,1: cn, 2:nc, 3:pf
//Bit 15: 8        reg_me_region_fb_xsize    // unsigned ,    RW, default = 34  me statistic region horizontal height for each region
//Bit  7: 0        reg_me_region_fb_ysize    // unsigned ,    RW, default = 40  me statistic region vertical width for each region
#define FRC_ME_RPD_ADD_CANDIDATES                  0x1111
//Bit 31:24        reserved
//Bit 23:20        reg_me_phs_rp_dil_cnt_th  // unsigned ,    RW, default = 3  threshold of phase loop rp flg dilation cnt
//Bit 19:17        reserved
//Bit 16           reg_me_rpdb_en_fs         // unsigned ,    RW, default = 1  1: enable fs candidate even if fs_en_flag = 1
//Bit 15           reg_me_rpd0_en_fs         // unsigned ,    RW, default = 0  1: enable fs candidate if rpd_flg = 0
//Bit 14           reg_me_rpd1_en_fs         // unsigned ,    RW, default = 0  1: enable fs candidate even if rpd_flg = 1
//Bit 13:12        reg_me_phs_rp_flg_mode    // unsigned ,    RW, default = 0  selection mode of phase loop rp flg , 0: none, 1: p and c 2:p or c
//Bit 11           reg_me_rpd_penalty_gmv_en // unsigned ,    RW, default = 1  1: enable special penalty for gmv at rpd==1 case.
//Bit 10           reg_me_rpd_penalty_st_en  // unsigned ,    RW, default = 1  1: enable special penalty for S and T at rpd==1 case.
//Bit  9           reg_me_fs2vp_sel_0        // unsigned ,    RW, default = 0  fs_ball signal to vp. 0: use bv flag.  1: use current block flag.
//Bit  8           reg_me_fs2vp_sel_1        // unsigned ,    RW, default = 0  fs_rpd0 signal to vp. 0: use bv flag.  1: use current block flag.
//Bit  7           reg_me_en_fs_sel_0        // unsigned ,    RW, default = 1  rpd0_en_fs_candidate for rp_flg.     1 means only rp_flg==0      will be possibly to set rpd0_en_fs_candidate to be 1.
//Bit  6           reg_me_en_fs_sel_1        // unsigned ,    RW, default = 1  rpd0_en_fs_candidate for flat_flg.   1 means only flat_flg==0    will be possibly to set rpd0_en_fs_candidate to be 1.
//Bit  5           reg_me_en_fs_sel_2        // unsigned ,    RW, default = 1  rpd0_en_fs_candidate for line_flg.   1 means only line_flg==0    will be possibly to set rpd0_en_fs_candidate to be 1.
//Bit  4           reg_me_en_fs_sel_3        // unsigned ,    RW, default = 1  rpd0_en_fs_candidate for hard_ab_flg.1 means only hard_ab_flg==0 will be possibly to set rpd0_en_fs_candidate to be 1.
//Bit  3           reg_me_low_upd_sel_0      // unsigned ,    RW, default = 1  rpd_low_upd for rp_flg.      1 means: if rp_flg==1,      will set rpd_low_upd to be 1.
//Bit  2           reg_me_low_upd_sel_1      // unsigned ,    RW, default = 0  rpd_low_upd for flat_flg.    1 means: if flat_flg==1,    will set rpd_low_upd to be 1.
//Bit  1           reg_me_low_upd_sel_2      // unsigned ,    RW, default = 0  rpd_low_upd for line_flg.    1 means: if line_flg==1,    will set rpd_low_upd to be 1.
//Bit  0           reg_me_low_upd_sel_3      // unsigned ,    RW, default = 0  rpd_low_upd for hard_ab_flg. 1 means: if hard_ab_flg==1, will set rpd_low_upd to be 1.
#define FRC_ME_BVSEL_GROUP_THX                     0x1112
//Bit 31:28        reserved
//Bit 27:16        reg_me_mvx_var_th0        // unsigned ,    RW, default = 64  threshold 0 of the curv   (change name)
//Bit 15: 8        reg_me_mvx_var_gain0      // unsigned ,    RW, default = 4  gain of mvx_var less than or equal th0  (TBC, changed from ppt)
//Bit  7: 0        reg_me_mvx_var_gain1      // unsigned ,    RW, default = 16  gain of mvx_var more than or equal th1
#define FRC_ME_BVSEL_GROUP_THY                     0x1113
//Bit 31:28        reserved
//Bit 27:16        reg_me_mvy_var_th0        // unsigned ,    RW, default = 64  threshold 0 of the curv   (change name)
//Bit 15: 8        reg_me_mvy_var_gain0      // unsigned ,    RW, default = 4  gain of mvx_var less than or equal th0  (TBC, changed from ppt)
//Bit  7: 0        reg_me_mvy_var_gain1      // unsigned ,    RW, default = 16  gain of mvx_var more than or equal th1
#define FRC_ME_BB_HANDLE                           0x1114
//Bit 31:30        reserved
//Bit 29:26        reg_me_oob_movinside_x_ofst_th // unsigned ,    RW, default = 4  the threshold x ofst if current block is out of boundary or black bar.
//Bit 25:22        reg_me_oob_movinside_y_ofst_th // unsigned ,    RW, default = 4  the threshold y ofst if current block is out of boundary or black bar.
//Bit 21:18        reg_me_oob_movinside_x_ofst_th1 // unsigned ,    RW, default = 4  the threshold x ofst if current block is out of boundary or black bar.
//Bit 17:14        reg_me_oob_movinside_y_ofst_th1 // unsigned ,    RW, default = 4  the threshold y ofst if current block is out of boundary or black bar.
//Bit 13           reg_me_oob_movinside_mode // unsigned ,    RW, default = 1  enable signal to move inside if current block is out of boundary or black bar.
//Bit 12           reg_me_curblk_oob_force_zmv // unsigned ,    RW, default = 1  enable signal to force final bv to be zero if the current block is oob, default =1; work with reg_me_bb_mode.
//Bit 11           reg_me_obmewin_oob_movinside // unsigned ,    RW, default = 1  enable signal to move obme sadwin(pre and cur) coordinate inside the blackbar if the part of the sadwin data is oob. used in phase_bb_handle2.
//Bit 10           reg_me_obmewin_randcmv_oob_movinside // unsigned ,    RW, default = 0  enable signal to move obme sadwin(pre and cur) coordinate of random cmv inside inside the blackbar if the part of random cmv sadwin data is oob. used in phase_bb_handle2.
//Bit  9           reg_me_cand_oob_set_invalid // unsigned ,    RW, default = 1  enable signal to set this candidate invalid if candidate(S and T or random) block is oob, default =1; work with reg_me_bb_mode.
//Bit  8           reg_me_randcmv_oob_use_t0 // unsigned ,    RW, default = 1  enable signal use t0(temporal BV of current block)+random if random candidate is oob, default =1 ;
//Bit  7: 0        reg_me_blkoob_pixthrd     // unsigned ,    RW, default = 6  number of pixels out of black bar threshold to decide if current block is out of boundary or black bar. valid only with reg_me_bb_mode==0. to check oob signal for S and T position, random Candidate position, current block position.
#define FRC_ME_BVSEL_GROUP_EN                      0x1115
//Bit 31:25        reserved
//Bit 24           reg_me_bv_group_adp_en    // unsigned ,    RW, default = 1  enable adaptive threshold of mvdiff if mvs belong to the same group (similar mvs)
//Bit 23:18        reserved
//Bit 17           reg_me_adp_mv_thd_mod     // unsigned ,    RW, default = 0  of adaptive mv threshold
//Bit 16           reg_me_mv_var_mod         // unsigned ,    RW, default = 0  mv(x/y) var mode of mvdiff if mvs belong to the same group (similar mvs)
//Bit 15:12        reg_me_oob_movinside_x_ofst_th2 // unsigned ,    RW, default = 0  the threshold x ofst if current block is out of boundary or black bar.
//Bit 11: 8        reg_me_oob_movinside_y_ofst_th2 // unsigned ,    RW, default = 0  the threshold y ofst if current block is out of boundary or black bar.
//Bit  7: 4        reg_me_mvx_var_thn        // unsigned ,    RW, default = 8  mvx_var threshold1 = th0 + 2^thn to get the th1 of the curv
//Bit  3: 0        reg_me_mvy_var_thn        // unsigned ,    RW, default = 8  mvx_var threshold1 = th0 + 2^thn to get the th1 of the curv
#define FRC_ME_CAD_ZGMV_EN_0                       0x1116
//Bit 31:24        reg_me_penalty_zmv_0      // unsigned ,    RW, default = 18  static penalty of zmv
//Bit 23:16        reg_me_penalty_gmv_0      // unsigned ,    RW, default = 60  static penalty of gmv
//Bit 15: 2        reserved
//Bit  1           reg_me_addzmv_en_0        // unsigned ,    RW, default = 1  enable to add zmv into candidate list, 0 do not add zmv, 1 add zmv
//Bit  0           reg_me_addgmv_en_0        // unsigned ,    RW, default = 0  enable to add gmv into candidate list, 0 do not add gmv, 1 add gmv
#define FRC_ME_CAD_ZGMV_EN_1                       0x1117
//Bit 31:24        reg_me_penalty_zmv_1      // unsigned ,    RW, default = 18  static penalty of zmv
//Bit 23:16        reg_me_penalty_gmv_1      // unsigned ,    RW, default = 60  static penalty of gmv
//Bit 15: 2        reserved
//Bit  1           reg_me_addzmv_en_1        // unsigned ,    RW, default = 1  enable to add zmv into candidate list, 0 do not add zmv, 1 add zmv
//Bit  0           reg_me_addgmv_en_1        // unsigned ,    RW, default = 0  enable to add gmv into candidate list, 0 do not add gmv, 1 add gmv
#define FRC_ME_CAD_ZGMV_EN_2                       0x1118
//Bit 31:24        reg_me_penalty_zmv_2      // unsigned ,    RW, default = 18  static penalty of zmv
//Bit 23:16        reg_me_penalty_gmv_2      // unsigned ,    RW, default = 60  static penalty of gmv
//Bit 15: 2        reserved
//Bit  1           reg_me_addzmv_en_2        // unsigned ,    RW, default = 1  enable to add zmv into candidate list, 0 do not add zmv, 1 add zmv
//Bit  0           reg_me_addgmv_en_2        // unsigned ,    RW, default = 0  enable to add gmv into candidate list, 0 do not add gmv, 1 add gmv
#define FRC_ME_GCV_EN                              0x1119
//Bit 31            reserved
//Bit 30           reg_me_glb_clr_r_sad_en   // unsigned ,    RW, default = 0  control for global clear v-buffer sad
//Bit 29           reg_me_glb_clr_r_t_sad_en // unsigned ,    RW, default = 1  control for global clear v-buffer t_sad
//Bit 28           reg_me_glb_clr_r_apl_en   // unsigned ,    RW, default = 0  control for global clear v-buffer apl
//Bit 27           reg_me_glb_clr_r_stable_en // unsigned ,    RW, default = 0  control for global clear v-buffer mv stable
//Bit 26           reg_me_glb_clr_r_detail_en // unsigned ,    RW, default = 1  control for global clear v-buffer detail
//Bit 25           reg_me_glb_clr_r_gmv_detail_en // unsigned ,    RW, default = 0  control for global clear v-buffer gmv_detail
//Bit 24           reg_me_glb_clr_r_film_c_en // unsigned ,    RW, default = 0  control for global clear v-buffer film_c
//Bit 23           reg_me_glb_clr_gmv_eq0_en // unsigned ,    RW, default = 1  enable gmv almost equal 0 for global clear v-buffer
//Bit 22           reg_me_glb_clr_t_consis_en // unsigned ,    RW, default = 0  enable temporal consistence for global clear v-buffer
//Bit 21           reg_me_glb_clr_detail_h_en // unsigned ,    RW, default = 1  enable detail horz for global clear v-buffer
//Bit 20           reg_me_glb_clr_detail_v_en // unsigned ,    RW, default = 1  enable detail horz for global clear v-buffer
//Bit 19           reg_me_glb_clr_detail_hv_en // unsigned ,    RW, default = 1  enable detail horz and vertical for global clear v-buffer
//Bit 18           reg_me_glb_clr_scn_chg_en // unsigned ,    RW, default = 1  enable scene change for global clear v-buffer
//Bit 17           reg_me_scn_chg_flg        // unsigned ,    RW, default = 0  scene change flag for global clear v-buffer, updated by fireware
//Bit 16           reg_me_glb_clr_top_en     // unsigned ,    RW, default = 0  top enable signal for global clear v-buffer.
//Bit 15: 8        reserved
//Bit  7: 2        reserved
//Bit  1           reg_me_glb_clr_bypass_mc_en // unsigned ,    RW, default = 0  enable bypass mc for clear v-buffer
//Bit  0           reg_me_glb_clr_force_en   // unsigned ,    RW, default = 0  force enable clear v_buffer
#define FRC_ME_GCV_STEP                            0x111a
//Bit 31:24        reg_me_bypass_mc_hold_time // unsigned ,    RW, default = 10  the hold frames in bypass mc
//Bit 23:21        reserved
//Bit 20           reg_me_glb_clr_dec_en     // unsigned ,    RW, default = 0  enable decrease mv for global clear v-buffer
//Bit 19:16        reg_me_glb_clr_dec_stp    // unsigned ,    RW, default = 1  decrease mv step for global clear v-buffer
//Bit 15: 8        reg_me_glb_clr_st_ofrm_idx // unsigned ,    RW, default = 5  start no. of output frame index for global clear v-buffer
//Bit  7: 6        reserved
//Bit  5: 0        reg_me_glb_clr_apl_gain0  // unsigned ,    RW, default = 6  apl gain0 for apl of global clear v-buffer
#define FRC_ME_GCV_APLGAIN                         0x111b
//Bit 31:30        reserved
//Bit 29:24        reg_me_glb_clr_apl_gain1  // unsigned ,    RW, default = 12  apl gain1 for apl of global clear v-buffer
//Bit 23:22        reserved
//Bit 21:16        reg_me_glb_clr_apl_gain2  // unsigned ,    RW, default = 18  apl gain2 for apl of global clear v-buffer
//Bit 15: 8        reg_me_glb_clr_apl_gain_th0 // unsigned ,    RW, default = 30  apl threshold0 for apl gain for apl of global clear v-buffer
//Bit  7: 4        reg_me_glb_clr_apl_gain_th1 // unsigned ,    RW, default = 7  apl threshold1 for apl gain for apl of global clear v-buffer, th0 + 2^th1
//Bit  3: 0        reg_me_glb_clr_apl_gain_th2 // unsigned ,    RW, default = 6  apl threshold2 for apl gain for apl of global clear v-buffer, th0 + 2^th1 + 2^th2
#define FRC_ME_GCV_SAD                             0x111c
//Bit 31:30        reserved
//Bit 29:28        reg_me_glb_clr_apl_sel    // unsigned ,    RW, default = 0  apl selection for global clear v-buffer
//Bit 27:26        reg_me_glb_clr_t_consis_sel // unsigned ,    RW, default = 0  t_consis selection for global clear v-buffer
//Bit 25:24        reg_me_glb_clr_sad_sel    // unsigned ,    RW, default = 0  sad selection for global clear v-buffer
//Bit 23:22        reserved
//Bit 21:20        reg_me_glb_clr_detail_sel // unsigned ,    RW, default = 0  dtl selection for global clear v-buffer
//Bit 19: 0        reg_me_glb_clr_sad        // unsigned ,    RW, default = 0  sad for global clear v-buffer
#define FRC_ME_GCV_T_APL                           0x111d
//Bit 31:20        reg_me_glb_clr_gmv_eq0    // unsigned ,    RW, default = 4  gmv almost equal 0 for global clear v-buffer
//Bit 19: 0        reg_me_glb_clr_t_sad      // unsigned ,    RW, default = 387306  temporal sad for global clear v-buffer
#define FRC_ME_GCV_T_CONSIS                        0x111e
//Bit 31: 0        reg_me_glb_clr_t_consis_th // unsigned ,    RW, default = 256  temporal consistence threshold for global clear v-buffer
#define FRC_ME_GCV_DETAIL_TH                       0x111f
//Bit 31: 0        reg_me_glb_clr_detail_th  // unsigned ,    RW, default = 4260495  detail count for global clear v-buffer.
#define FRC_ME_GCV_TIME                            0x1120
//Bit 31:24        reg_me_glb_clr_disable_time // unsigned ,    RW, default = 32  disable time for global clear v-buffer
//Bit 23:18        reg_me_glb_clr_hold_time  // unsigned ,    RW, default = 2  holding time for global clear v-buffer
//Bit 17: 0        reg_me_glb_clr_mv_stable_cnt // unsigned ,    RW, default = 8208  mv stable count for global clear v-buffer.
#define FRC_ME_GCV_GMV                             0x1121
//Bit 31:24        reg_me_glb_clr_t_apl      // unsigned ,    RW, default = 128  temporal apl for global clear v-buffer
//Bit 23: 0        reg_me_glb_clr_gmv        // unsigned ,    RW, default = 39  global motion for global clear v-buffer
#define FRC_ME_GCV_DTL_STH                         0x1122
//Bit 31: 0        reg_me_glb_clr_detail_s_th // unsigned ,    RW, default = 0  detail small threshold for global clear v-buffer
#define FRC_ME_GCV_DTL_HTH                         0x1123
//Bit 31: 0        reg_me_glb_clr_detail_h_th // unsigned ,    RW, default = 508821504  detail horz threshold for global clear v-buffer
#define FRC_ME_GCV_DTL_VTH                         0x1124
//Bit 31: 0        reg_me_glb_clr_detail_v_th // unsigned ,    RW, default = 3822526341  detail horz threshold for global clear v-buffer
#define FRC_ME_GCV_DTL_H2TH                        0x1125
//Bit 31: 0        reg_me_glb_clr_detail_h2_th // unsigned ,    RW, default = 231357874  detail horz threshold for global clear v-buffer
#define FRC_ME_GCV_DTL_V2TH                        0x1126
//Bit 31: 0        reg_me_glb_clr_detail_v2_th // unsigned ,    RW, default = 0  detail vertical threshold for global clear v-buffer
#define FRC_ME_RPD_EN                              0x1127
//Bit 31           reg_me_rpd_cn_en          // unsigned ,    RW, default = 0  enable repeated pattern detection for cn loop
//Bit 30           reg_me_rpd_nc_en          // unsigned ,    RW, default = 0  enable repeated pattern detection for nc loop
//Bit 29           reg_me_rpd_max_sad_sel    // unsigned ,    RW, default = 0  for CrosSAD.useless for chip. max sad selection for repeated pattern search, 0: max auto sad, 1: max cross sad
//Bit 28           reg_me_rpd_flg_erode_en   // unsigned ,    RW, default = 0  enable repeated pattern flag erosion
//Bit 27           reg_me_rpd_flg_refine_en  // unsigned ,    RW, default = 1  enable repeated pattern flag refinement
//Bit 26:24        reg_me_rpd_flg_refine_cnt_th // unsigned ,    RW, default = 4  refine threshold.
//Bit 23:22        reg_me_rpd_flg_refine_bdy // unsigned ,    RW, default = 0  boundary processing.
//Bit 21           reg_me_rpd_flg_refine_con_0 // unsigned ,    RW, default = 1  rpd refine process option
//Bit 20           reg_me_rpd_flg_refine_con_1 // unsigned ,    RW, default = 0  rpd refine process option
//Bit 19           reg_me_rpd_flg_refine_con_2 // unsigned ,    RW, default = 0  rpd refine process option
//Bit 18           reg_me_rpd_flg_refine_con_3 // unsigned ,    RW, default = 0  rpd refine process option
//Bit 17           reg_me_rpd_flg_refine_con_4 // unsigned ,    RW, default = 0  rpd refine process option
//Bit 16           reg_me_rpd_flg_refine_con_5 // unsigned ,    RW, default = 0  rpd refine process option
//Bit 15           reg_me_rpd_flg_dialate_en // unsigned ,    RW, default = 1  enable repeated pattern flag dilation
//Bit 14: 8        reg_me_fs_lwidth_col_chk_max_th // unsigned ,    RW, default = 8  for type_summary_fs_detect, lwidth_chk comparison threshold. ME_FS_RNG_Y/2;
//Bit  7: 0        reg_me_fs_lwidth_row_chk_max_th // unsigned ,    RW, default = 10  for type_summary_fs_detect, lwidth_chk comparison threshold. ME_FS_RNG_X/2;
#define FRC_ME_RPD_FS_POST                         0x1128
//Bit 31:28        reg_me_fs_pit_max_blend_coef // unsigned ,    RW, default = 0  blend coefficient of pit and max_sad
//Bit 27:24        reg_me_fs_low_sad_th_gain // unsigned ,    RW, default = 8  gain to low_sad_th
//Bit 23:20        reg_me_fs_ero_cnt_th      // unsigned ,    RW, default = 1  threshold of erosion to fs_en_fine_flag
//Bit 19:16        reg_me_fs_dil_cnt_th      // unsigned ,    RW, default = 3  threshold of dilation to fs_en_fine_flag
//Bit 15:12        reg_me_fs_refine_ball_cnt_th // unsigned ,    RW, default = 1  threshold of ball cnt to refine fs_en_raw_flag
//Bit 11           reg_me_fs_refine_en       // unsigned ,    RW, default = 0  enable signal for refine to fs_en_raw_flag
//Bit 10           reg_me_fs_ero_en          // unsigned ,    RW, default = 0  enable signal for erosion to fs_en_fine_flag
//Bit  9           reg_me_fs_dil_en          // unsigned ,    RW, default = 0  enable signal for dilation to fs_en_fine_flag
//Bit  8           reg_me_fs_use_avg_sad_for_pit // unsigned ,    RW, default = 0  enable signal of use average sad for cal fs pit deep
//Bit  7: 4        reg_me_fs_h_v_prj_length_rate // unsigned ,    RW, default = 8  the rate of prj_length_h and prj_length_v
//Bit  3: 0        reg_me_fs_d0_1_prj_length_rate // unsigned ,    RW, default = 8  the rate of prj_length_d0 and prj_length_d1
#define FRC_ME_RPD_NEW_1                           0x1129
//Bit 31:28        reserved
//Bit 27:24        reg_me_rpd_type3_adp_th3_gain // unsigned ,    RW, default = 4  gain to type three adp th2
//Bit 23:20        reg_me_rpd_hard_ab_pit_gain // unsigned ,    RW, default = 8  gain to hard ab pit
//Bit 19:16        reg_me_rpd_type3_adp_th2_gain // unsigned ,    RW, default = 4  gain to type three adp th2
//Bit 15:12        reg_me_rpd_type2_high_sad_th_gain // unsigned ,    RW, default = 12  gain to type two high sad th
//Bit 11: 8        reg_me_rpd_type2_low_sad_th_gain // unsigned ,    RW, default = 4  gain to type two low sad th
//Bit  7: 4        reg_me_rpd_type1_pit_gain // unsigned ,    RW, default = 8  gain to type one pit
//Bit  3: 1        reserved
//Bit  0           reg_me_rpd_use_avg_sad_for_pit // unsigned ,    RW, default = 0  enable signal of use average sad for cal rpd pit deep
#define FRC_ME_RPD_MAXSAD_CLIP                     0x112a
//Bit 31:29        reserved
//Bit 28:16        reg_me_rpd_max_sad_clip   // unsigned ,    RW, default = 8191  max sad clipping threshold for repeated pattern search
//Bit 15:14        reserved
//Bit 13: 8        reg_me_rpd_pit_srch_rng   // unsigned ,    RW, default = 10  pit search range for repeated pattern search
//Bit  7: 0        reg_me_rpd_sad_core_th    // unsigned ,    RW, default = 4  sad coring threshold for repeated pattern search
#define FRC_ME_RPD_VALLEY_PEAK                     0x112b
//Bit 31:24        reg_me_rpd_max_valley_th  // unsigned ,    RW, default = 255  max valley threshold for repeated pattern search
//Bit 23:16        reg_me_rpd_min_valley_th  // unsigned ,    RW, default = 0  min valley threshold for repeated pattern search
//Bit 15: 8        reg_me_rpd_max_peak_th    // unsigned ,    RW, default = 255  max peak threshold for repeated pattern search
//Bit  7: 0        reg_me_rpd_min_peak_th    // unsigned ,    RW, default = 0  min peak threshold for repeated pattern search
#define FRC_ME_RPD_T1_FLAT                         0x112c
//Bit 31:28        reserved
//Bit 27:16        reg_me_rpd_t1_flat_th0    // unsigned ,    RW, default = 256  flat threshold0 cleaning false type one detection for repeated pattern search
//Bit 15: 8        reg_me_rpd_t1_flat_th1    // unsigned ,    RW, default = 6  flat threshold1 cleaning false type one detection for repeated pattern search
//Bit  7: 0        reg_me_rpd_t1_th          // unsigned ,    RW, default = 64  type one rp threshold for repeated pattern search
#define FRC_ME_RPD_T2_LHL                          0x112d
//Bit 31:24        reg_me_rpd_t2_lhl_th      // unsigned ,    RW, default = 12  type two lhl threshold for repeated pattern search
//Bit 23:16        reg_me_rpd_t2_lhlhl_th    // unsigned ,    RW, default = 4  type two lhlhl threshold for repeated pattern search
//Bit 15: 8        reserved
//Bit  7: 0        reg_me_rpd_t2_flat_th3    // unsigned ,    RW, default = 8  flat threshold3 cleaning false type two detection for repeated pattern search
#define FRC_ME_RPD_T2_FLAT                         0x112e
//Bit 31:20        reg_me_rpd_t2_flat_th0    // unsigned ,    RW, default = 256  flat threshold0 cleaning false type two detection for repeated pattern search
//Bit 19:12        reg_me_rpd_t2_flat_th1    // unsigned ,    RW, default = 6  flat threshold1 cleaning false type two detection for repeated pattern search
//Bit 11: 0        reg_me_rpd_t2_flat_th2    // unsigned ,    RW, default = 128  flat threshold2 cleaning false type two detection for repeated pattern search
#define FRC_ME_RPD_T3_FLAT                         0x112f
//Bit 31:30        reserved
//Bit 29:24        reg_me_rpd_t3_th          // unsigned ,    RW, default = 2  type three threshold for repeated pattern search, 8 is normalized as 1
//Bit 23:16        reg_me_rpd_t3_flat_th1    // unsigned ,    RW, default = 6  flat threshold1 cleaning false type three detection for repeated pattern search
//Bit 15:12        reserved
//Bit 11: 0        reg_me_rpd_t3_flat_th0    // unsigned ,    RW, default = 256  flat threshold0 cleaning false type three detection for repeated pattern search
#define FRC_ME_RPD_AUTO_FLAT                       0x1130
//Bit 31:28        reserved
//Bit 27:16        reg_me_rpd_auto_flat_th0  // unsigned ,    RW, default = 256  auto flat flag threshold0 for repeated pattern search
//Bit 15: 8        reserved
//Bit  7: 0        reg_me_rpd_auto_flat_th1  // unsigned ,    RW, default = 6  auto flat flag threshold0 for repeated pattern search
#define FRC_ME_RPD_VLINE                           0x1131
//Bit 31:24        reg_me_rpd_vline_wid_th   // unsigned ,    RW, default = 4  vertical line width threshold for repeated pattern search
//Bit 23:16        reg_me_rpd_vline_len_th   // unsigned ,    RW, default = 16  vertical line length threshold for repeated pattern search
//Bit 15: 8        reg_me_rpd_vline_act_len_th // unsigned ,    RW, default = 12  vertical line active length threshold for repeated pattern search
//Bit  7: 0        reg_me_rpd_vline_hv_ratio // unsigned ,    RW, default = 2  vertical line ratio for hor length v.s. ver length for repeated pattern search
#define FRC_ME_RPD_HLINE                           0x1132
//Bit 31:24        reg_me_rpd_hline_wid_th   // unsigned ,    RW, default = 4  horizonal line width threshold for repeated pattern search
//Bit 23:16        reg_me_rpd_hline_len_th   // unsigned ,    RW, default = 16  horizonal line length threshold for repeated pattern search
//Bit 15: 8        reg_me_rpd_hline_act_len_th // unsigned ,    RW, default = 12  horizonal line active length threshold for repeated pattern search
//Bit  7: 0        reg_me_rpd_hline_hv_ratio // unsigned ,    RW, default = 2  horizonal line ratio for ver length v.s. hor length for repeated pattern search
#define FRC_ME_RPD_DIRECTION                       0x1133
//Bit 31:24        reg_me_rpd_vdrt_lhl_r_th  // unsigned ,    RW, default = 32  lhl_r threshold for vertical direction for repeated pattern search
//Bit 23:16        reg_me_rpd_vdrt_lhl_c_th  // unsigned ,    RW, default = 4  lhl_c threshold for vertical direction for repeated pattern search
//Bit 15: 8        reg_me_rpd_hdrt_lhl_r_th  // unsigned ,    RW, default = 4  lhl_r threshold for horizontal direction for repeated pattern search
//Bit  7: 0        reg_me_rpd_hdrt_lhl_c_th  // unsigned ,    RW, default = 32  lhl_c threshold for horizontal direction for repeated pattern search
#define FRC_ME_RPD_HARD_AB                         0x1134
//Bit 31:16        reserved
//Bit 15: 8        reg_me_rpd_hard_ab_th_low // unsigned ,    RW, default = 2  hard ab deepness low threshold for horizontal direction for repeated pattern search, 8 is normalized as 1
//Bit  7: 0        reg_me_rpd_hard_ab_th_high // unsigned ,    RW, default = 6  hard ab deepness high threshold for horizontal direction for repeated pattern search, 8 is normalized as 1
#define FRC_ME_CAD_FS_EN                           0x1135
//Bit 31           reg_me_add_fs_cn_en       // unsigned ,    RW, default = 0  enable adding full search candidates for cn loop
//Bit 30           reg_me_add_fs_nc_en       // unsigned ,    RW, default = 0  enable adding full search candidates for nc loop
//Bit 29:16        reserved
//Bit 15:10        reserved
//Bit  9           reg_me_fs_src_flag_clear_en // unsigned ,    RW, default = 0  enable signal of clear fs_src_flag when me start
//Bit  8           reg_me_fs_src_flag_mode   // unsigned ,    RW, default = 0  mode of cmv fs src flag, 0: bv_type==MS_TYPE_FS, 1: bv src flag
//Bit  7: 0        reg_me_fs_sad_core_th     // unsigned ,    RW, default = 4  sad coring threshold for full search
#define FRC_ME_CAD_FS_PENALTY                      0x1136
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_fs_cn      // unsigned ,    RW, default = 160  penalty of full search candidates for cn loop each scan
//Bit  7: 0        reg_me_penalty_fs_nc      // unsigned ,    RW, default = 160  penalty of full search candidates for nc loop each scan
#define FRC_ME_CAD_PRJ_EN                          0x1137
//Bit 31:19        reserved
//Bit 18           reg_me_add_prj_en         // unsigned ,    RW, default = 0  enable adding projected mv for candidates, each scan
//Bit 17: 7        reserved
//Bit  6: 4        reg_mv_proj_blkx_ext      // unsigned ,    RW, default = 2  block x extend for mv project decision.ME pixel presion.
//Bit  3            reserved
//Bit  2: 0        reg_mv_proj_blky_ext      // unsigned ,    RW, default = 2  block y extend for mv project decision.ME pixel presion.
#define FRC_ME_CAD_PRJ_PENALTY                     0x1138
//Bit 31:24        reg_me_penalty_prj        // unsigned ,    RW, default = 60  projected mv penalty for candidates, each scan
//Bit 23:16        reserved
//Bit 15: 8        reg_me_penalty_p2p        // unsigned ,    RW, default = 48  projected mv pointed to each other penalty for candidates, each scan
//Bit  7: 0        reserved
#define FRC_ME_CAD_PRJ_GROUP                       0x1139
//Bit 31:24        reg_mv_proj_group_th      // unsigned ,    RW, default = 16  threshold of mvdiff if mvs belong to the same group.quarter pixel MV presion.
//Bit 23:16        reg_mv_proj_p2p_th        // unsigned ,    RW, default = 8  threshold of mvdiff if two mvs pointed to each other.quarter pixel MV presion.
//Bit 15: 8        reg_mv_proj_absmvx_th     // unsigned ,    RW, default = 3  threshold of abs mvx (more than or equal) for mv proj check
//Bit  7: 0        reg_mv_proj_absmvy_th     // unsigned ,    RW, default = 2  threshold of abs mvy (more than or equal) for mv proj check
#define FRC_ME_CAD_PRJ_GROUP_2                     0x113a
//Bit 31:24        reserved
//Bit 23:16        reg_mv_proj_fs_sad_th     // unsigned ,    RW, default = 255  threshold of fs src mv sad to decide if uni mv be proj to phs
//Bit 15           reg_mv_proj_chk_rp_flag_en1 // unsigned ,    RW, default = 0  enable signal 1 of check rp_flag when proj
//Bit 14           reg_mv_proj_chk_rp_flag_en0 // unsigned ,    RW, default = 0  enable signal 0 of check rp_flag when proj
//Bit 13           reg_mv_proj_chk_gmv_en    // unsigned ,    RW, default = 0  use gmv to check if prj mv is valid
//Bit 12           reg_mv_proj_gmv_invalid   // unsigned ,    RW, default = 0  gmv invalid signal for add prj mv candidate
//Bit 11: 8        reg_mv_proj_gmv_diff_th   // unsigned ,    RW, default = 4  threshold of differ of prj mv and gmv
//Bit  7: 0        reg_mv_proj_nofs_sad_th   // unsigned ,    RW, default = 255  threshold of no fs src mv sad to decide if uni mv be proj to phs
#define FRC_ME_GCV2_EN                             0x113b
//Bit 31:16        reserved
//Bit 15           reg_me_glb_clr2_top_en    // unsigned ,    RW, default = 0  top enable signal for global clear v-buffer2
//Bit 14           reg_me_glb_clr2_static_en // unsigned ,    RW, default = 0  control for global clear v-buffer2 static
//Bit 13           reg_me_glb_clr2_scn_chg_en // unsigned ,    RW, default = 0  control for global clear v-buffer2 scene change
//Bit 12           reg_me_glb_clr2_force_en  // unsigned ,    RW, default = 0  force enable clear v_buffer2
//Bit 11: 6        reg_me_glb_clr2_static_hold_time // unsigned ,    RW, default = 4  holding time for global clear v-buffer
//Bit  5: 0        reg_me_glb_clr2_scn_chg_hold_time // unsigned ,    RW, default = 5  holding time for global clear v-buffer
#define FRC_ME_GCV2_TH                             0x113c
//Bit 31: 8        reg_me_glb_clr2_static_th // unsigned ,    RW, default = 40  global motion for global clear v-buffer2
//Bit  7: 0        reg_me_glb_clr2_scn_chg_glbmot_ratio_th // unsigned ,    RW, default = 30  global motion ratio for scene change
#define FRC_ME_PROJ_CHK                            0x113d
//Bit 31:24        reserved
//Bit 23           reg_mv_en_proj_sel_0      // unsigned ,    RW, default = 1  rpd0_en_prj_candidate for rp_flg.     1 means only rp_flg==0      will be possibly to set rpd0_en_prj_candidate to be 1.
//Bit 22           reg_mv_en_proj_sel_1      // unsigned ,    RW, default = 1  rpd0_en_prj_candidate for flat_flg.   1 means only flat_flg==0    will be possibly to set rpd0_en_prj_candidate to be 1.
//Bit 21           reg_mv_en_proj_sel_2      // unsigned ,    RW, default = 1  rpd0_en_prj_candidate for line_flg.   1 means only line_flg==0    will be possibly to set rpd0_en_prj_candidate to be 1.
//Bit 20           reg_mv_en_proj_sel_3      // unsigned ,    RW, default = 1  rpd0_en_prj_candidate for hard_ab_flg.1 means only hard_ab_flg==0 will be possibly to set rpd0_en_prj_candidate to be 1.
//Bit 19:11        reserved
//Bit 10           reg_mv_proj_chk_fs_en     // unsigned ,    RW, default = 0  enable prj when fs_en_flag = 1
//Bit  9: 6        reserved
//Bit  5           reg_mv_proj_chk_rpd0_en   // unsigned ,    RW, default = 1  enable prj when rpd_flg = 0
//Bit  4: 1        reserved
//Bit  0           reg_mv_proj_chk_fs_rpd0_en // unsigned ,    RW, default = 0  enable fs or rpd check for prj
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/me_top_regs0.h
//
//
// Reading file:  ./frc_inc/me_top_reg_hw.h
//
// synopsys translate_off
// synopsys translate_on
//======================================================================================
//== me_top
//======================================================================================
#define FRC_ME_TOP_CTRL                            0x1180
//Bit 31:18        reserved
//Bit    17        reg_me_rpd_cp_filmchg_en // unsigned ,    RW , default = 0     1:rpd_cp_use0 when film_mode_change
//Bit    16        reg_me_rocnt_latch       // unsigned ,    RW , default = 1     1:ro_cnt use frm_end latch 0:real-time cnt
//Bit 15:8         reg_me_scan_ofst         // unsigned ,    RW , default = 8'h25 two scan ofst, 2row,5col default
//Bit  7:0         reg_me_mepp_bypass       // unsigned ,    RW , default = 0     me_post_proc bypss, {lmt,smob,smo3,smo2,smo1,smo0,e2e,acdc}
#define FRC_ME_GCLK_CTRL0                          0x1181
//Bit 31:0         reg_me_gclk_ctrl0       // unsigned ,    RW , default = 0 clk gate ctrl
#define FRC_ME_GCLK_CTRL1                          0x1182
//Bit 31:0         reg_me_gclk_ctrl1       // unsigned ,    RW , default = 0 clk gate ctrl
#define FRC_ME_GCLK_CTRL2                          0x1183
//Bit 31:0         reg_me_gclk_ctrl2       // unsigned ,    RW , default = 0 clk gate ctrl
#define FRC_ME_RO_FRM_SIZE                         0x1188
//Bit 31:24     reserved
//Bit 23:12     ro_frm_hsize     // unsigned ,    RO, default = 0  frame pixel hsize
//Bit 11:0      ro_frm_vsize     // unsigned ,    RO, default = 0  frame pixel vsize
#define FRC_ME_RO_BLK_SIZE                         0x1189
//Bit 31:24     reserved
//Bit 23:12     ro_me_blk_hsize  // unsigned ,    RO, default = 0  me block hsize
//Bit 11:0      ro_me_blk_vsize  // unsigned ,    RO, default = 0  me block vsize
#define FRC_ME_RO_BLK_HME_SIZE                     0x118a
//Bit 31:23     reserved
//Bit 22:12     ro_hme_blk_hsize // unsigned ,    RO, default = 0   hme block hsize
//Bit 11        reserved
//Bit 10:0      ro_hme_blk_vsize // unsigned ,    RO, default = 0   hme block vsize
#define FRC_ME_RO_PIX_IN_CNT                       0x118b
//Bit 31:23     reserved
//Bit 22:12     ro_me_curpix_in_col_cnt // unsigned ,    RO, default = 0 cur_pix input_col_cnt
//Bit 11        reserved
//Bit 10:0      ro_me_curpix_in_row_cnt // unsigned ,    RO, default = 0 cur_pix input_row_cnt
#define FRC_ME_RO_MV_IN_CNT                        0x118c
//Bit 31:22     reserved
//Bit 21:12     ro_me_phsmv_in_col_cnt // unsigned ,    RO, default = 0  phs_mv input_col_cnt
//Bit 11:10     reserved
//Bit 9 :0      ro_me_phsmv_in_row_cnt // unsigned ,    RO, default = 0  phs_mv input_row_cnt
#define FRC_ME_RO_MV_OUT_CNT                       0x118d
//Bit 31:24     ro_clr_vbuf_cnt         // unsigned ,    RO, default = 0  clr_vbuf hit cnt
//Bit 23:22     reserved
//Bit 21:12     ro_me_out_col_cnt       // unsigned ,    RO, default = 0  me_mv_out col_cnt
//Bit 11:10     reserved
//Bit 9 :0      ro_me_out_row_cnt       // unsigned ,    RO, default = 0  me_mv_out row_cnt
#define FRC_ME_RO_LBUF_DBGINFO                     0x118e
//Bit 31:0      ro_lbuf_dbginfo         // unsigned ,    RO, default = 0  me_lbuf hw_dbg_info
//======================================================================================
//== rpdfs
//======================================================================================
#define FRC_ME_RPD_FS_GCLK                         0x1190
//Bit 31:16        reserved
//Bit 15:0         reg_me_fsrpd_gclk_ctrl     // unsigned ,    RW, default = 0  fs_rpd gate clock ctrl
#define FRC_ME_RPD_HBLANK                          0x1191
//Bit 31:0         reg_me_rpd_hblank       // unsigned ,    RW, default = 2359332  rpd hblank
#define FRC_ME_RPD_DBG_DISP                        0x1192
//Bit 31          reg_me_rpd_dbg_disp_mid   // unsigned ,    RW, default = 1     rpd_dbg_path display mid
//Bit 30:16       reg_me_rpd_dbg_disp_ybofs // unsigned ,    RW, default = 0     rpd_dbg_path display ybofs
//Bit 15          reserved
//Bit 14:0        reg_me_rpd_dbg_disp_xbofs // unsigned ,    RW, default = 0     rpd_dbg_path display xbofs
//======================================================================================
//== cmv
//======================================================================================
#define FRC_ME_CMV_MAX_MV                          0x11a0
//Bit 31:28        reserved
//Bit 27:16        reg_me_cmv_max_mvx       // unsigned ,    RW, default = 511         cmv max_mvx
//Bit 15:11        reserved
//Bit 10:0         reg_me_cmv_max_mvy       // unsigned ,    RW, default = 160         cmv max_mvx
#define FRC_ME_CMV_CTRL                            0x11a1
//Bit 31           reg_me_cmv_rand_pulse    // unsigned ,    RW, default = 0         cmv_misc
//Bit 30:0         reg_me_cmv_ctrl          // unsigned ,    RW, default = 255       cmv_misc 10:max_mv_sel 7:fs_en 6:proj_en 5:zmv_en 4:gmv_en 3:hier_en 2:rand_en 1:st1_en 0:st0_en
#define FRC_HME_CMV_MAX_MV                         0x11a2
//Bit 31:28        reserved
//Bit 27:16        reg_hme_cmv_max_mvx // unsigned ,    RW, default = 511         cmv max_mvx
//Bit 15:11        reserved
//Bit 10:0         reg_hme_cmv_max_mvy // unsigned ,    RW, default = 160         cmv max_mvx
#define FRC_ME_RO_CMV_NUM0                         0x11a3
//Bit 31:16        ro_me_st1_num       // unsigned ,    RO, default = 0
//Bit 15:0         ro_me_st0_num       // unsigned ,    RO, default = 0
#define FRC_ME_RO_CMV_NUM1                         0x11a4
//Bit 31:16        ro_me_zmv0_num       // unsigned ,    RO, default = 0
//Bit 15:0         ro_me_st2_num        // unsigned ,    RO, default = 0
#define FRC_ME_RO_CMV_NUM2                         0x11a5
//Bit 31:16        ro_me_zmv2_num       // unsigned ,    RO, default = 0
//Bit 15:0         ro_me_zmv1_num       // unsigned ,    RO, default = 0
#define FRC_ME_RO_CMV_NUM3                         0x11a6
//Bit 31:16        ro_me_gmv1_num       // unsigned ,    RO, default = 0
//Bit 15:0         ro_me_gmv0_num       // unsigned ,    RO, default = 0
#define FRC_ME_RO_CMV_NUM4                         0x11a7
//Bit 31:16        ro_me_rnd0_num       // unsigned ,    RO, default = 0
//Bit 15:0         ro_me_gmv2_num       // unsigned ,    RO, default = 0
#define FRC_ME_RO_CMV_NUM5                         0x11a8
//Bit 31:16        ro_me_rnd2_num       // unsigned ,    RO, default = 0
//Bit 15:0         ro_me_rnd1_num       // unsigned ,    RO, default = 0
#define FRC_ME_RO_CMV_NUM6                         0x11a9
//Bit 31:16        ro_me_hmv1_num       // unsigned ,    RO, default = 0
//Bit 15:0         ro_me_hmv0_num       // unsigned ,    RO, default = 0
#define FRC_ME_RO_CMV_NUM7                         0x11aa
//Bit 31:16        ro_me_prj0_num       // unsigned ,    RO, default = 0
//Bit 15:0         ro_me_hmv2_num       // unsigned ,    RO, default = 0
#define FRC_ME_RO_CMV_NUM8                         0x11ab
//Bit 31:16        ro_me_fs2_num       // unsigned ,    RO, default = 0
//Bit 15:0         ro_me_fs1_num       // unsigned ,    RO, default = 0
#define FRC_ME_RO_CMV_NUM9                         0x11ac
//Bit 31:16        ro_me_inv1_num       // unsigned ,    RO, default = 0
//Bit 15:0         ro_me_inv0_num       // unsigned ,    RO, default = 0
#define FRC_ME_RO_CMV_NUM10                        0x11ad
//Bit 31:16        reserved
//Bit 15:0         ro_me_inv2_num       // unsigned ,    RO, default = 0
//======================================================================================
//== cbv
//======================================================================================
#define FRC_ME_CBV_GCLK_0                          0x11b0
//Bit 31:0         reg_me_cbv_gclk_ctrl0    // unsigned ,    RW, default = 0   cbv gate clock ctrl
#define FRC_ME_CBV_GCLK_1                          0x11b1
//Bit 31:0         reg_me_cbv_gclk_ctrl1    // unsigned ,    RW, default = 0  cbv gate clock ctrl
#define FRC_ME_CBV_MISC0                           0x11b2
//Bit 31           reg_me_stat_gmv_pulse    // unsigned ,    RW, default = 0       stat_gmv_pulse
//Bit 30:0         reg_me_cbv_misc0         // unsigned ,    RW, default = 0       cbv misc [2:0]:reg_me_force_mv_sft  [3]:reg_me_bb_type_bypas
#define FRC_ME_STAT_HW_GMV                         0x11b3
//Bit 31:26        reserved
//Bit 25           reg_me_stat_hw_gmv_inv    // unsigned ,    RW, default = 1     hw_rp_gmv invalid
//Bit 24:13        reg_me_stat_hw_gmv_mvy    // unsigned ,    RW, default = 0     hw_rp_gmv mvy
//Bit 12:0         reg_me_stat_hw_gmv_mvx    // unsigned ,    RW, default = 0     hw_rp_gmv mvx
#define FRC_ME_STAT_HW_RP_GMV0                     0x11b4
//Bit 31:26        reserved
//Bit 25           reg_me_hw_rp_gmv0_inv    // unsigned ,    RW, default = 1     hw_rp_gmv invalid
//Bit 24:13        reg_me_hw_rp_gmv0_mvy    // unsigned ,    RW, default = 0     hw_rp_gmv mvy
//Bit 12:0         reg_me_hw_rp_gmv0_mvx    // unsigned ,    RW, default = 0     hw_rp_gmv mvx
#define FRC_ME_STAT_HW_RP_GMV1                     0x11b5
//Bit 31:26        reserved
//Bit 25           reg_me_hw_rp_gmv1_inv    // unsigned ,    RW, default = 1     hw_rp_gmv invalid
//Bit 24:13        reg_me_hw_rp_gmv1_mvy    // unsigned ,    RW, default = 0     hw_rp_gmv mvy
//Bit 12:0         reg_me_hw_rp_gmv1_mvx    // unsigned ,    RW, default = 0     hw_rp_gmv mvx
#define FRC_ME_STAT_HW_RP_GMV2                     0x11b6
//Bit 31:26        reserved
//Bit 25           reg_me_hw_rp_gmv2_inv    // unsigned ,    RW, default = 1     hw_rp_gmv invalid
//Bit 24:13        reg_me_hw_rp_gmv2_mvy    // unsigned ,    RW, default = 0     hw_rp_gmv mvy
//Bit 12:0         reg_me_hw_rp_gmv2_mvx    // unsigned ,    RW, default = 0     hw_rp_gmv mvx
#define FRC_ME_STAT_HW_RP_GMV3                     0x11b7
//Bit 31:26        reserved
//Bit 25           reg_me_hw_rp_gmv3_inv    // unsigned ,    RW, default = 1     hw_rp_gmv invalid
//Bit 24:13        reg_me_hw_rp_gmv3_mvy    // unsigned ,    RW, default = 0     hw_rp_gmv mvy
//Bit 12:0         reg_me_hw_rp_gmv3_mvx    // unsigned ,    RW, default = 0     hw_rp_gmv mvx
#define FRC_ME_STAT_HW_RP_GMV4                     0x11b8
//Bit 31:26        reserved
//Bit 25           reg_me_hw_rp_gmv4_inv    // unsigned ,    RW, default = 1     hw_rp_gmv invalid
//Bit 24:13        reg_me_hw_rp_gmv4_mvy    // unsigned ,    RW, default = 0     hw_rp_gmv mvy
//Bit 12:0         reg_me_hw_rp_gmv4_mvx    // unsigned ,    RW, default = 0     hw_rp_gmv mvx
#define FRC_ME_STAT_HW_RP_GMV5                     0x11b9
//Bit 31:26        reserved
//Bit 25           reg_me_hw_rp_gmv5_inv    // unsigned ,    RW, default = 1     hw_rp_gmv invalid
//Bit 24:13        reg_me_hw_rp_gmv5_mvy    // unsigned ,    RW, default = 0     hw_rp_gmv mvy
//Bit 12:0         reg_me_hw_rp_gmv5_mvx    // unsigned ,    RW, default = 0     hw_rp_gmv mvx
#define FRC_ME_STAT_HW_RP_GMV6                     0x11ba
//Bit 31:26        reserved
//Bit 25           reg_me_hw_rp_gmv6_inv    // unsigned ,    RW, default = 1     hw_rp_gmv invalid
//Bit 24:13        reg_me_hw_rp_gmv6_mvy    // unsigned ,    RW, default = 0     hw_rp_gmv mvy
//Bit 12:0         reg_me_hw_rp_gmv6_mvx    // unsigned ,    RW, default = 0     hw_rp_gmv mvx
#define FRC_ME_STAT_HW_RP_GMV7                     0x11bb
//Bit 31:26        reserved
//Bit 25           reg_me_hw_rp_gmv7_inv    // unsigned ,    RW, default = 1     hw_rp_gmv invalid
//Bit 24:13        reg_me_hw_rp_gmv7_mvy    // unsigned ,    RW, default = 0     hw_rp_gmv mvy
//Bit 12:0         reg_me_hw_rp_gmv7_mvx    // unsigned ,    RW, default = 0     hw_rp_gmv mvx
#define FRC_ME_STAT_HW_RP_GMV8                     0x11bc
//Bit 31:26        reserved
//Bit 25           reg_me_hw_rp_gmv8_inv    // unsigned ,    RW, default = 1     hw_rp_gmv invalid
//Bit 24:13        reg_me_hw_rp_gmv8_mvy    // unsigned ,    RW, default = 0     hw_rp_gmv mvy
//Bit 12:0         reg_me_hw_rp_gmv8_mvx    // unsigned ,    RW, default = 0     hw_rp_gmv mvx
#define FRC_ME_STAT_HW_RP_GMV9                     0x11bd
//Bit 31:26        reserved
//Bit 25           reg_me_hw_rp_gmv9_inv    // unsigned ,    RW, default = 1     hw_rp_gmv invalid
//Bit 24:13        reg_me_hw_rp_gmv9_mvy    // unsigned ,    RW, default = 0     hw_rp_gmv mvy
//Bit 12:0         reg_me_hw_rp_gmv9_mvx    // unsigned ,    RW, default = 0     hw_rp_gmv mvx
#define FRC_ME_STAT_HW_RP_GMV10                    0x11be
//Bit 31:26        reserved
//Bit 25           reg_me_hw_rp_gmv10_inv    // unsigned ,    RW, default = 1     hw_rp_gmv invalid
//Bit 24:13        reg_me_hw_rp_gmv10_mvy    // unsigned ,    RW, default = 0     hw_rp_gmv mvy
//Bit 12:0         reg_me_hw_rp_gmv10_mvx    // unsigned ,    RW, default = 0     hw_rp_gmv mvx
#define FRC_ME_STAT_HW_RP_GMV11                    0x11bf
//Bit 31:26        reserved
//Bit 25           reg_me_hw_rp_gmv11_inv    // unsigned ,    RW, default = 1     hw_rp_gmv invalid
//Bit 24:13        reg_me_hw_rp_gmv11_mvy    // unsigned ,    RW, default = 0     hw_rp_gmv mvy
//Bit 12:0         reg_me_hw_rp_gmv11_mvx    // unsigned ,    RW, default = 0     hw_rp_gmv mvx
//==========================================
//NOTE:
//8'hc0  cant use,
//reserved for mevp_wrap_reg
//==========================================
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/me_top_reg_hw.h
//
//`include "hme_cmv_regs0.h"
// -----------------------------------------------
// REG_BASE:  FRC_ME_CMV0_APB_BASE = 0x13
// -----------------------------------------------
//
// Reading file:  ./frc_inc/me_cmv_regs0.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_ME_RPD_RAD_GAIN_CN                     0x1300
//Bit 31:17        reserved
//Bit 16           reg_me_rad_rpchk_cn_en    // unsigned ,    RW, default = 1  enable repeated pattern check in random MVs for cn loop
//Bit 15:13        reserved
//Bit 12: 8        reg_me_rad_rpchk_cn_xgain // unsigned ,    RW, default = 2  repeated pattern check x-direction gain in random MVs for cn loop, 16 is normalized as 1
//Bit  7: 5        reserved
//Bit  4: 0        reg_me_rad_rpchk_cn_ygain // unsigned ,    RW, default = 2  repeated pattern check y-direction gain in random MVs for cn loop, 16 is normalized as 1
#define FRC_ME_RPD_RAD_GAIN_NC                     0x1301
//Bit 31:17        reserved
//Bit 16           reg_me_rad_rpchk_nc_en    // unsigned ,    RW, default = 1  enable repeated pattern check in random MVs for nc loop
//Bit 15:13        reserved
//Bit 12: 8        reg_me_rad_rpchk_nc_xgain // unsigned ,    RW, default = 2  repeated pattern check x-direction gain in random MVs for nc loop, 16 is normalized as 1
//Bit  7: 5        reserved
//Bit  4: 0        reg_me_rad_rpchk_nc_ygain // unsigned ,    RW, default = 2  repeated pattern check y-direction gain in random MVs for nc loop, 16 is normalized as 1
#define FRC_ME_RPD_RAD_GAIN_PHS                    0x1302
//Bit 31:17        reserved
//Bit 16           reg_me_rad_rpchk_phs_en   // unsigned ,    RW, default = 1  enable repeated pattern check in random MVs for phase loop
//Bit 15:13        reserved
//Bit 12: 8        reg_me_rad_rpchk_phs_xgain // unsigned ,    RW, default = 2  repeated pattern check x-direction gain in random MVs for phase loop, 16 is normalized as 1
//Bit  7: 5        reserved
//Bit  4: 0        reg_me_rad_rpchk_phs_ygain // unsigned ,    RW, default = 2  repeated pattern check y-direction gain in random MVs for phase loop, 16 is normalized as 1
#define FRC_ME_RPD_PENALTY_GMV                     0x1303
//Bit 31:16        reserved
//Bit 15: 8        reg_me_rpd_penalty_gmv_cn // unsigned ,    RW, default = 12  penalty of gmv candidates for cn loop each scan if rp detected
//Bit  7: 0        reg_me_rpd_penalty_gmv_nc // unsigned ,    RW, default = 12  penalty of gmv candidates for nc loop each scan if rp detected
#define FRC_ME_ADD_HME_SAD                         0x1304
//Bit 31: 0        reserved
#define FRC_ME_BVSEL_GROUP_THXY                    0x1305
//Bit 31:24        reserved
//Bit 23:20        reg_me_mvxy_var_th0       // unsigned ,    RW, default = 12  mvxy_var threshold 0 of the curv   (change name)
//Bit 19:16        reg_me_mvxy_var_thn       // unsigned ,    RW, default = 5  mvxy_var threshold1 = th0 + 2^thn to get the th1 of the curv
//Bit 15: 8        reg_me_mvxy_var_gain0     // unsigned ,    RW, default = 4  gain of mvxy_var less than or equal th0  (TBC, changed from ppt)
//Bit  7: 0        reg_me_mvxy_var_gain1     // unsigned ,    RW, default = 16  gain of mvxy_var more than or equal th1
#define FRC_ME_CAD_SETS_SEL_0                      0x1306
//Bit 31:28        reg_me_add_sel_0_0        // unsigned ,    RW, default = 7  add cand sets, 0:S and T mv,10:S and T mv,1:zmv, 2: gmv, 3: rand mv, 4: prj mv, 5: fsmv, 6: hmv, 7: invalid;
//Bit 27:24        reg_me_add_sel_0_1        // unsigned ,    RW, default = 0  add cand sets,
//Bit 23:20        reg_me_add_sel_0_2        // unsigned ,    RW, default = 10  add cand sets,
//Bit 19:16        reg_me_add_sel_0_3        // unsigned ,    RW, default = 1  add cand sets,
//Bit 15:12        reg_me_add_sel_0_4        // unsigned ,    RW, default = 2  add cand sets,
//Bit 11: 8        reg_me_add_sel_0_5        // unsigned ,    RW, default = 3  add cand sets,
//Bit  7: 4        reg_me_add_sel_0_6        // unsigned ,    RW, default = 4  add cand sets,
//Bit  3: 0        reg_me_add_sel_0_7        // unsigned ,    RW, default = 5  add cand sets,
#define FRC_ME_CAD_ST_EN_0                         0x1307
//Bit 31:16        reserved
//Bit 15:10        reserved
//Bit  9           reg_me_add_s_t_en_0_0     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  8           reg_me_add_s_t_en_0_1     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  7           reg_me_add_s_t_en_0_2     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  6           reg_me_add_s_t_en_0_3     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  5           reg_me_add_s_t_en_0_4     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  4           reg_me_add_s_t_en_0_5     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  3           reg_me_add_s_t_en_0_6     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  2           reg_me_add_s_t_en_0_7     // unsigned ,    RW, default = 0  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  1           reg_me_add_s_t_en_0_8     // unsigned ,    RW, default = 0  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  0           reg_me_add_s_t_en_0_9     // unsigned ,    RW, default = 0  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
#define FRC_ME_CAD_ST0_0                           0x1308
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_s_t_0_0    // unsigned ,    RW, default = 44  static penalty for S and T
//Bit  7: 0        reg_me_penalty_s_t_0_1    // unsigned ,    RW, default = 44  static penalty for S and T
#define FRC_ME_CAD_ST1_0                           0x1309
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_s_t_0_2    // unsigned ,    RW, default = 56  static penalty for S and T
//Bit  7: 0        reg_me_penalty_s_t_0_3    // unsigned ,    RW, default = 40  static penalty for S and T
#define FRC_ME_CAD_ST2_0                           0x130a
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_s_t_0_4    // unsigned ,    RW, default = 56  static penalty for S and T
//Bit  7: 0        reg_me_penalty_s_t_0_5    // unsigned ,    RW, default = 42  static penalty for S and T
#define FRC_ME_CAD_ST3_0                           0x130b
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_s_t_0_6    // unsigned ,    RW, default = 44  static penalty for S and T
//Bit  7: 0        reg_me_penalty_s_t_0_7    // unsigned ,    RW, default = 0  static penalty for S and T
#define FRC_ME_CAD_ST4_0                           0x130c
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_s_t_0_8    // unsigned ,    RW, default = 0  static penalty for S and T
//Bit  7: 0        reg_me_penalty_s_t_0_9    // unsigned ,    RW, default = 0  static penalty for S and T
#define FRC_ME_CAD_RAD_EN_0                        0x130d
//Bit 31: 4        reserved
//Bit  3           reg_me_add_rad_en_0_0     // unsigned ,    RW, default = 1  enable to add rand candidate into candidate list, 0 do not add s0, 1 add s0
//Bit  2           reg_me_add_rad_en_0_1     // unsigned ,    RW, default = 1  enable to add rand candidate into candidate list, 0 do not add s0, 1 add s0
//Bit  1           reg_me_add_rad_en_0_2     // unsigned ,    RW, default = 0  enable to add rand candidate into candidate list, 0 do not add s0, 1 add s0
//Bit  0           reg_me_add_rad_en_0_3     // unsigned ,    RW, default = 0  enable to add rand candidate into candidate list, 0 do not add s0, 1 add s0
#define FRC_ME_CAD_RAD01_0                         0x130e
//Bit 31:28        reg_me_cmv_rad_pos_x_0_0  // signed ,    RW, default = -1  for random candidates position X
//Bit 27:24        reg_me_cmv_rad_pos_y_0_0  // signed ,    RW, default = -1  for random candidates position Y
//Bit 23:16        reg_me_penalty_rad_0_0    // unsigned ,    RW, default = 60  static penalty for random
//Bit 15:12        reg_me_cmv_rad_pos_x_0_1  // signed ,    RW, default = 1  for random candidates position X
//Bit 11: 8        reg_me_cmv_rad_pos_y_0_1  // signed ,    RW, default = -1  for random candidates position Y
//Bit  7: 0        reg_me_penalty_rad_0_1    // unsigned ,    RW, default = 114  static penalty for random
#define FRC_ME_CAD_RAD23_0                         0x130f
//Bit 31:28        reg_me_cmv_rad_pos_x_0_2  // signed ,    RW, default = 0  for random candidates position X
//Bit 27:24        reg_me_cmv_rad_pos_y_0_2  // signed ,    RW, default = 0  for random candidates position Y
//Bit 23:16        reg_me_penalty_rad_0_2    // unsigned ,    RW, default = 0  static penalty for random
//Bit 15:12        reg_me_cmv_rad_pos_x_0_3  // signed ,    RW, default = 0  for random candidates position X
//Bit 11: 8        reg_me_cmv_rad_pos_y_0_3  // signed ,    RW, default = 0  for random candidates position Y
//Bit  7: 0        reg_me_penalty_rad_0_3    // unsigned ,    RW, default = 0  static penalty for random
#define FRC_ME_CAD_RAD0_MM_0                       0x1310
//Bit 31:28        reg_me_rad_x1_min_0_0     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 27:24        reg_me_rad_y1_min_0_0     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 23:20        reg_me_rad_x2_min_0_0     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 19:16        reg_me_rad_y2_min_0_0     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 15:12        reg_me_rad_x1_max_0_0     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit 11: 8        reg_me_rad_y1_max_0_0     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  7: 4        reg_me_rad_x2_max_0_0     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  3: 0        reg_me_rad_y2_max_0_0     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
#define FRC_ME_CAD_RAD1_MM_0                       0x1311
//Bit 31:28        reg_me_rad_x1_min_0_1     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 27:24        reg_me_rad_y1_min_0_1     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 23:20        reg_me_rad_x2_min_0_1     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 19:16        reg_me_rad_y2_min_0_1     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 15:12        reg_me_rad_x1_max_0_1     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit 11: 8        reg_me_rad_y1_max_0_1     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  7: 4        reg_me_rad_x2_max_0_1     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  3: 0        reg_me_rad_y2_max_0_1     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
#define FRC_ME_CAD_RAD2_MM_0                       0x1312
//Bit 31:28        reg_me_rad_x1_min_0_2     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 27:24        reg_me_rad_y1_min_0_2     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 23:20        reg_me_rad_x2_min_0_2     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 19:16        reg_me_rad_y2_min_0_2     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 15:12        reg_me_rad_x1_max_0_2     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit 11: 8        reg_me_rad_y1_max_0_2     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  7: 4        reg_me_rad_x2_max_0_2     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  3: 0        reg_me_rad_y2_max_0_2     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
#define FRC_ME_CAD_RAD3_MM_0                       0x1313
//Bit 31:28        reg_me_rad_x1_min_0_3     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 27:24        reg_me_rad_y1_min_0_3     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 23:20        reg_me_rad_x2_min_0_3     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 19:16        reg_me_rad_y2_min_0_3     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 15:12        reg_me_rad_x1_max_0_3     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit 11: 8        reg_me_rad_y1_max_0_3     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  7: 4        reg_me_rad_x2_max_0_3     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  3: 0        reg_me_rad_y2_max_0_3     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
#define FRC_ME_CAD_HIE_PEN0_DELETE_0               0x1314
//Bit 31: 0        reserved
#define FRC_ME_CAD_HIE_PEN1_DELETE_0               0x1315
//Bit 31: 0        reserved
#define FRC_ME_CAD_HIE_PEN2_DELETE_0               0x1316
//Bit 31: 0        reserved
#define FRC_ME_CAD_HIE_PEN3_DELETE_0               0x1317
//Bit 31: 0        reserved
#define FRC_ME_CAD_SETS_SEL_1                      0x1318
//Bit 31:28        reg_me_add_sel_1_0        // unsigned ,    RW, default = 7  add cand sets, 0:S and T mv,10:S and T mv,1:zmv, 2: gmv, 3: rand mv, 4: prj mv, 5: fsmv, 6: hmv, 7: invalid;
//Bit 27:24        reg_me_add_sel_1_1        // unsigned ,    RW, default = 0  add cand sets,
//Bit 23:20        reg_me_add_sel_1_2        // unsigned ,    RW, default = 10  add cand sets,
//Bit 19:16        reg_me_add_sel_1_3        // unsigned ,    RW, default = 1  add cand sets,
//Bit 15:12        reg_me_add_sel_1_4        // unsigned ,    RW, default = 2  add cand sets,
//Bit 11: 8        reg_me_add_sel_1_5        // unsigned ,    RW, default = 3  add cand sets,
//Bit  7: 4        reg_me_add_sel_1_6        // unsigned ,    RW, default = 4  add cand sets,
//Bit  3: 0        reg_me_add_sel_1_7        // unsigned ,    RW, default = 5  add cand sets,
#define FRC_ME_CAD_ST_EN_1                         0x1319
//Bit 31:16        reserved
//Bit 15:10        reserved
//Bit  9           reg_me_add_s_t_en_1_0     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  8           reg_me_add_s_t_en_1_1     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  7           reg_me_add_s_t_en_1_2     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  6           reg_me_add_s_t_en_1_3     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  5           reg_me_add_s_t_en_1_4     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  4           reg_me_add_s_t_en_1_5     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  3           reg_me_add_s_t_en_1_6     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  2           reg_me_add_s_t_en_1_7     // unsigned ,    RW, default = 0  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  1           reg_me_add_s_t_en_1_8     // unsigned ,    RW, default = 0  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  0           reg_me_add_s_t_en_1_9     // unsigned ,    RW, default = 0  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
#define FRC_ME_CAD_ST0_1                           0x131a
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_s_t_1_0    // unsigned ,    RW, default = 44  static penalty for S and T
//Bit  7: 0        reg_me_penalty_s_t_1_1    // unsigned ,    RW, default = 44  static penalty for S and T
#define FRC_ME_CAD_ST1_1                           0x131b
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_s_t_1_2    // unsigned ,    RW, default = 56  static penalty for S and T
//Bit  7: 0        reg_me_penalty_s_t_1_3    // unsigned ,    RW, default = 40  static penalty for S and T
#define FRC_ME_CAD_ST2_1                           0x131c
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_s_t_1_4    // unsigned ,    RW, default = 56  static penalty for S and T
//Bit  7: 0        reg_me_penalty_s_t_1_5    // unsigned ,    RW, default = 42  static penalty for S and T
#define FRC_ME_CAD_ST3_1                           0x131d
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_s_t_1_6    // unsigned ,    RW, default = 44  static penalty for S and T
//Bit  7: 0        reg_me_penalty_s_t_1_7    // unsigned ,    RW, default = 0  static penalty for S and T
#define FRC_ME_CAD_ST4_1                           0x131e
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_s_t_1_8    // unsigned ,    RW, default = 0  static penalty for S and T
//Bit  7: 0        reg_me_penalty_s_t_1_9    // unsigned ,    RW, default = 0  static penalty for S and T
#define FRC_ME_CAD_RAD_EN_1                        0x131f
//Bit 31: 4        reserved
//Bit  3           reg_me_add_rad_en_1_0     // unsigned ,    RW, default = 1  enable to add rand candidate into candidate list, 0 do not add s0, 1 add s0
//Bit  2           reg_me_add_rad_en_1_1     // unsigned ,    RW, default = 1  enable to add rand candidate into candidate list, 0 do not add s0, 1 add s0
//Bit  1           reg_me_add_rad_en_1_2     // unsigned ,    RW, default = 0  enable to add rand candidate into candidate list, 0 do not add s0, 1 add s0
//Bit  0           reg_me_add_rad_en_1_3     // unsigned ,    RW, default = 0  enable to add rand candidate into candidate list, 0 do not add s0, 1 add s0
#define FRC_ME_CAD_RAD01_1                         0x1320
//Bit 31:28        reg_me_cmv_rad_pos_x_1_0  // signed ,    RW, default = -1  for random candidates position X
//Bit 27:24        reg_me_cmv_rad_pos_y_1_0  // signed ,    RW, default = -1  for random candidates position Y
//Bit 23:16        reg_me_penalty_rad_1_0    // unsigned ,    RW, default = 60  static penalty for random
//Bit 15:12        reg_me_cmv_rad_pos_x_1_1  // signed ,    RW, default = 1  for random candidates position X
//Bit 11: 8        reg_me_cmv_rad_pos_y_1_1  // signed ,    RW, default = -1  for random candidates position Y
//Bit  7: 0        reg_me_penalty_rad_1_1    // unsigned ,    RW, default = 114  static penalty for random
#define FRC_ME_CAD_RAD23_1                         0x1321
//Bit 31:28        reg_me_cmv_rad_pos_x_1_2  // signed ,    RW, default = 0  for random candidates position X
//Bit 27:24        reg_me_cmv_rad_pos_y_1_2  // signed ,    RW, default = 0  for random candidates position Y
//Bit 23:16        reg_me_penalty_rad_1_2    // unsigned ,    RW, default = 0  static penalty for random
//Bit 15:12        reg_me_cmv_rad_pos_x_1_3  // signed ,    RW, default = 0  for random candidates position X
//Bit 11: 8        reg_me_cmv_rad_pos_y_1_3  // signed ,    RW, default = 0  for random candidates position Y
//Bit  7: 0        reg_me_penalty_rad_1_3    // unsigned ,    RW, default = 0  static penalty for random
#define FRC_ME_CAD_RAD0_MM_1                       0x1322
//Bit 31:28        reg_me_rad_x1_min_1_0     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 27:24        reg_me_rad_y1_min_1_0     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 23:20        reg_me_rad_x2_min_1_0     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 19:16        reg_me_rad_y2_min_1_0     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 15:12        reg_me_rad_x1_max_1_0     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit 11: 8        reg_me_rad_y1_max_1_0     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  7: 4        reg_me_rad_x2_max_1_0     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  3: 0        reg_me_rad_y2_max_1_0     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
#define FRC_ME_CAD_RAD1_MM_1                       0x1323
//Bit 31:28        reg_me_rad_x1_min_1_1     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 27:24        reg_me_rad_y1_min_1_1     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 23:20        reg_me_rad_x2_min_1_1     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 19:16        reg_me_rad_y2_min_1_1     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 15:12        reg_me_rad_x1_max_1_1     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit 11: 8        reg_me_rad_y1_max_1_1     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  7: 4        reg_me_rad_x2_max_1_1     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  3: 0        reg_me_rad_y2_max_1_1     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
#define FRC_ME_CAD_RAD2_MM_1                       0x1324
//Bit 31:28        reg_me_rad_x1_min_1_2     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 27:24        reg_me_rad_y1_min_1_2     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 23:20        reg_me_rad_x2_min_1_2     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 19:16        reg_me_rad_y2_min_1_2     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 15:12        reg_me_rad_x1_max_1_2     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit 11: 8        reg_me_rad_y1_max_1_2     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  7: 4        reg_me_rad_x2_max_1_2     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  3: 0        reg_me_rad_y2_max_1_2     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
#define FRC_ME_CAD_RAD3_MM_1                       0x1325
//Bit 31:28        reg_me_rad_x1_min_1_3     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 27:24        reg_me_rad_y1_min_1_3     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 23:20        reg_me_rad_x2_min_1_3     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 19:16        reg_me_rad_y2_min_1_3     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 15:12        reg_me_rad_x1_max_1_3     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit 11: 8        reg_me_rad_y1_max_1_3     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  7: 4        reg_me_rad_x2_max_1_3     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  3: 0        reg_me_rad_y2_max_1_3     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
#define FRC_ME_CAD_HIE_PEN0_1                      0x1326
//Bit 31: 0        reserved
#define FRC_ME_CAD_HIE_PEN1_1                      0x1327
//Bit 31: 0        reserved
#define FRC_ME_CAD_HIE_PEN2_1                      0x1328
//Bit 31: 0        reserved
#define FRC_ME_CAD_HIE_PEN3_1                      0x1329
//Bit 31: 0        reserved
#define FRC_ME_CAD_SETS_SEL_2                      0x132a
//Bit 31:28        reg_me_add_sel_2_0        // unsigned ,    RW, default = 7  add cand sets, 0:S and T mv,10:S and T mv,1:zmv, 2: gmv, 3: rand mv, 4: prj mv, 5: fsmv, 6: hmv, 7: invalid;
//Bit 27:24        reg_me_add_sel_2_1        // unsigned ,    RW, default = 0  add cand sets,
//Bit 23:20        reg_me_add_sel_2_2        // unsigned ,    RW, default = 10  add cand sets,
//Bit 19:16        reg_me_add_sel_2_3        // unsigned ,    RW, default = 1  add cand sets,
//Bit 15:12        reg_me_add_sel_2_4        // unsigned ,    RW, default = 2  add cand sets,
//Bit 11: 8        reg_me_add_sel_2_5        // unsigned ,    RW, default = 3  add cand sets,
//Bit  7: 4        reg_me_add_sel_2_6        // unsigned ,    RW, default = 4  add cand sets,
//Bit  3: 0        reg_me_add_sel_2_7        // unsigned ,    RW, default = 5  add cand sets,
#define FRC_ME_CAD_ST_EN_2                         0x132b
//Bit 31:16        reserved
//Bit 15:10        reserved
//Bit  9           reg_me_add_s_t_en_2_0     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  8           reg_me_add_s_t_en_2_1     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  7           reg_me_add_s_t_en_2_2     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  6           reg_me_add_s_t_en_2_3     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  5           reg_me_add_s_t_en_2_4     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  4           reg_me_add_s_t_en_2_5     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  3           reg_me_add_s_t_en_2_6     // unsigned ,    RW, default = 1  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  2           reg_me_add_s_t_en_2_7     // unsigned ,    RW, default = 0  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  1           reg_me_add_s_t_en_2_8     // unsigned ,    RW, default = 0  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
//Bit  0           reg_me_add_s_t_en_2_9     // unsigned ,    RW, default = 0  enable to add S and T into candidate list, 0 do not add s0, 1 add s0
#define FRC_ME_CAD_ST0_2                           0x132c
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_s_t_2_0    // unsigned ,    RW, default = 44  static penalty for S and T
//Bit  7: 0        reg_me_penalty_s_t_2_1    // unsigned ,    RW, default = 44  static penalty for S and T
#define FRC_ME_CAD_ST1_2                           0x132d
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_s_t_2_2    // unsigned ,    RW, default = 56  static penalty for S and T
//Bit  7: 0        reg_me_penalty_s_t_2_3    // unsigned ,    RW, default = 40  static penalty for S and T
#define FRC_ME_CAD_ST2_2                           0x132e
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_s_t_2_4    // unsigned ,    RW, default = 56  static penalty for S and T
//Bit  7: 0        reg_me_penalty_s_t_2_5    // unsigned ,    RW, default = 42  static penalty for S and T
#define FRC_ME_CAD_ST3_2                           0x132f
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_s_t_2_6    // unsigned ,    RW, default = 44  static penalty for S and T
//Bit  7: 0        reg_me_penalty_s_t_2_7    // unsigned ,    RW, default = 0  static penalty for S and T
#define FRC_ME_CAD_ST4_2                           0x1330
//Bit 31:16        reserved
//Bit 15: 8        reg_me_penalty_s_t_2_8    // unsigned ,    RW, default = 0  static penalty for S and T
//Bit  7: 0        reg_me_penalty_s_t_2_9    // unsigned ,    RW, default = 0  static penalty for S and T
#define FRC_ME_CAD_RAD_EN_2                        0x1331
//Bit 31: 4        reserved
//Bit  3           reg_me_add_rad_en_2_0     // unsigned ,    RW, default = 1  enable to add rand candidate into candidate list, 0 do not add s0, 1 add s0
//Bit  2           reg_me_add_rad_en_2_1     // unsigned ,    RW, default = 1  enable to add rand candidate into candidate list, 0 do not add s0, 1 add s0
//Bit  1           reg_me_add_rad_en_2_2     // unsigned ,    RW, default = 0  enable to add rand candidate into candidate list, 0 do not add s0, 1 add s0
//Bit  0           reg_me_add_rad_en_2_3     // unsigned ,    RW, default = 0  enable to add rand candidate into candidate list, 0 do not add s0, 1 add s0
#define FRC_ME_CAD_RAD01_2                         0x1332
//Bit 31:28        reg_me_cmv_rad_pos_x_2_0  // signed ,    RW, default = -1  for random candidates position X
//Bit 27:24        reg_me_cmv_rad_pos_y_2_0  // signed ,    RW, default = -1  for random candidates position Y
//Bit 23:16        reg_me_penalty_rad_2_0    // unsigned ,    RW, default = 60  static penalty for random
//Bit 15:12        reg_me_cmv_rad_pos_x_2_1  // signed ,    RW, default = 1  for random candidates position X
//Bit 11: 8        reg_me_cmv_rad_pos_y_2_1  // signed ,    RW, default = -1  for random candidates position Y
//Bit  7: 0        reg_me_penalty_rad_2_1    // unsigned ,    RW, default = 114  static penalty for random
#define FRC_ME_CAD_RAD23_2                         0x1333
//Bit 31:28        reg_me_cmv_rad_pos_x_2_2  // signed ,    RW, default = 0  for random candidates position X
//Bit 27:24        reg_me_cmv_rad_pos_y_2_2  // signed ,    RW, default = 0  for random candidates position Y
//Bit 23:16        reg_me_penalty_rad_2_2    // unsigned ,    RW, default = 0  static penalty for random
//Bit 15:12        reg_me_cmv_rad_pos_x_2_3  // signed ,    RW, default = 0  for random candidates position X
//Bit 11: 8        reg_me_cmv_rad_pos_y_2_3  // signed ,    RW, default = 0  for random candidates position Y
//Bit  7: 0        reg_me_penalty_rad_2_3    // unsigned ,    RW, default = 0  static penalty for random
#define FRC_ME_CAD_RAD0_MM_2                       0x1334
//Bit 31:28        reg_me_rad_x1_min_2_0     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 27:24        reg_me_rad_y1_min_2_0     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 23:20        reg_me_rad_x2_min_2_0     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 19:16        reg_me_rad_y2_min_2_0     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 15:12        reg_me_rad_x1_max_2_0     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit 11: 8        reg_me_rad_y1_max_2_0     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  7: 4        reg_me_rad_x2_max_2_0     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  3: 0        reg_me_rad_y2_max_2_0     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
#define FRC_ME_CAD_RAD1_MM_2                       0x1335
//Bit 31:28        reg_me_rad_x1_min_2_1     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 27:24        reg_me_rad_y1_min_2_1     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 23:20        reg_me_rad_x2_min_2_1     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 19:16        reg_me_rad_y2_min_2_1     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 15:12        reg_me_rad_x1_max_2_1     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit 11: 8        reg_me_rad_y1_max_2_1     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  7: 4        reg_me_rad_x2_max_2_1     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  3: 0        reg_me_rad_y2_max_2_1     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
#define FRC_ME_CAD_RAD2_MM_2                       0x1336
//Bit 31:28        reg_me_rad_x1_min_2_2     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 27:24        reg_me_rad_y1_min_2_2     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 23:20        reg_me_rad_x2_min_2_2     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 19:16        reg_me_rad_y2_min_2_2     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 15:12        reg_me_rad_x1_max_2_2     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit 11: 8        reg_me_rad_y1_max_2_2     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  7: 4        reg_me_rad_x2_max_2_2     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  3: 0        reg_me_rad_y2_max_2_2     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
#define FRC_ME_CAD_RAD3_MM_2                       0x1337
//Bit 31:28        reg_me_rad_x1_min_2_3     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 27:24        reg_me_rad_y1_min_2_3     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 23:20        reg_me_rad_x2_min_2_3     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 19:16        reg_me_rad_y2_min_2_3     // unsigned ,    RW, default = 1  min random offset for the cmv (0~+15)
//Bit 15:12        reg_me_rad_x1_max_2_3     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit 11: 8        reg_me_rad_y1_max_2_3     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  7: 4        reg_me_rad_x2_max_2_3     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
//Bit  3: 0        reg_me_rad_y2_max_2_3     // unsigned ,    RW, default = 1  max random offset for the cmv (0~+15)
#define FRC_ME_CAD_HIE_PEN0_2                      0x1338
//Bit 31: 0        reserved
#define FRC_ME_CAD_HIE_PEN1_2                      0x1339
//Bit 31: 0        reserved
#define FRC_ME_CAD_HIE_PEN2_2                      0x133a
//Bit 31: 0        reserved
#define FRC_ME_CAD_HIE_PEN3_2                      0x133b
//Bit 31: 0        reserved
#define FRC_ME_CAD_POS0_0                          0x133c
//Bit 31:28        reg_me_cmv_s_t_pos_x_0_0  // signed ,    RW, default = -1  for S and T candidates position X
//Bit 27:24        reg_me_cmv_s_t_pos_y_0_0  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 23:20        reg_me_cmv_s_t_pos_x_0_1  // signed ,    RW, default = 1  for S and T candidates position X
//Bit 19:16        reg_me_cmv_s_t_pos_y_0_1  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 15:12        reg_me_cmv_s_t_pos_x_0_2  // signed ,    RW, default = -2  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_0_2  // signed ,    RW, default = 2  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_0_3  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_0_3  // signed ,    RW, default = 2  for S and T candidates position Y
#define FRC_ME_CAD_POS1_0                          0x133d
//Bit 31:28        reg_me_cmv_s_t_pos_x_0_4  // signed ,    RW, default = 2  for S and T candidates position X
//Bit 27:24        reg_me_cmv_s_t_pos_y_0_4  // signed ,    RW, default = 2  for S and T candidates position Y
//Bit 23:20        reg_me_cmv_s_t_pos_x_0_5  // signed ,    RW, default = 0  for S and T candidates position X
//Bit 19:16        reg_me_cmv_s_t_pos_y_0_5  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 15:12        reg_me_cmv_s_t_pos_x_0_6  // signed ,    RW, default = -2  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_0_6  // signed ,    RW, default = 0  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_0_7  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_0_7  // signed ,    RW, default = 0  for S and T candidates position Y
#define FRC_ME_CAD_POS2_0                          0x133e
//Bit 31:16        reserved
//Bit 15:12        reg_me_cmv_s_t_pos_x_0_8  // signed ,    RW, default = 0  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_0_8  // signed ,    RW, default = 0  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_0_9  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_0_9  // signed ,    RW, default = 0  for S and T candidates position Y
#define FRC_ME_CAD_POS0_1                          0x133f
//Bit 31:28        reg_me_cmv_s_t_pos_x_1_0  // signed ,    RW, default = -1  for S and T candidates position X
//Bit 27:24        reg_me_cmv_s_t_pos_y_1_0  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 23:20        reg_me_cmv_s_t_pos_x_1_1  // signed ,    RW, default = 1  for S and T candidates position X
//Bit 19:16        reg_me_cmv_s_t_pos_y_1_1  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 15:12        reg_me_cmv_s_t_pos_x_1_2  // signed ,    RW, default = -2  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_1_2  // signed ,    RW, default = 2  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_1_3  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_1_3  // signed ,    RW, default = 2  for S and T candidates position Y
#define FRC_ME_CAD_POS1_1                          0x1340
//Bit 31:28        reg_me_cmv_s_t_pos_x_1_4  // signed ,    RW, default = 2  for S and T candidates position X
//Bit 27:24        reg_me_cmv_s_t_pos_y_1_4  // signed ,    RW, default = 2  for S and T candidates position Y
//Bit 23:20        reg_me_cmv_s_t_pos_x_1_5  // signed ,    RW, default = 0  for S and T candidates position X
//Bit 19:16        reg_me_cmv_s_t_pos_y_1_5  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 15:12        reg_me_cmv_s_t_pos_x_1_6  // signed ,    RW, default = -2  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_1_6  // signed ,    RW, default = 0  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_1_7  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_1_7  // signed ,    RW, default = 0  for S and T candidates position Y
#define FRC_ME_CAD_POS2_1                          0x1341
//Bit 31:16        reserved
//Bit 15:12        reg_me_cmv_s_t_pos_x_1_8  // signed ,    RW, default = 0  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_1_8  // signed ,    RW, default = 0  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_1_9  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_1_9  // signed ,    RW, default = 0  for S and T candidates position Y
#define FRC_ME_CAD_POS0_2                          0x1342
//Bit 31:28        reg_me_cmv_s_t_pos_x_2_0  // signed ,    RW, default = -1  for S and T candidates position X
//Bit 27:24        reg_me_cmv_s_t_pos_y_2_0  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 23:20        reg_me_cmv_s_t_pos_x_2_1  // signed ,    RW, default = 1  for S and T candidates position X
//Bit 19:16        reg_me_cmv_s_t_pos_y_2_1  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 15:12        reg_me_cmv_s_t_pos_x_2_2  // signed ,    RW, default = -2  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_2_2  // signed ,    RW, default = 2  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_2_3  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_2_3  // signed ,    RW, default = 2  for S and T candidates position Y
#define FRC_ME_CAD_POS1_2                          0x1343
//Bit 31:28        reg_me_cmv_s_t_pos_x_2_4  // signed ,    RW, default = 2  for S and T candidates position X
//Bit 27:24        reg_me_cmv_s_t_pos_y_2_4  // signed ,    RW, default = 2  for S and T candidates position Y
//Bit 23:20        reg_me_cmv_s_t_pos_x_2_5  // signed ,    RW, default = 0  for S and T candidates position X
//Bit 19:16        reg_me_cmv_s_t_pos_y_2_5  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 15:12        reg_me_cmv_s_t_pos_x_2_6  // signed ,    RW, default = -2  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_2_6  // signed ,    RW, default = 0  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_2_7  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_2_7  // signed ,    RW, default = 0  for S and T candidates position Y
#define FRC_ME_CAD_POS2_2                          0x1344
//Bit 31:16        reserved
//Bit 15:12        reg_me_cmv_s_t_pos_x_2_8  // signed ,    RW, default = 0  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_2_8  // signed ,    RW, default = 0  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_2_9  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_2_9  // signed ,    RW, default = 0  for S and T candidates position Y
#define FRC_ME_CAD_POS0_3                          0x1345
//Bit 31:28        reg_me_cmv_s_t_pos_x_3_0  // signed ,    RW, default = -1  for S and T candidates position X
//Bit 27:24        reg_me_cmv_s_t_pos_y_3_0  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 23:20        reg_me_cmv_s_t_pos_x_3_1  // signed ,    RW, default = 1  for S and T candidates position X
//Bit 19:16        reg_me_cmv_s_t_pos_y_3_1  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 15:12        reg_me_cmv_s_t_pos_x_3_2  // signed ,    RW, default = -2  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_3_2  // signed ,    RW, default = 2  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_3_3  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_3_3  // signed ,    RW, default = 2  for S and T candidates position Y
#define FRC_ME_CAD_POS1_3                          0x1346
//Bit 31:28        reg_me_cmv_s_t_pos_x_3_4  // signed ,    RW, default = 2  for S and T candidates position X
//Bit 27:24        reg_me_cmv_s_t_pos_y_3_4  // signed ,    RW, default = 2  for S and T candidates position Y
//Bit 23:20        reg_me_cmv_s_t_pos_x_3_5  // signed ,    RW, default = 0  for S and T candidates position X
//Bit 19:16        reg_me_cmv_s_t_pos_y_3_5  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 15:12        reg_me_cmv_s_t_pos_x_3_6  // signed ,    RW, default = -2  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_3_6  // signed ,    RW, default = 0  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_3_7  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_3_7  // signed ,    RW, default = 0  for S and T candidates position Y
#define FRC_ME_CAD_POS2_3                          0x1347
//Bit 31:16        reserved
//Bit 15:12        reg_me_cmv_s_t_pos_x_3_8  // signed ,    RW, default = 0  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_3_8  // signed ,    RW, default = 0  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_3_9  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_3_9  // signed ,    RW, default = 0  for S and T candidates position Y
#define FRC_ME_CAD_POS0_4                          0x1348
//Bit 31:28        reg_me_cmv_s_t_pos_x_4_0  // signed ,    RW, default = -1  for S and T candidates position X
//Bit 27:24        reg_me_cmv_s_t_pos_y_4_0  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 23:20        reg_me_cmv_s_t_pos_x_4_1  // signed ,    RW, default = 1  for S and T candidates position X
//Bit 19:16        reg_me_cmv_s_t_pos_y_4_1  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 15:12        reg_me_cmv_s_t_pos_x_4_2  // signed ,    RW, default = -2  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_4_2  // signed ,    RW, default = 2  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_4_3  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_4_3  // signed ,    RW, default = 2  for S and T candidates position Y
#define FRC_ME_CAD_POS1_4                          0x1349
//Bit 31:28        reg_me_cmv_s_t_pos_x_4_4  // signed ,    RW, default = 2  for S and T candidates position X
//Bit 27:24        reg_me_cmv_s_t_pos_y_4_4  // signed ,    RW, default = 2  for S and T candidates position Y
//Bit 23:20        reg_me_cmv_s_t_pos_x_4_5  // signed ,    RW, default = 0  for S and T candidates position X
//Bit 19:16        reg_me_cmv_s_t_pos_y_4_5  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 15:12        reg_me_cmv_s_t_pos_x_4_6  // signed ,    RW, default = -2  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_4_6  // signed ,    RW, default = 0  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_4_7  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_4_7  // signed ,    RW, default = 0  for S and T candidates position Y
#define FRC_ME_CAD_POS2_4                          0x134a
//Bit 31:16        reserved
//Bit 15:12        reg_me_cmv_s_t_pos_x_4_8  // signed ,    RW, default = 0  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_4_8  // signed ,    RW, default = 0  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_4_9  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_4_9  // signed ,    RW, default = 0  for S and T candidates position Y
#define FRC_ME_CAD_POS0_5                          0x134b
//Bit 31:28        reg_me_cmv_s_t_pos_x_5_0  // signed ,    RW, default = -1  for S and T candidates position X
//Bit 27:24        reg_me_cmv_s_t_pos_y_5_0  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 23:20        reg_me_cmv_s_t_pos_x_5_1  // signed ,    RW, default = 1  for S and T candidates position X
//Bit 19:16        reg_me_cmv_s_t_pos_y_5_1  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 15:12        reg_me_cmv_s_t_pos_x_5_2  // signed ,    RW, default = -2  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_5_2  // signed ,    RW, default = 2  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_5_3  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_5_3  // signed ,    RW, default = 2  for S and T candidates position Y
#define FRC_ME_CAD_POS1_5                          0x134c
//Bit 31:28        reg_me_cmv_s_t_pos_x_5_4  // signed ,    RW, default = 2  for S and T candidates position X
//Bit 27:24        reg_me_cmv_s_t_pos_y_5_4  // signed ,    RW, default = 2  for S and T candidates position Y
//Bit 23:20        reg_me_cmv_s_t_pos_x_5_5  // signed ,    RW, default = 0  for S and T candidates position X
//Bit 19:16        reg_me_cmv_s_t_pos_y_5_5  // signed ,    RW, default = -1  for S and T candidates position Y
//Bit 15:12        reg_me_cmv_s_t_pos_x_5_6  // signed ,    RW, default = -2  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_5_6  // signed ,    RW, default = 0  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_5_7  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_5_7  // signed ,    RW, default = 0  for S and T candidates position Y
#define FRC_ME_CAD_POS2_5                          0x134d
//Bit 31:16        reserved
//Bit 15:12        reg_me_cmv_s_t_pos_x_5_8  // signed ,    RW, default = 0  for S and T candidates position X
//Bit 11: 8        reg_me_cmv_s_t_pos_y_5_8  // signed ,    RW, default = 0  for S and T candidates position Y
//Bit  7: 4        reg_me_cmv_s_t_pos_x_5_9  // signed ,    RW, default = 0  for S and T candidates position X
//Bit  3: 0        reg_me_cmv_s_t_pos_y_5_9  // signed ,    RW, default = 0  for S and T candidates position Y
#define FRC_ME_RAD_EDGE_0                          0x134e
//Bit 31:26        reserved
//Bit 25           reg_me_rad_edge_en_0      // unsigned ,    RW, default = 0  enable edge based random offst for each loop
//Bit 24           reg_me_rad_edge_calc_mode_0 // unsigned ,    RW, default = 1  edges calc. mode used for random candidates, 0: dif calc. using top/bot row or left/right column for cost saving, 1: dif calc. using every row/column;
//Bit 23:20        reg_me_rad_edge_core_0    // unsigned ,    RW, default = 0  core for edge calc.
//Bit 19:16        reg_me_rad_edge_thn_0     // unsigned ,    RW, default = 9  me_rad_edge threshold1 = th0 + 2^thn to get the th1 of the curv
//Bit 15:10        reserved
//Bit  9: 0        reg_me_rad_edge_th0_0     // unsigned ,    RW, default = 128  threshold 0 of the curv
#define FRC_ME_HME_RAD_MODE_0                      0x134f
//Bit 31: 0        reserved
#define FRC_ME_SEED0_0                             0x1350
//Bit 31:16        reserved
//Bit 15: 0        reg_me_rand_seed_mvx_0    // unsigned ,    RW, default = 43981  random seed for the LFSR for mvx integer part
#define FRC_ME_SEED1_0                             0x1351
//Bit 31:16        reg_me_rand_seed_mvy_0    // unsigned ,    RW, default = 39304  random seed for the LFSR for mvy integer part
//Bit 15: 0        reg_me_rand_seed_mvq_0    // unsigned ,    RW, default = 14392  random seed for the LFSR for mvx/mvy fractional part
#define FRC_ME_RAD_EDGE_1                          0x1352
//Bit 31:26        reserved
//Bit 25           reg_me_rad_edge_en_1      // unsigned ,    RW, default = 0  enable edge based random offst for each loop
//Bit 24           reg_me_rad_edge_calc_mode_1 // unsigned ,    RW, default = 1  edges calc. mode used for random candidates, 0: dif calc. using top/bot row or left/right column for cost saving, 1: dif calc. using every row/column;
//Bit 23:20        reg_me_rad_edge_core_1    // unsigned ,    RW, default = 0  core for edge calc.
//Bit 19:16        reg_me_rad_edge_thn_1     // unsigned ,    RW, default = 9  me_rad_edge threshold1 = th0 + 2^thn to get the th1 of the curv
//Bit 15:10        reserved
//Bit  9: 0        reg_me_rad_edge_th0_1     // unsigned ,    RW, default = 128  threshold 0 of the curv
#define FRC_ME_HME_RAD_MODE_1                      0x1353
//Bit 31: 0        reserved
#define FRC_ME_SEED0_1                             0x1354
//Bit 31:16        reserved
//Bit 15: 0        reg_me_rand_seed_mvx_1    // unsigned ,    RW, default = 43981  random seed for the LFSR for mvx integer part
#define FRC_ME_SEED1_1                             0x1355
//Bit 31:16        reg_me_rand_seed_mvy_1    // unsigned ,    RW, default = 39304  random seed for the LFSR for mvy integer part
//Bit 15: 0        reg_me_rand_seed_mvq_1    // unsigned ,    RW, default = 14392  random seed for the LFSR for mvx/mvy fractional part
#define FRC_ME_RAD_EDGE_2                          0x1356
//Bit 31:26        reserved
//Bit 25           reg_me_rad_edge_en_2      // unsigned ,    RW, default = 0  enable edge based random offst for each loop
//Bit 24           reg_me_rad_edge_calc_mode_2 // unsigned ,    RW, default = 1  edges calc. mode used for random candidates, 0: dif calc. using top/bot row or left/right column for cost saving, 1: dif calc. using every row/column;
//Bit 23:20        reg_me_rad_edge_core_2    // unsigned ,    RW, default = 0  core for edge calc.
//Bit 19:16        reg_me_rad_edge_thn_2     // unsigned ,    RW, default = 9  me_rad_edge threshold1 = th0 + 2^thn to get the th1 of the curv
//Bit 15:10        reserved
//Bit  9: 0        reg_me_rad_edge_th0_2     // unsigned ,    RW, default = 128  threshold 0 of the curv
#define FRC_ME_HME_RAD_MODE_2                      0x1357
//Bit 31: 0        reserved
#define FRC_ME_SEED0_2                             0x1358
//Bit 31:16        reserved
//Bit 15: 0        reg_me_rand_seed_mvx_2    // unsigned ,    RW, default = 43981  random seed for the LFSR for mvx integer part
#define FRC_ME_SEED1_2                             0x1359
//Bit 31:16        reg_me_rand_seed_mvy_2    // unsigned ,    RW, default = 39304  random seed for the LFSR for mvy integer part
//Bit 15: 0        reg_me_rand_seed_mvq_2    // unsigned ,    RW, default = 14392  random seed for the LFSR for mvx/mvy fractional part
#define FRC_ME_RPD_PENALTY_ST_0                    0x135a
//Bit 31:16        reserved
//Bit 15: 8        reg_me_rpd_penalty_st_cn_0 // unsigned ,    RW, default = 22  penalty of s/t candidates for cn loop each scan if rp not detected
//Bit  7: 0        reg_me_rpd_penalty_st_nc_0 // unsigned ,    RW, default = 22  penalty of s/t candidates for nc loop each scan if rp not detected
#define FRC_ME_RPD_PENALTY_ST_1                    0x135b
//Bit 31:16        reserved
//Bit 15: 8        reg_me_rpd_penalty_st_cn_1 // unsigned ,    RW, default = 22  penalty of s/t candidates for cn loop each scan if rp not detected
//Bit  7: 0        reg_me_rpd_penalty_st_nc_1 // unsigned ,    RW, default = 22  penalty of s/t candidates for nc loop each scan if rp not detected
#define FRC_ME_RPD_PENALTY_ST_2                    0x135c
//Bit 31:16        reserved
//Bit 15: 8        reg_me_rpd_penalty_st_cn_2 // unsigned ,    RW, default = 28  penalty of s/t candidates for cn loop each scan if rp not detected
//Bit  7: 0        reg_me_rpd_penalty_st_nc_2 // unsigned ,    RW, default = 28  penalty of s/t candidates for nc loop each scan if rp not detected
#define FRC_ME_RPD_PENALTY_ST_3                    0x135d
//Bit 31:16        reserved
//Bit 15: 8        reg_me_rpd_penalty_st_cn_3 // unsigned ,    RW, default = 20  penalty of s/t candidates for cn loop each scan if rp not detected
//Bit  7: 0        reg_me_rpd_penalty_st_nc_3 // unsigned ,    RW, default = 20  penalty of s/t candidates for nc loop each scan if rp not detected
#define FRC_ME_RPD_PENALTY_ST_4                    0x135e
//Bit 31:16        reserved
//Bit 15: 8        reg_me_rpd_penalty_st_cn_4 // unsigned ,    RW, default = 28  penalty of s/t candidates for cn loop each scan if rp not detected
//Bit  7: 0        reg_me_rpd_penalty_st_nc_4 // unsigned ,    RW, default = 28  penalty of s/t candidates for nc loop each scan if rp not detected
#define FRC_ME_RPD_PENALTY_ST_5                    0x135f
//Bit 31:16        reserved
//Bit 15: 8        reg_me_rpd_penalty_st_cn_5 // unsigned ,    RW, default = 21  penalty of s/t candidates for cn loop each scan if rp not detected
//Bit  7: 0        reg_me_rpd_penalty_st_nc_5 // unsigned ,    RW, default = 21  penalty of s/t candidates for nc loop each scan if rp not detected
#define FRC_ME_RPD_PENALTY_ST_6                    0x1360
//Bit 31:16        reserved
//Bit 15: 8        reg_me_rpd_penalty_st_cn_6 // unsigned ,    RW, default = 22  penalty of s/t candidates for cn loop each scan if rp not detected
//Bit  7: 0        reg_me_rpd_penalty_st_nc_6 // unsigned ,    RW, default = 22  penalty of s/t candidates for nc loop each scan if rp not detected
#define FRC_ME_RPD_PENALTY_ST_7                    0x1361
//Bit 31:16        reserved
//Bit 15: 8        reg_me_rpd_penalty_st_cn_7 // unsigned ,    RW, default = 0  penalty of s/t candidates for cn loop each scan if rp not detected
//Bit  7: 0        reg_me_rpd_penalty_st_nc_7 // unsigned ,    RW, default = 0  penalty of s/t candidates for nc loop each scan if rp not detected
#define FRC_ME_RPD_PENALTY_ST_8                    0x1362
//Bit 31:16        reserved
//Bit 15: 8        reg_me_rpd_penalty_st_cn_8 // unsigned ,    RW, default = 0  penalty of s/t candidates for cn loop each scan if rp not detected
//Bit  7: 0        reg_me_rpd_penalty_st_nc_8 // unsigned ,    RW, default = 0  penalty of s/t candidates for nc loop each scan if rp not detected
#define FRC_ME_RPD_PENALTY_ST_9                    0x1363
//Bit 31:16        reserved
//Bit 15: 8        reg_me_rpd_penalty_st_cn_9 // unsigned ,    RW, default = 0  penalty of s/t candidates for cn loop each scan if rp not detected
//Bit  7: 0        reg_me_rpd_penalty_st_nc_9 // unsigned ,    RW, default = 0  penalty of s/t candidates for nc loop each scan if rp not detected
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/me_cmv_regs0.h
//
//`include "hme_cbv_regs0.h"
// -----------------------------------------------
// REG_BASE:  FRC_ME_CBV0_APB_BASE = 0x15
// -----------------------------------------------
//
// Reading file:  ./frc_inc/me_cbv_regs0.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_ME_OBME_MODE_0                         0x1500
//Bit 31:15        reserved
//Bit 14           reg_me_choosebv_mode_0    // unsigned ,    RW, default = 0  new mode for phase bv selection
//Bit 13           reg_me_loop_scan0_0       // unsigned ,    RW, default = 1  enable to run the [0]pre point to cur or cur point to pre, [1]cur point to nex, [2]nex point to cur loop 1st run, 0 do not run, 1 run
//Bit 12           reg_me_loop_scan1_0       // unsigned ,    RW, default = 1  enable to run the [0]pre point to cur or cur point to pre, [1]cur point to nex, [2]nex point to cur loop 2nd run, 0 do not run, 1 run
//Bit 11           reg_me_overwrite_bv_en_0   // unsigned ,    RW, default = 0  enable to overwrite the mv with reg_me_overwrite_vector, 0: no overwrite, 1: overwrite
//Bit 10: 8        reg_obme_mask_mode_max_0  // unsigned ,    RW, default = 3  max of obme mask mode selection, 0: 4x8 mask, 1: 8x8 mask; 2:12x8 mask, 3: 16x8 mask
//Bit  7            reserved
//Bit  6: 4        reg_obme_mask_mode_min_0  // unsigned ,    RW, default = 0  min of obme mask mode selection, 0: 4x8 mask, 1: 8x8 mask; 2:12x8 mask, 3: 16x8 mask
//Bit  3            reserved
//Bit  2: 0        reg_obme_mask_mode_0      // unsigned ,    RW, default = 3  mode of obme mask mode selection, 0: 4x8 mask, 1: 8x8 mask; 2:12x8 mask, 3: 16x8 mask
#define FRC_ME_H_MVDIFF_SMOOTH_0                   0x1501
//Bit 31: 0        reserved
#define FRC_ME_H_MVDIFF_EN_0                       0x1502
//Bit 31: 0        reserved
#define FRC_ME_H_MVDIFF_GAIN0_DELETE_0             0x1503
//Bit 31: 0        reserved
#define FRC_ME_H_MVDIFF_GAIN1_0                    0x1504
//Bit 31: 0        reserved
#define FRC_ME_SAD_ACDC_REG0_0                     0x1505
//Bit 31:30        reserved
//Bit 29           reg_acdc_sel_force_ac_out_0 // unsigned ,    RW, default = 0  default = 0. 1: force ac_bv to be final bv.
//Bit 28           reg_acdc_sel_mode_en_0    // unsigned ,    RW, default = 1  enable signal to use adaptive ac_bv selection, 0: use dc_bv with xxx_force_ac_out=0, 1: adaptive ac_dc_bc, default = 1
//Bit 27:26        reserved
//Bit 25:16        reg_acdc_sel_mvdiff_ofst_0 // signed ,    RW, default = 0  offset to ac_bv0.mvdiff to compare to dc_bv0.mvdiff to select ac/dc bv, default=
//Bit 15:14        reserved
//Bit 13: 0        reg_acdc_sel_sadac_ofst_0 // signed ,    RW, default = 0  offset to ac_bv0.sad_ac to compare to dc_bv0.sad_dc to select ac/dc bv, default=
#define FRC_ME_SAD_ACDC_REG1_0                     0x1506
//Bit 31:30        reserved
//Bit 29:16        reg_acdc_sel_smvdiff_ofst_0 // signed ,    RW, default = 0  offset to ac_bv0.spatial_mvdiff to compare to dc_bv0.spatial_mvdiff to select ac/dc bv,(not apply to 1st row)
//Bit 15:13        reserved
//Bit 12: 0        reg_acdc_sel_sadac_thrd_0 // unsigned ,    RW, default = 150  threshold  to ac_bv0.sad_ac  to select ac bv, default=
#define FRC_ME_SAD_ACDC_REG2_0                     0x1507
//Bit 31:30        reserved
//Bit 29:20        reg_acdc_sel_detail_thrd_0 // unsigned ,    RW, default = 0  threshold to ac_bv0.detail[2]/[3] to select ac bv
//Bit 19:10        reg_acdc_sel_smvdiff_thrd_0 // unsigned ,    RW, default = 1023  threshold to ac_bv0.smvdiff_10b to select ac bv
//Bit  9: 0        reg_acdc_sel_mvdiff_thrd_0 // unsigned ,    RW, default = 1023  threshold to ac_bv0.mvdiff_10b to select ac bv
#define FRC_ME_OBME_MODE_1                         0x1508
//Bit 31:15        reserved
//Bit 14           reg_me_choosebv_mode_1    // unsigned ,    RW, default = 0  new mode for phase bv selection
//Bit 13           reg_me_loop_scan0_1       // unsigned ,    RW, default = 1  enable to run the [0]pre point to cur or cur point to pre, [1]cur point to nex, [2]nex point to cur loop 1st run, 0 do not run, 1 run
//Bit 12           reg_me_loop_scan1_1       // unsigned ,    RW, default = 1  enable to run the [0]pre point to cur or cur point to pre, [1]cur point to nex, [2]nex point to cur loop 2nd run, 0 do not run, 1 run
//Bit 11           reg_me_overwrite_bv_en_1   // unsigned ,    RW, default = 0  enable to overwrite the mv with reg_me_overwrite_vector, 0: no overwrite, 1: overwrite
//Bit 10: 8        reg_obme_mask_mode_max_1  // unsigned ,    RW, default = 3  max of obme mask mode selection, 0: 4x8 mask, 1: 8x8 mask; 2:12x8 mask, 3: 16x8 mask
//Bit  7            reserved
//Bit  6: 4        reg_obme_mask_mode_min_1  // unsigned ,    RW, default = 0  min of obme mask mode selection, 0: 4x8 mask, 1: 8x8 mask; 2:12x8 mask, 3: 16x8 mask
//Bit  3            reserved
//Bit  2: 0        reg_obme_mask_mode_1      // unsigned ,    RW, default = 3  mode of obme mask mode selection, 0: 4x8 mask, 1: 8x8 mask; 2:12x8 mask, 3: 16x8 mask
#define FRC_ME_H_MVDIFF_SMOOTH_DELETE_1            0x1509
//Bit 31: 0        reserved
#define FRC_ME_H_MVDIFF_EN_DELETE_1                0x150a
//Bit 31: 0        reserved
#define FRC_ME_H_MVDIFF_GAIN0_DELETE_1             0x150b
//Bit 31: 0        reserved
#define FRC_ME_H_MVDIFF_GAIN1_DELETE_1             0x150c
//Bit 31: 0        reserved
#define FRC_ME_SAD_ACDC_REG0_1                     0x150d
//Bit 31:30        reserved
//Bit 29           reg_acdc_sel_force_ac_out_1 // unsigned ,    RW, default = 0  default = 0. 1: force ac_bv to be final bv.
//Bit 28           reg_acdc_sel_mode_en_1    // unsigned ,    RW, default = 1  enable signal to use adaptive ac_bv selection, 0: use dc_bv with xxx_force_ac_out=0, 1: adaptive ac_dc_bc, default = 1
//Bit 27:26        reserved
//Bit 25:16        reg_acdc_sel_mvdiff_ofst_1 // signed ,    RW, default = 0  offset to ac_bv0.mvdiff to compare to dc_bv0.mvdiff to select ac/dc bv, default=
//Bit 15:14        reserved
//Bit 13: 0        reg_acdc_sel_sadac_ofst_1 // signed ,    RW, default = 0  offset to ac_bv0.sad_ac to compare to dc_bv0.sad_dc to select ac/dc bv, default=
#define FRC_ME_SAD_ACDC_REG1_1                     0x150e
//Bit 31:30        reserved
//Bit 29:16        reg_acdc_sel_smvdiff_ofst_1 // signed ,    RW, default = 0  offset to ac_bv0.spatial_mvdiff to compare to dc_bv0.spatial_mvdiff to select ac/dc bv,(not apply to 1st row)
//Bit 15:13        reserved
//Bit 12: 0        reg_acdc_sel_sadac_thrd_1 // unsigned ,    RW, default = 150  threshold  to ac_bv0.sad_ac  to select ac bv, default=
#define FRC_ME_SAD_ACDC_REG2_1                     0x150f
//Bit 31:30        reserved
//Bit 29:20        reg_acdc_sel_detail_thrd_1 // unsigned ,    RW, default = 0  threshold to ac_bv0.detail[2]/[3] to select ac bv
//Bit 19:10        reg_acdc_sel_smvdiff_thrd_1 // unsigned ,    RW, default = 1023  threshold to ac_bv0.smvdiff_10b to select ac bv
//Bit  9: 0        reg_acdc_sel_mvdiff_thrd_1 // unsigned ,    RW, default = 1023  threshold to ac_bv0.mvdiff_10b to select ac bv
#define FRC_ME_OBME_MODE_2                         0x1510
//Bit 31:15        reserved
//Bit 14           reg_me_choosebv_mode_2    // unsigned ,    RW, default = 0  new mode for phase bv selection
//Bit 13           reg_me_loop_scan0_2       // unsigned ,    RW, default = 1  enable to run the [0]pre point to cur or cur point to pre, [1]cur point to nex, [2]nex point to cur loop 1st run, 0 do not run, 1 run
//Bit 12           reg_me_loop_scan1_2       // unsigned ,    RW, default = 1  enable to run the [0]pre point to cur or cur point to pre, [1]cur point to nex, [2]nex point to cur loop 2nd run, 0 do not run, 1 run
//Bit 11           reg_me_overwrite_bv_en_2   // unsigned ,    RW, default = 0  enable to overwrite the mv with reg_me_overwrite_vector, 0: no overwrite, 1: overwrite
//Bit 10: 8        reg_obme_mask_mode_max_2  // unsigned ,    RW, default = 3  max of obme mask mode selection, 0: 4x8 mask, 1: 8x8 mask; 2:12x8 mask, 3: 16x8 mask
//Bit  7            reserved
//Bit  6: 4        reg_obme_mask_mode_min_2  // unsigned ,    RW, default = 0  min of obme mask mode selection, 0: 4x8 mask, 1: 8x8 mask; 2:12x8 mask, 3: 16x8 mask
//Bit  3            reserved
//Bit  2: 0        reg_obme_mask_mode_2      // unsigned ,    RW, default = 3  mode of obme mask mode selection, 0: 4x8 mask, 1: 8x8 mask; 2:12x8 mask, 3: 16x8 mask
#define FRC_ME_H_MVDIFF_SMOOTH_2                   0x1511
//Bit 31: 0        reserved
#define FRC_ME_H_MVDIFF_EN_2                       0x1512
//Bit 31: 0        reserved
#define FRC_ME_H_MVDIFF_GAIN0_DELETE_2             0x1513
//Bit 31: 0        reserved
#define FRC_ME_H_MVDIFF_GAIN1_2                    0x1514
//Bit 31: 0        reserved
#define FRC_ME_SAD_ACDC_REG0_2                     0x1515
//Bit 31:30        reserved
//Bit 29           reg_acdc_sel_force_ac_out_2 // unsigned ,    RW, default = 0  default = 0. 1: force ac_bv to be final bv.
//Bit 28           reg_acdc_sel_mode_en_2    // unsigned ,    RW, default = 1  enable signal to use adaptive ac_bv selection, 0: use dc_bv with xxx_force_ac_out=0, 1: adaptive ac_dc_bc, default = 1
//Bit 27:26        reserved
//Bit 25:16        reg_acdc_sel_mvdiff_ofst_2 // signed ,    RW, default = 0  offset to ac_bv0.mvdiff to compare to dc_bv0.mvdiff to select ac/dc bv, default=
//Bit 15:14        reserved
//Bit 13: 0        reg_acdc_sel_sadac_ofst_2 // signed ,    RW, default = 0  offset to ac_bv0.sad_ac to compare to dc_bv0.sad_dc to select ac/dc bv, default=
#define FRC_ME_SAD_ACDC_REG1_2                     0x1516
//Bit 31:30        reserved
//Bit 29:16        reg_acdc_sel_smvdiff_ofst_2 // signed ,    RW, default = 0  offset to ac_bv0.spatial_mvdiff to compare to dc_bv0.spatial_mvdiff to select ac/dc bv,(not apply to 1st row)
//Bit 15:13        reserved
//Bit 12: 0        reg_acdc_sel_sadac_thrd_2 // unsigned ,    RW, default = 150  threshold  to ac_bv0.sad_ac  to select ac bv, default=
#define FRC_ME_SAD_ACDC_REG2_2                     0x1517
//Bit 31:30        reserved
//Bit 29:20        reg_acdc_sel_detail_thrd_2 // unsigned ,    RW, default = 0  threshold to ac_bv0.detail[2]/[3] to select ac bv
//Bit 19:10        reg_acdc_sel_smvdiff_thrd_2 // unsigned ,    RW, default = 1023  threshold to ac_bv0.smvdiff_10b to select ac bv
//Bit  9: 0        reg_acdc_sel_mvdiff_thrd_2 // unsigned ,    RW, default = 1023  threshold to ac_bv0.mvdiff_10b to select ac bv
#define FRC_ME_HME_MVDIFF_SAD                      0x1518
//Bit 31: 0        reserved
#define FRC_ME_SAD_DC                              0x1519
//Bit 31:30        reserved
//Bit 29:28        reg_sad_dc_mode_sel       // unsigned ,    RW, default = 1  maxtran sel mode,0:MIN, 1:MAX, 2:AVG, default = 1
//Bit 27:24        reg_sad_dc_curv_thn       // unsigned ,    RW, default = 3  calculation for sad_thd(sad coring threshold). threshold1 = th0 + 2^thn to get the th1 of the curv
//Bit 23:16        reg_sad_dc_curv_th0       // unsigned ,    RW, default = 16  calculation for sad_thd(sad coring threshold). threshold0 of the curv
//Bit 15:12        reg_sad_dc_curv0          // unsigned ,    RW, default = 3  calculation for sad_thd(sad coring threshold). curve value0 of maxtran less than or equal th0
//Bit 11: 8        reg_sad_dc_curv1          // unsigned ,    RW, default = 8  calculation for sad_thd(sad coring threshold). curve value1 of maxtran more than or equal th1
//Bit  7: 0        reg_sad_pdtl_core         // unsigned ,    RW, default = 1  soft coring to abs(Y-APL) for calc_maxtran and calc_pure_detail. remove reg_sad_dc_dlt
#define FRC_ME_SAD_AC                              0x151a
//Bit 31:18        reserved
//Bit 17:16        reg_sad_ac_mode_sel       // unsigned ,    RW, default = 1  sad ac sel mode, 0: 0; 1: method A; 2: method B. default = 1.
//Bit 15: 8        reg_sad_ac_dlt            // unsigned ,    RW, default = 0  soft coring to SAD_AC calc
//Bit  7: 0        reg_sad_ac_apldif_core    // unsigned ,    RW, default = 0  soft coring to abs(apl0-apl1)
#define FRC_ME_SAD_DTL                             0x151b
//Bit 31:30        reg_sad_pdtl_mode_sel     // unsigned ,    RW, default = 1  sad pure detail 10bits sel mode, default = 1, 0: MIN ; 1: MAX; 2/3: AVG
//Bit 29:28        reg_sad_pdtl4_mode_sel    // unsigned ,    RW, default = 1  sad pure detail 4bit sel mode, default = 1, 0: MIN ; 1: MAX; 2/3: AVG
//Bit 27:24        reg_sad_pdtl4_gain2       // unsigned ,    RW, default = 2  curve value2 of pdtl_10bits more than or equal th2
//Bit 23:20        reg_sad_pdtl4_gain1       // unsigned ,    RW, default = 8  curve value1 of pdtl_10bits equal th1
//Bit 19:16        reg_sad_pdtl4_gain0       // unsigned ,    RW, default = 12  curve value0 of pdtl_10bits less than or equal th0  (TBC, changed from ppt)
//Bit 15:12        reg_sad_pdtl4_gain_th2    // unsigned ,    RW, default = 6  pdtl_10bits threshold1 = th0 + 2^th1 + 2^th2 to get the th1 of the curv
//Bit 11: 8        reg_sad_pdtl4_gain_th1    // unsigned ,    RW, default = 6  pdtl_10bits threshold1 = th0 + 2^th1 to get the th1 of the curv
//Bit  7: 0        reg_sad_pdtl4_gain_th0    // unsigned ,    RW, default = 2  pdtl_10bits threshold 0 of the curv
#define FRC_ME_SAD_MVDIFF                          0x151c
//Bit 31:29        reserved
//Bit 28           reg_mvdiff_window_mode    // unsigned ,    RW, default = 0  window size mode of the mvdiff/smvdiff calculation: 0: 3x3 window, 1:3x5 window, default =0
//Bit 27:26        reserved
//Bit 25:16        reg_mvdiff_smooth_th0     // unsigned ,    RW, default = 128  threshold 0 of the curv. mvdiff is based on MV integer at ME resolution.
//Bit 15:12        reg_mvdiff_core           // unsigned ,    RW, default = 3  hard coring to mvdiff_count, less than core, mvdiff set to 0;
//Bit 11: 8        reg_mvdiff_smooth_thn     // unsigned ,    RW, default = 6  mvdiff threshold1 = th0 + 2^thn to get the th1 of the curv
//Bit  7: 4        reg_mvdiff_smooth_gain0   // unsigned ,    RW, default = 4  gain of mvdiff less than or equal th0  (TBC, changed from ppt)
//Bit  3: 0        reg_mvdiff_smooth_gain1   // unsigned ,    RW, default = 12  gain of mvdiff more than or equal th1
#define FRC_ME_SAD_ACDC                            0x151d
//Bit 31:28        reg_wtdc_wsad_div         // unsigned ,    RW, default = 2  right shift of sad_dc*(dtl_4b+mvdiff_gain_4b)/(2^div)
//Bit 27           reg_wtdc_acsad_en         // unsigned ,    RW, default = 0  enable of using sad_ac in sad_dc calc to get the weight_DC_SAD, default =0. set to 0 to choose wgt_dc_sad
//Bit 26           reg_wtdc_dc_penalty_en    // unsigned ,    RW, default = 0  enable penalty on pure_sad
//Bit 25:16        reg_wtdc_pure_detail_max  // unsigned ,    RW, default = 512  max of pur detail (10bits) for pure_detail_tmp calculation
//Bit 15:12        reg_wtdc_wgt_alp          // unsigned ,    RW, default = 4  large block alpha, normalize 16 to 1. useless
//Bit 11: 8        reserved
//Bit  7: 4        reg_wtdc_mvdf_smooth_wt   // unsigned ,    RW, default = 0  gain (weight) to the mvdiff_10b to get the DC_SAD_result, norm to 4 as 1
//Bit  3: 0        reg_wtdc_pure_detail_wt   // unsigned ,    RW, default = 0  gain (weight) to the pure_detail_tmp to get the DC_SAD_result, norm to 4 as 1
#define FRC_ME_DZP_DTL                             0x151e
//Bit 31:28        reg_wtdc_wgt_sad_sblk_alp // unsigned ,    RW, default = 12  small block alpha, normalize 16 to 1. useless
//Bit 27:26        reserved
//Bit 25:16        reg_detail_zmv_th0        // unsigned ,    RW, default = 64  threshold 0 of the curv   (change name)
//Bit 15            reserved
//Bit 14           reg_dym_zmv_penalty_en    // unsigned ,    RW, default = 1  enable of dynamic zmv penalty, 0 use reg_me_penalty_zmv; 1: use the dym one
//Bit 13:12        reg_dym_zmv_penalty_div   // unsigned ,    RW, default = 0  normalized to (gain_dlt_z + gain_sad_z)
//Bit 11: 8        reg_detail_zmv_thn        // unsigned ,    RW, default = 6  pdtl_10bits threshold1 = th0 + 2^thn to get the th1 of the curv
//Bit  7: 4        reg_detail_zmv_gain0      // unsigned ,    RW, default = 15  gain of pdtl_10bits less than or equal th0  (TBC, changed from ppt)
//Bit  3: 0        reg_detail_zmv_gain1      // unsigned ,    RW, default = 4  gain of pdtl_10bits more than or equal th1
#define FRC_ME_DZP_SAD                             0x151f
//Bit 31:29        reserved
//Bit 28:16        reg_sad_zmv_th0           // unsigned ,    RW, default = 4224  threshold 0 of the curv   (change name)
//Bit 15:12        reserved
//Bit 11: 8        reg_sad_zmv_thn           // unsigned ,    RW, default = 6  sad_z threshold1 = th0 + 2^thn to get the th1 of the curv
//Bit  7: 4        reg_sad_zmv_gain0         // unsigned ,    RW, default = 4  gain of sad_z less than or equal th0  (TBC, changed from ppt)
//Bit  3: 0        reg_sad_zmv_gain1         // unsigned ,    RW, default = 9  gain of sad_z more than or equal th1
#define FRC_ME_OBME_MASK_TH                        0x1520
//Bit 31:24        reg_obme_mask_mode0_th    // unsigned ,    RW, default = 128  adaptive obme mask threshold for mode=0 on the mask0 texture;
//Bit 23:16        reg_obme_mask_mode1_th    // unsigned ,    RW, default = 64  adaptive obme mask threshold for mode=1 on the mask1 texture;
//Bit 15: 8        reg_obme_mask_mode2_th    // unsigned ,    RW, default = 32  adaptive obme mask threshold for mode=2 on the mask2 texture;
//Bit  7: 0        reg_obme_mask_mode3_th    // unsigned ,    RW, default = 10  adaptive obme mask threshold for mode=3 on the mask3 texture;
#define FRC_ME_OBME_MASK_RAT                       0x1521
//Bit 31:20        reserved
//Bit 19:16        reg_obme_mask_xside_rat0  // unsigned ,    RW, default = 7  adaptive obme mask current mask txture to upper mode txture ratio to decide if use this mask0, normn to 16 as 1
//Bit 15:12        reg_obme_mask_xside_rat1  // unsigned ,    RW, default = 8  adaptive obme mask current mask txture to upper mode txture ratio to decide if use this mask1, normn to 16 as 1
//Bit 11: 8        reg_obme_mask_xside_rat2  // unsigned ,    RW, default = 9  adaptive obme mask current mask txture to upper mode txture ratio to decide if use this mask2, normn to 16 as 1
//Bit  7: 0        reg_obme_mask_xside_thrd  // unsigned ,    RW, default = 10  adaptive obme mask threshold side texture constraint;
#define FRC_ME_ZGMV_PATCH_EN                       0x1522
//Bit 31:30        reserved
//Bit 29           reg_me_zmv_patch_en       // unsigned ,    RW, default = 1  enable zmv special processing.
//Bit 28           reg_me_gmv_patch_en       // unsigned ,    RW, default = 1  enable gmv special processing.
//Bit 27            reserved
//Bit 26:24        reg_me_gmv_patch_sft      // unsigned ,    RW, default = 1  precision for similarity of gmv and cmv for gmv special processing
//Bit 23:22        reserved
//Bit 21:16        reg_me_delta_penalty_gain // unsigned ,    RW, default = 0  penalty gain for delta value of random mv. 5;
//Bit 15:12        reserved
//Bit 11            reserved
//Bit 10: 8        reg_me_length_penalty_sft // unsigned ,    RW, default = 0  penalty gain precision for mv length at cn/nc loop.
//Bit  7: 0        reg_me_length_penalty_gain // unsigned ,    RW, default = 0  penalty gain for mv length at cn/nc loop.
#define FRC_ME_ZGMV_PATCH_PENALTY                  0x1523
//Bit 31:26        reg_me_zmv_patch_penalty  // unsigned ,    RW, default = 10  penalty for zmv special processing.
//Bit 25:16        reg_me_zmv_patch_dtl      // unsigned ,    RW, default = 150  detail th for zmv special processing.
//Bit 15:10        reg_me_gmv_patch_penalty  // unsigned ,    RW, default = 5  penalty for gmv special processing.
//Bit  9: 0        reg_me_gmv_patch_dtl      // unsigned ,    RW, default = 100  detail th for gmv special processing.
#define FRC_ME_E2E_CHK_EN                          0x1524
//Bit 31            reserved
//Bit 30           reg_me_1p2p_nokp          // unsigned ,    RW, default = 1  for bv_select_new. by default, set to 1.
//Bit 29           reg_me_1p2p_updt          // unsigned ,    RW, default = 0  for bv_select_new. by default, set to 0.
//Bit 28           reg_me_2p2p_updt          // unsigned ,    RW, default = 0  for bv_select_new. by default, set to 0.
//Bit 27: 0        reserved
#define FRC_ME_E2E_CHK_TH                          0x1525
//Bit 31: 0        reserved
#define FRC_ME_FS_SRC_1                            0x1526
//Bit 31:28        reserved
//Bit 27:16        reg_me_fs_src_smooth_gain1 // unsigned ,    RW, default = 255  max of fs_src penalty
//Bit 15: 8        reg_me_fs_src_smooth_gain0 // unsigned ,    RW, default = 10  min of fs_src penalty
//Bit  7: 4        reg_me_fs_src_smooth_thn  // unsigned ,    RW, default = 5  thn of cmv_t0 mv_diff
//Bit  3: 0        reg_me_fs_src_smooth_th0  // unsigned ,    RW, default = 3  th0 of cmv_t0 mv_diff
#define FRC_ME_FS_SRC_2                            0x1527
//Bit 31:23        reserved
//Bit 22           reg_me_fs_src_smooth_en_2 // unsigned ,    RW, default = 0  enable signal of add penalty for fs src to rpd for nc loop
//Bit 21           reg_me_fs_src_smooth_en_1 // unsigned ,    RW, default = 0  enable signal of add penalty for fs src to rpd for cn loop
//Bit 20           reg_me_fs_src_smooth_en_0 // unsigned ,    RW, default = 0  enable signal of add penalty for fs src to rpd for phase loop
//Bit 19:16        reg_me_fs_src_penalty_gain0 // unsigned ,    RW, default = 8  gain0 of fs src penalty, 8 normalize as 1
//Bit 15:12        reg_me_fs_src_penalty_gain1 // unsigned ,    RW, default = 8  gain1 of fs src penalty
//Bit 11: 8        reg_me_fs_src_penalty_gain2 // unsigned ,    RW, default = 8  gain2 of fs src penalty
//Bit  7: 4        reg_me_fs_src_cnt_th0     // unsigned ,    RW, default = 3  threshold0 of fs src cnt,    if fs_src_cnt less than or equal th0, gain=gain0
//Bit  3: 0        reg_me_fs_src_cnt_th1     // unsigned ,    RW, default = 6  threshold1 of fs src cnt,
#define FRC_ME_SAD_DDR_THX                         0x1528
//Bit 31:30        reserved
//Bit 29:28        reg_me_sad_ddr_sel        // unsigned ,    RW, default = 0  selection of sad to ddr, 0: sad_4x4, 1: pure_sad, 2 or 3: sad
//Bit 27:16        reg_me_sad_ddr_xth0       // unsigned ,    RW, default = 0  sad downscale curve x threshold0
//Bit 15: 8        reserved
//Bit  7: 4        reg_me_sad_ddr_xth1       // unsigned ,    RW, default = 7  sad downscale curve x threshold2 (th0 + 2^th1)
//Bit  3: 0        reg_me_sad_ddr_xth2       // unsigned ,    RW, default = 7  sad downscale curve x threshold3 (th0 + 2^th1 + 2^th2)
#define FRC_ME_SAD_DDR_THY                         0x1529
//Bit 31:24        reserved
//Bit 23:16        reg_me_sad_ddr_yth0       // unsigned ,    RW, default = 0  sad downscale curve y threshold0
//Bit 15: 8        reg_me_sad_ddr_yth1       // unsigned ,    RW, default = 128  sad downscale curve y threshold1
//Bit  7: 0        reg_me_sad_ddr_yth2       // unsigned ,    RW, default = 255  sad downscale curve y threshold2
#define FRC_ME_MVDIFF_DDR_THX                      0x152a
//Bit 31:26        reserved
//Bit 25:16        reg_me_mvdiff_ddr_xth0    // unsigned ,    RW, default = 0  downscale curve x threshold0
//Bit 15: 8        reserved
//Bit  7: 4        reg_me_mvdiff_ddr_xth1    // unsigned ,    RW, default = 9  mvdiff downscale curve x threshold2 (th0 + 2^th1)
//Bit  3: 0        reg_me_mvdiff_ddr_xth2    // unsigned ,    RW, default = 9  mvdiff downscale curve x threshold3 (th0 + 2^th1 + 2^th2)
#define FRC_ME_MVDIFF_DDR_THY                      0x152b
//Bit 31:24        reserved
//Bit 23:16        reg_me_mvdiff_ddr_yth0    // unsigned ,    RW, default = 0  mvdiff downscale curve y threshold0
//Bit 15: 8        reg_me_mvdiff_ddr_yth1    // unsigned ,    RW, default = 128  mvdiff downscale curve y threshold1
//Bit  7: 0        reg_me_mvdiff_ddr_yth2    // unsigned ,    RW, default = 255  mvdiff downscale curve y threshold2
#define FRC_ME_P0_EN_0                             0x152c
//Bit 31           reg_me_periodic0_en_0     // unsigned ,    RW, default = 1  enable periodic0 for each loop
//Bit 30           reg_me_periodic0_bv_compare_en_0 // unsigned ,    RW, default = 1  enable bv compare in periodic0 for each loop
//Bit 29           reg_me_periodic0_force_gmv_0 // unsigned ,    RW, default = 1  enable force gmv in periodic0 for each loop
//Bit 28            reserved
//Bit 27:24        reg_me_periodic0_mvdiff_w_0 // unsigned ,    RW, default = 9  mv diff weight for periodic0
//Bit 23:16        reg_me_periodic0_sad_th_0 // unsigned ,    RW, default = 144  mv sad threshold for periodic0
//Bit 15: 8        reg_me_periodic0_mvdiff_th_0 // unsigned ,    RW, default = 6  mv diff threshold for periodic0
//Bit  7: 0        reg_me_periodic0_similar_gmv_th_0 // unsigned ,    RW, default = 5  gmv similar threshold for periodic0
#define FRC_ME_P0_EN_1                             0x152d
//Bit 31           reg_me_periodic0_en_1     // unsigned ,    RW, default = 1  enable periodic0 for each loop
//Bit 30           reg_me_periodic0_bv_compare_en_1 // unsigned ,    RW, default = 1  enable bv compare in periodic0 for each loop
//Bit 29           reg_me_periodic0_force_gmv_1 // unsigned ,    RW, default = 1  enable force gmv in periodic0 for each loop
//Bit 28            reserved
//Bit 27:24        reg_me_periodic0_mvdiff_w_1 // unsigned ,    RW, default = 9  mv diff weight for periodic0
//Bit 23:16        reg_me_periodic0_sad_th_1 // unsigned ,    RW, default = 144  mv sad threshold for periodic0
//Bit 15: 8        reg_me_periodic0_mvdiff_th_1 // unsigned ,    RW, default = 6  mv diff threshold for periodic0
//Bit  7: 0        reg_me_periodic0_similar_gmv_th_1 // unsigned ,    RW, default = 5  gmv similar threshold for periodic0
#define FRC_ME_P0_EN_2                             0x152e
//Bit 31           reg_me_periodic0_en_2     // unsigned ,    RW, default = 1  enable periodic0 for each loop
//Bit 30           reg_me_periodic0_bv_compare_en_2 // unsigned ,    RW, default = 1  enable bv compare in periodic0 for each loop
//Bit 29           reg_me_periodic0_force_gmv_2 // unsigned ,    RW, default = 1  enable force gmv in periodic0 for each loop
//Bit 28            reserved
//Bit 27:24        reg_me_periodic0_mvdiff_w_2 // unsigned ,    RW, default = 9  mv diff weight for periodic0
//Bit 23:16        reg_me_periodic0_sad_th_2 // unsigned ,    RW, default = 144  mv sad threshold for periodic0
//Bit 15: 8        reg_me_periodic0_mvdiff_th_2 // unsigned ,    RW, default = 6  mv diff threshold for periodic0
//Bit  7: 0        reg_me_periodic0_similar_gmv_th_2 // unsigned ,    RW, default = 5  gmv similar threshold for periodic0
#define FRC_ME_P0_TH                               0x152f
//Bit 31:18        reserved
//Bit 17:16        reg_me_periodic0_gmv_sel  // unsigned ,    RW, default = 1  gmv selection for periodic0, 0: global gmv, 1: finer gmv, 2: region_gmv, 3: force gmv;
//Bit 15:10        reserved
//Bit  9: 0        reg_me_periodic0_gmv_dtl_th // unsigned ,    RW, default = 0  gmv detail thresold for periodic0
#define FRC_ME_P0_REGION_EN                        0x1530
//Bit 31           reg_me_region_gmv_like_en // unsigned ,    RW, default = 0  region gmv like enable
//Bit 30:28        reserved
//Bit 27           reg_me_region_gmv_periodic0_en_0 // unsigned ,    RW, default = 1  region gmv enable for 12 regions
//Bit 26           reg_me_region_gmv_periodic0_en_1 // unsigned ,    RW, default = 1  region gmv enable for 12 regions
//Bit 25           reg_me_region_gmv_periodic0_en_2 // unsigned ,    RW, default = 1  region gmv enable for 12 regions
//Bit 24           reg_me_region_gmv_periodic0_en_3 // unsigned ,    RW, default = 1  region gmv enable for 12 regions
//Bit 23           reg_me_region_gmv_periodic0_en_4 // unsigned ,    RW, default = 1  region gmv enable for 12 regions
//Bit 22           reg_me_region_gmv_periodic0_en_5 // unsigned ,    RW, default = 1  region gmv enable for 12 regions
//Bit 21           reg_me_region_gmv_periodic0_en_6 // unsigned ,    RW, default = 1  region gmv enable for 12 regions
//Bit 20           reg_me_region_gmv_periodic0_en_7 // unsigned ,    RW, default = 1  region gmv enable for 12 regions
//Bit 19           reg_me_region_gmv_periodic0_en_8 // unsigned ,    RW, default = 1  region gmv enable for 12 regions
//Bit 18           reg_me_region_gmv_periodic0_en_9 // unsigned ,    RW, default = 1  region gmv enable for 12 regions
//Bit 17           reg_me_region_gmv_periodic0_en_10 // unsigned ,    RW, default = 1  region gmv enable for 12 regions
//Bit 16           reg_me_region_gmv_periodic0_en_11 // unsigned ,    RW, default = 1  region gmv enable for 12 regions
//Bit 15: 8        reserved
//Bit  7: 0        reg_me_region_gmv_mvdiff_th // unsigned ,    RW, default = 4  region gmv mvdiff threshold
#define FRC_ME_P0_REGION_TH0                       0x1531
//Bit 31            reserved
//Bit 30:28        reg_me_region_gmv_valid_cnt_th // unsigned ,    RW, default = 2  region gmv valid count threshold
//Bit 27            reserved
//Bit 26:16        reg_me_region_gmv_diff_min_th // unsigned ,    RW, default = 8  region gmv diff min threshold
//Bit 15:13        reserved
//Bit 12: 0        reg_me_region_gmv_sad_th  // unsigned ,    RW, default = 150  region gmv sad threshold
#define FRC_ME_P0_REGION_TH1                       0x1532
//Bit 31:30        reserved
//Bit 29:20        reg_me_region_gmv_dtl_th  // unsigned ,    RW, default = 120  region gmv detail threshold
//Bit 19:12        reg_me_region_gmv_similar_gmv_th // unsigned ,    RW, default = 6  region gmv similar gmv threshold
//Bit 11: 0        reg_me_region_gmv_like_sad_th // unsigned ,    RW, default = 150  region gmv like sad threshold
#define FRC_ME_P1_EN_0                             0x1533
//Bit 31:28        reserved
//Bit 27           reg_me_periodic_en_0      // unsigned ,    RW, default = 1  mv smooth enable
//Bit 26           reg_me_periodic_z_rule_en_0 // unsigned ,    RW, default = 1  zero mv enable for periodic case in mv smoothing
//Bit 25           reg_me_periodic_aplsad_rule_en_0 // unsigned ,    RW, default = 1  mv smooth use alpsad rule
//Bit 24           reg_me_periodic_use_small_0 // unsigned ,    RW, default = 0  smooth mv use small one enable
//Bit 23:18        reserved
//Bit 17:16        reg_me_periodic_sad_similar_th_0 // unsigned ,    RW, default = 2  threshold for similar sad decision in mv smoothing
//Bit 15: 8        reg_me_periodic_mv_diff_th2_0 // unsigned ,    RW, default = 60  threshold for bv1.mvdiff
//Bit  7: 0        reg_me_periodic_mv_diff_th_0 // unsigned ,    RW, default = 40  diff for similar mvdiff decision in mv smoothing
#define FRC_ME_P1_EN_1                             0x1534
//Bit 31:28        reserved
//Bit 27           reg_me_periodic_en_1      // unsigned ,    RW, default = 1  mv smooth enable
//Bit 26           reg_me_periodic_z_rule_en_1 // unsigned ,    RW, default = 1  zero mv enable for periodic case in mv smoothing
//Bit 25           reg_me_periodic_aplsad_rule_en_1 // unsigned ,    RW, default = 1  mv smooth use alpsad rule
//Bit 24           reg_me_periodic_use_small_1 // unsigned ,    RW, default = 0  smooth mv use small one enable
//Bit 23:18        reserved
//Bit 17:16        reg_me_periodic_sad_similar_th_1 // unsigned ,    RW, default = 2  threshold for similar sad decision in mv smoothing
//Bit 15: 8        reg_me_periodic_mv_diff_th2_1 // unsigned ,    RW, default = 60  threshold for bv1.mvdiff
//Bit  7: 0        reg_me_periodic_mv_diff_th_1 // unsigned ,    RW, default = 40  diff for similar mvdiff decision in mv smoothing
#define FRC_ME_P1_EN_2                             0x1535
//Bit 31:28        reserved
//Bit 27           reg_me_periodic_en_2      // unsigned ,    RW, default = 1  mv smooth enable
//Bit 26           reg_me_periodic_z_rule_en_2 // unsigned ,    RW, default = 1  zero mv enable for periodic case in mv smoothing
//Bit 25           reg_me_periodic_aplsad_rule_en_2 // unsigned ,    RW, default = 1  mv smooth use alpsad rule
//Bit 24           reg_me_periodic_use_small_2 // unsigned ,    RW, default = 0  smooth mv use small one enable
//Bit 23:18        reserved
//Bit 17:16        reg_me_periodic_sad_similar_th_2 // unsigned ,    RW, default = 2  threshold for similar sad decision in mv smoothing
//Bit 15: 8        reg_me_periodic_mv_diff_th2_2 // unsigned ,    RW, default = 60  threshold for bv1.mvdiff
//Bit  7: 0        reg_me_periodic_mv_diff_th_2 // unsigned ,    RW, default = 40  diff for similar mvdiff decision in mv smoothing
#define FRC_ME_P1_APL                              0x1536
//Bit 31:30        reg_me_periodic_apl_sel   // unsigned ,    RW, default = 0  apl selection for smooth proc. 0: min(avg_bv0_apl, avg_bv1_apl), 1: max, 2or3: avg
//Bit 29:28        reserved
//Bit 27:24        reg_me_periodic_apl_gain0 // unsigned ,    RW, default = 3  apl gain0 for smooth proc.
//Bit 23:20        reg_me_periodic_apl_gain1 // unsigned ,    RW, default = 4  apl gain1 for smooth proc.
//Bit 19:16        reg_me_periodic_apl_gain2 // unsigned ,    RW, default = 6  apl gain2 for smooth proc.
//Bit 15: 8        reg_me_periodic_apl_gain_th0 // unsigned ,    RW, default = 32  apl threshold0 for apl gain for smooth proc.
//Bit  7: 4        reg_me_periodic_apl_gain_th1 // unsigned ,    RW, default = 6  apl threshold1 for apl gain for smooth proc., th0 + 2^th1
//Bit  3: 0        reg_me_periodic_apl_gain_th2 // unsigned ,    RW, default = 6  apl threshold2 for apl gain for smooth proc., th0 + 2^th1 + 2^th2
#define FRC_ME_P1_SAD                              0x1537
//Bit 31:27        reserved
//Bit 26           reg_me_periodic_mv_diff_rule2_en // unsigned ,    RW, default = 0  enable mv diff rule2 for periodic case
//Bit 25           reg_me_periodic_mv_diff_rule_en // unsigned ,    RW, default = 1  ena ble mv diff rule for periodic case in mv smoothing
//Bit 24           reg_me_periodic_zmv_diff_force_z // unsigned ,    RW, default = 0  smooth mv use small one enable, new added. change default to 0.
//Bit 23:16        reg_me_periodic_sad_similar_th1 // unsigned ,    RW, default = 0  threshold1 for similar sad decision
//Bit 15: 8        reg_me_periodic_sad_similar_th2 // unsigned ,    RW, default = 0  threshold2 for similar sad decision
//Bit  7: 0        reg_me_periodic_sad_similar_th3 // unsigned ,    RW, default = 4  threshold3 for similar sad decision
#define FRC_MEPP_SMOB_EN                           0x1538
//Bit 31           reg_smob_en               // unsigned ,    RW, default = 0  enable samll object proc.
//Bit 30           reg_smob_rule0_en         // unsigned ,    RW, default = 1  enable rule0 for samll object proc.
//Bit 29           reg_smob_rule1_en         // unsigned ,    RW, default = 1  enable rule1 for samll object proc.
//Bit 28           reg_smob_rule2_en         // unsigned ,    RW, default = 1  enable rule2 for samll object proc.
//Bit 27:26        reg_me_pp_mvsft           // unsigned ,    RW, default = 2  set to 0 or 2 for consideration of quarter pixel or not in SMOB process.
//Bit 25: 0        reserved
#define FRC_MEPP_SMOB_TH0_0                        0x1539
//Bit 31           reg_smob_cp_sad_ad_0      // unsigned ,    RW, default = 0  pc sad threshold and in rule0/1/2 for samll object proc.
//Bit 30:24        reserved
//Bit 23:16        reg_smob_cp_sad_th_0      // unsigned ,    RW, default = 128  pc sad threshold in rule0/1/2 for samll object proc.
//Bit 15           reg_smob_cp_dtl_ad_0      // unsigned ,    RW, default = 0  pc detail threshold and in rule0/1/2 for samll object proc.
//Bit 14:12        reserved
//Bit 11: 8        reg_smob_cp_dtl_th_0      // unsigned ,    RW, default = 0  pc detail threshold in rule0/1/2 for samll object proc.
//Bit  7: 0        reg_smob_cp_static_th_0   // unsigned ,    RW, default = 80  pc static threshold in rule0/1/2 for samll object proc.
#define FRC_MEPP_SMOB_TH0_1                        0x153a
//Bit 31           reg_smob_cp_sad_ad_1      // unsigned ,    RW, default = 0  pc sad threshold and in rule0/1/2 for samll object proc.
//Bit 30:24        reserved
//Bit 23:16        reg_smob_cp_sad_th_1      // unsigned ,    RW, default = 128  pc sad threshold in rule0/1/2 for samll object proc.
//Bit 15           reg_smob_cp_dtl_ad_1      // unsigned ,    RW, default = 0  pc detail threshold and in rule0/1/2 for samll object proc.
//Bit 14:12        reserved
//Bit 11: 8        reg_smob_cp_dtl_th_1      // unsigned ,    RW, default = 1  pc detail threshold in rule0/1/2 for samll object proc.
//Bit  7: 0        reg_smob_cp_static_th_1   // unsigned ,    RW, default = 255  pc static threshold in rule0/1/2 for samll object proc.
#define FRC_MEPP_SMOB_TH0_2                        0x153b
//Bit 31           reg_smob_cp_sad_ad_2      // unsigned ,    RW, default = 0  pc sad threshold and in rule0/1/2 for samll object proc.
//Bit 30:24        reserved
//Bit 23:16        reg_smob_cp_sad_th_2      // unsigned ,    RW, default = 128  pc sad threshold in rule0/1/2 for samll object proc.
//Bit 15           reg_smob_cp_dtl_ad_2      // unsigned ,    RW, default = 0  pc detail threshold and in rule0/1/2 for samll object proc.
//Bit 14:12        reserved
//Bit 11: 8        reg_smob_cp_dtl_th_2      // unsigned ,    RW, default = 1  pc detail threshold in rule0/1/2 for samll object proc.
//Bit  7: 0        reg_smob_cp_static_th_2   // unsigned ,    RW, default = 255  pc static threshold in rule0/1/2 for samll object proc.
#define FRC_MEPP_SMOB_R0_TH                        0x153c
//Bit 31:24        reg_smob_rule0_mv_min_diff_th // unsigned ,    RW, default = 8  mv min diff threshold in rule0 for samll object proc.
//Bit 23:16        reg_smob_rule0_mv_max_diff_th // unsigned ,    RW, default = 16  mv max diff threshold in rule0 for samll object proc.
//Bit 15: 8        reg_smob_rule0_mv_min_similar_th // unsigned ,    RW, default = 14  mv min similar threshold in rule0 for samll object proc.
//Bit  7: 0        reg_smob_rule0_mv_max_similar_th // unsigned ,    RW, default = 32  mv max similar threshold in rule0 for samll object proc.
#define FRC_MEPP_SMOB_R12_TH                       0x153d
//Bit 31:30        reg_smob_rule0_mv_diff_mode // unsigned ,    RW, default = 2  method for diff_phs_mv selection. 0:MIN(diff_phs_mv_cp,diff_phs_mv_pc), 1:MAX, 2:AVG.
//Bit 29:28        reserved
//Bit 27            reserved
//Bit 26:24        reg_smob_rule1_mv_trend_xgain // unsigned ,    RW, default = 1  mv trend gain along x in rule1 for samll object proc.
//Bit 23:16        reg_smob_rule1_mv_trend_xth // unsigned ,    RW, default = 3  mv trend threshold along x in rule1 for samll object proc.
//Bit 15:11        reserved
//Bit 10: 8        reg_smob_rule2_mv_trend_ygain // unsigned ,    RW, default = 1  mv trend gain along y in rule1 for samll object proc.
//Bit  7: 0        reg_smob_rule2_mv_trend_yth // unsigned ,    RW, default = 3  mv trend threshold along y in rule1 for samll object proc.
#define FRC_MEPP_LMT_MOTION_0                      0x153e
//Bit 31:24        reserved
//Bit 23           reg_me_lmt_motion_use_lft2_0 // unsigned ,    RW, default = 0  enable use left 2 block for mv limit func
//Bit 22           reg_me_lmt_motion_en_0    // unsigned ,    RW, default = 1  enable limit motion for mv limit proc.
//Bit 21           reg_me_lmt_vbuf_en_0      // unsigned ,    RW, default = 0  enable v-buffer clean for limit proc.
//Bit 20           reg_me_lmt_lfb_en_0       // unsigned ,    RW, default = 0  local fallback enable for limit proc.
//Bit 19:16        reg_me_lmt_no_dtl_th_0    // unsigned ,    RW, default = 2  no detail threshold for limit proc.
//Bit 15:13        reserved
//Bit 12: 0        reg_me_lmt_sad_th_0       // unsigned ,    RW, default = 128  limit threshold for sad
#define FRC_MEPP_LMT_VBUF_0                        0x153f
//Bit 31:24        reg_me_lmt_vbuf_apl_th_0  // unsigned ,    RW, default = 48  alp threshold for v-buffer clean in limit proc. TODO
//Bit 23:20        reg_me_lmt_vbuf_dtl_th_0  // unsigned ,    RW, default = 5  detail threshold for v-buffer clean in limit proc.
//Bit 19:16        reg_me_lmt_vbuf_no_dtl_th2_0 // unsigned ,    RW, default = 15  no-detail threshold for v-buffer clean in limit proc.
//Bit 15            reserved
//Bit 14:13        reg_me_lmt_vbuf_method_sel_0 // unsigned ,    RW, default = 0  method selection for v-buffer clean for limit proc.
//Bit 12: 0        reg_me_lmt_vbuf_sad_th_0  // unsigned ,    RW, default = 48  sad threshold for v-buffer clean in limit proc.
#define FRC_MEPP_LMT_LFB_0                         0x1540
//Bit 31            reserved
//Bit 30:28        reg_me_lmt_lfb_sad_th1_shft_0 // unsigned ,    RW, default = 3  sad threshold shift for local fallback for limit proc.
//Bit 27:26        reg_me_lmt_lfb_sel_0      // unsigned ,    RW, default = 2  selection for local fallback for limit proc.
//Bit 25:24        reg_me_lmt_lfb_method_sel_0 // unsigned ,    RW, default = 2  method selection for local fallback for limit proc.
//Bit 23:16        reg_me_lmt_lfb_sad_th1_0  // unsigned ,    RW, default = 8  sad threshold for local fallback for limit proc.
//Bit 15: 0        reg_me_lmt_lfb_sad_diff_0 // unsigned ,    RW, default = 37  sad diff for local fallback for limit proc.
#define FRC_MEPP_LMT_MOTION_1                      0x1541
//Bit 31:24        reserved
//Bit 23           reg_me_lmt_motion_use_lft2_1 // unsigned ,    RW, default = 0  enable use left 2 block for mv limit func
//Bit 22           reg_me_lmt_motion_en_1    // unsigned ,    RW, default = 1  enable limit motion for mv limit proc.
//Bit 21           reg_me_lmt_vbuf_en_1      // unsigned ,    RW, default = 0  enable v-buffer clean for limit proc.
//Bit 20           reg_me_lmt_lfb_en_1       // unsigned ,    RW, default = 0  local fallback enable for limit proc.
//Bit 19:16        reg_me_lmt_no_dtl_th_1    // unsigned ,    RW, default = 2  no detail threshold for limit proc.
//Bit 15:13        reserved
//Bit 12: 0        reg_me_lmt_sad_th_1       // unsigned ,    RW, default = 128  limit threshold for sad
#define FRC_MEPP_LMT_VBUF_1                        0x1542
//Bit 31:24        reg_me_lmt_vbuf_apl_th_1  // unsigned ,    RW, default = 48  alp threshold for v-buffer clean in limit proc. TODO
//Bit 23:20        reg_me_lmt_vbuf_dtl_th_1  // unsigned ,    RW, default = 5  detail threshold for v-buffer clean in limit proc.
//Bit 19:16        reg_me_lmt_vbuf_no_dtl_th2_1 // unsigned ,    RW, default = 15  no-detail threshold for v-buffer clean in limit proc.
//Bit 15            reserved
//Bit 14:13        reg_me_lmt_vbuf_method_sel_1 // unsigned ,    RW, default = 0  method selection for v-buffer clean for limit proc.
//Bit 12: 0        reg_me_lmt_vbuf_sad_th_1  // unsigned ,    RW, default = 48  sad threshold for v-buffer clean in limit proc.
#define FRC_MEPP_LMT_LFB_1                         0x1543
//Bit 31            reserved
//Bit 30:28        reg_me_lmt_lfb_sad_th1_shft_1 // unsigned ,    RW, default = 3  sad threshold shift for local fallback for limit proc.
//Bit 27:26        reg_me_lmt_lfb_sel_1      // unsigned ,    RW, default = 2  selection for local fallback for limit proc.
//Bit 25:24        reg_me_lmt_lfb_method_sel_1 // unsigned ,    RW, default = 2  method selection for local fallback for limit proc.
//Bit 23:16        reg_me_lmt_lfb_sad_th1_1  // unsigned ,    RW, default = 8  sad threshold for local fallback for limit proc.
//Bit 15: 0        reg_me_lmt_lfb_sad_diff_1 // unsigned ,    RW, default = 37  sad diff for local fallback for limit proc.
#define FRC_MEPP_LMT_MOTION_2                      0x1544
//Bit 31:24        reserved
//Bit 23           reg_me_lmt_motion_use_lft2_2 // unsigned ,    RW, default = 0  enable use left 2 block for mv limit func
//Bit 22           reg_me_lmt_motion_en_2    // unsigned ,    RW, default = 1  enable limit motion for mv limit proc.
//Bit 21           reg_me_lmt_vbuf_en_2      // unsigned ,    RW, default = 0  enable v-buffer clean for limit proc.
//Bit 20           reg_me_lmt_lfb_en_2       // unsigned ,    RW, default = 0  local fallback enable for limit proc.
//Bit 19:16        reg_me_lmt_no_dtl_th_2    // unsigned ,    RW, default = 2  no detail threshold for limit proc.
//Bit 15:13        reserved
//Bit 12: 0        reg_me_lmt_sad_th_2       // unsigned ,    RW, default = 128  limit threshold for sad
#define FRC_MEPP_LMT_VBUF_2                        0x1545
//Bit 31:24        reg_me_lmt_vbuf_apl_th_2  // unsigned ,    RW, default = 48  alp threshold for v-buffer clean in limit proc. TODO
//Bit 23:20        reg_me_lmt_vbuf_dtl_th_2  // unsigned ,    RW, default = 5  detail threshold for v-buffer clean in limit proc.
//Bit 19:16        reg_me_lmt_vbuf_no_dtl_th2_2 // unsigned ,    RW, default = 15  no-detail threshold for v-buffer clean in limit proc.
//Bit 15            reserved
//Bit 14:13        reg_me_lmt_vbuf_method_sel_2 // unsigned ,    RW, default = 0  method selection for v-buffer clean for limit proc.
//Bit 12: 0        reg_me_lmt_vbuf_sad_th_2  // unsigned ,    RW, default = 48  sad threshold for v-buffer clean in limit proc.
#define FRC_MEPP_LMT_LFB_2                         0x1546
//Bit 31            reserved
//Bit 30:28        reg_me_lmt_lfb_sad_th1_shft_2 // unsigned ,    RW, default = 3  sad threshold shift for local fallback for limit proc.
//Bit 27:26        reg_me_lmt_lfb_sel_2      // unsigned ,    RW, default = 2  selection for local fallback for limit proc.
//Bit 25:24        reg_me_lmt_lfb_method_sel_2 // unsigned ,    RW, default = 2  method selection for local fallback for limit proc.
//Bit 23:16        reg_me_lmt_lfb_sad_th1_2  // unsigned ,    RW, default = 8  sad threshold for local fallback for limit proc.
//Bit 15: 0        reg_me_lmt_lfb_sad_diff_2 // unsigned ,    RW, default = 37  sad diff for local fallback for limit proc.
#define FRC_MEPP_LMT_VBUF                          0x1547
//Bit 31:16        reserved
//Bit 15:13        reserved
//Bit 12: 0        reg_me_lmt_vbuf_sad_diff_th // unsigned ,    RW, default = 2560  sad diff threshold for v-buffer clean in limit proc.
#define FRC_ME_GMV                                 0x1548
//Bit 31:29        reserved
//Bit 28:16        reg_me_gmv_vector_0       // signed ,    RW, default = 0  global mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15           reg_me_gmv_invalid        // unsigned ,    RW, default = 1  when 1, gmv is invalid.
//Bit 14           reg_me_gmv_mux_sel        // unsigned ,    RW, default = 0  1: use HW gmv(ro_me_gmv, ro_me_gmv_invalid); 0: use firmware gmv(reg_me_gmv, reg_me_gmv_invalid).
//Bit 13:12        reserved
//Bit 11: 0        reg_me_gmv_vector_1       // signed ,    RW, default = 0
#define FRC_ME_GMV_2ND                             0x1549
//Bit 31:29        reserved
//Bit 28:16        reg_me_gmv_2nd_vector_0   // signed ,    RW, default = 0  global mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_gmv_2nd_vector_1   // signed ,    RW, default = 0
#define FRC_ME_GMV_PATCH                           0x154a
//Bit 31:29        reserved
//Bit 28:16        reg_me_gmv_patch_vector_0 // signed ,    RW, default = 0
//Bit 15           reg_me_gmv_patch_invalid  // unsigned ,    RW, default = 1  when 1, gmv is invalid.
//Bit 14:12        reserved
//Bit 11: 0        reg_me_gmv_patch_vector_1 // signed ,    RW, default = 0
#define FRC_ME_PG_ST_MV_0                          0x154b
//Bit 31:29        reserved
//Bit 28:16        reg_me_pg_st_mv_0_vector_0 // signed ,    RW, default = 0  me pattern generation start mvx
//Bit 15:12        reserved
//Bit 11: 0        reg_me_pg_st_mv_0_vector_1 // signed ,    RW, default = 0  me pattern generation start mvy
#define FRC_ME_PG_ROW_DELTA_MV_0                   0x154c
//Bit 31:29        reserved
//Bit 28:16        reg_me_pg_row_delta_mv_0_vector_0 // signed ,    RW, default = 0  me pattern generation delta mvx for row
//Bit 15:12        reserved
//Bit 11: 0        reg_me_pg_row_delta_mv_0_vector_1 // signed ,    RW, default = 0  me pattern generation delta mvy for row
#define FRC_ME_PG_COL_DELTA_MV_0                   0x154d
//Bit 31:29        reserved
//Bit 28:16        reg_me_pg_col_delta_mv_0_vector_0 // signed ,    RW, default = 0  me pattern generation delta mvx for col
//Bit 15:12        reserved
//Bit 11: 0        reg_me_pg_col_delta_mv_0_vector_1 // signed ,    RW, default = 0  me pattern generation delta mvy for col
#define FRC_ME_PG_ST_MV_1                          0x154e
//Bit 31:29        reserved
//Bit 28:16        reg_me_pg_st_mv_1_vector_0 // signed ,    RW, default = 0  me pattern generation start mvx
//Bit 15:12        reserved
//Bit 11: 0        reg_me_pg_st_mv_1_vector_1 // signed ,    RW, default = 0  me pattern generation start mvy
#define FRC_ME_PG_ROW_DELTA_MV_1                   0x154f
//Bit 31:29        reserved
//Bit 28:16        reg_me_pg_row_delta_mv_1_vector_0 // signed ,    RW, default = 0  me pattern generation delta mvx for row
//Bit 15:12        reserved
//Bit 11: 0        reg_me_pg_row_delta_mv_1_vector_1 // signed ,    RW, default = 0  me pattern generation delta mvy for row
#define FRC_ME_PG_COL_DELTA_MV_1                   0x1550
//Bit 31:29        reserved
//Bit 28:16        reg_me_pg_col_delta_mv_1_vector_0 // signed ,    RW, default = 0  me pattern generation delta mvx for col
//Bit 15:12        reserved
//Bit 11: 0        reg_me_pg_col_delta_mv_1_vector_1 // signed ,    RW, default = 0  me pattern generation delta mvy for col
#define FRC_ME_PG_ST_MV_2                          0x1551
//Bit 31:29        reserved
//Bit 28:16        reg_me_pg_st_mv_2_vector_0 // signed ,    RW, default = 0  me pattern generation start mvx
//Bit 15:12        reserved
//Bit 11: 0        reg_me_pg_st_mv_2_vector_1 // signed ,    RW, default = 0  me pattern generation start mvy
#define FRC_ME_PG_ROW_DELTA_MV_2                   0x1552
//Bit 31:29        reserved
//Bit 28:16        reg_me_pg_row_delta_mv_2_vector_0 // signed ,    RW, default = 0  me pattern generation delta mvx for row
//Bit 15:12        reserved
//Bit 11: 0        reg_me_pg_row_delta_mv_2_vector_1 // signed ,    RW, default = 0  me pattern generation delta mvy for row
#define FRC_ME_PG_COL_DELTA_MV_2                   0x1553
//Bit 31:29        reserved
//Bit 28:16        reg_me_pg_col_delta_mv_2_vector_0 // signed ,    RW, default = 0  me pattern generation delta mvx for col
//Bit 15:12        reserved
//Bit 11: 0        reg_me_pg_col_delta_mv_2_vector_1 // signed ,    RW, default = 0  me pattern generation delta mvy for col
#define FRC_ME_STAT_GMV_RGN_0                      0x1554
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_0_vector_0 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_0_vector_1 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_2ND_0                  0x1555
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_2nd_0_vector_0 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_2nd_0_vector_1 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_1                      0x1556
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_1_vector_0 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_1_vector_1 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_2ND_1                  0x1557
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_2nd_1_vector_0 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_2nd_1_vector_1 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_2                      0x1558
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_2_vector_0 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_2_vector_1 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_2ND_2                  0x1559
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_2nd_2_vector_0 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_2nd_2_vector_1 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_3                      0x155a
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_3_vector_0 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_3_vector_1 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_2ND_3                  0x155b
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_2nd_3_vector_0 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_2nd_3_vector_1 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_4                      0x155c
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_4_vector_0 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_4_vector_1 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_2ND_4                  0x155d
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_2nd_4_vector_0 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_2nd_4_vector_1 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_5                      0x155e
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_5_vector_0 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_5_vector_1 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_2ND_5                  0x155f
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_2nd_5_vector_0 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_2nd_5_vector_1 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_6                      0x1560
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_6_vector_0 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_6_vector_1 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_2ND_6                  0x1561
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_2nd_6_vector_0 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_2nd_6_vector_1 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_7                      0x1562
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_7_vector_0 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_7_vector_1 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_2ND_7                  0x1563
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_2nd_7_vector_0 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_2nd_7_vector_1 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_8                      0x1564
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_8_vector_0 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_8_vector_1 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_2ND_8                  0x1565
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_2nd_8_vector_0 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_2nd_8_vector_1 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_9                      0x1566
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_9_vector_0 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_9_vector_1 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_2ND_9                  0x1567
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_2nd_9_vector_0 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_2nd_9_vector_1 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_10                     0x1568
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_10_vector_0 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_10_vector_1 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_2ND_10                 0x1569
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_2nd_10_vector_0 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_2nd_10_vector_1 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_11                     0x156a
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_11_vector_0 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_11_vector_1 // signed ,    RW, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GMV_RGN_2ND_11                 0x156b
//Bit 31:29        reserved
//Bit 28:16        reg_me_region_gmv_2nd_11_vector_0 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        reg_me_region_gmv_2nd_11_vector_1 // signed ,    RW, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_STAT_GLB_APL                        0x156c
//Bit 31:24        reg_me_glb_apl_0          // unsigned ,    RW, default = 0  global apl for each loop
//Bit 23:16        reg_me_glb_apl_1          // unsigned ,    RW, default = 0  global apl for each loop
//Bit 15: 8        reg_me_glb_apl_2          // unsigned ,    RW, default = 0  global apl for each loop
//Bit  7: 0        reserved
#define FRC_ME_REGION_READONLY_EN_0                0x156d
//Bit 31: 8        reserved
//Bit  7           reg_region_ro_en_0_7      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  6           reg_region_ro_en_0_6      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  5           reg_region_ro_en_0_5      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  4           reg_region_ro_en_0_4      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  3           reg_region_ro_en_0_3      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  2           reg_region_ro_en_0_2      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  1           reg_region_ro_en_0_1      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  0           reg_region_ro_en_0_0      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
#define FRC_ME_REGION_READONLY_EN_1                0x156e
//Bit 31: 8        reserved
//Bit  7           reg_region_ro_en_1_7      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  6           reg_region_ro_en_1_6      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  5           reg_region_ro_en_1_5      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  4           reg_region_ro_en_1_4      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  3           reg_region_ro_en_1_3      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  2           reg_region_ro_en_1_2      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  1           reg_region_ro_en_1_1      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  0           reg_region_ro_en_1_0      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
#define FRC_ME_REGION_READONLY_EN_2                0x156f
//Bit 31: 8        reserved
//Bit  7           reg_region_ro_en_2_7      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  6           reg_region_ro_en_2_6      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  5           reg_region_ro_en_2_5      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  4           reg_region_ro_en_2_4      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  3           reg_region_ro_en_2_3      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  2           reg_region_ro_en_2_2      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  1           reg_region_ro_en_2_1      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  0           reg_region_ro_en_2_0      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
#define FRC_ME_REGION_READONLY_EN_3                0x1570
//Bit 31: 8        reserved
//Bit  7           reg_region_ro_en_3_7      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  6           reg_region_ro_en_3_6      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  5           reg_region_ro_en_3_5      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  4           reg_region_ro_en_3_4      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  3           reg_region_ro_en_3_3      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  2           reg_region_ro_en_3_2      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  1           reg_region_ro_en_3_1      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  0           reg_region_ro_en_3_0      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
#define FRC_ME_REGION_READONLY_EN_4                0x1571
//Bit 31: 8        reserved
//Bit  7           reg_region_ro_en_4_7      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  6           reg_region_ro_en_4_6      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  5           reg_region_ro_en_4_5      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  4           reg_region_ro_en_4_4      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  3           reg_region_ro_en_4_3      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  2           reg_region_ro_en_4_2      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  1           reg_region_ro_en_4_1      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  0           reg_region_ro_en_4_0      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
#define FRC_ME_REGION_READONLY_EN_5                0x1572
//Bit 31: 8        reserved
//Bit  7           reg_region_ro_en_5_7      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  6           reg_region_ro_en_5_6      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  5           reg_region_ro_en_5_5      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  4           reg_region_ro_en_5_4      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  3           reg_region_ro_en_5_3      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  2           reg_region_ro_en_5_2      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  1           reg_region_ro_en_5_1      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
//Bit  0           reg_region_ro_en_5_0      // unsigned ,    RW, default = 0  region readback control mv_smooth_process3
#define FRC_ME_REGION_RP_PENALTY                   0x1573
//Bit 31:24        reserved
//Bit 23:20        reg_region_rp_gmvdiff_th0 // unsigned ,    RW, default = 4  rp_gmvdiff threshold 0 of the curv   (change name)
//Bit 19:16        reg_region_rp_gmvdiff_thn // unsigned ,    RW, default = 5  rp_gmvdiff threshold1 = th0 + 2^thn to get the th1 of the curv
//Bit 15: 8        reg_region_rp_penalty_min // unsigned ,    RW, default = 0  repeat pattern penalty minimum of mvdiff less than or equal th0  (TBC, changed from ppt)
//Bit  7: 0        reg_region_rp_penalty_max // unsigned ,    RW, default = 160  repeat pattern penalty maximum of mvdiff more than or equal th1
#define FRC_ME_RP_PENALTY_GAIN                     0x1574
//Bit 31            reserved
//Bit 30           reg_penalty_rp_mvdiff_en_2 // unsigned ,    RW, default = 0  enable signal of nc loop for add mvdiff penalty to rp block
//Bit 29           reg_penalty_rp_mvdiff_en_1 // unsigned ,    RW, default = 0  enable signal of cn loop for add mvdiff penalty to rp block
//Bit 28           reg_penalty_rp_mvdiff_en_0 // unsigned ,    RW, default = 0  enable signal of phase loop for add mvdiff penalty to rp block
//Bit 27:20        reg_me_rp_mvdiff_th0      // unsigned ,    RW, default = 8  mvdiff threshold 0 of the curv   (change name)
//Bit 19:16        reg_me_rp_mvdiff_thn      // unsigned ,    RW, default = 6  mvdiff threshold1 = th0 + 2^thn to get the th1 of the curv
//Bit 15: 8        reg_me_rp_penalty_gain0   // unsigned ,    RW, default = 0  rpd penalty gain of mvdiff less than or equal th0  (TBC, changed from ppt)
//Bit  7: 0        reg_me_rp_penalty_gain1   // unsigned ,    RW, default = 32  rpd penalty gain of mvdiff more than or equal th1
#define FRC_ME_PERIODIC2_S1                        0x1575
//Bit 31:30        reserved
//Bit 29           reg_me_periodic2_chk_low_sad_cnt_en // unsigned ,    RW, default = 0  enable signal for check low sad cnt of phase loop bv01
//Bit 28           reg_me_periodic2_gmv_invalid // unsigned ,    RW, default = 0  gmv invalid signal for periodic2
//Bit 27:20        reg_me_periodic2_low_sad_th // unsigned ,    RW, default = 6  low sad threshold for periodic2
//Bit 19:12        reg_me_periodic2_differ_gmv_th // unsigned ,    RW, default = 12  gmv differ threshold for periodic2
//Bit 11: 8        reg_me_periodic2_similar_gmv_th // unsigned ,    RW, default = 4  gmv similar threshold for periodic2
//Bit  7: 4        reg_me_periodic2_similar_nearby_mv_th // unsigned ,    RW, default = 4  nearby mv similar threshold for periodic2
//Bit  3            reserved
//Bit  2           reg_me_periodic2_en_2     // unsigned ,    RW, default = 0  enable periodic2 for nc loop
//Bit  1           reg_me_periodic2_en_1     // unsigned ,    RW, default = 0  enable periodic2 for cn loop
//Bit  0           reg_me_periodic2_en_0     // unsigned ,    RW, default = 0  enable periodic2 for phase loop
#define FRC_ME_PERIODIC2_S2                        0x1576
//Bit 31:28        reg_me_periodic2_bv1_low_sad_cnt_th // unsigned ,    RW, default = 2  bv1 low sad cnt threshold for periodic2
//Bit 27:24        reg_me_periodic2_bv0_low_sad_cnt_th // unsigned ,    RW, default = 2  bv0 low sad cnt threshold for periodic2
//Bit 23:12        reg_me_periodic2_differ_sad_th // unsigned ,    RW, default = 120  differ threshold of phase loop for periodic2
//Bit 11: 0        reg_me_periodic2_high_sad_th // unsigned ,    RW, default = 60  high sad threshold for periodic2
#define FRC_ME_PERIODIC3_S1                        0x1577
//Bit 31:29        reserved
//Bit 28           reg_me_periodic3_mvdiff_th_mode // unsigned ,    RW, default = 0  mode of mvdiff_th 0: static threshold 1: dynamic threshold
//Bit 27:26        reserved
//Bit 25:16        reg_me_periodic3_mvdiff_th // unsigned ,    RW, default = 200  mv_diff threshold for periodic3
//Bit 15: 4        reg_me_periodic3_high_sad_th // unsigned ,    RW, default = 200  high sad threshold for periodic3
//Bit  3            reserved
//Bit  2           reg_me_periodic3_en_2     // unsigned ,    RW, default = 0  enable periodic3 for nc loop
//Bit  1           reg_me_periodic3_en_1     // unsigned ,    RW, default = 0  enable periodic3 for cn loop
//Bit  0           reg_me_periodic3_en_0     // unsigned ,    RW, default = 0  enable periodic3 for phase loop
#define FRC_ME_PERIODIC3_S2                        0x1578
//Bit 31:22        reg_me_periodic3_mvdiff_th_min // unsigned ,    RW, default = 120  minimum threshold of mvdiff
//Bit 21:12        reg_me_periodic3_mvdiff_th_max // unsigned ,    RW, default = 300  maximum threshold of mvdiff
//Bit 11: 8        reg_me_periodic3_sad_thn  // unsigned ,    RW, default = 8  sad threshold1 = th0 + 2^thn to get the th1 of the curv
//Bit  7: 0        reg_me_periodic3_sad_th0  // unsigned ,    RW, default = 60  threshold 0 of sad for calculate mvdiff th
#define FRC_ME_PERIODIC3_S3                        0x1579
//Bit 31:11        reserved
//Bit 10           reg_me_periodic3_chk_fs_flg_en // unsigned ,    RW, default = 0  enable signal of check fs_src_flag
//Bit  9           reg_me_periodic3_gmv_invalid // unsigned ,    RW, default = 0  gmv invalid signal for periodic3
//Bit  8: 1        reg_me_periodic3_differ_gmv_th // unsigned ,    RW, default = 8  gmv differ threshold for periodic3
//Bit  0           reg_me_periodic3_fw_ro_en // unsigned ,    RW, default = 0  enable signal of reg_region_ro_en
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/me_cbv_regs0.h
//
//`include "hme_stat_regs0.h"
// -----------------------------------------------
// REG_BASE:  FRC_ME_PAGE0_APB_BASE = 0x17
// -----------------------------------------------
//
// Reading file:  ./frc_inc/me_stat_regs0.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_ME_STAT_RGN_GMV_EN                     0x1700
//Bit 31           reg_region_gmv_en         // unsigned ,    RW, default = 0  regional gmv enable
//Bit 30           reg_region_gmv_finer_en   // unsigned ,    RW, default = 1  regional gmv refining enable
//Bit 29:28        reg_region_gmv_sel        // unsigned ,    RW, default = 1  loop selection for regional gmv
//Bit 27           reg_region_gmv_zmv_disable // unsigned ,    RW, default = 0  disable zmv for gmv calc.
//Bit 26           reg_region_gmv_oob_disable // unsigned ,    RW, default = 1  disable oob for gmv calc.
//Bit 25           reg_region_gmv_logo_disable // unsigned ,    RW, default = 1  disable logo for gmv calc.
//Bit 24            reserved
//Bit 23:16        reg_region_gmv_rough_max_dst_th // unsigned ,    RW, default = 0
//Bit 15: 8        reg_region_gmv_finer_max_dst_th // unsigned ,    RW, default = 3
//Bit  7: 0        reg_gmv_small_neighbor_cnt_th // unsigned ,    RW, default = 12
#define FRC_ME_STAT_GMV_OPT0                       0x1701
//Bit 31:29        reg_gmv_detail_sel        // unsigned ,    RW, default = 0  detail selection. 0: MAX(dtl_pre,dtl_cur); 1: MIN(dtl_pre,dtl_cur); 2: arg(dtl_pre,dtl_cur); 3: dtl_pre; 4: dtl_cur.
//Bit 28           reg_gmv_zmv_disable       // unsigned ,    RW, default = 1
//Bit 27           reg_gmv_oob_disable       // unsigned ,    RW, default = 1
//Bit 26           reg_gmv_logo_disable      // unsigned ,    RW, default = 1
//Bit 25:16        reg_gmv_detail_th         // unsigned ,    RW, default = 50
//Bit 15           reg_gmv_cnt_3x3_sel       // unsigned ,    RW, default = 0  0: gmv, 1: second gmv;
//Bit 14           reg_gmv_neighbor_wndy     // unsigned ,    RW, default = 0  window mode along y-direction for gmv neighbor count, 0:3, 1:5
//Bit 13:12        reg_gmv_neighbor_wndx     // unsigned ,    RW, default = 0  window mode along x-direction for gmv neighbor count, 0:3, 1:5, 2or els:7
//Bit 11:10        reserved
//Bit  9: 0        reg_gmv_zmv_coring_th     // unsigned ,    RW, default = 0
#define FRC_ME_GMV_CTRL                            0x1702
//Bit 31:12        reserved
//Bit 11           reg_gmv_finer_en          // unsigned ,    RW, default = 1
//Bit 10           reg_gmv_auto_en           // unsigned ,    RW, default = 1  enable signal to calculation gmv
//Bit  9: 8        reg_gmv_loop_sel          // unsigned ,    RW, default = 1  0~2 loop selection to calculation gmv
//Bit  7            reserved
//Bit  6: 4        reg_gmv_mvx_sft           // unsigned ,    RW, default = 2  consider  (ME_ROUGH_X_HIST_BIT + ME_FINER_HIST_BIT)=10bits- this is HW capability including sign bit
//Bit  3            reserved
//Bit  2: 0        reg_gmv_mvy_sft           // unsigned ,    RW, default = 2  consider  (ME_ROUGH_Y_HIST_BIT + ME_FINER_HIST_BIT)=9bits - this is HW capability including sign bit
#define FRC_ME_STAT_GMV_OPT3                       0x1703
//Bit 31:25        reserved
//Bit 24           reg_gmv_rough_cnt_3x3_sel // unsigned ,    RW, default = 0  0: gmv, 1: second gmv;
//Bit 23:18        reserved
//Bit 17: 0        reg_gmv_rough_invalid_th  // unsigned ,    RW, default = 8192  480x270=129,600 less than 2^17
#define FRC_ME_STAT_GMV_OPT1                       0x1704
//Bit 31:16        reg_gmv_rough_invalid_tdiff_th // unsigned ,    RW, default = 1000  for gmv_invalid flag: threshold for temporal difference of finer_max.
//Bit 15: 0        reg_gmv_rough_invalid_tcnt_diff_th // unsigned ,    RW, default = 1000  for gmv_invalid flag: threshold for temporal count difference of rough_max.
#define FRC_ME_STAT_GMV_OPT4                       0x1705
//Bit 31:28        reg_gmv_invalid_mode      // unsigned ,    RW, default = 11  gmv invalid check mode, b0, 0:and, 1:or, b1, check max count, b2: check gmv temporal diff, b3: check max count temporal diff.
//Bit 27:24        reserved
//Bit 23:18        reserved
//Bit 17: 0        reg_gmv_invalid_th        // unsigned ,    RW, default = 4800  480x270=129,600 less than 2^17
#define FRC_ME_STAT_GMV_OPT2                       0x1706
//Bit 31:16        reg_gmv_invalid_tdiff_th  // unsigned ,    RW, default = 1000  for gmv_invalid flag: threshold for temporal difference of finer_max.
//Bit 15: 0        reg_gmv_invalid_tcnt_diff_th // unsigned ,    RW, default = 1000  for gmv_invalid flag: threshold for temporal count difference of rough_max.
#define FRC_ME_REGION_RP_GMV_1                     0x1707
//Bit 31:28        reg_region_rp_gmv_cnt_ratio // unsigned ,    RW, default = 6  ratio of gmv cnt to total cnt to check if the region rp gmv is valid
//Bit 27:24        reg_region_rp_gmv_neighbor_cnt_ratio // unsigned ,    RW, default = 12  ratio of gmv neighbor cnt to total cnt to check if the region rp gmv is valid
//Bit 23:12        reg_region_rp_total_cnt_th // unsigned ,    RW, default = 200  threshold of rp total cnt to check if this region rp gmv is valid
//Bit 11:10        reserved
//Bit  9: 7        reserved
//Bit  6           reg_region_rp_gmv_neighbor_wndy // unsigned ,    RW, default = 1  window mode along y-direction for gmv neighbor count, 0:3, 1:5
//Bit  5: 4        reg_region_rp_gmv_neighbor_wndx // unsigned ,    RW, default = 1  window mode along x-direction for gmv neighbor count, 0:3, 1:5, 2or els:7
//Bit  3: 2        reg_region_rp_gmv_sel     // unsigned ,    RW, default = 1  loop selection for regional rp gmv
//Bit  1           reg_region_rp_gmv_oob_disable // unsigned ,    RW, default = 1  disable oob for rp gmv calc.
//Bit  0           reg_region_rp_gmv_en      // unsigned ,    RW, default = 1  region rp gmv enable
#define FRC_ME_REGION_RP_GMV_2                     0x1708
//Bit 31:20        reserved
//Bit 19:17        reg_region_rp_gmv_mvx_sft // unsigned ,    RW, default = 2  region_rp_gmv_mvx_sft
//Bit 16:14        reg_region_rp_gmv_mvy_sft // unsigned ,    RW, default = 2  region_rp_gmv_mvy_sft
//Bit 13           reg_region_rp_gmv_rough_max_en // unsigned ,    RW, default = 0  reg_region_rp_gmv_rough_max_en to check the switch is enable
//Bit 12           reg_region_rp_gmv_finer_max_cnt_en // unsigned ,    RW, default = 0  reg_region_rp_gmv_finer_max_cnt_en to check if the switch is enable
//Bit 11: 0        reg_region_rp_gmv_finer_max_cnt_th // unsigned ,    RW, default = 1024  threshold of rp finer max cnt to check id this region rp gmv is valid
#define FRC_ME_STAT_ACT_TH                         0x1709
//Bit 31           reg_me_glb_apl_sel_0      // unsigned ,    RW, default = 0  0: pre, 1: cur, select global apl for each loop
//Bit 30           reg_me_glb_apl_sel_1      // unsigned ,    RW, default = 0  0: pre, 1: cur, select global apl for each loop
//Bit 29           reg_me_glb_apl_sel_2      // unsigned ,    RW, default = 1  0: pre, 1: cur, select global apl for each loop
//Bit 28:24        reserved
//Bit 23:16        reg_me_glb_mv_unstable_diff_th // unsigned ,    RW, default = 3  difference threshold for global mv unstable statistic
//Bit 15            reserved
//Bit 14:12        reg_me_glb_act_dtl_sel    // unsigned ,    RW, default = 0  detail selection. 0: MAX(dtl_pre,dtl_cur); 1: MIN(dtl_pre,dtl_cur); 2: arg(dtl_pre,dtl_cur); 3: dtl_pre; 4: dtl_cur. detail mode for global activities statistic
//Bit 11:10        reg_me_glb_act_loop_sel   // unsigned ,    RW, default = 1  loop selection for global activities statistic, 0~2
//Bit  9: 0        reg_me_glb_act_dtl_th     // unsigned ,    RW, default = 50  detail threshold for global activities statistic
#define FRC_ME_STAT_RGN_S_CONSIS                   0x170a
//Bit 31:30        reg_me_region_loop_sel    // unsigned ,    RW, default = 0  loop selection for regional statistic, 0~3
//Bit 29           reg_me_region_apl_sel     // unsigned ,    RW, default = 0  0: pre, 1: cur, selected regional apl
//Bit 28           reg_me_region_s_consis_no_dtl_en // unsigned ,    RW, default = 1  no detail enable for regional spatial consistences statistic
//Bit 27:25        reg_me_region_s_consis_dtl_sel // unsigned ,    RW, default = 0  detail selection. 0: MAX(dtl_pre,dtl_cur); 1: MIN(dtl_pre,dtl_cur); 2: arg(dtl_pre,dtl_cur); 3: dtl_pre; 4: dtl_cur.
//Bit 24:15        reg_me_region_s_consis_coring_th // unsigned ,    RW, default = 3  coring threshold for regional spatial consistences statistic
//Bit 14           reg_me_region_s_consis_option // unsigned ,    RW, default = 0  option for regional spatial consistences statistic
//Bit 13           reg_me_region_s_consis_no_logo_en // unsigned ,    RW, default = 1  no logo enable for regional spatial consistences statistic
//Bit 12:10        reserved
//Bit  9: 0        reg_me_region_s_consis_no_dtl_th // unsigned ,    RW, default = 50  no detail threshold for regional spatial consistences statistic
#define FRC_ME_STAT_SAD                            0x170b
//Bit 31:29        reserved
//Bit 28           reg_me_glb_oob_disable    // unsigned ,    RW, default = 1  oob disable for global statistic
//Bit 27            reserved
//Bit 26:17        reg_me_glb_sad_coring_th  // unsigned ,    RW, default = 2  coring threshold for global sad sum
//Bit 16           reg_me_glb_sad_remove_logo_en // unsigned ,    RW, default = 1  enable logo removing for global sad statistic
//Bit 15:13        reserved
//Bit 12: 0        reg_me_glb_bad_sad_th     // unsigned ,    RW, default = 1023  threshold for global bad sad statistic
#define FRC_ME_STAT_ZMV_CNT                        0x170c
//Bit 31:24        reg_zmv_cnt_coring_th     // unsigned ,    RW, default = 0  mv threshold for zmv counter. mv with 2bits quarter pixel and reg_me_mvx/y_div_mode.
//Bit 23:20        reserved
//Bit 19           reg_zmv_cnt_logo_disable  // unsigned ,    RW, default = 1  when 1, disable logo block for zmv counter.
//Bit 18:16        reg_zmv_cnt_detail_sel    // unsigned ,    RW, default = 0  detail selection. 0: MAX(dtl_pre,dtl_cur); 1: MIN(dtl_pre,dtl_cur); 2: arg(dtl_pre,dtl_cur); 3: dtl_pre; 4: dtl_cur.
//Bit 15:10        reserved
//Bit  9: 0        reg_zmv_cnt_detail_th     // unsigned ,    RW, default = 50  detail threshold for zmv counter.
#define FRC_ME_STAT_ACT_HI_TH                      0x170d
//Bit 31:28        reserved
//Bit 27:16        reg_me_glb_act_hi_x_th    // unsigned ,    RW, default = 192  high activity threshold along x-direction for global activities statistic
//Bit 15:11        reserved
//Bit 10: 0        reg_me_glb_act_hi_y_th    // unsigned ,    RW, default = 80  high activity threshold along y-direction for global activities statistic
#define FRC_ME_STAT_ACT_LO_TH                      0x170e
//Bit 31:28        reserved
//Bit 27:16        reg_me_glb_act_lo_x_th    // unsigned ,    RW, default = 16  low activity threshold along x-direction for global activities statistic
//Bit 15:11        reserved
//Bit 10: 0        reg_me_glb_act_lo_y_th    // unsigned ,    RW, default = 16  low activity threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_0                    0x170f
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_0  // unsigned ,    RW, default = 0  positive high or negative low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_1                    0x1710
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_1  // unsigned ,    RW, default = 0  positive high or negative low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_2                    0x1711
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_2  // unsigned ,    RW, default = 0  positive high or negative low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_3                    0x1712
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_3  // unsigned ,    RW, default = 0  positive high or negative low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_4                    0x1713
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_4  // unsigned ,    RW, default = 0  positive high or negative low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_5                    0x1714
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_5  // unsigned ,    RW, default = 0  positive high or negative low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_6                    0x1715
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_6  // unsigned ,    RW, default = 0  positive high or negative low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_7                    0x1716
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_7  // unsigned ,    RW, default = 0  positive high or negative low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_8                    0x1717
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_8  // unsigned ,    RW, default = 0  positive high or negative low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_9                    0x1718
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_9  // unsigned ,    RW, default = 0  positive high or negetive low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_10                   0x1719
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_10 // unsigned ,    RW, default = 0  positive high or negetive low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_11                   0x171a
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_11 // unsigned ,    RW, default = 0  positive high or negetive low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_12                   0x171b
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_12 // unsigned ,    RW, default = 0  positive high or negetive low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_13                   0x171c
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_13 // unsigned ,    RW, default = 0  positive high or negetive low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_14                   0x171d
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_14 // unsigned ,    RW, default = 0  positive high or negetive low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_15                   0x171e
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_15 // unsigned ,    RW, default = 0  positive high or negetive low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_16                   0x171f
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_16 // unsigned ,    RW, default = 0  positive high or negetive low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_17                   0x1720
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_17 // unsigned ,    RW, default = 0  positive high or negetive low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_18                   0x1721
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_18 // unsigned ,    RW, default = 0  positive high or negetive low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_19                   0x1722
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_19 // unsigned ,    RW, default = 0  positive high or negetive low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_20                   0x1723
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_20 // unsigned ,    RW, default = 0  positive high or negetive low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_POS_HI_TH_21                   0x1724
//Bit 31:11        reserved
//Bit 10: 0        reg_me_glb_pos_hi_y_th_21 // unsigned ,    RW, default = 0  positive high or negetive low threshold along y-direction for global activities statistic
#define FRC_ME_STAT_T_CONSIS_TH                    0x1725
//Bit 31:27        reserved
//Bit 26           reg_me_glb_t_consis_option // unsigned ,    RW, default = 0  option for global temporal consistences statistic
//Bit 25:16        reg_me_glb_t_consis_coring_th // unsigned ,    RW, default = 3  coring threshold for global temporal consistences statistic
//Bit 15           reg_me_glb_t_consis_no_dtl_en // unsigned ,    RW, default = 1  no detail enable for global temporal consistences statistic
//Bit 14:12        reg_me_glb_t_consis_dtl_sel // unsigned ,    RW, default = 0  detail selection. 0: MAX(dtl_pre,dtl_cur); 1: MIN(dtl_pre,dtl_cur); 2: arg(dtl_pre,dtl_cur); 3: dtl_pre; 4: dtl_cur.
//Bit 11           reg_me_glb_t_consis_no_logo_en // unsigned ,    RW, default = 1  no logo enable for global temporal consistences statistic
//Bit 10           reg_me_glb_s_consis_option // unsigned ,    RW, default = 0  option for global spatial consistences statistic
//Bit  9: 0        reg_me_glb_s_consis_coring_th // unsigned ,    RW, default = 3  coring threshold for global spatial consistences statistic
#define FRC_ME_STAT_T_S_CONSIS_TH                  0x1726
//Bit 31:30        reserved
//Bit 29:20        reg_me_region_t_consis_no_dtl_th // unsigned ,    RW, default = 2  no detail threshold for regional temporal consistences statistic
//Bit 19:10        reg_me_glb_s_consis_no_dtl_th // unsigned ,    RW, default = 50  no detail threshold for global spatial consistences statistic
//Bit  9: 0        reg_me_glb_t_consis_no_dtl_th // unsigned ,    RW, default = 2  no detail threshold for global temporal consistences statistic
#define FRC_ME_STAT_S_CONSIS_TH                    0x1727
//Bit 31:25        reserved
//Bit 24:15        reg_me_glb_s_consis_coring_th_sum8 // unsigned ,    RW, default = 2  coring threshold for global spatial consistences statistic
//Bit 14: 5        reg_me_region_s_consis_coring_th_sum8 // unsigned ,    RW, default = 2  coring threshold for regional spatial consistences statistic of sum8
//Bit  4           reg_me_glb_s_consis_no_dtl_en // unsigned ,    RW, default = 1  no detail enable for global spatial consistences statistic
//Bit  3: 1        reg_me_glb_s_consis_dtl_sel // unsigned ,    RW, default = 0  detail selection. 0: MAX(dtl_pre,dtl_cur); 1: MIN(dtl_pre,dtl_cur); 2: arg(dtl_pre,dtl_cur); 3: dtl_pre; 4: dtl_cur.
//Bit  0           reg_me_glb_s_consis_no_logo_en // unsigned ,    RW, default = 1  no logo enable for global spatial consistences statistic
#define FRC_ME_STAT_GLB_DTL                        0x1728
//Bit 31:13        reserved
//Bit 12:10        reg_me_glb_dtl_sel        // unsigned ,    RW, default = 0  detail selection. 0: MAX(dtl_pre,dtl_cur); 1: MIN(dtl_pre,dtl_cur); 2: arg(dtl_pre,dtl_cur); 3: dtl_pre; 4: dtl_cur.
//Bit  9: 0        reg_me_glb_dtl_coring_th  // unsigned ,    RW, default = 50  coring threshold for global detail.
#define FRC_ME_STAT_RGN_SAD                        0x1729
//Bit 31:29        reg_me_region_dtl_sel     // unsigned ,    RW, default = 0  detail selection. 0: MAX(dtl_pre,dtl_cur); 1: MIN(dtl_pre,dtl_cur); 2: arg(dtl_pre,dtl_cur); 3: dtl_pre; 4: dtl_cur.
//Bit 28:16        reg_me_region_bad_match_sad_th // unsigned ,    RW, default = 500  bad match mv sad threshold for regional statistic
//Bit 15           reg_me_region_sad_remove_logo_en // unsigned ,    RW, default = 1  enable logo removing for regional sad statistic
//Bit 14:13        reserved
//Bit 12: 0        reg_me_region_sad_coring_th // unsigned ,    RW, default = 8  sad coring threshold for regional sad statistic
#define FRC_ME_STAT_RGN_T_CONSIS                   0x172a
//Bit 31:26        reserved
//Bit 25:16        reg_me_region_t_consis_coring_th // unsigned ,    RW, default = 3  coring threshold for regional temporal consistences statistic
//Bit 15           reg_me_region_t_consis_option // unsigned ,    RW, default = 0  option for regional temporal consistences statistic
//Bit 14           reg_me_region_t_consis_no_logo_en // unsigned ,    RW, default = 1  no logo enable for regional temporal consistences statistic
//Bit 13           reg_me_region_t_consis_no_dtl_en // unsigned ,    RW, default = 1  no detail enable for regional temporal consistences statistic
//Bit 12:10        reg_me_region_t_consis_dtl_sel // unsigned ,    RW, default = 0  detail selection. 0: MAX(dtl_pre,dtl_cur); 1: MIN(dtl_pre,dtl_cur); 2: arg(dtl_pre,dtl_cur); 3: dtl_pre; 4: dtl_cur.
//Bit  9: 0        reg_me_region_dtl_coring_th // unsigned ,    RW, default = 50  detail coring threshold for regional statistic
#define FRC_ME_STAT_RGN_GOOD                       0x172b
//Bit 31:26        reserved
//Bit 25:16        reg_me_region_good_match_t_consis_th // unsigned ,    RW, default = 3  good match mv temporal consistence threshold for regional statistic
//Bit 15:10        reserved
//Bit  9: 0        reg_me_region_good_match_s_consis_th // unsigned ,    RW, default = 3  good match mv spatial consistence threshold for regional statistic
#define FRC_ME_POSX_TH                             0x172c
//Bit 31:12        reserved
//Bit 11: 0        reg_me_glb_hi_x_th        // unsigned ,    RW, default = 0  positive high or negative low threshold along x-direction for global activities statistic
#define FRC_ME_BCHG_TH                             0x172d
//Bit 31:12        reserved
//Bit 11: 0        reg_me_glb_mv_bigchg_th   // unsigned ,    RW, default = 0  mv big change threshold for global activities statistic
#define FRC_ME_RO_POSX_CNT                         0x172e
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_x_dtl_cnt   // unsigned ,    RO, default = 0  higher than positive threshold mvx count
#define FRC_ME_RO_NEGX_CNT                         0x172f
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_x_dtl_cnt   // unsigned ,    RO, default = 0  lower than negative threshold mvx count
#define FRC_ME_RO_MV_BCHG_CNT                      0x1730
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_mv_bigchg_cnt   // unsigned ,    RO, default = 0  mv change bigger than threshold count
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/me_stat_regs0.h
//
// -----------------------------------------------
// REG_BASE:  FRC_ME_PAGE1_APB_BASE = 0x18
// -----------------------------------------------
//
// Reading file:  ./frc_inc/me_stat_regs1.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_ME_RO_RGN_T_CONSIS_0                   0x1800
//Bit 31: 0        ro_me_region_t_consis_0   // unsigned ,    RO, default = 0  12 region temporal consistences for phase loop
#define FRC_ME_RO_RGN_S_CONSIS_0                   0x1801
//Bit 31: 0        ro_me_region_s_consis_0   // unsigned ,    RO, default = 0  12 region spatial consistences for phase loop
#define FRC_ME_RO_RGN_DTL_SUM_0                    0x1802
//Bit 31            reserved
//Bit 30: 0        ro_me_region_dtl_sum_0    // unsigned ,    RO, default = 0  12 region high detail sum for phase loop
#define FRC_ME_RO_RGN_DTL_CNT_0                    0x1803
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_dtl_cnt_0    // unsigned ,    RO, default = 0  12 region high detail cnt for phase loop
#define FRC_ME_RO_RGN_HISAD_SUM_0                  0x1804
//Bit 31            reserved
//Bit 30: 0        ro_me_region_sad_sum_0    // unsigned ,    RO, default = 0  12 region high sad sum for phase loop
#define FRC_ME_RO_RGN_HISAD_CNT_0                  0x1805
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_bad_sad_cnt_0 // unsigned ,    RO, default = 0  12 region high sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_CNT_0                0x1806
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_good_match_sad_cnt_0 // unsigned ,    RO, default = 0  12 region good match mv sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_SUM_0                0x1807
//Bit 31            reserved
//Bit 30: 0        ro_me_region_good_match_sad_sum_0 // unsigned ,    RO, default = 0  12 region good match mv sad sum for phase loop
#define FRC_ME_RO_RGN_APL_0                        0x1808
//Bit 31            reserved
//Bit 30: 0        ro_me_region_apl_sum_0    // unsigned ,    RO, default = 0  12 region apl sum for phase loop
#define FRC_ME_RO_RGN_T_CONSIS_1                   0x1809
//Bit 31: 0        ro_me_region_t_consis_1   // unsigned ,    RO, default = 0  12 region temporal consistences for phase loop
#define FRC_ME_RO_RGN_S_CONSIS_1                   0x180a
//Bit 31: 0        ro_me_region_s_consis_1   // unsigned ,    RO, default = 0  12 region spatial consistences for phase loop
#define FRC_ME_RO_RGN_DTL_SUM_1                    0x180b
//Bit 31            reserved
//Bit 30: 0        ro_me_region_dtl_sum_1    // unsigned ,    RO, default = 0  12 region high detail sum for phase loop
#define FRC_ME_RO_RGN_DTL_CNT_1                    0x180c
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_dtl_cnt_1    // unsigned ,    RO, default = 0  12 region high detail cnt for phase loop
#define FRC_ME_RO_RGN_HISAD_SUM_1                  0x180d
//Bit 31            reserved
//Bit 30: 0        ro_me_region_sad_sum_1    // unsigned ,    RO, default = 0  12 region high sad sum for phase loop
#define FRC_ME_RO_RGN_HISAD_CNT_1                  0x180e
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_bad_sad_cnt_1 // unsigned ,    RO, default = 0  12 region high sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_CNT_1                0x180f
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_good_match_sad_cnt_1 // unsigned ,    RO, default = 0  12 region good match mv sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_SUM_1                0x1810
//Bit 31            reserved
//Bit 30: 0        ro_me_region_good_match_sad_sum_1 // unsigned ,    RO, default = 0  12 region good match mv sad sum for phase loop
#define FRC_ME_RO_RGN_APL_1                        0x1811
//Bit 31            reserved
//Bit 30: 0        ro_me_region_apl_sum_1    // unsigned ,    RO, default = 0  12 region apl sum for phase loop
#define FRC_ME_RO_RGN_T_CONSIS_2                   0x1812
//Bit 31: 0        ro_me_region_t_consis_2   // unsigned ,    RO, default = 0  12 region temporal consistences for phase loop
#define FRC_ME_RO_RGN_S_CONSIS_2                   0x1813
//Bit 31: 0        ro_me_region_s_consis_2   // unsigned ,    RO, default = 0  12 region spatial consistences for phase loop
#define FRC_ME_RO_RGN_DTL_SUM_2                    0x1814
//Bit 31            reserved
//Bit 30: 0        ro_me_region_dtl_sum_2    // unsigned ,    RO, default = 0  12 region high detail sum for phase loop
#define FRC_ME_RO_RGN_DTL_CNT_2                    0x1815
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_dtl_cnt_2    // unsigned ,    RO, default = 0  12 region high detail cnt for phase loop
#define FRC_ME_RO_RGN_HISAD_SUM_2                  0x1816
//Bit 31            reserved
//Bit 30: 0        ro_me_region_sad_sum_2    // unsigned ,    RO, default = 0  12 region high sad sum for phase loop
#define FRC_ME_RO_RGN_HISAD_CNT_2                  0x1817
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_bad_sad_cnt_2 // unsigned ,    RO, default = 0  12 region high sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_CNT_2                0x1818
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_good_match_sad_cnt_2 // unsigned ,    RO, default = 0  12 region good match mv sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_SUM_2                0x1819
//Bit 31            reserved
//Bit 30: 0        ro_me_region_good_match_sad_sum_2 // unsigned ,    RO, default = 0  12 region good match mv sad sum for phase loop
#define FRC_ME_RO_RGN_APL_2                        0x181a
//Bit 31            reserved
//Bit 30: 0        ro_me_region_apl_sum_2    // unsigned ,    RO, default = 0  12 region apl sum for phase loop
#define FRC_ME_RO_RGN_T_CONSIS_3                   0x181b
//Bit 31: 0        ro_me_region_t_consis_3   // unsigned ,    RO, default = 0  12 region temporal consistences for phase loop
#define FRC_ME_RO_RGN_S_CONSIS_3                   0x181c
//Bit 31: 0        ro_me_region_s_consis_3   // unsigned ,    RO, default = 0  12 region spatial consistences for phase loop
#define FRC_ME_RO_RGN_DTL_SUM_3                    0x181d
//Bit 31            reserved
//Bit 30: 0        ro_me_region_dtl_sum_3    // unsigned ,    RO, default = 0  12 region high detail sum for phase loop
#define FRC_ME_RO_RGN_DTL_CNT_3                    0x181e
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_dtl_cnt_3    // unsigned ,    RO, default = 0  12 region high detail cnt for phase loop
#define FRC_ME_RO_RGN_HISAD_SUM_3                  0x181f
//Bit 31            reserved
//Bit 30: 0        ro_me_region_sad_sum_3    // unsigned ,    RO, default = 0  12 region high sad sum for phase loop
#define FRC_ME_RO_RGN_HISAD_CNT_3                  0x1820
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_bad_sad_cnt_3 // unsigned ,    RO, default = 0  12 region high sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_CNT_3                0x1821
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_good_match_sad_cnt_3 // unsigned ,    RO, default = 0  12 region good match mv sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_SUM_3                0x1822
//Bit 31            reserved
//Bit 30: 0        ro_me_region_good_match_sad_sum_3 // unsigned ,    RO, default = 0  12 region good match mv sad sum for phase loop
#define FRC_ME_RO_RGN_APL_3                        0x1823
//Bit 31            reserved
//Bit 30: 0        ro_me_region_apl_sum_3    // unsigned ,    RO, default = 0  12 region apl sum for phase loop
#define FRC_ME_RO_RGN_T_CONSIS_4                   0x1824
//Bit 31: 0        ro_me_region_t_consis_4   // unsigned ,    RO, default = 0  12 region temporal consistences for phase loop
#define FRC_ME_RO_RGN_S_CONSIS_4                   0x1825
//Bit 31: 0        ro_me_region_s_consis_4   // unsigned ,    RO, default = 0  12 region spatial consistences for phase loop
#define FRC_ME_RO_RGN_DTL_SUM_4                    0x1826
//Bit 31            reserved
//Bit 30: 0        ro_me_region_dtl_sum_4    // unsigned ,    RO, default = 0  12 region high detail sum for phase loop
#define FRC_ME_RO_RGN_DTL_CNT_4                    0x1827
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_dtl_cnt_4    // unsigned ,    RO, default = 0  12 region high detail cnt for phase loop
#define FRC_ME_RO_RGN_HISAD_SUM_4                  0x1828
//Bit 31            reserved
//Bit 30: 0        ro_me_region_sad_sum_4    // unsigned ,    RO, default = 0  12 region high sad sum for phase loop
#define FRC_ME_RO_RGN_HISAD_CNT_4                  0x1829
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_bad_sad_cnt_4 // unsigned ,    RO, default = 0  12 region high sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_CNT_4                0x182a
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_good_match_sad_cnt_4 // unsigned ,    RO, default = 0  12 region good match mv sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_SUM_4                0x182b
//Bit 31            reserved
//Bit 30: 0        ro_me_region_good_match_sad_sum_4 // unsigned ,    RO, default = 0  12 region good match mv sad sum for phase loop
#define FRC_ME_RO_RGN_APL_4                        0x182c
//Bit 31            reserved
//Bit 30: 0        ro_me_region_apl_sum_4    // unsigned ,    RO, default = 0  12 region apl sum for phase loop
#define FRC_ME_RO_RGN_T_CONSIS_5                   0x182d
//Bit 31: 0        ro_me_region_t_consis_5   // unsigned ,    RO, default = 0  12 region temporal consistences for phase loop
#define FRC_ME_RO_RGN_S_CONSIS_5                   0x182e
//Bit 31: 0        ro_me_region_s_consis_5   // unsigned ,    RO, default = 0  12 region spatial consistences for phase loop
#define FRC_ME_RO_RGN_DTL_SUM_5                    0x182f
//Bit 31            reserved
//Bit 30: 0        ro_me_region_dtl_sum_5    // unsigned ,    RO, default = 0  12 region high detail sum for phase loop
#define FRC_ME_RO_RGN_DTL_CNT_5                    0x1830
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_dtl_cnt_5    // unsigned ,    RO, default = 0  12 region high detail cnt for phase loop
#define FRC_ME_RO_RGN_HISAD_SUM_5                  0x1831
//Bit 31            reserved
//Bit 30: 0        ro_me_region_sad_sum_5    // unsigned ,    RO, default = 0  12 region high sad sum for phase loop
#define FRC_ME_RO_RGN_HISAD_CNT_5                  0x1832
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_bad_sad_cnt_5 // unsigned ,    RO, default = 0  12 region high sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_CNT_5                0x1833
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_good_match_sad_cnt_5 // unsigned ,    RO, default = 0  12 region good match mv sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_SUM_5                0x1834
//Bit 31            reserved
//Bit 30: 0        ro_me_region_good_match_sad_sum_5 // unsigned ,    RO, default = 0  12 region good match mv sad sum for phase loop
#define FRC_ME_RO_RGN_APL_5                        0x1835
//Bit 31            reserved
//Bit 30: 0        ro_me_region_apl_sum_5    // unsigned ,    RO, default = 0  12 region apl sum for phase loop
#define FRC_ME_RO_RGN_T_CONSIS_6                   0x1836
//Bit 31: 0        ro_me_region_t_consis_6   // unsigned ,    RO, default = 0  12 region temporal consistences for phase loop
#define FRC_ME_RO_RGN_S_CONSIS_6                   0x1837
//Bit 31: 0        ro_me_region_s_consis_6   // unsigned ,    RO, default = 0  12 region spatial consistences for phase loop
#define FRC_ME_RO_RGN_DTL_SUM_6                    0x1838
//Bit 31            reserved
//Bit 30: 0        ro_me_region_dtl_sum_6    // unsigned ,    RO, default = 0  12 region high detail sum for phase loop
#define FRC_ME_RO_RGN_DTL_CNT_6                    0x1839
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_dtl_cnt_6    // unsigned ,    RO, default = 0  12 region high detail cnt for phase loop
#define FRC_ME_RO_RGN_HISAD_SUM_6                  0x183a
//Bit 31            reserved
//Bit 30: 0        ro_me_region_sad_sum_6    // unsigned ,    RO, default = 0  12 region high sad sum for phase loop
#define FRC_ME_RO_RGN_HISAD_CNT_6                  0x183b
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_bad_sad_cnt_6 // unsigned ,    RO, default = 0  12 region high sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_CNT_6                0x183c
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_good_match_sad_cnt_6 // unsigned ,    RO, default = 0  12 region good match mv sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_SUM_6                0x183d
//Bit 31            reserved
//Bit 30: 0        ro_me_region_good_match_sad_sum_6 // unsigned ,    RO, default = 0  12 region good match mv sad sum for phase loop
#define FRC_ME_RO_RGN_APL_6                        0x183e
//Bit 31            reserved
//Bit 30: 0        ro_me_region_apl_sum_6    // unsigned ,    RO, default = 0  12 region apl sum for phase loop
#define FRC_ME_RO_RGN_T_CONSIS_7                   0x183f
//Bit 31: 0        ro_me_region_t_consis_7   // unsigned ,    RO, default = 0  12 region temporal consistences for phase loop
#define FRC_ME_RO_RGN_S_CONSIS_7                   0x1840
//Bit 31: 0        ro_me_region_s_consis_7   // unsigned ,    RO, default = 0  12 region spatial consistences for phase loop
#define FRC_ME_RO_RGN_DTL_SUM_7                    0x1841
//Bit 31            reserved
//Bit 30: 0        ro_me_region_dtl_sum_7    // unsigned ,    RO, default = 0  12 region high detail sum for phase loop
#define FRC_ME_RO_RGN_DTL_CNT_7                    0x1842
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_dtl_cnt_7    // unsigned ,    RO, default = 0  12 region high detail cnt for phase loop
#define FRC_ME_RO_RGN_HISAD_SUM_7                  0x1843
//Bit 31            reserved
//Bit 30: 0        ro_me_region_sad_sum_7    // unsigned ,    RO, default = 0  12 region high sad sum for phase loop
#define FRC_ME_RO_RGN_HISAD_CNT_7                  0x1844
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_bad_sad_cnt_7 // unsigned ,    RO, default = 0  12 region high sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_CNT_7                0x1845
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_good_match_sad_cnt_7 // unsigned ,    RO, default = 0  12 region good match mv sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_SUM_7                0x1846
//Bit 31            reserved
//Bit 30: 0        ro_me_region_good_match_sad_sum_7 // unsigned ,    RO, default = 0  12 region good match mv sad sum for phase loop
#define FRC_ME_RO_RGN_APL_7                        0x1847
//Bit 31            reserved
//Bit 30: 0        ro_me_region_apl_sum_7    // unsigned ,    RO, default = 0  12 region apl sum for phase loop
#define FRC_ME_RO_RGN_T_CONSIS_8                   0x1848
//Bit 31: 0        ro_me_region_t_consis_8   // unsigned ,    RO, default = 0  12 region temporal consistences for phase loop
#define FRC_ME_RO_RGN_S_CONSIS_8                   0x1849
//Bit 31: 0        ro_me_region_s_consis_8   // unsigned ,    RO, default = 0  12 region spatial consistences for phase loop
#define FRC_ME_RO_RGN_DTL_SUM_8                    0x184a
//Bit 31            reserved
//Bit 30: 0        ro_me_region_dtl_sum_8    // unsigned ,    RO, default = 0  12 region high detail sum for phase loop
#define FRC_ME_RO_RGN_DTL_CNT_8                    0x184b
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_dtl_cnt_8    // unsigned ,    RO, default = 0  12 region high detail cnt for phase loop
#define FRC_ME_RO_RGN_HISAD_SUM_8                  0x184c
//Bit 31            reserved
//Bit 30: 0        ro_me_region_sad_sum_8    // unsigned ,    RO, default = 0  12 region high sad sum for phase loop
#define FRC_ME_RO_RGN_HISAD_CNT_8                  0x184d
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_bad_sad_cnt_8 // unsigned ,    RO, default = 0  12 region high sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_CNT_8                0x184e
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_good_match_sad_cnt_8 // unsigned ,    RO, default = 0  12 region good match mv sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_SUM_8                0x184f
//Bit 31            reserved
//Bit 30: 0        ro_me_region_good_match_sad_sum_8 // unsigned ,    RO, default = 0  12 region good match mv sad sum for phase loop
#define FRC_ME_RO_RGN_APL_8                        0x1850
//Bit 31            reserved
//Bit 30: 0        ro_me_region_apl_sum_8    // unsigned ,    RO, default = 0  12 region apl sum for phase loop
#define FRC_ME_RO_RGN_T_CONSIS_9                   0x1851
//Bit 31: 0        ro_me_region_t_consis_9   // unsigned ,    RO, default = 0  12 region temporal consistences for phase loop
#define FRC_ME_RO_RGN_S_CONSIS_9                   0x1852
//Bit 31: 0        ro_me_region_s_consis_9   // unsigned ,    RO, default = 0  12 region spatial consistences for phase loop
#define FRC_ME_RO_RGN_DTL_SUM_9                    0x1853
//Bit 31            reserved
//Bit 30: 0        ro_me_region_dtl_sum_9    // unsigned ,    RO, default = 0  12 region high detail sum for phase loop
#define FRC_ME_RO_RGN_DTL_CNT_9                    0x1854
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_dtl_cnt_9    // unsigned ,    RO, default = 0  12 region high detail cnt for phase loop
#define FRC_ME_RO_RGN_HISAD_SUM_9                  0x1855
//Bit 31            reserved
//Bit 30: 0        ro_me_region_sad_sum_9    // unsigned ,    RO, default = 0  12 region high sad sum for phase loop
#define FRC_ME_RO_RGN_HISAD_CNT_9                  0x1856
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_bad_sad_cnt_9 // unsigned ,    RO, default = 0  12 region high sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_CNT_9                0x1857
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_good_match_sad_cnt_9 // unsigned ,    RO, default = 0  12 region good match mv sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_SUM_9                0x1858
//Bit 31            reserved
//Bit 30: 0        ro_me_region_good_match_sad_sum_9 // unsigned ,    RO, default = 0  12 region good match mv sad sum for phase loop
#define FRC_ME_RO_RGN_APL_9                        0x1859
//Bit 31            reserved
//Bit 30: 0        ro_me_region_apl_sum_9    // unsigned ,    RO, default = 0  12 region apl sum for phase loop
#define FRC_ME_RO_RGN_T_CONSIS_10                  0x185a
//Bit 31: 0        ro_me_region_t_consis_10  // unsigned ,    RO, default = 0  12 region temporal consistences for phase loop
#define FRC_ME_RO_RGN_S_CONSIS_10                  0x185b
//Bit 31: 0        ro_me_region_s_consis_10  // unsigned ,    RO, default = 0  12 region spatial consistences for phase loop
#define FRC_ME_RO_RGN_DTL_SUM_10                   0x185c
//Bit 31            reserved
//Bit 30: 0        ro_me_region_dtl_sum_10   // unsigned ,    RO, default = 0  12 region high detail sum for phase loop
#define FRC_ME_RO_RGN_DTL_CNT_10                   0x185d
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_dtl_cnt_10   // unsigned ,    RO, default = 0  12 region high detail cnt for phase loop
#define FRC_ME_RO_RGN_HISAD_SUM_10                 0x185e
//Bit 31            reserved
//Bit 30: 0        ro_me_region_sad_sum_10   // unsigned ,    RO, default = 0  12 region high sad sum for phase loop
#define FRC_ME_RO_RGN_HISAD_CNT_10                 0x185f
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_bad_sad_cnt_10 // unsigned ,    RO, default = 0  12 region high sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_CNT_10               0x1860
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_good_match_sad_cnt_10 // unsigned ,    RO, default = 0  12 region good match mv sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_SUM_10               0x1861
//Bit 31            reserved
//Bit 30: 0        ro_me_region_good_match_sad_sum_10 // unsigned ,    RO, default = 0  12 region good match mv sad sum for phase loop
#define FRC_ME_RO_RGN_APL_10                       0x1862
//Bit 31            reserved
//Bit 30: 0        ro_me_region_apl_sum_10   // unsigned ,    RO, default = 0  12 region apl sum for phase loop
#define FRC_ME_RO_RGN_T_CONSIS_11                  0x1863
//Bit 31: 0        ro_me_region_t_consis_11  // unsigned ,    RO, default = 0  12 region temporal consistences for phase loop
#define FRC_ME_RO_RGN_S_CONSIS_11                  0x1864
//Bit 31: 0        ro_me_region_s_consis_11  // unsigned ,    RO, default = 0  12 region spatial consistences for phase loop
#define FRC_ME_RO_RGN_DTL_SUM_11                   0x1865
//Bit 31            reserved
//Bit 30: 0        ro_me_region_dtl_sum_11   // unsigned ,    RO, default = 0  12 region high detail sum for phase loop
#define FRC_ME_RO_RGN_DTL_CNT_11                   0x1866
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_dtl_cnt_11   // unsigned ,    RO, default = 0  12 region high detail cnt for phase loop
#define FRC_ME_RO_RGN_HISAD_SUM_11                 0x1867
//Bit 31            reserved
//Bit 30: 0        ro_me_region_sad_sum_11   // unsigned ,    RO, default = 0  12 region high sad sum for phase loop
#define FRC_ME_RO_RGN_HISAD_CNT_11                 0x1868
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_bad_sad_cnt_11 // unsigned ,    RO, default = 0  12 region high sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_CNT_11               0x1869
//Bit 31:18        reserved
//Bit 17: 0        ro_me_region_good_match_sad_cnt_11 // unsigned ,    RO, default = 0  12 region good match mv sad cnt for phase loop
#define FRC_ME_RO_RGN_GOODSAD_SUM_11               0x186a
//Bit 31            reserved
//Bit 30: 0        ro_me_region_good_match_sad_sum_11 // unsigned ,    RO, default = 0  12 region good match mv sad sum for phase loop
#define FRC_ME_RO_RGN_APL_11                       0x186b
//Bit 31            reserved
//Bit 30: 0        ro_me_region_apl_sum_11   // unsigned ,    RO, default = 0  12 region apl sum for phase loop
#define FRC_ME_RO_S_CONSIS_0                       0x186c
//Bit 31: 0        ro_me_glb_s_consis_0      // unsigned ,    RO, default = 0  global spatial consistences in each loop
#define FRC_ME_RO_T_CONSIS_0                       0x186d
//Bit 31: 0        ro_me_glb_t_consis_0      // unsigned ,    RO, default = 0  global temporal consistences in each loop
#define FRC_ME_RO_APL_0                            0x186e
//Bit 31:24        reserved
//Bit 23: 0        ro_me_glb_apl_sum_0       // unsigned ,    RO, default = 0  global apl for each loop
#define FRC_ME_RO_DTL_0                            0x186f
//Bit 31: 0        ro_me_glb_dtl_sum_0       // unsigned ,    RO, default = 0  global detail for each loop
#define FRC_ME_RO_SAD_0                            0x1870
//Bit 31: 0        ro_me_glb_sad_sum_0       // unsigned ,    RO, default = 0  global sad sum in each loop
#define FRC_ME_RO_BLK_CNT_SAD_0                    0x1871
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_bad_sad_cnt_0   // unsigned ,    RO, default = 0  global bad sad count in each loop
#define FRC_ME_RO_BLK_CNT_0                        0x1872
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_cnt_0           // unsigned ,    RO, default = 0  global valid block count each loop
#define FRC_ME_RO_S_CONSIS_1                       0x1873
//Bit 31: 0        ro_me_glb_s_consis_1      // unsigned ,    RO, default = 0  global spatial consistences in each loop
#define FRC_ME_RO_T_CONSIS_1                       0x1874
//Bit 31: 0        ro_me_glb_t_consis_1      // unsigned ,    RO, default = 0  global temporal consistences in each loop
#define FRC_ME_RO_APL_1                            0x1875
//Bit 31:24        reserved
//Bit 23: 0        ro_me_glb_apl_sum_1       // unsigned ,    RO, default = 0  global apl for each loop
#define FRC_ME_RO_DTL_1                            0x1876
//Bit 31: 0        ro_me_glb_dtl_sum_1       // unsigned ,    RO, default = 0  global detail for each loop
#define FRC_ME_RO_SAD_1                            0x1877
//Bit 31: 0        ro_me_glb_sad_sum_1       // unsigned ,    RO, default = 0  global sad sum in each loop
#define FRC_ME_RO_BLK_CNT_SAD_1                    0x1878
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_bad_sad_cnt_1   // unsigned ,    RO, default = 0  global bad sad count in each loop
#define FRC_ME_RO_BLK_CNT_1                        0x1879
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_cnt_1           // unsigned ,    RO, default = 0  global valid block count each loop
#define FRC_ME_RO_S_CONSIS_2                       0x187a
//Bit 31: 0        ro_me_glb_s_consis_2      // unsigned ,    RO, default = 0  global spatial consistences in each loop
#define FRC_ME_RO_T_CONSIS_2                       0x187b
//Bit 31: 0        ro_me_glb_t_consis_2      // unsigned ,    RO, default = 0  global temporal consistences in each loop
#define FRC_ME_RO_APL_2                            0x187c
//Bit 31:24        reserved
//Bit 23: 0        ro_me_glb_apl_sum_2       // unsigned ,    RO, default = 0  global apl for each loop
#define FRC_ME_RO_DTL_2                            0x187d
//Bit 31: 0        ro_me_glb_dtl_sum_2       // unsigned ,    RO, default = 0  global detail for each loop
#define FRC_ME_RO_SAD_2                            0x187e
//Bit 31: 0        ro_me_glb_sad_sum_2       // unsigned ,    RO, default = 0  global sad sum in each loop
#define FRC_ME_RO_BLK_CNT_SAD_2                    0x187f
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_bad_sad_cnt_2   // unsigned ,    RO, default = 0  global bad sad count in each loop
#define FRC_ME_RO_BLK_CNT_2                        0x1880
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_cnt_2           // unsigned ,    RO, default = 0  global valid block count each loop
#define FRC_ME_RO_FCMV_CNT                         0x1881
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_unstable_cnt    // unsigned ,    RO, default = 0  global unstable count
#define FRC_ME_RO_GMV_ROUGH                        0x1882
//Bit 31:29        reserved
//Bit 28:16        ro_me_gmv_rough_vector_0  // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:13        reserved
//Bit 12           ro_me_gmv_rough_invalid   // unsigned ,    RO, default = 1  when 1, gmv is invalid.
//Bit 11: 0        ro_me_gmv_rough_vector_1  // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_2ND                    0x1883
//Bit 31:29        reserved
//Bit 28:16        ro_me_gmv_rough_2nd_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_gmv_rough_2nd_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_NCNT                   0x1884
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_rough_neighbor_cnt // unsigned ,    RO, default = 0  window sum
#define FRC_ME_RO_GMV_ROUGH_CNT                    0x1885
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_rough_cnt       // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_CNT_2ND                0x1886
//Bit 17: 0        ro_me_gmv_rough_2nd_cnt   // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_CNT_3X3_0              0x1887
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_rough_cnt_3x3_0 // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_CNT_3X3_1              0x1888
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_rough_cnt_3x3_1 // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_CNT_3X3_2              0x1889
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_rough_cnt_3x3_2 // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_CNT_3X3_3              0x188a
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_rough_cnt_3x3_3 // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_CNT_3X3_4              0x188b
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_rough_cnt_3x3_4 // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_CNT_3X3_5              0x188c
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_rough_cnt_3x3_5 // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_CNT_3X3_6              0x188d
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_rough_cnt_3x3_6 // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_CNT_3X3_7              0x188e
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_rough_cnt_3x3_7 // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_CNT_3X3_8              0x188f
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_rough_cnt_3x3_8 // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV                              0x1890
//Bit 31:29        reserved
//Bit 28:16        ro_me_gmv_vector_0        // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:13        reserved
//Bit 12           ro_me_gmv_invalid         // unsigned ,    RO, default = 1  when 1, gmv is invalid.
//Bit 11: 0        ro_me_gmv_vector_1        // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_MUX                          0x1891
//Bit 31:29        reserved
//Bit 28:16        ro_me_gmv_mux_vector_0    // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:13        reserved
//Bit 12           ro_me_gmv_mux_invalid     // unsigned ,    RO, default = 1
//Bit 11: 0        ro_me_gmv_mux_vector_1    // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_2ND                          0x1892
//Bit 28:16        ro_me_gmv_2nd_vector_0    // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_gmv_2nd_vector_1    // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_NCNT                         0x1893
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_neighbor_cnt    // unsigned ,    RO, default = 0  window sum
#define FRC_ME_RO_GMV_CNT                          0x1894
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_cnt             // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_CNT_2ND                      0x1895
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_2nd_cnt         // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_DTL_CNT                      0x1896
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_dtl_cnt         // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_ZZ_CNT                       0x1897
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_zz_cnt          // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_CNT_3X3_0                    0x1898
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_cnt_3x3_0       // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_CNT_3X3_1                    0x1899
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_cnt_3x3_1       // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_CNT_3X3_2                    0x189a
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_cnt_3x3_2       // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_CNT_3X3_3                    0x189b
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_cnt_3x3_3       // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_CNT_3X3_4                    0x189c
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_cnt_3x3_4       // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_CNT_3X3_5                    0x189d
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_cnt_3x3_5       // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_CNT_3X3_6                    0x189e
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_cnt_3x3_6       // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_CNT_3X3_7                    0x189f
//Bit 17: 0        ro_me_gmv_cnt_3x3_7       // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_CNT_3X3_8                    0x18a0
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_cnt_3x3_8       // unsigned ,    RO, default = 0
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/me_stat_regs1.h
//
// -----------------------------------------------
// REG_BASE:  FRC_ME_PAGE2_APB_BASE = 0x19
// -----------------------------------------------
//
// Reading file:  ./frc_inc/me_stat_regs2.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_ME_RO_GMV_RGN_0                        0x1900
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_0_vector_0 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_0_vector_1 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_RGN_2ND_0                    0x1901
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_2nd_0_vector_0 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_2nd_0_vector_1 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_ROUGH_RGN_0                  0x1902
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_0_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_0_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_RGN_2ND_0              0x1903
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_2nd_0_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_2nd_0_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_RGN_1                        0x1904
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_1_vector_0 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_1_vector_1 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_RGN_2ND_1                    0x1905
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_2nd_1_vector_0 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_2nd_1_vector_1 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_ROUGH_RGN_1                  0x1906
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_1_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_1_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_RGN_2ND_1              0x1907
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_2nd_1_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_2nd_1_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_RGN_2                        0x1908
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_2_vector_0 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_2_vector_1 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_RGN_2ND_2                    0x1909
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_2nd_2_vector_0 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_2nd_2_vector_1 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_ROUGH_RGN_2                  0x190a
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_2_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_2_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_RGN_2ND_2              0x190b
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_2nd_2_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_2nd_2_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_RGN_3                        0x190c
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_3_vector_0 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_3_vector_1 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_RGN_2ND_3                    0x190d
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_2nd_3_vector_0 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_2nd_3_vector_1 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_ROUGH_RGN_3                  0x190e
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_3_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_3_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_RGN_2ND_3              0x190f
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_2nd_3_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_2nd_3_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_RGN_4                        0x1910
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_4_vector_0 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_4_vector_1 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_RGN_2ND_4                    0x1911
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_2nd_4_vector_0 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_2nd_4_vector_1 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_ROUGH_RGN_4                  0x1912
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_4_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_4_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_RGN_2ND_4              0x1913
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_2nd_4_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_2nd_4_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_RGN_5                        0x1914
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_5_vector_0 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_5_vector_1 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_RGN_2ND_5                    0x1915
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_2nd_5_vector_0 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_2nd_5_vector_1 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_ROUGH_RGN_5                  0x1916
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_5_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_5_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_RGN_2ND_5              0x1917
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_2nd_5_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_2nd_5_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_RGN_6                        0x1918
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_6_vector_0 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_6_vector_1 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_RGN_2ND_6                    0x1919
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_2nd_6_vector_0 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_2nd_6_vector_1 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_ROUGH_RGN_6                  0x191a
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_6_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_6_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_RGN_2ND_6              0x191b
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_2nd_6_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_2nd_6_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_RGN_7                        0x191c
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_7_vector_0 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_7_vector_1 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_RGN_2ND_7                    0x191d
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_2nd_7_vector_0 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_2nd_7_vector_1 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_ROUGH_RGN_7                  0x191e
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_7_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_7_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_RGN_2ND_7              0x191f
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_2nd_7_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_2nd_7_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_RGN_8                        0x1920
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_8_vector_0 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_8_vector_1 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_RGN_2ND_8                    0x1921
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_2nd_8_vector_0 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_2nd_8_vector_1 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_ROUGH_RGN_8                  0x1922
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_8_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_8_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_RGN_2ND_8              0x1923
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_2nd_8_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_2nd_8_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_RGN_9                        0x1924
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_9_vector_0 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_9_vector_1 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_RGN_2ND_9                    0x1925
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_2nd_9_vector_0 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_2nd_9_vector_1 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_ROUGH_RGN_9                  0x1926
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_9_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_9_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_RGN_2ND_9              0x1927
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_2nd_9_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_2nd_9_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_RGN_10                       0x1928
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_10_vector_0 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_10_vector_1 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_RGN_2ND_10                   0x1929
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_2nd_10_vector_0 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_2nd_10_vector_1 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_ROUGH_RGN_10                 0x192a
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_10_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_10_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_RGN_2ND_10             0x192b
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_2nd_10_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_2nd_10_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_RGN_11                       0x192c
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_11_vector_0 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_11_vector_1 // signed ,    RO, default = 0  mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_RGN_2ND_11                   0x192d
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_2nd_11_vector_0 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_2nd_11_vector_1 // signed ,    RO, default = 0  2nd regional mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
#define FRC_ME_RO_GMV_ROUGH_RGN_11                 0x192e
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_11_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_11_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_GMV_ROUGH_RGN_2ND_11             0x192f
//Bit 31:29        reserved
//Bit 28:16        ro_me_region_gmv_rough_2nd_11_vector_0 // signed ,    RO, default = 0
//Bit 15:12        reserved
//Bit 11: 0        ro_me_region_gmv_rough_2nd_11_vector_1 // signed ,    RO, default = 0
#define FRC_ME_RO_ZMV_CNT                          0x1930
//Bit 31:18        reserved
//Bit 17: 0        ro_me_zmv_cnt             // unsigned ,    RO, default = 0
#define FRC_ME_RO_ACT_HI_X                         0x1931
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_act_hi_x_dtl_cnt // unsigned ,    RO, default = 0
#define FRC_ME_RO_ACT_LO_X                         0x1932
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_act_lo_x_dtl_cnt // unsigned ,    RO, default = 0
#define FRC_ME_RO_ACT_HI_Y                         0x1933
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_act_hi_y_dtl_cnt // unsigned ,    RO, default = 0
#define FRC_ME_RO_ACT_LO_Y                         0x1934
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_act_lo_y_dtl_cnt // unsigned ,    RO, default = 0
#define FRC_ME_RO_ACT_DTL                          0x1935
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_act_dtl_cnt     // unsigned ,    RO, default = 0
#define FRC_ME_RO_MAX_MIN_RGN                      0x1936
//Bit 31:24        reserved
//Bit 23:12        ro_me_glb_pos_max_mvy     // signed ,    RO, default = 0  max mvy
//Bit 11: 0        ro_me_glb_neg_min_mvy     // signed ,    RO, default = 0  min mvy
#define FRC_ME_RO_POS_HI_Y_0                       0x1937
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_0 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_0                       0x1938
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_0 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_1                       0x1939
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_1 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_1                       0x193a
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_1 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_2                       0x193b
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_2 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_2                       0x193c
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_2 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_3                       0x193d
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_3 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_3                       0x193e
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_3 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_4                       0x193f
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_4 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_4                       0x1940
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_4 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_5                       0x1941
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_5 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_5                       0x1942
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_5 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_6                       0x1943
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_6 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_6                       0x1944
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_6 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_7                       0x1945
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_7 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_7                       0x1946
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_7 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_8                       0x1947
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_8 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_8                       0x1948
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_8 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_9                       0x1949
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_9 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_9                       0x194a
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_9 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_10                      0x194b
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_10 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_10                      0x194c
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_10 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_11                      0x194d
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_11 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_11                      0x194e
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_11 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_12                      0x194f
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_12 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_12                      0x1950
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_12 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_13                      0x1951
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_13 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_13                      0x1952
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_13 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_14                      0x1953
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_14 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_14                      0x1954
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_14 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_15                      0x1955
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_15 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_15                      0x1956
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_15 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_16                      0x1957
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_16 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_16                      0x1958
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_16 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_17                      0x1959
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_17 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_17                      0x195a
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_17 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_18                      0x195b
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_18 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_18                      0x195c
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_18 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_19                      0x195d
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_19 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_19                      0x195e
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_19 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_20                      0x195f
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_20 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_20                      0x1960
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_20 // unsigned ,    RO, default = 0
#define FRC_ME_RO_POS_HI_Y_21                      0x1961
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_pos_hi_y_dtl_cnt_21 // unsigned ,    RO, default = 0
#define FRC_ME_RO_NEG_LO_Y_21                      0x1962
//Bit 31:18        reserved
//Bit 17: 0        ro_me_glb_neg_lo_y_dtl_cnt_21 // unsigned ,    RO, default = 0
#define FRC_ME_RO_GMV_TOTAL_SUM                    0x1963
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_total_sum       // unsigned ,    RO, default = 0  for logo_firmware
#define FRC_ME_RO_GMV_SMALL_NCNT                   0x1964
//Bit 31:18        reserved
//Bit 17: 0        ro_me_gmv_small_neighbor_cnt // unsigned ,    RO, default = 0  for logo_firmware
#define FRC_ME_REGION_RP_TOTAL_CNT_0               0x1965
//Bit 31:16        reserved
//Bit 15: 0        ro_region_rp_total_cnt_0  // unsigned ,    RO, default = 0  region rp block cnt sum
#define FRC_ME_REGION_RP_TOTAL_CNT_1               0x1966
//Bit 31:16        reserved
//Bit 15: 0        ro_region_rp_total_cnt_1  // unsigned ,    RO, default = 0  region rp block cnt sum
#define FRC_ME_REGION_RP_TOTAL_CNT_2               0x1967
//Bit 31:16        reserved
//Bit 15: 0        ro_region_rp_total_cnt_2  // unsigned ,    RO, default = 0  region rp block cnt sum
#define FRC_ME_REGION_RP_TOTAL_CNT_3               0x1968
//Bit 31:16        reserved
//Bit 15: 0        ro_region_rp_total_cnt_3  // unsigned ,    RO, default = 0  region rp block cnt sum
#define FRC_ME_REGION_RP_TOTAL_CNT_4               0x1969
//Bit 31:16        reserved
//Bit 15: 0        ro_region_rp_total_cnt_4  // unsigned ,    RO, default = 0  region rp block cnt sum
#define FRC_ME_REGION_RP_TOTAL_CNT_5               0x196a
//Bit 31:16        reserved
//Bit 15: 0        ro_region_rp_total_cnt_5  // unsigned ,    RO, default = 0  region rp block cnt sum
#define FRC_ME_REGION_RP_TOTAL_CNT_6               0x196b
//Bit 31:16        reserved
//Bit 15: 0        ro_region_rp_total_cnt_6  // unsigned ,    RO, default = 0  region rp block cnt sum
#define FRC_ME_REGION_RP_TOTAL_CNT_7               0x196c
//Bit 31:16        reserved
//Bit 15: 0        ro_region_rp_total_cnt_7  // unsigned ,    RO, default = 0  region rp block cnt sum
#define FRC_ME_REGION_RP_TOTAL_CNT_8               0x196d
//Bit 31:16        reserved
//Bit 15: 0        ro_region_rp_total_cnt_8  // unsigned ,    RO, default = 0  region rp block cnt sum
#define FRC_ME_REGION_RP_TOTAL_CNT_9               0x196e
//Bit 31:16        reserved
//Bit 15: 0        ro_region_rp_total_cnt_9  // unsigned ,    RO, default = 0  region rp block cnt sum
#define FRC_ME_REGION_RP_TOTAL_CNT_10              0x196f
//Bit 31:16        reserved
//Bit 15: 0        ro_region_rp_total_cnt_10 // unsigned ,    RO, default = 0  region rp block cnt sum
#define FRC_ME_REGION_RP_TOTAL_CNT_11              0x1970
//Bit 31:16        reserved
//Bit 15: 0        ro_region_rp_total_cnt_11 // unsigned ,    RO, default = 0  region rp block cnt sum
#define FRC_ME_RO_REGION_RP_GMV_0                  0x1971
//Bit 31:30        reserved
//Bit 29           ro_region_rp_gmv_invalid_0 // unsigned ,    RO, default = 1  rp gmv invalid flag
//Bit 28:16        ro_region_rp_gmv_0_vector_0 // signed ,    RO, default = 0  mv detected by HW
//Bit 15:12        reserved
//Bit 11: 0        ro_region_rp_gmv_0_vector_1 // signed ,    RO, default = 0  mv detected by HW
#define FRC_ME_RO_REGION_RP_GMV_1                  0x1972
//Bit 31:30        reserved
//Bit 29           ro_region_rp_gmv_invalid_1 // unsigned ,    RO, default = 1  rp gmv invalid flag
//Bit 28:16        ro_region_rp_gmv_1_vector_0 // signed ,    RO, default = 0  mv detected by HW
//Bit 15:12        reserved
//Bit 11: 0        ro_region_rp_gmv_1_vector_1 // signed ,    RO, default = 0  mv detected by HW
#define FRC_ME_RO_REGION_RP_GMV_2                  0x1973
//Bit 31:30        reserved
//Bit 29           ro_region_rp_gmv_invalid_2 // unsigned ,    RO, default = 1  rp gmv invalid flag
//Bit 28:16        ro_region_rp_gmv_2_vector_0 // signed ,    RO, default = 0  mv detected by HW
//Bit 15:12        reserved
//Bit 11: 0        ro_region_rp_gmv_2_vector_1 // signed ,    RO, default = 0  mv detected by HW
#define FRC_ME_RO_REGION_RP_GMV_3                  0x1974
//Bit 31:30        reserved
//Bit 29           ro_region_rp_gmv_invalid_3 // unsigned ,    RO, default = 1  rp gmv invalid flag
//Bit 28:16        ro_region_rp_gmv_3_vector_0 // signed ,    RO, default = 0  mv detected by HW
//Bit 15:12        reserved
//Bit 11: 0        ro_region_rp_gmv_3_vector_1 // signed ,    RO, default = 0  mv detected by HW
#define FRC_ME_RO_REGION_RP_GMV_4                  0x1975
//Bit 31:30        reserved
//Bit 29           ro_region_rp_gmv_invalid_4 // unsigned ,    RO, default = 1  rp gmv invalid flag
//Bit 28:16        ro_region_rp_gmv_4_vector_0 // signed ,    RO, default = 0  mv detected by HW
//Bit 15:12        reserved
//Bit 11: 0        ro_region_rp_gmv_4_vector_1 // signed ,    RO, default = 0  mv detected by HW
#define FRC_ME_RO_REGION_RP_GMV_5                  0x1976
//Bit 31:30        reserved
//Bit 29           ro_region_rp_gmv_invalid_5 // unsigned ,    RO, default = 1  rp gmv invalid flag
//Bit 28:16        ro_region_rp_gmv_5_vector_0 // signed ,    RO, default = 0  mv detected by HW
//Bit 15:12        reserved
//Bit 11: 0        ro_region_rp_gmv_5_vector_1 // signed ,    RO, default = 0  mv detected by HW
#define FRC_ME_RO_REGION_RP_GMV_6                  0x1977
//Bit 31:30        reserved
//Bit 29           ro_region_rp_gmv_invalid_6 // unsigned ,    RO, default = 1  rp gmv invalid flag
//Bit 28:16        ro_region_rp_gmv_6_vector_0 // signed ,    RO, default = 0  mv detected by HW
//Bit 15:12        reserved
//Bit 11: 0        ro_region_rp_gmv_6_vector_1 // signed ,    RO, default = 0  mv detected by HW
#define FRC_ME_RO_REGION_RP_GMV_7                  0x1978
//Bit 31:30        reserved
//Bit 29           ro_region_rp_gmv_invalid_7 // unsigned ,    RO, default = 1  rp gmv invalid flag
//Bit 28:16        ro_region_rp_gmv_7_vector_0 // signed ,    RO, default = 0  mv detected by HW
//Bit 15:12        reserved
//Bit 11: 0        ro_region_rp_gmv_7_vector_1 // signed ,    RO, default = 0  mv detected by HW
#define FRC_ME_RO_REGION_RP_GMV_8                  0x1979
//Bit 31:30        reserved
//Bit 29           ro_region_rp_gmv_invalid_8 // unsigned ,    RO, default = 1  rp gmv invalid flag
//Bit 28:16        ro_region_rp_gmv_8_vector_0 // signed ,    RO, default = 0  mv detected by HW
//Bit 15:12        reserved
//Bit 11: 0        ro_region_rp_gmv_8_vector_1 // signed ,    RO, default = 0  mv detected by HW
#define FRC_ME_RO_REGION_RP_GMV_9                  0x197a
//Bit 31:30        reserved
//Bit 29           ro_region_rp_gmv_invalid_9 // unsigned ,    RO, default = 1  rp gmv invalid flag
//Bit 28:16        ro_region_rp_gmv_9_vector_0 // signed ,    RO, default = 0  mv detected by HW
//Bit 15:12        reserved
//Bit 11: 0        ro_region_rp_gmv_9_vector_1 // signed ,    RO, default = 0  mv detected by HW
#define FRC_ME_RO_REGION_RP_GMV_10                 0x197b
//Bit 31:30        reserved
//Bit 29           ro_region_rp_gmv_invalid_10 // unsigned ,    RO, default = 1  rp gmv invalid flag
//Bit 28:16        ro_region_rp_gmv_10_vector_0 // signed ,    RO, default = 0  mv detected by HW
//Bit 15:12        reserved
//Bit 11: 0        ro_region_rp_gmv_10_vector_1 // signed ,    RO, default = 0  mv detected by HW
#define FRC_ME_RO_REGION_RP_GMV_11                 0x197c
//Bit 31:30        reserved
//Bit 29           ro_region_rp_gmv_invalid_11 // unsigned ,    RO, default = 1  rp gmv invalid flag
//Bit 28:16        ro_region_rp_gmv_11_vector_0 // signed ,    RO, default = 0  mv detected by HW
//Bit 15:12        reserved
//Bit 11: 0        ro_region_rp_gmv_11_vector_1 // signed ,    RO, default = 0  mv detected by HW
#define FRC_ME_RO_REGION_RP_GMV_CNT_0              0x197d
//Bit 31:16        ro_region_rp_gmv_neighbor_cnt_0 // unsigned ,    RO, default = 0
//Bit 15: 0        ro_region_rp_gmv_cnt_0    // unsigned ,    RO, default = 0  region rp gmv cnt
#define FRC_ME_RO_REGION_RP_GMV_CNT_1              0x197e
//Bit 31:16        ro_region_rp_gmv_neighbor_cnt_1 // unsigned ,    RO, default = 0
//Bit 15: 0        ro_region_rp_gmv_cnt_1    // unsigned ,    RO, default = 0  region rp gmv cnt
#define FRC_ME_RO_REGION_RP_GMV_CNT_2              0x197f
//Bit 31:16        ro_region_rp_gmv_neighbor_cnt_2 // unsigned ,    RO, default = 0
//Bit 15: 0        ro_region_rp_gmv_cnt_2    // unsigned ,    RO, default = 0  region rp gmv cnt
#define FRC_ME_RO_REGION_RP_GMV_CNT_3              0x1980
//Bit 31:16        ro_region_rp_gmv_neighbor_cnt_3 // unsigned ,    RO, default = 0
//Bit 15: 0        ro_region_rp_gmv_cnt_3    // unsigned ,    RO, default = 0  region rp gmv cnt
#define FRC_ME_RO_REGION_RP_GMV_CNT_4              0x1981
//Bit 31:16        ro_region_rp_gmv_neighbor_cnt_4 // unsigned ,    RO, default = 0
//Bit 15: 0        ro_region_rp_gmv_cnt_4    // unsigned ,    RO, default = 0  region rp gmv cnt
#define FRC_ME_RO_REGION_RP_GMV_CNT_5              0x1982
//Bit 31:16        ro_region_rp_gmv_neighbor_cnt_5 // unsigned ,    RO, default = 0
//Bit 15: 0        ro_region_rp_gmv_cnt_5    // unsigned ,    RO, default = 0  region rp gmv cnt
#define FRC_ME_RO_REGION_RP_GMV_CNT_6              0x1983
//Bit 31:16        ro_region_rp_gmv_neighbor_cnt_6 // unsigned ,    RO, default = 0
//Bit 15: 0        ro_region_rp_gmv_cnt_6    // unsigned ,    RO, default = 0  region rp gmv cnt
#define FRC_ME_RO_REGION_RP_GMV_CNT_7              0x1984
//Bit 31:16        ro_region_rp_gmv_neighbor_cnt_7 // unsigned ,    RO, default = 0
//Bit 15: 0        ro_region_rp_gmv_cnt_7    // unsigned ,    RO, default = 0  region rp gmv cnt
#define FRC_ME_RO_REGION_RP_GMV_CNT_8              0x1985
//Bit 31:16        ro_region_rp_gmv_neighbor_cnt_8 // unsigned ,    RO, default = 0
//Bit 15: 0        ro_region_rp_gmv_cnt_8    // unsigned ,    RO, default = 0  region rp gmv cnt
#define FRC_ME_RO_REGION_RP_GMV_CNT_9              0x1986
//Bit 31:16        ro_region_rp_gmv_neighbor_cnt_9 // unsigned ,    RO, default = 0
//Bit 15: 0        ro_region_rp_gmv_cnt_9    // unsigned ,    RO, default = 0  region rp gmv cnt
#define FRC_ME_RO_REGION_RP_GMV_CNT_10             0x1987
//Bit 31:16        ro_region_rp_gmv_neighbor_cnt_10 // unsigned ,    RO, default = 0
//Bit 15: 0        ro_region_rp_gmv_cnt_10   // unsigned ,    RO, default = 0  region rp gmv cnt
#define FRC_ME_RO_REGION_RP_GMV_CNT_11             0x1988
//Bit 31:16        ro_region_rp_gmv_neighbor_cnt_11 // unsigned ,    RO, default = 0
//Bit 15: 0        ro_region_rp_gmv_cnt_11   // unsigned ,    RO, default = 0  region rp gmv cnt
#define FRC_ME_RO_REGION_FB_T_0_0                  0x1989
//Bit 31: 0        ro_me_region_fb_t_consis_0_0 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_0_1                  0x198a
//Bit 31: 0        ro_me_region_fb_t_consis_0_1 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_0_2                  0x198b
//Bit 31: 0        ro_me_region_fb_t_consis_0_2 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_0_3                  0x198c
//Bit 31: 0        ro_me_region_fb_t_consis_0_3 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_0_4                  0x198d
//Bit 31: 0        ro_me_region_fb_t_consis_0_4 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_0_5                  0x198e
//Bit 31: 0        ro_me_region_fb_t_consis_0_5 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_1_0                  0x198f
//Bit 31: 0        ro_me_region_fb_t_consis_1_0 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_1_1                  0x1990
//Bit 31: 0        ro_me_region_fb_t_consis_1_1 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_1_2                  0x1991
//Bit 31: 0        ro_me_region_fb_t_consis_1_2 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_1_3                  0x1992
//Bit 31: 0        ro_me_region_fb_t_consis_1_3 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_1_4                  0x1993
//Bit 31: 0        ro_me_region_fb_t_consis_1_4 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_1_5                  0x1994
//Bit 31: 0        ro_me_region_fb_t_consis_1_5 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_2_0                  0x1995
//Bit 31: 0        ro_me_region_fb_t_consis_2_0 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_2_1                  0x1996
//Bit 31: 0        ro_me_region_fb_t_consis_2_1 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_2_2                  0x1997
//Bit 31: 0        ro_me_region_fb_t_consis_2_2 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_2_3                  0x1998
//Bit 31: 0        ro_me_region_fb_t_consis_2_3 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_2_4                  0x1999
//Bit 31: 0        ro_me_region_fb_t_consis_2_4 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_2_5                  0x199a
//Bit 31: 0        ro_me_region_fb_t_consis_2_5 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_3_0                  0x199b
//Bit 31: 0        ro_me_region_fb_t_consis_3_0 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_3_1                  0x199c
//Bit 31: 0        ro_me_region_fb_t_consis_3_1 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_3_2                  0x199d
//Bit 31: 0        ro_me_region_fb_t_consis_3_2 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_3_3                  0x199e
//Bit 31: 0        ro_me_region_fb_t_consis_3_3 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_3_4                  0x199f
//Bit 31: 0        ro_me_region_fb_t_consis_3_4 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
#define FRC_ME_RO_REGION_FB_T_3_5                  0x19a0
//Bit 31: 0        ro_me_region_fb_t_consis_3_5 // unsigned ,    RO, default = 0  new region temporal consistences for pf or pc_phs
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/me_stat_regs2.h
//
// -----------------------------------------------
// REG_BASE:  FRC_ME_PAGE3_APB_BASE = 0x1a
// -----------------------------------------------
//`include "me_stat_regs3.h"
// -----------------------------------------------
// REG_BASE:  FRC_ME_VP_APB_BASE = 0x1e
// -----------------------------------------------
//
// Reading file:  ./frc_inc/frc_vp_top_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_VP_TOP1                                0x1e00
//Bit 31:24        reserved
//Bit 23:20        reg_vp_blkdiv_ftxy_1      // unsigned ,    RW, default = 2  block foot y added divide by blksize_y to get blk_ofst_y for VP partI(retimer)
//Bit 19:16        reg_vp_blkdiv_ftxy_0      // unsigned ,    RW, default = 2  block foot x added divide by blksize_x to get blk_ofst_x for VP partI(retimer)
//Bit 15:14        reserved
//Bit 13:12        reg_vp_mvx_div_mode       // unsigned ,    RW, default = 0  mvx decimal bits, 0:2bits, 1:3bits, 2:4bits .
//Bit 11:10        reserved
//Bit  9: 8        reg_vp_mvy_div_mode       // unsigned ,    RW, default = 0  mvy decimal bits, 0:2bits, 1:3bits, 2:4bits
//Bit  7: 2        reserved
//Bit  1           reg_vp_add_blkdiv_ftxy_en // unsigned ,    RW, default = 0  enable signal for add blkdiv_ftxy;
//Bit  0           reg_vp_en                 // unsigned ,    RW, default = 1  vp processing enable, 0:disable, 1:enable
#define FRC_VP_GMV                                 0x1e01
//Bit 31:29        reserved
//Bit 28:16        reg_vp_gmv_vector_0       // signed ,    RW, default = 0  global mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:13        reserved
//Bit 12           reg_vp_gmv_invalid        // unsigned ,    RW, default = 0  when 1, gmv is invalid.
//Bit 11: 0        reg_vp_gmv_vector_1       // signed ,    RW, default = 0
#define FRC_VP_OCT_GMV                             0x1e02
//Bit 31:29        reserved
//Bit 28:16        reg_vp_oct_gmv_vector_0   // signed ,    RW, default = 0  oct gmv
//Bit 15:13        reserved
//Bit 12           reg_vp_oct_gmv_invalid    // unsigned ,    RW, default = 0  when 1, gmv is invalid.
//Bit 11: 0        reg_vp_oct_gmv_vector_1   // signed ,    RW, default = 0
#define FRC_VP_BB_1                                0x1e03
//Bit 31:16        reg_vp_bb_xyxy_1          // unsigned ,    RW, default = 0  black bar block index of top
//Bit 15: 0        reg_vp_bb_xyxy_0          // unsigned ,    RW, default = 0  black bar block index of left
#define FRC_VP_BB_2                                0x1e04
//Bit 31:16        reg_vp_bb_xyxy_3          // unsigned ,    RW, default = 134  black bar block index of bottom
//Bit 15: 0        reg_vp_bb_xyxy_2          // unsigned ,    RW, default = 239  black bar block index of right
#define FRC_VP_ME_BB_1                             0x1e05
//Bit 31:16        reg_vp_me_bb_blk_xyxy_1   // unsigned ,    RW, default = 0  black bar block index of top
//Bit 15: 0        reg_vp_me_bb_blk_xyxy_0   // unsigned ,    RW, default = 0  black bar block index of left
#define FRC_VP_ME_BB_2                             0x1e06
//Bit 31:16        reg_vp_me_bb_blk_xyxy_3   // unsigned ,    RW, default = 134  black bar block index of bottom
//Bit 15: 0        reg_vp_me_bb_blk_xyxy_2   // unsigned ,    RW, default = 239  black bar block index of right
#define FRC_VP_SR                                  0x1e07
//Bit 31:16        reserved
//Bit 15: 8        reg_vp_hsrch_rng          // unsigned ,    RW, default = 11  vp partII (dehalo) horizontal search range
//Bit  7: 4        reg_dehalo_vsrch_rng      // unsigned ,    RW, default = 3  vp partII (dehalo) vertical search range
//Bit  3: 0        reg_retimer_vsrch_rng     // unsigned ,    RW, default = 5  vp partI (retimer) vertical search range
#define FRC_VP_GMV_MUX                             0x1e08
//Bit 31:29        reserved
//Bit 28:16        ro_vp_gmv_mux_vector_0    // signed ,    RO, default = 0  global mv detected by FW, [mvx, mvy] s9.2, replace the bv if reg_me_overwrite_bv_en=1, otherwise is gmv of each loop, only care about the vector, no care of the sad and so on.
//Bit 15:14        reserved
//Bit 13           ro_vp_gmv_mux_invalid     // unsigned ,    RO, default = 0  when 1, gmv is invalid.
//Bit 12: 1        ro_vp_gmv_mux_vector_1    // signed ,    RO, default = 0
//Bit  0           reg_vp_gmv_mux_sel        // unsigned ,    RW, default = 1  0,reg_vp_gmv;1,ro_me_gmv
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_vp_top_regs.h
//
//
// Reading file:  ./frc_inc/frc_vp1_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_VP_RETIMER_DALPHA                      0x1e1c
//Bit 31: 8        reserved
//Bit  7: 4        reg_retimer_fixed_alpha   // unsigned ,    RW, default = 4  fixed alpha of mv0 and mv1;
//Bit  3: 1        reserved
//Bit  0           reg_retimer_use_dapha     // unsigned ,    RW, default = 1  use dynamic alpha based on mv_diff_x and mv_diff_y comparison or not; 1: use dynamic alpha, 0: use reg_retimer_fixed_alpha
#define FRC_VP_CP2PCR_CP2PCRR_DIFF_TH_1            0x1e1d
//Bit 31:24        reg_cp2pcr_cp2pcrr_reg_dyn_diff_curv_0 // unsigned ,    RW, default = 3  diff_diff_curv[0],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
//Bit 23:20        reserved
//Bit 19:16        reg_cp2pcr_cp2pcrr_reg_dyn_diff_thn // unsigned ,    RW, default = 5  threshold to dynamic diff calculation curve; th1 = th0 + (1*2^thn)
//Bit 15: 8        reg_cp2pcr_cp2pcrr_reg_dyn_diff_th0 // unsigned ,    RW, default = 6  threshold0 to dynamic diff calculation curve, th1 = th0 + (1*2^thn)
//Bit  7: 4        reg_cp2pcr_cp2pcrr_reg_dyn_b_th_gain // unsigned ,    RW, default = 8  gain to (s_th/4) to get the b_th, default = 8;
//Bit  3: 2        reserved
//Bit  1           reg_cp2pcr_cp2pcrr_reg_use_dyn_b_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_b_th;
//Bit  0           reg_cp2pcr_cp2pcrr_reg_use_dyn_s_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_s_th;
#define FRC_VP_CP2PCR_CP2PCRR_DIFF_TH_2            0x1e1e
//Bit 31:24        reserved
//Bit 23:16        reg_cp2pcr_cp2pcrr_reg_diff_mv0_mv1_b_th // unsigned ,    RW, default = 16  static programable threshold for diff_mv0_mv1_b_th;
//Bit 15: 8        reg_cp2pcr_cp2pcrr_reg_diff_mv0_mv1_s_th // unsigned ,    RW, default = 4  static programable threshold for diff_mv0_mv1_s_th;
//Bit  7: 0        reg_cp2pcr_cp2pcrr_reg_dyn_diff_curv_1 // unsigned ,    RW, default = 15  diff_diff_curv[1],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
#define FRC_VP_CN2NCR_CN2NCRR_DIFF_TH_1            0x1e1f
//Bit 31:24        reg_cn2ncr_cn2ncrr_reg_dyn_diff_curv_0 // unsigned ,    RW, default = 3  diff_diff_curv[0],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len>th1) dyn_diff_th = curv[1]; else interpolation between;
//Bit 23:20        reserved
//Bit 19:16        reg_cn2ncr_cn2ncrr_reg_dyn_diff_thn // unsigned ,    RW, default = 5  threshold to dynamic diff calculation curve; th1 = th0 + (1*2^thn)
//Bit 15: 8        reg_cn2ncr_cn2ncrr_reg_dyn_diff_th0 // unsigned ,    RW, default = 6  threshold0 to dynamic diff calculation curve, th1 = th0 + (1*2^thn)
//Bit  7: 4        reg_cn2ncr_cn2ncrr_reg_dyn_b_th_gain // unsigned ,    RW, default = 8  gain to (s_th/4) to get the b_th, default = 8;
//Bit  3: 2        reserved
//Bit  1           reg_cn2ncr_cn2ncrr_reg_use_dyn_b_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_b_th;
//Bit  0           reg_cn2ncr_cn2ncrr_reg_use_dyn_s_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_s_th;
#define FRC_VP_CN2NCR_CN2NCRR_DIFF_TH_2            0x1e20
//Bit 31:24        reserved
//Bit 23:16        reg_cn2ncr_cn2ncrr_reg_diff_mv0_mv1_b_th // unsigned ,    RW, default = 16  static programable threshold for diff_mv0_mv1_b_th;
//Bit 15: 8        reg_cn2ncr_cn2ncrr_reg_diff_mv0_mv1_s_th // unsigned ,    RW, default = 4  static programable threshold for diff_mv0_mv1_s_th;
//Bit  7: 0        reg_cn2ncr_cn2ncrr_reg_dyn_diff_curv_1 // unsigned ,    RW, default = 15  diff_diff_curv[1],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
#define FRC_VP_CPREV_CP2PCR_DIFF_TH_1              0x1e21
//Bit 31:24        reg_cprev_cp2pcr_reg_dyn_diff_curv_0 // unsigned ,    RW, default = 3  diff_diff_curv[0],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
//Bit 23:20        reserved
//Bit 19:16        reg_cprev_cp2pcr_reg_dyn_diff_thn // unsigned ,    RW, default = 5  threshold to dynamic diff calculation curve; th1 = th0 + (1*2^thn)
//Bit 15: 8        reg_cprev_cp2pcr_reg_dyn_diff_th0 // unsigned ,    RW, default = 6  threshold0 to dynamic diff calculation curve, th1 = th0 + (1*2^thn)
//Bit  7: 4        reg_cprev_cp2pcr_reg_dyn_b_th_gain // unsigned ,    RW, default = 8  gain to (s_th/4) to get the b_th, default = 8;
//Bit  3: 2        reserved
//Bit  1           reg_cprev_cp2pcr_reg_use_dyn_b_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_b_th;
//Bit  0           reg_cprev_cp2pcr_reg_use_dyn_s_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_s_th;
#define FRC_VP_CPREV_CP2PCR_DIFF_TH_2              0x1e22
//Bit 31:24        reserved
//Bit 23:16        reg_cprev_cp2pcr_reg_diff_mv0_mv1_b_th // unsigned ,    RW, default = 16  static programable threshold for diff_mv0_mv1_b_th;
//Bit 15: 8        reg_cprev_cp2pcr_reg_diff_mv0_mv1_s_th // unsigned ,    RW, default = 4  static programable threshold for diff_mv0_mv1_s_th;
//Bit  7: 0        reg_cprev_cp2pcr_reg_dyn_diff_curv_1 // unsigned ,    RW, default = 15  diff_diff_curv[1],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
#define FRC_VP_CNREV_CN2NCR_DIFF_TH_1              0x1e23
//Bit 31:24        reg_cnrev_cn2ncr_reg_dyn_diff_curv_0 // unsigned ,    RW, default = 3  diff_diff_curv[0],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
//Bit 23:20        reserved
//Bit 19:16        reg_cnrev_cn2ncr_reg_dyn_diff_thn // unsigned ,    RW, default = 5  threshold to dynamic diff calculation curve; th1 = th0 + (1*2^thn)
//Bit 15: 8        reg_cnrev_cn2ncr_reg_dyn_diff_th0 // unsigned ,    RW, default = 6  threshold0 to dynamic diff calculation curve, th1 = th0 + (1*2^thn)
//Bit  7: 4        reg_cnrev_cn2ncr_reg_dyn_b_th_gain // unsigned ,    RW, default = 8  gain to (s_th/4) to get the b_th, default = 8;
//Bit  3: 2        reserved
//Bit  1           reg_cnrev_cn2ncr_reg_use_dyn_b_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_b_th;
//Bit  0           reg_cnrev_cn2ncr_reg_use_dyn_s_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_s_th;
#define FRC_VP_CNREV_CN2NCR_DIFF_TH_2              0x1e24
//Bit 31:24        reserved
//Bit 23:16        reg_cnrev_cn2ncr_reg_diff_mv0_mv1_b_th // unsigned ,    RW, default = 16  static programable threshold for diff_mv0_mv1_b_th;
//Bit 15: 8        reg_cnrev_cn2ncr_reg_diff_mv0_mv1_s_th // unsigned ,    RW, default = 4  static programable threshold for diff_mv0_mv1_s_th;
//Bit  7: 0        reg_cnrev_cn2ncr_reg_dyn_diff_curv_1 // unsigned ,    RW, default = 15  diff_diff_curv[1],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
#define FRC_VP_CPEXT_CP2PCR_DIFF_TH_1              0x1e25
//Bit 31:24        reg_cpext_cp2pcr_reg_dyn_diff_curv_0 // unsigned ,    RW, default = 3  diff_diff_curv[0],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
//Bit 23:20        reserved
//Bit 19:16        reg_cpext_cp2pcr_reg_dyn_diff_thn // unsigned ,    RW, default = 5  threshold to dynamic diff calculation curve; th1 = th0 + (1*2^thn)
//Bit 15: 8        reg_cpext_cp2pcr_reg_dyn_diff_th0 // unsigned ,    RW, default = 6  threshold0 to dynamic diff calculation curve, th1 = th0 + (1*2^thn)
//Bit  7: 4        reg_cpext_cp2pcr_reg_dyn_b_th_gain // unsigned ,    RW, default = 8  gain to (s_th/4) to get the b_th, default = 8;
//Bit  3: 2        reserved
//Bit  1           reg_cpext_cp2pcr_reg_use_dyn_b_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_b_th;
//Bit  0           reg_cpext_cp2pcr_reg_use_dyn_s_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_s_th;
#define FRC_VP_CPEXT_CP2PCR_DIFF_TH_2              0x1e26
//Bit 31:24        reserved
//Bit 23:16        reg_cpext_cp2pcr_reg_diff_mv0_mv1_b_th // unsigned ,    RW, default = 16  static programable threshold for diff_mv0_mv1_b_th;
//Bit 15: 8        reg_cpext_cp2pcr_reg_diff_mv0_mv1_s_th // unsigned ,    RW, default = 4  static programable threshold for diff_mv0_mv1_s_th;
//Bit  7: 0        reg_cpext_cp2pcr_reg_dyn_diff_curv_1 // unsigned ,    RW, default = 15  diff_diff_curv[1],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
#define FRC_VP_CNEXT_CN2NCR_DIFF_TH_1              0x1e27
//Bit 31:24        reg_cnext_cn2ncr_reg_dyn_diff_curv_0 // unsigned ,    RW, default = 3  diff_diff_curv[0],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
//Bit 23:20        reserved
//Bit 19:16        reg_cnext_cn2ncr_reg_dyn_diff_thn // unsigned ,    RW, default = 5  threshold to dynamic diff calculation curve; th1 = th0 + (1*2^thn)
//Bit 15: 8        reg_cnext_cn2ncr_reg_dyn_diff_th0 // unsigned ,    RW, default = 6  threshold0 to dynamic diff calculation curve, th1 = th0 + (1*2^thn)
//Bit  7: 4        reg_cnext_cn2ncr_reg_dyn_b_th_gain // unsigned ,    RW, default = 8  gain to (s_th/4) to get the b_th, default = 8;
//Bit  3: 2        reserved
//Bit  1           reg_cnext_cn2ncr_reg_use_dyn_b_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_b_th;
//Bit  0           reg_cnext_cn2ncr_reg_use_dyn_s_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_s_th;
#define FRC_VP_CNEXT_CN2NCR_DIFF_TH_2              0x1e28
//Bit 31:24        reserved
//Bit 23:16        reg_cnext_cn2ncr_reg_diff_mv0_mv1_b_th // unsigned ,    RW, default = 16  static programable threshold for diff_mv0_mv1_b_th;
//Bit 15: 8        reg_cnext_cn2ncr_reg_diff_mv0_mv1_s_th // unsigned ,    RW, default = 4  static programable threshold for diff_mv0_mv1_s_th;
//Bit  7: 0        reg_cnext_cn2ncr_reg_dyn_diff_curv_1 // unsigned ,    RW, default = 15  diff_diff_curv[1],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
#define FRC_VP_CP_CN2NCR_DIFF_TH_1                 0x1e29
//Bit 31:24        reg_cp_cn2ncr_reg_dyn_diff_curv_0 // unsigned ,    RW, default = 3  diff_diff_curv[0],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
//Bit 23:20        reserved
//Bit 19:16        reg_cp_cn2ncr_reg_dyn_diff_thn // unsigned ,    RW, default = 5  threshold to dynamic diff calculation curve; th1 = th0 + (1*2^thn)
//Bit 15: 8        reg_cp_cn2ncr_reg_dyn_diff_th0 // unsigned ,    RW, default = 6  threshold0 to dynamic diff calculation curve, th1 = th0 + (1*2^thn)
//Bit  7: 4        reg_cp_cn2ncr_reg_dyn_b_th_gain // unsigned ,    RW, default = 8  gain to (s_th/4) to get the b_th, default = 8;
//Bit  3: 2        reserved
//Bit  1           reg_cp_cn2ncr_reg_use_dyn_b_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_b_th;
//Bit  0           reg_cp_cn2ncr_reg_use_dyn_s_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_s_th;
#define FRC_VP_CP_CN2NCR_DIFF_TH_2                 0x1e2a
//Bit 31:24        reserved
//Bit 23:16        reg_cp_cn2ncr_reg_diff_mv0_mv1_b_th // unsigned ,    RW, default = 16  static programable threshold for diff_mv0_mv1_b_th;
//Bit 15: 8        reg_cp_cn2ncr_reg_diff_mv0_mv1_s_th // unsigned ,    RW, default = 4  static programable threshold for diff_mv0_mv1_s_th;
//Bit  7: 0        reg_cp_cn2ncr_reg_dyn_diff_curv_1 // unsigned ,    RW, default = 15  diff_diff_curv[1],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
#define FRC_VP_CN_CP2PCR_DIFF_TH_1                 0x1e2b
//Bit 31:24        reg_cn_cp2pcr_reg_dyn_diff_curv_0 // unsigned ,    RW, default = 3  diff_diff_curv[0],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
//Bit 23:20        reserved
//Bit 19:16        reg_cn_cp2pcr_reg_dyn_diff_thn // unsigned ,    RW, default = 5  threshold to dynamic diff calculation curve; th1 = th0 + (1*2^thn)
//Bit 15: 8        reg_cn_cp2pcr_reg_dyn_diff_th0 // unsigned ,    RW, default = 6  threshold0 to dynamic diff calculation curve, th1 = th0 + (1*2^thn)
//Bit  7: 4        reg_cn_cp2pcr_reg_dyn_b_th_gain // unsigned ,    RW, default = 8  gain to (s_th/4) to get the b_th, default = 8;
//Bit  3: 2        reserved
//Bit  1           reg_cn_cp2pcr_reg_use_dyn_b_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_b_th;
//Bit  0           reg_cn_cp2pcr_reg_use_dyn_s_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_s_th;
#define FRC_VP_CN_CP2PCR_DIFF_TH_2                 0x1e2c
//Bit 31:24        reserved
//Bit 23:16        reg_cn_cp2pcr_reg_diff_mv0_mv1_b_th // unsigned ,    RW, default = 16  static programable threshold for diff_mv0_mv1_b_th;
//Bit 15: 8        reg_cn_cp2pcr_reg_diff_mv0_mv1_s_th // unsigned ,    RW, default = 4  static programable threshold for diff_mv0_mv1_s_th;
//Bit  7: 0        reg_cn_cp2pcr_reg_dyn_diff_curv_1 // unsigned ,    RW, default = 15  diff_diff_curv[1],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
#define FRC_VP_CN_CP_DIFF_TH_1                     0x1e2d
//Bit 31:24        reg_cn_cp_reg_dyn_diff_curv_0 // unsigned ,    RW, default = 3  diff_diff_curv[0],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
//Bit 23:20        reserved
//Bit 19:16        reg_cn_cp_reg_dyn_diff_thn // unsigned ,    RW, default = 5  threshold to dynamic diff calculation curve; th1 = th0 + (1*2^thn)
//Bit 15: 8        reg_cn_cp_reg_dyn_diff_th0 // unsigned ,    RW, default = 6  threshold0 to dynamic diff calculation curve, th1 = th0 + (1*2^thn)
//Bit  7: 4        reg_cn_cp_reg_dyn_b_th_gain // unsigned ,    RW, default = 8  gain to (s_th/4) to get the b_th, default = 8;
//Bit  3: 2        reserved
//Bit  1           reg_cn_cp_reg_use_dyn_b_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_b_th;
//Bit  0           reg_cn_cp_reg_use_dyn_s_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_s_th;
#define FRC_VP_CN_CP_DIFF_TH_2                     0x1e2e
//Bit 31:24        reserved
//Bit 23:16        reg_cn_cp_reg_diff_mv0_mv1_b_th // unsigned ,    RW, default = 16  static programable threshold for diff_mv0_mv1_b_th;
//Bit 15: 8        reg_cn_cp_reg_diff_mv0_mv1_s_th // unsigned ,    RW, default = 4  static programable threshold for diff_mv0_mv1_s_th;
//Bit  7: 0        reg_cn_cp_reg_dyn_diff_curv_1 // unsigned ,    RW, default = 15  diff_diff_curv[1],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
#define FRC_VP_CN_CN2PCR_DIFF_TH_1                 0x1e2f
//Bit 31:24        reg_cn_cn2pcr_reg_dyn_diff_curv_0 // unsigned ,    RW, default = 3  diff_diff_curv[0],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
//Bit 23:20        reserved
//Bit 19:16        reg_cn_cn2pcr_reg_dyn_diff_thn // unsigned ,    RW, default = 5  threshold to dynamic diff calculation curve; th1 = th0 + (1*2^thn)
//Bit 15: 8        reg_cn_cn2pcr_reg_dyn_diff_th0 // unsigned ,    RW, default = 6  threshold0 to dynamic diff calculation curve, th1 = th0 + (1*2^thn)
//Bit  7: 4        reg_cn_cn2pcr_reg_dyn_b_th_gain // unsigned ,    RW, default = 8  gain to (s_th/4) to get the b_th, default = 8;
//Bit  3: 2        reserved
//Bit  1           reg_cn_cn2pcr_reg_use_dyn_b_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_b_th;
//Bit  0           reg_cn_cn2pcr_reg_use_dyn_s_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_s_th;
#define FRC_VP_CN_CN2PCR_DIFF_TH_2                 0x1e30
//Bit 31:24        reserved
//Bit 23:16        reg_cn_cn2pcr_reg_diff_mv0_mv1_b_th // unsigned ,    RW, default = 16  static programable threshold for diff_mv0_mv1_b_th;
//Bit 15: 8        reg_cn_cn2pcr_reg_diff_mv0_mv1_s_th // unsigned ,    RW, default = 4  static programable threshold for diff_mv0_mv1_s_th;
//Bit  7: 0        reg_cn_cn2pcr_reg_dyn_diff_curv_1 // unsigned ,    RW, default = 15  diff_diff_curv[1],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
#define FRC_VP_CN_CN2NCRR_DIFF_TH_1                0x1e31
//Bit 31:24        reg_cn_cn2ncrr_reg_dyn_diff_curv_0 // unsigned ,    RW, default = 3  diff_diff_curv[0],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
//Bit 23:20        reserved
//Bit 19:16        reg_cn_cn2ncrr_reg_dyn_diff_thn // unsigned ,    RW, default = 5  threshold to dynamic diff calculation curve; th1 = th0 + (1*2^thn)
//Bit 15: 8        reg_cn_cn2ncrr_reg_dyn_diff_th0 // unsigned ,    RW, default = 6  threshold0 to dynamic diff calculation curve, th1 = th0 + (1*2^thn)
//Bit  7: 4        reg_cn_cn2ncrr_reg_dyn_b_th_gain // unsigned ,    RW, default = 8  gain to (s_th/4) to get the b_th, default = 8;
//Bit  3: 2        reserved
//Bit  1           reg_cn_cn2ncrr_reg_use_dyn_b_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_b_th;
//Bit  0           reg_cn_cn2ncrr_reg_use_dyn_s_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_s_th;
#define FRC_VP_CN_CN2NCRR_DIFF_TH_2                0x1e32
//Bit 31:24        reserved
//Bit 23:16        reg_cn_cn2ncrr_reg_diff_mv0_mv1_b_th // unsigned ,    RW, default = 16  static programable threshold for diff_mv0_mv1_b_th;
//Bit 15: 8        reg_cn_cn2ncrr_reg_diff_mv0_mv1_s_th // unsigned ,    RW, default = 4  static programable threshold for diff_mv0_mv1_s_th;
//Bit  7: 0        reg_cn_cn2ncrr_reg_dyn_diff_curv_1 // unsigned ,    RW, default = 15  diff_diff_curv[1],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
#define FRC_VP_CP_CP2NCR_DIFF_TH_1                 0x1e33
//Bit 31:24        reg_cp_cp2ncr_reg_dyn_diff_curv_0 // unsigned ,    RW, default = 3  diff_diff_curv[0],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
//Bit 23:20        reserved
//Bit 19:16        reg_cp_cp2ncr_reg_dyn_diff_thn // unsigned ,    RW, default = 5  threshold to dynamic diff calculation curve; th1 = th0 + (1*2^thn)
//Bit 15: 8        reg_cp_cp2ncr_reg_dyn_diff_th0 // unsigned ,    RW, default = 6  threshold0 to dynamic diff calculation curve, th1 = th0 + (1*2^thn)
//Bit  7: 4        reg_cp_cp2ncr_reg_dyn_b_th_gain // unsigned ,    RW, default = 8  gain to (s_th/4) to get the b_th, default = 8;
//Bit  3: 2        reserved
//Bit  1           reg_cp_cp2ncr_reg_use_dyn_b_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_b_th;
//Bit  0           reg_cp_cp2ncr_reg_use_dyn_s_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_s_th;
#define FRC_VP_CP_CP2NCR_DIFF_TH_2                 0x1e34
//Bit 31:24        reserved
//Bit 23:16        reg_cp_cp2ncr_reg_diff_mv0_mv1_b_th // unsigned ,    RW, default = 16  static programable threshold for diff_mv0_mv1_b_th;
//Bit 15: 8        reg_cp_cp2ncr_reg_diff_mv0_mv1_s_th // unsigned ,    RW, default = 4  static programable threshold for diff_mv0_mv1_s_th;
//Bit  7: 0        reg_cp_cp2ncr_reg_dyn_diff_curv_1 // unsigned ,    RW, default = 15  diff_diff_curv[1],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
#define FRC_VP_CP_CP2PCRR_DIFF_TH_1                0x1e35
//Bit 31:24        reg_cp_cp2pcrr_reg_dyn_diff_curv_0 // unsigned ,    RW, default = 3  diff_diff_curv[0],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
//Bit 23:20        reserved
//Bit 19:16        reg_cp_cp2pcrr_reg_dyn_diff_thn // unsigned ,    RW, default = 5  threshold to dynamic diff calculation curve; th1 = th0 + (1*2^thn)
//Bit 15: 8        reg_cp_cp2pcrr_reg_dyn_diff_th0 // unsigned ,    RW, default = 6  threshold0 to dynamic diff calculation curve, th1 = th0 + (1*2^thn)
//Bit  7: 4        reg_cp_cp2pcrr_reg_dyn_b_th_gain // unsigned ,    RW, default = 8  gain to (s_th/4) to get the b_th, default = 8;
//Bit  3: 2        reserved
//Bit  1           reg_cp_cp2pcrr_reg_use_dyn_b_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_b_th;
//Bit  0           reg_cp_cp2pcrr_reg_use_dyn_s_th // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1_s_th;
#define FRC_VP_CP_CP2PCRR_DIFF_TH_2                0x1e36
//Bit 31:24        reserved
//Bit 23:16        reg_cp_cp2pcrr_reg_diff_mv0_mv1_b_th // unsigned ,    RW, default = 16  static programable threshold for diff_mv0_mv1_b_th;
//Bit 15: 8        reg_cp_cp2pcrr_reg_diff_mv0_mv1_s_th // unsigned ,    RW, default = 4  static programable threshold for diff_mv0_mv1_s_th;
//Bit  7: 0        reg_cp_cp2pcrr_reg_dyn_diff_curv_1 // unsigned ,    RW, default = 15  diff_diff_curv[1],if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
#define FRC_VP_CP2PCR_CP2PCRR_DIR_TYPE             0x1e37
//Bit 31:24        reg_cp2pcr_cp2pcrr_loc_chk_dir_th_0 // unsigned ,    RW, default = 12  mvx threshold to check diff_mvx to decide typex=cover or uncover
//Bit 23:16        reg_cp2pcr_cp2pcrr_loc_chk_dir_th_1 // unsigned ,    RW, default = 12  mvy threshold to check diff_mvy to decide typey=cover or uncover
//Bit 15: 8        reg_cp2pcr_cp2pcrr_loc_chk_mvdiff_th_0 // unsigned ,    RW, default = 4  mvx threshold to check diff_mvx to decide if typex==0
//Bit  7: 2        reg_cp2pcr_cp2pcrr_loc_chk_mvdiff_th_1 // unsigned ,    RW, default = 4  mvy threshold to check diff_mvy to decide if typey==0
//Bit  1            reserved
//Bit  0           reg_cp2pcr_cp2pcrr_oor_enable // unsigned ,    RW, default = 1  enable to use out of range considerations in dir_type decision
#define FRC_VP_CN2NCR_CN2NCRR_DIR_TYPE             0x1e38
//Bit 31:24        reg_cn2ncr_cn2ncrr_loc_chk_dir_th_0 // unsigned ,    RW, default = 12  mvx threshold to check diff_mvx to decide typex=cover or uncover
//Bit 23:16        reg_cn2ncr_cn2ncrr_loc_chk_dir_th_1 // unsigned ,    RW, default = 12  mvy threshold to check diff_mvy to decide typey=cover or uncover
//Bit 15: 8        reg_cn2ncr_cn2ncrr_loc_chk_mvdiff_th_0 // unsigned ,    RW, default = 4  mvx threshold to check diff_mvx to decide if typex==0
//Bit  7: 2        reg_cn2ncr_cn2ncrr_loc_chk_mvdiff_th_1 // unsigned ,    RW, default = 4  mvy threshold to check diff_mvy to decide if typey==0
//Bit  1            reserved
//Bit  0           reg_cn2ncr_cn2ncrr_oor_enable // unsigned ,    RW, default = 1  enable to use out of range considerations in dir_type decision
#define FRC_VP_SAD_TH                              0x1e39
//Bit 31:24        reserved
//Bit 23:16        reg_vp_sad_chk_s_th       // unsigned ,    RW, default = 80  threshold to sad comparison to do sad check for basic sad rule
//Bit 15: 8        reg_vp_sad_chk_b_th       // unsigned ,    RW, default = 100  threshold to sad comparison to do sad check for replacement sad rule
//Bit  7: 0        reg_vp_sad_th_xrule       // unsigned ,    RW, default = 10  threshold to sad comparison to do sad check for replacement xross rule sad comparison
#define FRC_VP_RETIMER_ENABLE                      0x1e3a
//Bit 31:24        reserved
//Bit 23:16        reg_vp_gmv_similar_th     // unsigned ,    RW, default = 8  threshold to gmv and CP/CN for replacement gmv similar rule check.
//Bit 15: 9        reserved
//Bit  8           reg_vp_cxt_en             // unsigned ,    RW, default = 1  enable signal to enable retimer conditions, 0: disable 1: enable
//Bit  7           reg_vp_dont_care_gmv      // unsigned ,    RW, default = 1  enable signal to dont care gmv, 0: care gmv; 1: dont care gmv
//Bit  6           reg_vp_uncov_rule_en      // unsigned ,    RW, default = 1  enable signal to use uncov_final, 0: disable 1: enable
//Bit  5           reg_vp_cover_rule_en      // unsigned ,    RW, default = 1  enable signal to use cover_final, 0: disable 1: enable
//Bit  4           reg_vp_extend_rule_en      // unsigned ,    RW, default = 1  enable signal to use replace_cp/cn_extend, 0: disable 1: enable
//Bit  3           reg_vp_sad_rule_en        // unsigned ,    RW, default = 0  enable signal to use replace_cp/cn_sad, 0: disable 1: enable
//Bit  2           reg_vp_oor_rule_en        // unsigned ,    RW, default = 1  enable signal to use replace_cp/cn_oor, 0: disable 1: enable
//Bit  1           reg_vp_cross_rule_en      // unsigned ,    RW, default = 1  enable signal to use replace_cp/cn_cross, 0: disable 1: enable
//Bit  0           reg_retimer_enable        // unsigned ,    RW, default = 1  enable bit for vp part 1 retimer function, 0: disable 1: enable
#define FRC_VP_SHIFT_BLK                           0x1e3b
//Bit 31:22        reg_retimer_sft_mvdiff_th // unsigned ,    RW, default = 0  threshold to check mvdiff to decide if needed to be shifted
//Bit 21:14        reg_retimer_diff_gmv_invalid_th // unsigned ,    RW, default = 0  threshold to check shift mv if valid compare with gmv
//Bit 13:12        reg_retimer_sft_dir       // unsigned ,    RW, default = 0  blk shift direction  0:x, 1:y, 2:x+y
//Bit 11:10        reg_retimer_sft_x_range   // unsigned ,    RW, default = 0  blk shift (+-) rangein x direction
//Bit  9: 8        reg_retimer_sft_y_range   // unsigned ,    RW, default = 0  blk shift (+-)range in y direction
//Bit  7: 4        reg_retimer_sft_blk_ofst_xy_th // unsigned ,    RW, default = 2  threshold of ofst xy to check if need shift blk
//Bit  3           reg_retimer_sft_cn2ncr_en // unsigned ,    RW, default = 0  enable signal to shift CN2NCr 0: disable; 1: enable
//Bit  2           reg_retimer_sft_cp2pcr_en // unsigned ,    RW, default = 0  enable signal to shift CP2PCr 0: disable; 1: enable
//Bit  1           reg_retimer_sft_cn2ncrr_en // unsigned ,    RW, default = 0  enable signal to shift CN2NCrr 0: disable; 1: enable
//Bit  0           reg_retimer_sft_cp2pcrr_en // unsigned ,    RW, default = 0  enable signal to shift CP2PCrr 0: disable; 1: enable
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_vp1_regs.h
//
//
// Reading file:  ./frc_inc/frc_vp2_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_VP_DEHALO_TOP                          0x1e3c
//Bit 31:24        reg_uni_pre_adp5_mvdiff_th // unsigned ,    RW, default = 10  mvdiff threshold to decide using most reliable mv nearby for uni mv, default =10;
//Bit 23:16        reg_phs_pre_adp5_mvdiff_th // unsigned ,    RW, default = 10  mvdiff threshold to decide using most reliable mv nearby for phs mv, default =10;
//Bit 15: 7        reserved
//Bit  6           reg_use_phs_retimer       // unsigned ,    RW, default = 0  enable of use phs mv to retimer, 0: uni mv 1: phs mv
//Bit  5: 4        reg_uni_pre_med5_enable   // unsigned ,    RW, default = 2  enable of med5 on the dehalo-Part_II input CP/PC mv is filtered or not;0, no med5, 1: med5; 2: med5+hx3_majority; 3: adp5
//Bit  3: 2        reg_phs_pre_med5_enable   // unsigned ,    RW, default = 1  enable of med5 on the dehalo-Part_II input BVs;;0, no med5, 1: med5; 2: med5+hx3_majority; 3: adp5
//Bit  1: 0        reg_phr_pst_med5_enable   // unsigned ,    RW, default = 1  enable of med5 on the dehalo-Part_II gen_phs_r output BVs;0, no med5, 1: med5; 2: med5+hx3_majority;3: med5+oct
#define FRC_VP_EXTEND_ALPHA_CPR_PCR                0x1e3d
//Bit 31:24        reg_extend_alpha_s1_reg_s_th // unsigned ,    RW, default = 2  low bound of the extend alpha
//Bit 23:16        reg_extend_alpha_s1_reg_b_th // unsigned ,    RW, default = 10  up bound of the extend alpha
//Bit 15: 8        reg_extend_alpha_s1_reg_gain // unsigned ,    RW, default = 8  gain to max(mv_length- th0, 0)/16 before substract by b_th
//Bit  7: 1        reg_extend_alpha_s1_reg_mv_th0 // unsigned ,    RW, default = 2  extend alpha mv th0 as coring to mv_length
//Bit  0           reg_extend_alpha_s1_reg_enable // unsigned ,    RW, default = 1  enable of using dynamic extend_alpha or use 0: 0: extend_alpha=0; 1: extend_alpha= extend_alpha_cal_neg()
#define FRC_VP_EXTEND_ALPHA_CPRR_PCRR              0x1e3e
//Bit 31:24        reg_extend_alpha_s2_reg_s_th // unsigned ,    RW, default = 16  low bound of the extend alpha
//Bit 23:16        reg_extend_alpha_s2_reg_b_th // unsigned ,    RW, default = 64  up bound of the extend alpha
//Bit 15: 8        reg_extend_alpha_s2_reg_gain // unsigned ,    RW, default = 8  gain to max(mv_length- th0, 0)/16 before substract by b_th
//Bit  7: 1        reg_extend_alpha_s2_reg_mv_th0 // unsigned ,    RW, default = 2  extend alpha mv th0 as coring to mv_length
//Bit  0           reg_extend_alpha_s2_reg_enable // unsigned ,    RW, default = 1  enable of using dynamic extend_alpha or use 0: 0: extend_alpha=0; 1: extend_alpha= extend_alpha_cal_neg()
#define FRC_VP_EXTEND_ALPHA_2PCR_2CPR              0x1e3f
//Bit 31:24        reg_extend_alpha_s3_reg_s_th // unsigned ,    RW, default = 5  low bound of the extend alpha
//Bit 23:16        reg_extend_alpha_s3_reg_b_th // unsigned ,    RW, default = 30  up bound of the extend alpha
//Bit 15: 8        reg_extend_alpha_s3_reg_gain // unsigned ,    RW, default = 8  gain to max(mv_length- th0, 0)/16 before substract by b_th
//Bit  7: 1        reg_extend_alpha_s3_reg_mv_th0 // unsigned ,    RW, default = 2  extend alpha mv th0 as coring to mv_length
//Bit  0           reg_extend_alpha_s3_reg_enable // unsigned ,    RW, default = 1  enable of using dynamic extend_alpha or use 0: 0: extend_alpha=0; 1: extend_alpha= extend_alpha_cal_neg()
#define FRC_VP_EXTEND_ALPHA_4PBR_4CNR              0x1e40
//Bit 31:24        reg_extend_alpha_s4_reg_s_th // unsigned ,    RW, default = 16  low bound of the extend alpha
//Bit 23:16        reg_extend_alpha_s4_reg_b_th // unsigned ,    RW, default = 64  up bound of the extend alpha
//Bit 15: 8        reg_extend_alpha_s4_reg_gain // unsigned ,    RW, default = 8  gain to max(mv_length- th0, 0)/16 before substract by b_th
//Bit  7: 1        reg_extend_alpha_s4_reg_mv_th0 // unsigned ,    RW, default = 2  extend alpha mv th0 as coring to mv_length
//Bit  0           reg_extend_alpha_s4_reg_enable // unsigned ,    RW, default = 0  enable of using dynamic extend_alpha or use 0: 0: extend_alpha=0; 1: extend_alpha= extend_alpha_cal_pos()
#define FRC_VP_EXTEND_ALPHA_AVG4PBR_AVG4CNR        0x1e41
//Bit 31:24        reg_extend_alpha_s5_reg_s_th // unsigned ,    RW, default = 5  low bound of the extend alpha
//Bit 23:16        reg_extend_alpha_s5_reg_b_th // unsigned ,    RW, default = 30  up bound of the extend alpha
//Bit 15: 8        reg_extend_alpha_s5_reg_gain // unsigned ,    RW, default = 8  gain to max(mv_length- th0, 0)/16 before substract by b_th
//Bit  7: 1        reg_extend_alpha_s5_reg_mv_th0 // unsigned ,    RW, default = 2  extend alpha mv th0 as coring to mv_length
//Bit  0           reg_extend_alpha_s5_reg_enable // unsigned ,    RW, default = 0  enable of using dynamic extend_alpha or use 0: 0: extend_alpha=0; 1: extend_alpha= extend_alpha_cal_neg()
#define FRC_VP_EXTEND_LIMIT                        0x1e42
//Bit 31:24        reserved
//Bit 23:16        reg_extend_limit_s4       // unsigned ,    RW, default = 127  distant to 127 as extend_alpha_limit for s4;
//Bit 15: 8        reg_extend_limit_s5       // unsigned ,    RW, default = 80  distant to 127 as extend_alpha_limit for s5;
//Bit  7: 0        reg_extend_limit_s1_s2    // unsigned ,    RW, default = 80  distant to 127 as extend_alpha_limit for s1 and s2;
#define FRC_VP_DEHALO_DALPHA                       0x1e43
//Bit 31: 8        reserved
//Bit  7: 4        reg_dehalo_fixed_alpha    // unsigned ,    RW, default = 4  fixed alpha of mv0 and mv1 differ blend on diff_mvx and diff_mvy;
//Bit  3: 2        reserved
//Bit  1           reg_dehalo_cpr2pcr_pcr2cpr_sel_mode // unsigned ,    RW, default = 1  mode of get cpr2pcr ,pcr2cpr , 0: cpr2pcr from pc , pcr2cpr from cp, 1: dynamic selection from cp/pc sel
//Bit  0           reg_dehalo_use_dapha      // unsigned ,    RW, default = 1  use dynamic alpha based on PCr/PCrr or CPr/PCrr comparison or not; 1: use dynamic alpha, 0: use reg_dehalo_fixed_alpha
#define FRC_VP_DEHALO_DYN_TH                       0x1e44
//Bit 31:24        reg_phs_th_reg_dyn_diff_curv_0 // unsigned ,    RW, default = 3  if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
//Bit 23:16        reg_phs_th_reg_dyn_diff_curv_1 // unsigned ,    RW, default = 15  if (max_len less than th0) dyn_diff_th = curv[0]; elseif (max_len more than th1) dyn_diff_th = curv[1]; else interpolation between;
//Bit 15:12        reg_phs_th_reg_dyn_b_th_gain // unsigned ,    RW, default = 12  gain to (s_th/4) to get the b_th, default = 16;
//Bit 11: 8        reg_phs_th_reg_dyn_diff_thn // unsigned ,    RW, default = 5  threshold to dynamic diff calculation curve; th1 = th0 + (1*2^thn)
//Bit  7: 2        reg_phs_th_reg_dyn_diff_th0 // unsigned ,    RW, default = 6  threshold0 to dynamic diff calculation curve, th1 = th0 + (1*2^thn)
//Bit  1           reg_phs_th_reg_use_dyn_cover // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1 for cover;
//Bit  0           reg_phs_th_reg_use_dyn_uncov // unsigned ,    RW, default = 1  enable to use dyn_diff_mv0_mv1 for uncov;
#define FRC_VP_DEHALO_STATIC_TH                    0x1e45
//Bit 31:24        reg_phs_th_reg_cover_variance_th // unsigned ,    RW, default = 20  static programable threshold for cover_cpr_cprr of mv variance check;
//Bit 23:16        reg_phs_th_reg_cover_similarity_th // unsigned ,    RW, default = 20  static programable threshold for cover_mvchk of mv similarity check;
//Bit 15: 8        reg_phs_th_reg_uncov_variance_th // unsigned ,    RW, default = 20  static programable threshold for uncov_pcr_pcrr of mv variance check;
//Bit  7: 0        reg_phs_th_reg_uncov_similarity_th // unsigned ,    RW, default = 20  static programable threshold for uncov_mvchk of mv similarity check;
#define FRC_VP_DEHALO_DIR_TYPE                     0x1e46
//Bit 31:24        reg_phs_loc_chk_dir_th_0  // unsigned ,    RW, default = 12  mvx threshold to check diff_mvx to decide typex=cover or uncover
//Bit 23:16        reg_phs_loc_chk_dir_th_1  // unsigned ,    RW, default = 12  mvy threshold to check diff_mvy to decide typey=cover or uncover
//Bit 15: 8        reg_phs_loc_chk_mvdiff_th_0 // unsigned ,    RW, default = 4  mvx threshold to check diff_mvx to decide if typex==0
//Bit  7: 2        reg_phs_loc_chk_mvdiff_th_1 // unsigned ,    RW, default = 4  mvy threshold to check diff_mvy to decide if typey==0
//Bit  1           reg_phs_oor_enable        // unsigned ,    RW, default = 1  enable to use out of range considerations in dir_type decision
//Bit  0           reg_phs_dir_chk_enable    // unsigned ,    RW, default = 1  enable to use cover_dir_chk or uncov_dir_chk in cover/uncov_phs_basic decision
#define FRC_VP_DOUBLE_FG                           0x1e47
//Bit 31:16        reserved
//Bit 15: 8        reg_phs_limit_occl_fgbg_th // unsigned ,    RW, default = 200  threshold to small fgbg mvdiff
//Bit  7: 1        reserved
//Bit  0           reg_phs_limit_occl_track_en // unsigned ,    RW, default = 1  enable to check small fgbg mvdiff for double fg check
#define FRC_VP_MV_CHECK1                           0x1e48
//Bit 31: 1        reserved
//Bit  0           reg_phs_limit_occl_mvchk_en // unsigned ,    RW, default = 1  enable to check small fgbg mvdiff for double fg check
#define FRC_VP_MV_CHECK2                           0x1e49
//Bit 31:16        reserved
//Bit 15: 8        reg_phs_inact_thx         // unsigned ,    RW, default = 40  threshold to diff_BGFG_x for inactive check;
//Bit  7: 0        reg_phs_inact_thy         // unsigned ,    RW, default = 40  threshold to diff_BGFG_y for inactive check;
#define FRC_VP_EDGE_CHECK                          0x1e4a
//Bit 31:24        reg_phs_edge_chk_fg_mv_length_th // unsigned ,    RW, default = 12  threshold of foreground mv length for edge check
//Bit 23:12        reg_phs_edge_mvdiff_th    // unsigned ,    RW, default = 20  to mvdiff for edge check
//Bit 11: 8        reg_phs_edge_detail_th    // unsigned ,    RW, default = 6  threshold to detail for edge check on P or C plane
//Bit  7           reg_phs_edge_chk_uncov_en_3 // unsigned ,    RW, default = 1  enable signal for uncov enable signal for condition 4
//Bit  6           reg_phs_edge_chk_uncov_en_2 // unsigned ,    RW, default = 1  enable signal for uncov enable signal for condition 3
//Bit  5           reg_phs_edge_chk_uncov_en_1 // unsigned ,    RW, default = 1  enable signal for uncov enable signal for condition 2
//Bit  4           reg_phs_edge_chk_uncov_en_0 // unsigned ,    RW, default = 1  enable signal for uncov enable signal for condition 1
//Bit  3           reg_phs_edge_chk_cover_en_3 // unsigned ,    RW, default = 1  enable signal for cover enable signal for condition 4
//Bit  2           reg_phs_edge_chk_cover_en_2 // unsigned ,    RW, default = 1  enable signal for cover enable signal for condition 3
//Bit  1           reg_phs_edge_chk_cover_en_1 // unsigned ,    RW, default = 1  enable signal for cover enable signal for condition 2
//Bit  0           reg_phs_edge_chk_cover_en_0 // unsigned ,    RW, default = 1  enable signal for cover enable signal for condition 1
#define FRC_VP_BGMV_CHECK                          0x1e4b
//Bit 31:16        reserved
//Bit 15: 8        reg_bg_mv_length_th       // unsigned ,    RW, default = 18  threshold to background mv length for bgmv check
//Bit  7: 0        reg_fg_mv_length_th       // unsigned ,    RW, default = 12  threshold to foreground mv length for bgmv check
#define FRC_VP_DEHALO_RULE_EN                      0x1e4c
//Bit 31:11        reserved
//Bit 10           reg_dehalo_pht_replace    // unsigned ,    RW, default = 1  enable for replace mc_mv with pht, 0 disable, 1: enable
//Bit  9           reg_dehalo_oct_replace    // unsigned ,    RW, default = 1  enable for replace mc_oct with oct, 0 disable, 1: enable
//Bit  8           reg_dehalo_basic_en       // unsigned ,    RW, default = 1  enable for 2.1.1 of basic rule, 0 disable, 1: enable
//Bit  7           reg_dehalo_track_en       // unsigned ,    RW, default = 1  enable for 2.1.2 of double fg rule, 0 disable, 1: enable
//Bit  6           reg_dehalo_mvchk1_en      // unsigned ,    RW, default = 1  enable for 2.1.3 of mvchk1 rule, 0 disable, 1: enable
//Bit  5           reg_dehalo_mvchk2_en      // unsigned ,    RW, default = 1  enable for 2.1.4 of mvchk2 rule, 0 disable, 1: enable
//Bit  4           reg_dehalo_mvchk3_en      // unsigned ,    RW, default = 1  enable for 2.1.5 of mvchk3 rule, 0 disable, 1: enable
//Bit  3           reg_dehalo_edgechk_en     // unsigned ,    RW, default = 1  enable for 2.1.6 of edgechk rule, 0 disable, 1: enable
//Bit  2           reg_dehalo_cppc_chk_en    // unsigned ,    RW, default = 0  enable for 2.1.7 of full cppc rule, 0 disable, 1: enable
//Bit  1           reg_dehalo_bgmv_chk_en    // unsigned ,    RW, default = 0  enable for 2.1.8 of bgmv check rule, 0 disable , 1: enable
//Bit  0           reg_dehalo_enable         // unsigned ,    RW, default = 1  enable for dehalo function, 0 disable , 1: enable
#define FRC_VP_GEN_OCCL_MV                         0x1e4d
//Bit 31: 2        reserved
//Bit  1           reg_cover_use_close_mv    // unsigned ,    RW, default = 0  enable of using close mv for cover case
//Bit  0           reg_uncov_use_close_mv    // unsigned ,    RW, default = 0  enable of using close mv for uncover case
#define FRC_VP_GEN_TYPE_RPL_PHS_MV_1               0x1e4e
//Bit 31:24        reg_dehalo_phs_pre_b_th   // unsigned ,    RW, default = 20  threshold to diff_phs_avgCPr4PBr  for type_replace_phs_mv
//Bit 23:16        reg_dehalo_phs_cur_b_th   // unsigned ,    RW, default = 20  threshold to diff_phs_avgPCr4CNr  for type_replace_phs_mv
//Bit 15: 8        reg_dehalo_phs_mv_length_th // unsigned ,    RW, default = 8  threshold to phs mv length
//Bit  7: 2        reserved
//Bit  1           reg_dehalo_phs_mv_length_chk_en // unsigned ,    RW, default = 0  enable signal for check phs mv length
//Bit  0           reg_dehalo_rpl_phs_en     // unsigned ,    RW, default = 1  enable for replace phs mv
#define FRC_VP_GEN_TYPE_RPL_PHS_MV_2               0x1e4f
//Bit 31:24        reserved
//Bit 23:16        reg_dehalo_cover_ex_s_th  // unsigned ,    RW, default = 10  minmum threshold to diff_phs_avgCPr4PBr/4 for cover_ex_bg_th
//Bit 15: 8        reg_dehalo_uncov_ex_s_th  // unsigned ,    RW, default = 10  minmum threshold to diff_phs_avgPCr4CNr/4 for uncov_ex_bg_th
//Bit  7: 0        reg_dehalo_pre_nex_bg_s_th // unsigned ,    RW, default = 12  threshold to diff_avgCPr4PBr_avgPCr4CNr for type_replace_phs_mv
#define FRC_VP_DEHALO_FHRI                         0x1e50
//Bit 31:20        reserved
//Bit 19:16        reg_dehalo_fhri_hole_b_th // unsigned ,    RW, default = 4  threshold for cover_cnt/uncov_cnt more than b_th if current occl_type non decided
//Bit 15:12        reg_dehalo_fhri_hole_s_th // unsigned ,    RW, default = 3  threshold for cover_cnt/uncov_cnt  less than s_th if current occl_type non decided
//Bit 11: 8        reg_dehalo_fhri_invs_b_th // unsigned ,    RW, default = 2  offset for cover_cnt/uncov_cnt comparison if current occl_type inverse to nearby occl_types
//Bit  7: 4        reg_dehalo_fhri_invs_s_th // unsigned ,    RW, default = 3  threshold for cover_cnt/uncov_cnt if current occl_type inverse to nearby occl_types
//Bit  3            reserved
//Bit  2: 1        reg_dehalo_var2_lpf_sel   // unsigned ,    RW, default = 1  filter mode to var2_level_temp, 0: use filter0(lit), 1: use filter1(heavy); 2: max; 3:no filter
//Bit  0           reg_dehalo_fhri_en        // unsigned ,    RW, default = 1  enable bit for fhri function
#define FRC_VP_DEHALO_PHS_R                        0x1e51
//Bit 31:11        reserved
//Bit 10           reg_phs_r_rplc_gmv_enable // unsigned ,    RW, default = 1  if use gmv double comfirm if phs_r replace_type is valid, 0: no double comfirm; 1: do double comfirm
//Bit  9           reg_phs_r_gmv_invalid     // unsigned ,    RW, default = 0  check if the gmv is invalid, 0: gmv is valid; 1: gmv is invalid
//Bit  8           reg_phs_r_gmv_enable      // unsigned ,    RW, default = 1  if use gmv double comfirm if phs_r is valid, 0: no double comfirm; 1: do double comfirm
//Bit  7: 4        reg_phs_r_gmv_th          // unsigned ,    RW, default = 5  the threshold between gmv and cover_phs_mv(uncov_phs_mv)
//Bit  3: 2        reg_type_rplc_cover_mode  // unsigned ,    RW, default = 1  mode to replace phs, 0: replace with cover_mv(bg_mv); 1: replace with uncov_mv(fg_mv); 2: dynamic choose base on mvdiff
//Bit  1: 0        reg_type_rplc_uncov_mode  // unsigned ,    RW, default = 1  mode to replace phs, 0: replace with uncov_mv(bg_mv); 1: replace with cover_mv(fg_mv); 2: dynamic choose base on mvdiff
#define FRC_VP_DEHALO_MV_VAR                       0x1e52
//Bit 31:30        reg_dehalo_var_hrng       // unsigned ,    RW, default = 0  horizontal range for max mode: 0:5, 1:7, other:9
//Bit 29:24        reg_dehalo_var_cppc_th    // unsigned ,    RW, default = 4  coring of var_cppc_clip; var_cppc_clip less than th, set to 0;
//Bit 23:22        reg_dehalo_var_vrng       // unsigned ,    RW, default = 0  vertical range for max mode: 0:1, 1:3, other:3.
//Bit 21:16        reg_dehalo_var_phs_th     // unsigned ,    RW, default = 4  coring of var_phs_clip; var_phs_clip less than th, set to 0;
//Bit 15:14        reserved
//Bit 13:12        reg_dehalo_var_lpf_sel    // unsigned ,    RW, default = 2  filter mode to var_level_temp, 0: use filter0(lit), 1: use filter1(heavy); 2: max; 3:no filter
//Bit 11: 8        reg_dehalo_var_cppc_slope // unsigned ,    RW, default = 2  scale of var_cppc_clip after coring, normalized to 8 as 1.0
//Bit  7: 4        reg_dehalo_var_phs_slope  // unsigned ,    RW, default = 2  scale of var_phs_clip after coring, normalized to 8 as 1.0
//Bit  3           reg_dehalo_var_phs_en     // unsigned ,    RW, default = 1  enable of using var_phs_out as var_phs_sum,
//Bit  2           reg_dehalo_var_cppc_en    // unsigned ,    RW, default = 1  enable of using var_cppc_out as var_cppc_sum;
//Bit  1           reg_dehalo_var_unrest_en  // unsigned ,    RW, default = 1  enable of using var_level_sum as output or force to 8,
//Bit  0           reg_vp_variance_oob_level_en // unsigned ,    RW, default = 0  enable of var_level out of bb, 0: 8, 1:0
#define FRC_VP_DEHALO_OCCL_LPF                     0x1e53
//Bit 31:16        reserved
//Bit 15: 8        reg_pht_mvdiff_th         // unsigned ,    RW, default = 0  pht mvdiff th
//Bit  7: 2        reserved
//Bit  1           reg_pht_mvdiff_en         // unsigned ,    RW, default = 0  pht mvdiff with neighbor mv for occl lpf
//Bit  0           reg_dehalo_occl_lpf_en    // unsigned ,    RW, default = 0  enable of occl lpf
#define FRC_VP_DEHALO_OCT2_1                       0x1e54
//Bit 31: 0        reserved
#define FRC_VP_DEHALO_OCT2_2                       0x1e55
//Bit 31: 0        reserved
#define FRC_VP_DEHALO_TURN_OFF                     0x1e56
//Bit 31:25        reg_vp_fg_mvdiff_th       // unsigned ,    RW, default = 16  threshold of fg mvdiff to decide if mvs belong to the same group (similar mvs)
//Bit 24           reg_vp_fg_mvdiff_en       // unsigned ,    RW, default = 1  enable to check mvdiff of fg phs mv and uni mv
//Bit 23:22        reg_vp_rp_sobj_win_x_half // unsigned ,    RW, default = 1  x range of rp_sobj check
//Bit 21:20        reg_vp_rp_sobj_win_y_half // unsigned ,    RW, default = 1  y range of rp_sobj check
//Bit 19:16        reg_vp_sobj_rpd0_cnt_th   // unsigned ,    RW, default = 2  threshold of small obj rpd0 cnt
//Bit 15:12        reg_vp_sobj_ball_cnt_th   // unsigned ,    RW, default = 2  threshold of small obj ball cnt
//Bit 11: 8        reg_vp_rp_cnt_th          // unsigned ,    RW, default = 2  threshold of repeat pattern cnt
//Bit  7: 6        reg_vp_sobj_mode          // unsigned ,    RW, default = 0  mode of small obj, 0: ball, 1: rpd0, else : ball or rpd0
//Bit  5           reg_vp_cp_sobj_rpd0_and   // unsigned ,    RW, default = 1  1 :sobj_rpd0 flag of p plane and sobj_rpd0 flag of c plane  ; 0 :sobj_rpd0 flag of p plane or sobj_rpd0 flag of c plane
//Bit  4           reg_vp_cp_sobj_ball_and   // unsigned ,    RW, default = 1  1 :sobj_ball flag of p plane and sobj ball flag of c plane  ; 0 :sobj_ball flag of p plane or sobj_ball flag of c plane
//Bit  3           reg_vp_cp_rp_and          // unsigned ,    RW, default = 1  1 :rp flag of p plane and rp_flag of c plane  ; 0 :rp flag of p plane or rp_flag of c plane
//Bit  2           reg_vp_rp_disable         // unsigned ,    RW, default = 0  enable of turn off vp func when current blk is repeat pattern, 0 disable , 1: enable
//Bit  1           reg_vp_sobj_disable       // unsigned ,    RW, default = 0  enable of turn off vp func when current blk is small obj, 0 disable , 1: enable
//Bit  0           reg_vp_logo_disable       // unsigned ,    RW, default = 0  enable of turn off vp func when current blk is logo, 0 disable , 1: enable
#define FRC_VP_DEHALO_TURN_OFF_2                   0x1e57
//Bit 31:10        reserved
//Bit  9: 8        reg_vp_ip_blklogo_mode    // unsigned ,    RW, default = 0  mode of selection of iplogo, 0: no sync buffer 1: sync buffer pre, 2: sync buffer cur, 3 sync buffer (pre and cur)
//Bit  7: 1        reg_vp_bg_mvdiff_th       // unsigned ,    RW, default = 16  threshold of bg mvdiff to decide if mvs belong to the same group (similar mvs)
//Bit  0           reg_vp_bg_mvdiff_en       // unsigned ,    RW, default = 0  enable to check mvdiff of fg phs mv and uni mv
#define FRC_VP_REGION_WINDOW_1                     0x1e58
//Bit 31:20        reg_vp_stat_region_hend_1 // unsigned ,    RW, default = 118  vp statistic region horizontal end1
//Bit 19: 8        reg_vp_stat_region_hend_0 // unsigned ,    RW, default = 59  vp statistic region horizontal end0
//Bit  7: 0        reg_vp_stat_region_hstart // unsigned ,    RW, default = 0  vp statistic region horizontal start
#define FRC_VP_REGION_WINDOW_2                     0x1e59
//Bit 31:24        reg_vp_stat_region_vstart // unsigned ,    RW, default = 0  vp statistic region vertical start
//Bit 23:12        reg_vp_stat_region_hend_3 // unsigned ,    RW, default = 239  vp statistic region horizontal end3
//Bit 11: 0        reg_vp_stat_region_hend_2 // unsigned ,    RW, default = 177  vp statistic region horizontal end2
#define FRC_VP_REGION_WINDOW_3                     0x1e5a
//Bit 31:20        reg_vp_stat_region_vend_2 // unsigned ,    RW, default = 134  vp statistic region vertical end2
//Bit 19: 8        reg_vp_stat_region_vend_1 // unsigned ,    RW, default = 88  vp statistic region vertical end1
//Bit  7: 0        reg_vp_stat_region_vend_0 // unsigned ,    RW, default = 44  vp statistic region vertical end0
#define FRC_VP_REGION_WINDOW_4                     0x1e5b
//Bit 31:13        reserved
//Bit 12           reg_dehalo_region_en_11   // unsigned ,    RW, default = 1  enable signal for region 11 dehalo
//Bit 11           reg_dehalo_region_en_10   // unsigned ,    RW, default = 1  enable signal for region 10 dehalo
//Bit 10           reg_dehalo_region_en_9    // unsigned ,    RW, default = 1  enable signal for region 9 dehalo
//Bit  9           reg_dehalo_region_en_8    // unsigned ,    RW, default = 1  enable signal for region 8 dehalo
//Bit  8           reg_dehalo_region_en_7    // unsigned ,    RW, default = 1  enable signal for region 7 dehalo
//Bit  7           reg_dehalo_region_en_6    // unsigned ,    RW, default = 1  enable signal for region 6 dehalo
//Bit  6           reg_dehalo_region_en_5    // unsigned ,    RW, default = 1  enable signal for region 5 dehalo
//Bit  5           reg_dehalo_region_en_4    // unsigned ,    RW, default = 1  enable signal for region 4 dehalo
//Bit  4           reg_dehalo_region_en_3    // unsigned ,    RW, default = 1  enable signal for region 3 dehalo
//Bit  3           reg_dehalo_region_en_2    // unsigned ,    RW, default = 1  enable signal for region 2 dehalo
//Bit  2           reg_dehalo_region_en_1    // unsigned ,    RW, default = 1  enable signal for region 1 dehalo
//Bit  1           reg_dehalo_region_en_0    // unsigned ,    RW, default = 1  enable signal for region 0 dehalo
//Bit  0            reserved
#define FRC_VP_RO_GLOBAL_OCT_COVER_CNT             0x1e5c
//Bit 31: 0        ro_vp_global_oct_cover_cnt // unsigned ,    RO, default = 0  all oct cover cnt
#define FRC_VP_RO_GLOBAL_OCT_UNCOV_CNT             0x1e5d
//Bit 31: 0        ro_vp_global_oct_uncov_cnt // unsigned ,    RO, default = 0  all oct uncov cnt
#define FRC_VP_RO_REGION_OCT_COVER_CNT_0           0x1e5e
//Bit 31: 0        ro_vp_region_oct_cover_cnt_0 // unsigned ,    RO, default = 0  12 region oct cover cnt
#define FRC_VP_RO_REGION_OCT_UNCOV_CNT_0           0x1e5f
//Bit 31: 0        ro_vp_region_oct_uncov_cnt_0 // unsigned ,    RO, default = 0  12 region oct uncov cnt
#define FRC_VP_RO_REGION_OCT_COVER_CNT_1           0x1e60
//Bit 31: 0        ro_vp_region_oct_cover_cnt_1 // unsigned ,    RO, default = 0  12 region oct cover cnt
#define FRC_VP_RO_REGION_OCT_UNCOV_CNT_1           0x1e61
//Bit 31: 0        ro_vp_region_oct_uncov_cnt_1 // unsigned ,    RO, default = 0  12 region oct uncov cnt
#define FRC_VP_RO_REGION_OCT_COVER_CNT_2           0x1e62
//Bit 31: 0        ro_vp_region_oct_cover_cnt_2 // unsigned ,    RO, default = 0  12 region oct cover cnt
#define FRC_VP_RO_REGION_OCT_UNCOV_CNT_2           0x1e63
//Bit 31: 0        ro_vp_region_oct_uncov_cnt_2 // unsigned ,    RO, default = 0  12 region oct uncov cnt
#define FRC_VP_RO_REGION_OCT_COVER_CNT_3           0x1e64
//Bit 31: 0        ro_vp_region_oct_cover_cnt_3 // unsigned ,    RO, default = 0  12 region oct cover cnt
#define FRC_VP_RO_REGION_OCT_UNCOV_CNT_3           0x1e65
//Bit 31: 0        ro_vp_region_oct_uncov_cnt_3 // unsigned ,    RO, default = 0  12 region oct uncov cnt
#define FRC_VP_RO_REGION_OCT_COVER_CNT_4           0x1e66
//Bit 31: 0        ro_vp_region_oct_cover_cnt_4 // unsigned ,    RO, default = 0  12 region oct cover cnt
#define FRC_VP_RO_REGION_OCT_UNCOV_CNT_4           0x1e67
//Bit 31: 0        ro_vp_region_oct_uncov_cnt_4 // unsigned ,    RO, default = 0  12 region oct uncov cnt
#define FRC_VP_RO_REGION_OCT_COVER_CNT_5           0x1e68
//Bit 31: 0        ro_vp_region_oct_cover_cnt_5 // unsigned ,    RO, default = 0  12 region oct cover cnt
#define FRC_VP_RO_REGION_OCT_UNCOV_CNT_5           0x1e69
//Bit 31: 0        ro_vp_region_oct_uncov_cnt_5 // unsigned ,    RO, default = 0  12 region oct uncov cnt
#define FRC_VP_RO_REGION_OCT_COVER_CNT_6           0x1e6a
//Bit 31: 0        ro_vp_region_oct_cover_cnt_6 // unsigned ,    RO, default = 0  12 region oct cover cnt
#define FRC_VP_RO_REGION_OCT_UNCOV_CNT_6           0x1e6b
//Bit 31: 0        ro_vp_region_oct_uncov_cnt_6 // unsigned ,    RO, default = 0  12 region oct uncov cnt
#define FRC_VP_RO_REGION_OCT_COVER_CNT_7           0x1e6c
//Bit 31: 0        ro_vp_region_oct_cover_cnt_7 // unsigned ,    RO, default = 0  12 region oct cover cnt
#define FRC_VP_RO_REGION_OCT_UNCOV_CNT_7           0x1e6d
//Bit 31: 0        ro_vp_region_oct_uncov_cnt_7 // unsigned ,    RO, default = 0  12 region oct uncov cnt
#define FRC_VP_RO_REGION_OCT_COVER_CNT_8           0x1e6e
//Bit 31: 0        ro_vp_region_oct_cover_cnt_8 // unsigned ,    RO, default = 0  12 region oct cover cnt
#define FRC_VP_RO_REGION_OCT_UNCOV_CNT_8           0x1e6f
//Bit 31: 0        ro_vp_region_oct_uncov_cnt_8 // unsigned ,    RO, default = 0  12 region oct uncov cnt
#define FRC_VP_RO_REGION_OCT_COVER_CNT_9           0x1e70
//Bit 31: 0        ro_vp_region_oct_cover_cnt_9 // unsigned ,    RO, default = 0  12 region oct cover cnt
#define FRC_VP_RO_REGION_OCT_UNCOV_CNT_9           0x1e71
//Bit 31: 0        ro_vp_region_oct_uncov_cnt_9 // unsigned ,    RO, default = 0  12 region oct uncov cnt
#define FRC_VP_RO_REGION_OCT_COVER_CNT_10          0x1e72
//Bit 31: 0        ro_vp_region_oct_cover_cnt_10 // unsigned ,    RO, default = 0  12 region oct cover cnt
#define FRC_VP_RO_REGION_OCT_UNCOV_CNT_10          0x1e73
//Bit 31: 0        ro_vp_region_oct_uncov_cnt_10 // unsigned ,    RO, default = 0  12 region oct uncov cnt
#define FRC_VP_RO_REGION_OCT_COVER_CNT_11          0x1e74
//Bit 31: 0        ro_vp_region_oct_cover_cnt_11 // unsigned ,    RO, default = 0  12 region oct cover cnt
#define FRC_VP_RO_REGION_OCT_UNCOV_CNT_11          0x1e75
//Bit 31: 0        ro_vp_region_oct_uncov_cnt_11 // unsigned ,    RO, default = 0  12 region oct uncov cnt
#define FRC_VP_RO_GLOBAL_OCT2_COVER_CNT            0x1e76
//Bit 31: 0        reserved
#define FRC_VP_RO_GLOBAL_OCT2_UNCOV_CNT            0x1e77
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_COVER_CNT_0          0x1e78
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_UNCOV_CNT_0          0x1e79
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_COVER_CNT_1          0x1e7a
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_UNCOV_CNT_1          0x1e7b
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_COVER_CNT_2          0x1e7c
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_UNCOV_CNT_2          0x1e7d
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_COVER_CNT_3          0x1e7e
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_UNCOV_CNT_3          0x1e7f
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_COVER_CNT_4          0x1e80
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_UNCOV_CNT_4          0x1e81
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_COVER_CNT_5          0x1e82
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_UNCOV_CNT_5          0x1e83
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_COVER_CNT_6          0x1e84
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_UNCOV_CNT_6          0x1e85
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_COVER_CNT_7          0x1e86
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_UNCOV_CNT_7          0x1e87
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_COVER_CNT_8          0x1e88
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_UNCOV_CNT_8          0x1e89
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_COVER_CNT_9          0x1e8a
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_UNCOV_CNT_9          0x1e8b
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_COVER_CNT_10         0x1e8c
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_UNCOV_CNT_10         0x1e8d
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_COVER_CNT_11         0x1e8e
//Bit 31: 0        reserved
#define FRC_VP_RO_REGION_OCT2_UNCOV_CNT_11         0x1e8f
//Bit 31: 0        reserved
#define FRC_VP_RO_GLOBAL_OCT_GMVX_SUM              0x1e90
//Bit 31: 0        ro_vp_oct_gmvx_sum        // signed ,    RO, default = 0  vp statistic oct gmvx_sum;
#define FRC_VP_RO_GLOBAL_OCT_GMVY_SUM              0x1e91
//Bit 31: 0        ro_vp_oct_gmvy_sum        // signed ,    RO, default = 0  vp statistic oct gmvy_sum;
#define FRC_VP_RO_GLOBAL_OCT_GMV_DIFF              0x1e92
//Bit 31: 0        ro_vp_oct_gmv_diff        // unsigned ,    RO, default = 0  vp statistic oct gmv_diff;
#define FRC_VP_WEAK_DEHALO_S1                      0x1e93
//Bit 31: 0        reserved
#define FRC_VP_WEAK_DEHALO_S2                      0x1e94
//Bit 31: 0        reserved
#define FRC_VP_WEAK_DEHALO_S3                      0x1e95
//Bit 31: 0        reserved
#define FRC_VP_LOGO_MV_CHECK_1                     0x1e96
//Bit 31:24        reserved
//Bit 23:16        reserved
//Bit 15: 8        reserved
//Bit  7: 1        reserved
//Bit  0            reserved
#define FRC_VP_LOGO_MV_CHECK_2                     0x1e97
//Bit 31:24        reserved
//Bit 23:16        reserved
//Bit 15: 8        reserved
//Bit  7: 0        reserved
#define FRC_VP_OFRM_IDX                            0x1e98
//Bit 31: 0        reg_ofrm_idx              // unsigned ,    RW, default = 0
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_vp2_regs.h
//
//
// Reading file:  ./frc_inc/frc_vp_top_regs_hw.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_VP_TOP_PROBE                           0x1ef0
//Bit 31            reg_vp_pt_sel               // unsigned ,    RW, default = 1    choose vp probe position 1:use mc cursor point 0:use vp_point register
//Bit 30            reg_vp_probe_en             // unsigned ,    RW, default = 1    1:open vp probe   0:close vp probe
//Bit 29            reserved
//Bit 28:16         reg_vp_probe_pt_y           // unsigned ,    RW, default = 10   vp probe position register value y
//Bit 15:13         reserved
//Bit 12:0          reg_vp_probe_pt_x           // unsigned ,    RW, default = 10   vp probe position register value x
#define FRC_VP_RO_IN_PROBE_DATA                    0x1ef1
//Bit 31:28         reserved
//Bit 27:16         ro_vp_in_probe_daty         // unsigned ,   RW, default = 0     ro_vp_in_probe_dat_y: probe data of vp input mvx
//Bit 15:13         reserved
//Bit 12:0          ro_vp_in_probe_datx         // unsigned ,   RW, default = 0     ro_vp_in_probe_dat_x: probe data of vp input mvy
#define FRC_VP_RO_OUT_PROBE_DATA                   0x1ef2
//Bit 31:28         reserved
//Bit 27:16         ro_vp_out_probe_daty         // unsigned ,   RW, default = 0    ro_vp_out_probe_daty: probe data of vp output mvx
//Bit 15:13         reserved
//Bit 12:0          ro_vp_out_probe_datx         // unsigned ,   RW, default = 0    ro_vp_out_probe_datx: probe data of vp output mvy
#define FRC_VP_TOP_HW_CTRL                         0x1ef3
//Bit 31:3          reserved
//Bit 2:0           reg_vp_probe_imv_mux       // unsigned ,    RW, default = 0     ro_vp_in_probe_dat choose 0:PC_PHS 1:CN 2:CP 3:NC 4:PC 5:PB
#define FRC_VP_TOP_SYNC_CTRL                       0x1ef6
//Bit 31:25         reserved
//Bit 24            reg_vp2_top_latch_en       // unsigned ,    RW, default = 1     1:latch top_reg 0:don't latch top_reg
//Bit 23:21         reserved
//Bit 20            reg_vp1_top_latch_en       // unsigned ,    RW, default = 1     1:latch top_reg 0:don't latch top_reg
//Bit 19:17         reserved
//Bit 16            reg_top_latch_en           // unsigned ,    RW, default = 1     1:latch top_reg 0:don't latch top_reg
//Bit 15:13         reserved
//Bit 12            reg_ro_latch_sel           // unsigned ,    RW, default = 0     1:frm_rst latch ro 0:frm_end latch ro
//Bit 11:9          reserved
//Bit 8             reg_ro_fram                // unsigned ,    RW, default = 1     vp ro reg sel   ,1:ro latch  1:don't latch
//Bit 7 :4          reg_vp2_sync_sel           // unsigned ,    RW, default = 7     vp1_reg_sync_sel,4'hf:sync   0:don't sync
//Bit 3 :0          reg_vp1_sync_sel           // unsigned ,    RW, default = 7     vp1_reg_sync_sel,4'hf:sync   0:don't sync
#define FRC_VP_TOP_STAT                            0x1ef7
//Bit 31:2          reserved
//Bit 1             ro_vp2_undone_flag         // unsigned ,    RO, default = 0     ro_vp2_undone_flag 1:vp2 undone flag
//Bit 0             ro_vp1_undone_flag         // unsigned ,    RO, default = 0     ro_vp1_undone_flag 1:vp1 undone flag
#define FRC_VP_TOP_CLR_STAT                        0x1ef8
//Bit 31:2          reserved
//Bit 1             pls_clr_vp2_flag           // unsigned ,    WO, default = 0     clr_flag of ro_vp2_undone_flag  1: clr ro_vp2_undone_flag
//Bit 0             pls_clr_vp1_flag           // unsigned ,    WO, default = 0     clr_flag of ro_vp1_undone_flag  1: clr ro_vp1_undone_flag
#define FRC_VP_TOP_GCLK_CTRL                       0x1efa
//Bit 31:2          reserved
//Bit 1 :0          reg_top_gclk_ctrl           // unsigned ,   RW, default = 0    reg_top_gclk_ctrl  gating clk_ctrl of vp top
#define FRC_VP1_GCLK_CTRL                          0x1efb
//Bit 31:10         reserved
//Bit 9 :0          reg_vp1_gclk_ctrl           // unsigned ,   RW, default = 0    reg_vp1_gclk_ctrl  gating clk_ctrl of vp1
#define FRC_VP2_GCLK_CTRL                          0x1efc
//Bit 31:0          reg_vp2_gclk_ctrl           // unsigned ,   RW, default = 0    reg_vp2_gclk_ctrl  gating clk_ctrl of vp2
#define FRC_VP_MEDBG_OPT                           0x1efd
//Bit 0             reg_medbg_opt_en            // unsigned ,   RW, default = 1
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_vp_top_regs_hw.h
//
// -----------------------------------------------
// REG_BASE:  FRC_ME_LOGO_APB_BASE = 0x1f
// -----------------------------------------------
//
// Reading file:  ./frc_inc/me_logo_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_MELOGO_EN                              0x1f00
//Bit 31: 8        reserved
//Bit  7           reg_melogo_en             // unsigned ,    RW, default = 1  0: melogo disable;   1: melogo enable
//Bit  6           reg_melogo_smv_clr_en     // unsigned ,    RW, default = 1  0: smv clr disable;  1: smv clr enable
//Bit  5           reg_melogo_pan_clr_en     // unsigned ,    RW, default = 1  0: panning clr disable;  1: panning clr enable
//Bit  4           reg_melogo_disap_clr_en   // unsigned ,    RW, default = 1  0: disap clr disable;  1: disap clr enable
//Bit  3           reg_melogo_region_master_en // unsigned ,    RW, default = 0  0: region12 logo clr disable; 1: region12 logo clr enable;
//Bit  2           reg_melogo_disap_chk_mvdiff_en // unsigned ,    RW, default = 1  0: disap check mv diff disable;  1: disap check mv diff enable
//Bit  1           reg_melogo_disap_chk_zmv_en // unsigned ,    RW, default = 0  0: disap check zmv cnt disable;  1: disap check zmv cnt enable
//Bit  0           reg_melogo_disap_chk_phs_en // unsigned ,    RW, default = 1  0: disap check phase mv sad disable;  1: disap check phase mv sad enable
#define FRC_MELOGO_BB_CORING                       0x1f01
//Bit 31:24        reg_melogo_blackbar_top_coring // unsigned ,    RW, default = 1  melogo_bb_coring
//Bit 23:16        reg_melogo_blackbar_bot_coring // unsigned ,    RW, default = 1  melogo_bb_coring
//Bit 15: 8        reg_melogo_blackbar_lft_coring // unsigned ,    RW, default = 1  melogo_bb_coring
//Bit  7: 0        reg_melogo_blackbar_rit_coring // unsigned ,    RW, default = 1  melogo_bb_coring
#define FRC_MELOGO_BB_BLK_ST                       0x1f02
//Bit 31:26        reserved
//Bit 25:16        reg_melogo_bb_blk_xyxy_0  // unsigned ,    RW, default = 0  melogo part black bar block index x_st updated by firmware
//Bit 15:10        reserved
//Bit  9: 0        reg_melogo_bb_blk_xyxy_1  // unsigned ,    RW, default = 0  melogo part black bar block index y_st updated by firmware
#define FRC_MELOGO_BB_BLK_ED                       0x1f03
//Bit 31:26        reserved
//Bit 25:16        reg_melogo_bb_blk_xyxy_2  // unsigned ,    RW, default = 239  melogo part black bar index x_ed updated by firmware, (xsize/2^(reg_me_dsx_scale))/prm_me->reg_me_blksize_x - 1;
//Bit 15:10        reserved
//Bit  9: 0        reg_melogo_bb_blk_xyxy_3  // unsigned ,    RW, default = 134  melogo part black bar index y_ed updated by firmware, (ysize/2^(reg_me_dsy_scale))/prm_me->reg_me_blksize_y - 1;
#define FRC_MELOGO_SMV_XY_THD                      0x1f04
//Bit 31:27        reserved
//Bit 26:16        reg_melogo_smv_x_thd      // unsigned ,    RW, default = 60  small mv_x threshold in smv clr module
//Bit 15:11        reserved
//Bit 10: 0        reg_melogo_smv_y_thd      // unsigned ,    RW, default = 60  small mv_y threshold in smv clr module
#define FRC_MELOGO_SMV_VPAN_XY_THD                 0x1f05
//Bit 31:27        reserved
//Bit 26:16        reg_melogo_smv_vpan_x_thd // unsigned ,    RW, default = 30  small mv_x threshold in smv clr module
//Bit 15:11        reserved
//Bit 10: 0        reg_melogo_smv_vpan_y_thd // unsigned ,    RW, default = 85  small mv_y threshold in smv clr module
#define FRC_MELOGO_SMV_HPAN_XY_THD                 0x1f06
//Bit 31:30        reserved
//Bit 29           reg_melogo_smv_pc_enable  // unsigned ,    RW, default = 0  when 1, enable checking on MV_pc for smv
//Bit 28           reg_melogo_smv_cp_enable  // unsigned ,    RW, default = 0  when 1, enable checking on MV_cp for smv
//Bit 27           reg_melogo_smv_mv_sel     // unsigned ,    RW, default = 0  when 0, select cp/pc; when 1, select nc/cn;
//Bit 26:16        reg_melogo_smv_hpan_x_thd // unsigned ,    RW, default = 60  small mv_x threshold in smv clr module
//Bit 15:11        reserved
//Bit 10: 0        reg_melogo_smv_hpan_y_thd // unsigned ,    RW, default = 30  small mv_y threshold in smv clr module
#define FRC_MELOGO_BMV_XY_THD                      0x1f07
//Bit 31:24        reg_melogo_smv_sad_thd    // unsigned ,    RW, default = 255  sad_4x4 threshold for smv_clr
//Bit 23:12        reg_melogo_smv_xy_thd     // unsigned ,    RW, default = 0  small mv(mvx+mvy) threshold in smv clr module
//Bit 11: 0        reg_melogo_bmv_xy_thd     // unsigned ,    RW, default = 160  big   mv(mvx+mvy) threshold in smv clr module
#define FRC_MELOGO_SMV_CNT_THD                     0x1f08
//Bit 31:24        reserved
//Bit 23:16        reg_melogo_smv_cnt_thd    // unsigned ,    RW, default = 105  small mv cnt threshold in smv clr module
//Bit 15: 8        reserved
//Bit  7: 0        reg_melogo_bmv_cnt_thd    // unsigned ,    RW, default = 0  big mv cnt threshold in smv clr module
#define FRC_MELOGO_PAN_MV_PARAM                    0x1f09
//Bit 31:27        reserved
//Bit 26:16        reg_melogo_pan_clr_bmv_thd // unsigned ,    RW, default = 20  big mv threshold in panning clr module
//Bit 15:11        reserved
//Bit 10: 0        reg_melogo_pan_clr_mv_diff // unsigned ,    RW, default = 24  mv diff (x_dif+y_dif) threshold in panning clr module
#define FRC_MELOGO_PAN_MV_CNT_THD                  0x1f0a
//Bit 31:24        reserved
//Bit 23:16        reg_melogo_pan_clr_mv_cnt_thd // unsigned ,    RW, default = 70  panning mv cnt threshold in panning clr module
//Bit 15: 8        reserved
//Bit  7: 0        reg_melogo_pan_clr_zmv_cnt_thd // unsigned ,    RW, default = 4  zmv cnt threshold in panning clr module
#define FRC_MELOGO_PAN_SAD_THD                     0x1f0b
//Bit 31:12        reserved
//Bit 11: 8        reserved
//Bit  7: 0        reg_melogo_pan_clr_sad_thd // unsigned ,    RW, default = 48  sad_4x4 threshold in panning clr module
#define FRC_MELOGO_DISAP_MV_THD                    0x1f0c
//Bit 31:27        reserved
//Bit 26:16        reg_melogo_disap_bmv_thd  // unsigned ,    RW, default = 12  big mv threshold in disap clr module
//Bit 15:12        reserved
//Bit 11: 0        reg_melogo_disap_mvdiff_th // unsigned ,    RW, default = 30  nc_cn mv diff threshold in disap clr module
#define FRC_MELOGO_DISAP_SAD_THD                   0x1f0d
//Bit 31:12        reserved
//Bit 11: 8        reserved
//Bit  7: 0        reg_melogo_disap_sad_th   // unsigned ,    RW, default = 30  sad_4x4 threshold in disap clr module
#define FRC_MELOGO_DISAP_PARAM                     0x1f0e
//Bit 31:16        reserved
//Bit 15: 8        reg_melogo_disap_zmv_cnt_th // unsigned ,    RW, default = 5  zero mv cnt threshold in disap clr module
//Bit  7: 4        reg_melogo_disap_blklogo_cnt_weight // unsigned ,    RW, default = 8  ip blklogo cnt weight in disap clr module
//Bit  3: 2        reserved
//Bit  1: 0        reg_melogo_disap_mode     // unsigned ,    RW, default = 3  bmv_flag and sad_flag fusion way in disap clr module
#define FRC_MELOGO_REGION_CLR_EN                   0x1f0f
//Bit 31:12        reserved
//Bit 11           reg_melogo_region_en_11   // unsigned ,    RW, default = 1  enable signal for region 11 logo clr
//Bit 10           reg_melogo_region_en_10   // unsigned ,    RW, default = 1  enable signal for region 10 logo clr
//Bit  9           reg_melogo_region_en_9    // unsigned ,    RW, default = 1  enable signal for region 9  logo clr
//Bit  8           reg_melogo_region_en_8    // unsigned ,    RW, default = 1  enable signal for region 8  logo clr
//Bit  7           reg_melogo_region_en_7    // unsigned ,    RW, default = 1  enable signal for region 7  logo clr
//Bit  6           reg_melogo_region_en_6    // unsigned ,    RW, default = 1  enable signal for region 6  logo clr
//Bit  5           reg_melogo_region_en_5    // unsigned ,    RW, default = 1  enable signal for region 5  logo clr
//Bit  4           reg_melogo_region_en_4    // unsigned ,    RW, default = 1  enable signal for region 4  logo clr
//Bit  3           reg_melogo_region_en_3    // unsigned ,    RW, default = 1  enable signal for region 3  logo clr
//Bit  2           reg_melogo_region_en_2    // unsigned ,    RW, default = 1  enable signal for region 2  logo clr
//Bit  1           reg_melogo_region_en_1    // unsigned ,    RW, default = 1  enable signal for region 1  logo clr
//Bit  0           reg_melogo_region_en_0    // unsigned ,    RW, default = 1  enable signal for region 0  logo clr
#define FRC_MELOGO_REGION_CLR_STEP                 0x1f10
//Bit 31:12        reserved
//Bit 11           reg_melogo_scc_region_clr_step_11 // unsigned ,    RW, default = 0  12 region for melogo 1b clr step
//Bit 10           reg_melogo_scc_region_clr_step_10 // unsigned ,    RW, default = 0  12 region for melogo 1b clr step
//Bit  9           reg_melogo_scc_region_clr_step_9 // unsigned ,    RW, default = 0  12 region for melogo 1b clr step
//Bit  8           reg_melogo_scc_region_clr_step_8 // unsigned ,    RW, default = 0  12 region for melogo 1b clr step
//Bit  7           reg_melogo_scc_region_clr_step_7 // unsigned ,    RW, default = 0  12 region for melogo 1b clr step
//Bit  6           reg_melogo_scc_region_clr_step_6 // unsigned ,    RW, default = 0  12 region for melogo 1b clr step
//Bit  5           reg_melogo_scc_region_clr_step_5 // unsigned ,    RW, default = 0  12 region for melogo 1b clr step
//Bit  4           reg_melogo_scc_region_clr_step_4 // unsigned ,    RW, default = 0  12 region for melogo 1b clr step
//Bit  3           reg_melogo_scc_region_clr_step_3 // unsigned ,    RW, default = 0  12 region for melogo 1b clr step
//Bit  2           reg_melogo_scc_region_clr_step_2 // unsigned ,    RW, default = 0  12 region for melogo 1b clr step
//Bit  1           reg_melogo_scc_region_clr_step_1 // unsigned ,    RW, default = 0  12 region for melogo 1b clr step
//Bit  0           reg_melogo_scc_region_clr_step_0 // unsigned ,    RW, default = 0  12 region for melogo 1b clr step
#define FRC_MELOGO_REGION_HWINDOW_2                0x1f11
//Bit 31:26        reserved
//Bit 25:16        reg_melogo_stat_region_hend_3 // unsigned ,    RW, default = 240  logo statistic region horizontal end3, relative to hstart, updated by fw
//Bit 15:10        reserved
//Bit  9: 0        reg_melogo_stat_region_hend_2 // unsigned ,    RW, default = 180  logo statistic region horizontal end2, relative to hstart, updated by fw
#define FRC_MELOGO_REGION_HWINDOW_1                0x1f12
//Bit 31:26        reserved
//Bit 25:16        reg_melogo_stat_region_hend_1 // unsigned ,    RW, default = 120  logo statistic region horizontal end1, relative to hstart, updated by fw
//Bit 15:10        reserved
//Bit  9: 0        reg_melogo_stat_region_hend_0 // unsigned ,    RW, default = 60  logo statistic region horizontal end0, relative to hstart, updated by fw
#define FRC_MELOGO_REGION_HWINDOW_0                0x1f13
//Bit 31:10        reserved
//Bit  9: 0        reg_melogo_stat_region_hstart // unsigned ,    RW, default = 0  logo statistic region horizontal start, updated by fw
#define FRC_MELOGO_REGION_VWINDOW_1                0x1f14
//Bit 31:26        reserved
//Bit 25:16        reg_melogo_stat_region_vend_2 // unsigned ,    RW, default = 135  logo statistic region vertical end2, relative to vstart, updated by fw
//Bit 15:10        reserved
//Bit  9: 0        reg_melogo_stat_region_vend_1 // unsigned ,    RW, default = 90  logo statistic region vertical end1, relative to vstart, updated by fw
#define FRC_MELOGO_REGION_VWINDOW_0                0x1f15
//Bit 31:26        reserved
//Bit 25:16        reg_melogo_stat_region_vend_0 // unsigned ,    RW, default = 45  logo statistic region vertical end0, relative to vstart, updated by fw
//Bit 15:10        reserved
//Bit  9: 0        reg_melogo_stat_region_vstart // unsigned ,    RW, default = 0  logo statistic region vertical start, updated by fw
#define FRC_MELOGO_ZMV_THD                         0x1f16
//Bit 31:28        reserved
//Bit 27:24        reg_melogo_zmv_x_thd      // unsigned ,    RW, default = 1  x_direction zero mv threshold
//Bit 23:20        reserved
//Bit 19:16        reg_melogo_zmv_y_thd      // unsigned ,    RW, default = 1  y_direction zero mv threshold
//Bit 15: 0        reserved
#define FRC_MELOGO_BMV_XY_THD2                     0x1f17
//Bit 31:24        reserved
//Bit 23:16        reg_melogo_smv_sad_thd2   // unsigned ,    RW, default = 255  sad_4x4 threshold for smv_clr,relate to smv_x/y_thd
//Bit 15: 8        reg_melogo_smv_sad_thd3   // unsigned ,    RW, default = 255  sad_4x4 threshold for smv_clr,relate to smv_vpan_x/y_thd
//Bit  7: 0        reg_melogo_smv_sad_thd4   // unsigned ,    RW, default = 255  sad_4x4 threshold for smv_clr,relate to smv_hpan_x/y_thd
#define FRC_MELOGO_HW_CTRL                         0x1f20
//Bit 31:13        reserved
//Bit 12           reg_sync_sel  // unsigned ,    RW, default = 1   reg_bb_blk_*_coring and blk_size sync enable
//Bit 11:10        reserved
//Bit  9: 0        reg_gclk_ctrl // unsigned ,    RW, default = 0   {comb8_clk_en ,post_proc_clk_en ,pre_proc_clk_en ,latch_clk_en ,reg_clk_en}
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/me_logo_regs.h
//
// -----------------------------------------------
// REG_BASE:  FRC_ME_MIF0_APB_BASE = 0x20
// -----------------------------------------------
//
// Reading file:  ./frc_inc/frc_mevp_mif.h
//
// synopsys translate_off
// synopsys translate_on
#define HME_MV_RMIF_CTRL0                          0x2000
#define HME_MV_RMIF_CTRL1                          0x2001
#define HME_MV_RMIF_RO_STAT                        0x2002
#define ME_LOGO_RMIF_CTRL0                         0x2004
#define ME_LOGO_RMIF_CTRL1                         0x2005
#define ME_LOGO_RMIF_RO_STAT                       0x2006
#define ME_MV_NC_UNI_RMIF_CTRL0                    0x2008
#define ME_MV_NC_UNI_RMIF_CTRL1                    0x2009
#define ME_MV_NC_UNI_RMIF_RO_STAT                  0x200a
#define ME_MV_CN_UNI_RMIF_CTRL0                    0x200c
#define ME_MV_CN_UNI_RMIF_CTRL1                    0x200d
#define ME_MV_CN_UNI_RMIF_RO_STAT                  0x200e
#define ME_MV_PC_PHS_RMIF_CTRL0                    0x2010
#define ME_MV_PC_PHS_RMIF_CTRL1                    0x2011
#define ME_MV_PC_PHS_RMIF_RO_STAT                  0x2012
#define ME_MV_CP_UNI_RMIF_CTRL0                    0x2014
#define ME_MV_CP_UNI_RMIF_CTRL1                    0x2015
#define ME_MV_CP_UNI_RMIF_RO_STAT                  0x2016
#define ME_MV_PC_UNI_RMIF_CTRL0                    0x2018
#define ME_MV_PC_UNI_RMIF_CTRL1                    0x2019
#define ME_MV_PC_UNI_RMIF_RO_STAT                  0x201a
#define ME_MV_PB_UNI_RMIF_CTRL0                    0x201c
#define ME_MV_PB_UNI_RMIF_CTRL1                    0x201d
#define ME_MV_PB_UNI_RMIF_RO_STAT                  0x201e
#define VP_MV_PF_UNI_RMIF_CTRL0                    0x2020
#define VP_MV_PF_UNI_RMIF_CTRL1                    0x2021
#define VP_MV_PF_UNI_RMIF_RO_STAT                  0x2022
#define VP_MV_NC_WMIF_CTRL0                        0x2024
#define VP_MV_NC_WMIF_CTRL1                        0x2025
#define VP_MV_NC_WMIF_RO_STAT                      0x2026
#define VP_MV_CN_WMIF_CTRL0                        0x2028
#define VP_MV_CN_WMIF_CTRL1                        0x2029
#define VP_MV_CN_WMIF_RO_STAT                      0x202a
#define VP_MV_PC_WMIF_CTRL0                        0x202c
#define VP_MV_PC_WMIF_CTRL1                        0x202d
#define VP_MV_PC_WMIF_RO_STAT                      0x202e
#define MEVP_AXIRD_ARBX4_BADDR0                    0x2040
#define MEVP_AXIRD_ARBX8_BADDR1                    0x2050
#define MEVP_AXIRD_ARBX4_BADDR2                    0x2060
#define MEVP_AXIWR_ARBX4_BADDR                     0x2070
#define MEVP_CUR_RMIF_BADDR                        0x2080
#define MEVP_NXT_RMIF_BADDR                        0x2090
#define MEVP_PRE_RMIF_BADDR                        0x20a0
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_mevp_mif.h
//
// -----------------------------------------------
// REG_BASE:  FRC_ME_MIF1_APB_BASE = 0x21
// -----------------------------------------------
//`include "loss_dec_mevp_cur_reg.h"
// -----------------------------------------------
// REG_BASE:  FRC_ME_MIF2_APB_BASE = 0x22
// -----------------------------------------------
//`include "loss_dec_mevp_nxt_reg.h"
// -----------------------------------------------
// REG_BASE:  FRC_ME_MIF3_APB_BASE = 0x23
// -----------------------------------------------
//`include "loss_dec_mevp_pre_reg.h"
// -----------------------------------------------
// REG_BASE:  FRC_MC_TOP_APB_BASE = 0x30
// -----------------------------------------------
//
// Reading file:  ./frc_inc/frc_mc_top_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_MC_SETTING1                            0x3000
//Bit 31:29        reserved
//Bit 28           reg_mc_en                 // unsigned ,    RW, default = 1  mc_en
//Bit 27:25        reserved
//Bit 24           reg_mc_bb_inner_en        // unsigned ,    RW, default = 0  me handle bb inner en
//Bit 23:21        reserved
//Bit 20           reg_mc_greedy_mode_en     // unsigned ,    RW, default = 0  mc greedy mode en
//Bit 19:18        reserved
//Bit 17:16        reg_mc_obmc_mode          // unsigned ,    RW, default = 1  obmc mode, 0 no obmc, only use cur block do mc 1 force obmc 2: adaptive obmc based on occ
//Bit 15:12        reserved
//Bit 11: 8        reg_mc_mvx_scale          // unsigned ,    RW, default = 2  upscale of mvx from vector of MEandVP to get the vector under MC full scale, 0 no upscale, 1 2x upscale, 2 4xupscale, should be set to equal of reg_me_dsx_scale
//Bit  7: 4        reserved
//Bit  3: 0        reg_mc_mvy_scale          // unsigned ,    RW, default = 2  upscale of mvy from vector of MEandVP to get the vector under MC full scale; 0: no upscale; 1:2x upscale; 2:4xupscale, should be set to equal of reg_me_dsy_scale
#define FRC_MC_SETTING2                            0x3001
//Bit 31:16        reserved
//Bit 15:14        reserved
//Bit 13: 8        reg_mc_fetch_size         // unsigned ,    RW, default = 5  MC FETCH SIZE based on ME_MC_RATIO
//Bit  7: 0        reg_mc_blk_x              // unsigned ,    RW, default = 8  MC BLKSIZE based on ME_MC_RATIO
#define FRC_MC_FORCE_BV                            0x3002
//Bit 31:29        reserved
//Bit 28:16        reg_mc_force_mvx          // signed ,    RW, default = 0  mc force bv mvx
//Bit 15: 4        reg_mc_force_mvy          // signed ,    RW, default = 0  mc force bv mvy
//Bit  3: 1        reserved
//Bit  0           reg_mc_force_bv_en        // unsigned ,    RW, default = 0  force bv en
#define FRC_SRCH_RNG_MODE                          0x3003
//Bit 31: 8        reserved
//Bit  7: 4        reg_mc_luma_srch_rng_mode // unsigned ,    RW, default = 0  search range mode
//Bit  3: 0        reg_mc_chrm_srch_rng_mode // unsigned ,    RW, default = 0  search range mode
#define FRC_MC_BB_HANDLE_INNER_OFST                0x3004
//Bit 31:24        reg_mc_bb_xyxy_inner_ofst_0 // unsigned ,    RW, default = 0  black bar inner val [x_st y_st x_ed y_ed];
//Bit 23:16        reg_mc_bb_xyxy_inner_ofst_1 // unsigned ,    RW, default = 0
//Bit 15: 8        reg_mc_bb_xyxy_inner_ofst_2 // unsigned ,    RW, default = 0
//Bit  7: 0        reg_mc_bb_xyxy_inner_ofst_3 // unsigned ,    RW, default = 0
#define FRC_MC_BB_HANDLE_ORG_ME_BB_XYXY_LEFT_TOP   0x3005
//Bit 31:16        reg_mc_org_me_bb_xyxy_0   // unsigned ,    RW, default = 0  me part black bar index [x_st], updated by firmware
//Bit 15: 0        reg_mc_org_me_bb_xyxy_1   // unsigned ,    RW, default = 0  me part black bar index [y_st], updated by firmware
#define FRC_MC_BB_HANDLE_ORG_ME_BB_XYXY_RIGHT_BOT  0x3006
//Bit 31:16        reg_mc_org_me_bb_xyxy_2   // unsigned ,    RW, default = 959  me part black bar index [x_ed], updated by firmware
//Bit 15: 0        reg_mc_org_me_bb_xyxy_3   // unsigned ,    RW, default = 539  me part black bar index [y_ed], updated by firmware
#define FRC_MC_BB_HANDLE_ORG_ME_BLK_BB_XYXY_LFT_AND_TOP 0x3007
//Bit 31:16        reg_mc_org_me_blk_bb_xyxy_0 // unsigned ,    RW, default = 0  me part black bar block index [x_st], updated by firmware
//Bit 15: 0        reg_mc_org_me_blk_bb_xyxy_1 // unsigned ,    RW, default = 0  me part black bar block index [y_st], updated by firmware
#define FRC_MC_BB_HANDLE_ORG_ME_BLK_BB_XYXY_RIT_AND_BOT 0x3008
//Bit 31:16        reg_mc_org_me_blk_bb_xyxy_2 // unsigned ,    RW, default = 239  me part black bar block index [x_ed], updated by firmware
//Bit 15: 0        reg_mc_org_me_blk_bb_xyxy_3 // unsigned ,    RW, default = 134  me part black bar block index [y_ed], updated by firmware
#define FRC_MC_BB_HANDLE_ME_BLK_BB_XYXY_LFT_AND_TOP 0x3009
//Bit 31:16        reg_mc_me_blk_bb_xyxy_0   // unsigned ,    RW, default = 0  me part black bar block index [x_st], updated by firmware
//Bit 15: 0        reg_mc_me_blk_bb_xyxy_1   // unsigned ,    RW, default = 0  me part black bar block index [y_st], updated by firmware
#define FRC_MC_BB_HANDLE_ME_BLK_BB_XYXY_RIT_AND_BOT 0x300a
//Bit 31:16        reg_mc_me_blk_bb_xyxy_2   // unsigned ,    RW, default = 239  me part black bar block index [x_ed], updated by firmware
//Bit 15: 0        reg_mc_me_blk_bb_xyxy_3   // unsigned ,    RW, default = 134  me part black bar block index [y_ed], updated by firmware
#define FRC_MC_DBG_PHASE_EN                        0x300b
//Bit 31:18        reserved
//Bit 17           reg_mc_dbg_phase_pos_en   // unsigned ,    RW, default = 0  debug mode: when enable, use reg_mc_dbg_phase_pos for position
//Bit 16           reg_mc_dbg_phase_wei_en   // unsigned ,    RW, default = 0  debug mode: when enable, use reg_mc_dbg_phase_wei for position
//Bit 15: 8        reg_mc_dbg_phase_pos      // unsigned ,    RW, default = 0  debug registers for reg_mc_dbg_phase_pos_en.
//Bit  7: 0        reg_mc_dbg_phase_wei      // unsigned ,    RW, default = 0  debug registers for reg_mc_dbg_phase_wei_en.
#define FRC_MC_REG_OFRM_IDX                        0x300c
//Bit 31: 0        ro_ofrm_idx               // unsigned ,    RO, default = 0
#define FRC_MC_BLK_OFSET                           0x300d
//Bit 31:24        reserved
//Bit 23:16        reg_mc_blk_xofset         // signed ,    RW, default = 0  horizontal pixel offset to align with me blocks
//Bit 15: 8        reserved
//Bit  7: 0        reg_mc_blk_yofset         // signed ,    RW, default = 0  vertical pixel offset to align with me blocks
#define FRC_MC_LOGO_OPTION                         0x300e
//Bit 31: 4        reserved
//Bit  3: 0        reg_mc_get_pixlogo_mode   // unsigned ,    RW, default = 2  0: p_logo to p,c_logo to c; 1:p_logo to p, p_logo to c; 2:c_logo to p, c_logo to c
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_mc_top_regs.h
//
//
// Reading file:  ./frc_inc/mc_get_lbuf_range_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_NORM_SHIFT1                            0x3010
//Bit 31:24        reg_mc_luma_norm_shift_posi_0 // unsigned ,    RW, default = 19  shift
//Bit 23:16        reg_mc_luma_norm_shift_posi_1 // unsigned ,    RW, default = 40  shift
//Bit 15: 8        reg_mc_luma_norm_shift_posi_2 // unsigned ,    RW, default = 55  shift
//Bit  7: 0        reg_mc_luma_norm_shift_posi_3 // unsigned ,    RW, default = 74  shift
#define FRC_NORM_SHIFT2                            0x3011
//Bit 31:24        reg_mc_luma_norm_shift_posi_4 // unsigned ,    RW, default = 92  shift
//Bit 23:16        reg_mc_luma_norm_shift_posi_5 // unsigned ,    RW, default = 110  shift
//Bit 15: 8        reg_mc_luma_norm_shift_posi_6 // unsigned ,    RW, default = 129  shift
//Bit  7: 0        reg_mc_luma_norm_shift_posi_7 // unsigned ,    RW, default = 0  shift
#define FRC_NORM_SHIFT3                            0x3012
//Bit 31:24        reg_mc_luma_norm_shift_posi_8 // unsigned ,    RW, default = 0  shift
//Bit 23:16        reg_mc_chrm_norm_shift_posi_0 // unsigned ,    RW, default = 43  shift
//Bit 15: 8        reg_mc_chrm_norm_shift_posi_1 // unsigned ,    RW, default = 86  shift
//Bit  7: 0        reg_mc_chrm_norm_shift_posi_2 // unsigned ,    RW, default = 129  shift
#define FRC_NORM_SHIFT4                            0x3013
//Bit 31:24        reg_mc_chrm_norm_shift_posi_3 // unsigned ,    RW, default = 0  shift
//Bit 23:16        reg_mc_chrm_norm_shift_posi_4 // unsigned ,    RW, default = 0  shift
//Bit 15: 8        reg_mc_chrm_norm_shift_posi_5 // unsigned ,    RW, default = 0  shift
//Bit  7: 0        reg_mc_chrm_norm_shift_posi_6 // unsigned ,    RW, default = 0  shift
#define FRC_NORM_SHIFT5                            0x3014
//Bit 31:24        reg_mc_chrm_norm_shift_posi_7 // unsigned ,    RW, default = 0  shift
//Bit 23:16        reg_mc_chrm_norm_shift_posi_8 // unsigned ,    RW, default = 0  shift
//Bit 15: 8        reg_mc_luma_sing_shift_posi_0 // unsigned ,    RW, default = 24  shift
//Bit  7: 0        reg_mc_luma_sing_shift_posi_1 // unsigned ,    RW, default = 36  shift
#define FRC_NORM_SHIFT6                            0x3015
//Bit 31:24        reg_mc_luma_sing_shift_posi_2 // unsigned ,    RW, default = 47  shift
//Bit 23:16        reg_mc_luma_sing_shift_posi_3 // unsigned ,    RW, default = 59  shift
//Bit 15: 8        reg_mc_luma_sing_shift_posi_4 // unsigned ,    RW, default = 70  shift
//Bit  7: 0        reg_mc_luma_sing_shift_posi_5 // unsigned ,    RW, default = 82  shift
#define FRC_NORM_SHIFT7                            0x3016
//Bit 31:24        reg_mc_luma_sing_shift_posi_6 // unsigned ,    RW, default = 94  shift
//Bit 23:16        reg_mc_luma_sing_shift_posi_7 // unsigned ,    RW, default = 105  shift
//Bit 15: 8        reg_mc_luma_sing_shift_posi_8 // unsigned ,    RW, default = 129  shift
//Bit  7: 0        reg_mc_chrm_sing_shift_posi_0 // unsigned ,    RW, default = 26  shift
#define FRC_NORM_SHIFT8                            0x3017
//Bit 31:24        reg_mc_chrm_sing_shift_posi_1 // unsigned ,    RW, default = 52  shift
//Bit 23:16        reg_mc_chrm_sing_shift_posi_2 // unsigned ,    RW, default = 77  shift
//Bit 15: 8        reg_mc_chrm_sing_shift_posi_3 // unsigned ,    RW, default = 103  shift
//Bit  7: 0        reg_mc_chrm_sing_shift_posi_4 // unsigned ,    RW, default = 129  shift
#define FRC_NORM_SHIFT9                            0x3018
//Bit 31:24        reg_mc_chrm_sing_shift_posi_5 // unsigned ,    RW, default = 0  shift
//Bit 23:16        reg_mc_chrm_sing_shift_posi_6 // unsigned ,    RW, default = 0  shift
//Bit 15: 8        reg_mc_chrm_sing_shift_posi_7 // unsigned ,    RW, default = 0  shift
//Bit  7: 0        reg_mc_chrm_sing_shift_posi_8 // unsigned ,    RW, default = 0  shift
#define FRC_NORM_SHIFT10                           0x3019
//Bit 31:24        reg_mc_luma_asym_shift_posi_0 // unsigned ,    RW, default = 22  shift
//Bit 23:16        reg_mc_luma_asym_shift_posi_1 // unsigned ,    RW, default = 44  shift
//Bit 15: 8        reg_mc_luma_asym_shift_posi_2 // unsigned ,    RW, default = 64  shift
//Bit  7: 0        reg_mc_luma_asym_shift_posi_3 // unsigned ,    RW, default = 85  shift
#define FRC_NORM_SHIFT11                           0x301a
//Bit 31:24        reg_mc_luma_asym_shift_posi_4 // unsigned ,    RW, default = 107  shift
//Bit 23:16        reg_mc_luma_asym_shift_posi_5 // unsigned ,    RW, default = 129  shift
//Bit 15: 8        reg_mc_luma_asym_shift_posi_6 // unsigned ,    RW, default = 0  shift
//Bit  7: 0        reg_mc_luma_asym_shift_posi_7 // unsigned ,    RW, default = 0  shift
#define FRC_NORM_SHIFT12                           0x301b
//Bit 31:24        reg_mc_luma_asym_shift_posi_8 // unsigned ,    RW, default = 0  shift
//Bit 23:16        reg_mc_chrm_asym_shift_posi_0 // unsigned ,    RW, default = 34  shift
//Bit 15: 8        reg_mc_chrm_asym_shift_posi_1 // unsigned ,    RW, default = 65  shift
//Bit  7: 0        reg_mc_chrm_asym_shift_posi_2 // unsigned ,    RW, default = 96  shift
#define FRC_NORM_SHIFT13                           0x301c
//Bit 31:24        reg_mc_chrm_asym_shift_posi_3 // unsigned ,    RW, default = 129  shift
//Bit 23:16        reg_mc_chrm_asym_shift_posi_4 // unsigned ,    RW, default = 0  shift
//Bit 15: 8        reg_mc_chrm_asym_shift_posi_5 // unsigned ,    RW, default = 0  shift
//Bit  7: 0        reg_mc_chrm_asym_shift_posi_6 // unsigned ,    RW, default = 0  shift
#define FRC_NORM_SHIFT14                           0x301d
//Bit 31:24        reg_mc_chrm_asym_shift_posi_7 // unsigned ,    RW, default = 0  shift
//Bit 23:16        reg_mc_chrm_asym_shift_posi_8 // unsigned ,    RW, default = 0  shift
//Bit 15: 8        reserved
//Bit  7: 0        reserved
#define FRC_MC_RANGE_NORM_LUT_0                    0x301e
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_0 // signed ,    RW, default = -4
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_0 // signed ,    RW, default = -4
#define FRC_MC_RANGE_NORM_LUT_1                    0x301f
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_1 // signed ,    RW, default = 4
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_1 // signed ,    RW, default = 4
#define FRC_MC_RANGE_NORM_LUT_2                    0x3020
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_2 // signed ,    RW, default = -28
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_2 // signed ,    RW, default = -12
#define FRC_MC_RANGE_NORM_LUT_3                    0x3021
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_3 // signed ,    RW, default = 24 //40
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_3 // signed ,    RW, default = 24
#define FRC_MC_RANGE_NORM_LUT_4                    0x3022
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_4 // signed ,    RW, default = -8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_4 // signed ,    RW, default = -8
#define FRC_MC_RANGE_NORM_LUT_5                    0x3023
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_5 // signed ,    RW, default = 8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_5 // signed ,    RW, default = 8
#define FRC_MC_RANGE_NORM_LUT_6                    0x3024
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_6 // signed ,    RW, default = -24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_6 // signed ,    RW, default = -8
#define FRC_MC_RANGE_NORM_LUT_7                    0x3025
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_7 // signed ,    RW, default = 16 //32
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_7 // signed ,    RW, default = 16
#define FRC_MC_RANGE_NORM_LUT_8                    0x3026
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_8 // signed ,    RW, default = -12
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_8 // signed ,    RW, default = -12
#define FRC_MC_RANGE_NORM_LUT_9                    0x3027
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_9 // signed ,    RW, default = 12
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_9 // signed ,    RW, default = 12
#define FRC_MC_RANGE_NORM_LUT_10                   0x3028
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_10 // signed ,    RW, default = -20
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_10 // signed ,    RW, default = -4
#define FRC_MC_RANGE_NORM_LUT_11                   0x3029
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_11 // signed ,    RW, default = 20
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_11 // signed ,    RW, default = 4
#define FRC_MC_RANGE_NORM_LUT_12                   0x302a
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_12 // signed ,    RW, default = -16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_12 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_13                   0x302b
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_13 // signed ,    RW, default = 16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_13 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_14                   0x302c
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_14 // signed ,    RW, default = 0 //-16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_14 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_15                   0x302d
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_15 // signed ,    RW, default = 0 //16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_15 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_16                   0x302e
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_16 // signed ,    RW, default =0  // -40
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_16 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_17                   0x302f
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_17 // signed ,    RW, default = 0 //40
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_17 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_18                   0x3030
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_18 // signed ,    RW, default = 0 //-8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_18 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_19                   0x3031
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_19 // signed ,    RW, default = 0 //8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_19 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_20                   0x3032
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_20 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_20 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_21                   0x3033
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_21 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_21 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_22                   0x3034
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_22 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_22 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_23                   0x3035
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_23 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_23 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_24                   0x3036
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_24 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_24 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_25                   0x3037
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_25 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_25 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_26                   0x3038
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_26 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_26 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_27                   0x3039
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_27 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_27 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_28                   0x303a
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_28 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_28 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_29                   0x303b
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_29 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_29 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_30                   0x303c
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_30 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_30 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_31                   0x303d
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_31 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_31 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_32                   0x303e
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_32 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_32 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_33                   0x303f
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_33 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_33 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_34                   0x3040
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_34 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_34 // signed ,    RW, default = 0
#define FRC_MC_RANGE_NORM_LUT_35                   0x3041
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_norm_lut_35 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_norm_lut_35 // signed ,    RW, default = 0
#define FRC_MC_RANGE_SING_LUT_0                    0x3042
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_0 // signed ,    RW, default = -8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_0 // signed ,    RW, default = -8
#define FRC_MC_RANGE_SING_LUT_1                    0x3043
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_1 // signed ,    RW, default = 8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_1 // signed ,    RW, default = 8
#define FRC_MC_RANGE_SING_LUT_2                    0x3044
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_2 // signed ,    RW, default = -40    //-56
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_2 // signed ,    RW, default = -40 //-48
#define FRC_MC_RANGE_SING_LUT_3                    0x3045
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_3 // signed ,    RW, default = 8  //24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_3 // signed ,    RW, default = 8
#define FRC_MC_RANGE_SING_LUT_4                    0x3046
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_4 // signed ,    RW, default = -8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_4 // signed ,    RW, default = -8
#define FRC_MC_RANGE_SING_LUT_5                    0x3047
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_5 // signed ,    RW, default = 16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_5 // signed ,    RW, default = 16
#define FRC_MC_RANGE_SING_LUT_6                    0x3048
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_6 // signed ,    RW, default = -32    //-48
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_6 // signed ,    RW, default = -32    //-40
#define FRC_MC_RANGE_SING_LUT_7                    0x3049
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_7 // signed ,    RW, default = 8  //24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_7 // signed ,    RW, default = 8
#define FRC_MC_RANGE_SING_LUT_8                    0x304a
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_8 // signed ,    RW, default = -8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_8 // signed ,    RW, default = -8
#define FRC_MC_RANGE_SING_LUT_9                    0x304b
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_9 // signed ,    RW, default = 24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_9 // signed ,    RW, default = 24
#define FRC_MC_RANGE_SING_LUT_10                   0x304c
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_10 // signed ,    RW, default = -24   //-40
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_10 // signed ,    RW, default = -24   //-32
#define FRC_MC_RANGE_SING_LUT_11                   0x304d
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_11 // signed ,    RW, default = 8 //24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_11 // signed ,    RW, default = 8
#define FRC_MC_RANGE_SING_LUT_12                   0x304e
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_12 // signed ,    RW, default = -8    //-16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_12 // signed ,    RW, default = -8
#define FRC_MC_RANGE_SING_LUT_13                   0x304f
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_13 // signed ,    RW, default = 32    //24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_13 // signed ,    RW, default = 32
#define FRC_MC_RANGE_SING_LUT_14                   0x3050
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_14 // signed ,    RW, default = -16   //-40
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_14 // signed ,    RW, default = -16   //-24
#define FRC_MC_RANGE_SING_LUT_15                   0x3051
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_15 // signed ,    RW, default = 8 //16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_15 // signed ,    RW, default = 8
#define FRC_MC_RANGE_SING_LUT_16                   0x3052
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_16 // signed ,    RW, default = -8    //-16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_16 // signed ,    RW, default = -8
#define FRC_MC_RANGE_SING_LUT_17                   0x3053
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_17 // signed ,    RW, default = 40    //32
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_17 // signed ,    RW, default = 40
#define FRC_MC_RANGE_SING_LUT_18                   0x3054
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_18 // signed ,    RW, default = -8    //-32
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_18 // signed ,    RW, default = -8    //-16
#define FRC_MC_RANGE_SING_LUT_19                   0x3055
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_19 // signed ,    RW, default = 8 //16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_19 // signed ,    RW, default = 8
#define FRC_MC_RANGE_SING_LUT_20                   0x3056
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_20 // signed ,    RW, default = 0 //-16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_20 // signed ,    RW, default = 0 //-8
#define FRC_MC_RANGE_SING_LUT_21                   0x3057
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_21 // signed ,    RW, default = 0 //40
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_21 // signed ,    RW, default = 0 //48
#define FRC_MC_RANGE_SING_LUT_22                   0x3058
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_22 // signed ,    RW, default = 0 //-24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_22 // signed ,    RW, default = 0 //-8
#define FRC_MC_RANGE_SING_LUT_23                   0x3059
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_23 // signed ,    RW, default = 0 //16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_23 // signed ,    RW, default = 0 //8
#define FRC_MC_RANGE_SING_LUT_24                   0x305a
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_24 // signed ,    RW, default = 0 //-24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_24 // signed ,    RW, default = 0 //0
#define FRC_MC_RANGE_SING_LUT_25                   0x305b
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_25 // signed ,    RW, default = 0 //40
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_25 // signed ,    RW, default = 0 //0
#define FRC_MC_RANGE_SING_LUT_26                   0x305c
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_26 // signed ,    RW, default = 0 //-24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_26 // signed ,    RW, default = 0 //0
#define FRC_MC_RANGE_SING_LUT_27                   0x305d
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_27 // signed ,    RW, default = 0 //8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_27 // signed ,    RW, default = 0 //0
#define FRC_MC_RANGE_SING_LUT_28                   0x305e
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_28 // signed ,    RW, default = 0 //-24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_28 // signed ,    RW, default = 0 //0
#define FRC_MC_RANGE_SING_LUT_29                   0x305f
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_29 // signed ,    RW, default = 0 //48
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_29 // signed ,    RW, default = 0 //0
#define FRC_MC_RANGE_SING_LUT_30                   0x3060
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_30 // signed ,    RW, default = 0 //-16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_30 // signed ,    RW, default = 0 //0
#define FRC_MC_RANGE_SING_LUT_31                   0x3061
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_31 // signed ,    RW, default = 0 //8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_31 // signed ,    RW, default = 0 //0
#define FRC_MC_RANGE_SING_LUT_32                   0x3062
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_32 // signed ,    RW, default = 0 //-24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_32 // signed ,    RW, default = 0 //0
#define FRC_MC_RANGE_SING_LUT_33                   0x3063
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_33 // signed ,    RW, default = 0 //56
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_33 // signed ,    RW, default = 0 //0
#define FRC_MC_RANGE_SING_LUT_34                   0x3064
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_34 // signed ,    RW, default = 0 //-8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_34 // signed ,    RW, default = 0 //0
#define FRC_MC_RANGE_SING_LUT_35                   0x3065
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_sing_lut_35 // signed ,    RW, default = 0 //8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_sing_lut_35 // signed ,    RW, default = 0 //0
#define FRC_MC_RANGE_ASYM_LUT_0                    0x3066
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_0 // signed ,    RW, default = -8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_0 // signed ,    RW, default = -8
#define FRC_MC_RANGE_ASYM_LUT_1                    0x3067
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_1 // signed ,    RW, default = 8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_1 // signed ,    RW, default = 8
#define FRC_MC_RANGE_ASYM_LUT_2                    0x3068
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_2 // signed ,    RW, default = -32
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_2 // signed ,    RW, default = -24
#define FRC_MC_RANGE_ASYM_LUT_3                    0x3069
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_3 // signed ,    RW, default = 48
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_3 // signed ,    RW, default = 32
#define FRC_MC_RANGE_ASYM_LUT_4                    0x306a
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_4 // signed ,    RW, default = -16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_4 // signed ,    RW, default = -16
#define FRC_MC_RANGE_ASYM_LUT_5                    0x306b
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_5 // signed ,    RW, default = 16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_5 // signed ,    RW, default = 16
#define FRC_MC_RANGE_ASYM_LUT_6                    0x306c
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_6 // signed ,    RW, default = -24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_6 // signed ,    RW, default = -16
#define FRC_MC_RANGE_ASYM_LUT_7                    0x306d
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_7 // signed ,    RW, default = 40
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_7 // signed ,    RW, default = 24
#define FRC_MC_RANGE_ASYM_LUT_8                    0x306e
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_8 // signed ,    RW, default = -16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_8 // signed ,    RW, default = -16
#define FRC_MC_RANGE_ASYM_LUT_9                    0x306f
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_9 // signed ,    RW, default = 24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_9 // signed ,    RW, default = 24
#define FRC_MC_RANGE_ASYM_LUT_10                   0x3070
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_10 // signed ,    RW, default = -24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_10 // signed ,    RW, default = -16
#define FRC_MC_RANGE_ASYM_LUT_11                   0x3071
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_11 // signed ,    RW, default = 32
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_11 // signed ,    RW, default = 16
#define FRC_MC_RANGE_ASYM_LUT_12                   0x3072
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_12 // signed ,    RW, default = -24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_12 // signed ,    RW, default = -24
#define FRC_MC_RANGE_ASYM_LUT_13                   0x3073
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_13 // signed ,    RW, default = 32
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_13 // signed ,    RW, default = 32
#define FRC_MC_RANGE_ASYM_LUT_14                   0x3074
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_14 // signed ,    RW, default = -16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_14 // signed ,    RW, default = -8
#define FRC_MC_RANGE_ASYM_LUT_15                   0x3075
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_15 // signed ,    RW, default = 24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_15 // signed ,    RW, default = 8
#define FRC_MC_RANGE_ASYM_LUT_16                   0x3076
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_16 // signed ,    RW, default = -24
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_16 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_17                   0x3077
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_17 // signed ,    RW, default = 40
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_17 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_18                   0x3078
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_18 // signed ,    RW, default = -16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_18 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_19                   0x3079
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_19 // signed ,    RW, default = 16
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_19 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_20                   0x307a
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_20 // signed ,    RW, default = -32
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_20 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_21                   0x307b
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_21 // signed ,    RW, default = 48
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_21 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_22                   0x307c
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_22 // signed ,    RW, default = -8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_22 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_23                   0x307d
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_23 // signed ,    RW, default = 8
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_23 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_24                   0x307e
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_24 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_24 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_25                   0x307f
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_25 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_25 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_26                   0x3080
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_26 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_26 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_27                   0x3081
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_27 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_27 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_28                   0x3082
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_28 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_28 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_29                   0x3083
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_29 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_29 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_30                   0x3084
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_30 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_30 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_31                   0x3085
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_31 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_31 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_32                   0x3086
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_32 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_32 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_33                   0x3087
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_33 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_33 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_34                   0x3088
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_34 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_34 // signed ,    RW, default = 0
#define FRC_MC_RANGE_ASYM_LUT_35                   0x3089
//Bit 31:25        reserved
//Bit 24:16        reg_mc_luma_range_asym_lut_35 // signed ,    RW, default = 0
//Bit 15: 9        reserved
//Bit  8: 0        reg_mc_chrm_range_asym_lut_35 // signed ,    RW, default = 0
#define FRC_MC_SEARCH_RNG_MODE_TH1_DELETE          0x308a
//Bit 31:27        reserved
//Bit 26           reg_mc_norm_mode_en       // unsigned ,    RW, default = 1
//Bit 25           reg_mc_sing_up_en         // unsigned ,    RW, default = 1
//Bit 24           reg_mc_sing_dn_en         // unsigned ,    RW, default = 1
//Bit 23           reg_mc_norm_asym_en       // unsigned ,    RW, default = 0
//Bit 22           reg_mc_norm_vd2_en        // unsigned ,    RW, default = 1
//Bit 21           reg_mc_sing_up_vd2_en     // unsigned ,    RW, default = 1
//Bit 20           reg_mc_sing_dn_vd2_en     // unsigned ,    RW, default = 1
//Bit 19           reg_mc_norm_vd2hd2_en     // unsigned ,    RW, default = 1
//Bit 18           reg_mc_sing_up_vd2hd2_en  // unsigned ,    RW, default = 1
//Bit 17           reg_mc_sing_dn_vd2hd2_en  // unsigned ,    RW, default = 1
//Bit 16           reg_mc_gred_mode_en       // unsigned ,    RW, default = 1
//Bit 15: 8        reg_mc_luma_norm_vect_th  // unsigned ,    RW, default = 40
//Bit  7: 0        reg_mc_luma_sing_vect_min_th // unsigned ,    RW, default = 24
#define FRC_MC_SEARCH_RNG_MODE_TH2_DELETE          0x308b
//Bit 31:24        reg_mc_luma_sing_vect_max_th // unsigned ,    RW, default = 56
//Bit 23:16        reg_mc_luma_asym_vect_th  // unsigned ,    RW, default = 48
//Bit 15: 8        reg_mc_luma_gred_vect_th  // unsigned ,    RW, default = 80
//Bit  7: 0        reg_mc_chrm_norm_vect_th  // unsigned ,    RW, default = 24
#define FRC_MC_SEARCH_RNG_MODE_TH3_DELETE          0x308c
//Bit 31:24        reg_mc_chrm_sing_vect_min_th // unsigned ,    RW, default = 8
//Bit 23:16        reg_mc_chrm_sing_vect_max_th // unsigned ,    RW, default = 48
//Bit 15: 8        reg_mc_chrm_asym_vect_th  // unsigned ,    RW, default = 32
//Bit  7: 0        reg_mc_chrm_gred_vect_th  // unsigned ,    RW, default = 48
#define FRC_SRCH_RNG_MODE_DELETE                   0x308d
//Bit 31: 0        reserved
#define FRC_NOW_SRCH_REG                           0x308e
//Bit 31:24        reg_mc_single_mode_luma_constant // unsigned ,    RW, default = 32  single mode luma constant
//Bit 23:16        reg_mc_single_mode_chrm_constant // unsigned ,    RW, default = 32  single mode chrm constant
//Bit 15: 8        reg_mc_vsrch_rng_luma     // unsigned ,    RW, default = 160  one side search range of the MC plane for luma, unde dsx and dsy data scale, = MAX_MC_Y_VRANG, line buffer needed will be 2*reg_mc_vsrch_rng_luma +2;
//Bit  7: 0        reg_mc_vsrch_rng_chrm     // unsigned ,    RW, default = 160  one side search range of the MC plane for chrm, unde dsx and dsy data scale, = MAX_MC_C_VRANG, line buffer needed will be 2*reg_mc_vsrch_rng_chrm +2;
#define FRC_GREED_MODE                             0x308f
//Bit 31:16        reserved
//Bit 15: 8        reg_mc_greedy_mode_luma_line // unsigned ,    RW, default = 8  greedy mode up limit luma
//Bit  7: 0        reg_mc_greedy_mode_chrm_line // unsigned ,    RW, default = 8  greedy mode up limit chrm
#define FRC_MC_PRE_LBUF_LUMA_OFST                  0x3090
//Bit 31:25        reserved
//Bit 24:16        ro_mc_pre_lbuf_luma_ofst_0 // signed ,    RO, default = 0  frame buffer luma offset [top_ofst bot_ofst line num]
//Bit 15: 9        reserved
//Bit  8: 0        ro_mc_pre_lbuf_luma_ofst_1 // signed ,    RO, default = 0  frame buffer luma offset [top_ofst bot_ofst line num]
#define FRC_MC_PRE_LBUF_LUMA_LINE_NUM              0x3091
//Bit 31:23        ro_mc_pre_lbuf_luma_ofst_2 // unsigned ,    RO, default = 0  frame buffer luma offset [top_ofst bot_ofst line num]
//Bit 22: 0        reserved
#define FRC_MC_PRE_LBUF_CHRM_OFST                  0x3092
//Bit 31:25        reserved
//Bit 24:16        ro_mc_pre_lbuf_chrm_ofst_0 // signed ,    RO, default = 0  frame buffer chrm offset [top_ofst bot_ofst line num]
//Bit 15: 9        reserved
//Bit  8: 0        ro_mc_pre_lbuf_chrm_ofst_1 // signed ,    RO, default = 0  frame buffer chrm offset [top_ofst bot_ofst line num]
#define FRC_MC_PRE_LBUF_CHRM_LINE_NUM              0x3093
//Bit 31:23        ro_mc_pre_lbuf_chrm_ofst_2 // unsigned ,    RO, default = 0  frame buffer chrm offset [top_ofst bot_ofst line num]
//Bit 22: 0        reserved
#define FRC_MC_CUR_LBUF_LUMA_OFST                  0x3094
//Bit 31:25        reserved
//Bit 24:16        ro_mc_cur_lbuf_luma_ofst_0 // signed ,    RO, default = 0  frame buffer luma offset [top_ofst bot_ofst line num]
//Bit 15: 9        reserved
//Bit  8: 0        ro_mc_cur_lbuf_luma_ofst_1 // signed ,    RO, default = 0  frame buffer luma offset [top_ofst bot_ofst line num]
#define FRC_MC_CUR_LBUF_LUMA_LINE_NUM              0x3095
//Bit 31:23        ro_mc_cur_lbuf_luma_ofst_2 // unsigned ,    RO, default = 0  frame buffer luma offset [top_ofst bot_ofst line num]
//Bit 22: 0        reserved
#define FRC_MC_CUR_LBUF_CHRM_OFST                  0x3096
//Bit 31:25        reserved
//Bit 24:16        ro_mc_cur_lbuf_chrm_ofst_0 // signed ,    RO, default = 0  frame buffer chrm offset [top_ofst bot_ofst line num]
//Bit 15: 9        reserved
//Bit  8: 0        ro_mc_cur_lbuf_chrm_ofst_1 // signed ,    RO, default = 0  frame buffer chrm offset [top_ofst bot_ofst line num]
#define FRC_MC_CUR_LBUF_CHRM_LINE_NUM              0x3097
//Bit 31:23        ro_mc_cur_lbuf_chrm_ofst_2 // unsigned ,    RO, default = 0  frame buffer chrm offset [top_ofst bot_ofst line num]
//Bit 22: 0        reserved
#define FRC_MC_H2V2_SETTING                        0x3098
//Bit 31           reg_mc_get_lbuf_wrap_lpf_mode // unsigned ,    RW, default = 0  get lbuf warp lpf mode: when 0, [0 4 0], when 1, [1 2 1];
//Bit 30           reg_mc_srch_rng_luma_scale_en // unsigned ,    RW, default = 1  h2v2 luma en
//Bit 29           reg_mc_srch_rng_luma_scale_force_en // unsigned ,    RW, default = 0  h2v2 luma force setting
//Bit 28           reg_mc_srch_rng_luma_abv_xscale // unsigned ,    RW, default = 0  h2v2 abv x en
//Bit 27           reg_mc_srch_rng_luma_abv_yscale // unsigned ,    RW, default = 0  h2v2 abv y en
//Bit 26           reg_mc_srch_rng_luma_blw_xscale // unsigned ,    RW, default = 0  h2v2 blw x en
//Bit 25           reg_mc_srch_rng_luma_blw_yscale // unsigned ,    RW, default = 0  h2v2 blw y en
//Bit 24           reg_mc_srch_rng_chrm_scale_en // unsigned ,    RW, default = 1  h2v2 chrm en
//Bit 23           reg_mc_srch_rng_chrm_scale_force_en // unsigned ,    RW, default = 0  h2v2 chrm force setting
//Bit 22           reg_mc_srch_rng_chrm_abv_xscale // unsigned ,    RW, default = 0  h2v2 abv x en
//Bit 21           reg_mc_srch_rng_chrm_abv_yscale // unsigned ,    RW, default = 0  h2v2 abv y en
//Bit 20           reg_mc_srch_rng_chrm_blw_xscale // unsigned ,    RW, default = 0  h2v2 blw x en
//Bit 19           reg_mc_srch_rng_chrm_blw_yscale // unsigned ,    RW, default = 0  h2v2 blw y en
//Bit 18:13        reg_mc_srch_rng_ofst      // unsigned ,    RW, default = 8  even and h2v2 ofst setting
//Bit 12: 0        reserved
#define FRC_MC_RO_H2V2                             0x3099
//Bit 31: 8        reserved
//Bit  7           ro_mc_srch_rng_luma_abv_xscale // unsigned ,    RO, default = 0  h2v2 abv x en
//Bit  6           ro_mc_srch_rng_luma_abv_yscale // unsigned ,    RO, default = 0  h2v2 abv y en
//Bit  5           ro_mc_srch_rng_luma_blw_xscale // unsigned ,    RO, default = 0  h2v2 blw x en
//Bit  4           ro_mc_srch_rng_luma_blw_yscale // unsigned ,    RO, default = 0  h2v2 blw y en
//Bit  3           ro_mc_srch_rng_chrm_abv_xscale // unsigned ,    RO, default = 0  h2v2 abv x en
//Bit  2           ro_mc_srch_rng_chrm_abv_yscale // unsigned ,    RO, default = 0  h2v2 abv y en
//Bit  1           ro_mc_srch_rng_chrm_blw_xscale // unsigned ,    RO, default = 0  h2v2 blw x en
//Bit  0           ro_mc_srch_rng_chrm_blw_yscale // unsigned ,    RO, default = 0  h2v2 blw y en
#define FRC_MC_LUMA_PHASE0_LUT                     0x309a
//Bit 31           reg_mc_luma_phase0_bypass // unsigned ,    RW, default = 0
//Bit 30:24        reg_mc_luma_phase0_lut_0  // unsigned ,    RW, default = 8
//Bit 23            reserved
//Bit 22:16        reg_mc_luma_phase0_lut_1  // unsigned ,    RW, default = 8
//Bit 15            reserved
//Bit 14: 8        reg_mc_luma_phase0_lut_2  // unsigned ,    RW, default = 8
//Bit  7            reserved
//Bit  6: 0        reg_mc_luma_phase0_lut_3  // unsigned ,    RW, default = 8
#define FRC_MC_CHRM_PHASE0_LUT                     0x309b
//Bit 31           reg_mc_chrm_phase0_bypass // unsigned ,    RW, default = 0
//Bit 30:24        reg_mc_chrm_phase0_lut_0  // unsigned ,    RW, default = 8
//Bit 23            reserved
//Bit 22:16        reg_mc_chrm_phase0_lut_1  // unsigned ,    RW, default = 8
//Bit 15            reserved
//Bit 14: 8        reg_mc_chrm_phase0_lut_2  // unsigned ,    RW, default = 8
//Bit  7            reserved
//Bit  6: 0        reg_mc_chrm_phase0_lut_3  // unsigned ,    RW, default = 8
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/mc_get_lbuf_range_regs.h
//
//
// Reading file:  ./frc_inc/frc_mc_csc_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_MC_CSC_CTRL                            0x30f0
//Bit 31: 10       reserved
//Bit 9 : 8        reg_glk_ctrl      // unsigned ,    RW, default = 0  csc reg_glk_ctrl enable 2'b00:gating 2'b01:close 2'b1x:always open
//Bit 7: 5         reserved
//Bit  4           reg_sync_en       // unsigned ,    RW, default = 0  reg_csc_en sync enable
//Bit  3           reg_csc_en        // unsigned ,    RW, default = 1  enable rgb2yuv mtrix for ip pattern generation
//Bit 2:0          reg_csc_rs        // unsigned ,    RW, default = 0  0: normalized to 1024 as 1; 1: norm to 2048; 2: norm to 4096; 3: norm to 8192
#define FRC_MC_CSC_OFFSET_INP01                    0x30f5
//Bit 31:29        reserved
//Bit 28:16        reg_csc_offst_inp_0 // signed ,    RW, default = 0
//Bit 15:13        reserved
//Bit 12: 0        reg_csc_offst_inp_1 // signed ,    RW, default = -512
#define FRC_MC_CSC_OFFSET_INP2                     0x30f6
//Bit 31:13        reserved
//Bit 12: 0        reg_csc_offst_inp_2 // signed ,    RW, default = -512
#define FRC_MC_CSC_COEF_00_01                      0x30f7
//Bit 31:29        reserved
//Bit 28:16        reg_csc_coef_0_0  // signed ,    RW, default = 1024
//Bit 15:13        reserved
//Bit 12: 0        reg_csc_coef_0_1  // signed ,    RW, default = 0
#define FRC_MC_CSC_COEF_02_10                      0x30f8
//Bit 31:29        reserved
//Bit 28:16        reg_csc_coef_0_2  // signed ,    RW, default = 1577
//Bit 15:13        reserved
//Bit 12: 0        reg_csc_coef_1_0  // signed ,    RW, default = 1024
#define FRC_MC_CSC_COEF_11_12                      0x30f9
//Bit 31:29        reserved
//Bit 28:16        reg_csc_coef_1_1  // signed ,    RW, default = -187
//Bit 15:13        reserved
//Bit 12: 0        reg_csc_coef_1_2  // signed ,    RW, default = -470
#define FRC_MC_CSC_COEF_20_21                      0x30fa
//Bit 31:29        reserved
//Bit 28:16        reg_csc_coef_2_0  // signed ,    RW, default = 1024
//Bit 15:13        reserved
//Bit 12: 0        reg_csc_coef_2_1  // signed ,    RW, default = 1860
#define FRC_MC_CSC_COEF_22                         0x30fb
//Bit 31:13        reserved
//Bit 12: 0        reg_csc_coef_2_2  // signed ,    RW, default = 0
#define FRC_MC_CSC_OFFSET_OUP01                    0x30fc
//Bit 31:29        reserved
//Bit 28:16        reg_csc_offst_oup_0 // signed ,    RW, default = 0
//Bit 15:13        reserved
//Bit 12: 0        reg_csc_offst_oup_1 // signed ,    RW, default = 0
#define FRC_MC_CSC_OFFSET_OUP2                     0x30fe
//Bit 31:13        reserved
//Bit 12: 0        reg_csc_offst_oup_2 // signed ,    RW, default = 0
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_mc_csc_regs.h
//
// -----------------------------------------------
// REG_BASE:  FRC_MC_REGS_APB_BASE = 0x31
// -----------------------------------------------
//
// Reading file:  ./frc_inc/frc_mc_regs.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_MC_INSIDE_LOGO_OPTION                  0x3100
//Bit 31:20        reserved
//Bit 19:16        reg_mc_zpix_inside_logo_rp_sel // unsigned ,    RW, default = 1  0:avg 1:phase weight 2: p 3: c 4:mid3
//Bit 15:11        reserved
//Bit 10: 9        reg_mc_inside_logo_judgement_mode // unsigned ,    RW, default = 1  0:use pre inside;1:use cur inside;2:use p or c; 3:use p and c. for inside logo
//Bit  8: 0        reserved
#define FRC_MC_GOSD_REG                            0x3101
//Bit 31: 0        reserved
#define FRC_MC_NEW_PTL_LEVEL                       0x3102
//Bit 31:16        reserved
//Bit 15:14        reg_mc_new_pre_ptl_level_inside_mode // unsigned ,    RW, default = 1  for logo aggregation. 0:use corresponding pix logo;1:use oppose pix logo;2:use p or c; 3:use p and c
//Bit 13:12        reg_mc_new_cur_ptl_level_inside_mode // unsigned ,    RW, default = 0  for logo aggregation. 0:use corresponding pix logo;1:use oppose pix logo;2:use p or c; 3:use p and c
//Bit 11: 8        reg_mc_new_ptl_level_normalize_th // unsigned ,    RW, default = 8  level_normalize_th                                          dft 0
//Bit  7: 2        reserved
//Bit  1: 0        reg_mc_new_ptl_level_cal_blksize_win // unsigned ,    RW, default = 0  window size for first aggregation. 0:9*15; 1:13*21; 2:15*25; 3:17*29;
#define FRC_MC_OBMC_ALPHA_H_COEFF_0                0x3103
//Bit 31:24        reg_obmc_alpha_h_3_0      // unsigned ,    RW, default = 40  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
//Bit 23:16        reg_obmc_alpha_h_2_0      // unsigned ,    RW, default = 40  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
//Bit 15: 8        reg_obmc_alpha_h_1_0      // unsigned ,    RW, default = 40  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
//Bit  7: 0        reg_obmc_alpha_h_0_0      // unsigned ,    RW, default = 40  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
#define FRC_MC_OBMC_ALPHA_H_COEFF_1                0x3104
//Bit 31:24        reg_obmc_alpha_h_3_1      // unsigned ,    RW, default = 32  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
//Bit 23:16        reg_obmc_alpha_h_2_1      // unsigned ,    RW, default = 32  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
//Bit 15: 8        reg_obmc_alpha_h_1_1      // unsigned ,    RW, default = 32  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
//Bit  7: 0        reg_obmc_alpha_h_0_1      // unsigned ,    RW, default = 32  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
#define FRC_MC_OBMC_ALPHA_H_COEFF_2                0x3105
//Bit 31:24        reg_obmc_alpha_h_3_2      // unsigned ,    RW, default = 24  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
//Bit 23:16        reg_obmc_alpha_h_2_2      // unsigned ,    RW, default = 24  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
//Bit 15: 8        reg_obmc_alpha_h_1_2      // unsigned ,    RW, default = 24  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
//Bit  7: 0        reg_obmc_alpha_h_0_2      // unsigned ,    RW, default = 24  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
#define FRC_MC_OBMC_ALPHA_H_COEFF_3                0x3106
//Bit 31:24        reg_obmc_alpha_h_3_3      // unsigned ,    RW, default = 16  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
//Bit 23:16        reg_obmc_alpha_h_2_3      // unsigned ,    RW, default = 16  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
//Bit 15: 8        reg_obmc_alpha_h_1_3      // unsigned ,    RW, default = 16  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
//Bit  7: 0        reg_obmc_alpha_h_0_3      // unsigned ,    RW, default = 16  obmc alpha of the (i,j) position for mc_pix(i,j,MV_H), normalized to 32 as 1
#define FRC_MC_OBMC_ALPHA_V_COEFF_0                0x3107
//Bit 31:24        reg_obmc_alpha_v_3_0      // unsigned ,    RW, default = 16  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
//Bit 23:16        reg_obmc_alpha_v_2_0      // unsigned ,    RW, default = 24  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
//Bit 15: 8        reg_obmc_alpha_v_1_0      // unsigned ,    RW, default = 32  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
//Bit  7: 0        reg_obmc_alpha_v_0_0      // unsigned ,    RW, default = 40  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
#define FRC_MC_OBMC_ALPHA_V_COEFF_1                0x3108
//Bit 31:24        reg_obmc_alpha_v_3_1      // unsigned ,    RW, default = 16  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
//Bit 23:16        reg_obmc_alpha_v_2_1      // unsigned ,    RW, default = 24  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
//Bit 15: 8        reg_obmc_alpha_v_1_1      // unsigned ,    RW, default = 32  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
//Bit  7: 0        reg_obmc_alpha_v_0_1      // unsigned ,    RW, default = 40  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
#define FRC_MC_OBMC_ALPHA_V_COEFF_2                0x3109
//Bit 31:24        reg_obmc_alpha_v_3_2      // unsigned ,    RW, default = 16  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
//Bit 23:16        reg_obmc_alpha_v_2_2      // unsigned ,    RW, default = 24  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
//Bit 15: 8        reg_obmc_alpha_v_1_2      // unsigned ,    RW, default = 32  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
//Bit  7: 0        reg_obmc_alpha_v_0_2      // unsigned ,    RW, default = 40  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
#define FRC_MC_OBMC_ALPHA_V_COEFF_3                0x310a
//Bit 31:24        reg_obmc_alpha_v_3_3      // unsigned ,    RW, default = 16  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
//Bit 23:16        reg_obmc_alpha_v_2_3      // unsigned ,    RW, default = 24  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
//Bit 15: 8        reg_obmc_alpha_v_1_3      // unsigned ,    RW, default = 32  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
//Bit  7: 0        reg_obmc_alpha_v_0_3      // unsigned ,    RW, default = 40  obmc alpha of the (i,j) position for mc_pix(i,j,MV_V), normalized to 32 as 1
#define FRC_MC_PIXLPF_COEF1                        0x310b
//Bit 31:28        reg_mc_pixlpf_coef_0_0    // unsigned ,    RW, default = 4  coeff for pixlpf_coef_v1_0
//Bit 27:24        reg_mc_pixlpf_coef_0_1    // unsigned ,    RW, default = 2  coeff for pixlpf_coef_v1_1
//Bit 23:20        reg_mc_pixlpf_coef_0_2    // unsigned ,    RW, default = 0  coeff for pixlpf_coef_v1_2
//Bit 19:16        reg_mc_pixlpf_coef_0_3    // unsigned ,    RW, default = 0  coeff for pixlpf_coef_v1_3
//Bit 15:12        reg_mc_pixlpf_coef_0_4    // unsigned ,    RW, default = 0  coeff for pixlpf_coef_v1_4
//Bit 11: 8        reg_mc_pixlpf_coef_0_5    // unsigned ,    RW, default = 0  coeff for pixlpf_coef_v1_5
//Bit  7: 4        reg_mc_pixlpf_coef_0_6    // unsigned ,    RW, default = 0  coeff for pixlpf_coef_v1_6
//Bit  3: 0        reserved
#define FRC_MC_PIXLPF_COEF3                        0x310c
//Bit 31:28        reg_mc_pixlpf_coef_1_0    // unsigned ,    RW, default = 6  coeff for pixlpf_coef_v3_0
//Bit 27:24        reg_mc_pixlpf_coef_1_1    // unsigned ,    RW, default = 4  coeff for pixlpf_coef_v3_1
//Bit 23:20        reg_mc_pixlpf_coef_1_2    // unsigned ,    RW, default = 2  coeff for pixlpf_coef_v3_2
//Bit 19:16        reg_mc_pixlpf_coef_1_3    // unsigned ,    RW, default = 0  coeff for pixlpf_coef_v3_3
//Bit 15:12        reg_mc_pixlpf_coef_1_4    // unsigned ,    RW, default = 0  coeff for pixlpf_coef_v3_4
//Bit 11: 8        reg_mc_pixlpf_coef_1_5    // unsigned ,    RW, default = 0  coeff for pixlpf_coef_v3_5
//Bit  7: 4        reg_mc_pixlpf_coef_1_6    // unsigned ,    RW, default = 0  coeff for pixlpf_coef_v3_6
//Bit  3: 0        reserved
#define FRC_MC_PIXLPF_COEF5                        0x310d
//Bit 31:28        reg_mc_pixlpf_coef_2_0    // unsigned ,    RW, default = 6  coeff for pixlpf_coef_v5_0
//Bit 27:24        reg_mc_pixlpf_coef_2_1    // unsigned ,    RW, default = 6  coeff for pixlpf_coef_v5_1
//Bit 23:20        reg_mc_pixlpf_coef_2_2    // unsigned ,    RW, default = 4  coeff for pixlpf_coef_v5_2
//Bit 19:16        reg_mc_pixlpf_coef_2_3    // unsigned ,    RW, default = 2  coeff for pixlpf_coef_v5_3
//Bit 15:12        reg_mc_pixlpf_coef_2_4    // unsigned ,    RW, default = 2  coeff for pixlpf_coef_v5_4
//Bit 11: 8        reg_mc_pixlpf_coef_2_5    // unsigned ,    RW, default = 1  coeff for pixlpf_coef_v5_5
//Bit  7: 4        reg_mc_pixlpf_coef_2_6    // unsigned ,    RW, default = 0  coeff for pixlpf_coef_v5_6
//Bit  3: 0        reserved
#define FRC_MC_PIXLPF_COEF7                        0x310e
//Bit 31:28        reg_mc_pixlpf_coef_3_0    // unsigned ,    RW, default = 8  coeff for pixlpf_coef_v7_0
//Bit 27:24        reg_mc_pixlpf_coef_3_1    // unsigned ,    RW, default = 6  coeff for pixlpf_coef_v7_1
//Bit 23:20        reg_mc_pixlpf_coef_3_2    // unsigned ,    RW, default = 4  coeff for pixlpf_coef_v7_2
//Bit 19:16        reg_mc_pixlpf_coef_3_3    // unsigned ,    RW, default = 4  coeff for pixlpf_coef_v7_3
//Bit 15:12        reg_mc_pixlpf_coef_3_4    // unsigned ,    RW, default = 2  coeff for pixlpf_coef_v7_4
//Bit 11: 8        reg_mc_pixlpf_coef_3_5    // unsigned ,    RW, default = 2  coeff for pixlpf_coef_v7_5
//Bit  7: 4        reg_mc_pixlpf_coef_3_6    // unsigned ,    RW, default = 1  coeff for pixlpf_coef_v7_6
//Bit  3: 0        reserved
#define FRC_MC_PIXLPF_CTRL                         0x310f
//Bit 31:28        reserved
//Bit 27           reg_mc_pixlpf_en          // unsigned ,    RW, default = 1  when set to 0, pixlpf off; else pixlpf on
//Bit 26           reg_mc_pixlpf_orgfrm_en   // unsigned ,    RW, default = 1  when set to 1, bypass pixlpf if phase is close to original frame.
//Bit 25           reg_mc_pixlpf_byp         // unsigned ,    RW, default = 1  when set to 1, bypass pixlpf
//Bit 24           reg_mc_pixlpf_bb_sel      // unsigned ,    RW, default = 0  0: inner BB; 1: outer BB
//Bit 23           reg_mc_pixlpf_coef_sum_3  // unsigned ,    RW, default = 1  coef sum selection. 0: means 32; 1: means 64. sum of reg_mc_pixlpf_coef[3] should not exceed 32 or 64 which is indicated by reg_mc_pixlpf_coef_sum[3].
//Bit 22           reg_mc_pixlpf_coef_sum_2  // unsigned ,    RW, default = 1  coef sum selection. 0: means 32; 1: means 64. sum of reg_mc_pixlpf_coef[2] should not exceed 32 or 64 which is indicated by reg_mc_pixlpf_coef_sum[2].
//Bit 21           reg_mc_pixlpf_coef_sum_1  // unsigned ,    RW, default = 1  coef sum selection. 0: means 32; 1: means 64. sum of reg_mc_pixlpf_coef[1] should not exceed 32 or 64 which is indicated by reg_mc_pixlpf_coef_sum[1].
//Bit 20           reg_mc_pixlpf_coef_sum_0  // unsigned ,    RW, default = 1  coef sum selection. 0: means 32; 1: means 64. sum of reg_mc_pixlpf_coef[0] should not exceed 32 or 64 which is indicated by reg_mc_pixlpf_coef_sum[1].
//Bit 19:18        reg_mc_pixlpf_yc_sel      // unsigned ,    RW, default = 0  blend diff_y and diff_c for diff_data. 0:{16, 0, 0}; 1:{8,  4, 4}; 2:{10, 3, 3}; //sum is 16.
//Bit 17:16        reg_mc_pixlpf_diff_sft    // unsigned ,    RW, default = 2  diff_sum right shift (reg_mc_pixlpf_diff_sft*2);
//Bit 15:12        reg_mc_pixlpf_gain1       // unsigned ,    RW, default = 8  high gain for bilateral lpf
//Bit 11: 8        reg_mc_pixlpf_gain2       // unsigned ,    RW, default = 0  low  gain for bilateral lpf
//Bit  7: 6        reg_mc_pixlpf_slope       // unsigned ,    RW, default = 2  gain slope for bilateral lpf. diff shift slope.
//Bit  5: 0        reg_mc_pixlpf_th          // unsigned ,    RW, default = 10  diff th for bilateral lpf. if diff_sum less than th, use high gain.
#define FRC_MC_DEFLICKER_COEFF8_32_AND_31_0        0x3110
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_32_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_31_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_30_AND_0           0x3111
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_30_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_29_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_28_AND_27_0        0x3112
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_28_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_27_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_26_AND_25_0        0x3113
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_26_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_25_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_24_AND_23_0        0x3114
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_24_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_23_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_22_AND_21_0        0x3115
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_22_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_21_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_0                  0x3116
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_20_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_19_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_18_AND_17_0        0x3117
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_18_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_17_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_16_AND_15_0        0x3118
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_16_0         // signed ,    RW, default = -4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_15_0         // signed ,    RW, default = -3  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_14_AND_13_0        0x3119
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_14_0         // signed ,    RW, default = -3  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_13_0         // signed ,    RW, default = -3  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_12_AND_11_0        0x311a
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_12_0         // signed ,    RW, default = -3  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_11_0         // signed ,    RW, default = -3  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_10_AND_9_0         0x311b
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_10_0         // signed ,    RW, default = -3  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_9_0          // signed ,    RW, default = -2  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_8_AND_7_0          0x311c
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_8_0          // signed ,    RW, default = -2  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_7_0          // signed ,    RW, default = -2  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_6_AND_5_0          0x311d
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_6_0          // signed ,    RW, default = -2  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_5_0          // signed ,    RW, default = 1  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_4_ADN_3_0          0x311e
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_4_0          // signed ,    RW, default = -1  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_3_0          // signed ,    RW, default = -1  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_2_ADN_1_0          0x311f
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_2_0          // signed ,    RW, default = -1  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_1_0          // signed ,    RW, default = 0  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_0_0                0x3120
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_0_0          // signed ,    RW, default = 0  used deflicker h8v4 interp
//Bit 15: 0        reserved
#define FRC_MC_DEFLICKER_COEFF8_32_AND_31_1        0x3121
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_32_1         // signed ,    RW, default = 10  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_31_1         // signed ,    RW, default = 10  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_30_AND_1           0x3122
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_30_1         // signed ,    RW, default = 10  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_29_1         // signed ,    RW, default = 11  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_28_AND_27_1        0x3123
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_28_1         // signed ,    RW, default = 11  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_27_1         // signed ,    RW, default = 9  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_26_AND_25_1        0x3124
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_26_1         // signed ,    RW, default = 9  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_25_1         // signed ,    RW, default = 11  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_24_AND_23_1        0x3125
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_24_1         // signed ,    RW, default = 10  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_23_1         // signed ,    RW, default = 10  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_22_AND_21_1        0x3126
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_22_1         // signed ,    RW, default = 10  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_21_1         // signed ,    RW, default = 10  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_1                  0x3127
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_20_1         // signed ,    RW, default = 10  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_19_1         // signed ,    RW, default = 8  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_18_AND_17_1        0x3128
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_18_1         // signed ,    RW, default = 9  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_17_1         // signed ,    RW, default = 9  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_16_AND_15_1        0x3129
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_16_1         // signed ,    RW, default = 9  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_15_1         // signed ,    RW, default = 8  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_14_AND_13_1        0x312a
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_14_1         // signed ,    RW, default = 7  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_13_1         // signed ,    RW, default = 8  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_12_AND_11_1        0x312b
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_12_1         // signed ,    RW, default = 7  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_11_1         // signed ,    RW, default = 6  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_10_AND_9_1         0x312c
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_10_1         // signed ,    RW, default = 6  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_9_1          // signed ,    RW, default = 5  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_8_AND_7_1          0x312d
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_8_1          // signed ,    RW, default = 5  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_7_1          // signed ,    RW, default = 4  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_6_AND_5_1          0x312e
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_6_1          // signed ,    RW, default = 5  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_5_1          // signed ,    RW, default = 3  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_4_ADN_3_1          0x312f
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_4_1          // signed ,    RW, default = 2  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_3_1          // signed ,    RW, default = 1  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_2_ADN_1_1          0x3130
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_2_1          // signed ,    RW, default = 1  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_1_1          // signed ,    RW, default = 1  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_0_1                0x3131
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_0_1          // signed ,    RW, default = 0  used deflicker h8v4 interp
//Bit 15: 0        reserved
#define FRC_MC_DEFLICKER_COEFF8_32_AND_31_2        0x3132
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_32_2         // signed ,    RW, default = -23  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_31_2         // signed ,    RW, default = -23  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_30_AND_2           0x3133
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_30_2         // signed ,    RW, default = -24  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_29_2         // signed ,    RW, default = -24  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_28_AND_27_2        0x3134
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_28_2         // signed ,    RW, default = -24  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_27_2         // signed ,    RW, default = -24  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_26_AND_25_2        0x3135
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_26_2         // signed ,    RW, default = -24  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_25_2         // signed ,    RW, default = -24  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_24_AND_23_2        0x3136
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_24_2         // signed ,    RW, default = -24  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_23_2         // signed ,    RW, default = -24  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_22_AND_21_2        0x3137
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_22_2         // signed ,    RW, default = -24  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_21_2         // signed ,    RW, default = -23  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_2                  0x3138
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_20_2         // signed ,    RW, default = -23  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_19_2         // signed ,    RW, default = -22  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_18_AND_17_2        0x3139
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_18_2         // signed ,    RW, default = -22  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_17_2         // signed ,    RW, default = -21  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_16_AND_15_2        0x313a
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_16_2         // signed ,    RW, default = -21  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_15_2         // signed ,    RW, default = -20  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_14_AND_13_2        0x313b
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_14_2         // signed ,    RW, default = -19  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_13_2         // signed ,    RW, default = -18  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_12_AND_11_2        0x313c
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_12_2         // signed ,    RW, default = -17  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_11_2         // signed ,    RW, default = -16  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_10_AND_9_2         0x313d
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_10_2         // signed ,    RW, default = -15  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_9_2          // signed ,    RW, default = -14  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_8_AND_7_2          0x313e
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_8_2          // signed ,    RW, default = -13  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_7_2          // signed ,    RW, default = -11  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_6_AND_5_2          0x313f
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_6_2          // signed ,    RW, default = -10  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_5_2          // signed ,    RW, default = -8  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_4_ADN_3_2          0x3140
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_4_2          // signed ,    RW, default = -7  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_3_2          // signed ,    RW, default = -5  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_2_ADN_1_2          0x3141
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_2_2          // signed ,    RW, default = -4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_1_2          // signed ,    RW, default = -2  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_0_2                0x3142
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_0_2          // signed ,    RW, default = 0  used deflicker h8v4 interp
//Bit 15: 0        reserved
#define FRC_MC_DEFLICKER_COEFF8_32_AND_31_3        0x3143
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_32_3         // signed ,    RW, default = 81  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_31_3         // signed ,    RW, default = 84  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_30_AND_3           0x3144
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_30_3         // signed ,    RW, default = 86  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_29_3         // signed ,    RW, default = 89  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_28_AND_27_3        0x3145
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_28_3         // signed ,    RW, default = 91  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_27_3         // signed ,    RW, default = 94  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_26_AND_25_3        0x3146
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_26_3         // signed ,    RW, default = 96  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_25_3         // signed ,    RW, default = 98  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_24_AND_23_3        0x3147
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_24_3         // signed ,    RW, default = 101  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_23_3         // signed ,    RW, default = 103  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_22_AND_21_3        0x3148
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_22_3         // signed ,    RW, default = 105  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_21_3         // signed ,    RW, default = 107  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_3                  0x3149
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_20_3         // signed ,    RW, default = 109  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_19_3         // signed ,    RW, default = 111  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_18_AND_17_3        0x314a
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_18_3         // signed ,    RW, default = 113  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_17_3         // signed ,    RW, default = 114  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_16_AND_15_3        0x314b
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_16_3         // signed ,    RW, default = 116  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_15_3         // signed ,    RW, default = 117  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_14_AND_13_3        0x314c
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_14_3         // signed ,    RW, default = 119  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_13_3         // signed ,    RW, default = 120  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_12_AND_11_3        0x314d
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_12_3         // signed ,    RW, default = 121  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_11_3         // signed ,    RW, default = 123  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_10_AND_9_3         0x314e
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_10_3         // signed ,    RW, default = 124  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_9_3          // signed ,    RW, default = 125  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_8_AND_7_3          0x314f
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_8_3          // signed ,    RW, default = 125  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_7_3          // signed ,    RW, default = 126  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_6_AND_5_3          0x3150
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_6_3          // signed ,    RW, default = 127  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_5_3          // signed ,    RW, default = 127  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_4_ADN_3_3          0x3151
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_4_3          // signed ,    RW, default = 128  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_3_3          // signed ,    RW, default = 128  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_2_ADN_1_3          0x3152
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_2_3          // signed ,    RW, default = 128  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_1_3          // signed ,    RW, default = 128  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_0_3                0x3153
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_0_3          // signed ,    RW, default = 128  used deflicker h8v4 interp
//Bit 15: 0        reserved
#define FRC_MC_DEFLICKER_COEFF8_32_AND_31_4        0x3154
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_32_4         // signed ,    RW, default = 81  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_31_4         // signed ,    RW, default = 78  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_30_AND_4           0x3155
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_30_4         // signed ,    RW, default = 76  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_29_4         // signed ,    RW, default = 73  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_28_AND_27_4        0x3156
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_28_4         // signed ,    RW, default = 70  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_27_4         // signed ,    RW, default = 68  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_26_AND_25_4        0x3157
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_26_4         // signed ,    RW, default = 65  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_25_4         // signed ,    RW, default = 62  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_24_AND_23_4        0x3158
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_24_4         // signed ,    RW, default = 59  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_23_4         // signed ,    RW, default = 56  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_22_AND_21_4        0x3159
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_22_4         // signed ,    RW, default = 54  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_21_4         // signed ,    RW, default = 51  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_4                  0x315a
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_20_4         // signed ,    RW, default = 48  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_19_4         // signed ,    RW, default = 45  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_18_AND_17_4        0x315b
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_18_4         // signed ,    RW, default = 43  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_17_4         // signed ,    RW, default = 40  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_16_AND_15_4        0x315c
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_16_4         // signed ,    RW, default = 37  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_15_4         // signed ,    RW, default = 35  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_14_AND_13_4        0x315d
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_14_4         // signed ,    RW, default = 32  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_13_4         // signed ,    RW, default = 29  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_12_AND_11_4        0x315e
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_12_4         // signed ,    RW, default = 27  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_11_4         // signed ,    RW, default = 24  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_10_AND_9_4         0x315f
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_10_4         // signed ,    RW, default = 22  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_9_4          // signed ,    RW, default = 19  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_8_AND_7_4          0x3160
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_8_4          // signed ,    RW, default = 17  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_7_4          // signed ,    RW, default = 15  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_6_AND_5_4          0x3161
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_6_4          // signed ,    RW, default = 12  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_5_4          // signed ,    RW, default = 10  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_4_ADN_3_4          0x3162
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_4_4          // signed ,    RW, default = 8  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_3_4          // signed ,    RW, default = 6  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_2_ADN_1_4          0x3163
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_2_4          // signed ,    RW, default = 4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_1_4          // signed ,    RW, default = 2  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_0_4                0x3164
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_0_4          // signed ,    RW, default = 0  used deflicker h8v4 interp
//Bit 15: 0        reserved
#define FRC_MC_DEFLICKER_COEFF8_32_AND_31_5        0x3165
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_32_5         // signed ,    RW, default = -23  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_31_5         // signed ,    RW, default = -23  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_30_AND_5           0x3166
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_30_5         // signed ,    RW, default = -22  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_29_5         // signed ,    RW, default = -22  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_28_AND_27_5        0x3167
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_28_5         // signed ,    RW, default = -21  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_27_5         // signed ,    RW, default = -21  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_26_AND_25_5        0x3168
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_26_5         // signed ,    RW, default = -20  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_25_5         // signed ,    RW, default = -20  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_24_AND_23_5        0x3169
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_24_5         // signed ,    RW, default = -19  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_23_5         // signed ,    RW, default = -18  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_22_AND_21_5        0x316a
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_22_5         // signed ,    RW, default = -18  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_21_5         // signed ,    RW, default = -17  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_5                  0x316b
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_20_5         // signed ,    RW, default = -16  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_19_5         // signed ,    RW, default = -15  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_18_AND_17_5        0x316c
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_18_5         // signed ,    RW, default = -15  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_17_5         // signed ,    RW, default = -14  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_16_AND_15_5        0x316d
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_16_5         // signed ,    RW, default = -13  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_15_5         // signed ,    RW, default = -12  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_14_AND_13_5        0x316e
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_14_5         // signed ,    RW, default = -11  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_13_5         // signed ,    RW, default = -11  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_12_AND_11_5        0x316f
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_12_5         // signed ,    RW, default = -10  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_11_5         // signed ,    RW, default = -9  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_10_AND_9_5         0x3170
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_10_5         // signed ,    RW, default = -8  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_9_5          // signed ,    RW, default = -7  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_8_AND_7_5          0x3171
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_8_5          // signed ,    RW, default = -6  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_7_5          // signed ,    RW, default = -5  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_6_AND_5_5          0x3172
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_6_5          // signed ,    RW, default = -5  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_5_5          // signed ,    RW, default = -4  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_4_ADN_3_5          0x3173
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_4_5          // signed ,    RW, default = -3  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_3_5          // signed ,    RW, default = -2  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_2_ADN_1_5          0x3174
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_2_5          // signed ,    RW, default = -1  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_1_5          // signed ,    RW, default = -1  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_0_5                0x3175
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_0_5          // signed ,    RW, default = 0  used deflicker h8v4 interp
//Bit 15: 0        reserved
#define FRC_MC_DEFLICKER_COEFF8_32_AND_31_6        0x3176
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_32_6         // signed ,    RW, default = 10  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_31_6         // signed ,    RW, default = 10  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_30_AND_6           0x3177
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_30_6         // signed ,    RW, default = 10  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_29_6         // signed ,    RW, default = 9  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_28_AND_27_6        0x3178
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_28_6         // signed ,    RW, default = 9  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_27_6         // signed ,    RW, default = 9  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_26_AND_25_6        0x3179
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_26_6         // signed ,    RW, default = 9  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_25_6         // signed ,    RW, default = 8  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_24_AND_23_6        0x317a
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_24_6         // signed ,    RW, default = 8  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_23_6         // signed ,    RW, default = 8  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_22_AND_21_6        0x317b
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_22_6         // signed ,    RW, default = 8  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_21_6         // signed ,    RW, default = 7  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_6                  0x317c
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_20_6         // signed ,    RW, default = 7  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_19_6         // signed ,    RW, default = 7  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_18_AND_17_6        0x317d
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_18_6         // signed ,    RW, default = 6  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_17_6         // signed ,    RW, default = 6  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_16_AND_15_6        0x317e
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_16_6         // signed ,    RW, default = 6  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_15_6         // signed ,    RW, default = 5  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_14_AND_13_6        0x317f
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_14_6         // signed ,    RW, default = 5  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_13_6         // signed ,    RW, default = 5  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_12_AND_11_6        0x3180
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_12_6         // signed ,    RW, default = 4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_11_6         // signed ,    RW, default = 4  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_10_AND_9_6         0x3181
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_10_6         // signed ,    RW, default = 3  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_9_6          // signed ,    RW, default = 3  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_8_AND_7_6          0x3182
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_8_6          // signed ,    RW, default = 3  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_7_6          // signed ,    RW, default = 2  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_6_AND_5_6          0x3183
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_6_6          // signed ,    RW, default = 2  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_5_6          // signed ,    RW, default = 2  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_4_ADN_3_6          0x3184
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_4_6          // signed ,    RW, default = 1  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_3_6          // signed ,    RW, default = 1  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_2_ADN_1_6          0x3185
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_2_6          // signed ,    RW, default = 1  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_1_6          // signed ,    RW, default = 0  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_0_6                0x3186
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_0_6          // signed ,    RW, default = 0  used deflicker h8v4 interp
//Bit 15: 0        reserved
#define FRC_MC_DEFLICKER_COEFF8_32_AND_31_7        0x3187
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_32_7         // signed ,    RW, default = -4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_31_7         // signed ,    RW, default = -4  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_30_AND_7           0x3188
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_30_7         // signed ,    RW, default = -4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_29_7         // signed ,    RW, default = -4  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_28_AND_27_7        0x3189
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_28_7         // signed ,    RW, default = -4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_27_7         // signed ,    RW, default = -3  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_26_AND_25_7        0x318a
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_26_7         // signed ,    RW, default = -3  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_25_7         // signed ,    RW, default = -3  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_24_AND_23_7        0x318b
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_24_7         // signed ,    RW, default = -3  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_23_7         // signed ,    RW, default = -3  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_22_AND_21_7        0x318c
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_22_7         // signed ,    RW, default = -3  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_21_7         // signed ,    RW, default = -3  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_7                  0x318d
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_20_7         // signed ,    RW, default = -3  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_19_7         // signed ,    RW, default = -2  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_18_AND_17_7        0x318e
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_18_7         // signed ,    RW, default = -2  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_17_7         // signed ,    RW, default = -2  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_16_AND_15_7        0x318f
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_16_7         // signed ,    RW, default = -2  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_15_7         // signed ,    RW, default = -2  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_14_AND_13_7        0x3190
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_14_7         // signed ,    RW, default = -2  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_13_7         // signed ,    RW, default = -2  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_12_AND_11_7        0x3191
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_12_7         // signed ,    RW, default = -1  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_11_7         // signed ,    RW, default = -1  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_10_AND_9_7         0x3192
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_10_7         // signed ,    RW, default = -1  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_9_7          // signed ,    RW, default = -1  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_8_AND_7_7          0x3193
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_8_7          // signed ,    RW, default = -1  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_7_7          // signed ,    RW, default = -1  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_6_AND_5_7          0x3194
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_6_7          // signed ,    RW, default = -1  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_5_7          // signed ,    RW, default = -1  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_4_ADN_3_7          0x3195
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_4_7          // signed ,    RW, default = 0  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_3_7          // signed ,    RW, default = 0  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_2_ADN_1_7          0x3196
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_2_7          // signed ,    RW, default = 0  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef8_1_7          // signed ,    RW, default = 0  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF8_0_7                0x3197
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef8_0_7          // signed ,    RW, default = 0  used deflicker h8v4 interp
//Bit 15: 0        reserved
#define FRC_MC_DEFLICKER_COEFF4_32_AND_31_0        0x3198
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_32_0         // signed ,    RW, default = -13  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_31_0         // signed ,    RW, default = -13  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_30_ADN_29_0        0x3199
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_30_0         // signed ,    RW, default = -13  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_29_0         // signed ,    RW, default = -14  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_28_ADN_27_0        0x319a
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_28_0         // signed ,    RW, default = -14  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_27_0         // signed ,    RW, default = -14  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_26_AND_25_0        0x319b
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_26_0         // signed ,    RW, default = -14  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_25_0         // signed ,    RW, default = -15  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_24_AND_23_0        0x319c
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_24_0         // signed ,    RW, default = -15  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_23_0         // signed ,    RW, default = -15  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_22_AND_21_0        0x319d
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_22_0         // signed ,    RW, default = -15  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_21_0         // signed ,    RW, default = -15  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_20_AND_19_0        0x319e
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_20_0         // signed ,    RW, default = -15  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_19_0         // signed ,    RW, default = -15  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_18_AND_17_0        0x319f
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_18_0         // signed ,    RW, default = -15  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_17_0         // signed ,    RW, default = -14  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_16_AND_15_0        0x31a0
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_16_0         // signed ,    RW, default = -14  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_15_0         // signed ,    RW, default = -14  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_14_AND_13_0        0x31a1
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_14_0         // signed ,    RW, default = -13  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_13_0         // signed ,    RW, default = -13  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_12_AND_11_0        0x31a2
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_12_0         // signed ,    RW, default = -12  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_11_0         // signed ,    RW, default = -12  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_10_AND_9_0         0x31a3
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_10_0         // signed ,    RW, default = -11  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_9_0          // signed ,    RW, default = -10  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_8_AND_7_0          0x31a4
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_8_0          // signed ,    RW, default = -9  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_7_0          // signed ,    RW, default = -8  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_6_AND_5_0          0x31a5
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_6_0          // signed ,    RW, default = -7  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_5_0          // signed ,    RW, default = -6  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_4_AND_3_0          0x31a6
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_4_0          // signed ,    RW, default = -5  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_3_0          // signed ,    RW, default = -4  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_2_AND_1_0          0x31a7
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_2_0          // signed ,    RW, default = -3  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_1_0          // signed ,    RW, default = -1  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_0_0                0x31a8
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_0_0          // signed ,    RW, default = 0  used deflicker h8v4 interp
//Bit 15: 0        reserved
#define FRC_MC_DEFLICKER_COEFF4_32_AND_31_1        0x31a9
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_32_1         // signed ,    RW, default = 77  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_31_1         // signed ,    RW, default = 79  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_30_ADN_29_1        0x31aa
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_30_1         // signed ,    RW, default = 82  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_29_1         // signed ,    RW, default = 86  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_28_ADN_27_1        0x31ab
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_28_1         // signed ,    RW, default = 87  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_27_1         // signed ,    RW, default = 90  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_26_AND_25_1        0x31ac
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_26_1         // signed ,    RW, default = 92  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_25_1         // signed ,    RW, default = 96  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_24_AND_23_1        0x31ad
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_24_1         // signed ,    RW, default = 98  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_23_1         // signed ,    RW, default = 101  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_22_AND_21_1        0x31ae
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_22_1         // signed ,    RW, default = 102  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_21_1         // signed ,    RW, default = 105  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_20_AND_19_1        0x31af
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_20_1         // signed ,    RW, default = 107  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_19_1         // signed ,    RW, default = 109  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_18_AND_17_1        0x31b0
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_18_1         // signed ,    RW, default = 111  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_17_1         // signed ,    RW, default = 113  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_16_AND_15_1        0x31b1
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_16_1         // signed ,    RW, default = 114  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_15_1         // signed ,    RW, default = 117  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_14_AND_13_1        0x31b2
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_14_1         // signed ,    RW, default = 118  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_13_1         // signed ,    RW, default = 120  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_12_AND_11_1        0x31b3
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_12_1         // signed ,    RW, default = 121  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_11_1         // signed ,    RW, default = 122  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_10_AND_9_1         0x31b4
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_10_1         // signed ,    RW, default = 124  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_9_1          // signed ,    RW, default = 125  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_8_AND_7_1          0x31b5
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_8_1          // signed ,    RW, default = 125  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_7_1          // signed ,    RW, default = 126  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_6_AND_5_1          0x31b6
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_6_1          // signed ,    RW, default = 127  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_5_1          // signed ,    RW, default = 127  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_4_AND_3_1          0x31b7
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_4_1          // signed ,    RW, default = 128  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_3_1          // signed ,    RW, default = 128  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_2_AND_1_1          0x31b8
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_2_1          // signed ,    RW, default = 128  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_1_1          // signed ,    RW, default = 128  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_0_1                0x31b9
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_0_1          // signed ,    RW, default = 128  used deflicker h8v4 interp
//Bit 15: 0        reserved
#define FRC_MC_DEFLICKER_COEFF4_32_AND_31_2        0x31ba
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_32_2         // signed ,    RW, default = 77  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_31_2         // signed ,    RW, default = 74  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_30_ADN_29_2        0x31bb
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_30_2         // signed ,    RW, default = 71  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_29_2         // signed ,    RW, default = 68  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_28_ADN_27_2        0x31bc
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_28_2         // signed ,    RW, default = 66  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_27_2         // signed ,    RW, default = 63  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_26_AND_25_2        0x31bd
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_26_2         // signed ,    RW, default = 60  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_25_2         // signed ,    RW, default = 57  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_24_AND_23_2        0x31be
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_24_2         // signed ,    RW, default = 54  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_23_2         // signed ,    RW, default = 51  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_22_AND_21_2        0x31bf
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_22_2         // signed ,    RW, default = 49  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_21_2         // signed ,    RW, default = 46  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_20_AND_19_2        0x31c0
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_20_2         // signed ,    RW, default = 43  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_19_2         // signed ,    RW, default = 41  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_18_AND_17_2        0x31c1
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_18_2         // signed ,    RW, default = 38  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_17_2         // signed ,    RW, default = 35  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_16_AND_15_2        0x31c2
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_16_2         // signed ,    RW, default = 33  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_15_2         // signed ,    RW, default = 30  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_14_AND_13_2        0x31c3
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_14_2         // signed ,    RW, default = 28  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_13_2         // signed ,    RW, default = 25  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_12_AND_11_2        0x31c4
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_12_2         // signed ,    RW, default = 23  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_11_2         // signed ,    RW, default = 21  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_10_AND_9_2         0x31c5
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_10_2         // signed ,    RW, default = 18  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_9_2          // signed ,    RW, default = 16  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_8_AND_7_2          0x31c6
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_8_2          // signed ,    RW, default = 14  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_7_2          // signed ,    RW, default = 12  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_6_AND_5_2          0x31c7
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_6_2          // signed ,    RW, default = 10  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_5_2          // signed ,    RW, default = 8  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_4_AND_3_2          0x31c8
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_4_2          // signed ,    RW, default = 6  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_3_2          // signed ,    RW, default = 5  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_2_AND_1_2          0x31c9
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_2_2          // signed ,    RW, default = 3  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_1_2          // signed ,    RW, default = 1  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_0_2                0x31ca
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_0_2          // signed ,    RW, default = 0  used deflicker h8v4 interp
//Bit 15: 0        reserved
#define FRC_MC_DEFLICKER_COEFF4_32_AND_31_3        0x31cb
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_32_3         // signed ,    RW, default = -13  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_31_3         // signed ,    RW, default = -12  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_30_ADN_29_3        0x31cc
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_30_3         // signed ,    RW, default = -12  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_29_3         // signed ,    RW, default = -12  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_28_ADN_27_3        0x31cd
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_28_3         // signed ,    RW, default = -11  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_27_3         // signed ,    RW, default = -11  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_26_AND_25_3        0x31ce
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_26_3         // signed ,    RW, default = -10  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_25_3         // signed ,    RW, default = -10  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_24_AND_23_3        0x31cf
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_24_3         // signed ,    RW, default = -9  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_23_3         // signed ,    RW, default = -9  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_22_AND_21_3        0x31d0
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_22_3         // signed ,    RW, default = -8  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_21_3         // signed ,    RW, default = -8  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_20_AND_19_3        0x31d1
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_20_3         // signed ,    RW, default = -7  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_19_3         // signed ,    RW, default = -7  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_18_AND_17_3        0x31d2
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_18_3         // signed ,    RW, default = -6  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_17_3         // signed ,    RW, default = -6  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_16_AND_15_3        0x31d3
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_16_3         // signed ,    RW, default = -5  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_15_3         // signed ,    RW, default = -5  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_14_AND_13_3        0x31d4
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_14_3         // signed ,    RW, default = -5  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_13_3         // signed ,    RW, default = -4  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_12_AND_11_3        0x31d5
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_12_3         // signed ,    RW, default = -4  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_11_3         // signed ,    RW, default = -3  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_10_AND_9_3         0x31d6
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_10_3         // signed ,    RW, default = -3  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_9_3          // signed ,    RW, default = -3  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_8_AND_7_3          0x31d7
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_8_3          // signed ,    RW, default = -2  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_7_3          // signed ,    RW, default = -2  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_6_AND_5_3          0x31d8
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_6_3          // signed ,    RW, default = -2  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_5_3          // signed ,    RW, default = -1  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_4_AND_3_3          0x31d9
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_4_3          // signed ,    RW, default = -1  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_3_3          // signed ,    RW, default = -1  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_2_AND_1_3          0x31da
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_2_3          // signed ,    RW, default = 0  used deflicker h8v4 interp
//Bit 15:10        reserved
//Bit  9: 0        reg_mc_coef4_1_3          // signed ,    RW, default = 0  used deflicker h8v4 interp
#define FRC_MC_DEFLICKER_COEFF4_0_3                0x31db
//Bit 31:26        reserved
//Bit 25:16        reg_mc_coef4_0_3          // signed ,    RW, default = 0  used deflicker h8v4 interp
//Bit 15: 0        reserved
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_mc_regs.h
//
// -----------------------------------------------
// REG_BASE:  FRC_MC_REGS2_APB_BASE = 0x32
// -----------------------------------------------
//
// Reading file:  ./frc_inc/frc_mc_regs2.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_MC_DEMO_WINDOW                         0x3200
//Bit 31: 5        reserved
//Bit  4           reg_mc_demo_window_inverse // unsigned ,    RW, default = 0  enable of inverse-demo-window:  0:do memc in demo-window;     1:dont do memc in demo-window
//Bit  3           reg_mc_demo_window1_en    // unsigned ,    RW, default = 0  enable of demo-window:        0:no demo-window;      1:right-half is demo-window
//Bit  2           reg_mc_demo_window2_en    // unsigned ,    RW, default = 0  enable of demo-window:        0:no demo-window;      1:right-half is demo-window
//Bit  1           reg_mc_demo_window3_en    // unsigned ,    RW, default = 0  enable of demo-window:        0:no demo-window;      1:right-half is demo-window
//Bit  0           reg_mc_demo_window4_en    // unsigned ,    RW, default = 0  enable of demo-window:        0:no demo-window;      1:right-half is demo-window
#define FRC_MC_DEFLICKER                           0x3201
//Bit 31:15        reserved
//Bit 14           reg_mc_force_deflicker_en // unsigned ,    RW, default = 0  force deflicker
//Bit 13           reg_mc_flicker0_mode      // unsigned ,    RW, default = 0  do-deflicker == 0 mode 0: use all bilinear(c v h c2 v2 h2); mode 1: c use h8v4, v h c2 h2 v2 use bilinear
//Bit 12           reg_mc_flicker1_mode      // unsigned ,    RW, default = 0  do-deflicker == 1 mode 0: just c use h8v4 not do obmc; mode 1: c use h8 v4, v h c2 h2 v2 use bilinear
//Bit 11:10        reserved
//Bit  9: 0        reg_mc_diff_mv_thrd       // unsigned ,    RW, default = 0  mv diff th
#define FRC_MC_INVALID_CHECK_MODE                  0x3202
//Bit 31:17        reserved
//Bit 16           reg_mc_rp_invalid_point_en // unsigned ,    RW, default = 1  enable of replacing invalid points with valid points
//Bit 15:12        reg_mc_ptl_level_mode     // unsigned ,    RW, default = 0  mode of calculate logos data level:   0:max;   1:min
//Bit 11: 8        reg_mc_one_invalid_mode   // unsigned ,    RW, default = 2  mode of replacing only one invalid point: 0:using adjacent valid point(A) at same row;  1:using adjacent valid point(B) at same col; 2:use (A+B)/2
//Bit  7: 4        reg_mc_two_invalid_mode   // unsigned ,    RW, default = 0  mode of replacing two invalid points
//Bit  3: 0        reg_mc_zpix_rp_sel        // unsigned ,    RW, default = 1  zpix rp sel
#define FRC_MC_BLACKBAR_INTER_OFST                 0x3203
//Bit 31:24        reserved
//Bit 23:16        reserved
//Bit 15: 8        reg_mc_blackbar_inter_ver_ofst // unsigned ,    RW, default = 4  bbd inter ofst used in ptb check
//Bit  7: 0        reg_mc_blackbar_inter_hor_ofst // unsigned ,    RW, default = 6  bbd inter ofst used in ptb check
#define FRC_MC_PT_EN                               0x3204
//Bit 31:11        reserved
//Bit 10           reg_mc_pix_replace_oct_en // unsigned ,    RW, default = 1  in mc_interp_core oct: 0: oct = OCC_NONE 1:oct = mv.oct
//Bit  9           reg_mc_pts_rp_en          // unsigned ,    RW, default = 1  enable of replacing the interpolated pixels which point to out of search range
//Bit  8           reg_mc_ptb_rp_en          // unsigned ,    RW, default = 1  enable of replacing the interpolated pixels which point to blackbar
//Bit  7           reg_mc_ptw_rp_en          // unsigned ,    RW, default = 0  enable of replacing the interpolated pixels which point to demo-window
//Bit  6           reg_mc_ptl_rp_en          // unsigned ,    RW, default = 1  enable of replacing the interpolated pixels which point to logo
//Bit  5           reg_mc_dehalo_blender_en  // unsigned ,    RW, default = 1  enable of replacing the interpolated pixels by z data when ptx conflict with oct
//Bit  4           reg_mc_inside_logo_en     // unsigned ,    RW, default = 1  enable of replacing the interpolated pixels which inside logo
//Bit  3           reg_mc_variance_blend_en  // unsigned ,    RW, default = 0  enable of bariance blend en: 0:med3 out; 1:variance blend out
//Bit  2           reg_mc_ptl_rp_oct_mode    // unsigned ,    RW, default = 1  for ptl replace mode when oct happened. 0: use p/c_ptl_yc; 1: use pre/cur_data_level
//Bit  1           reg_mc_pt_data_in_series_en // unsigned ,    RW, default = 1  pt data seri or not
//Bit  0           reg_mc_ptb_rp_bet_inout_single_en // unsigned ,    RW, default = 1  if pix between outbb~innerbb, when one point inner and one point out, choose inner;when double point out, choose both
#define FRC_MC_ME3_PT                              0x3205
//Bit 31:25        reserved
//Bit 24           reg_mc_dbg_med3_outer_en  // unsigned ,    RW, default = 0
//Bit 23           reg_mc_dbg_med3_pt_en     // unsigned ,    RW, default = 0
//Bit 22:20        reg_mc_sel_hvc_mode       // unsigned ,    RW, default = 0  0: all 1:h1v1c1 2:h2v2c2 3:c1 4:c2
//Bit 19:16        reg_mc_pt_flag_sel_mode   // unsigned ,    RW, default = 0  0: ptb 1: pts 2: ptw 3: ptl 4: ptbs 5: ptwl 6:ptbs + ptwl
//Bit 15           reg_mc_ptb_combine_pc_mode // unsigned ,    RW, default = 0
//Bit 14:12        reg_mc_ptb_pc_th          // unsigned ,    RW, default = 0
//Bit 11           reg_mc_pts_combine_pc_mode // unsigned ,    RW, default = 0
//Bit 10: 8        reg_mc_pts_pc_th          // unsigned ,    RW, default = 0
//Bit  7           reg_mc_ptw_combine_pc_mode // unsigned ,    RW, default = 0
//Bit  6: 4        reg_mc_ptw_pc_th          // unsigned ,    RW, default = 0
//Bit  3           reg_mc_ptl_combine_pc_mode // unsigned ,    RW, default = 0
//Bit  2: 0        reg_mc_ptl_pc_th          // unsigned ,    RW, default = 0
#define FRC_MC_VAR_SCHEME                          0x3206
//Bit 31: 0        reserved
#define FRC_MC_PTS_MODE                            0x3207
//Bit 31:12        reserved
//Bit 11            reserved
//Bit 10: 8        reg_mc_pts_num_thmax      // unsigned ,    RW, default = 0  max number of ptbs points
//Bit  7            reserved
//Bit  6: 4        reg_mc_pts_num_thmin      // unsigned ,    RW, default = 0  min number of ptbs points
//Bit  3            reserved
//Bit  2: 0        reg_mc_pts_valid_num      // unsigned ,    RW, default = 3  min number of valid points
#define FRC_MC_PTB_MODE                            0x3208
//Bit 31            reserved
//Bit 30           reg_mc_judge_inner_mode   // unsigned ,    RW, default = 0  0:pix by pix check inner bb  1:blk check inner bb
//Bit 29           reg_mc_ptl_yc_mode        // unsigned ,    RW, default = 0  cal ptl yc mode 0: just luma 1: luma or chrm
//Bit 28           reg_mc_cal_ptb_chrm_mode  // unsigned ,    RW, default = 1  cal ptb chrm mode 0: one by one 1: step by step
//Bit 27           reg_mc_cal_pts_chrm_mode  // unsigned ,    RW, default = 1  cal pts chrm mode 0: one by one 1: step by step
//Bit 26           reg_mc_cal_ptw_chrm_mode  // unsigned ,    RW, default = 0  cal ptw chrm mode 0: one by one 1: step by step
//Bit 25           reg_mc_cal_ptl_chrm_mode  // unsigned ,    RW, default = 0  cal ptl chrm mode 0: one by one 1: step by step
//Bit 24           reg_mc_cal_ptwl_chrm_mode // unsigned ,    RW, default = 0  cal ptwl chrm mode 0: one by one 1: step by step
//Bit 23           reg_mc_double_ptb_spc_prcs_en // unsigned ,    RW, default = 1  0: when go org loop, zp zc, 1: use wp wc
//Bit 22:20        reg_mc_ptb_mode           // unsigned ,    RW, default = 1  ptb mode 0 1 2 0:ofst 1:ofst+cur pix 2:ofst0-no ofst
//Bit 19:17        reserved
//Bit 16           reg_mc_ptb_single_side_mode // unsigned ,    RW, default = 0  debug mode : use med3 value for dbg
//Bit 15            reserved
//Bit 14:12        reg_mc_ptb_num_thmax      // unsigned ,    RW, default = 2  max number of ptbs points
//Bit 11            reserved
//Bit 10: 8        reg_mc_ptb_num_thmin      // unsigned ,    RW, default = 0  min number of ptbs points
//Bit  7            reserved
//Bit  6: 4        reg_mc_ptb_valid_num      // unsigned ,    RW, default = 3  min number of valid points
//Bit  3            reserved
//Bit  2: 0        reg_mc_double_ptb_num_th  // unsigned ,    RW, default = 0  pre_ptbs and cur_ptbs if both more than this th, using z or org value for replace
#define FRC_MC_PTBWL_SETTING                       0x3209
//Bit 31            reserved
//Bit 30:28        reg_mc_ptb_inner_num_thmax // unsigned ,    RW, default = 2  max number of ptb points
//Bit 27            reserved
//Bit 26:24        reg_mc_ptb_outer_num_thmax // unsigned ,    RW, default = 2  max number of ptb points
//Bit 23:22        reg_mc_ptb_inner_num_thmin // unsigned ,    RW, default = 0  min number of ptb points
//Bit 21:20        reg_mc_ptb_outer_num_thmin // unsigned ,    RW, default = 0  min number of ptb points
//Bit 19            reserved
//Bit 18:16        reg_mc_ptw_num_thmax      // unsigned ,    RW, default = 0  max number of ptw points
//Bit 15            reserved
//Bit 14:12        reg_mc_ptw_num_thmin      // unsigned ,    RW, default = 0  min number of ptw points
//Bit 11            reserved
//Bit 10: 8        reg_mc_ptw_valid_num      // unsigned ,    RW, default = 3  min number of valid points
//Bit  7: 2        reserved
//Bit  1           reg_mc_ptl_post           // unsigned ,    RW, default = 0  ptl me blk logo invalid check mode
//Bit  0           reg_mc_ptl_3x3_or         // unsigned ,    RW, default = 0  ptl me blk logo invalid check mode
#define FRC_MC_MED3                                0x320a
//Bit 31:26        reserved
//Bit 25           reg_mc_med_smed_sel       // unsigned ,    RW, default = 1  select special med3 mode. 0: just use luma condition for cb/cr; 1: use corresponding condition for y/cb/cr.
//Bit 24           reg_mc_wmed_sel           // unsigned ,    RW, default = 0  mode of choosing pc_avg in variance_blend: 0:blend via phase; 1:(iwp+iwc)/2
//Bit 23:21        reg_mc_zmed_sel           // unsigned ,    RW, default = 1  mode of choosing z data in med_out: 0:(izp+izc)/2; 1:blend via phase; 2:izp; 3:izc; 4:(phase less than 63)izp:izc
//Bit 20           reg_mc_med_mode_sel       // unsigned ,    RW, default = 0  select the med3_out or special_med as the med_out: 0:choose med3_out; 1:choose special_med
//Bit 19:16        reg_mc_med_debug_sel      // unsigned ,    RW, default = 0  0: open med3 5:close med3
//Bit 15:12        reg_mc_smed_alph          // unsigned ,    RW, default = 6  special med3 setting
//Bit 11: 0        reg_mc_use_zdata_phase_min // unsigned ,    RW, default = 0  control the output phase which use original frame
#define FRC_MC_VAR_SETTING1                        0x320b
//Bit 31:24        reserved
//Bit 23:21        reg_mc_med_alph_sel       // unsigned ,    RW, default = 3  0: med3_alpha 1:med3_alpha_new 2: MAX 3: avg 4:plus
//Bit 20           reg_mc_var_chrm_disable   // unsigned ,    RW, default = 1  var blender chrm do or not
//Bit 19:17        reg_mc_zvar_sel           // unsigned ,    RW, default = 1  mode of choosing z data in variance_blend: 0:(izp+izc)/2; 1:blend via phase; 2:izp; 3:izc; 4:(phase less than63)?izp:izc
//Bit 16           reg_mc_var_on_en          // unsigned ,    RW, default = 1  var en
//Bit 15: 8        reg_mc_var_z_th           // unsigned ,    RW, default = 20  diff th in var blender
//Bit  7: 0        reg_mc_var_w_th           // unsigned ,    RW, default = 1  diff th in var blender
#define FRC_MC_VAR_DIF_A                           0x320c
//Bit 31:28        reserved
//Bit 27:24        reg_mc_var_dif_a0         // unsigned ,    RW, default = 3  determine med3 alpha
//Bit 23:20        reserved
//Bit 19:16        reg_mc_var_dif_a1         // unsigned ,    RW, default = 7  determine med3 alpha
//Bit 15:12        reserved
//Bit 11: 8        reg_mc_var_dif_a2         // unsigned ,    RW, default = 10  determine med3 alpha
//Bit  7: 4        reserved
//Bit  3: 0        reg_mc_var_dif_a3         // unsigned ,    RW, default = 12  determine med3 alpha
#define FRC_MC_VAR_DIF_TH                          0x320d
//Bit 31:24        reg_mc_var_dif_th0        // unsigned ,    RW, default = 8  determine med3 alpha new
//Bit 23:16        reg_mc_var_dif_th1        // unsigned ,    RW, default = 10  determine med3 alpha new
//Bit 15: 8        reg_mc_var_dif_th2        // unsigned ,    RW, default = 18  determine med3 alpha new
//Bit  7: 0        reg_mc_var_dif_th3        // unsigned ,    RW, default = 20  determine med3 alpha new
#define FRC_MC_LOGO_POST_BLENDER                   0x320e
//Bit 31:29        reserved
//Bit 28:27        reg_mc_double_ptl_logo_post_blender_win // unsigned ,    RW, default = 0  window size for post blender. 0:v=2,h=3 5*7; 1:v=3,h=5 7*11; 2:v=4,h=5 9*11; 3:v=4,h=7 9*15;
//Bit 26           reg_mc_double_ptl_logo_post_blender_en // unsigned ,    RW, default = 1  0:close, 1:open
//Bit 25:24        reg_mc_pixlogo_lv_div     // unsigned ,    RW, default = 0  used in logo post blender, set to 0 for 5x7 window by default.
//Bit 23:20        reg_mc_z_to_logo_sel      // unsigned ,    RW, default = 1  mode of choosing z_to_logo in logo post blender: 0:(izp+izc)/2; 1:blend via phase; 2:izp; 3:izc; 4:med(pc_avg,izp,izc)
//Bit 19:16        reg_mc_z_jud_sel          // unsigned ,    RW, default = 2  mode of choosing z_jud in logo post blender: 0:(izp+izc)/2; 1:blend via phase; 2:p 3:c 4:med(pc_avg,izp,izc)
//Bit 15:12        reg_mc_glb_dejudder       // unsigned ,    RW, default = 0  weight for logo_blender with z_jud; the bigger then z_jud takes more part
//Bit 11: 8        reg_mc_pixlogo_lv_gain    // unsigned ,    RW, default = 8  set to 8 for 5x7 window by default.
//Bit  7: 0        reserved
#define FRC_MC_REGION_FALLBACK                     0x320f
//Bit 31:29        reserved
//Bit 28:24        reg_mc_region_fb_div      // unsigned ,    RW, default = 16  div, max = 18;
//Bit 23:16        reg_mc_region_fb_xscale   // unsigned ,    RW, default = 1  div
//Bit 15: 8        reg_mc_region_fb_yscale   // unsigned ,    RW, default = 1  div
//Bit  7: 4        reg_mc_region_fb_bitwidth // unsigned ,    RW, default = 4
//Bit  3: 1        reserved
//Bit  0           reg_mc_region_fb_en       // unsigned ,    RW, default = 0  0: region fallback off 1: region fallback on
#define FRC_MC_REGION_COEF1_0                      0x3210
//Bit 31:24        reg_mc_region_fallback_coef_7_0 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_6_0 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_5_0 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_4_0 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF1_1                      0x3211
//Bit 31:24        reg_mc_region_fallback_coef_7_1 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_6_1 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_5_1 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_4_1 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF1_2                      0x3212
//Bit 31:24        reg_mc_region_fallback_coef_7_2 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_6_2 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_5_2 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_4_2 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF1_3                      0x3213
//Bit 31:24        reg_mc_region_fallback_coef_7_3 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_6_3 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_5_3 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_4_3 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF1_4                      0x3214
//Bit 31:24        reg_mc_region_fallback_coef_7_4 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_6_4 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_5_4 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_4_4 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF1_5                      0x3215
//Bit 31:24        reg_mc_region_fallback_coef_7_5 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_6_5 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_5_5 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_4_5 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF1_6                      0x3216
//Bit 31:24        reg_mc_region_fallback_coef_7_6 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_6_6 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_5_6 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_4_6 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF1_7                      0x3217
//Bit 31:24        reg_mc_region_fallback_coef_7_7 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_6_7 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_5_7 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_4_7 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF1_8                      0x3218
//Bit 31:24        reg_mc_region_fallback_coef_7_8 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_6_8 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_5_8 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_4_8 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF1_9                      0x3219
//Bit 31:24        reg_mc_region_fallback_coef_7_9 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_6_9 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_5_9 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_4_9 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF1_10                     0x321a
//Bit 31:24        reg_mc_region_fallback_coef_7_10 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_6_10 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_5_10 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_4_10 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF1_11                     0x321b
//Bit 31:24        reg_mc_region_fallback_coef_7_11 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_6_11 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_5_11 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_4_11 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF2_0                      0x321c
//Bit 31:24        reg_mc_region_fallback_coef_3_0 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_2_0 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_1_0 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_0_0 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF2_1                      0x321d
//Bit 31:24        reg_mc_region_fallback_coef_3_1 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_2_1 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_1_1 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_0_1 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF2_2                      0x321e
//Bit 31:24        reg_mc_region_fallback_coef_3_2 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_2_2 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_1_2 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_0_2 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF2_3                      0x321f
//Bit 31:24        reg_mc_region_fallback_coef_3_3 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_2_3 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_1_3 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_0_3 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF2_4                      0x3220
//Bit 31:24        reg_mc_region_fallback_coef_3_4 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_2_4 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_1_4 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_0_4 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF2_5                      0x3221
//Bit 31:24        reg_mc_region_fallback_coef_3_5 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_2_5 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_1_5 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_0_5 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF2_6                      0x3222
//Bit 31:24        reg_mc_region_fallback_coef_3_6 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_2_6 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_1_6 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_0_6 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF2_7                      0x3223
//Bit 31:24        reg_mc_region_fallback_coef_3_7 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_2_7 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_1_7 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_0_7 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF2_8                      0x3224
//Bit 31:24        reg_mc_region_fallback_coef_3_8 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_2_8 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_1_8 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_0_8 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF2_9                      0x3225
//Bit 31:24        reg_mc_region_fallback_coef_3_9 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_2_9 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_1_9 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_0_9 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF2_10                     0x3226
//Bit 31:24        reg_mc_region_fallback_coef_3_10 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_2_10 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_1_10 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_0_10 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_COEF2_11                     0x3227
//Bit 31:24        reg_mc_region_fallback_coef_3_11 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 23:16        reg_mc_region_fallback_coef_2_11 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit 15: 8        reg_mc_region_fallback_coef_1_11 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
//Bit  7: 0        reg_mc_region_fallback_coef_0_11 // unsigned ,    RW, default = 0  region_fallback_coef 8x12
#define FRC_MC_REGION_FALLBACK_SIZE                0x3228
//Bit 31:28        reg_mc_region_xnum        // unsigned ,    RW, default = 4  region num vertical
//Bit 27:16        reg_mc_region_xsize       // unsigned ,    RW, default = 0  region xsize
//Bit 15:12        reg_mc_region_ynum        // unsigned ,    RW, default = 3  region num horizon
//Bit 11: 0        reg_mc_region_ysize       // unsigned ,    RW, default = 0  region ysize
#define FRC_MC_SEVEN_FLAG_POSI_AND_NUM11_NUM12     0x3229
//Bit 31:28        reg_mc_7_flag_x_posi1     // unsigned ,    RW, default = 0  the first 1x8 seven seg flag posi x direction setting
//Bit 27:24        reg_mc_7_flag_y_posi1     // unsigned ,    RW, default = 0  the first 1x8 seven seg flag posi y direction setting
//Bit 23:20        reg_mc_7_flag_x_posi2     // unsigned ,    RW, default = 0  the second 1x8 seven seg flag posi x direction setting
//Bit 19:16        reg_mc_7_flag_y_posi2     // unsigned ,    RW, default = 1  the second 1x8 seven seg flag posi y direction setting
//Bit 15           reg_mc_7_flag1_debug_en1  // unsigned ,    RW, default = 0  flag en
//Bit 14:12        reg_mc_7_flag1_color1_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 11: 8        reg_mc_7_flag1_num1       // unsigned ,    RW, default = 0  flag num
//Bit  7           reg_mc_7_flag1_debug_en2  // unsigned ,    RW, default = 0  flag en
//Bit  6: 4        reg_mc_7_flag1_color2_mode // unsigned ,    RW, default = 0  flag color mode
//Bit  3: 0        reg_mc_7_flag1_num2       // unsigned ,    RW, default = 0  flag num
#define FRC_MC_SEVEN_FLAG_NUM13_NUM14_NUM15_NUM16  0x322a
//Bit 31           reg_mc_7_flag1_debug_en3  // unsigned ,    RW, default = 0  flag en
//Bit 30:28        reg_mc_7_flag1_color3_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 27:24        reg_mc_7_flag1_num3       // unsigned ,    RW, default = 0  flag num
//Bit 23           reg_mc_7_flag1_debug_en4  // unsigned ,    RW, default = 0  flag en
//Bit 22:20        reg_mc_7_flag1_color4_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 19:16        reg_mc_7_flag1_num4       // unsigned ,    RW, default = 0  flag num
//Bit 15           reg_mc_7_flag1_debug_en5  // unsigned ,    RW, default = 0  flag en
//Bit 14:12        reg_mc_7_flag1_color5_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 11: 8        reg_mc_7_flag1_num5       // unsigned ,    RW, default = 0  flag num
//Bit  7           reg_mc_7_flag1_debug_en6  // unsigned ,    RW, default = 0  flag en
//Bit  6: 4        reg_mc_7_flag1_color6_mode // unsigned ,    RW, default = 0  flag color mode
//Bit  3: 0        reg_mc_7_flag1_num6       // unsigned ,    RW, default = 0  flag num
#define FRC_MC_SEVEN_FLAG_NUM17_NUM18_NUM21_NUM22  0x322b
//Bit 31           reg_mc_7_flag1_debug_en7  // unsigned ,    RW, default = 0  flag en
//Bit 30:28        reg_mc_7_flag1_color7_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 27:24        reg_mc_7_flag1_num7       // unsigned ,    RW, default = 0  flag num
//Bit 23           reg_mc_7_flag1_debug_en8  // unsigned ,    RW, default = 0  flag en
//Bit 22:20        reg_mc_7_flag1_color8_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 19:16        reg_mc_7_flag1_num8       // unsigned ,    RW, default = 0  flag num
//Bit 15           reg_mc_7_flag2_debug_en1  // unsigned ,    RW, default = 0  flag en
//Bit 14:12        reg_mc_7_flag2_color1_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 11: 8        reg_mc_7_flag2_num1       // unsigned ,    RW, default = 0  flag num
//Bit  7           reg_mc_7_flag2_debug_en2  // unsigned ,    RW, default = 0  flag en
//Bit  6: 4        reg_mc_7_flag2_color2_mode // unsigned ,    RW, default = 0  flag color mode
//Bit  3: 0        reg_mc_7_flag2_num2       // unsigned ,    RW, default = 0  flag num
#define FRC_MC_SEVEN_FLAG_NUM23_NUM24_NUM25_NUM26  0x322c
//Bit 31           reg_mc_7_flag2_debug_en3  // unsigned ,    RW, default = 0  flag en
//Bit 30:28        reg_mc_7_flag2_color3_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 27:24        reg_mc_7_flag2_num3       // unsigned ,    RW, default = 0  flag num
//Bit 23           reg_mc_7_flag2_debug_en4  // unsigned ,    RW, default = 0  flag en
//Bit 22:20        reg_mc_7_flag2_color4_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 19:16        reg_mc_7_flag2_num4       // unsigned ,    RW, default = 0  flag num
//Bit 15           reg_mc_7_flag2_debug_en5  // unsigned ,    RW, default = 0  flag en
//Bit 14:12        reg_mc_7_flag2_color5_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 11: 8        reg_mc_7_flag2_num5       // unsigned ,    RW, default = 0  flag num
//Bit  7           reg_mc_7_flag2_debug_en6  // unsigned ,    RW, default = 0  flag en
//Bit  6: 4        reg_mc_7_flag2_color6_mode // unsigned ,    RW, default = 0  flag color mode
//Bit  3: 0        reg_mc_7_flag2_num6       // unsigned ,    RW, default = 0  flag num
#define FRC_MC_SEVEN_FLAG_NUM27_NUM28              0x322d
//Bit 31           reg_mc_7_flag2_debug_en7  // unsigned ,    RW, default = 0  flag en
//Bit 30:28        reg_mc_7_flag2_color7_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 27:24        reg_mc_7_flag2_num7       // unsigned ,    RW, default = 0  flag num
//Bit 23           reg_mc_7_flag2_debug_en8  // unsigned ,    RW, default = 0  flag en
//Bit 22:20        reg_mc_7_flag2_color8_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 19:16        reg_mc_7_flag2_num8       // unsigned ,    RW, default = 0  flag num
//Bit 15: 0        reserved
#define FRC_MC_SEVEN_FLAG_POSI_AND_NUM31_NUM32     0x322e
//Bit 31:28        reg_mc_7_flag_x_posi3     // unsigned ,    RW, default = 0  the first 1x8 seven seg flag posi x direction setting
//Bit 27:24        reg_mc_7_flag_y_posi3     // unsigned ,    RW, default = 2  the first 1x8 seven seg flag posi y direction setting
//Bit 23:16        reserved
//Bit 15           reg_mc_7_flag3_debug_en1  // unsigned ,    RW, default = 0  flag en
//Bit 14:12        reg_mc_7_flag3_color1_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 11: 8        reg_mc_7_flag3_num1       // unsigned ,    RW, default = 0  flag num
//Bit  7           reg_mc_7_flag3_debug_en2  // unsigned ,    RW, default = 0  flag en
//Bit  6: 4        reg_mc_7_flag3_color2_mode // unsigned ,    RW, default = 0  flag color mode
//Bit  3: 0        reg_mc_7_flag3_num2       // unsigned ,    RW, default = 0  flag num
#define FRC_MC_SEVEN_FLAG_NUM33_NUM34_NUM35_NUM36  0x322f
//Bit 31           reg_mc_7_flag3_debug_en3  // unsigned ,    RW, default = 0  flag en
//Bit 30:28        reg_mc_7_flag3_color3_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 27:24        reg_mc_7_flag3_num3       // unsigned ,    RW, default = 0  flag num
//Bit 23           reg_mc_7_flag3_debug_en4  // unsigned ,    RW, default = 0  flag en
//Bit 22:20        reg_mc_7_flag3_color4_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 19:16        reg_mc_7_flag3_num4       // unsigned ,    RW, default = 0  flag num
//Bit 15           reg_mc_7_flag3_debug_en5  // unsigned ,    RW, default = 0  flag en
//Bit 14:12        reg_mc_7_flag3_color5_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 11: 8        reg_mc_7_flag3_num5       // unsigned ,    RW, default = 0  flag num
//Bit  7           reg_mc_7_flag3_debug_en6  // unsigned ,    RW, default = 0  flag en
//Bit  6: 4        reg_mc_7_flag3_color6_mode // unsigned ,    RW, default = 0  flag color mode
//Bit  3: 0        reg_mc_7_flag3_num6       // unsigned ,    RW, default = 0  flag num
#define FRC_MC_SEVEN_FLAG_NUM37_NUM38              0x3230
//Bit 31           reg_mc_7_flag3_debug_en7  // unsigned ,    RW, default = 0  flag en
//Bit 30:28        reg_mc_7_flag3_color7_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 27:24        reg_mc_7_flag3_num7       // unsigned ,    RW, default = 0  flag num
//Bit 23           reg_mc_7_flag3_debug_en8  // unsigned ,    RW, default = 0  flag en
//Bit 22:20        reg_mc_7_flag3_color8_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 19:16        reg_mc_7_flag3_num8       // unsigned ,    RW, default = 0  flag num
//Bit 15: 0        reserved
#define FRC_MC_SEVEN_FLAG_POSI_AND_NUM41_NUM42     0x3231
//Bit 31:28        reg_mc_7_flag_x_posi4     // unsigned ,    RW, default = 0  the first 1x8 seven seg flag posi x direction setting
//Bit 27:24        reg_mc_7_flag_y_posi4     // unsigned ,    RW, default = 3  the first 1x8 seven seg flag posi y direction setting
//Bit 23:16        reserved
//Bit 15           reg_mc_7_flag4_debug_en1  // unsigned ,    RW, default = 0  flag en
//Bit 14:12        reg_mc_7_flag4_color1_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 11: 8        reg_mc_7_flag4_num1       // unsigned ,    RW, default = 0  flag num
//Bit  7           reg_mc_7_flag4_debug_en2  // unsigned ,    RW, default = 0  flag en
//Bit  6: 4        reg_mc_7_flag4_color2_mode // unsigned ,    RW, default = 0  flag color mode
//Bit  3: 0        reg_mc_7_flag4_num2       // unsigned ,    RW, default = 0  flag num
#define FRC_MC_SEVEN_FLAG_NUM43_NUM44_NUM45_NUM46  0x3232
//Bit 31           reg_mc_7_flag4_debug_en3  // unsigned ,    RW, default = 0  flag en
//Bit 30:28        reg_mc_7_flag4_color3_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 27:24        reg_mc_7_flag4_num3       // unsigned ,    RW, default = 0  flag num
//Bit 23           reg_mc_7_flag4_debug_en4  // unsigned ,    RW, default = 0  flag en
//Bit 22:20        reg_mc_7_flag4_color4_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 19:16        reg_mc_7_flag4_num4       // unsigned ,    RW, default = 0  flag num
//Bit 15           reg_mc_7_flag4_debug_en5  // unsigned ,    RW, default = 0  flag en
//Bit 14:12        reg_mc_7_flag4_color5_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 11: 8        reg_mc_7_flag4_num5       // unsigned ,    RW, default = 0  flag num
//Bit  7           reg_mc_7_flag4_debug_en6  // unsigned ,    RW, default = 0  flag en
//Bit  6: 4        reg_mc_7_flag4_color6_mode // unsigned ,    RW, default = 0  flag color mode
//Bit  3: 0        reg_mc_7_flag4_num6       // unsigned ,    RW, default = 0  flag num
#define FRC_MC_SEVEN_FLAG_NUM47_NUM48              0x3233
//Bit 31           reg_mc_7_flag4_debug_en7  // unsigned ,    RW, default = 0  flag en
//Bit 30:28        reg_mc_7_flag4_color7_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 27:24        reg_mc_7_flag4_num7       // unsigned ,    RW, default = 0  flag num
//Bit 23           reg_mc_7_flag4_debug_en8  // unsigned ,    RW, default = 0  flag en
//Bit 22:20        reg_mc_7_flag4_color8_mode // unsigned ,    RW, default = 0  flag color mode
//Bit 19:16        reg_mc_7_flag4_num8       // unsigned ,    RW, default = 0  flag num
//Bit 15:14        reserved
//Bit 13: 8        reg_mc_7_flag_seg_len     // unsigned ,    RW, default = 16  7 flag seg length
//Bit  7: 6        reserved
//Bit  5: 0        reg_mc_7_flag_line_width  // unsigned ,    RW, default = 4  7 flag line width
#define FRC_MC_DBG_EN                              0x3234
//Bit 31:15        reserved
//Bit 14           reg_mc_dbg_print_en       // unsigned ,    RW, default = 0  for dbg print info
//Bit 13           reg_mc_new_ptl_print_img_en // unsigned ,    RW, default = 0  debug print out logo ptl cur and pre img, img after datablur;       dft 0
//Bit 12           reg_mc_debug_ptb_false_color // unsigned ,    RW, default = 0  reg_mc_debug_ptb_false_color
//Bit 11           reg_mc_debug_pts_false_color // unsigned ,    RW, default = 0  reg_mc_debug_pts_false_color
//Bit 10           reg_mc_debug_ptl_false_color // unsigned ,    RW, default = 0  reg_mc_debug_ptl_false_color
//Bit  9           reg_mc_debug_region_fb_div_false_color_en // unsigned ,    RW, default = 0  reg_mc_debug_region_fb_div_false_color_en
//Bit  8           reg_mc_debug_region_fb_coef_false_color_en // unsigned ,    RW, default = 0  reg_mc_debug_region_fb_coef_false_color_en
//Bit  7           reg_mc_debug_logo_all     // unsigned ,    RW, default = 0  tmpt used for debug (logo)
//Bit  6           reg_mc_debug_output_all   // unsigned ,    RW, default = 0  tmpt used for debug (except logo)
//Bit  5           reg_mc_debug_logo_show_blksize_en // unsigned ,    RW, default = 0  enable of showing blksize along with logo false color
//Bit  4           reg_mc_debug_pixlogo_false_color_en // unsigned ,    RW, default = 0  enable of showing ip pixel logo by using false color:
//Bit  3           reg_mc_debug_blklogo_false_color_en // unsigned ,    RW, default = 0  enable of showing me block logo by using false color:
//Bit  2           reg_mc_debug_dehalo_false_color_en // unsigned ,    RW, default = 0  mode of showing cover/uncover aver by using false color: 0:no false color; 1:show mv_c
//Bit  1           reg_mc_debug_blackbar_false_color_en // unsigned ,    RW, default = 0  enable of showing blackbar by using false color:
//Bit  0           reg_mc_debug_variance_blend_false_color_en // unsigned ,    RW, default = 0  variance_blend_false_color_en
#define FRC_MC_DEBUG_EN                            0x3235
//Bit 31:20        reserved
//Bit 19           reg_mc_debug_mv_phs_en    // unsigned ,    RW, default = 0  debug mode to display phs(before dehalo) mv on U and V channels 0:no dump 1: overlay pc_phs on uv
//Bit 18           reg_mc_debug_retimer_false_color_en // unsigned ,    RW, default = 0  debug mode to display retimer false color
//Bit 17           reg_mc_debug_vp_dehalo_false_color_en // unsigned ,    RW, default = 0  debug mode to display vp dehalo false color
//Bit 16           reg_mc_debug_mv_pht_en    // unsigned ,    RW, default = 0  debug mode to display pht(after dehalo) mv on U and V channels: 0:no dump 1 mv_c, 2 mv_h, 3, mv_v
//Bit 15:13        reg_mc_debug_mv_mode_scl  // unsigned ,    RW, default = 0  sel of show HSB, LSB of mv, 0: dont shift 1: show HSB rit shft1 2:show LSB lft shft1 3:show HSB rit shft2 2:show LSB lft shft2
//Bit 12           reg_mc_debug_mv_dbg_enable // unsigned ,    RW, default = 0  enable of output debug mv overlay on picture or not.
//Bit 11:10        reg_mc_debug_mv_blk_tag_mode // unsigned ,    RW, default = 1  enable of tagging block by change color or top-left corner pixels
//Bit  9           reg_mc_debug_mv_arrow_overlay // unsigned ,    RW, default = 0  enable of overlay arrow to show the mv
//Bit  8           reg_mc_debug_mv_mv_overlay_uv // unsigned ,    RW, default = 0  overlay mvx and mvy on u/v
//Bit  7: 6        reg_mc_debug_mv_occl_tag_mode // unsigned ,    RW, default = 2  tag mode of occ region:   0: no tag; 1: tag by replace whole block color; 2: tag by color the block boundary;
//Bit  5           reg_mc_debug_mv_mv_replace // unsigned ,    RW, default = 1  debug mode of mv for cp replaced by cn, or pc replaced by pb; 0: no replace, 1: replace by mv_bk
//Bit  4: 3        reg_mc_debug_mv_scal      // unsigned ,    RW, default = 1  ratio to scale up the image for the display mv, the smaller of alpha, the more diff_mv come from diff_mvx
//Bit  2           reg_mc_debug_pc_cp_uni_en // unsigned ,    RW, default = 0  debug mode to display cp and cp img
//Bit  1           reg_mc_obmc_uni_en        // unsigned ,    RW, default = 0  debug mode obmc en
//Bit  0           reg_mc_dbg_ptb_use_zdata_en // unsigned ,    RW, default = 1  debug mode : when ptb, use zdata or not.
#define FRC_MC_DBG_H8V4_SEL_EN                     0x3236
//Bit 31: 0        reserved
#define FRC_MC_REG_OFRM_IDX_DELETE                 0x3237
//Bit 31: 0        reserved
#define FRC_MC_PRE_INSIDE_MCLOGO_CNT               0x3238
//Bit 31: 0        ro_mc_pre_inside_mclogo_cnt // unsigned ,    RO, default = 0
#define FRC_MC_CUR_INSIDE_MCLOGO_CNT               0x3239
//Bit 31: 0        ro_mc_cur_inside_mclogo_cnt // unsigned ,    RO, default = 0
#define FRC_MC_PRE_INSIDE_IPLOGO_CNT               0x323a
//Bit 31: 0        ro_mc_pre_inside_iplogo_cnt // unsigned ,    RO, default = 0
#define FRC_MC_CUR_INSIDE_IPLOGO_CNT               0x323b
//Bit 31: 0        ro_mc_cur_inside_iplogo_cnt // unsigned ,    RO, default = 0
#define FRC_MC_PRE_INSIDE_MELOGO_CNT               0x323c
//Bit 31: 0        ro_mc_pre_inside_melogo_cnt // unsigned ,    RO, default = 0
#define FRC_MC_CUR_INSIDE_MELOGO_CNT               0x323d
//Bit 31: 0        ro_mc_cur_inside_melogo_cnt // unsigned ,    RO, default = 0
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_mc_regs2.h
//
// -----------------------------------------------
// REG_BASE:  FRC_MC_MIF0_APB_BASE = 0x34
// -----------------------------------------------
//
// Reading file:  ./frc_inc/frc_mc_mif.h
//
// synopsys translate_off
// synopsys translate_on
#define MC_LOGO0_RMIF_CTRL0                        0x3400
#define MC_LOGO0_RMIF_CTRL1                        0x3401
#define MC_LOGO0_RMIF_STAT                         0x3402
#define MC_LOGO1_RMIF_CTRL0                        0x3404
#define MC_LOGO1_RMIF_CTRL1                        0x3405
#define MC_LOGO1_RMIF_STAT                         0x3406
#define MC_MV_RMIF_CTRL0                           0x3408
#define MC_MV_RMIF_CTRL1                           0x3409
#define MC_MV_RMIF_RO_STAT                         0x340a
#define MC_SW0_LUMA_BADDR                          0x3410
#define MC_SW0_CHRM_BADDR                          0x3418
#define MC_SW1_LUMA_BADDR                          0x3420
#define MC_SW1_CHRM_BADDR                          0x3428
#define MC_AXIRD_ARBX8_BADDR                       0x3430
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/frc_mc_mif.h
//
// -----------------------------------------------
// REG_BASE:  FRC_MC_MIF1_APB_BASE = 0x35
// -----------------------------------------------
//`include "loss_dec_mc_luma_cur.h"
// -----------------------------------------------
// REG_BASE:  FRC_MC_MIF2_APB_BASE = 0x36
// -----------------------------------------------
//`include "loss_dec_mc_chrm_cur.h"
// -----------------------------------------------
// REG_BASE:  FRC_MC_MIF3_APB_BASE = 0x37
// -----------------------------------------------
//`include "loss_dec_mc_luma_pre.h"
// -----------------------------------------------
// REG_BASE:  FRC_MC_MIF4_APB_BASE = 0x38
// -----------------------------------------------
//`include "loss_dec_mc_chrm_pre.h"
// -----------------------------------------------
// REG_BASE:  FRC_MC_HW_APB_BASE = 0x39
// -----------------------------------------------
//
// Reading file:  ./frc_inc/mc_hw_reg.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_MC_MIF_INT_FLAG                        0x3900
//Bit 31:12      reserved
//Bit 11: 4      ro_loss_frm_int                 // unsigned ,    RO, default = 0
//Bit  3: 0      ro_rdmif_frm_int                 // unsigned ,    RO, default = 0
#define FRC_MC_MVRD_CTRL                           0x3901
//Bit 31:9       reserved
//Bit 8          reg_mc_mv_in_sel                 // unsigned ,    RW, default = 1, 1:mv from ddr 0:mv from mevp ports
//Bit 7 :1       reserved
//Bit 0          reg_mvrd_mode                    // unsigned ,    RW, default = 0, only active when reg_mc_mv_in_sel == 1, 1:always read mv from ddr 0:ead mv when mvwr_cnt > mvrd_cnt
#define FRC_MC_MVRD_CLR                            0x3902
//Bit 31:4       reserved
//Bit 3 :0       pls_mvrd_clr                     // unsigned ,    RW, default = 0, clr mvrd/mvwr phs&cnt
#define FRC_MC_MIF_CTRL                            0x3903
//Bit 31: 2      reserved
//Bit  1: 0      reg_chrm_cross_mode              // unsigned ,    RW, default = 3, 2'b00  pre and cur chrm mif output {cb,cr}, 2'b11 pre and cur chrm mif output {cr,cb}
#define FRC_MC_SW_RESETS                           0x3904
//Bit 31:16      reserved
//Bit 15: 0      reg_mc_sw_resets                 // unsigned ,    RW, default = 0,
#define FRC_MC_LOSS_SLICE_SEC                      0x3905
//Bit 31:1       reserved
//Bit 0          reg_mc_loss_slice_sec        // unsigned , RW, default = 0,1:same as lossy-body 0:non_security
#define FRC_MC_SCAN_REG                            0x3910
//Bit 31:1       reserved
//Bit 0          reg_scan_reg          // unsigned ,    RW,default = 0,
#define FRC_MC_CRC_CHECK_FRM                       0x3980
//Bit 31: 6      reserved
//Bit  5: 0      reg_crc_check_frm                // unsigned ,    RW, default = 0, mc CRC frm num
#define FRC_MC_CRC_SUM                             0x3981
//Bit 31: 0      ro_mc_crc_sum                    // unsigned ,    RO, default = 0, mc dout CRC
#define FRC_MC_TOP_GCLK                            0x3985
//Bit 31:30       reserved
//Bit 29:16       reg_mc_gclk_intf                // unsigned ,    RW, default = 14'h0   reg_mc_intf_gclk_ctrl
//Bit 15: 8       reserved
//Bit  7: 0       reg_mc_gclk_top                 // unsigned ,    RW, default = 10'h0   reg_mc_gclk_top
#define FRC_MC_PROC_GCLK                           0x3986
//Bit 31: 0       reg_mc_proc_gclk_ctrl           // unsigned ,    RW, default = 0   reg_mc_proc_gclk_ctrl
#define FRC_MC_LBUF_CTRL                           0x3987
//Bit 31:27       reserved
//Bit 26:16       reg_mc_luma_phs0_sw_vsize       // unsigned ,    RW, default = 32 reg_mc_luma_phs0_sw_vsize
//Bit 15          reserved
//Bit 14: 4       reg_mc_chrm_phs0_sw_vsize       // unsigned ,    RW, default = 20 reg_mc_chrm_phs0_sw_vsize
//Bit  3: 0       reserved
#define FRC_MC_PRB_CTRL0                           0x3988
//Bit 31:30         reserved
//Bit 29:0          reg_mc_probe_pix          // unsigned ,    RW, default = 32'h40080200, {R,G,B} / {Y,U,V}
#define FRC_MC_PRB_CTRL1                           0x3989
//Bit 31            reserved
//Bit 30            reg_mc_probe_en           // unsigned ,    RW, default = 0    reg_mc_probe_en
//Bit 29            reg_mc_probe_en_csc       // unsigned ,    RW, default = 0    reg_mc_probe_en_csc
//Bit 28:16         reg_mc_probe_pt_y         // unsigned ,    RW, default = 100  reg_mc_probe_pt_y
//Bit 15:13         reserved
//Bit 12:0          reg_mc_probe_pt_x         // unsigned ,    RW, default = 100  reg_mc_probe_pt_x
#define FRC_MC_DBG_CTRL0                           0x398a
//Bit 31:30         reserved
//Bit 29:0          reg_mc_dbg_data           // unsigned ,    RW, default = 0  reg_mc_dbg_data
#define FRC_MC_DBG_CTRL1                           0x398b
//Bit 31:11         reserved
//Bit 10:8          reg_dbg_src_sel           // unsigned ,    RW, default = 0  reg_dbg_src_sel
//Bit  7:0          reg_mc_dbg_ctrl           // unsigned ,    RW, default = 0  reg_mc_dbg_ctrl
#define FRC_MC_HW_CTRL0                            0x398c
//Bit 31:22         reserved
//Bit 21            reg_mc_undone_clr         // unsigned ,    RW, default = 0
//Bit 20            reg_bypass_mc_core_en     // unsigned ,    RW, default = 0
//Bit 19:5          reserved
//Bit 4             reg_olap_mode             // unsigned ,    RW, default = 1
//Bit 3             reg_mc_lp_mode            // unsigned ,    RW, default = 0
//Bit 2             reg_mcp_byp_en            // unsigned ,    RW, default = 0
//Bit 1             reg_mc_byp_ctrl           // unsigned ,    RW, default = 0
//Bit 0             reg_mc_bypass_en          // unsigned ,    RW, default = 0
#define FRC_MC_DIN_FORCE_CTRL0                     0x398d
//Bit 31:30         reserved
//Bit 29            reg_mc_din_force_en        // unsigned ,   RW, default = 0  reg_mc_din_force_en
//Bit 28:27         reg_mc_din_force_pc_sel    // unsigned ,   RW, default = 0  reg_mc_din_force_pc_sel
//Bit 26            reg_mc_din_force_hv_sel    // unsigned ,   RW, default = 0  reg_mc_din_force_hv_sel
//Bit 25:24         reg_mc_din_force_cpnt      // unsigned ,   RW, default = 0  reg_mc_din_force_cpnt
//Bit 23:17         reserved
//Bit 16            reg_mc_din_force_l         // unsigned ,   RW, default = 1  reg_mc_din_force_l
//Bit 15:10         reserved
//Bit 9:0           reg_mc_din_force_y         // unsigned ,   RW, default = 1023  reg_mc_din_force_y
#define FRC_MC_DIN_FORCE_CTRL1                     0x398e
//Bit 31:26         reserved
//Bit 25:16         reg_mc_din_force_cr         // unsigned ,   RW, default = 1023  reg_mc_din_force_cr
//Bit 15:10         reserved
//Bit 9:0           reg_mc_din_force_cb         // unsigned ,   RW, default = 1023  reg_mc_din_force_cb
#define FRC_MC_DIN_FROCE_CTRL2                     0x398f
//Bit 31:29         reserved
//Bit 28:16         reg_mc_din_force_hcnt        // unsigned ,   RW, default = 0   reg_mc_din_force_hcnt
//Bit 15:13         reserved
//Bit 12:0          reg_mc_din_force_vcnt        // unsigned ,   RW, default = 0   reg_mc_din_force_vcnt
#define FRC_MC_HW_CTRL1                            0x3990
//Bit 31:25         reserved
//Bit 24            reg_debug_vofst_mfy_show_en  // unsigned ,    RW, default = 0  enable dynamic search range false color
//Bit 23:22         reserved
//Bit 21:20         reg_debug_vofst_mfy_sel      // unsigned ,    RW, default = 0  0: pre luma, 1: cur luma lbuf, 2: pre chrm, 3: cur chrm
//Bit 19:18         reserved
//Bit 17            reg_mc_srch_mode_forb_en     // unsigned ,    RW, default = 0  forbidden search range mode3 and mode > 7 when reg_mc_fhd_lbuf_ext=1
//Bit 16            reg_mc_fhd_lbuf_ext          // unsigned ,    RW, default = 0  reg_mc_fhd_lbuf_ext
//Bit 15:8          reg_mc_reg_latch_en          // unsigned ,    RW, default = 8'hff  reg_mc_din_force_y
//Bit 7 :0          reserved
#define FRC_RO_MC_PROBE                            0x3991
//Bit 31:30         reserved
//Bit 29: 0         ro_mc_probe               // unsigned ,   RO, default = 0  ro_frc_stat0, yuv422
#define FRC_RO_MC_STAT0                            0x3992
//Bit 31:24         reserved
//Bit 23: 0         ro_dbg_src_dat               // unsigned ,   RO, default = 0  ro_frc_stat1
#define FRC_RO_MC_PROBE_CSC                        0x3993
//Bit 31:30         reserved
//Bit 29: 0         ro_mc_probe_csc               // unsigned ,   RO, default = 0  ro_frc_stat5, rgb
#define FRC_RO_MC_STAT                             0x3994
//Bit 31:29         reserved
//Bit 28:16         ro_undone_vcnt               // unsigned ,   RO, default = 0  ro_undone_vcnt
//Bit 15:13         reserved
//Bit 12            ro_undone_flag               // unsigned ,   RO, default = 0  ro_undone_flag
//Bit 11: 8         ro_logo_corr_info            // unsigned ,   RO, default = 0  ro_logo_corr_info
//Bit  7: 4         ro_chrm_corr_info            // unsigned ,   RO, default = 0  ro_chrm_corr_info
//Bit  3: 0         ro_luma_corr_info            // unsigned ,   RO, default = 0  ro_luma_corr_info
#define FRC_MC_LUMA_PFTH_CTRL                      0x39e0
//Bit 31:27       reserved
//Bit 26:16       reg_mc_luma_pfth_dlt            // unsigned ,    RW, default = 0   reg_mc_luma_pfth_dlt
//Bit 15:11       reserved
//Bit 10: 0       reg_mc_luma_pfth_thrd           // unsigned ,    RW, default = 0   reg_mc_luma_pfth_thrd
#define FRC_MC_CHRM_PFTH_CTRL                      0x39e1
//Bit 31:27       reserved
//Bit 26:16       reg_mc_chrm_pfth_dlt            // unsigned ,    RW, default = 0   reg_mc_chrm_pfth_dlt
//Bit 15:11       reserved
//Bit 10: 0       reg_mc_chrm_pfth_thrd           // unsigned ,    RW, default = 0   reg_mc_chrm_pfth_thrd
#define FRC_MC_DBG_PHASE0                          0x39e2
//Bit 31:24       ro_mc_phase3                    // unsigned ,    RO, default = 0   ro_mc_phase3
//Bit 23:16       ro_mc_phase2                    // unsigned ,    RO, default = 0   ro_mc_phase2
//Bit 15: 8       ro_mc_phase1                    // unsigned ,    RO, default = 0   ro_mc_phase1
//Bit  7: 0       ro_mc_phase0                    // unsigned ,    RO, default = 0   ro_mc_phase0
#define FRC_MC_DBG_PHASE1                          0x39e3
//Bit 31:24       ro_mc_phase7                    // unsigned ,    RO, default = 0   ro_mc_phase7
//Bit 23:16       ro_mc_phase6                    // unsigned ,    RO, default = 0   ro_mc_phase6
//Bit 15: 8       ro_mc_phase5                    // unsigned ,    RO, default = 0   ro_mc_phase5
//Bit  7: 0       ro_mc_phase4                    // unsigned ,    RO, default = 0   ro_mc_phase4
#define FRC_MC_DBG_MV_FETCH                        0x39e4
//Bit 31:13       reserved
//Bit 12          ro_mv_dout_srdy_tmp             // unsigned ,    RO, default = 0
//Bit 11          ro_mv_dout_rrdy_tmp             // unsigned ,    RO, default = 0
//Bit 10          ro_logo_mv_din_phs              // unsigned ,    RO, default = 0
//Bit 9           ro_mv_dout_phs1                 // unsigned ,    RO, default = 0
//Bit 8           ro_mv_dout_phs_dis              // unsigned ,    RO, default = 0
//Bit 7           ro_luma_mv_din_rrdy             // unsigned ,    RO, default = 0
//Bit 6           ro_chrm_mv_din_rrdy             // unsigned ,    RO, default = 0
//Bit 5           ro_iplogo_mv_din_rrdy           // unsigned ,    RO, default = 0
//Bit 4           ro_melg_mv_din_rrdy             // unsigned ,    RO, default = 0
//Bit 3           ro_luma_mv_din_srdy             // unsigned ,    RO, default = 0
//Bit 2           ro_chrm_mv_din_srdy             // unsigned ,    RO, default = 0
//Bit 1           ro_iplogo_mv_din_srdy           // unsigned ,    RO, default = 0
//Bit 0           ro_melg_mv_din_srdy             // unsigned ,    RO, default = 0
#define FRC_MC_DBG_LUMA_WR0                        0x39e5
//Bit 31:26       reserved
//Bit 25          ro_luma_sw0_din_srdy            // unsigned ,    RO, default = 0
//Bit 24          ro_luma_sw0_din_rrdy            // unsigned ,    RO, default = 0
//Bit 23:21       reserved
//Bit 20: 8       ro_luma_ro_mc_wr0_vcnt          // unsigned ,    RO, default = 0
//Bit  7: 2       reserved
//Bit  1: 0       ro_luma_ro_mc_wr0_st            // unsigned ,    RO, default = 0
#define FRC_MC_DBG_LUMA_WR1                        0x39e6
//Bit 31:26       reserved
//Bit 25          ro_luma_sw1_din_srdy            // unsigned ,    RO, default = 0
//Bit 24          ro_luma_sw1_din_rrdy            // unsigned ,    RO, default = 0
//Bit 23:21       reserved
//Bit 20: 8       ro_luma_ro_mc_wr1_vcnt          // unsigned ,    RO, default = 0
//Bit  7: 2       reserved
//Bit  1: 0       ro_luma_ro_mc_wr1_st            // unsigned ,    RO, default = 0
#define FRC_MC_DBG_LUMA_RD                         0x39e7
//Bit 31          reserved
//Bit 30:28       ro_luma_frm_st                  // unsigned ,    RO, default = 0
//Bit 27:26       reserved
//Bit 25          ro_luma_rd_mv_din_srdy          // unsigned ,    RO, default = 0
//Bit 24          ro_luma_rd_mv_din_rrdy          // unsigned ,    RO, default = 0
//Bit 23:21       reserved
//Bit 20: 8       ro_luma_ro_mc_rd_vcnt           // unsigned ,    RO, default = 0
//Bit  7: 3       reserved
//Bit  2: 0       ro_luma_ro_mc_rd_st             // unsigned ,    RO, default = 0
#define FRC_MC_DBG_CHRM_WR0                        0x39e8
//Bit 31:26       reserved
//Bit 25          ro_chrm_sw0_din_srdy            // unsigned ,    RO, default = 0
//Bit 24          ro_chrm_sw0_din_rrdy            // unsigned ,    RO, default = 0
//Bit 23:21       reserved
//Bit 20: 8       ro_chrm_ro_mc_wr0_vcnt          // unsigned ,    RO, default = 0
//Bit  7: 2       reserved
//Bit  1: 0       ro_chrm_ro_mc_wr0_st            // unsigned ,    RO, default = 0
#define FRC_MC_DBG_CHRM_WR1                        0x39e9
//Bit 31:26       reserved
//Bit 25          ro_chrm_sw1_din_srdy            // unsigned ,    RO, default = 0
//Bit 24          ro_chrm_sw1_din_rrdy            // unsigned ,    RO, default = 0
//Bit 23:21       reserved
//Bit 20: 8       ro_chrm_ro_mc_wr1_vcnt          // unsigned ,    RO, default = 0
//Bit  7: 2       reserved
//Bit  1: 0       ro_chrm_ro_mc_wr1_st            // unsigned ,    RO, default = 0
#define FRC_MC_DBG_CHRM_RD                         0x39ea
//Bit 31          reserved
//Bit 30:28       ro_chrm_frm_st                  // unsigned ,    RO, default = 0
//Bit 27:26       reserved
//Bit 25          ro_chrm_rd_mv_din_srdy          // unsigned ,    RO, default = 0
//Bit 24          ro_chrm_rd_mv_din_rrdy          // unsigned ,    RO, default = 0
//Bit 23:21       reserved
//Bit 20: 8       ro_chrm_ro_mc_rd_vcnt           // unsigned ,    RO, default = 0
//Bit  7: 3       reserved
//Bit  2: 0       ro_chrm_ro_mc_rd_st             // unsigned ,    RO, default = 0
#define FRC_MC_DBG_IPLOGO_WR0                      0x39eb
//Bit 31:26       reserved
//Bit 25          ro_iplogo_sw0_din_srdy          // unsigned ,    RO, default = 0
//Bit 24          ro_iplogo_sw0_din_rrdy          // unsigned ,    RO, default = 0
//Bit 23:21       reserved
//Bit 20: 8       ro_iplogo_ro_mc_wr0_vcnt        // unsigned ,    RO, default = 0
//Bit  7: 2       reserved
//Bit  1: 0       ro_iplogo_ro_mc_wr0_st          // unsigned ,    RO, default = 0
#define FRC_MC_DBG_IPLOGO_WR1                      0x39ec
//Bit 31:26       reserved
//Bit 25          ro_iplogo_sw1_din_srdy          // unsigned ,    RO, default = 0
//Bit 24          ro_iplogo_sw1_din_rrdy          // unsigned ,    RO, default = 0
//Bit 23:21       reserved
//Bit 20: 8       ro_iplogo_ro_mc_wr1_vcnt        // unsigned ,    RO, default = 0
//Bit  7: 2       reserved
//Bit  1: 0       ro_iplogo_ro_mc_wr1_st          // unsigned ,    RO, default = 0
#define FRC_MC_DBG_IPLOGO_RD                       0x39ed
//Bit 31          reserved
//Bit 30:28       ro_iplogo_frm_st                // unsigned ,    RO, default = 0
//Bit 27:26       reserved
//Bit 25          ro_iplogo_rd_mv_din_srdy        // unsigned ,    RO, default = 0
//Bit 24          ro_iplogo_rd_mv_din_rrdy        // unsigned ,    RO, default = 0
//Bit 23:21       reserved
//Bit 20: 8       ro_iplogo_ro_mc_rd_vcnt         // unsigned ,    RO, default = 0
//Bit  7: 3       reserved
//Bit  2: 0       ro_iplogo_ro_mc_rd_st           // unsigned ,    RO, default = 0
#define FRC_MC_DBG_MC_WRAP                         0x39ee
//Bit 31          ro_melogo_din_srdy              // unsigned ,    RO, default = 0
//Bit 30          ro_melogo_din_rrdy              // unsigned ,    RO, default = 0
//Bit 29          ro_mv_din_srdy                  // unsigned ,    RO, default = 0
//Bit 28          ro_mv_din_rrdy                  // unsigned ,    RO, default = 0
//Bit 27          ro_syn_fst_phs                  // unsigned ,    RO, default = 0
//Bit 26          ro_pre_fst_phs                  // unsigned ,    RO, default = 0
//Bit 25          ro_mc_proc_phs                  // unsigned ,    RO, default = 0
//Bit 24          ro_mc_undone_flag               // unsigned ,    RO, default = 0
//Bit 23:21       reserved
//Bit 20: 8       ro_mc_undone_vcnt               // unsigned ,    RO, default = 0
//Bit  7: 3       reserved
//Bit  1: 0       ro_vp2mc_syn_st                 // unsigned ,    RO, default = 0
#define FRC_MC_LBUF_VOFST1_CTRL                    0x39ef
//Bit 31          reg_mc_lbuf_vofst1_th_en          // unsigned, RW, default=0
//Bit 30:9        reserved
//Bit 8:0         reg_mc_lbuf_vofst1_th             // unsigned, RW, default=96
#define FRC_MC_LBUF_VOFST1_CLIP0                   0x39f0
//Bit 31:25         reserved
//Bit 24:16         ro_luma_pre_vofst1_clip         //unsigned, RO, default=0
//Bit 15:9          reserved
//Bit 8:0           ro_luma_cur_vofst1_clip         //unsigned, RO, default=0
#define FRC_MC_LBUF_VOFST1_CLIP1                   0x39f1
//Bit 31:25         reserved
//Bit 24:16         ro_chrm_pre_vofst1_clip         //unsigned, RO, default=0
//Bit 15:9          reserved
//Bit 8:0           ro_chrm_cur_vofst1_clip         //unsigned, RO, default=0
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/mc_hw_reg.h
//
//
// Reading file:  ./frc_inc/mc_hw_reg2.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_MC_LUMA_GCLK_CTRL                      0x3940
//Bit 31: 0       reg_mc_gclk_luma           // unsigned ,    RW, default = 22'h0  reg_mc_gclk_luma_adpt0 to 10
#define FRC_MC_CHRM_GCLK_CTRL                      0x3941
//Bit 31: 0       reg_mc_gclk_chrm           // unsigned ,    RW, default = 22'h0  reg_mc_gclk_chrm_adpt0 to 10
#define FRC_MC_IPLOGO_GCLK_CTRL1                   0x3942
//Bit 31: 0       reg_mc_gclk_logo          // unsigned ,    RW, default = 32'h0  reg_mc_gclk_iplogo_adpt0 to 15
#define FRC_MC_IPLOGO_GCLK_CTRL2                   0x3943
//Bit 31:0        reserved
#define FRC_MC_LBUF_TOP_GCLK                       0x3944
//Bit 31: 4       reserved
//Bit  3: 2       reg_mvcvt_gclk_ctrl             // unsigned ,    RW, default = 2'h0  reg_mvcvt_gclk_ctrl
//Bit  1: 0       reg_p2l_gclk_ctrl               // unsigned ,    RW, default = 2'h0  reg_p2l_gclk_ctrl
#define FRC_MC_LBUF_LOGO_CTRL                      0x3950
//Bit 31:9        reserved
//Bit  8          reg_mc_force_melg_en      // unsigned, RW, default=0
//Bit  7          reg_mc_force_melg         // unsigned ,    RW, default = 0
//Bit  6          reg_mc_force_iplogo       // unsigned ,    RW, default = 0
//Bit  5          reg_mc_force_iplogo_en      // unsigned ,    RW, default = 0
//Bit  4          reg_mc_mv_dbg_mode        // unsigned ,    RW, default = 0  used for mv dbg mode, force mv_din_srdy as 1
//Bit  3:0        reg_mc_melg_dbg_mode      // unsigned ,    RW, default = 0  used for mixlogo dbg mode
#define FRC_MC_MELG_DBG_OUT0                       0x3951
//Bit 31:0        ro_mc_melg_dbg_out0      //unsigned, RO, default=0
#define FRC_MC_MELG_DBG_OUT1                       0x3952
//Bit 31:0        ro_mc_melg_dbg_out1      //unsigned, RO, default=0
#define FRC_RO_MC_LUMA_VOFST_SUM                   0x3960
//Bit 31:27         reserved
//Bit 26:16         ro_luma_cur_vofst1_mfy_sum  // unsigned ,   RO, default = 0 cur luma lbuf vofst cut lines when dynamic search range
//Bit 15:11         reserved
//Bit 10: 0         ro_luma_pre_vofst1_mfy_sum  // unsigned ,   RO, default = 0 pre luma lbuf vofst cut lines when dynamic search range
#define FRC_RO_MC_LUMA_PRE_VOFST_STAT              0x3961
//Bit 31:27         reserved
//Bit 26:16         ro_luma_pre_vofst1_dlt_max  // unsigned ,   RO, default = 0 cur luma lbuf vofst cut lines when dynamic search range
//Bit 15:11         reserved
//Bit 10: 0         ro_luma_pre_vofst1_dlt_min  // unsigned ,  RO, default = 0 pre luma lbuf vofst cut lines when dynamic search range
#define FRC_RO_MC_LUMA_CUR_VOFST_STAT              0x3962
//Bit 31:27         reserved
//Bit 26:16         ro_luma_cur_vofst1_dlt_max  // unsigned ,   RO, default = 0 cur luma lbuf vofst cut lines when dynamic search range
//Bit 15:11         reserved
//Bit 10: 0         ro_luma_cur_vofst1_dlt_min  // unsigned ,  RO, default = 0 pre luma lbuf vofst cut lines when dynamic search range
#define FRC_RO_MC_CHRM_VOFST_SUM                   0x3963
//Bit 31:27         reserved
//Bit 26:16         ro_chrm_cur_vofst1_mfy_sum  // unsigned ,   RO, default = 0 cur chrm lbuf vofst cut lines when dynamic search range
//Bit 15:11         reserved
//Bit 10: 0         ro_chrm_pre_vofst1_mfy_sum  // unsigned ,   RO, default = 0 pre chrm lbuf vofst cut lines when dynamic search range
#define FRC_RO_MC_CHRM_PRE_VOFST_STAT              0x3964
//Bit 31:27         reserved
//Bit 26:16         ro_chrm_pre_vofst1_dlt_max  // unsigned ,   RO, default = 0 cur chrm lbuf vofst cut lines when dynamic search range
//Bit 15:11         reserved
//Bit 10: 0         ro_chrm_pre_vofst1_dlt_min  // unsigned ,  RO, default = 0 pre chrm lbuf vofst cut lines when dynamic search range
#define FRC_RO_MC_CHRM_CUR_VOFST_STAT              0x3965
//Bit 31:27         reserved
//Bit 26:16         ro_chrm_cur_vofst1_dlt_max  // unsigned ,   RO, default = 0 cur chrm lbuf vofst cut lines when dynamic search range
//Bit 15:11         reserved
//Bit 10: 0         ro_chrm_cur_vofst1_dlt_min  // unsigned ,  RO, default = 0 pre chrm lbuf vofst cut lines when dynamic search range
#define FRC_RO_MVRD_STAT                           0x3966
//Bit 31: 0         ro_mvrd_wt_st_sum  // unsigned ,  RO, default = 0 mc wait me total cycles
#define FRC_RO_MVWR_STAT                           0x3967
//Bit 31: 0         ro_mvwr_wt_st_sum  // unsigned ,  RO, default = 0 me wait mc total cycles
#define FRC_RO_MC_LUMA_PRE_STAT                    0x3968
//Bit 31:27         reserved
//Bit 26:16         ro_luma_pre_vofst1  // signed ,   RO, default = 0 cur luma lbuf vofst
//Bit 15:11         reserved
//Bit 10: 0         ro_luma_pre_vofst0  // signed ,  RO, default = 0  cur luma lbuf vofst
#define FRC_RO_MC_LUMA_CUR_STAT                    0x3969
//Bit 31:27         reserved
//Bit 26:16         ro_luma_cur_vofst1  // signed ,   RO, default = 0 cur luma lbuf vofst
//Bit 15:11         reserved
//Bit 10: 0         ro_luma_cur_vofst0  // signed ,  RO, default = 0  cur luma lbuf vofst
#define FRC_RO_MC_LUMA_PRE_STAT2                   0x396a
//Bit 31:27         reserved
//Bit 26:16         ro_luma_pre_prewr1  // unsigned ,   RO, default = 0 pre luma lbuf prefetch size
//Bit 15:11         reserved
//Bit 10: 0         ro_luma_pre_prewr0  // unsigned ,  RO, default = 0  pre luma lbuf prefetch size
#define FRC_RO_MC_LUMA_CUR_STAT2                   0x396b
//Bit 31:27         reserved
//Bit 26:16         ro_luma_cur_prewr1  // unsigned ,   RO, default = 0 cur luma lbuf prefetch size
//Bit 15:11         reserved
//Bit 10: 0         ro_luma_cur_prewr0  // unsigned ,  RO, default = 0  cur luma lbuf prefetch size
#define FRC_RO_MC_LUMA_STAT3                       0x396c
//Bit 31:28         reserved
//Bit 27:16         ro_luma_pre_sw_vsize  // unsigned ,   RO, default = 0 pre luma lbuf size
//Bit 15:12         reserved
//Bit 11: 0         ro_luma_cur_sw_vsize  // unsigned ,  RO, default = 0  cur luma lbuf size
#define FRC_RO_MC_CHRM_PRE_STAT                    0x396d
//Bit 31:27         reserved
//Bit 26:16         ro_chrm_pre_vofst1  // signed ,   RO, default = 0 cur chrm lbuf vofst
//Bit 15:11         reserved
//Bit 10: 0         ro_chrm_pre_vofst0  // signed ,  RO, default = 0  cur chrm lbuf vofst
#define FRC_RO_MC_CHRM_CUR_STAT                    0x396e
//Bit 31:27         reserved
//Bit 26:16         ro_chrm_cur_vofst1  // signed ,   RO, default = 0 cur chrm lbuf vofst
//Bit 15:11         reserved
//Bit 10: 0         ro_chrm_cur_vofst0  // signed ,  RO, default = 0  cur chrm lbuf vofst
#define FRC_RO_MC_CHRM_PRE_STAT2                   0x396f
//Bit 31:27         reserved
//Bit 26:16         ro_chrm_pre_prewr1  // unsigned ,   RO, default = 0 pre chrm lbuf prefetch size
//Bit 15:11         reserved
//Bit 10: 0         ro_chrm_pre_prewr0  // unsigned ,  RO, default = 0  pre chrm lbuf prefetch size
#define FRC_RO_MC_CHRM_CUR_STAT2                   0x3970
//Bit 31:27         reserved
//Bit 26:16         ro_chrm_cur_prewr1  // unsigned ,   RO, default = 0 cur chrm lbuf prefetch size
//Bit 15:11         reserved
//Bit 10: 0         ro_chrm_cur_prewr0  // unsigned ,  RO, default = 0  cur chrm lbuf prefetch size
#define FRC_RO_MC_CHRM_STAT3                       0x3971
//Bit 31:28         reserved
//Bit 27:16         ro_chrm_pre_sw_vsize  // unsigned ,   RO, default = 0 pre chrm lbuf size
//Bit 15:12         reserved
//Bit 11: 0         ro_chrm_cur_sw_vsize  // unsigned ,  RO, default = 0  cur chrm lbuf size
#define FRC_RO_MC_IPLG_PRE_STAT                    0x3972
//Bit 31:27         reserved
//Bit 26:16         ro_iplg_pre_vofst1  // signed ,   RO, default = 0 cur iplg lbuf vofst
//Bit 15:11         reserved
//Bit 10: 0         ro_iplg_pre_vofst0  // signed ,  RO, default = 0  cur iplg lbuf vofst
#define FRC_RO_MC_IPLG_CUR_STAT                    0x3973
//Bit 31:27         reserved
//Bit 26:16         ro_iplg_cur_vofst1  // signed ,   RO, default = 0 cur iplg lbuf vofst
//Bit 15:11         reserved
//Bit 10: 0         ro_iplg_cur_vofst0  // signed ,  RO, default = 0  cur iplg lbuf vofst
#define FRC_RO_MC_IPLG_STAT2                       0x3974
//Bit 31:27         reserved
//Bit 26:16         ro_iplg_pre_prewr   // unsigned ,   RO, default = 0 cur iplg lbuf prefetch size
//Bit 15:11         reserved
//Bit 10: 0         ro_iplg_cur_prewr   // unsigned ,  RO, default = 0  pre iplg lbuf prefetch size
#define FRC_RO_MC_IPLG_STAT3                       0x3975
//Bit 31:28         reserved
//Bit 27:16         ro_iplg_pre_sw_vsize  // unsigned ,   RO, default = 0 pre iplg lbuf size
//Bit 15:12         reserved
//Bit 11: 0         ro_iplg_cur_sw_vsize  // unsigned ,  RO, default = 0  cur iplg lbuf size
#define FRC_MC_PREWR_BLANK                         0x3976
//Bit 31            reg_mc_prewr_clip_en // unsigned, RW, default=0, enable prewr clip func
//Bit 30            reg_mc_olap_fill_mode //unsigned, RW, default=0, choose overlap fill mode, 0=default, 1=reference to prewr_end
//Bit 29:11         reserved
//Bit 10:0          reg_mc_prewr_blank  //unsigned, RW, default=20, vblank between frm_phs_rst && first mc output
#define FRC_MC_PREWR_PRE_LUMA_NEW                  0x3977
//Bit 31:0          ro_luma_prewr0_vsize_new, RO, default = 0, luma clipped prewr_vsize if vblank isn't enough for original prewr_vsize to ensure mc output correctly
#define FRC_MC_PREWR_CUR_LUMA_NEW                  0x3978
//Bit 31:0          ro_luma_prewr1_vsize_new, RO, default = 0, luma clipped prewr_vsize if vblank isn't enough for original prewr_vsize to ensure mc output correctly
#define FRC_MC_PREWR_LUMA_FLAG                     0x3979
//Bit 31:1          reserved
//Bit 0             ro_luma_prewr_clip_flag, RO, default = 0, luma clipped prewr_vsize flag
#define FRC_MC_PREWR_PRE_CHRM_NEW                  0x397a
//Bit 31:0          ro_chrm_prewr0_vsize_new, RO, default = 0, chrm clipped prewr_vsize if vblank isn't enough for original prewr_vsize to ensure mc output correctly
#define FRC_MC_PREWR_CUR_CHRM_NEW                  0x397b
//Bit 31:0          ro_chrm_prewr1_vsize_new, RO, default = 0, chrm clipped prewr_vsize if vblank isn't enough for original prewr_vsize to ensure mc output correctly
#define FRC_MC_PREWR_CHRM_FLAG                     0x397c
//Bit 31:1          reserved
//Bit 0             ro_chrm_prewr_clip_flag, RO, default = 0, chrm clipped prewr_vsize flag
#define FRC_MC_LBUF_HW_CTRL0                       0x397d
//Bit 31            reg_mc_melg_sw_rst, W1T, default = 0, reset melogo, pulse reg
//Bit 30:0          reserved
// synopsys translate_off
// synopsys translate_on
//
// Closing file:  ./frc_inc/mc_hw_reg2.h
//
// -----------------------------------------------
// REG_BASE:  FRC_RDMA_APB_BASE = 0x3b
// -----------------------------------------------
//
// Reading file:  ./frc_inc/frc_rdma_regs.h
//
//===========================================================================
// FRC_RDMA registers 0x00 - 0xff
//===========================================================================
// Bit 31: 0 RW AHB start address for manual start DMA
#define FRC_RDMA_AHB_START_ADDR_MAN                0x3b00
// Bit 31: 0 RW AHB end address for manual start DMA
#define FRC_RDMA_AHB_END_ADDR_MAN                  0x3b01
// Bit 31: 0 RW AHB start address for auto start source 1
#define FRC_RDMA_AHB_START_ADDR_1                  0x3b02
// Bit 31: 0 RW AHB end address for auto start source 1
#define FRC_RDMA_AHB_END_ADDR_1                    0x3b03
// Bit 31: 0 RW AHB start address for auto start source 2
#define FRC_RDMA_AHB_START_ADDR_2                  0x3b04
// Bit 31: 0 RW AHB end address for auto start source 2
#define FRC_RDMA_AHB_END_ADDR_2                    0x3b05
// Bit 31: 0 RW AHB start address for auto start source 3
#define FRC_RDMA_AHB_START_ADDR_3                  0x3b06
// Bit 31: 0 RW AHB end address for auto start source 3
#define FRC_RDMA_AHB_END_ADDR_3                    0x3b07
// Bit 31: 0 RW AHB start address for auto start source 4
#define FRC_RDMA_AHB_START_ADDR_4                  0x3b08
// Bit 31: 0 RW AHB end address for auto start source 4
#define FRC_RDMA_AHB_END_ADDR_4                    0x3b09
// Bit 31: 0 RW AHB start address for auto start source 5
#define FRC_RDMA_AHB_START_ADDR_5                  0x3b0a
// Bit 31: 0 RW AHB end address for auto start source 5
#define FRC_RDMA_AHB_END_ADDR_5                    0x3b0b
// Bit 31: 0 RW AHB start address for auto start source 6
#define FRC_RDMA_AHB_START_ADDR_6                  0x3b0c
// Bit 31: 0 RW AHB end address for auto start source 6
#define FRC_RDMA_AHB_END_ADDR_6                    0x3b0d
// Bit 31: 0 RW AHB start address for auto start source 7
#define FRC_RDMA_AHB_START_ADDR_7                  0x3b0e
// Bit 31: 0 RW AHB end address for auto start source 7
#define FRC_RDMA_AHB_END_ADDR_7                    0x3b0f
// Auto start DMA control:
// Bit 31:24 RW ctrl_enable_int_3. Interrupt inputs enable mask for source 3.
// Bit 23:16 RW ctrl_enable_int_2. Interrupt inputs enable mask for source 2.
// Bit 15: 8 RW ctrl_enable_int_1. Interrupt inputs enable mask for source 1.
// Bit     7 RW ctrl_cbus_write_3. Register read/write mode for auto-start 3. 1=Register write; 0=Register read.
// Bit     6 RW ctrl_cbus_write_3. Register read/write mode for auto-start 2. 1=Register write; 0=Register read.
// Bit     5 RW ctrl_cbus_write_3. Register read/write mode for auto-start 1. 1=Register write; 0=Register read.
// Bit     4 R  Rsrv.
// Bit     3 RW ctrl_cbus_addr_incr_3. 1=Incremental register access for auto-start 3; 0=Non-incremental (individual) register access.
// Bit     2 RW ctrl_cbus_addr_incr_2. 1=Incremental register access for auto-start 2; 0=Non-incremental (individual) register access.
// Bit     1 RW ctrl_cbus_addr_incr_1. 1=Incremental register access for auto-start 1; 0=Non-incremental (individual) register access.
// Bit     0 R  Rsrv.
#define FRC_RDMA_ACCESS_AUTO                       0x3b10
#define FRC_RDMA_ACCESS_AUTO2                      0x3b11
// Manual start DMA control:
// Bit 31: 3 R  Rsrv.
// Bit     2 RW ctrl_cbus_write_man. Register read/write mode for manual-start. 1=Register write; 0=Register read.
// Bit     1 RW ctrl_cbus_addr_incr_man. 1=Incremental register access for manual-start; 0=Non-incremental (individual) register access.
// Bit     0 W  ctrl_start_man. Write 1 to this bit to manual-start DMA. This bit always read back 0.
#define FRC_RDMA_ACCESS_MAN                        0x3b13
// RDMA general control:
// Bit 31:25 R  Rsrv.
// Bit    24 W  ctrl_clr_FRC_RDMA_done_int. Write 1 to reset FRC_RDMA_int level to 0. No need to clear this bit.
// Bit 23:19 R  Rsrv.
// Bit 18:13 R  Rsrv.
// Bit 12: 7 R  Rsrv.
// Bit     6 RW ctrl_ddr_urgent.
// Bit  5: 4 RW ctrl_ahb_wr_burst_size. 0=ABH write request burst size 16;
//                                      1=ABH write request burst size 24;
//                                      2=ABH write request burst size 32;
//                                      3=ABH write request burst size 48.
// Bit  3: 2 RW ctrl_ahb_rd_burst_size. 0=ABH read request burst size 16;
//                                      1=ABH read request burst size 24;
//                                      2=ABH read request burst size 32;
//                                      3=ABH read request burst size 48.
// Bit     1 RW ctrl_sw_reset. 1=Reset RDMA logics except register.
// Bit     0 RW ctrl_free_clk_enable. 0=Default, Enable clock gating. 1=No clock gating, enable free clock.
#define FRC_RDMA_CTRL                              0x3b14
// Read only.
// Bit 31:29 R  Rsrv.
// Bit    28 R  FRC_RDMA_done_int.
// Bit 27:25 R  Rsrv.
// Bit 24:18 R  ahb_wrfifo_cnt. FIFO for buffering CBus read data to be sent to AHB
// Bit 17:11 R  ahb_rdfifo_cnt. FIFO for buffering data read from AHB.
// Bit 10: 8 R  ddr_req_st. =0 -- Idle; !=0 -- AHB interfacing ongoing.
// Bit  7: 4 R  curr_req. Latest requests that is being/been serviced. E.g. 0000=Idle; 0010=Latest serviced request is Req 1.
// Bit  3: 0 R  req_latch. Requests that are yet to be serviced. E.g. 0000=No request; 0001=Req 0 waiting; 1100=Req 2 and 3 waiting.
#define FRC_RDMA_STATUS                            0x3b15
#define FRC_RDMA_STATUS2                           0x3b16
#define FRC_RDMA_STATUS3                           0x3b17
#define FRC_RDMA_ACCESS_AUTO4                      0x3b18
#define FRC_RDMA_SRAM_CNTL                         0x3b20
#define FRC_RDMA_SRAM_REGADDR                      0x3b21
#define FRC_RDMA_SRAM_REGDATA                      0x3b22
#define FRC_RDMA_AUTO_SRC1_SEL                     0x3b23
#define FRC_RDMA_AUTO_SRC2_SEL                     0x3b24
#define FRC_RDMA_AUTO_SRC3_SEL                     0x3b25
#define FRC_RDMA_AUTO_SRC4_SEL                     0x3b26
#define FRC_RDMA_AUTO_SRC5_SEL                     0x3b27
#define FRC_RDMA_AUTO_SRC6_SEL                     0x3b28
#define FRC_RDMA_AUTO_SRC7_SEL                     0x3b29
// Bit  1: 0 RW AHB start address[33:32] for manual start DMA
#define FRC_RDMA_AHB_START_ADDR_MAN_MSB            0x3b30
// Bit  1: 0 RW AHB end address[33:32] for manual start DMA
#define FRC_RDMA_AHB_END_ADDR_MAN_MSB              0x3b31
// Bit  1: 0 RW AHB start address[33:32] for auto start source 1
#define FRC_RDMA_AHB_START_ADDR_1_MSB              0x3b32
// Bit  1: 0 RW AHB end address[33:32] for auto start source 1
#define FRC_RDMA_AHB_END_ADDR_1_MSB                0x3b33
// Bit  1: 0 RW AHB start address[33:32] for auto start source 2
#define FRC_RDMA_AHB_START_ADDR_2_MSB              0x3b34
// Bit  1: 0 RW AHB end address[33:32] for auto start source 2
#define FRC_RDMA_AHB_END_ADDR_2_MSB                0x3b35
// Bit  1: 0 RW AHB start address[33:32] for auto start source 3
#define FRC_RDMA_AHB_START_ADDR_3_MSB              0x3b36
// Bit  1: 0 RW AHB end address[33:32] for auto start source 3
#define FRC_RDMA_AHB_END_ADDR_3_MSB                0x3b37
// Bit  1: 0 RW AHB start address[33:32] for auto start source 4
#define FRC_RDMA_AHB_START_ADDR_4_MSB              0x3b38
// Bit  1: 0 RW AHB end address[33:32] for auto start source 4
#define FRC_RDMA_AHB_END_ADDR_4_MSB                0x3b39
// Bit  1: 0 RW AHB start address[33:32] for auto start source 5
#define FRC_RDMA_AHB_START_ADDR_5_MSB              0x3b3a
// Bit  1: 0 RW AHB end address[33:32] for auto start source 5
#define FRC_RDMA_AHB_END_ADDR_5_MSB                0x3b3b
// Bit  1: 0 RW AHB start address[33:32] for auto start source 6
#define FRC_RDMA_AHB_START_ADDR_6_MSB              0x3b3c
// Bit  1: 0 RW AHB end address[33:32] for auto start source 6
#define FRC_RDMA_AHB_END_ADDR_6_MSB                0x3b3d
// Bit  1: 0 RW AHB start address[33:32] for auto start source 7
#define FRC_RDMA_AHB_START_ADDR_7_MSB              0x3b3e
// Bit  1: 0 RW AHB end address[33:32] for auto start source 7
#define FRC_RDMA_AHB_END_ADDR_7_MSB                0x3b3f
//
// Closing file:  ./frc_inc/frc_rdma_regs.h
//
// -----------------------------------------------
// REG_BASE:  FRC_WRAP_APB_BASE = 0x3f
// -----------------------------------------------
//
// Reading file:  ./frc_inc/frc_wrap_reg.h
//
// synopsys translate_off
// synopsys translate_on
#define FRC_ASYNC_SW_RESETS                        0x3f00
//Bit 31:16 reserved
//Bit 15:0  reg_sw_resets         // unsigned ,   RW,default = 0,
#define FRC_TOP_CTRL                               0x3f01
//Bit 31:9  reserved
//Bit 8     reg_byp_mode_sel      // unsigned ,   RW, default = 1, frc Bypass singal sel byp_en = reg_byp_mode_sel ? reg_frc_top_byp :~reg_frc_en_in;
//Bit 7 :5  reserved
//Bit 4     reg_frc_top_byp       // unsigned ,   RW, default = 0, frc Bypass singal of frc,1:byp  frc 0:close byp
//Bit 3 :1  reserved
//Bit 0     reg_frc_en_in         // unsigned ,   RW, default = 0, frc enable singal of frc,1:open frc 0:close frc
#define FRC_AXI_ADDR_EXT_CTRL                      0x3f02
//Bit 31:14 reserved
//Bit 13:12 reg_default_addr_ext   // unsigned ,    RW,default = 0,axi address extend to 34bits,00:[0:4G) 01:[4G:8G) 01:[8G:12G) 11:[12G:16G)
//Bit 11:10 reserved
//Bit 9 :8  reg_me_addr_ext        // unsigned ,    RW,default = 0,axi address extend to 34bits,00:[0:4G) 01:[4G:8G) 01:[8G:12G) 11:[12G:16G)
//Bit 7 :6  reserved
//Bit 5 :4  reg_mc_chrm_addr_ext   // unsigned ,    RW,default = 0,axi address extend to 34bits,00:[0:4G) 01:[4G:8G) 01:[8G:12G) 11:[12G:16G)
//Bit 3 :2  reserved
//Bit 1 :0  reg_mc_luma_addr_ext   // unsigned ,    RW,default = 0,axi address extend to 34bits,00:[0:4G) 01:[4G:8G) 01:[8G:12G) 11:[12G:16G)
#define FRC_TOP_SCAN_REG                           0x3f03
//Bit 31:1  reserved
//Bit 0     reg_scan_reg          // unsigned ,    RW,default = 0,
#define FRC_TOTAL_SIZE                             0x3f04
//Bit 31:16 reg_frc_disp_vsize    // unsigned ,   RW,default = 1080, vtotal size of frc input
//Bit 15:0  reg_frc_disp_hsize    // unsigned ,   RW,default = 1920, htotal vtotal size of frc input
#define FRC_FRAME_SIZE                             0x3f05
//Bit 31:29 reserved
//Bit 28:16 reg_frc_frm_vsize     // unsigned ,    RW,default = 1080, vsize of frc input
//Bit 15:13 reserved
//Bit 12:0  reg_frc_frm_hsize     // unsigned ,    RW,default = 1920, hsize of frc input
#define FRC_AXI_CACHE                              0x3f06
//Bit 31:0  reg_frc_axi_cache     // unsigned ,    RW,default = 0,
#define FRC_AXIRD0_QLEVEL                          0x3f07
//Bit 31:0  reg_axird0_qlevel     // unsigned ,    RW,default = 0,
#define FRC_AXIRD1_QLEVEL                          0x3f08
//Bit 31:0  reg_axird1_qlevel     // unsigned ,    RW,default = 0,
#define FRC_AXIWR0_QLEVEL                          0x3f09
//Bit 31:0  reg_axiwr0_qlevel      // unsigned ,    RW,default = 0,
#define FRC_AXI_SYNC_CRC1                          0x3f0a
//Bit 31:12 reg_frc_axi_intf_ctrl  // unsigned ,    RW,default = 20'h44444,
//Bit 11    reserved
//Bit 10:8  reg_frc_bist_crc_ctrl  // unsigned ,    RW,default = 0,
//Bit 7 :3  pls_frc_crc_start      // unsigned ,    RW,default = 0,
//Bit 2 :0  reg_frc_intf_sw_rst    // unsigned ,    RW,default = 0,
#define FRC_ARB_BAK_CTRL                           0x3f0b
//Bit 31:26 reserved
//Bit 25:4  reg_apb_prot_ctrl     // unsigned ,    RW,default = 22'h200006,
//Bit 3 :1  reserved
//Bit 0     reg_arb_bak_ctrl      // unsigned ,    RW,default = 0,
#define FRC_AXI_URG_CTRL                           0x3f0c
//Bit 31:5  reserved
//Bit 4     reg_arb2_rd_urg       // unsigned ,    RW,default = 0,
//Bit 3     reg_arb1_rd_urg       // unsigned ,    RW,default = 0,
//Bit 2     reg_arb0_rd_urg       // unsigned ,    RW,default = 0,
//Bit 1     reg_arb1_wr_urg       // unsigned ,    RW,default = 0,
//Bit 0     reg_arb0_wr_urg       // unsigned ,    RW,default = 0,
#define FRC_RDMA_SYNC_CTRL                         0x3f0d
//Bit 31:8  reserved
//Bit 7     reg_rdma_rd_req_en        //unsigned ,    RW,default = 1,
//Bit 6     reg_rdma_rd_auto_gclk_en  //unsigned ,    RW,default = 0,
//Bit 5     reg_rdma_rd_disable_clk   //unsigned ,    RW,default = 0,
//Bit 4     reg_rdma_rd_sw_rst        //unsigned ,    RW,default = 0,
//Bit 3     reg_rdma_wr_req_en        //unsigned ,    RW,default = 1,
//Bit 2     reg_rdma_wr_auto_gclk_en  //unsigned ,    RW,default = 0,
//Bit 1     reg_rdma_wr_disable_clk   //unsigned ,    RW,default = 0,
//Bit 0     reserved
#define FRC_AXIRD0_CRC                             0x3f10
//Bit 31:0  ro_axird0_crc         // unsigned ,    RO, default = 0
#define FRC_AXIRD1_CRC                             0x3f11
//Bit 31:0  ro_axird1_crc         // unsigned ,    RO, default = 0
#define FRC_AXIRD2_CRC                             0x3f12
//Bit 31:0  ro_axird2_crc         // unsigned ,    RO, default = 0
#define FRC_AXIWR0_CRC0                            0x3f13
//Bit 31:0  ro_axiwr0_crc0        // unsigned ,    RO, default = 0
#define FRC_AXIWR0_CRC1                            0x3f14
//Bit 31:0  ro_axiwr0_crc1        // unsigned ,    RO, default = 0
#define FRC_AXIWR1_CRC0                            0x3f15
//Bit 31:0  ro_axiwr1_crc0        // unsigned ,    RO, default = 0
#define FRC_AXIWR1_CRC1                            0x3f16
//Bit 31:0  ro_axiwr1_crc1        // unsigned ,    RO, default = 0
#define FRC_APB_REQ_STAT                           0x3f17
//Bit 31:18 reserved
//Bit 17:8  ro_apb_prot_stat      // unsigned ,    RO, default = 0
//Bit 7 :1  reserved
//Bit 0     ro_rdma_ddr_req_busy  // unsigned ,    RO, default = 0
#define FRC_APB_CRASH_ADDR                         0x3f18
//Bit 31:16 reserved
//Bit 15:0  ro_apb_crash_addr      // unsigned ,    RO, default = 0
#define FRC_MODE_OPT                               0x3f20
//Bit 31:6  reserved
//Bit 5:0   reg_frc_mode_opt      // unsigned ,    RW, default = 0
#define FRC_RDAXI0_PROT_CTRL                       0x3f30
//Bit 31:22 reserved
//Bit 21:0  reg_rdaxi0_prot_ctrl          // unsigned ,RW, default = 22'h200002,{reg_prot_phs_en,reg_hold_num[18:0],reg_prot_en,sw_rst}
#define FRC_RDAXI0_PROT_STAT                       0x3f31
//Bit 31:14 reserved
//Bit 13:0  ro_rdaxi0_prot_stat           // unsigned ,RO, default = 0,{axi_rd_crash_num[9:0],axi_rd_crash_id[3:0]}
#define FRC_RDAXI1_PROT_CTRL                       0x3f35
//Bit 31:22 reserved
//Bit 21:0  reg_rdaxi1_prot_ctrl          // unsigned ,RW, default = 22'h200002,{reg_prot_phs_en,reg_hold_num[18:0],reg_prot_en,sw_rst}
#define FRC_RDAXI1_PROT_STAT                       0x3f36
//Bit 31:14 reserved
//Bit 13:0  ro_rdaxi1_prot_stat           // unsigned ,RO, default = 0,{axi_rd_crash_num[9:0],axi_rd_crash_id[3:0]}
#define FRC_RDAXI2_PROT_CTRL                       0x3f3a
//Bit 31:22 reserved
//Bit 21:0  reg_rdaxi2_prot_ctrl          // unsigned ,RW, default = 22'h200002,{reg_prot_phs_en,reg_hold_num[18:0],reg_prot_en,sw_rst}
#define FRC_RDAXI2_PROT_STAT                       0x3f3b
//Bit 31:14 reserved
//Bit 13:0  ro_rdaxi2_prot_stat           // unsigned ,RO, default = 0,{axi_rd_crash_num[9:0],axi_rd_crash_id[3:0]}
#define FRC_WRAXI0_PROT_CTRL                       0x3f40
//Bit 31:22 reserved
//Bit 21:0  reg_wraxi0_prot_ctrl          // unsigned ,RW, default = 22'h200002,{reg_prot_phs_en,reg_hold_num[18:0],reg_prot_en,sw_rst}
#define FRC_WRAXI0_PROT_STAT                       0x3f41
//Bit 31:14 reserved
//Bit 13:0  ro_wraxi0_prot_stat           // unsigned ,RO, default = 0,{axi_wr_crash_num[9:0],axi_wr_crash_id[3:0]}
#define FRC_WRAXI1_PROT_CTRL                       0x3f45
//Bit 31:22 reserved
//Bit 21:0  reg_wraxi1_prot_ctrl          // unsigned ,RW, default = 22'h200002,{reg_prot_phs_en,reg_hold_num[18:0],reg_prot_en,sw_rst}
#define FRC_WRAXI1_PROT_STAT                       0x3f46
//Bit 31:14 reserved
//Bit 13:0  ro_wraxi1_prot_stat           // unsigned ,RO, default = 0,{axi_wr_crash_num[9:0],axi_wr_crash_id[3:0]}
//==================================================================================
#define CLKCTRL_ME_CLK_CNTL                    0x89
#define CLKCTRL_FRC_CLK_CNTL                   0x8a

#define INP_ME_WRMIF                           0x90b
/*mif RO stat, bit[0] = done flag*/
#define INP_ME_WRMIF_CTRL                      0x900
/*mif reg_crc_on , bit[31]*/
#define INP_ME_WRMIF_CRC1                      0x901
/*mif RO stat, component1 ro crc*/
#define INP_ME_WRMIF_CRC2                      0x902
/*mif RO stat, component2 ro crc*/
#define INP_ME_WRMIF_CRC3                      0x903
/*mif RO stat, component3 ro crc*/

#define INP_ME_RDMIF                           0x913
/*mif RO stat,no done flag, but can check ddr cmd/data difference*/
#define INP_ME_RDMIF_CTRL                      0x910
/*mif reg_crc_on , bit[31]*/
#define INP_ME_RDMIF_CRC1                      0x914
/*mif RO crc, odd pix crc*/
#define INP_ME_RDMIF_CRC2                      0x915
/*mif RO crc, even pix crc*/

#define INP_MC_WRMIF                           0x92B
/*mif RO stat, bit[0] = done flag*/
#define INP_MC_WRMIF_CTRL                      0x920
/*mif reg_crc_on , bit[31]*/
#define INP_MC_WRMIF_CRC1                      0x921
/*mif RO stat, component1 ro crc*/
#define INP_MC_WRMIF_CRC2                      0x922
/*mif RO stat, component2 ro crc*/
#define INP_MC_WRMIF_CRC3                      0x923
/*mif RO stat, component3 ro crc*/

/*vpu top ctl base addr: 0xff000000*/
#define VPU_FRC_TOP_CTRL                 0x278d

#define ENCL_SYNC_LINE_LENGTH            0x1c4c
#define ENCL_SYNC_PIXEL_EN               0x1c4d
#define ENCL_SYNC_TO_LINE_EN             0x1c4e

#define ENCL_VIDEO_MAX_LNCNT             0x1cbb
#define ENCL_FRC_CTRL                    0x1cdd
#define ENCL_VIDEO_VAVON_BLINE           0x1cb4
#define ENCL_VIDEO_MAX_PXCNT             0x1cb0

#define VD1_BLEND_SRC_CTRL               0x1dfb
#define VPP_POSTBLEND_VD1_H_START_END    0x1d1c
#define VPP_POSTBLEND_VD1_V_START_END    0x1d1d

extern void __iomem *frc_base;

/******************************************************************************/
extern u32 regdata_inpholdctl_0002;     // FRC_INP_HOLD_CTRL 0x0002
extern u32 regdata_outholdctl_0003;     // FRC_OUT_HOLD_CTRL 0x0003
extern u32 regdata_top_ctl_0007;        // FRC_REG_TOP_CTRL7  0x0007
extern u32 regdata_top_ctl_0009;        // FRC_REG_TOP_CTRL9
extern u32 regdata_top_ctl_0011;        // FRC_REG_TOP_CTRL17

extern u32 regdata_pat_pointer_0102;
extern u32 regdata_loadorgframe[16];    // 0x0103

extern u32 regdata_phs_tab_0116;

extern u32 regdata_blksizexy_012b;
extern u32 regdata_blkscale_012c;
extern u32 regdata_hme_scale_012d;

extern u32 regdata_logodbg_0142;         // FRC_LOGO_DEBUG    0x0142
extern u32 regdata_inpmoden_04f9;        // FRC_REG_INP_MODULE_EN  0x04f9
extern u32 regdata_iplogo_en_0503;       // FRC_IPLOGO_EN    0x0503
extern u32 regdata_bbd_t2b_0604;         // FRC_BBD_DETECT_REGION_TOP2BOT  0x0604
extern u32 regdata_bbd_l2r_0605;         // FRC_BBD_DETECT_REGION_LFT2RIT  0x0605

extern u32 regdata_me_en_1100;           // FRC_ME_EN   0x1100
extern u32 regdata_me_bbpixed_1108;      // FRC_ME_BB_PIX_ED  0x1108
extern u32 regdata_me_bbblked_110a;      // FRC_ME_BB_BLK_ED  0x110a
extern u32 regdata_me_stat12rhst_110b;   // FRC_ME_STAT_12R_HST  0x110b
extern u32 regdata_me_stat12rh_110c;     // FRC_ME_STAT_12R_H01  0x110c
extern u32 regdata_me_stat12rh_110d;     // FRC_ME_STAT_12R_H23  0x110d
extern u32 regdata_me_stat12rv_110e;     // FRC_ME_STAT_12R_V0   0x110e
extern u32 regdata_me_stat12rv_110f;     // FRC_ME_STAT_12R_V1   0x110f

extern u32 regdata_vpbb1_1e03;          // FRC_VP_BB_1      0x1e03
extern u32 regdata_vpbb2_1e04;          // FRC_VP_BB_2      0x1e04
extern u32 regdata_vpmebb1_1e05;        // FRC_VP_ME_BB_1   0x1e05
extern u32 regdata_vpmebb2_1e06;        // FRC_VP_ME_BB_2   0x1e06

extern u32 regdata_vp_win1_1e58;        // FRC_VP_REGION_WINDOW_1 0x1e58
extern u32 regdata_vp_win2_1e59;        // FRC_VP_REGION_WINDOW_2 0x1e59
extern u32 regdata_vp_win3_1e5a;        // FRC_VP_REGION_WINDOW_3 0x1e5a
extern u32 regdata_vp_win4_1e5b;        // FRC_VP_REGION_WINDOW_4 0x1e5b

extern u32 regdata_mcset1_3000;         // FRC_MC_SETTING1   0x3000
extern u32 regdata_mcset2_3001;         // FRC_MC_SETTING2   0x3001

extern u32 regdata_mcdemo_win_3200;     // FRC_MC_DEMO_WINDOW  0x3200
extern u32 regdata_topctl_3f01;

///////////////////////////////////////////////////////////////////////////////

extern u32 regdata_fd_enable_0700;      // FRC_FD_ENABLE     0x0700
extern u32 regdata_film_phs1_0117;      // FRC_REG_FILM_PHS_1     0x0117
extern u32 regdata_me_stat_glb_apl_156c;// FRC_ME_STAT_GLB_APL    0x156c

extern u32 regdata_fwd_phs_0146;        // FRC_REG_FWD_PHS     0x0146
extern u32 regdata_fwd_phs_ro_016f;     //  FRC_REG_FWD_PHS_RO   0x016f
extern u32 regdata_fwd_phs_adj_016b;    // FRC_REG_FWD_PHS_ADJ       0x016b
extern u32 regdata_load_frame_flag0_0149;     // FRC_REG_LOAD_FRAME_FLAG_0  0x0149
extern u32 regdata_load_frame_flag1_014a;     //  FRC_REG_LOAD_FRAME_FLAG_1  0x014a
extern u32 regdata_fwd_table_cnt_phaofs_016c; //  FRC_REG_FWD_TABLE_CNT_PHAOFS 0x016c
extern u32 regdata_fwd_sign_ro_016e;          //  FRC_REG_FWD_SIGN_RO  x016e
extern u32 regdata_fwd_fid_0147;              // FRC_REG_FWD_FID     0x0147
extern u32 regdata_fwd_fid_posi_0148;         // FRC_REG_FWD_FID_POSI   0x0148

extern int fw_idx;

/******************************************************************************/
inline void WRITE_FRC_REG(unsigned int reg, unsigned int val);
inline void WRITE_FRC_REG_BY_CPU(unsigned int reg, unsigned int val);

inline void WRITE_FRC_BITS(unsigned int reg, unsigned int value,
    unsigned int start, unsigned int len);
inline void UPDATE_FRC_REG_BITS(unsigned int reg, unsigned int value, unsigned int mask);
// #define UPDATE_FRC_REG_BITS(addr, val, mask) FRC_RDMA_VSYNC_REG_UPDATE(addr, val, mask)
inline void UPDATE_FRC_REG_BITS_1(unsigned int reg, unsigned int value, unsigned int mask);
inline int is_rdma_enable(void);

inline int READ_FRC_REG(unsigned int reg);
inline u32 READ_FRC_BITS(u32 reg, const u32 start, const u32 len);
inline u32 floor_rs(u32 ix, u32 rs);
inline u32 ceil_rx(u32 ix, u32 rs);
inline s32  negative_convert(s32 data, u32 fbits);
inline void frc_config_reg_value(u32 need_val, u32 mask, u32 *reg_val);
void check_fw_table(u8 flag);

#endif
