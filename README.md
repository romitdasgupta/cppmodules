# C++ 20 Modules

## Introduction

To build and run this project, you will need:

- A C++ compiler that supports C++20 or higher.
  - Look for Platform specific requirements below.
- CMake version 3.28 or higher
- Ninja build system (optional, but recommended)

## Build Instructions

### For MacOS

Ensure that you have clang version 16 or higher. In my case it is 18.1.6

```
$ clang++ --version
Homebrew clang version 18.1.6
Target: arm64-apple-darwin23.5.0
Thread model: posix
InstalledDir: /opt/homebrew/Cellar/llvm/18.1.6/bin
```

```
$ mkdir build
$ cd build
$ CXX=clang++ CC=clang cmake -GNinja ..
$ ninja -v
$ ./module_test
```

### For Windows

```
> cmake -S . -B build
> cmake --build build --config Release
> .\build\Release\module_example.exe
> .\build\Release\unit_tests.exe
> cmake --build build --config Debug
> .\build\Debug\module_test.exe
> .\build\Debug\module_example.exe
```

### References

- [import CMake; the Experiment is Over!](https://www.kitware.com/import-cmake-the-experiment-is-over/)
