#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: an input character that is being checked
 * Description: function uses for loop and if statement to check
 * Return: 1 if c is a letter, lowercase or uppercase or 0 otherwise
 */

int _isalpha(int c)
{
	char lower, upper;
	int alpha = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper) 
				alpha = 1;
		}
	}
	return (alpha);
}

