#include "main.h"

/**
 * _islower - Function that checks for lower case character
 * @c: character input to be checked
 * Description: Uses for and if statements to check lowercase character
 * Return: 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	char alpha;
	int lower = 0;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == c)
		{
			lower = 1;
		}
	}
	return (lower);
}
