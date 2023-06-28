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
		_putchar(num + 55);
		return (2);
	}

	val = num % 16;
	num = num / 16;

	_puthex(num, 'X');
	_puthex(val, 'X');

	return (2);
}
/**
 * _putpointer - prints the address of variable
 * @arg: void argument
 * Return: length of string printed
 *
int _putpointer(void *arg)
{
	int len = 0, i = 0;
	unsigned int address = (unsigned int)(unsigned int) arg;
	unsigned int digit;
	int digits = sizeof(void *) * 2;

	for (i = digits - 1; i >= 0; i--)
	{
		digit = (address >> (i * 4)) & 0xF;
		len = _putchar((char)(digit < 10 ? '0' + digit : 'A' + (digit - 10)));
	}

	return (len);
}*/
