/*
 * OTB-IOT - Out of The Box Internet Of Things
 *
 * Copyright (C) 2016 Piers Finlayson
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version. 
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of  MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for 
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

char otb_log_s[OTB_MAIN_MAX_LOG_LENGTH];
char otb_compile_date[12];
char otb_compile_time[9];
char otb_version_id[OTB_MAIN_MAX_VERSION_LENGTH];
void configModeCallback();
char ssid[32];
char OTB_MAIN_CHIPID[OTB_MAIN_CHIPID_STR_LENGTH];
char OTB_MAIN_DEVICE_ID[20];
volatile os_timer_t init_timer;
 
extern void user_init(void);

