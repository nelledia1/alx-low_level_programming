#include "main.h"

/**
 * print_alphabet_x10 - The function prints alphabet using putchar function
 * Description: Print alphabet 10 times in lowercase
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	int n;
	char i;

	for (n = 0; n <= 9; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
