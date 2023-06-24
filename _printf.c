#include "main.h"

/**
 * _printf - Prints to the standar output like regular printf
 * @format: The string to be printed adn its format specifiers
 *
 * Return: Length of printed string
 */
int _printf(const char *format, ...)
{
	int i = 0;

	while (format && format[i])
	{
		_putchar(format[i]);
		i++;
	}

	_putchar('\n');

	return (i);
}

