#include <stdio.h>

/**
 * hare - Constructor function to print a message about a hare
 *
 * This constructor function prints a message about a hare's characteristics. It is
 * automatically executed before the main function is called.
 */

void __attribute__((constructor)) hare(void);

void hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
