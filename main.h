#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

#define _INT_MIN (1 << (sizeof(int) * 8 - 1))

int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *str);
int _putint(int num);
int _putbit(unsigned int num);
int _putuint(unsigned int num);
int _putoct(unsigned int num);
int _puthex(unsigned int num, char alpha);
int _spec_handler (va_list ls_args, char spec);

#endif /* PRINTF_H */
