#include "main.h"

int _putsign(int num, char spec)
{
	if (spec == 'd' || spec == 'i')
	{
		if (num <= 0)
			return (_putint(num));
		_putchar('+');
		return(_putint(num) + 1);
	}
	return (0);
}
