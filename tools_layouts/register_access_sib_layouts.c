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
#include "register_access_sib_layouts.h"

void register_access_sib_IB_PSID__pack(const struct register_access_sib_IB_PSID_ *ptr_struct, u_int8_t* ptr_buff){
	u_int32_t offset;
	int i=0;
	(void)offset;
	(void)i;
	(void)ptr_struct;
	(void)ptr_buff;

	for (i=0; i < 4; i++) {
	offset=adb2c_calc_array_field_address(0, 32, i, 128, 1);
	adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int64_t)ptr_struct->PS_ID[i]);
	}

}

void register_access_sib_IB_PSID__unpack(struct register_access_sib_IB_PSID_ *ptr_struct, const u_int8_t* ptr_buff){
	u_int32_t offset;
	int i=0;
	(void)offset;
	(void)i;
	(void)ptr_struct;
	(void)ptr_buff;

	for (i=0; i < 4; i++) {
	offset=adb2c_calc_array_field_address(0, 32, i, 128, 1);
	ptr_struct->PS_ID[i] = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);
	}

}

void register_access_sib_IB_PSID__print(const struct register_access_sib_IB_PSID_ *ptr_struct, FILE* file, int indent_level){
	adb2c_add_indentation(file, indent_level);
	fprintf(file, "======== IB_PSID_ ========\n");
	int i=0;
	(void)i;(void)ptr_struct;
	(void)file;
	(void)indent_level;

	for (i=0; i < 4; i++) {
	adb2c_add_indentation(file, indent_level);
	fprintf(file, "PS_ID[%3d]           : "U32H_FMT"\n", i, ptr_struct->PS_ID[i]);
	}

}

int register_access_sib_IB_PSID__size(){
	 return 16;
}

void register_access_sib_IB_PSID__dump(const struct register_access_sib_IB_PSID_ *ptr_struct, FILE* file) {
	register_access_sib_IB_PSID__print(ptr_struct, file, 0);
}

void register_access_sib_IB_SWInfo__pack(const struct register_access_sib_IB_SWInfo_ *ptr_struct, u_int8_t* ptr_buff){
	u_int32_t offset;
	int i=0;
	(void)offset;
	(void)i;
	(void)ptr_struct;
	(void)ptr_buff;

	offset=24;
	adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->VerSubMinor);

	offset=16;
	adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->VerMinor);

	offset=8;
	adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->VerMajor);

}

void register_access_sib_IB_SWInfo__unpack(struct register_access_sib_IB_SWInfo_ *ptr_struct, const u_int8_t* ptr_buff){
	u_int32_t offset;
	int i=0;
	(void)offset;
	(void)i;
	(void)ptr_struct;
	(void)ptr_buff;

	offset=24;
	ptr_struct->VerSubMinor = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);

	offset=16;
	ptr_struct->VerMinor = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);

	offset=8;
	ptr_struct->VerMajor = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);

}

void register_access_sib_IB_SWInfo__print(const struct register_access_sib_IB_SWInfo_ *ptr_struct, FILE* file, int indent_level){
	adb2c_add_indentation(file, indent_level);
	fprintf(file, "======== IB_SWInfo_ ========\n");
	int i=0;
	(void)i;(void)ptr_struct;
	(void)file;
	(void)indent_level;

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "VerSubMinor          : "UH_FMT"\n", ptr_struct->VerSubMinor);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "VerMinor             : "UH_FMT"\n", ptr_struct->VerMinor);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "VerMajor             : "UH_FMT"\n", ptr_struct->VerMajor);

}

int register_access_sib_IB_SWInfo__size(){
	 return 32;
}

void register_access_sib_IB_SWInfo__dump(const struct register_access_sib_IB_SWInfo_ *ptr_struct, FILE* file) {
	register_access_sib_IB_SWInfo__print(ptr_struct, file, 0);
}

