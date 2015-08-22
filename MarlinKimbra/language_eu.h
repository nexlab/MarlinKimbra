/**
 * Basque-Euskera
 *
 * LCD Menu Messages
 * See also documentation/LCDLanguageFont.md
 *
 */
#ifndef LANGUAGE_EU_H
#define LANGUAGE_EU_H

#define MAPPER_NON
// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
//#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME " prest."
#define MSG_SD_INSERTED                     "Txartela sartuta"
#define MSG_SD_REMOVED                      "Txartela kenduta"
#define MSG_MAIN                            "Menu nagusia"
#define MSG_AUTOSTART                       "Auto hasiera"
#define MSG_DISABLE_STEPPERS                "Itzali motoreak"
#define MSG_AUTO_HOME                       "Hasierara joan"
#define MSG_BED_SETTING                     "Bed Setting"
#define MSG_LP_INTRO                        " Leveling bed...       Press to start  "
#define MSG_LP_1                            " Adjust first point  & Press the button"
#define MSG_LP_2                            " Adjust second point & Press the button"
#define MSG_LP_3                            " Adjust third point  & Press the button"
#define MSG_LP_4                            " Adjust fourth point & Press the button"
#define MSG_LP_5                            "     Is it ok?         Press to end"       
#define MSG_LP_6                            " BED leveled!"
#define MSG_SET_HOME_OFFSETS                "Set home offsets"
#define MSG_SET_ORIGIN                      "Hasiera ipini"
#define MSG_PREHEAT_PLA                     "Aurreberotu PLA"
#define MSG_PREHEAT_PLA_ALL                 "Berotu PLA Guztia"
#define MSG_PREHEAT_PLA_BEDONLY             "Berotu PLA Ohea"
#define MSG_PREHEAT_PLA_SETTINGS            "Berotu PLA Konfig"
#define MSG_PREHEAT_ABS                     "Aurreberotu ABS"
#define MSG_PREHEAT_ABS_ALL                 "Berotu ABS Guztia"
#define MSG_PREHEAT_ABS_BEDONLY             "Berotu ABS Ohea"
#define MSG_PREHEAT_ABS_SETTINGS            "Berotu ABS Konfig"
#define MSG_PREHEAT_GUM                     "Preheat GUM"
#define MSG_PREHEAT_GUM_ALL                 "Preheat GUM All"
#define MSG_PREHEAT_GUM_BEDONLY             "Preheat GUM Bed"
#define MSG_PREHEAT_GUM_SETTINGS            "Preheat GUM conf"
#define MSG_COOLDOWN                        "Hoztu"
#define MSG_SWITCH_PS_ON                    "Energia piztu"
#define MSG_SWITCH_PS_OFF                   "Energia itzali"
#define MSG_EXTRUDE                         "Estruitu"
#define MSG_RETRACT                         "Atzera eragin"
#define MSG_MOVE_AXIS                       "Ardatzak mugitu"
#define MSG_MOVE_X                          "Mugitu X"
#define MSG_MOVE_Y                          "Mugitu Y"
#define MSG_MOVE_Z                          "Mugitu Z"
#define MSG_MOVE_E                          "Estrusorea"
#define MSG_MOVE_01MM                       "Mugitu 0.1mm"
#define MSG_MOVE_1MM                        "Mugitu 1mm"
#define MSG_MOVE_10MM                       "Mugitu 10mm"
#define MSG_SPEED                           "Abiadura"
#define MSG_NOZZLE                          "Pita"
#define MSG_BED                             "Ohea"
#define MSG_FAN_SPEED                       "Haizagailua"
#define MSG_FLOW                            "Fluxua"
#define MSG_CONTROL                         "Kontrola"
#define MSG_MIN                             " " STR_THERMOMETER " Min"
#define MSG_MAX                             " " STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " STR_THERMOMETER " Fact"
#define MSG_IDLEOOZING                      "Anti oozing"
#define MSG_AUTOTEMP                        "Auto tenperatura"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_ACC                             "Azelerazioa"
#define MSG_VXY_JERK                        "Vxy-astindua"
#define MSG_VZ_JERK                         "Vz-astindua"
#define MSG_VE_JERK                         "Ve-astindua"
#define MSG_VMAX                            "Vmax "
#define MSG_X                               "x"
#define MSG_Y                               "y"
#define MSG_Z                               "z"
#define MSG_E                               "e"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retrakt"
#define MSG_A_TRAVEL                        "A-travel"
#define MSG_XSTEPS                          "X pausoak/mm"
#define MSG_YSTEPS                          "Y pausoak/mm"
#define MSG_ZSTEPS                          "Z pausoak/mm"
#define MSG_E0STEPS                         "E pausoak/mm"
#define MSG_E1STEPS                         "E1 pausoak/mm"
#define MSG_E2STEPS                         "E2 pausoak/mm"
#define MSG_E3STEPS                         "E3 pausoak/mm"
#define MSG_TEMPERATURE                     "Tenperatura"
#define MSG_MOTION                          "Mugimendua"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm" STR_h3
#define MSG_FILAMENT_SIZE_EXTRUDER          "Fil. Dia."
#define MSG_CONTRAST                        "LCD kontrastea"
#define MSG_STORE_EPROM                     "Gorde memoria"
#define MSG_LOAD_EPROM                      "Kargatu memoria"
#define MSG_RESTORE_FAILSAFE                "Larri. berriz."
#define MSG_REFRESH                         "Berriz kargatu"
#define MSG_WATCH                           "Pantaila info"
#define MSG_PREPARE                         "Prestatu"
#define MSG_TUNE                            "Doitu"
#define MSG_PAUSE_PRINT                     "Pausatu inprimak."
#define MSG_RESUME_PRINT                    "Jarraitu inprima."
#define MSG_STOP_PRINT                      "Gelditu inprima."
#define MSG_CARD_MENU                       "SD-tik inprimatu"
#define MSG_NO_CARD                         "Ez dago txartelik"
#define MSG_DWELL                           "Lo egin..."
#define MSG_USERWAIT                        "Aginduak zain..."
#define MSG_RESUMING                        "Jarraitzen inpri."
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "Mugimendu gabe"
#define MSG_KILLED                          "LARRIALDI GELDIA"
#define MSG_STOPPED                         "GELDITUTA. "
#define MSG_CONTROL_RETRACT                 "Atzera egin mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Atzera egin mm"
#define MSG_CONTROL_RETRACTF                "Atzera egin V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Igo mm"
#define MSG_CONTROL_RETRACT_RECOVER         "Atzera egin +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Swap Atzera egin +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "Atzera egin V"
#define MSG_AUTORETRACT                     "Atzera egin"
#define MSG_FILAMENTCHANGE                  "Aldatu filament."
#define MSG_INIT_SDCARD                     "Hasieratu txartela"
#define MSG_CNG_SDCARD                      "Aldatu txartela"
#define MSG_ZPROBE_OUT                      "Z ohe hasiera"
#define MSG_POSITION_UNKNOWN                "Posizio ezezaguna"
#define MSG_ZPROBE_ZOFFSET                  "Z konpentsatu"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop deuseztat"

