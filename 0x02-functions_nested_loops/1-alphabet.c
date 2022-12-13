#include "main.h"

/**
 * print_alphabet - Function that prints alphabets using the _putchar function
 * Description: Prints alphabets in lower case form
 * Return: Nothing.
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
