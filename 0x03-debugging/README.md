## 0x03. C - Debugging

This repository contains a collection of C programs that perform various tasks related to C programming. Each script and program is designed to fulfill a specific purpose and provides a description of its functionality.

## Table of Contents

1. [0-main.c_&_main.h](#0-main.c_&_main.h)
2. [1-main.c](#1-main.c)
3. [2-largest_number.c_&_main.h](#2-largest_number.c_&_main.h)
4. [3-print_remaining_days.c_&_main.h](#3-print_remaining_days.c_&_main.h)
---
### File Descriptions:

## **0-main.c, main.h**:
**Description**: This C programming task involves creating a file named 0-main.c to test the functionality of the positive_or_negative() function. The provided main.c file serves as a reference for creating the test file. The goal is to verify that the function correctly handles the case when the input integer is 0. The test file, 0-main.c, contains a minimal code snippet that assigns 0 to an integer variable i and calls the positive_or_negative() function with this value. The expected output is "0 is zero." The task specifies that only one line can be changed in the test file, emphasizing that the primary objective is testing the existing function's behavior, not implementing the function itself. The provided main.h header file includes the necessary declarations for the function. The testing process involves compiling the test file and ensuring that the function produces the correct output when given the input 0.


## **1-main.c**:
**Description**: This C debugging task involves taking the provided 1-main.c file, which contains code that causes an infinite loop, and modifying it to prevent the infinite loop while ensuring that the line count remains the same. The objective is to comment out (without deleting) the part of the code responsible for the infinite loop. The original 1-main.c file includes code that initializes an integer variable i to 0 and enters a while loop, incrementing and printing the value of i. However, this loop lacks an exit condition, leading to an infinite loop. The task requires the code to be commented out, ensuring that the output of the modified program resembles the provided example. The modified program should display "Infinite loop incoming :(" and "Infinite loop avoided! \o/" without getting stuck in an infinite loop. The line count should remain the same, and no lines of code should be added or removed. The result should pass the provided example test cases.


## **2-largest_number.c, main.h**:
**Description**: This C program is designed to find and print the largest among three input integers. The program consists of two source files, 2-main.c and 2-largest_number.c. The 2-main.c file tests the largest_number() function, which is defined in the 2-largest_number.c file. The function takes three integers as input and correctly identifies the largest among them, ensuring that the result is accurate regardless of the order of the input integers. By using a series of conditional statements, the function compares the values of the integers and assigns the largest value to the largest variable. The program's main function initializes three integers, assigns values to them, calls the largest_number() function, and prints the result. The corrected code provides a reliable solution for determining the largest integer among three inputs, addressing the previous issue where incorrect output was generated.


## **3-print_remaining_days.c, main.h**:
**Description**: This C program is designed to convert a given date to the day of the year and determine how many days are left in the year, accounting for leap years. It consists of three source files: 3-main_a.c, 3-convert_day.c, and 3-print_remaining_days.c. The 3-main_a.c file tests the convert_day() and print_remaining_days() functions using a specific date (04/01/1997). The convert_day() function calculates the day of the year, and the print_remaining_days() function prints the remaining days in the year, considering leap years. The program correctly handles non-leap years and leap years. However, the 3-main_b.c file tests a leap year case (02/29/2000) and reveals an issue in the output. The task's challenge is to fix the print_remaining_days() function to ensure accurate results for all dates, including leap years. The corrected code addresses this issue and provides a reliable solution for converting dates to day of the year while considering leap years.