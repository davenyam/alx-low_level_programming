#include "main.h"

/**
 * _memset - fills the memory with a const byte
 * @s: string array
 * @b: const byte
 * @n: number of bytes
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }

    return (s);
}
