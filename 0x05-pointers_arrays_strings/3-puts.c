/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: string
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
}
