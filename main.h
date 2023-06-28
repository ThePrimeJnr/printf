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
int _putuint(unsigned int num);
int _putbit(unsigned int num);
int _putoct(unsigned int num);
int _puthex(unsigned int num, char alpha);
int _putnospec(char *str);
int _puthex2(int num);
int _putsign(int num);
int _putspace(int num);
/*int _putpointer(void *arg);*/
int _puthash(unsigned int num, char base);
int _spec_handler (va_list ls_args, char spec);

#endif /* PRINTF_H */
