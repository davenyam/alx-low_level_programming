## 0x00. C - Hello, World

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
### File Descriptions:

**0-preprocessor**:
   - **Description**: This script has been designed to automate the preprocessing of C programming files. It operates by using the C preprocessor (cpp) to process a C file, the name of which is stored in the $CFILE environment variable. The resulting preprocessed content is then saved into a file named 'c'. This script provides a convenient and customizable solution for streamlining the preprocessing step in C programming projects, allowing users to specify the target C file by modifying the $CFILE environment variable.
---

**1-compiler**:
   - **Description**: This script streamlines the compilation of a C source file without the linking phase. It relies on the environment variable $CFILE to specify the input C source file. Using the GNU Compiler Collection (gcc) with the -c flag to indicate compilation only, the script generates an object file in the same directory as the original C source file. This object file shares the name of the C source file but bears the .o extension (e.g., 'main.c' results in 'main.o'). The script also performs error handling, notifying the user of successful compilation along with the object file's name or reporting any compilation failures. It offers a straightforward and efficient solution for compiling C source files when linking is unnecessary, enhancing workflow efficiency in C programming tasks. Users can customize the target C source file by adjusting the $CFILE environment variable before executing the script.


3. **2-assembler**:
   - **Description**: This script automates the process of generating the assembly code from a C source file and saving it into an output file. It relies on the $CFILE environment variable to specify the input C source file. Using a C compiler, such as GCC, the script compiles the C source code into assembly code, and then it saves the resulting assembly code into an output file named after the original C source file but with the extension .s, ensuring a direct correlation between the input and output files. For example, if the C source file is named 'main.c,' the script will produce an assembly file named 'main.s.' This script offers a convenient way to convert C code to assembly code, aiding in debugging, optimization, or other low-level programming tasks, and provides flexibility by allowing users to specify the target C source file through the $CFILE environment variable.

4. **3-name**:
   - **Description**: This script automates the compilation of a specified C source file, generating an executable named 'cisfun.' The input C file name is expected to be stored in the environment variable $CFILE. Upon execution, the script uses a C compiler, such as GCC, to compile the provided C source file and produces an executable with the designated name 'cisfun.' This script streamlines the compilation process and simplifies the task of creating an executable, allowing users to easily customize the target C source file by modifying the $CFILE environment variable.

5. **4-puts.c**:
   - **Description**: This C program utilizes the puts function to output the precise string "Programming is like building a multilingual puzzle," followed by a new line, and then it gracefully terminates with an exit status of 0. The program adheres to the constraint of not using printf, achieving its goal of displaying the specified message and exiting with a return code of 0.

6. **5-printf.c**:
   - **Description**: This C program is designed to produce an aesthetically pleasing and grammatically correct output using the printf function. It prints the precise phrase "with proper grammar, but the outcome is a piece of art," followed by a new line, and then gracefully terminates with an exit status of 0. To ensure clean compilation without warnings when employing the -Wall option in GCC, the program is meticulously crafted. It adheres to the constraint of not using the puts function, providing an elegant example of artful message output in C programming while maintaining compatibility with strict compiler settings.

7. **6-size.c**:
   - **Description**: 
This C program serves the purpose of displaying the sizes of various data types specific to the computer it's compiled and executed on. It accomplishes this by utilizing the sizeof operator and printf function. While allowing for potential warnings during compilation, the program is designed to terminate gracefully with a return value of 0. To replicate the exact output as provided in the example, it provides valuable information about the sizes of different data types, enabling users to understand the memory allocation of fundamental types on their computer. Please note that for users on Linux who wish to test the -m32 GCC option, it may be necessary to install the libc6-dev-i386 package to facilitate 32-bit compilation.

8. **100-intel**:
   - **Description**: This script automates the process of generating Intel syntax assembly code from a specified C source file and saving it into an output file. It relies on the $CFILE environment variable to specify the input C source file. When executed, the script uses a C compiler with Intel syntax assembly code generation capabilities to compile the provided C source file, resulting in assembly code that is then saved into an output file. The output file is named identically to the input C source file but with the .s extension, ensuring a direct correlation between the source and assembly files. This script simplifies the task of converting C code into Intel syntax assembly code, making it a valuable tool for those involved in low-level programming and providing flexibility by allowing users to specify the target C source file through the $CFILE environment variable.

8. **101-quote.c**:
   - **Description**: This C program has been designed to print the specific message "and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a newline character, to the standard error stream. It adheres to the constraint of not using any functions listed in the printf or puts sections of the man page for C library functions (man (3)). The program gracefully exits with a return value of 1 and is constructed to compile without any warnings when using the -Wall option with the GCC compiler. This script achieves the goal of displaying the specified message to the standard error stream while ensuring compliance with compiler warning settings and function restrictions.
