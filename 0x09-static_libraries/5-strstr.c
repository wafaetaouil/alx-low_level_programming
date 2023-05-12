#include "main.h"
#include <stdio.h>

/**
 * _strstr - entrer point
 * @haystack: input
 * @needle: input
 *
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *o = haystack;
		char *t = needle;

		while (*o == *t && *t != '\0')
		{
			o++;
			t++;
		}
		if (*t == '\0')
			return (haystack);
	}
	return (NULL);
}
