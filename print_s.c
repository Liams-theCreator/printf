#include "main.h"

/**
 * print_s - Prints a string.
 *
 * @val: A va_list containing the string to be printed.
 *
 * Return: The number of characters printed.
 */

int print_s(va_list val)
{
	int i = 0;
	char *string;

	string = va_arg(val, char *);
	if (string == NULL)
	{
		string = "(null)";
		return (_puts(string));
	}
	for (; string[i]; i++)
		_putchar(string[i]);

	return (i);
}
