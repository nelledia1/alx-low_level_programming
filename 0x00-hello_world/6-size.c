#include<stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long double longdoubleType;

	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(doubleType));
	printf("Size of a long long int: %zu bytes\n", sizeof(longdoubleType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));

	return (0);
}
