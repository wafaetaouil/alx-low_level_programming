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
	(void) c;
	printf("%s\n", v[0]);
	return (0);
}
