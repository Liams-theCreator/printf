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
		{"%x", print_hex}, {"%X", print_HEX},
		{"%o", print_octal},
		{NULL, NULL}};
	va_start(args, format);
	len = _printf_boddy(list, args, format);
	va_end(args);
	return (len);
}
