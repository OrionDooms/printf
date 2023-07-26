#include "main.h"
/**
 * _printf - produces output.
 * @format: - Takes in a string of character.
 * Return: length of a string.
 */
int _printf(const char *format, ...)
{
	int i, len = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (*format == ' ' || *format == '\0')
				return (-1);
			if (format[i] == 's')
				len += _puts(va_arg(args, char*));
			else if (format[i] == 'c')
				len +=  _putchar(va_arg(args, int));
			else if (format[i] == '%')
				len += _putchar(format[i]);
			else
			{
				len += _putchar('%');
				len += _putchar(format[i]);
			}
		}
		else
		{
			len += _putchar(format[i]);
		}
	}
	va_end(args);
	return (len);
}
