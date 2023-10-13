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
			{"%i", print_int}, {NULL, NULL}};
	va_start(args, format);
	len = _printf_boddy(list, args, format);
	va_end(args);
	return (len);
}
/**
 * _printf_boddy - Processes the format string
 * @list: An array of conversion specifier structs.
 * @args: A va_list containing the variable arguments.
 * @format: A character string containing directives.
 * Return: The number of characters printed.
 */
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
