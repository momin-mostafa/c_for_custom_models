# c++_thread_r_n_d

A research and development project exploring C++ threading and performance optimizations.

---

## Overview

This project demonstrates basic multi-threading using `pthread` in C++. It features a main computation loop running alongside a secondary "heavy" computation loop to test parallel execution and system performance under concurrent workloads.

The goal is to experiment with low-level concurrency, performance tuning, and potential future integration into high-performance systems.

---

## Supported Platforms

* macOS
* Linux

---

## Getting Started

### Prerequisites

* A C++ compiler (e.g., `g++` or `clang++`)
* `make` build utility
* Bash shell

---

## Installation

Install dependencies:

```bash
chmod +x install.sh
./install.sh
```

This script automatically detects your operating system and installs required dependencies.

---

## Project Structure

```text
.
├── main.cpp
├── test_suite.cpp
├── Makefile
├── install.sh
└── README.md
```

* `main.cpp` → Core logic and threading implementation
* `test_suite.cpp` → Unit tests and validation logic
* `Makefile` → Build automation rules
* `install.sh` → Cross-platform dependency installer

---

## Running the Application

Build and run the main program:

```bash
make main
```

---

## Running Tests

Build and run the test suite:

```bash
make test
```

---

## Cleaning Build Artifacts

Remove compiled binaries:

```bash
make clean
```

---

## Makefile Commands

| Command      | Description                   |
| ------------ | ----------------------------- |
| `make main`  | Build and run the application |
| `make test`  | Build and run tests           |
| `make clean` | Remove compiled binaries      |

---

## Example Workflow

```bash
git clone <repository-url>
cd c++_thread_r_n_d

chmod +x install.sh
./install.sh

make main
make test
make clean
```

---

## Design Goals

* Explore C++ threading and concurrency models
* Benchmark parallel execution behavior using pthread
* Keep build system simple and portable
* Maintain OS-independent setup experience
* Experiment with performance optimization techniques
* Keep the project extensible for future research

---

## Future Vision

* **Custom Model Integration:** Explore running custom GUF models efficiently using native C++ implementations
* **Flutter SDK / Library:** Evolve into a high-performance native SDK for Flutter applications
* **Performance Research:** Expand into deeper concurrency and systems-level optimization experiments

Let's see what it evolves into !!

---

## Notes

This is an experimental research project. APIs, structure, and architecture may evolve significantly as new ideas and benchmarks are explored.
