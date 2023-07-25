#include "main.h"
/**
 * _printf - produces output.
 * @format: - Takes in a string of character.
 * Return: length of a string.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0;
	char c;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 's':
				{
					len = len + _puts(va_arg(args, char*));
					break;
				}
				case 'c':
				{
					c = va_arg(args, int);
					_putchar(c);
					break;
				}
				default:
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
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
