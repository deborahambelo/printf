#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int print_number(int n) {
    int count = 0;

    if (n == INT_MIN) {
    _putchar('-');
    count++;
    n = INT_MAX;
}


    if (n < 0) {
        _putchar('-');
        count++;
        n = -n;
    }

    if (n == 0) {
    return count;
  } else {
        count += print_number_recursive(n);
    }

    return count;
}
int print_number_recursive(int n) {
    int count = 0;

    if (n / 10 != 0) {
        count += print_number_recursive(n / 10);
    }

    _putchar(n % 10 + '0');
    count++;

    return count;
}

