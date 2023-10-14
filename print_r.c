#include "main.h"

/**
 * print_r - Prints the reversed string.
 *
 * @val: A va_list containing the string to be reversed and printed.
 *
 * Return: The number of characters printed.
 */

int print_r(va_list val)
{
	int i = 0, len = 0;
	char *string = va_arg(val, char *);

	if (string == NULL)
	{
		string = "(null)";
		return (_puts(string));
	}
	for (; string[i] != '\0'; i++)
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(string[i]);
	}

	return (len);
}
