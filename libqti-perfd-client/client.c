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

#define LOG_TAG "libqti-perfd-client"

#include <stdint.h>
#include <log/log.h>

void perf_get_feedback() {}
void perf_hint() {}
int perf_lock_acq(int handle, int duration, int arg3[], int arg4) {
    ALOGI("perf_lock_acq: handle: %d, duration: %d, arg3[0]: %d, arg4: %d",
            handle, duration, arg3[0], arg4);
    if (handle > 0)
        return handle;

    return 233;
}
void perf_lock_cmd() {}
int perf_lock_rel(int handle) {
    ALOGI("perf_lock_rel: handle: %d", handle);
    if (handle > 0)
        return handle;

    return 233;
}
void perf_lock_use_profile() {}
