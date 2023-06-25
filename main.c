#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	char *str = "string1";
/*
	unsigned int ui;
	void *addr;
*/

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n\n", len2, len2);

	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n\n", len2, len2);

	len = _printf("char, char:[%c%c]\n", 'A', 'Z');
	len2 = printf("char, char:[%c%c]\n", 'A', 'Z');
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n\n", len2, len2);

	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n\n", len2, len2);

	len = _printf("str, str:[%s%s]\n", str, " string2");
	len2 = printf("str, str:[%s%s]\n", str, " string2");
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n\n", len2, len2);

/*
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n"); */
	return (0);
}
