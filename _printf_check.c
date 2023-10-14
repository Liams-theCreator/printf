#include "main.h"
/**
 * _printf_boddy - Processes the format string
 * @list: An array of conversion specifier structs.
 * @args: A va_list containing the variable arguments.
 * @format: A character string containing directives.
 * Return: The number of characters printed.
 */
int _printf_boddy(fr *list, va_list args, const char *format)
{
	int len = 0, i = 0, j;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			i = is_space(format, i);/*"%ssidi"*/
			for (j = 0; list[j].sp; j++)
			{
				if (format[i] == list[j].sp[1])
				{
					len += list[j].f(args), i++;
					break;
				}
			}
		}
		else
		{
			len += _putchar(format[i]), i++;
		}
	}
	return (len);
}
