#include <stdarg.h>
#include <stdio.h>
#include "main.h"
int _printf(const char *format, ...) {
	int count;
    char *str;
    char c;

    va_list args;
    va_start(args, format);

    count = 0;
    while (*format) {
        if (*format == '%') {
            format++; 
            if (*format == '\0') {
                break;
            } else if (*format == '%') {
                _putchar('%'); 
                count++;
            } else {
                switch (*format) {
                    case 'c':
                        c = va_arg(args, int);
                        _putchar(c);
                        count++;
                        break;
                    case 's':
                        str = va_arg(args, char*);
                        while (*str) {
                            _putchar(*str);
                            count++;
                            str++;
                        }
                        break;
                    default:
                        
                        break;
                }
            }
        } else {
            _putchar(*format);
            count++;
        }
        format++; 
    }

    va_end(args);
    return count;
}
