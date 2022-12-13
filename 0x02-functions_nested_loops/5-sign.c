#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: input number
 * Description: uses if statement to check the sign of n
 * Return: 1 if greater than zero, 0 if zero, -1 if less than zero
 */

int print_sign(int n)
{
	int val;

	if (n > 1)
	{
		val = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		val = 0;
		_putchar('0');
	}
	else
	{
		val = -1;
		_putchar('-');
	}
	return (val);
}
