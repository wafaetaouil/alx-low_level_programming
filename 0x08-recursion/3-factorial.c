#include "main.h"

/**
 * factorial - return the factorial
 * @n: number to return
 *
 * Return: faction of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
