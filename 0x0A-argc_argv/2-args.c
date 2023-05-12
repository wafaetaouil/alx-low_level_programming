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
	int i;

	for (i = 0; i < c; i++)
	{
		printf("%s\n", v[i]);
	}
	return (0);
}
