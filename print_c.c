#include "main.h"

/**
 * print_c - Prints a character to the standard output.
 *
 * @val: A va_list containing the character to be printed.
 *
 * Return: Number of characters printed (always 1).
 */

int print_c(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