#define MSG_HEATING_FAILED_LCD              "Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP ERROR"
#define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     "Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 "Err: MAXTEMP BED"

#if MECH(DELTA)
  #define MSG_DELTA_CALIBRATE               "Delta Calibration"
  #define MSG_DELTA_CALIBRATE_X             "Calibrate X"
  #define MSG_DELTA_CALIBRATE_Y             "Calibrate Y"
  #define MSG_DELTA_CALIBRATE_Z             "Calibrate Z"
  #define MSG_DELTA_CALIBRATE_CENTER        "Calibrate Center"
#endif // DELTA

#if MECH(SCARA)
  #define MSG_XSCALE                        "X Scale"
  #define MSG_YSCALE                        "Y Scale"
#endif

#define MSG_LASER                           "Laser Preset"
#define MSG_CONFIG                          "Configuration"
#define MSG_BAUDRATE                        "Baudrate"
#define MSG_E_BOWDEN_LENGTH                 "Extrude " STRINGIFY(BOWDEN_LENGTH) "mm"
#define MSG_R_BOWDEN_LENGTH                 "Retract " STRINGIFY(BOWDEN_LENGTH) "mm"
#define MSG_PURGE_XMM                       "Purge " STRINGIFY(LCD_PURGE_LENGTH) "mm"
#define MSG_RETRACT_XMM                     "Retract " STRINGIFY(LCD_RETRACT_LENGTH) "mm"

#if ENABLED(FIRMWARE_TEST)
  #define MSG_FWTEST_YES                    "Put the Y command to go next"
  #define MSG_FWTEST_NO                     "Put the N command to go next"
  #define MSG_FWTEST_YES_NO                 "Put the Y or N command to go next"
  #define MSG_FWTEST_ENDSTOP_ERR            "ENDSTOP ERROR! Check wire and connection"
  #define MSG_FWTEST_PRESS                  "Press and hold the endstop "
  #define MSG_FWTEST_INVERT                 "Reverse value of "
  #define MSG_FWTEST_XAXIS                  "Has the nozzle moved to the right?"
  #define MSG_FWTEST_YAXIS                  "Has the nozzle moved forward?"
  #define MSG_FWTEST_ZAXIS                  "Has the nozzle moved up?"
  #define MSG_FWTEST_01                     "Manually move the axes X, Y and Z away from the endstop"
  #define MSG_FWTEST_02                     "Do you want check ENDSTOP?"
  #define MSG_FWTEST_03                     "Start check ENDSTOP"
  #define MSG_FWTEST_04                     "Start check MOTOR"
  #define MSG_FWTEST_ATTENTION              "ATTENTION! Check that the three axes are more than 5 mm from the endstop!"
  #define MSG_FWTEST_END                    "Finish Test. Disable FIRMWARE_TEST and recompile."
  #define MSG_FWTEST_INTO                    "into "
  #define MSG_FWTEST_ERROR                   "ERROR"
  #define MSG_FWTEST_OK                      "OK"
  #define MSG_FWTEST_NDEF                    "not defined"
#endif // FIRMWARE_TEST

#endif // LANGUAGE_EU_H
