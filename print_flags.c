#include "main.h"
/**
 * is_plus - check if the integer is positive and print '+'.
 * @format: string contain the specifier.
 * @i: pointer to integer (index of format).
 * @args: va_list variable.
 * Return: length.
 */
int is_plus(const char *format, int *i, va_list args)
{
	int len = 0, is;

	if (format[(*i) + 1] == 'd' || format[(*i) + 1] == 'i')
	{
		is = va_arg(args, int);
		if (is >= 0)
		{
			len += _putchar('+');
			len += integer(is);
			*i = *i + 2;
		}
		else if (is < 0)
		{
			len += integer(is);
			*i = *i + 2;
		}
	}

	return (len);
}
/**
 * is_hash - Handles the '#' flag for octal, hexadecimal.
 * @format: string contain the specifier.
 * @i: pointer to integer (index of format).
 * @args: va_list variable.
 * Return: length.
 */
int is_hash(const char *format, int *i, va_list args)
{
	int len = 0;
	unsigned int base = va_arg(args, unsigned int);

	if (!base)/*"%#x"*/
		len += _putchar(48);
	else if (format[(*i) + 1] == 'o')
	{
		len += _printf("0");
		len += _printf("%o", base);
	}
	else if (format[(*i) + 1] == 'x')
	{
		len += _printf("0x");
		len += _printf("%x", base);
	}
	else if (format[(*i) + 1] == 'X')
	{
		len += _printf("0X");
		len += _printf("%X", base);
	}
	else
		return (len);
	*i = *i + 2;
	return (len);
}
