#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of backslashes
 * @n: The number of backslashes to print
 * Description: This function prints a diagonal line consisting of 'n' backslashes
 * followed by a newline character ('\n').
 */
void print_diagonal(int n)
{
    if (n <= 0)
    {
        _putchar('\n'); // If n is 0 or less, print just a newline character
    }
    else
    {
        int spaces = 0;
        while (spaces < n)
        {
            int i = 0;
            while (i < spaces)
            {
                _putchar(' '); // Print spaces before the backslash
                i++;
            }
            _putchar('\\'); // Print the backslash
            _putchar('\n'); // Print a newline character
            spaces++;
        }
    }
}
