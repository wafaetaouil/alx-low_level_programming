#include "main.h"
/**
 * reverse_array - reverse integre
 * @a: array
 * @n: number of element
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
