#include "main.h"
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
	int i = 0, len = 0;

	va_start(ls_args, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
			len += _putchar(format[i]);
		else
		{
			i++;
			if (!format[i])
				return (-1);
			len += _spec_handler(ls_args, format[i]);
		}
		i++;
	}

	va_end(ls_args);

	return (len);
}

/**
 * _spec_handler - handles the specifier passed to _printf
 *
 * @ls_args: List of variadic arguments
 * @spec: the specifier after %
 *
 * Return: length of handle argument
 */
int _spec_handler (va_list ls_args, char spec)
{
	int len = 0;

	switch (spec)
	{
		case 'c':
			len += _putchar(va_arg(ls_args, int));
			break;
		case 's':
			len += _putstr(va_arg(ls_args, char *));
			break;
		case 'd':
		case 'i':
			len += _putint(va_arg(ls_args, int));
			break;
		case '%':
			len += _putchar('%');
			break;
		default:
			len += _putchar('%');
			len += _putchar(spec);
			break;
	}

	return (len);

}
