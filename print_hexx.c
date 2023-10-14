#include "main.h"

/**
 * print_h - Prints the lowercase hexadecimal representation of an integer.
 * @n: The integer to be printed in lowercase hexadecimal.
 *
 * Return: The number of characters printed.
 */

int print_h(unsigned int n)
{
	int len = 0, remainder;

	if (n / 16)
	{
		len += print_h(n / 16);
	}

	remainder = n % 16;

	if (remainder < 10)
	{
		len += _putchar(remainder + '0');
	}
	else
	{
		len += _putchar(remainder - 10 + 97);
	}
	return (len);
}

/**
 * print_hex - Prints the lowercase hexadecimal
 * @arg: A variable argument list containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_hex(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);

	return (print_h(n));
}
