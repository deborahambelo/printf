#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

#define UNUSED(x)
int _printf(const char *format, ...);
int _putchar(char c);
int print_number(int n);
int print_number_recursive(int n);
int print_unsigned_number(unsigned int n);
int print_long_number(long int n);

#endif
