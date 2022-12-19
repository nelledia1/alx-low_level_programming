#include "main.h"

/**
 * _strlen - Function that returns the lenght of a string
 * @s: character input
 * Description: use while loop and counter
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
