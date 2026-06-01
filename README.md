# c++_thread_r_n_d

A research and development project exploring C++ threading and performance optimizations.

## Overview

This project currently demonstrates basic multi-threading using `pthread` in C++. It features a main computation loop running alongside a secondary "heavy" computation loop to test parallel execution.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., `g++`)
- `make` build utility

### Building and Running

To compile and run the project, simply use the provided `Makefile`:

```bash
make
```

This will:
1. Compile `main.cpp` into an executable named `main`.
2. Execute the `main` binary.

## Project Structure

- `main.cpp`: Contains the core logic and threading implementation.
- `Makefile`: Build instructions for the project.

## Future Vision

- **Custom Model Integration:** Explore ways to run custom GUF models with better performance by using dedicated C++ code.
- **Flutter Library/SDK:** Potentially evolve this into a Flutter library or SDK to bring high-performance native capabilities to mobile applications.

Let's see what it evolves into !!
