#include <stdarg.h>
#include <stdio.h>

int print_number(int num) {
  int sum;
  int temp;
  int num_digits;

  sum = 0;
  if (num < 0) {
    putchar('-'); 
    sum++;
    num = -num; 
  }

  if (num == 0) {
    putchar('0'); 
    sum++;
    return sum;
  }


  temp = num;
  num_digits = 0;
  while (temp > 0) {
    temp /= 10;
    num_digits++;
  }


  while (num > 0) {
    int digit = num % 10;
    putchar(digit + '0');
    sum++;
    num /= 10;
  }

  return sum;
}
