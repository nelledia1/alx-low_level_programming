#include "main.h"

/**
 * print_triangle - Fuction that prints a triangle followed by a new line
 * @size: An input integer equals size of the triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int x, y;
	int n = size - 1;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				if (y < n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			n--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
