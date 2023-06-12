#include "main.h"

/**
 * create_file- cree file
 * @filename: A pointer to the name of file
 * @text_content: A pointe string
 *
 * Return: if the function fails - -1
 * Otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int f, w, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(f, text_content, l);

	if (f == -1 || w == -1)
		return (-1);

	close(f);

	return (1);
}
