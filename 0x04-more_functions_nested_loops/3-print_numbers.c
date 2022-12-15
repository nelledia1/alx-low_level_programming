#include "main.h"

/**
 * print_numbers - A function that prints the numbers, from 0 to 9
 * Description: uses a for loop
 * Returns: Always 0.
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
