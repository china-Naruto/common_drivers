// SPDX-License-Identifier: (GPL-2.0+ OR MIT)
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */

#include <linux/version.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/interrupt.h>
#include <linux/fs.h>
#include <linux/init.h>
#include <linux/device.h>
#include <linux/mm.h>
#include <linux/major.h>
#include <linux/platform_device.h>
#include <linux/mutex.h>
#include <linux/cdev.h>

#include <linux/amlogic/media/vout/hdmi_tx/hdmi_info_global.h>
#include <linux/amlogic/media/vout/hdmi_tx/hdmi_tx_module.h>
#include <linux/amlogic/media/vout/hdmi_tx/hdmi_tx_compliance.h>
#include <linux/amlogic/media/vout/hdmitx_common/hdmitx_dev_common.h>

#include "hw/common.h"

#define to_hdmitx20_dev(x)	container_of(x, struct hdmitx_dev, tx_comm)

static void hdmitx_set_spd_info(struct hdmitx_dev *hdmitx_device);
static void hdmi_set_vend_spec_infofram(struct hdmitx_dev *hdev,
					enum hdmi_vic videocode);

static struct hdmitx_vidpara hdmi_tx_video_params[] = {
	{
		.VIC		= HDMI_640x480p60,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_4_3,
		.cc		= CC_ITU601,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_480p60,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_4_3,
		.cc		= CC_ITU601,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_480p60_16x9,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU601,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_480p60_16x9_rpt,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= HDMI_4_TIMES_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU601,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_720p60,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_1080i60,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_480i60,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= HDMI_2_TIMES_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_4_3,
		.cc		= CC_ITU601,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_480i60_16x9,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= HDMI_2_TIMES_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU601,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_480i60_16x9_rpt,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= HDMI_4_TIMES_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU601,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_1440x480p60,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_4_3,
		.cc		= CC_ITU601,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_1080p60,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_576p50,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_4_3,
		.cc		= CC_ITU601,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_576p50_16x9,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU601,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_576p50_16x9_rpt,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= HDMI_4_TIMES_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU601,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_720p50,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_1080i50,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_720x576i50_4x3,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= HDMI_2_TIMES_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_4_3,
		.cc		= CC_ITU601,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_720x576i50_16x9,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= HDMI_2_TIMES_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU601,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_576i50_16x9_rpt,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= HDMI_4_TIMES_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU601,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_1080p50,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_1080p24,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_1080p25,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_1080p30,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_1080p120,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_3840x2160p30_16x9,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_3840x2160p25_16x9,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_3840x2160p24_16x9,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_4096x2160p24_256x135,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_4096x2160p25_256x135,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_4096x2160p30_256x135,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_4096x2160p50_256x135,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_4096x2160p60_256x135,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_3840x2160p60_16x9,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_3840x2160p50_16x9,
		.color_prefer   = HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio   = TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_2560x1080p50_64x27,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc = CC_ITU709,
		.ss = SS_SCAN_UNDER,
		.sc = SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMI_2560x1080p60_64x27,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc = CC_ITU709,
		.ss = SS_SCAN_UNDER,
		.sc = SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_640x480p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_4_3,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_800x480p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_800x600p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_4_3,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_854x480p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_852x480p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1024x600p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1024x768p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_4_3,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1152x864p75hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_4_3,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1280x600p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1280x768p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1280x800p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1280x960p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1280x1024p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_4_3,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1360x768p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1366x768p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1400x1050p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1440x900p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1440x2560p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc		= CC_ITU709,
		.ss		= SS_SCAN_UNDER,
		.sc		= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1600x900p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1600x1200p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1680x1050p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_1920x1200p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_2048x1080p24hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= ASPECT_RATIO_SAME_AS_SOURCE,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_2160x1200p90hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_4_3,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_2560x1080p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_2560x1440p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_2560x1600p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_2560x1440p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_BAR_VERT_HORIZ,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= TV_ASPECT_RATIO_16_9,
		.cc			= CC_ITU709,
		.ss			= SS_SCAN_UNDER,
		.sc			= SC_SCALE_HORIZ_VERT,
	},
	{
		.VIC		= HDMIV_3440x1440p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_INVALID,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= ASPECT_RATIO_SAME_AS_SOURCE,
		.cc = CC_NO_DATA,
		.ss = SS_NO_DATA,
		.sc = SC_NO_UINFORM,
	},
	{
		.VIC		= HDMIV_2400x1200p90hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_INVALID,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= ASPECT_RATIO_SAME_AS_SOURCE,
		.cc = CC_NO_DATA,
		.ss = SS_NO_DATA,
		.sc = SC_NO_UINFORM,
	},
	{
		.VIC		= HDMIV_3840x1080p60hz,
		.color_prefer	= HDMI_COLORSPACE_RGB,
		.color_depth	= COLORDEPTH_24B,
		.bar_info	= B_INVALID,
		.repeat_time	= NO_REPEAT,
		.aspect_ratio	= ASPECT_RATIO_SAME_AS_SOURCE,
		.cc = CC_NO_DATA,
		.ss = SS_NO_DATA,
		.sc = SC_NO_UINFORM,
	},
};

