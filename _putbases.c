#include "main.h"

/**
 * _putuint - Prints an unsighed decimal to standard output
 * @num: The number to be printed
 *
 * Return: Length of string printed - 1
 */
int _putuint(unsigned int num)
{
	int len = 0;
	unsigned int val;

	if (!num)
	{
		len += _putchar('0');
		return (len);
	}
	val = num % 10;
	num = num / 10;
	if (num)
		len += _putint(num);
	len += _putchar(val + '0');

	return (len);
}

/**
 * _putoct - Prints an octal to standard output
 * @num: The number to be printed
 *
 * Return: Length of string printed - 1
 */
int _putoct(unsigned int num)
{
	int len = 0;
	unsigned int val;

	if (num < 8)
	{
		len += _putint(num);
		return (len);
	}
	val = num % 8;
	num = num / 8;
	if (num)
		len += _putoct(num);
	len += _putchar(val + '0');

	return (len);
}

/**
 * _puthex - Prints an hex to standard output
 * @num: The number to be printed
 * @alpha: alpha value
 * Return: Length of string printed - 1
 */
int _puthex(unsigned int num, char alpha)
{
	int len = 0;
	unsigned int val;

	if (num < 10)
		return (_putchar(num + '0'));
	if (num < 16)
	{
		if (alpha == 'x')
			return (_putchar(num + 87));
		return (_putchar(num + 55));
	}
	val = num % 16;
	num = num / 16;
	if (num)
		len += _puthex(num, alpha);
	len += _puthex(val, alpha);

	return (len);
}

