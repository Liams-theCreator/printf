#include "main.h"

/**
 * print_H - Prints the hexadecimal representation of an integer.
 * @n: The integer to be printed in hexadecimal.
 *
 * Return: The number of characters printed.
 */

int print_H(unsigned int n)
{
	int len = 0, remainder;

	if (n / 16)
		len += print_H(n / 16);
	remainder = n % 16;
	if (remainder < 10)
		len += _putchar(remainder + '0');
	else
		len += _putchar(remainder - 10 + 'A');
	return (len);
}

/**
 * print_HEX - Prints the hexadecimal representation of an integer argument.
 * @arg: A variable argument list containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_HEX(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);

	return (print_H(n));
}
