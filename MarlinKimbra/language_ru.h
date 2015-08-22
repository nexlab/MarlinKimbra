/**
 * Russian
 *
 * LCD Menu Messages
 * See also documentation/LCDLanguageFont.md
 *
 */
#ifndef LANGUAGE_RU_H
#define LANGUAGE_RU_H

#define MAPPER_D0D1                // For Cyrillic
// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
//#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_5

#define WELCOME_MSG                         MACHINE_NAME " Готов."
#define MSG_SD_INSERTED                     "Карта вставлена"
#define MSG_SD_REMOVED                      "Карта извлечена"
#define MSG_MAIN                            "Меню"
#define MSG_AUTOSTART                       "Автостарт"
#define MSG_DISABLE_STEPPERS                "Выкл. двигатели"
#define MSG_AUTO_HOME                       "Парковка"
#define MSG_BED_SETTING                     "Bed Setting"
#define MSG_LP_INTRO                        " Leveling bed...       Press to start  "
#define MSG_LP_1                            " Adjust first point  & Press the button"
#define MSG_LP_2                            " Adjust second point & Press the button"
#define MSG_LP_3                            " Adjust third point  & Press the button"
#define MSG_LP_4                            " Adjust fourth point & Press the button"
#define MSG_LP_5                            "     Is it ok?         Press to end"       
#define MSG_LP_6                            " BED leveled!"
#define MSG_SET_HOME_OFFSETS                "Set home offsets"
#define MSG_SET_ORIGIN                      "Запомнить ноль"
#define MSG_PREHEAT_PLA                     "Преднагрев PLA"
#define MSG_PREHEAT_PLA_ALL                 "Преднаг. PLA все"
#define MSG_PREHEAT_PLA_BEDONLY             "Пред. PLA Кровать"
#define MSG_PREHEAT_PLA_SETTINGS            "Настройки PLA"
#define MSG_PREHEAT_ABS                     "Преднагрев ABS"
#define MSG_PREHEAT_ABS_ALL                 "Преднаг. ABS все "
#define MSG_PREHEAT_ABS_BEDONLY             "Пред. ABS Кровать"
#define MSG_PREHEAT_ABS_SETTINGS            "Настройки ABS"
#define MSG_PREHEAT_GUM                     "Preheat GUM"
#define MSG_PREHEAT_GUM_ALL                 "Preheat GUM All"
#define MSG_PREHEAT_GUM_BEDONLY             "Preheat GUM Bed"
#define MSG_PREHEAT_GUM_SETTINGS            "Preheat GUM conf"
#define MSG_COOLDOWN                        "Охлаждение"
#define MSG_SWITCH_PS_ON                    "Switch Power On"
#define MSG_SWITCH_PS_OFF                   "Switch Power Off"
#define MSG_EXTRUDE                         "Экструзия"
#define MSG_RETRACT                         "Откат"
#define MSG_MOVE_AXIS                       "Движение по осям"
#define MSG_MOVE_X                          "Move X"
#define MSG_MOVE_Y                          "Move Y"
#define MSG_MOVE_Z                          "Move Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_01MM                       "Move 0.1mm"
#define MSG_MOVE_1MM                        "Move 1mm"
#define MSG_MOVE_10MM                       "Move 10mm"
#define MSG_SPEED                           "Скорость:"
#define MSG_NOZZLE                          "Фильера:"
#define MSG_BED                             "Кровать:"
#define MSG_FAN_SPEED                       "Куллер:"
#define MSG_FLOW                            "Поток:"
#define MSG_CONTROL                         "Настройки"
#define MSG_MIN                             " " STR_THERMOMETER "Минимум"
#define MSG_MAX                             " " STR_THERMOMETER "Максимум"
#define MSG_FACTOR                          " " STR_THERMOMETER "Фактор"
#define MSG_IDLEOOZING                      "Anti oozing"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "Вкл."
#define MSG_OFF                             "Выкл."
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_ACC                             "Acc"
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_X                               "x"
#define MSG_Y                               "y"
#define MSG_Z                               "z"
#define MSG_E                               "e"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_A_TRAVEL                        "A-travel"
#define MSG_XSTEPS                          "X шаг/mm"
#define MSG_YSTEPS                          "Y шаг/mm"
#define MSG_ZSTEPS                          "Z шаг/mm"
#define MSG_E0STEPS                         "E0 шаг/mm"
#define MSG_E1STEPS                         "E1 шаг/mm"
#define MSG_E2STEPS                         "E2 шаг/mm"
#define MSG_E3STEPS                         "E3 шаг/mm"
#define MSG_TEMPERATURE                     "Температура"
#define MSG_MOTION                          "Скорости"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm" STR_h3
#define MSG_FILAMENT_SIZE_EXTRUDER          "Fil. Dia."
#define MSG_CONTRAST                        "LCD contrast"
#define MSG_STORE_EPROM                     "Сохранить в EPROM"
#define MSG_LOAD_EPROM                      "Загруз. из EPROM"
#define MSG_RESTORE_FAILSAFE                "Сброс настроек"
#define MSG_REFRESH                         "Обновить"
#define MSG_WATCH                           "Обзор"
#define MSG_PREPARE                         "Действия"
#define MSG_TUNE                            "Настройки"
#define MSG_PAUSE_PRINT                     "Продолжить печать"
#define MSG_RESUME_PRINT                    "возобн. печать"
#define MSG_STOP_PRINT                      "Остановить печать"
#define MSG_CARD_MENU                       "Меню карты"
#define MSG_NO_CARD                         "Нет карты"
#define MSG_DWELL                           "Сон..."
#define MSG_USERWAIT                        "Ожиданиие"
#define MSG_RESUMING                        "Resuming print"
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "Нет движения."
#define MSG_KILLED                          "УБИТО."
#define MSG_STOPPED                         "ОСТАНОВЛЕНО."
#define MSG_CONTROL_RETRACT                 "Откат mm:"
#define MSG_CONTROL_RETRACT_SWAP            "своп Откат mm:"
#define MSG_CONTROL_RETRACTF                "Откат  V:"
#define MSG_CONTROL_RETRACT_ZLIFT           "Прыжок mm:"
#define MSG_CONTROL_RETRACT_RECOVER         "Возврат +mm:"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "своп Возврат +mm:"
#define MSG_CONTROL_RETRACT_RECOVERF        "Возврат  V:"
#define MSG_AUTORETRACT                     "АвтоОткат:"
#define MSG_FILAMENTCHANGE                  "Change filament"
#define MSG_INIT_SDCARD                     "Init. SD-Card"
#define MSG_CNG_SDCARD                      "Change SD-Card"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_POSITION_UNKNOWN                "Home X/Y before Z"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"

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

#endif // LANGUAGE_RU_H
