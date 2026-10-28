# C++ Mastery — Fundamentals to Advanced

A structured, hands-on C++ learning repository that progresses from language fundamentals to modern C++, data structures and algorithms, systems programming, performance, testing, and capstone projects.

## Learning outcomes
- Compilation, source files, headers, and build workflows
- Variables, types, operators, control flow, functions, and scope
- Arrays, strings, pointers, references, and memory fundamentals
- Classes, encapsulation, inheritance, polymorphism, and RAII
- STL containers, iterators, algorithms, and lambdas
- Templates, concepts, exceptions, and error handling
- Smart pointers, move semantics, and resource ownership
- File I/O, streams, filesystem, and serialization fundamentals
- Data structures, algorithm analysis, and problem-solving patterns
- Unit testing, CMake, debugging, sanitizers, and benchmarking
- Concurrency fundamentals, threads, mutexes, and futures
- Modern C++ practices using C++20 where supported

## Prerequisites
- GCC, Clang, or MSVC C++ compiler
- CMake 3.20+
- Git and a code editor

Recommended standard: **C++20**. Most beginner examples use C++17-compatible features; some advanced topics require C++20.

## Quick start

Compile one example with GCC/Clang:

```bash
g++ -std=c++20 -Wall -Wextra -Wpedantic 01-fundamentals/hello_world.cpp -o hello_world
./hello_world
```

Windows PowerShell: run `.\hello_world.exe` after compilation.

Build the CMake milestone project:

```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```

## Roadmap

| Stage | Topics | Suggested output |
|---|---|---|
| 01 | Fundamentals, I/O, types, loops | Console exercises |
| 02 | Functions, references, recursion | Reusable utilities |
| 03 | Arrays, strings, STL collections | Collection exercises |
| 04 | Pointers, references, object lifetime | Memory exercises |
| 05 | OOP, classes, RAII | Bank account / library model |
| 06 | STL containers and algorithms | Data-processing programs |
| 07 | Modern C++ and `optional` | Idiomatic refactors |
| 08 | Smart pointers and move semantics | Resource-owning class |
| 09 | Templates, concepts, exceptions | Generic utilities |
| 10 | Files, CMake, debugging | File analyzer |
| 11 | Data structures and algorithms | Tested algorithms |
| 12 | Concurrency and performance | Parallel task runner |
| 13 | Capstone projects | CLI expense tracker |

## Study method
1. Read the topic guide.
2. Compile and run the example.
3. Modify it and predict the output.
4. Solve exercises without copying complete solutions.
5. Add tests and analyze complexity where relevant.
6. Commit small, meaningful changes.

## Good engineering habits
- Prefer `std::vector`, `std::string`, and standard algorithms when appropriate.
- Learn raw pointers, but avoid owning raw pointers in ordinary application code.
- Enable compiler warnings and fix them.
- Use AddressSanitizer and UndefinedBehaviorSanitizer where available.
- Review concurrency code for data races and lifetime issues.
- Examples are educational; review and test before production use.


