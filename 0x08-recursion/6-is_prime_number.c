#include "main.h"

int a_prime(int n, int i);

/**
* is_prime_number - returns the natural squar root of number
* @n: number to evaluate
*
* Return: 1 if n is a prime num ,0 if not
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (a_prime(n, n - 1));
}

/**
 * a_prime  - calculate if number is prime recusiverly
 * @n: number to evaluate
 * @i: iter
 *
 * Return: 1 if n is prime , 0 if not
 */

int a_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == n && i > 0)
		return (0);
	return (a_prime(n, i - 1));
}
