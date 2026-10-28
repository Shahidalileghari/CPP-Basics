# 10 — Files, build systems, and debugging

Learn file streams, filesystem paths, command-line arguments, CMake targets, header/source separation, compiler warnings, debugger breakpoints, sanitizers, and build configurations.

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build
ctest --test-dir build --output-on-failure
```

## Exercises
- Read a text file and count lines, words, and bytes.
- Handle missing files and malformed records.
- Split a class into a header and implementation file.
- Build with AddressSanitizer and UndefinedBehaviorSanitizer where supported.
