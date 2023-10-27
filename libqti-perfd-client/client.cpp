/*
** Copyright 2023, The LineageOS Project
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#include <stdint.h>

extern "C" void perf_get_feedback() {}
extern "C" void perf_hint() {}
extern "C" void perf_lock_acq() {}
extern "C" void perf_lock_cmd() {}
extern "C" void perf_lock_rel() {}
extern "C" void perf_lock_use_profile() {}
