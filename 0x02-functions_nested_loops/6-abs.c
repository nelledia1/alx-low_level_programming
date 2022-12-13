#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @n: an input integer value
 * Description: uses if statements to determine the absolute value
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
