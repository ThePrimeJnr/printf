#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putstr - Prints a string to standard output
 * @str: The string to be printed
 *
 * Return: Length of string printed - 1
 */
int _putstr(char *str)
{
	int i;

	if (!str)
		return (_putstr("(null)"));
	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * _putint - Prints an integer to standard output
 * @num: The number to be printed
 *
 * Return: Length of string printed - 1
 */
int _putint(int num)
{
	int val, len = 0;

	if (!num)
	{
		len += _putchar('0');
		return (len);
	}
	if (num == _INT_MIN)
	{
		len += _putstr("-2147483648");
		return (len);
	}
	if (num < 0)
	{
		len += _putchar('-');
		num = -num;
	}

	val = num % 10;
	num = num / 10;
	if (num)
		len += _putint(num);
	len += _putchar(val + '0');

	return (len);
}

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
