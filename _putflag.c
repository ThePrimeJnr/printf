#include "main.h"

int _putsign(int num)
{
	if (num <= 0)
		return (_putint(num));
	_putchar('+');
	return(_putint(num) + 1);
}

int _putspace(int num)
{
	if (num <= 0)
		return (_putint(num));
	_putchar(' ');
	return(_putint(num) + 1);
}

