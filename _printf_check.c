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
	int len = 0, i = 0, j, triger, prec_holder, skip_printed = 1;

	while (format[i])
	{
		if (format[i] == '%')
		{
			prec_holder = i, i++, triger = 1;
			while (1)
			{
				len += is_flag(format, &i, args, &skip_printed);/*"% yd"*/
				if (skip_printed == 1)
					break;
			}
			for (j = 0; list[j].sp; j++)
			{
				if (format[i] == list[j].sp[1])
				{
					len += list[j].f(args), i++, triger = 0;
					break;
				}
			} /*"%   s"*/
			if (triger && format[i] && skip_printed == 1)
			{
				len += _putchar(format[prec_holder]);
				len += _putchar(format[i]), i++;
			}
		}
		else
		{
			len += _putchar(format[i]), i++;
		}
	}
	return (len);
}
