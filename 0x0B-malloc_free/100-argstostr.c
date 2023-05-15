#include "main.h"
#include <stdlib.h>
/**
 * argstostr - entry
 * @ac: int
 * @av: double pointer
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, n = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[n] = av[i][j];
			n++;
		}
		if (s[n] == '\0')
		{
			s[n++] = '\n';
		}
	}
	return (s);
}
