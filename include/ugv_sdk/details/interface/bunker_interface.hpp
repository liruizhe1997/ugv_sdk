/*
 * bunker_interface.hpp
 *
 * Created on: Jul 14, 2021 23:04
 * Description:
 *
 * Copyright (c) 2021 Ruixiang Du (rdu)
 */

#ifndef BUNKER_INTERFACE_HPP
#define BUNKER_INTERFACE_HPP

#include <string>

#include "ugv_sdk/details/interface/agilex_message.h"

namespace westonrobot {
struct BunkerCoreState {
  SystemStateMessage system_state;
  MotionStateMessage motion_state;
  RcStateMessage rc_state;
};

struct BunkerInterface {
  virtual ~BunkerInterface() = default;

  virtual void SetMotionCommand(double linear_vel, double angular_vel) = 0;

  // get robot state
  virtual BunkerCoreState GetRobotState() = 0;
};
}  // namespace westonrobot

#endif /* BUNKER_INTERFACE_HPP */