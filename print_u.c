#include "main.h"

/**
 * print_unsigned - Prints the digits of an unsigned integer .
 *
 * @num: The unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_unsigned(unsigned int num)
{
	int length = 0;

	if (num / 10)
		length += print_unsigned(num / 10);
	return (length += _putchar((num % 10) + '0'));
}

/**
 * print_u - Prints the digits of an unsigned integer and returns the length.
 *
 * @arg: A va_list containing the unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_u(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);

	return (print_unsigned(n));
}
