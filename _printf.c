#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int len;
	fr list[] = {
			{"%c", print_c}, {"%s", print_s}, {"%%", print_perc},
			{"%d", print_int}, {"%i", print_int},
			{NULL, NULL}};
	va_start(args, format);
	len = _printf_boddy(list, args, format);
	va_end(args);
	return (len);
}

int _printf_boddy(fr *list, va_list args, const char *format)
{
	int len = 0, i = -1, j;

	while (format[++i])
	{
		if (format[i] == '%')
		{		
			for (j = 0; list[j].sp; j++)
			{
				if (format[i + 1] == list[j].sp[1])
				{
					len += list[j].f(args), i++;
					break;				
				}
			}
		}
		else
			len += _putchar(format[i]);
	}
	
	return (len);
}
