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
/**
 * print_int - prints integers.
 * @n: takes in integers.
 * Return: length.
 */
int print_int(int n)
{
	print_num(n);
	return (count_num(n));
}
/**
 * print_num - prints integers.
 * @n: takes in integers.
 */
void print_num(int n)
{
	int num;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_num(num / 10);
	}
	_putchar('0' + (num % 10));
}
/**
 * count_num - counts integers.
 * @n: takes in integers.
 * Return: length.
 */
int count_num(int n)
{
	int count = 0;

	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
