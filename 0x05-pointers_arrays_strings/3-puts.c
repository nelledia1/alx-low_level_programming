#include "main.h"

/**
 * _puts - Fuction that prints a string, followed by a new line, to stdout
 * @str: character input
 * Description: use the for loop and  _putchar function
 * Return: Always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
