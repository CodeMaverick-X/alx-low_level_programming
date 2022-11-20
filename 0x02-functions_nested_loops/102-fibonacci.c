#include <stdio.h>

/**
 * printFibonacci - prnts fibonacci to 50
 * @n: ammount to print
 * Return: void
 */
void printFibonacci(unsigned long int n)
{
	static unsigned long int n1 = 0, n2 = 1, n3;

	if (n > 0)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if (n3 != 1)
			printf(", %ld", n3);
		else
			printf("%ld", n3);
		printFibonacci(n - 1);
	}
}
/**
 * main - print
 * Return: 0
 */

int main(void)
{
	unsigned int long n = 50;

	printFibonacci(n);
	printf("\n");
	return (0);
}
