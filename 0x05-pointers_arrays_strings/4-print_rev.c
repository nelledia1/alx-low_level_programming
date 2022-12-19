#include "main.h"

/**
 * print_rev - Function that prints a string, in reverse, followed by a new line
 * @s: sting input
 * Description: use for loop
 * Return: Always 0
 */

void print_rev(char *s)
{
	int length = 0;
	
	while (s[length] != '\0')
	{
		length++;
		{
			while (length);
			{
				_putchar(s[--length]);
			}
		}
	}
	_putchar('\n');
}
