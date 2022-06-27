#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - pointer to new space in mem
 *
 * @*str: string
 *
 * Return: character
 */

char *_strdup(char *str)
{
	char *strDup;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 1; str[i] != '\0';)
	{
		i++;
	}
	
	strDup = malloc(sizeof(char) * i);

	if (strDup == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{
		strDup[j] = str[j];
	}
	return (strDup);

}
