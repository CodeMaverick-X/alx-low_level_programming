/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: intiger 1
 * @b: intiger 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	int m = *b;
	*a = m;
	*b = n;
}
