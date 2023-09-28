## 0x02. C - Functions, nested loops

This repository contains a collection of C programs and scripts that perform various tasks related to C programming. Each script and program is designed to fulfill a specific purpose and provides a description of its functionality.

## Table of Contents

1. [0-putchar.c](#0-putchar.c)
2. [1-alphabet.c](#1-alphabet.c)
3. [2-print_alphabet_x10.c](#2-print_alphabet_x10.c)
4. [3-islower.c](#3-islower.c)
5. [4-isalpha.c](#4-isalpha.c)
6. [5-sign.c](#5-sign.c)
7. [6-abs.c](#6-abs.c)
8. [7-print_last_digit.c](#7-print_last_digit.c)
9. [8-24_hours.c](#8-24_hours.c)
9. [9-times_table.c](#9-times_table.c)
9. [10-add.c](#10-add.c)
9. [11-print_to_98.c](#11-print_to_98.c)
9. [100-times_table.c](#100-times_table.c)
9. [101-natural.c](#101-natural.c)
9. [102-fibonacci.c](#102-fibonacci.c)
9. [103-fibonacci.c](#103-fibonacci.c)
9. [104-fibonacci.c](#104-fibonacci.c)
---
### File Descriptions:

## **0-putchar.c**:
**Description**: This C program is designed to print the string "_putchar" followed by a new line and return 0. It accomplishes this task simply and efficiently, adhering to the provided specifications. The program contains a single printf statement to print "_putchar\n," followed by a return 0; statement to ensure the desired output is displayed, and the program returns a success status of 0 as required.


## **1-alphabet.c**:
**Prototype**: void print_alphabet(void)

**Description**: This C program defines a function named print_alphabet with the specified prototype, which efficiently prints the lowercase alphabet followed by a new line using only two calls to _putchar. The function initializes a character variable with 'a' and then enters a loop to sequentially print each lowercase letter from 'a' to 'z' using _putchar. This elegant solution adheres to the constraints while achieving the desired output format of the entire lowercase alphabet followed by a newline character, making it a concise and effective tool for alphabet printing in C programming.


## **2-print_alphabet_x10.c**:
**Prototype**: void print_alphabet_x10(void)

**Description**: This C program defines a function named print_alphabet_x10 with the specified prototype, which efficiently prints the lowercase alphabet ten times, each followed by a new line, while strictly adhering to the constraint of using only two calls to _putchar. The function utilizes a for loop to repeat the printing process ten times, and within each iteration, it initializes a character variable letter with 'a' and employs a nested while loop to sequentially print each lowercase letter from 'a' to 'z' using _putchar. After printing the alphabet for each iteration, it adds a newline character, resulting in the output of the lowercase alphabet repeated ten times, each followed by a new line. This code provides an elegant and concise solution for achieving this specific output format in C programming.


## **3-islower.c**:
**Prototype**: int _islower(int c)

**Description**: This C program defines a function named _islower with the specified prototype, which checks if a given character is lowercase or not. The function takes an integer argument c and returns 1 if c is a lowercase character or 0 if it is not. This function provides a simple yet essential utility for character classification in C programming, enabling users to determine whether a character is in lowercase or not by utilizing the returned integer value. It serves as a custom implementation of the character classification functionality, offering a valuable alternative to the standard library function islower for character case validation.


## **4-isalpha.c**:
**Prototype**: int _isalpha(int c)

**Description**: This C program defines a function named _isalpha with the specified prototype, which checks if a given character is an alphabetic character (letter), whether it's in lowercase or uppercase. The function takes an integer argument c and returns 1 if c is a letter and 0 if it is not. This function provides a useful utility for character classification in C programming, allowing users to determine whether a character is an alphabetic letter or not, regardless of its case, by using the returned integer value. It serves as a custom implementation of the character classification functionality and offers an alternative to the standard library function isalpha for alphabetic character validation.


## **5-sign.c**:
**Prototype**: int print_sign(int n)

**Description**: This C program defines a function named print_sign with the specified prototype, which checks the sign of a given integer n and provides both a return value and a corresponding printed sign character. If n is greater than zero, the function returns 1 and prints '+'. If n is zero, it returns 0 and prints '0'. Finally, if n is less than zero, the function returns -1 and prints '-'. This versatile function efficiently handles sign checking for integers and provides immediate visual feedback by printing the appropriate sign character. It serves as a practical tool for sign analysis in C programming tasks.


## **6-abs.c**:
**Prototype**: int _abs(int)

**Description**: This C program defines a function named _abs with the specified prototype, which calculates and returns the absolute value of an integer passed as an argument. The function effectively handles integer input and returns its absolute value, making it a valuable utility for obtaining the magnitude of a number in C programming. While providing similar functionality to the standard library function abs, this custom implementation offers an alternative for users who prefer or require a specific implementation of absolute value calculation.


## **7-print_last_digit.c**:
**Prototype**: int print_last_digit(int)

**Description**: This C program defines a function named print_last_digit with the specified prototype, which efficiently extracts and returns the value of the last digit of an integer passed as an argument. Additionally, the function prints the last digit before returning it. This combination of functionality makes the function a useful tool for extracting and displaying the last digit of an integer in C programming tasks, facilitating tasks that require working with the last digit of a number.


## **8-24_hours.c**:
**Prototype**: void jack_bauer(void)

**Description**: This C program defines a function named jack_bauer with the specified prototype, which efficiently prints every minute of the day in the style of Jack Bauer, ranging from 00:00 to 23:59. The function accomplishes this by utilizing nested loops to iterate through the hours (00 to 23) and the minutes (00 to 59) of a day. With each iteration, it prints the current hour and minute, separated by a colon, adhering to the format of a 24-hour clock. This function offers a fun and entertaining way to display the entire day in a format reminiscent of the iconic character Jack Bauer, making it an enjoyable coding experience for fans.


## **9-times_table.c**:
**Prototype**: void times_table(void)

**Description**: This C program defines a function named times_table with the specified prototype, which efficiently prints the 9 times table, starting from 0 and continuing up to 9. The function uses nested loops to generate and print the multiplication results for the numbers from 0 to 9 multiplied by 9, while adhering to a specific format. Each row displays the results for a single multiplication, with the multiplicand (0 to 9), the multiplication sign ('x'), and the product. The function provides a clear and organized representation of the 9 times table, making it a valuable tool for learning and visualizing multiplication tables.


## **10-add.c**:
**Prototype**: int add(int, int)

**Description**: This C program defines a function named times_table with the specified prototype, which efficiently prints the 9 times table, starting from 0 and continuing up to 9. The function uses nested loops to generate and print the multiplication results for the numbers from 0 to 9 multiplied by 9, while adhering to a specific format. Each row displays the results for a single multiplication, with the multiplicand (0 to 9), the multiplication sign ('x'), and the product. The function provides a clear and organized representation of the 9 times table, making it a valuable tool for learning and visualizing multiplication tables.


## **11-print_to_98.c**:
**Prototype**: void print_to_98(int n)

**Description**: This C program defines a function named print_to_98 with the specified prototype, which efficiently prints all natural numbers from a given integer n up to 98, separated by a comma and a space. The function uses a loop to generate and print the numbers in ascending or descending order, depending on whether n is less than or greater than 98. It ensures that the first printed number is the input n, and the last printed number is always 98. This function provides a versatile and customizable tool for printing a range of natural numbers, making it suitable for various numerical sequences in C programming.


## **100-times_table.c**:
**Prototype**: void print_times_table(int n)

**Description**: This C program defines a function named print_times_table with the specified prototype, which efficiently prints the n times table, starting from 0, for a given integer n. However, it also includes a validation check that ensures the function does not print anything if n is greater than 15 or less than 0, as specified. For valid input values of n, the function utilizes nested loops to generate and print the multiplication results for the numbers from 0 to n multiplied by n, adhering to a specific format. Each row displays the results for a single multiplication, with the multiplicand (0 to n), the multiplication sign ('x'), and the product. This function offers a controlled and organized representation of the n times table when the input is within the valid range, ensuring that excessive or negative values of n do not produce any output.


## **101-natural.c**:
**Description**: This C program efficiently computes and prints the sum of all the natural numbers that are multiples of 3 or 5 below 1024 (excluding 1024) as described. It uses a loop to iterate through the numbers from 1 to 1023 and checks if each number is a multiple of 3 or 5. If a number is a multiple of either 3 or 5, it adds that number to a running total. After processing all the numbers, the program prints the computed sum followed by a new line. This program leverages the standard library to perform the calculations and achieve the desired output format.


## **102-fibonacci.c**:
**Description**: This C program efficiently calculates and prints the first 50 Fibonacci numbers, starting with 1 and 2, separated by a comma and a space, and followed by a new line. It employs a loop to generate the Fibonacci sequence, where each number is the sum of the previous two. The program initializes the first two Fibonacci numbers as 1 and 2, respectively, and then calculates and prints the next 48 numbers in the sequence while maintaining the correct format. It leverages the standard library to perform the calculations and achieve the desired output format, providing an organized and straightforward representation of the first 50 Fibonacci numbers.


## **103-fibonacci.c**:
**Description**: This C program efficiently computes and prints the sum of even-valued terms in the Fibonacci sequence where the values do not exceed 4,000,000, as described. It uses a loop to generate the Fibonacci sequence, starting with 1 and 2, and adds up the even-valued terms while ensuring they do not exceed the specified limit. Once the sum is computed, the program prints it followed by a new line, leveraging the standard library for calculations and achieving the desired output format. This program provides an organized solution for finding and summing the specified Fibonacci sequence terms.


## **104-fibonacci.c**:
**Description**: This C program efficiently calculates and prints the first 98 Fibonacci numbers, starting with 1 and 2, separated by a comma and a space, and followed by a new line, while adhering to the specified constraints. It uses a loop to generate the Fibonacci sequence, maintaining two variables to keep track of the current and previous numbers. The program calculates and prints the Fibonacci numbers in the desired format while ensuring it doesn't exceed the limit of 98 terms. By relying on simple variables and a loop, this program offers a straightforward solution to the problem without using additional libraries, pointers, arrays, or long long data types.