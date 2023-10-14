#include "main.h"

/**
 * print_S_hex - Prints a modified version of a string with non-printable ASCII
 *                characters replaced by their hexadecimal representations.
 * @args: A variable argument list containing the string to be processed.
 *
 * Return: The total number of characters processed or printed.
 */

int print_S_hex(va_list args)
{
	char *string;
	int i = 0;
	int len = 0;

	string = va_arg(args, char *);

	for (; string[i] != '\0'; i++)
	{
		if (string[i] > 0 && string[i] < 32 || string[i] >= 127)
		{
			len += _putchar('\\');
			len += _putchar('x');
			len += print_H(string[i]);
		}
		else
			_putchar(string[i]);
	}
	return (len);
}
