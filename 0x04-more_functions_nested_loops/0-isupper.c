#include "main.h"

/**
 * _isupper - A  function that checks for uper case character.
 * @c: character to be checked
 * Description: uses the for loop and if statement to check if c is upper
 * Return: returns 1 if c is uppercase and 0 otherwise.
 */

int _isupper(int c)
{
	char i;
	int upper  = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			upper = 1;
		}
	}
	return (upper);
}
