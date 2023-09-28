# 0x00-hello_world

This repository contains a collection of C programs and scripts that perform various tasks related to C programming. Each script and program is designed to fulfill a specific purpose and provides a description of its functionality.

## Table of Contents

1. [0-preprocessor](#0-preprocessor)
2. [1-compiler](#1-compiler)
3. [2-assembler](#2-assembler)
4. [3-name](#3-name)
5. [4-puts.c](#4-putsc)
6. [5-printf.c](#5-printfc)
7. [6-size.c](#6-sizec)
8. [100-intel](#100-intel)
9. [101-quote.c](#101-quotec)

---

## 0-preprocessor

**File Description:**

- **Description:** This script automates the preprocessing of C programming files. It uses the C preprocessor (`cpp`) to process a C file, the name of which is stored in the `$CFILE` environment variable. The resulting preprocessed content is saved into a file named 'c'. This script provides a convenient and customizable solution for streamlining the preprocessing step in C programming projects.

---

## 1-compiler

**File Description:**

- **Description:** This script compiles a C source file without the linking phase. It relies on the `$CFILE` environment variable to specify the input C source file. Using the GNU Compiler Collection (`gcc`) with the `-c` flag to indicate compilation only, the script generates an object file in the same directory as the original C source file. It offers error handling and allows users to specify the target C source file through the `$CFILE` environment variable.

---

## 2-assembler

**File Description:**

- **Description:** This script generates Intel syntax assembly code from a specified C source file and saves it into an output file. It relies on the `$CFILE` environment variable to specify the input C source file. The script uses a C compiler to compile the C source code into assembly code, which is then saved into an output file named after the original C source file but with the `.s` extension. It simplifies the task of converting C code into Intel syntax assembly code.

---

## 3-name

**File Description:**

- **Description:** This script compiles a specified C source file, generating an executable named 'cisfun'. The input C file name is expected to be stored in the environment variable `$CFILE`. It streamlines the compilation process and allows users to customize the target C source file by modifying the `$CFILE` environment variable.

---

## 4-puts.c

**File Description:**

- **Description:** This C program uses the `puts` function to output a specific string and gracefully terminates with an exit status of 0. It demonstrates message output in C programming without using `printf`.

---

## 5-printf.c

**File Description:**

- **Description:** This C program produces an aesthetically pleasing and grammatically correct output using the `printf` function. It displays a specific phrase and gracefully terminates with an exit status of 0. It adheres to strict compiler settings.

---

## 6-size.c

**File Description:**

- **Description:** This C program displays the sizes of various data types specific to the computer it's compiled and executed on. It uses the `sizeof` operator and compiles without warnings with the `-Wall` option in GCC. It provides valuable information about data type sizes.

---

## 100-intel

**File Description:**

- **Description:** This script automates the process of generating Intel syntax assembly code from a specified C source file. It uses the `$CFILE` environment variable to specify the input C source file and saves the assembly code in an output file. It simplifies the conversion of C code into Intel syntax assembly code.

---

## 101-quote.c

**File Description:**

- **Description:** This C program prints a specific message to the standard error stream without using certain functions. It gracefully terminates with an exit status of 1 and is designed to compile without warnings using the `-Wall` option in GCC.

---

Each script and program in this repository serves a unique purpose and can be a valuable tool in various C programming tasks. Instructions for usage and customization are provided in each script's description.

