#include "main.h"



int integer(int num)
{
    int length = 0;

    if (num < 0)
    {
        _putchar('-');
        num = -num;
        length++;
    }
    if (num / 10)
      length += integer(num / 10); 
   return length += _putchar((num % 10) + 48);
}

int print_int(va_list arg)
{
  int n = va_arg(arg, int);

  return (integer(n));
}
