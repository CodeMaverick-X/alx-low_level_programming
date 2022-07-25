#include "main.h"

/**
 * read_textfile - function that reads a text file and
 *  prints it to the POSIX standard output.
 *  @filename: filename
 *  @letters: letters is the nymbeer of letters it should read and
 *  print
 *  Return: the number it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);

	r = read(fd, buff, letters);
	if (r < 0)
	{
		free(buff);
		return (0);
	}
	buff[r] = '\0';

	close(fd);

	w = write(STDOUT_FILENO, buff, r);
	if (w < 0)
	{
		free(buff);
		return (0);
	}

	free(buff);
	return (w);




}
