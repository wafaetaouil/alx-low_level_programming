#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Print the last digit of the number
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6\n and not 0\n", n, ld);
	}
	return (0);
}
