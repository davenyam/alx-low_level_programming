#include "main.h"

/**
 * _abs - computes an absolute value of an interger
 * @n: int type number
 * return: absolute values of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}
