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

