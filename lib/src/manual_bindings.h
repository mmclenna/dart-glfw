// Copyright (c) 2015, the Dart GLFW extension authors. All rights reserved.
// Please see the AUTHORS file for details. Use of this source code is governed
// by a BSD-style license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd

#ifndef SRC_MANUAL_BINDINGS_H_
#define SRC_MANUAL_BINDINGS_H_
#include "dart_api.h"

void glfwGetVersion_native(Dart_NativeArguments arguments);
void glfwGetMonitors_native(Dart_NativeArguments arguments);
void glfwGetMonitorPos_native(Dart_NativeArguments arguments);
void glfwGetMonitorPhysicalSize_native(Dart_NativeArguments arguments);
void glfwGetVideoModes_native(Dart_NativeArguments arguments);
void glfwGetWindowPos_native(Dart_NativeArguments arguments);
void glfwGetWindowSize_native(Dart_NativeArguments arguments);
void glfwGetFramebufferSize_native(Dart_NativeArguments arguments);
void glfwGetWindowFrameSize_native(Dart_NativeArguments arguments);
void glfwSetWindowUserPointer_native(Dart_NativeArguments arguments);
void glfwGetWindowUserPointer_native(Dart_NativeArguments arguments);
void glfwGetCursorPos_native(Dart_NativeArguments arguments);
void glfwGetJoystickAxes_native(Dart_NativeArguments arguments);
void glfwGetJoystickButtons_native(Dart_NativeArguments arguments);

#endif  // SRC_MANUAL_BINDINGS_H_
