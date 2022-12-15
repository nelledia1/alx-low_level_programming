#include "main.h"

/**
 * _isdigit - Function that checks for a digit (0 through 9)
 * @c: An input integer
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	char i;
	int isdigit = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
		}
	}
	return (isdigit);
}
