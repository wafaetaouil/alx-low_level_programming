#include "main.h"
/**
 * _strlen_recursion - return the lenght
 * @s: string
 *
 * Return: the lenght of stringh
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + l);
	}
	return (l);
}
