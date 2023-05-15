#include <stdlib.h>
#include "main.h"
/**
 * str_concat - get ends of input
 * @s1: input one
 * @s2: input two
 * Return: concat s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = r = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[r] != '\0')
		r++;
	c = malloc(sizeof(char) * (i + r + 1));

	if (c == NULL)
		return (NULL);
	i = r = 0;
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[r] != '\0')
	{
		c[i] = s2[r];
		i++, r++;
	}
	c[i] = '\0';
	return (c);
}
