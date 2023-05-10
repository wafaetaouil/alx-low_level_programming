#include "main.h"
/**
 * _print_rev_recursion - fucntion to print
 * @s: to print
 *
 * Return: always 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
