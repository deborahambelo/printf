#include "main.h"
int _printf(const char *format, ...) {
  int count = 0;
  va_list args;
  va_start(args, format);

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


            case 'c': {
            char c = va_arg(args, int);
            _putchar(c);
            count++;
            break;
          }
          case 's': {
  char *str = va_arg(args, char*);
  if (str == NULL) {
    str = "(null)";
  }
  while (*str) {
    _putchar(*str);
    count++;
    str++;
  }
  break;
}
          case 'd':
          case 'i': {
            int num = va_arg(args, int);
            if (num == 0) {
              _putchar('0');
              count++;
            } else {
              count += print_number(num);
            }
            break;
          }
         default: {
  _putchar('%');
  count++;
  _putchar(*format);
  count++;
  fprintf(stderr, "Warning: Unknown format specifier '%%%c'\n", *format);
  format++; 
}

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

int print_unsigned_number(unsigned int n) {
  if (n == 0) {
    return _putchar('0');
  } else {
    if (n / 10 != 0) {
      return print_unsigned_number(n / 10) + _putchar(n % 10 + '0');
    } else {
      return _putchar(n + '0');
    }
  }
}
