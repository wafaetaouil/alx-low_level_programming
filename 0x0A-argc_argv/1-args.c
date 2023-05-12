#include <stdio.h>
#include "main.h"

/**
 * main -print the name
 * @c: number of argument
 * @v: array of argumnt
 *
 * Return: 0 success
 */
int main(int c, char *v[])
{
	(void) v;
	printf("%d\n", c - 1);
	return (0);
}
