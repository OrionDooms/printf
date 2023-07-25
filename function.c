#include "main.h"
/**
 * _puts - prints the string.
 * @s: takes in a string.
 * Return: length
 */
int _puts(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	return (len);
}
/**
 * _putchar - write to stdout.
 * @c: string to be print.
 * Return: (string).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
