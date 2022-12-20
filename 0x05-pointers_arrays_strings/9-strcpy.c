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
	int len = 0;
	int x;

	while (*(src + len) != '\0')
	{
		len++;
	}
	for (x = 0; x < len; x++)
	{
		dest[x] = src[x];
	}
	dest[len] = '\0';
	return (dest);
}
