#include "main.h"
/**
 * _printf - Produces output according to a format.
 * @format: A character string containing directives.
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len;
	fr list[] = {
		{"%c", print_c}, {"%s", print_s},
		{"%%", print_perc}, {"%d", print_int},
		{"%i", print_int}, {"%b", print_binary},
		{"%x", print_hexx}, {"%X", print_HEX},
		{"%o", print_octal}, {"%S", print_S_hex},
		{"%r", print_r}, {"%R", print_rot13},
		{NULL, NULL}};
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	len = _printf_boddy(list, args, format);
	va_end(args);
	return (len);
}
