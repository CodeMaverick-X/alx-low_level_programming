#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * ispositive - checks if the number is poositive
 * @a: char to be checked
 *
 * Return: 1, if its a number, else 0
 */

int ispositive(char *a)
{
	int i, len, num;
	len = strlen(a);
	num = 0;

	for (i = 0; i < len; i++)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
		{
			num = num * 10 + (a[i] - '0');
		}
	}
	return (num);
}

/**
 * main - adds inpute
 *
 * @argc: coutn
 * @argv: vector
 *
 * Return - int
 */

int main(int argc, char *argv[])
{
	int i, sum, num;
	sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = ispositive(argv[i]);

		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
