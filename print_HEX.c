#include "main.h"

/**
 * print_H - Prints the hexadecimal representation of an integer.
 * @n: The integer to be printed in hexadecimal.
 *
 * Return: The number of characters printed.
 */

int print_H(int n)
{
	int len = 0;

	if (n / 16)
	{
		len += print_HEX(n / 16);
	}

	int remainder = n % 16;

	if (remainder < 10)
	{
		len += _putchar(remainder + '0');
	}
	else
	{
		len += _putchar(remainder - 10 + 65);
	}
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
	int n = va_arg(arg, int);

	return (print_H(n));
}
