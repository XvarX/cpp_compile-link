# C++ Compilation and Linking Learning Project

## Architecture Overview
This is a C++ educational project demonstrating compilation, linking, and library creation. Key components:
- `include/`: Global header files organized by module (e.g., `lesson1/math/add.h`)
- `libs/`: Third-party or modular libraries with their own `include/` and `src/` subdirectories
- `src/`: Main application source files, including implementations that can be compiled inline or as separate objects

## Build Workflows
Use manual g++ commands for learning purposes (no Makefiles or CMake yet):
- Compile object files: `g++ -c -I../include source.cpp`
- Create static library: `ar rcs libname.a object.o`
- Link with static lib: `g++ main.o -L../libs/path -lname`
- Dynamic library: `g++ -c -fPIC source.cpp` then `g++ -shared -o libname.so object.o`
- Link with dynamic lib: `g++ main.o -L../libs/path -lname -Wl,-rpath,../libs/path`

## Code Patterns
- Headers use `#pragma once` for include guards
- Class-based design with private members and public getters (e.g., `Add` class in `math/add.h`)
- Include paths are relative, e.g., `#include "lesson1/math/add.h"` from `src/`
- Separate implementation files in `src/` subdirs matching header structure

## Key Files
- `codenote.txt`: Detailed compilation notes and command examples
- `libs/math/src/add.cpp`: Library implementation (currently incomplete)
- `src/math/add.cpp`: Inline implementation example
- `src/main.cpp`: Application entry point using the Add class

## Development Notes
- Demonstrates separate compilation, static/dynamic linking
- Paths in includes and commands are relative to compilation directory
- Dynamic libraries require `LD_LIBRARY_PATH` or `-Wl,-rpath` for runtime