#!/bin/bash
# SPDX-License-Identifier: (GPL-2.0+ OR MIT)
#
# Copyright (c) 2019 Amlogic, Inc. All rights reserved.
#
source ${KERNEL_DIR}/${COMMON_DRIVERS_DIR}/build.config.amlogic32

pre_defconfig_cmds

CC_CLANG=1

set_default_parameters_for_32bit

export USERCFLAGS USERLDFLAGS
export HOSTCC HOSTCXX CC LD AR NM OBJCOPY OBJDUMP OBJSIZE READELF STRIP PATH KCONFIG_CONFIG
export KERNEL_DIR ROOT_DIR OUT_DIR TOOL_ARGS MODULE_STRIP_FLAG DEPMOD INSTALL_MOD_DIR COMMON_OUT_DIR

mkdir -p ${DIST_DIR} ${MODULES_STAGING_DIR}

build_kernel_for_different_cpu_architecture

post_defconfig_cmds

eval ${POST_KERNEL_BUILD_CMDS}

build_ext_modules

generating_test_mappings_zip

set -x
eval ${EXTRA_CMDS}
set +x

copy_files_to_dist_dir

installing_UAPI_kernel_headers

copy_kernel_headers_to_compress

copy_modules_files_to_dist_dir

make_dtbo