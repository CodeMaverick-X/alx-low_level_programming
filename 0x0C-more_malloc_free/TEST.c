#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number
 *
 * Retern: ppinter to new string location
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, i, k;

	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\n';)
	{
		i++;
	}

	for (j = 0; j < n && s2[j] != '\n';)
	{
		j++;
	}

	str = malloc(i + j + 1);
	if (str == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
	{
		str[k] = s1[k];
	}

	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		str[k] = s2[i];
		k++;
	}
	str[k] = '\0';;

	return (str);

}
