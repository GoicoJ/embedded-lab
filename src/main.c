#include "app_log.h"

int main(void) {
    app_log_init();
    app_log_info("embedded-lab (host build) arrancando...");
    app_log_info("Siguiente paso: añadir drivers, RTOS o toolchain STM32.");
    return 0;
}