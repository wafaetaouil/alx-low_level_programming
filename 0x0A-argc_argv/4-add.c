#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_nm - check string
 * @s: array str
 *
 * Return: always 0 success
 */
int check_nm(char *s)
{
	unsigned int c;

	c = 0;

	while (c < strlen(s))
	{
		if (!isdigit(s[c]))
			return (0);
		c++;
	}
		return (1);
}

/**
 * main - Print the name of the program
 * @c: Count arguments
 * @v: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int c, char *v[])

{
	int count;
	int str_to_int;
	int s = 0;

	count = 1;
	while (count < c)
	{
		if (check_nm(v[count]))

		{
			str_to_int = atoi(v[count]);
			s += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", s);

	return (0);
}

