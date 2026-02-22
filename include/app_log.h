#pragma once
#include <stdarg.h>

void app_log_init(void);
void app_log_info(const char *fmt, ...);
void app_log_error(const char *fmt, ...);
