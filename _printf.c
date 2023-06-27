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
			if (format[i] == '+' || format[i] == ' ')
				i++;
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

	if (spec == 'c')
		len += _putchar(va_arg(ls_args, int));
	else if (spec == 's')
		len += _putstr(va_arg(ls_args, char *));
	else if (spec == 'd' || spec == 'i')
		len += _putint(va_arg(ls_args, int));
	else if (spec == 'b')
		len += _putbit(va_arg(ls_args, unsigned int));
	else if (spec == '%')
		len += _putchar('%');
	else if (spec == 'u')
		len += _putuint(va_arg(ls_args, unsigned int));
	else if (spec == 'o')
		len += _putoct(va_arg(ls_args, unsigned int));
	else if (spec == 'x' || spec == 'X')
		len += _puthex(va_arg(ls_args, int), spec);
	else if (spec == 'S')
		len += _putnospec(va_arg(ls_args, char *));
	else if (spec == '+')
		len += _putsign(va_arg(ls_args, int));
	else if (spec == ' ')
		len += _putspace(va_arg(ls_args, int));
	else
		len += _printf("%%%c", spec);

	return (len);
}
