/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Chinese
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_CN_H
#define LANGUAGE_CN_H

#define DISPLAY_CHARSET_ISO10646_CN
#define CHARSIZE 2

#define WELCOME_MSG                        MACHINE_NAME "\xa4\xa5\xa6\xa7"	//准备就绪
#define MSG_SD_INSERTED                     "\xe6\xf8\xa8\xa9\xaa\xab"	//存储卡已插入
#define MSG_SD_REMOVED                      "\x95\xaa\xab\xe6\xf8\xa8"	//请插入存储卡
#define MSG_MAIN                            "       \xae\xaf\xb0"	//主菜单
#define MSG_AUTOSTART                       "\xb1\xb2\xb3\xb4"		//自动开始
#define MSG_DISABLE_STEPPERS                "\x9b\x9c\xb7\xb8\xb9\xba"	//解锁步进电机
#define MSG_AUTO_HOME                       "\xbb\xbc\xbd"	//回原点
#define MSG_TMC_Z_CALIBRATION               "Calibrate Z"
#define MSG_LEVEL_BED_HOMING                "XYZ\xbb\xbc\xbd"	//XYZ回原点
#define MSG_LEVEL_BED_WAITING               "Click to Begin\xb3\xb4\xcf\xd0"	//开始调平
#define MSG_LEVEL_BED_DONE                  "Leveling Done!"	//调平完成！
#define MSG_SET_HOME_OFFSETS                "\xbe\xbf\xbb\xbc\xbd\xc0\xc1"	//设置回原点偏移
#define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"	//应用偏移
#define MSG_SET_ORIGIN                      "\xbe\xbf\xbc\xbd"	//设置原点
#define MSG_PREHEAT_1                       "\xc3\xc4 PLA"		//预热PLA
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " \xc5\xc6"	//预热PLA 所有
 #define MSG_PREHEAT_1_END                  MSG_PREHEAT_1 " \xd3\xd4"	//预热PLA 喷嘴
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " \xc4\xc7"	//预热PLA 热床
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " \xbe\xbf"	//预热PLA 设置
#define MSG_PREHEAT_2                       "\xc3\xc4 ABS"		//预热ABS
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " \xc5\xc6"	//预热ABS 所有
 #define MSG_PREHEAT_2_END                  MSG_PREHEAT_2 " \xd3\xd4"	//预热ABS 喷嘴
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " \xc4\xc7"	//预热ABS 热床
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " \xbe\xbf"	//预热ABS 设置
#define MSG_COOLDOWN                        "\xc8\xc9"	//降温
#define MSG_SWITCH_PS_ON                    "\xb9\xcb\xca\xb3"	//电源打开
#define MSG_SWITCH_PS_OFF                   "\xb9\xcb\xb5\xb6"	//电源关闭
#define MSG_EXTRUDE                         "\xcc\xad"	//挤出
#define MSG_RETRACT                         "\xbb\xcd"	//回抽
#define MSG_MOVE_AXIS                       "\xc1\xb2\xce"	//移动轴
#define MSG_BED_LEVELING                    "\xc4\xc7\xcf\xd0"	//热床调平
#define MSG_LEVEL_BED                       "\xc4\xc7\xcf\xe0"	//热床调平
#define MSG_LEVEL_CORNERS                   "Level corners"	//热床边角调平
#define MSG_NEXT_CORNER                     "Next corner"
#define MSG_MANUAL_BED_LEVEL                "\xc4\xc7\x8e\x8d\xcf\xd0"	//热床辅助调平
#define MSG_LEVEL_BED_NEXT_POINT            "\x8c\x8b\x8a\xbd"	//下一个点
#define MSG_NEXT_POINTER                    "\x8c\x8b\x8a\xbd"	//下一个点
#define MSG_BACK                            "\x94\xbb"			//返回
#define MSG_MOVE_X                          "\xc1\xb2 X"	//移动X
#define MSG_MOVE_Y                          "\xc1\xb2 Y"	//移动Y
#define MSG_MOVE_Z                          "\xc1\xb2 Z"	//移动Z
#define MSG_MOVE_E                          "\xcc\xad\xba"	//挤出机
#define MSG_MOVE_01MM                       "\xc1\xb2 0.1mm"	//移动 0.1mm
#define MSG_MOVE_1MM                        "\xc1\xb2 1mm"		//移动 1mm
#define MSG_MOVE_10MM                       "\xc1\xb2 10mm"		//移动 10mm
#define MSG_SPEED                           "\xd1\xd2"	//速度
#define MSG_NOZZLE                          "\xd3\xd4"	//喷嘴
#define MSG_BED                             "\xc4\xc7"	//热床
#define MSG_FAN_SPEED                       "\xd5\xd6\xd1\xd2"	//风扇速度
#define MSG_FLOW                            "\xcc\xad\xd1\xd2"	//挤出速度
#define MSG_CONTROL                         "\xbe\xbf"	//设置
#define MSG_MIN                             LCD_STR_THERMOMETER " \xda\xdb"		//最小
#define MSG_MAX                             LCD_STR_THERMOMETER " \xda\xdc"		//最大
#define MSG_FACTOR                          LCD_STR_THERMOMETER " \xdd\xde"		//当前
#define MSG_AUTOTEMP                        "\xb1\xb2\xd8\xc9"		//自动控温
#define MSG_ON                              "\xb3\x9a    "  //开启 intentional space to shift wide symbol to the left
#define MSG_OFF                             "\xb5\xb6    "  //关闭intentional space to shift wide symbol to the left
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Accel"
#define MSG_JERK                            "Jerk"
#if IS_KINEMATIC
  #define MSG_VA_JERK                       "Va-jerk"
  #define MSG_VB_JERK                       "Vb-jerk"
  #define MSG_VC_JERK                       "Vc-jerk"
