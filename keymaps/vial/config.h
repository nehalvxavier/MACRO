// Copyright 2023 Nehal (@nehalvxavier)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define VIAL_KEYBOARD_UID {0x76, 0x94, 0xED, 0x12, 0x52, 0x04, 0x3B, 0xAF}

#define ENCODERS_PAD_A { GP2, GP4 }
#define ENCODERS_PAD_B { GP3, GP5 }
#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTIONS { 4, 2 }
#define ENCODER_MAP_KEY_DELAY 10

#define I2C1_SCL_PIN GP27
#define I2C1_SDA_PIN GP26