void register_access_sib_IB_FWInfo__pack(const struct register_access_sib_IB_FWInfo_ *ptr_struct, u_int8_t* ptr_buff){
	u_int32_t offset;
	int i=0;
	(void)offset;
	(void)i;
	(void)ptr_struct;
	(void)ptr_buff;

	offset=24;
	adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->SubMinor);

	offset=16;
	adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->Minor);

	offset=8;
	adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->Major);

	offset=32;
	adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int64_t)ptr_struct->BuildID);

	offset=80;
	adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->Year);

	offset=72;
	adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->Day);

	offset=64;
	adb2c_push_bits_to_buff(ptr_buff, offset, 8, (u_int32_t)ptr_struct->Month);

	offset=112;
	adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->Hour);

	offset=128;
	register_access_sib_IB_PSID__pack(&(ptr_struct->PSID), ptr_buff + offset/8);

	offset=256;
	adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int64_t)ptr_struct->INIFileNum);

	offset=288;
	adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int64_t)ptr_struct->extended_major);

	offset=320;
	adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int64_t)ptr_struct->extended_minor);

	offset=352;
	adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int64_t)ptr_struct->extended_subminor);

}

void register_access_sib_IB_FWInfo__unpack(struct register_access_sib_IB_FWInfo_ *ptr_struct, const u_int8_t* ptr_buff){
	u_int32_t offset;
	int i=0;
	(void)offset;
	(void)i;
	(void)ptr_struct;
	(void)ptr_buff;

	offset=24;
	ptr_struct->SubMinor = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);

	offset=16;
	ptr_struct->Minor = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);

	offset=8;
	ptr_struct->Major = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);

	offset=32;
	ptr_struct->BuildID = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);

	offset=80;
	ptr_struct->Year = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);

	offset=72;
	ptr_struct->Day = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);

	offset=64;
	ptr_struct->Month = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 8);

	offset=112;
	ptr_struct->Hour = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);

	offset=128;
	register_access_sib_IB_PSID__unpack(&(ptr_struct->PSID), ptr_buff + offset/8);

	offset=256;
	ptr_struct->INIFileNum = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);

	offset=288;
	ptr_struct->extended_major = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);

	offset=320;
	ptr_struct->extended_minor = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);

	offset=352;
	ptr_struct->extended_subminor = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);

}

void register_access_sib_IB_FWInfo__print(const struct register_access_sib_IB_FWInfo_ *ptr_struct, FILE* file, int indent_level){
	adb2c_add_indentation(file, indent_level);
	fprintf(file, "======== IB_FWInfo_ ========\n");
	int i=0;
	(void)i;(void)ptr_struct;
	(void)file;
	(void)indent_level;

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "SubMinor             : "UH_FMT"\n", ptr_struct->SubMinor);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "Minor                : "UH_FMT"\n", ptr_struct->Minor);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "Major                : "UH_FMT"\n", ptr_struct->Major);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "BuildID              : "U32H_FMT"\n", ptr_struct->BuildID);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "Year                 : "UH_FMT"\n", ptr_struct->Year);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "Day                  : "UH_FMT"\n", ptr_struct->Day);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "Month                : "UH_FMT"\n", ptr_struct->Month);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "Hour                 : "UH_FMT"\n", ptr_struct->Hour);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "PSID:\n");
	register_access_sib_IB_PSID__print(&(ptr_struct->PSID), file, indent_level + 1);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "INIFileNum           : "U32H_FMT"\n", ptr_struct->INIFileNum);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "extended_major       : "U32H_FMT"\n", ptr_struct->extended_major);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "extended_minor       : "U32H_FMT"\n", ptr_struct->extended_minor);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "extended_subminor    : "U32H_FMT"\n", ptr_struct->extended_subminor);

}

int register_access_sib_IB_FWInfo__size(){
	 return 64;
}

void register_access_sib_IB_FWInfo__dump(const struct register_access_sib_IB_FWInfo_ *ptr_struct, FILE* file) {
	register_access_sib_IB_FWInfo__print(ptr_struct, file, 0);
}

void register_access_sib_IB_HWInfo__pack(const struct register_access_sib_IB_HWInfo_ *ptr_struct, u_int8_t* ptr_buff){
	u_int32_t offset;
	int i=0;
	(void)offset;
	(void)i;
	(void)ptr_struct;
	(void)ptr_buff;

	offset=16;
	adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->DEVID);

	offset=0;
	adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->REVID);

	offset=59;
	adb2c_push_bits_to_buff(ptr_buff, offset, 5, (u_int32_t)ptr_struct->pvs);

	offset=80;
	adb2c_push_bits_to_buff(ptr_buff, offset, 16, (u_int32_t)ptr_struct->hw_dev_id);

	offset=224;
	adb2c_push_integer_to_buff(ptr_buff, offset, 4, (u_int64_t)ptr_struct->UpTime);

}

