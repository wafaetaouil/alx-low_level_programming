#include "main.h"

int a_sqrt_recursion(int n, int i);

/**
* _sqrt_recursion - returns the natural squar root of number
* @n: number to calculate the square root of
*
* Return: the resulting square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (a_sqrt_recursion(n, 0));
}

/**
 * a_sqrt_recursion - recurses to find the natural
 * square root of a num
 * @n: number to calculate
 * @i: iter
 *
 * Return: the resulting square root
 */

int a_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (a_sqrt_recursion(n, i + 1));
}
