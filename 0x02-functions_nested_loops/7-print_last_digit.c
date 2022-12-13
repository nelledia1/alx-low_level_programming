#include "main.h"
/**
 * print_last_digit - function prints last digit of a number
 * @n: an inputer integer
 * Description: uses if statement and % to determine the last digit of n
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = -1 * (n % 10);
	}
	else
	{
		last = n % 10;
	}
	_putchar((last % 10) + '0');
	return (n % 10);
}
