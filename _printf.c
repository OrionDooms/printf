#include "main.h"
/**
 * _printf - produces output.
 * @format: - Takes in a string of character.
 * Return: length of a string.
 */
int _printf(const char *format, ...)
{
	unsigned int j, i = 0, len = 0;
	char *str, c;
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
					str = va_arg(args, char*);
					{
						for (j = 0; str[j] != '\0'; j++)
						{
							putchar(str[j]);
							len++;
						}
					}
					break;
				case 'c':
					c = va_arg(args, int);
						putchar(c);
						break;
				default:
					return (-1);
					break;
			}
		}
		else
		{
			putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
