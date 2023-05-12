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
	int r1 = 0, r2 = 0;

	if (c == 3)
	{
		r1 = atoi(v[1]);
		r2 = atoi(v[2]);
		printf("%d\n", r1 * r2);
	}
	else
	{
		print("ERROR\n");
		return (1);
	}
}
