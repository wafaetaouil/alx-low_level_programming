#include <stdio.h>
#include <stdlib.h>
/**
 * main -print opcodes
 * @c: numb of argu
 * @v: array
 *
 * Return: always 0 (success)
 */
int main(int c, char *v[])
{
	int b, i;
	char *a;

	if (c != 2)
	{
		printf("ERROR\n");
		exit(1);
	}
	b = atoi(v[1]);

	if (b < 0)
	{
		printf("ERROR\n");
		exit(2);
	}
	a = (char *)main;

	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		printf("%02hhx", a[i]);
	}
	return (0);
}
