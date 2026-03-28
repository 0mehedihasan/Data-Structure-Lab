# Data-Structure-Lab

A collection of C/C++ lab exercises focused on foundational data structures, algorithms, and basic string/array operations.

## Overview

This repository contains coursework-style implementations grouped by lab folders.  
Most programs are standalone console applications (each file is typically a separate exercise).

Main topic areas include:
- Array operations (insert, delete, linear/binary search)
- Sorting (bubble sort, merge-style merging examples)
- String operations (copy, compare, concat, reverse, replace, word count, shuffle)
- Pattern problems and basic algorithm practice
- Introductory stack/queue/linked-list exercises

## Repository Structure

Key folders:
- `LAB-01`, `LAB-02`, `LAB-03`, `lab-04`, `Lab-05` — core lab tasks
- `LAB TEST 01`, `LAB AFTER MID-01` — test and post-midterm practice work
- `Pattern Matching` — string/pattern matching exercises
- `Queue` — queue implementation practice in C++
- `string replacement`, `word count` — focused standalone exercises

## Tech Stack

- Language: **C** and **C++**
- Style: standalone console programs
- Build system: no single project-wide build script (compile files individually)

## How to Run

Since each program is independent, compile and run a specific file directly.

### C program example
```bash
gcc "LAB-03/bubblesort.c" -o bubblesort
./bubblesort
```

### C++ program example
```bash
g++ "Queue/main.cpp" -o queue_app
./queue_app
```

> On Windows, run the generated `.exe` file instead.

## Notes

- Some folders include generated IDE/build output directories like `bin/` and `obj/`.
- File and folder naming is based on lab submission structure and may contain spaces.
- Programs are primarily educational and may not follow production-level conventions.

## Open Source

Contributions are welcome to improve:
- Code clarity and consistency
- Input validation and edge-case handling
- Documentation and folder organization

If you want to contribute, please:
1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Open a pull request with a clear description

## License

No license file is currently included in this repository.  
If you plan to reuse the code publicly, consider adding a license (for example, MIT).