static struct
hdmitx_vidpara *hdmi_get_video_param(enum hdmi_vic videocode)
{
	struct hdmitx_vidpara *video_param = NULL;
	int  i;
	int count = ARRAY_SIZE(hdmi_tx_video_params);

	for (i = 0; i < count; i++) {
		if (videocode == hdmi_tx_video_params[i].VIC)
			break;
	}
	if (i < count)
		video_param = &hdmi_tx_video_params[i];
	return video_param;
}

static void hdmi_tx_construct_avi_packet(struct hdmitx_vidpara *video_param,
					 char *AVI_DB)
{
	unsigned char color, bar_info, aspect_ratio, cc, ss, sc, ec = 0;

	ss = video_param->ss;
	bar_info = video_param->bar_info;
	if (video_param->color == HDMI_COLORSPACE_YUV444)
		color = 2;
	else if (video_param->color == HDMI_COLORSPACE_YUV422)
		color = 1;
	else
		color = 0;
	AVI_DB[0] = (ss) | (bar_info << 2) | (1 << 4) | (color << 5);

	aspect_ratio = video_param->aspect_ratio;
	cc = video_param->cc;
	/*HDMI CT 7-24*/
	AVI_DB[1] = 8 | (aspect_ratio << 4) | (cc << 6);

	sc = video_param->sc;
	if (video_param->cc == CC_ITU601)
		ec = 0;
	if (video_param->cc == CC_ITU709)
		/*according to CEA-861-D, all other values are reserved*/
		ec = 1;
	AVI_DB[2] = (sc) | (ec << 4);

	AVI_DB[3] = video_param->VIC;
	if (video_param->VIC == HDMI_3840x2160p30_16x9 ||
	    video_param->VIC == HDMI_3840x2160p25_16x9 ||
	    video_param->VIC == HDMI_3840x2160p24_16x9 ||
	    video_param->VIC == HDMI_4096x2160p24_256x135)
		/*HDMI Spec V1.4b P151*/
		AVI_DB[3] = 0;

	AVI_DB[4] = video_param->repeat_time;
}

/************************************
 *	hdmitx protocol level interface
 *************************************/

/*
 * HDMI Identifier = HDMI_IEEE_OUI 0x000c03
 * If not, treated as a DVI Device
 */
static int is_dvi_device(struct rx_cap *prxcap)
{
	if (prxcap->ieeeoui != HDMI_IEEE_OUI)
		return 1;
	else
		return 0;
}

int hdmitx_set_display(struct hdmitx_dev *hdev, enum hdmi_vic videocode)
{
	struct hdmi_format_para *para = &hdev->tx_comm.fmt_para;
	struct hdmitx_vidpara *param = NULL;
	int i, ret = -1;
	unsigned char AVI_DB[32];
	unsigned char AVI_HB[32];

	AVI_HB[0] = TYPE_AVI_INFOFRAMES;
	AVI_HB[1] = AVI_INFOFRAMES_VERSION;
	AVI_HB[2] = AVI_INFOFRAMES_LENGTH;
	for (i = 0; i < 32; i++)
		AVI_DB[i] = 0;

	if (hdev->vend_id_hit)
		pr_info(VID "special tv detected\n");

	pr_info(VID "%s set VIC = %d\n", __func__, videocode);

	param = hdmi_get_video_param(videocode);
	hdev->cur_video_param = param;

	if (param) {
		/*cs/cd already validate before enter here, just set.*/
		param->color = para->cs;

		if (videocode >= HDMITX_VESA_OFFSET && para->cs != HDMI_COLORSPACE_RGB) {
			pr_err("hdmitx: VESA only support RGB format\n");
			para->cs = HDMI_COLORSPACE_RGB;
			para->cd = COLORDEPTH_24B;
		}

		if (hdev->hwop.setdispmode(hdev) >= 0) {
			/* HDMI CT 7-33 DVI Sink, no HDMI VSDB nor any
			 * other VSDB, No GB or DI expected
			 * TMDS_MODE[hdmi_config]
			 * 0: DVI Mode	   1: HDMI Mode
			 */
			if (is_dvi_device(&hdev->tx_comm.rxcap)) {
				pr_info(VID "Sink is DVI device\n");
				hdev->tx_hw.cntlconfig(&hdev->tx_hw,
					CONF_HDMI_DVI_MODE, DVI_MODE);
			} else {
				pr_info(VID "Sink is HDMI device\n");
				hdev->tx_hw.cntlconfig(&hdev->tx_hw,
					CONF_HDMI_DVI_MODE, HDMI_MODE);
			}
			hdmi_tx_construct_avi_packet(param, (char *)AVI_DB);

			if (videocode == HDMI_3840x2160p30_16x9 ||
			    videocode == HDMI_3840x2160p25_16x9 ||
			    videocode == HDMI_3840x2160p24_16x9 ||
			    videocode == HDMI_4096x2160p24_256x135)
				hdmi_set_vend_spec_infofram(hdev, videocode);
			else if ((!hdev->flag_3dfp) && (!hdev->flag_3dtb) &&
				 (!hdev->flag_3dss))
				hdmi_set_vend_spec_infofram(hdev, 0);
			else
				;

			if (hdev->tx_comm.allm_mode) {
				hdmitx_construct_vsif(&hdev->tx_comm, VT_ALLM, 1, NULL);
				hdev->tx_hw.cntlconfig(&hdev->tx_hw, CONF_CT_MODE,
					SET_CT_OFF);
			}
			hdev->tx_hw.cntlconfig(&hdev->tx_hw, CONF_CT_MODE,
				hdev->tx_comm.ct_mode);
			ret = 0;
		}
	}
	hdmitx_set_spd_info(hdev);

	return ret;
}

