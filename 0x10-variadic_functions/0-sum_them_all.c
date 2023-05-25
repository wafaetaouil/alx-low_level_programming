#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -Return the sum
 * @n: the number of parametres
 * @...: variable of parametres
 *
 * Return: if n == 0 - 0.
 * outherwise - the sum of all
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, s = 0;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(a, int);
	}
	va_end(a);

	return (s);
}
