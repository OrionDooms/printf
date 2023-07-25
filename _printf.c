#include "main.h"
/**
 * _printf - produces output.
 * @format: - Takes in a string of character.
 * Return: length of a string.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0;
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
					 len = len + _puts(va_arg(args, char*));
					break;
				case 'c':
					_putchar(va_arg(args, int));
					break;
				default:
					return (-1);
			}
		}
		else
		{
			len = len + _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}