void register_access_sib_IB_HWInfo__unpack(struct register_access_sib_IB_HWInfo_ *ptr_struct, const u_int8_t* ptr_buff){
	u_int32_t offset;
	int i=0;
	(void)offset;
	(void)i;
	(void)ptr_struct;
	(void)ptr_buff;

	offset=16;
	ptr_struct->DEVID = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);

	offset=0;
	ptr_struct->REVID = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);

	offset=59;
	ptr_struct->pvs = (u_int8_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 5);

	offset=80;
	ptr_struct->hw_dev_id = (u_int16_t)adb2c_pop_bits_from_buff(ptr_buff, offset, 16);

	offset=224;
	ptr_struct->UpTime = (u_int32_t)adb2c_pop_integer_from_buff(ptr_buff, offset, 4);

}

void register_access_sib_IB_HWInfo__print(const struct register_access_sib_IB_HWInfo_ *ptr_struct, FILE* file, int indent_level){
	adb2c_add_indentation(file, indent_level);
	fprintf(file, "======== IB_HWInfo_ ========\n");
	int i=0;
	(void)i;(void)ptr_struct;
	(void)file;
	(void)indent_level;

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "DEVID                : "UH_FMT"\n", ptr_struct->DEVID);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "REVID                : "UH_FMT"\n", ptr_struct->REVID);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "pvs                  : "UH_FMT"\n", ptr_struct->pvs);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "hw_dev_id            : "UH_FMT"\n", ptr_struct->hw_dev_id);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "UpTime               : "U32H_FMT"\n", ptr_struct->UpTime);

}

int register_access_sib_IB_HWInfo__size(){
	 return 32;
}

void register_access_sib_IB_HWInfo__dump(const struct register_access_sib_IB_HWInfo_ *ptr_struct, FILE* file) {
	register_access_sib_IB_HWInfo__print(ptr_struct, file, 0);
}

void register_access_sib_mgir_pack(const struct register_access_sib_mgir *ptr_struct, u_int8_t* ptr_buff){
	u_int32_t offset;
	int i=0;
	(void)offset;
	(void)i;
	(void)ptr_struct;
	(void)ptr_buff;

	offset=0;
	register_access_sib_IB_HWInfo__pack(&(ptr_struct->HWInfo), ptr_buff + offset/8);

	offset=256;
	register_access_sib_IB_FWInfo__pack(&(ptr_struct->FWInfo), ptr_buff + offset/8);

	offset=768;
	register_access_sib_IB_SWInfo__pack(&(ptr_struct->SWInfo), ptr_buff + offset/8);

}

void register_access_sib_mgir_unpack(struct register_access_sib_mgir *ptr_struct, const u_int8_t* ptr_buff){
	u_int32_t offset;
	int i=0;
	(void)offset;
	(void)i;
	(void)ptr_struct;
	(void)ptr_buff;

	offset=0;
	register_access_sib_IB_HWInfo__unpack(&(ptr_struct->HWInfo), ptr_buff + offset/8);

	offset=256;
	register_access_sib_IB_FWInfo__unpack(&(ptr_struct->FWInfo), ptr_buff + offset/8);

	offset=768;
	register_access_sib_IB_SWInfo__unpack(&(ptr_struct->SWInfo), ptr_buff + offset/8);

}

void register_access_sib_mgir_print(const struct register_access_sib_mgir *ptr_struct, FILE* file, int indent_level){
	adb2c_add_indentation(file, indent_level);
	fprintf(file, "======== mgir ========\n");
	int i=0;
	(void)i;(void)ptr_struct;
	(void)file;
	(void)indent_level;

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "HWInfo:\n");
	register_access_sib_IB_HWInfo__print(&(ptr_struct->HWInfo), file, indent_level + 1);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "FWInfo:\n");
	register_access_sib_IB_FWInfo__print(&(ptr_struct->FWInfo), file, indent_level + 1);

	adb2c_add_indentation(file, indent_level);
	fprintf(file, "SWInfo:\n");
	register_access_sib_IB_SWInfo__print(&(ptr_struct->SWInfo), file, indent_level + 1);

}

int register_access_sib_mgir_size(){
	 return 128;
}

void register_access_sib_mgir_dump(const struct register_access_sib_mgir *ptr_struct, FILE* file) {
	register_access_sib_mgir_print(ptr_struct, file, 0);
}

