#include "app_log.h"
#include <stdio.h>
#include <stdarg.h>
#include <time.h>

static void log_with_tag(const char *tag, const char *fmt, va_list ap) {
    time_t t = time(NULL);
    struct tm tm;
    localtime_r(&t, &tm);
    char buf[32];
    strftime(buf, sizeof(buf), "%H:%M:%S", &tm);

    fprintf(stdout, "[%s] %s: ", buf, tag);
    vfprintf(stdout, fmt, ap);
    fprintf(stdout, "\n");
}

void app_log_init(void) {}

void app_log_info(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    log_with_tag("INFO", fmt, ap);
    va_end(ap);
}

void app_log_error(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    log_with_tag("ERROR", fmt, ap);
    va_end(ap);
}
