#include <stdio.h>
/**
 * main - entrer alphabet
 * Return: always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('/n');
	return (0);
}
