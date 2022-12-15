#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line
 * @n: An input interger equal to the number of times \ is printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int diag;
	int space;

	if (n > 0)
	{
		for (diag = 0; diag < n; diag++)
		{
			for (space = 0; space < diag; space++)
			{
				_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
