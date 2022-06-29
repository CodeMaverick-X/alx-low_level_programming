#include <stdlib.h>

/**
 * *argstostr - function that concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 *
 * Return: char
 */

char *argstostr(int ac, char **av)
{

	int i, j, size, v;
	char *scat;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}
	size++;

	scat = malloc(sizeof(char) * size);
	if (scat == NULL)
		return (NULL);
	v = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			scat[v++] = av[i][j];
		}
		scat[v++] = '\n';
	}
	scat[v] = '\0';
	return (scat);
}
