#include "main.h"

/**
 * _printf - Prints to the standar output like regular printf
 * @format: The string to be printed adn its format specifiers
 *
 * Return: Length of printed string
 */
int _printf(const char *format, ...)
{
	va_list ls_args;
	int i = 0, len = 0;
	char *str_temp;

	va_start(ls_args, format);
	if (format)
	{
		while (format && format[i])
		{
			if (format[i] != '%')
				len += _putchar(format[i]);
			else
			{
				i++;
				switch (format[i])
				{
					case 'c':
						len += _putchar(va_arg(ls_args, int));
						break;
					case 's':
						len += _putstr(va_arg(ls_args, char *));
						break;
					case '%':
						len += _putchar('%');
						break;
					case '\0':
						return (-1);
					default:
						len += _putchar('%');
						len += _putchar(format[i]);
						break;
				}
			}
			i++;
		}
	}
	else
		return (-1);

	va_end(ls_args);

	return (len);
}
