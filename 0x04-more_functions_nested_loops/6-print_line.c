#include "main.h"

/**
 * print_line - Prints a line of underscores
 * @n: The number of underscores to printvoid print_line(int n)
 * Description: This function prints a line consisting of 'n' underscores
 * followed by a newline character.
 */
void print_line(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        while (n > 0)
        {
            _putchar('_');
            n--;
        }
        _putchar('\n');
    }
}
