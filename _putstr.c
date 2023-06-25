#include "main.h"

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
