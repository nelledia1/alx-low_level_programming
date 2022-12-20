#include "main.h"

/**
 * print_rev - Function that prints a string, in reverse,
 * followed by a new line
 * @s: sting input
 * Description: use for loop
 * Return: Always 0
 */

void print_rev(char *s)
{
	int length = 0;
	int t;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (t = length; t > 0; t--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