#else
  #define MSG_VA_JERK                       "Vx-jerk"
  #define MSG_VB_JERK                       "Vy-jerk"
  #define MSG_VC_JERK                       "Vz-jerk"
#endif
#define MSG_VE_JERK                         "Ve-jerk"
 #define MSG_VELOCITY                       "\xd1\xd2"		//速度
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
 #define MSG_ACCELERATION                   "\xa3\xd1\xd2"	//加速度
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_A_TRAVEL                        "A-travel"
#define MSG_STEPS_PER_MM                    "\xa1\xa2/mm"	//脉冲/mm
#define MSG_ESTEPS                          "Esteps/mm"
#define MSG_E1STEPS                         "E1steps/mm"
#define MSG_E2STEPS                         "E2steps/mm"
#define MSG_E3STEPS                         "E3steps/mm"
#define MSG_E4STEPS                         "E4steps/mm"
#define MSG_E5STEPS                         "E5steps/mm"
#define MSG_TEMPERATURE                     "\xc9\xd2"		//温度
#define MSG_MOTION                          "\xdf\xb2"		//运动
#define MSG_FILAMENT                        "\xe0\xe1"		//耗材
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Dia."
#define MSG_CONTRAST                        "LCD \xe2\xe3\xd2"	//LCD对比度
#define MSG_STORE_EEPROM                    "\xe5\xe6\xbe\xbf"	//保存设置
#define MSG_LOAD_EEPROM                     "\xe4\xab\xbe\xbf"	//载入设置
#define MSG_RESTORE_FAILSAFE                "\xe7\xe8\xad\xe9\xbe\xbf"	//恢复出厂设置
 #define MSG_INIT_EEPROM                    "\x9f\xb4\xa0\xbe\xbf"	//初始化设置
#define MSG_REFRESH                         "\x92\x91"	//刷新
#define MSG_WATCH                           "       \xec\xed\xee\xef"	//信息界面
#define MSG_PREPARE                         "\xa4\xa5"	//准备
#define MSG_TUNE                            "\xcf\xf0"	//调整
#define MSG_PAUSE_PRINT                     "\xf1\xf2\xca\xf3"	//暂停打印
#define MSG_RESUME_PRINT                    "\xf4\xf5\xca\xf3"	//继续打印
#define MSG_STOP_PRINT                      "\xf2\xf6\xca\xf3"	//停止打印
 #define MSG_POWER_LOSS_RECOVERY            "Power-Loss Recovery"	//断电恢复
#define MSG_CARD_MENU                       "\x96\xe6\xf8\xa8\xca\xf3"	//从存储卡卡打印
#define MSG_NO_CARD                         "\xf9\xe6\xf8\xa8"	//无存储卡
#define MSG_DWELL                           "Sleep..."	//休眠中
#define MSG_USERWAIT                        "\xbd\x93\xf4\xf5..."	//点"击"继续
#define MSG_PRINT_PAUSED                   "\xca\xf3\xf1\xf2"		//打印暂停
 #define MSG_PRINTING                       "\xca\xf3..."	//打印中...
#define MSG_PRINT_ABORTED                   "\xca\xf3\xa9\x90\x87"		//打印已取消
#define MSG_NO_MOVE                         "No move."
#define MSG_KILLED                          "KILLED. "
#define MSG_STOPPED                         "STOPPED. "
#define MSG_CONTROL_RETRACT                 "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "\xea\x9d\xe0\xe1"	//更换耗材
#define MSG_INIT_SDCARD                     "Init. SD card"
#define MSG_CNG_SDCARD                      "Change SD card"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "first"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_HEATING_FAILED_LCD              "Heating failed"
#define MSG_HEATING_FAILED_LCD_BED         "Bed heating failed"
#define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#define MSG_THERMAL_RUNAWAY_BED            "BED THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     "Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 "Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                "Err: MINTEMP BED"
#define MSG_ERR_Z_HOMING                    MSG_HOME " " MSG_X MSG_Y " " MSG_FIRST
#define MSG_HALTED                          "PRINTER HALTED"
#define MSG_PLEASE_RESET                    "Please reset"
#define MSG_HEATING                         "Heating..."
#define MSG_BED_HEATING                     "Bed heating..."
#define MSG_DELTA_CALIBRATE                 "Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               "Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               "Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibrate Center"
#define MSG_CASE_LIGHT                     "\x97\x98LED"	//照明LED
#define MSG_CASE_LIGHT_BRIGHTNESS          "\x99\xd2"		//亮度  
#define MSG_X_HEIGHT_ADJUST                "X \x89\xd2\x88\xa4"  //X高度校准
#define MSG_Z_TOP                          "Z Top" 
#define MSG_REV_MENU                       "\x83\x82"			//版本
#define MSG_BOARD_REV_MENU                 "\xae\x86\xec\xed"	//主板信息
#define MSG_FIRMW_REV_MENU                 "\x85\x84\xec\xed"	//固件信息



