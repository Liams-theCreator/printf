#include "main.h"

/**
 * print_p - Prints the hexadecimal representation of a pointer.
 *
 * @args: A va_list containing the pointer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_p(va_list args)
{
	int length = 0;
	void *ptr_ad = va_arg(args, void *);

	if (ptr_ad == NULL)
	{
		ptr_ad = "(null)";
		return (_puts(ptr_ad));
	}
	else
	{
		length += _puts("0x");
		length += print_hexx(ptr_ad);
	}

	return (length);
}
