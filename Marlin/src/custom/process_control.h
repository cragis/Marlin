#pragma once

enum ControlMode {
  MODE_TEMP = 0,
  MODE_FLOW = 1
};

extern ControlMode control_mode;

extern bool temp_enabled;
extern bool flow_enabled;

extern float extruder_speed;   // mm/s
