#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: integer value
 * @b: integer value
 * Description: swap value of a with value of b
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
