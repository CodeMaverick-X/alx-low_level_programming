#include "main.h"

/**
 * sqtRecursive - square root recursively doing binary search
 * @n: inital number
 * @m: given number
 * Return: 1 if not found sqrroot, else sqrroot
 */

int sqtRecursive(int n, int m)
{
	if (n <= 0)
		return (-1);
	if (n * n == m)
		return (n);
	return (sqtRecursive(n - 1, m));
}
/**
 * _sqrt_recursion - function that returns the naturr.
 *
 * @n: intigfer
 *
 * Return: intiger
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqtRecursive(n / 2, n));
}
/**
 * is_prime_number - checks if a given number is prime
 * @n: given number
 * Return: 1 if number is prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
}
