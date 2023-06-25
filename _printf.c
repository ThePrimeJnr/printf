#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - Prints to the standar output like regular printf
 * @format: The string to be printed adn its format specifiers
 *
 * Return: Length of printed string
 */
int _printf(const char *format, ...)
{
	va_list ls_args;
	int i = 0, c;
	char *str_temp;

	va_start(ls_args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
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
						c += _putstr(str_temp);
						break;
					}
					c += _putstr("(Null)");
					break;
				default:
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			c++;
		}	
		i++;
	}
	va_end(ls_args);
	_putchar('\0');
	return (i);
}
