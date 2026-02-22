## Embedded lab

Laboratorio personal para practicar sistemas embebidos modernos:
- C/C++
- Estructura de proyecto
- (Próximo) RTOS, drivers, toolchains MCU
- Builds reproducibles (CMake) y control de versiones (Git)

## Build (WSL/Linux, plataforma posix)

```bash
sudo apt update
sudo apt install -y build-essential cmake
mkdir -p build
cmake -S . -B build -DEMBEDDED_LAB_PLATFORM=posix
cmake --build build
./build/embedded_lab_app