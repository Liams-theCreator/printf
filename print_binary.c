#include "main.h"

/**
 * print_b - function helper print binary recoursion.
 *
 * @n: integer.
 *
 * Return: length .
 *
 */
int print_b(int n)
{
	int len = 0;

	if (n / 2)
		len += print_b(n / 2);
	return (len += _putchar((n % 2) + 48));
}
/**
 * print_binary - print binary.
 *
 * @args: the argument will be printed as binary.
 *
 * Return: length.
 *
 */
int print_binary(va_list args)
{
	int num = va_arg(args, int);

	return (print_b(num));
}
