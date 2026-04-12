#include "../inc/MarlinConfig.h"
#include "process_ui.h"
#include "process_control.h"

void process_encoder_input() {

  if (encoderPosition != 0) {

    if (control_mode == MODE_TEMP) {
      thermalManager.temp_hotend[0].target += encoderPosition;
    }
    else if (control_mode == MODE_FLOW) {
      extruder_speed += encoderPosition * 0.1f;
      if (extruder_speed < 0) extruder_speed = 0;
    }

    encoderPosition = 0;
  }
}

void process_ui_update() {
  process_encoder_input();
}
