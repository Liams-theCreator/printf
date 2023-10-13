#include "main.h"



int print_h(int n)
{
    int len = 0;
    
    if (n / 16)
    {
        len += hex(n / 16);
    }
    
    int remainder = n % 16;
    
    if (remainder < 10)
    {
        len += _putchar(remainder + '0');
    }else 
    {
        len += _putchar(remainder - 10 + 97);
    }
    return len;
}

int print_hex(va_list arg)
{
	int n = va_arg(arg, int);

	return (print_h(n));
}
