#include "main.h"

/**
 * _strcpy - Function that copies the string pointed to by src, including
 * the termining null byte to the buffer pointed to by dest.
 * @dest: pointer to destination of string
 * @src: pointer to string to copy from
 * Return: pinter to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (temp);
}
