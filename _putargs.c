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
	int i = 0;

	if (str == NULL)
		i = _putstr("(null)");
	else
	{
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	}

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
	int val[20];
	int i = 0, c = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	while (num > 0)
	{
		val[i] = '0' + (num % 10);
		num = num / 10;
		i++;
	}
	for (c = i - 1; c >= 0; c--)
		_putchar(val[c]);

	return (1);
}
