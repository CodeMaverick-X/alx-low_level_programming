#include <stdio.h>
#include <stdarg.h>
#include <string.h>
int add(int n1, int n2, ...);
int add(int n1, int n2, ...)
{
	va_list list;

	va_start(list, n2);

	int m = va_arg(list, int);

	va_end(list);

	return (n1 + n2 + m);
}


int main(void)
{
	puts("this is bullshit");
	putchar('\n');
	int sum = add(5, 6, 7);
	printf("%d\n", sum);

	return (0);
}
