#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * print_number - prints the number in stdout
 * @n: number
 */

void print_number(int n)
{
	int k, m;
	char a;

	k = 100000;
	while (k)
	{
		m = n / k;
		m = m % 10;
		a = toascii(m + 48);
		if (m  != 0 && a < 58 && a >= 48)
			putchar(a);
		k = k / 10;
	}

}
