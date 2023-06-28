#include "main.h"

/**
 * _putsign - prints a sign
 *
 * @num: num signs
 * @spec: the specifier
 * Return: length
 */
int _putsign(int num, char spec)
{
	int len = 0;

	if (spec == 'd' || spec == 'i')
	{
		if (num > 0)
			len += _putchar('+');
		len += _putint(num);
	}
	else if (spec == 'u')
		len += _putuint(num);

	return (len);
}

/**
 * _putspace - prints a space
 *
 * @num: number of spaces
 * @spec: the specifier
 * Return: len
 */
int _putspace(int num, char spec)
{
	int len = 0;

	if (spec == 'd' || spec == 'i')
	{
		if (num > 0)
			len += _putchar(' ');
		len += _putint(num);
	}
	else if (spec == 'u')
		len += _putuint(num);

	return (len);
}

/**
 * _puthash - prints a hash
 * @num: number
 * @base: base of number
 * Return: len
 */
int _puthash(unsigned int num, char base)
{
	int len = 0;

	if (base == 'o')
	{
		len += _putchar('0');
		len += _putoct(num);
	}
	else if (base == 'x')
	{
		len += _putstr("0x");
		len += _puthex(num, 'x');
	}
	else if (base == 'X')
	{
		len += _putstr("0X");
		len += _puthex(num, 'X');
	}

	return (len);
}

