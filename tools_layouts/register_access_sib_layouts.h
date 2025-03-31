/*
 * Copyright (C) Jan 2013 Mellanox Technologies Ltd. All rights reserved.
 *
 * This software is available to you under a choice of one of two
 * licenses.  You may choose to be licensed under the terms of the GNU
 * General Public License (GPL) Version 2, available from the file
 * COPYING in the main directory of this source tree, or the
 * OpenIB.org BSD license below:
 *
 *     Redistribution and use in source and binary forms, with or
 *     without modification, are permitted provided that the following
 *     conditions are met:
 *
 *      - Redistributions of source code must retain the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer.
 *
 *      - Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer in the documentation and/or other materials
 *        provided with the distribution.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

/***
 *** This file was generated at "2014-11-12 13:18:59"
 *** by:
 ***    > /mswg/release/eat_me/last_release/adabe_plugins/adb2c/adb2pack.py --input adb/register_access/register_access_sib.adb --file-prefix register_access_sib --prefix register_access_sib_
 ***/
#ifndef REGISTER_ACCESS_SIB_LAYOUTS_H
#define REGISTER_ACCESS_SIB_LAYOUTS_H


#ifdef __cplusplus
extern "C" {
#endif

#include "adb_to_c_utils.h"/* Description -   */
/* Size in bytes - 16 */
struct register_access_sib_IB_PSID_ {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description - PS - ID */
	/* 0.0 - 16.31 */
	 u_int32_t PS_ID[4];
};

/* Description -  SW Info */
/* Size in bytes - 32 */
struct register_access_sib_IB_SWInfo_ {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description -  */
	/* 0.0 - 0.7 */
	 u_int8_t VerSubMinor;
	/* Description -  */
	/* 0.8 - 0.15 */
	 u_int8_t VerMinor;
	/* Description -  */
	/* 0.16 - 0.23 */
	 u_int8_t VerMajor;
};

/* Description -  FW Info */
/* Size in bytes - 64 */
struct register_access_sib_IB_FWInfo_ {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description -  */
	/* 0.0 - 0.7 */
	 u_int8_t SubMinor;
	/* Description -  */
	/* 0.8 - 0.15 */
	 u_int8_t Minor;
	/* Description -  */
	/* 0.16 - 0.23 */
	 u_int8_t Major;
/*---------------- DWORD[1] (Offset 0x4) ----------------*/
	/* Description -  */
	/* 4.0 - 8.31 */
	 u_int32_t BuildID;
/*---------------- DWORD[2] (Offset 0x8) ----------------*/
	/* Description -  */
	/* 8.0 - 8.15 */
	 u_int16_t Year;
	/* Description -  */
	/* 8.16 - 8.23 */
	 u_int8_t Day;
	/* Description -  */
	/* 8.24 - 12.31 */
	 u_int8_t Month;
/*---------------- DWORD[3] (Offset 0xc) ----------------*/
	/* Description -  */
	/* 12.0 - 12.15 */
	 u_int16_t Hour;
/*---------------- DWORD[4] (Offset 0x10) ----------------*/
	/* Description -  */
	/* 16.0 - 32.31 */
	 struct register_access_sib_IB_PSID_ PSID;
/*---------------- DWORD[8] (Offset 0x20) ----------------*/
	/* Description -  */
	/* 32.0 - 36.31 */
	 u_int32_t INIFileNum;
/*---------------- DWORD[9] (Offset 0x24) ----------------*/
	/* Description -  */
	/* 36.0 - 40.31 */
	 u_int32_t extended_major;
/*---------------- DWORD[10] (Offset 0x28) ----------------*/
	/* Description -  */
	/* 40.0 - 44.31 */
	 u_int32_t extended_minor;
/*---------------- DWORD[11] (Offset 0x2c) ----------------*/
	/* Description -  */
	/* 44.0 - 48.31 */
	 u_int32_t extended_subminor;
};

/* Description -  HW Info */
/* Size in bytes - 32 */
struct register_access_sib_IB_HWInfo_ {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description -  */
	/* 0.0 - 0.15 */
	 u_int16_t DEVID;
	/* Description -  */
	/* 0.16 - 4.31 */
	 u_int16_t REVID;
/*---------------- DWORD[1] (Offset 0x4) ----------------*/
	/* Description - Maximum supported V_CORE voltage for the device. (in 50mV increments). */
	/* 4.0 - 4.4 */
	 u_int8_t pvs;
/*---------------- DWORD[2] (Offset 0x8) ----------------*/
	/* Description - the device_id in HW, used by tools */
	/* 8.0 - 8.15 */
	 u_int16_t hw_dev_id;
/*---------------- DWORD[7] (Offset 0x1c) ----------------*/
	/* Description - Time (in sec) since last reset */
	/* 28.0 - 32.31 */
	 u_int32_t UpTime;
};

/* Description -   */
/* Size in bytes - 128 */
struct register_access_sib_mgir {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description -  */
	/* 0.0 - 32.31 */
	 struct register_access_sib_IB_HWInfo_ HWInfo;
/*---------------- DWORD[8] (Offset 0x20) ----------------*/
	/* Description -  */
	/* 32.0 - 96.31 */
	 struct register_access_sib_IB_FWInfo_ FWInfo;
/*---------------- DWORD[24] (Offset 0x60) ----------------*/
	/* Description -  */
	/* 96.0 - 128.31 */
	 struct register_access_sib_IB_SWInfo_ SWInfo;
};

/*================= PACK/UNPACK/PRINT FUNCTIONS ======================*/
/* IB_PSID_ */
void register_access_sib_IB_PSID__pack(const struct register_access_sib_IB_PSID_ *ptr_struct, u_int8_t* ptr_buff);
void register_access_sib_IB_PSID__unpack(struct register_access_sib_IB_PSID_ *ptr_struct, const u_int8_t* ptr_buff);
void register_access_sib_IB_PSID__print(const struct register_access_sib_IB_PSID_ *ptr_struct, FILE* file, int indent_level);
int register_access_sib_IB_PSID__size();
#define REGISTER_ACCESS_SIB_IB_PSID__SIZE    (0x10)
void register_access_sib_IB_PSID__dump(const struct register_access_sib_IB_PSID_ *ptr_struct, FILE* file);
/* IB_SWInfo_ */
void register_access_sib_IB_SWInfo__pack(const struct register_access_sib_IB_SWInfo_ *ptr_struct, u_int8_t* ptr_buff);
void register_access_sib_IB_SWInfo__unpack(struct register_access_sib_IB_SWInfo_ *ptr_struct, const u_int8_t* ptr_buff);
void register_access_sib_IB_SWInfo__print(const struct register_access_sib_IB_SWInfo_ *ptr_struct, FILE* file, int indent_level);
int register_access_sib_IB_SWInfo__size();
#define REGISTER_ACCESS_SIB_IB_SWINFO__SIZE    (0x20)
void register_access_sib_IB_SWInfo__dump(const struct register_access_sib_IB_SWInfo_ *ptr_struct, FILE* file);
/* IB_FWInfo_ */
void register_access_sib_IB_FWInfo__pack(const struct register_access_sib_IB_FWInfo_ *ptr_struct, u_int8_t* ptr_buff);
void register_access_sib_IB_FWInfo__unpack(struct register_access_sib_IB_FWInfo_ *ptr_struct, const u_int8_t* ptr_buff);
void register_access_sib_IB_FWInfo__print(const struct register_access_sib_IB_FWInfo_ *ptr_struct, FILE* file, int indent_level);
int register_access_sib_IB_FWInfo__size();
#define REGISTER_ACCESS_SIB_IB_FWINFO__SIZE    (0x40)
void register_access_sib_IB_FWInfo__dump(const struct register_access_sib_IB_FWInfo_ *ptr_struct, FILE* file);
/* IB_HWInfo_ */
void register_access_sib_IB_HWInfo__pack(const struct register_access_sib_IB_HWInfo_ *ptr_struct, u_int8_t* ptr_buff);
void register_access_sib_IB_HWInfo__unpack(struct register_access_sib_IB_HWInfo_ *ptr_struct, const u_int8_t* ptr_buff);
void register_access_sib_IB_HWInfo__print(const struct register_access_sib_IB_HWInfo_ *ptr_struct, FILE* file, int indent_level);
int register_access_sib_IB_HWInfo__size();
#define REGISTER_ACCESS_SIB_IB_HWINFO__SIZE    (0x20)
void register_access_sib_IB_HWInfo__dump(const struct register_access_sib_IB_HWInfo_ *ptr_struct, FILE* file);
/* mgir */
void register_access_sib_mgir_pack(const struct register_access_sib_mgir *ptr_struct, u_int8_t* ptr_buff);
void register_access_sib_mgir_unpack(struct register_access_sib_mgir *ptr_struct, const u_int8_t* ptr_buff);
void register_access_sib_mgir_print(const struct register_access_sib_mgir *ptr_struct, FILE* file, int indent_level);
int register_access_sib_mgir_size();
#define REGISTER_ACCESS_SIB_MGIR_SIZE    (0x80)
void register_access_sib_mgir_dump(const struct register_access_sib_mgir *ptr_struct, FILE* file);

#ifdef __cplusplus
}
#endif

#endif // REGISTER_ACCESS_SIB_LAYOUTS_H
