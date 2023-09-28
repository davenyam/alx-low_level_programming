## 0x01. C - Variables, if, else, while

This repository contains a collection of C programs and scripts that perform various tasks related to C programming. Each script and program is designed to fulfill a specific purpose and provides a description of its functionality.

## Table of Contents

1. [0-positive_or_negative.c](#0-positive_or_negative.c)
2. [1-last_digit.c](#1-last_digit.c)
3. [2-print_alphabet.c](#2-print_alphabet.c)
4. [3-print_alphabets.c](#3-print_alphabets.c)
5. [4-print_alphabt.c](#4-print_alphabt.c)
6. [5-print_numbers.c](#5-print_numbers.c)
7. [6-print_numberz.c](#6-print_numberz.c)
8. [7-print_tebahpla.c](#7-print_tebahpla.c)
9. [8-print_base16.c](#8-print_base16.c)
9. [9-print_comb.c](#9-print_comb.c)
9. [100-print_comb3.c](#100-print_comb3.c)
9. [101-print_comb4.c](#101-print_comb4.c)
9. [102-print_comb5.c](#102-print_comb5.c)
---
### File Descriptions:

## **0-positive_or_negative.c**:
   - **Description**: This C program generates a random number and assigns it to the variable 'n' each time it is executed. It's designed to determine whether the value stored in 'n' is positive, zero, or negative and then print the result accordingly. While you don't need to understand the details of how the random number generation works (utilizing functions like 'rand', 'srand', and 'RAND_MAX'), your task is to complete the provided source code to achieve the desired output. The program will display the generated number, followed by a statement indicating whether it's positive, zero, or negative, and concludes with a new line, allowing users to see the outcome of the random number assignment.
   

## **1-last_digit.c**:
   - **Description**: This C program generates a random number and assigns it to the variable 'n' each time it's executed. The goal is to complete the provided source code to print the last digit of the number stored in 'n.' While you don't need to comprehend the inner workings of functions like 'rand,' 'srand,' and 'RAND_MAX,' your task is to finalize the code to achieve the desired output. The program will display the following output: "Last digit of n is," followed by the last digit of 'n,' and "and is greater than 5" if the last digit is greater than 5, "and is 0" if the last digit is 0, or "and is less than 6 and not 0" if the last digit is less than 6 and not 0, followed by a new line. This allows users to see the last digit's evaluation for the randomly assigned value in 'n' each time the program is run.
   

## **2-print_alphabet.c**:
   - **Description**: This C program is designed to print the lowercase alphabet, followed by a new line, while adhering to strict constraints. It exclusively utilizes the putchar function and restricts the use of all other functions (such as printf or puts). The entire code is confined within the main function, ensuring that all logic and execution is contained therein. Remarkably, the program manages to achieve its goal using only two instances of putchar by incrementing a character variable from 'a' to 'z' within a loop, printing each lowercase letter sequentially, and finally adding a new line to the output. This succinct and efficient code exemplifies the mastery of output handling through the putchar function in C programming.
   

## **3-print_alphabets.c**:
   - **Description**: This C program accomplishes the task of printing the lowercase alphabet followed by the uppercase alphabet, both in sequence, and concludes with a new line. Adhering to strict constraints, the program exclusively employs the putchar function and confines all its code within the main function. Remarkably, it manages to achieve this output format using only three instances of putchar. The program first enters a loop to print the lowercase alphabet, followed by another loop to print the uppercase alphabet, all within a single putchar call for each letter. It efficiently combines both lowercase and uppercase alphabets and concludes with a new line, showcasing proficient use of the putchar function in C programming.
   

## **4-print_alphabt.c**:
   - **Description**: This C program skillfully prints the lowercase alphabet, excluding the letters 'q' and 'e,' and concludes with a new line, all while strictly adhering to the constraints. The program utilizes only two instances of the putchar function to achieve this. It begins by initializing a character variable with 'a' and then enters a loop that iterates through the alphabet, incrementing the variable from 'a' to 'z.' Within the loop, it utilizes an if statement to check if the current letter is not 'q' or 'e' before using putchar to print it. This approach ensures that only the desired letters are printed while complying with the specified constraints, ultimately resulting in the desired output format of the lowercase alphabet followed by a new line.
   

## **5-print_numbers.c**:
   - **Description**: This C program effectively prints all single-digit numbers in base 10, starting from 0 and concluding with 9, followed by a new line. All code is encapsulated within the main function, ensuring simplicity and conciseness. It employs a loop to iterate through the numbers from 0 to 9 and uses the putchar function within the loop to print each digit. As the loop progresses, it sequentially prints the numbers from 0 to 9, and after completing the loop, it adds a new line character to conclude the output, resulting in the desired format of all single-digit base 10 numbers followed by a new line.
   

## **6-print_numberz.c**:
   - **Description**: This C program prints all single-digit numbers in base 10, starting from 0 and ending with 9, followed by a new line, while strictly adhering to the given constraints. It accomplishes this using only two instances of the putchar function and no variables of type char. The program initializes an integer with the value 48, which corresponds to the ASCII code of the character '0'. It then enters a loop to print each digit by incrementing this integer value and casting it to a character to ensure it prints the corresponding digit character. After printing all digits from 0 to 9, the program adds a new line character to conclude the output, meeting the specified format requirements.


## **7-print_tebahpla.c**:
   - **Description**: This C program adeptly prints the lowercase alphabet in reverse order, followed by a new line, while strictly adhering to the provided constraints. It effectively accomplishes this using only two instances of the putchar function. The program initializes a character variable with 'z,' representing the last letter of the lowercase alphabet, and then enters a loop. In each iteration of the loop, it utilizes putchar to print the current letter and decrements the character variable to move to the previous letter in the alphabet. This process continues until 'a' is printed, and then a new line character is added to conclude the output, successfully achieving the desired format of the reversed lowercase alphabet followed by a new line.
   

## **8-print_base16.c**:
   - **Description**: This C program efficiently prints all the numbers of base 16 in lowercase, from '0' to '9' and 'a' to 'f,' followed by a new line, while strictly adhering to the provided constraints. It achieves this using only three instances of the putchar function. The program enters a loop to iterate through the characters '0' to '9' and 'a' to 'f.' Within the loop, it utilizes putchar to print each character representing a hexadecimal digit. After printing all the required characters, it uses putchar one more time to add a new line character, resulting in the desired output format of all base 16 numbers in lowercase followed by a new line.
   

## **9-print_comb.c**:
   - **Description**: This C program skillfully prints all possible combinations of single-digit numbers in ascending order, separated by ", ", while strictly adhering to the provided constraints. It accomplishes this task with a maximum of four putchar function calls. The program initializes an integer variable with the value 0 and enters a nested loop structure to iterate through single-digit numbers. The outer loop controls the tens' place (0 to 9), while the inner loop handles the ones' place (0 to 9). Within these loops, putchar is used to print the digits and the ", " separator. This generates all possible combinations of single-digit numbers in ascending order, satisfying the specified output format.
   

## **100-print_comb3.c**:
   - **Description**: This C program efficiently prints all possible different combinations of two digits in ascending order, with each combination separated by ", ", while adhering to the specified constraints. It utilizes a maximum of five putchar function calls. The program enters a nested loop structure, with the outer loop controlling the tens' place (0 to 9) and the inner loop handling the ones' place (0 to 9). To ensure different combinations with the same digits (e.g., 01 and 10) are considered the same, it checks if the outer loop index is less than the inner loop index before printing the combination. This way, it only prints the smallest combination of two different digits and generates all such combinations in ascending order, meeting the required output format.
   

## **101-print_comb4.c**:
   - **Description**: This C program efficiently prints all possible different combinations of three digits in ascending order, with each combination separated by ", ", while adhering to the specified constraints. It uses a maximum of six putchar function calls. The program enters a nested loop structure, with three loops controlling the hundreds, tens, and ones places (0 to 9). To ensure different combinations with the same digits (e.g., 012 and 120) are considered the same, it checks for the ascending order of loop indices and prints only the smallest combination of three different digits. This approach generates all such combinations in ascending order and adheres to the required output format.
   

## **102-print_comb5.c**:
   - **Description**: This C program efficiently prints all possible combinations of two two-digit numbers, ranging from 00 to 99, with each combination separated by a comma and a space, while adhering to the specified constraints. It uses a maximum of eight putchar function calls. The program enters a nested loop structure, with two outer loops controlling the tens' and ones' places of the first number (00 to 99), and two inner loops controlling the tens' and ones' places of the second number (00 to 99). To ensure that different combinations with the same numbers (e.g., 00 01 and 01 00) are considered the same, it checks for the ascending order of the loop indices and prints only the smallest combination. This approach generates all such combinations in ascending order and ensures that numbers are printed with two digits, meeting the required output format.
   
