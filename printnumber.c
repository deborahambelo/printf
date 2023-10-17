#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int print_number(int n) {
    int count = 0;
    if (n < 0) {
        _putchar('-');
        count++;
        n = -n;
    }
    if (n >= 10) {
        count += print_number(n / 10);
    }
    _putchar(n % 10 + '0');
    count++;
    return count; 
}
