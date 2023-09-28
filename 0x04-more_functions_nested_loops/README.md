## 0x04. C - More functions, more nested loops

This repository contains a collection of C programs that perform various tasks related to C programming. Each script and program is designed to fulfill a specific purpose and provides a description of its functionality.

## Table of Contents

1. [0-isupper.c](#0-isupper.c)
2. [1-isdigit.c](#1-isdigit.c)
3. [2-mul.c](#2-mul.c)
4. [3-print_numbers.c](#3-print_numbers.c)
5. [4-print_most_numbers.c](#4-print_most_numbers.c)
6. [5-more_numbers.c](#5-more_numbers.c)
7. [6-print_line.c](#6-print_line.c)
8. [7-print_diagonal.c](#7-print_diagonal.c)
9. [8-print_square.c](#8-print_square.c)
9. [9-fizz_buzz.c](#9-fizz_buzz.c)
9. [10-print_triangle.c](#10-print_triangle.c)
9. [100-prime_factor.c](#100-prime_factor.c)
9. [101-print_number.c](#101-print_number.c)
---
### File Descriptions:

## **0-isupper.c**:
**Prototype**: _int_ _isupper(int c)_

**Description**: This C program defines a function called _isupper that checks whether a given character c is uppercase or not. The function adheres to a specified prototype, taking an integer c as its argument and returning an integer result. If the character is indeed uppercase, the function returns 1; otherwise, it returns 0. This program provides a basic but essential utility for detecting uppercase characters within a text or character stream, which can be particularly useful for text processing tasks in various C applications, while also demonstrating the concept of character type checking in C programming.


## **1-isdigit.c**:
**Prototype**: _int_ _isdigit(int c)_

**Description**: This C program introduces a function called _isdigit that serves the purpose of checking whether a given character c represents a digit between 0 and 9. The function follows a specified prototype, accepting an integer c as its argument and returning an integer result. When the character c corresponds to a digit, the function returns 1; otherwise, it returns 0. This program offers a fundamental utility for character analysis and validation, particularly in scenarios where it's essential to identify and handle numeric digits within strings or character sequences in C applications. It showcases the concept of character classification and can be a valuable tool for input validation and text processing tasks.


## **2-mul.c**:
**Prototype**: _int mul(int a, int b)_

**Description**: This C program introduces a function named mul designed to perform integer multiplication. The function adheres to the provided prototype, accepting two integer arguments, a and b, and returning an integer result. When invoked, the mul function takes the values of a and b, performs multiplication, and returns the product as an integer. This simple yet essential function can be utilized in various programming scenarios where integer multiplication is required, adding to the toolbox of mathematical operations available to C programmers. It demonstrates the fundamental concept of performing arithmetic operations in C functions.

## **3-print_numbers.c**:
**Prototype**: _void print_numbers(void)_

**Description**: This C program introduces a function called print_numbers that aims to print the numbers from 0 to 9, each followed by a newline character. The function adheres to the provided prototype, which specifies that it should not use more than two _putchar calls in its implementation. To achieve this, the print_numbers function utilizes a loop to iterate through the numbers from 0 to 9, and within each iteration, it calls _putchar to print the current number character and a newline character. This program serves as a basic example of how to use loops and _putchar to display a sequence of characters in C.


## **4-print_most_numbers.c**:
**Prototype**: _void print_most_numbers(void)_

**Description**: This C program introduces a function named print_most_numbers that is designed to print numbers from 0 to 9, each followed by a newline character. However, it excludes the numbers 2 and 4 from the output. The function adheres to the provided prototype, which restricts the usage of _putchar to no more than two calls. To accomplish this, the print_most_numbers function utilizes a loop to iterate through the numbers from 0 to 9. Within each iteration, it checks if the current number is equal to 2 or 4. If it is not, it calls _putchar to print the number character and a newline character. This program demonstrates how to use conditional statements and loops to control the output of characters in C while adhering to the specified restrictions.


## **5-more_numbers.c**:
**Prototype**: _void more_numbers(void)_

**Description**: This C program introduces a function called more_numbers that is responsible for printing numbers from 0 to 14, each repeated 10 times and followed by a newline character. The function adheres to the provided prototype, which restricts the usage of _putchar to no more than three calls. To achieve this, the more_numbers function employs two nested loops. The outer loop iterates 10 times, ensuring that the numbers are printed 10 times. Inside this loop, there is an inner loop that runs from 0 to 14, printing each number character and a newline character using _putchar. This program showcases how to create nested loops to control the repetition and range of characters printed in C while adhering to the specified limitations.


## **6-print_line.c**:
**Prototype**: _void print_line(int n)_

**Description**: This C program presents a function named print_line that is designed to draw a straight line in the terminal. The function follows the provided prototype, where n represents the number of times the character '' should be printed in the line. The function makes use of the _putchar function for printing. It begins by checking if n is 0 or less; in such cases, it solely prints a newline character '\n'. If n is greater than 0, the function enters a loop that iterates n times, each time printing an underscore character '', and then adds a newline character '\n' to end the line. This program demonstrates how to create a simple horizontal line by repeating a character and adheres to the specified limitations in its implementation.


## **7-print_diagonal.c**:
**Prototype**: _void print_diagonal(int n)_

**Description**: This C program introduces a function called print_diagonal, which is responsible for drawing a diagonal line on the terminal. The function adheres to the provided prototype, where n signifies the number of times the character '' should be printed in the diagonal line. The function utilizes the _putchar function for printing. If n is 0 or less, the function solely prints a newline character '\n'. When n is greater than 0, the function enters a loop that iterates n times. During each iteration, it prints a character '', increasing the number of backslashes diagonally, and ends the diagonal line with a newline character '\n'. This program demonstrates how to create a diagonal line using a single character and aligns with the specified constraints for its implementation.


## **8-print_square.c**:
**Prototype**: _void print_square(int size)_

**Description**: This C program introduces a function called print_square, which is responsible for printing a square followed by a newline character. The function follows the provided prototype, with the size parameter representing the size of the square to be printed. The program utilizes the _putchar function to print the square. If the size is 0 or less, the function only prints a newline character '\n'. When size is greater than 0, the function enters a nested loop to print the square. The outer loop is responsible for the rows of the square, and the inner loop handles the columns. During each iteration, the character '#' is printed to create the square, and the square is followed by a newline character '\n' to move to the next row. This program effectively prints a square of the specified size, meeting the provided constraints for its implementation.


## **9-fizz_buzz.c**:
**Description**: This C program is a classic implementation of the Fizz-Buzz test. It prints numbers from 1 to 100, each separated by a space, and replaces numbers divisible by 3 with "Fizz," numbers divisible by 5 with "Buzz," and numbers divisible by both 3 and 5 with "FizzBuzz." The program utilizes a loop to iterate through numbers from 1 to 100 and uses conditional statements to determine whether to print the number or the corresponding word. The standard library is used for output. This program serves as a common coding interview question and helps filter out candidates who struggle with basic programming logic.


## **10-print_triangle.c**:
**Prototype**: _void print_triangle(int size)_

**Description**: This C function, print_triangle(int size), prints a triangle made of "#" characters, followed by a new line. The size of the triangle is determined by the size parameter. If size is greater than 0, the function prints a triangle with that many rows, each row having one more "#" character than the previous row. If size is 0 or less, the function prints only a new line. The function uses the _putchar function to print the "#" characters and new lines, adhering to the specified constraints. It's a simple yet versatile function for printing triangles of varying sizes.


## **100-prime_factor.c**:
**Description**: This C program, 100-prime_factor.c, is designed to find and print the largest prime factor of the given number 612852475143. It uses standard library functions and is compiled with the specified command. The program calculates the largest prime factor and prints it, followed by a new line. It's an essential task for identifying the largest prime divisor of a large number, providing a useful tool for number theory and prime factorization.


## **101-print_number.c**:
**Prototype**: _void print_number(int n)_

**Description**: The C function print_number takes an integer n as input and prints it using the _putchar function. This function provides a way to print integers without using the long data type, arrays, pointers, or hard-coding special values. It's a useful utility for printing integers in various contexts within a program, enhancing code readability and functionality.
