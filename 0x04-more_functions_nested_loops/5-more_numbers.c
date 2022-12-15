#include "main.h"

/**
 * more_numbers - Function that prints numbers from 0 to 14, 10 times
 * followed by a new line.
 * Retrun: Always 0
 */

void more_numbers(void)
{
	int t, n;

	for (t = 0; t <= 9; t++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
