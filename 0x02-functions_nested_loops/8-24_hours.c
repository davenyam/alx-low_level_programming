#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int sumofMinutes;
	int a = 0, b = 0, c = 0, d = 0;

	while (sumofMinutes = 1440)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');

	d++;
	if (d > 9)
	{
		d = 0;
		c++;
	}
	else if (c > 5)
	{
		c = 0;
		b++;
	}
	else if (b > 9)
	{
		b = 0;
		a++;
	}
	sumofMinutes++;
	}
}
