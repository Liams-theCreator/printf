#include "main.h"

/**
 * con - print hexa value of an unsigned long.
 *
 * @a: unsgined long integer.
 *
 * Return: length.
 *
 */

int con(unsigned long a)
{
	unsigned long rem;
	int len = 0;

	if (a / 16)
		len += con(a / 16);
	rem = a % 16;
	if (rem < 10)
		len += _putchar(rem + 48);
	else
		len += _putchar(rem + 87);
	return (len);
}
/**
 * print_p - Prints the hexadecimal representation of a pointer.
 * @args: A va_list containing the pointer to be printed.
 * Return: The number of characters printed.
 */
int print_p(va_list args)
{
	int length = 0;
	unsigned long ptr_ad = (unsigned long)va_arg(args, void *);

	if (ptr_ad == 0)
	{
		return (_puts("(nil)"));
	}
	length += _printf("0x");
	length += con(ptr_ad);
	return (length);
}
