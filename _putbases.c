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
 *
 * Return: Length of string printed - 1
 */
int _puthex(int num)
{
	int len = 0;
	unsigned int val;

	if (num < 16)
	{
		len += _putchar(_tohex(num));
		return (len);
	}
	val = num % 16;
	num = num / 16;
	len += _puthex(num);
	len += _putchar(_tohex(val));

	return (len);
}

/**
 * _tohex - convertas a decimal num to hexadecimal
 * @num
 * Return: hexadecimal char
 */
char _tohex(int num)
{
	if (num >= 0 && num <= 9)
		return num + '0';
	else if (num >= 10 && num <= 15)
		return num - 10 + 'A';
	else
		return '\0';
}
