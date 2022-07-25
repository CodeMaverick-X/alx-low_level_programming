#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: file name
 * @text_content: text to write to the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, r = 0, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT, 600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[r])
			r++;
		w = write(fd, text_content, r);
		if (w != r)
			return (-1);
	}

	close(fd);

	return (1);
}
