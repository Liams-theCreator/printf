#include "main.h"

/**
 * integer - Prints the digits of an integer and returns the length.
 *
 * @num: The integer to be printed.
 *
 * Return: The number of characters printed.
 */

int integer(long num)
{
	int length = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		length++;
	}
	if (num / 10)
		length += integer(num / 10);
	return (length += _putchar((num % 10) + 48));
}

/**
 * print_int - Prints the digits of an integer and returns the length.
 *
 * @arg: A va_list containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_int(va_list arg)
{
	int n = va_arg(arg, int);

	return (integer(n));
}
