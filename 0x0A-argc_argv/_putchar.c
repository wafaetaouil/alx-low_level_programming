#include <stdio.h>
#include "main.h"
/**
 * _putchar - write c to stdout 
 * @c: print
 *
 * Return: 1 success .
 * on error , -1 returned , errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, -1));
}
