#include "main.h"

/**
 * _islower - return 1 when is lower and 0 when it is not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
