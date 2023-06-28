#include "main.h"

/**
 * _putsign - prints a sign
 * @num: num signs
 * Return: le
 */
int _putsign(int num)
{
	if (num <= 0)
		return (_putint(num));
	_putchar('+');
	return (_putint(num) + 1);
}

/**
 * _putspace - prints a space
 * @num: number of spaces
 * Return: len
 */
int _putspace(int num)
{
	if (num <= 0)
		return (_putint(num));
	_putchar(' ');
	return (_putint(num) + 1);
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
		len += _putchar('O');
		len += _putoct(num);
	}
	else if (base == 'x')
	{
		len += _putstr("Ox");
		len += _puthex(num, 'x');
	}
	else if (base == 'X')
	{
		len += _putstr("OX");
		len += _puthex(num, 'X');
	}

	return (len);
}

