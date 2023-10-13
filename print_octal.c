#include "main.h"

/**
 * print_o - function helper print octal recoursion.
 *
 * @n: integer.
 *
 * Return: length .
 *
 */

int print_o(long n)
{
	int len = 0;

	if (n / 8)
		len += print_o(n / 8);
	return (len += _putchar((n % 8) + 48));
}

/**
 * print_octal - print octal.
 *
 * @args: the argument will be printed as octal.
 *
 * Return: length.
 *
 */

int print_octal(va_list args)
{
	long num = va_arg(args, int);

	return (print_o(num));
}