static void hdmi_set_vend_spec_infofram(struct hdmitx_dev *hdev,
					enum hdmi_vic videocode)
{
	int i;
	unsigned char VEN_DB[6];
	unsigned char VEN_HB[3];

	VEN_HB[0] = 0x81;
	VEN_HB[1] = 0x01;
	VEN_HB[2] = 0x5;

	if (videocode == 0) {	   /* For non-4kx2k mode setting */
		hdev->hwop.setpacket(HDMI_PACKET_VEND, NULL, VEN_HB);
		return;
	}

	if (hdev->tx_comm.rxcap.dv_info.block_flag == CORRECT ||
	    hdev->dv_src_feature == 1) {	   /* For dolby */
		return;
	}

	for (i = 0; i < 0x6; i++)
		VEN_DB[i] = 0;
	VEN_DB[0] = GET_OUI_BYTE0(HDMI_IEEE_OUI);
	VEN_DB[1] = GET_OUI_BYTE1(HDMI_IEEE_OUI);
	VEN_DB[2] = GET_OUI_BYTE2(HDMI_IEEE_OUI);
	VEN_DB[3] = 0x00;    /* 4k x 2k  Spec P156 */

	if (videocode == HDMI_3840x2160p30_16x9) {
		VEN_DB[3] = 0x20;
		VEN_DB[4] = 0x1;
	} else if (videocode == HDMI_3840x2160p25_16x9) {
		VEN_DB[3] = 0x20;
		VEN_DB[4] = 0x2;
	} else if (videocode == HDMI_3840x2160p24_16x9) {
		VEN_DB[3] = 0x20;
		VEN_DB[4] = 0x3;
	} else if (videocode == HDMI_4096x2160p24_256x135) {
		VEN_DB[3] = 0x20;
		VEN_DB[4] = 0x4;
	} else {
		;
	}
	hdev->hwop.setpacket(HDMI_PACKET_VEND, VEN_DB, VEN_HB);
}

int hdmi_set_3d(struct hdmitx_dev *hdev, int type, unsigned int param)
{
	int i;
	unsigned char VEN_DB[6];
	unsigned char VEN_HB[3];

	VEN_HB[0] = 0x81;
	VEN_HB[1] = 0x01;
	VEN_HB[2] = 0x6;
	if (type == T3D_DISABLE) {
		hdev->hwop.setpacket(HDMI_PACKET_VEND, NULL, VEN_HB);
	} else {
		for (i = 0; i < 0x6; i++)
			VEN_DB[i] = 0;
		VEN_DB[0] = GET_OUI_BYTE0(HDMI_IEEE_OUI);
		VEN_DB[1] = GET_OUI_BYTE1(HDMI_IEEE_OUI);
		VEN_DB[2] = GET_OUI_BYTE2(HDMI_IEEE_OUI);
		VEN_DB[3] = 0x40;
		VEN_DB[4] = type << 4;
		VEN_DB[5] = param << 4;
		hdev->hwop.setpacket(HDMI_PACKET_VEND, VEN_DB, VEN_HB);
	}
	return 0;
}

/* Set Source Product Descriptor InfoFrame
 */
static void hdmitx_set_spd_info(struct hdmitx_dev *hdev)
{
	unsigned char SPD_DB[25] = {0x00};
	unsigned char SPD_HB[3] = {0x83, 0x1, 0x19};
	unsigned int len = 0;
	struct vendor_info_data *vend_data;

	if (hdev->config_data.vend_data) {
		vend_data = hdev->config_data.vend_data;
	} else {
		pr_info(VID "packet: can\'t get vendor data\n");
		return;
	}
	if (vend_data->vendor_name) {
		len = strlen(vend_data->vendor_name);
		strncpy(&SPD_DB[0], vend_data->vendor_name,
			(len > 8) ? 8 : len);
	}
	if (vend_data->product_desc) {
		len = strlen(vend_data->product_desc);
		strncpy(&SPD_DB[8], vend_data->product_desc,
			(len > 16) ? 16 : len);
	}
	SPD_DB[24] = 0x1;
	hdev->hwop.setpacket(HDMI_SOURCE_DESCRIPTION, SPD_DB, SPD_HB);
}

int hdmitx_construct_vsif(struct hdmitx_common *tx_comm,
	enum vsif_type type, int on, void *param)
{
	struct hdmitx_dev *hdev = to_hdmitx20_dev(tx_comm);

	return hdmitx_dev_setup_vsif_packet(tx_comm, &hdev->tx_hw, type, on, param);
}
