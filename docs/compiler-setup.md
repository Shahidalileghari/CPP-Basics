# Compiler setup

## Windows
Choose Visual Studio / Build Tools with the **Desktop development with C++** workload, MSYS2 with GCC, or LLVM/Clang. Restart your terminal and verify the compiler command works.

## Ubuntu/Debian
```bash
sudo apt update
sudo apt install build-essential cmake gdb
```

## macOS
Install Xcode Command Line Tools:
```bash
xcode-select --install
```
Install CMake with a trusted package manager or official installer.

## GCC/Clang compile
```bash
g++ -std=c++20 -Wall -Wextra -Wpedantic file.cpp -o app
```

## Sanitizers (where supported)
```bash
g++ -std=c++20 -g -fsanitize=address,undefined -fno-omit-frame-pointer file.cpp -o app
```
