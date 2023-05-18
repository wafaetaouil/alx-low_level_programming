#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - n striong to another string
 * @s1: string to append
 * @s2: string to concanet
 * @n: num of bytes
 *
 * Return: pointer to result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, m1 = 0, m2 = 0;

	while (s1 && s1[m1])
		m1++;
	while (s2 && s2[m2])
		m2++;
	if (n < m2)
		s = malloc(sizeof(char) * (m1 + n + 1));
	else
		s = malloc(sizeof(char) * (m1 + m2 + 1));

	if (!s)
		return (NULL);
	while (i < m1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < m2 && i < (m1 + n))
	{
		s[i++] = s2[j++];
	}
	while (n >= m2 && i < (m1 + m2))
	{
		s[i++] = s2[j++];
	}
	s[i] = '\0';

	return (s);
}
