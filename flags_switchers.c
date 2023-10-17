#include "main.h"

/**
 * is_flag - check if the integer is positive and print '+'.
 * @format: string contain the specifier.
 * @i: pointer to integer (index of format).
 * @vala: va_list variable.
 * @printed: incase invalid format print it on the main _printf.
 * @flag: check if the format in index i not matching any case on the switch.
 * Return: length.
 */


int is_flag(const char *format, int *i, va_list vala, int *printed, int *flag)
{

	switch (format[*i])
	{
		case ' ':
			return (is_space(format, i));
		case '+':
			return (is_plus(format, i, vala, printed));
		case '#':
			return (is_hash(format, i, vala, printed));
		default:
			*flag = 1;
			break;
	}
	return (0);
}
