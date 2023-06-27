#include "main.h"

/**
 * _putnospec - Prints a string to standard output
 * @str: The string to be printed
 *
 * Return: Length of string printed - 1
 */
int _putnospec(char *str)
{
	int i, len = 0;

	if (!str)
		return (len += _putstr("(null)"));
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			len += _putchar(92);
			len += _putchar('x');
			len += _puthex2(str[i]);
			continue;
		}
		len += _putchar(str[i]);
	}

	return (len);
}

/**
 * _puthex2 - Prints an hex to standard output
 * @num: The number to be printed
 * @alpha: alpha value
 * Return: Length of string printed - 1
 */
int _puthex2(int num)
{
	int val;

	if (num < 10)
	{
		_putchar('0');
		_putchar(num + '0');
		return (2);
	}
	if (num < 16)
	{
		_putchar('0');
		_putchar(num + 87);
		return (2);
	}

	val = num % 16;
	num = num / 16;

	_puthex(num, 'x');
	_puthex(val, 'x');

	return (2);
}

