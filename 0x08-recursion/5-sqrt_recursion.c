#include "main.h"

/**
 * _sqrt_recursion - A function that returns the natural square root
 * of a number
 * @n: integer parameter
 * Return: square root of a number or -1 if the number does not have the
 * natural square
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: integer parameter
 * @i: iteration
 * Return: a number
 */

int _sqrt(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
		return (-1);
	if (sqr == n)
		return (i);
	return (_sqrt(n, i + 1));
}