#if LCD_WIDTH >= 20	  
	#define MSG_INFO_PRINT_COUNT              "Print Count"
	#define MSG_INFO_COMPLETED_PRINTS         "Completed"	  
	#define MSG_INFO_PRINT_TIME               "Total print time"	  
	#define MSG_INFO_PRINT_LONGEST            "Longest job time"	 
	#define MSG_INFO_PRINT_FILAMENT           "Extruded total"	 
#else	  
	#define MSG_INFO_PRINT_COUNT              "Prints"	 
	#define MSG_INFO_COMPLETED_PRINTS         "Completed"
	#define MSG_INFO_PRINT_TIME               "Total"
	#define MSG_INFO_PRINT_LONGEST            "Longest"
	#define MSG_INFO_PRINT_FILAMENT           "Extruded"
#endif

  #define MSG_INFO_MIN_TEMP                   "Min Temp"
  #define MSG_INFO_MAX_TEMP                   "Max Temp"
  #define MSG_INFO_PSU                        "PSU"
  #define MSG_DRIVE_STRENGTH                  "\x9e\xb2\xb9\xd7\xbe\xbf"	//驱动电流设置
  #define MSG_DAC_PERCENT                     "Driver %"
  #define MSG_DAC_EEPROM_WRITE                "DAC EEPROM Write"
  #define MSG_FILAMENT_CHANGE_HEADER_PAUSE    "PRINT PAUSED"
  #define MSG_FILAMENT_CHANGE_HEADER_LOAD     "LOAD FILAMENT"
  #define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   "UNLOAD FILAMENT"
  #define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
  #define MSG_FILAMENT_CHANGE_OPTION_PURGE    "Purge more"
  #define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Continue"
  #define MSG_FILAMENT_CHANGE_NOZZLE          "  Nozzle: "
  #define MSG_ERR_HOMING_FAILED               "Homing failed"
  #define MSG_ERR_PROBING_FAILED              "Probing failed"
  #define MSG_M600_TOO_COLD                   "M600: Too cold"



//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
	#if LCD_HEIGHT >= 4
	 
	    #define MSG_FILAMENT_CHANGE_INIT_1          "Please wait..."//"Wait for start"
//	    #define MSG_FILAMENT_CHANGE_INIT_2          "of the filament"
//	    #define MSG_FILAMENT_CHANGE_INIT_3          "change"
	 
	    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Wait for"
	    #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filament unload"
	 
	    #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert and Click"//"Insert filament"
//	    #define MSG_FILAMENT_CHANGE_INSERT_2        "and press button"
//	    #define MSG_FILAMENT_CHANGE_INSERT_3        "to continue..."

	    #define MSG_FILAMENT_CHANGE_HEAT_1          "Click and Heat"
//	    #define MSG_FILAMENT_CHANGE_HEAT_2          "heat nozzle."
	 
	    #define MSG_FILAMENT_CHANGE_HEATING_1       "Heating..."//"Heating nozzle"
//	    #define MSG_FILAMENT_CHANGE_HEATING_2       "Please wait..."

	    #define MSG_FILAMENT_CHANGE_LOAD_1          "Wait for"
	    #define MSG_FILAMENT_CHANGE_LOAD_2          "filament load"
	 
	    #define MSG_FILAMENT_CHANGE_PURGE_1         "Purging..."//"Wait for"
//	    #define MSG_FILAMENT_CHANGE_PURGE_2         "filament purge"

	    #define MSG_FILAMENT_CHANGE_RESUME_1        "Wait for print"
	    #define MSG_FILAMENT_CHANGE_RESUME_2        "to resume"
	 
	#else // LCD_HEIGHT < 4
	  
	    #define MSG_FILAMENT_CHANGE_INIT_1          "Please wait..."
	 
	    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Ejecting..."

	    #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert and Click"
	 
	    #define MSG_FILAMENT_CHANGE_HEATING_1       "Heating..."

	    #define MSG_FILAMENT_CHANGE_LOAD_1          "Loading..."
	 
	    #define MSG_FILAMENT_CHANGE_PURGE_1         "Purging..."
	 
	    #define MSG_FILAMENT_CHANGE_RESUME_1        "Resuming..."

	#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_CN_H
