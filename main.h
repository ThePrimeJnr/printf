#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *str);
int _putint(int num);
int _putbit(int num);
int _spec_handler (va_list ls_args, char spec);

#endif /* PRINTF_H */
