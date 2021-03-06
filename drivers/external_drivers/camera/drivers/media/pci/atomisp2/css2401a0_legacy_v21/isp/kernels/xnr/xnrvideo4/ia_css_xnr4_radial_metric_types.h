/*
 * INTEL CONFIDENTIAL
 *
 * Copyright (C) 2010 - 2015 Intel Corporation.
 * All Rights Reserved.
 *
 * The source code contained or described herein and all documents
 * related to the source code ("Material") are owned by Intel Corporation
 * or licensors. Title to the Material remains with Intel
 * Corporation or its licensors. The Material contains trade
 * secrets and proprietary and confidential information of Intel or its
 * licensors. The Material is protected by worldwide copyright
 * and trade secret laws and treaty provisions. No part of the Material may
 * be used, copied, reproduced, modified, published, uploaded, posted,
 * transmitted, distributed, or disclosed in any way without Intel's prior
 * express written permission.
 *
 * No License under any patent, copyright, trade secret or other intellectual
 * property right is granted to or conferred upon you by disclosure or
 * delivery of the Materials, either expressly, by implication, inducement,
 * estoppel or otherwise. Any license under such intellectual property rights
 * must be express and approved by Intel in writing.
 */
#ifndef __IA_CSS_XNR4_RADIAL_METRIC_TYPES_H
#define __IA_CSS_XNR4_RADIAL_METRIC_TYPES_H

#include "ia_css_xnr4_radial_metric_param.h"


/** XNR4 radial metric configuration .  */
struct ia_css_xnr4_radial_metric_config {
	int16_t m_rad_Xreset; /** < Radial metric X radial reset value */
	int16_t m_rad_Yreset; /** < Radial metric Y radial reset value */
	uint32_t m_rad_X2reset; /** < Radial metric X^2 radial reset value */
	uint32_t m_rad_Y2reset; /** < Radial metric Y^2 radial reset value */
	uint8_t m_rad_enable; /** < Radial metric enable radial computation */
	uint16_t m_rad_inv_r2; /** < Radial metric radial metric normalization factor */
};

#endif /* __IA_CSS_XNR4_RADIAL_METRIC_TYPES_H */
