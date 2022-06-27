#include <stdlib.h>

/**
 * *str_concat - Write a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: character
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *stCat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0';)
	{
		i++;
	}

	for (j = 0; s2[j] != '\0';)
	{
		j++;
	}

	stCat = malloc(sizeof(char) * (i + j + 1));

	if (stCat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		stCat[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		stCat[i] = s2[j];
		i++;
	}

	stCat[i] = '\0';
	return (stCat);

}
