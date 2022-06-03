#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int lst = n % 10;

	printf("Last digit of %d is", n);
	if (lst > 5)
	{
		printf("%d and is greater than 5\n", lst);
	}
	if else (lst == 0)
	{
		printf("%d and is 0\n", lst);
	}
	if else ((lst < 6) && (lst != 0))
	{
		printf("%d and is less than 6 and not 0\n", lst);
	}
	return (0);
}
