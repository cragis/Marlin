#include "process_control.h"

ControlMode control_mode = MODE_TEMP;

bool temp_enabled = false;
bool flow_enabled = false;

float extruder_speed = 2.0f;
