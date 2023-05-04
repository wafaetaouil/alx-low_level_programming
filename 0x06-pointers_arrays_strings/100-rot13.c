#include "main.h"
/**
 * rot13 - encoder rot 13
 * @s: pointer to code
 * Return: *s
 */
char *rot13(char *s)
{
	int i, j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data[j])
			{
				s[i] = datr[j];
				break;
			}
		}
	}
	return (s);
}
