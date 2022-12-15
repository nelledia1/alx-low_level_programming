#include "main.h"

/**
 * print_square - A function that prints a square followed by a new line
 * @size: An input integer corresponding to the size of the square
 * Return: Always 0
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0 ; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
