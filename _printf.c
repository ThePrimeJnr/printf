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
				_putchar(format[i]);
			else
			{
				i++;
				switch (format[i])
				{
					case 'c':
						_putchar(va_arg(ls_args, int));
						break;
					case 's':
						str_temp = va_arg(ls_args, char *);
						if (str_temp != NULL)
						{
							len += _putstr(str_temp);
							break;
						}
						len += _putstr("(Null)");
						break;
					case '%':
						_putchar('%');
						break;
					case '\0':
						return (-1);
					default:
						_putchar('%');
						_putchar(format[i]);
						len++;
						break;
				}
			}
			i++;
			len++;
		}
	}
	else
		return (-1);
	va_end(ls_args);

	return (len);
}
