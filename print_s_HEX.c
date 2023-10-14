#include "main.h"

/**
 * print_He - Prints the hexadecimal representation of an integer.
 * @n: The integer to be printed in hexadecimal.
 *
 * Return: The number of characters printed.
 */
int print_He(char n)
{
	int len = 0;

	if ((n / 16) < 10)
		len += _putchar((n / 16) + '0');
	else
		len += _putchar((n / 16) + 55);

	if ((n % 16) < 10)
		len += _putchar((n % 16) + '0');
	else
		len += _putchar((n % 16) + 55);
	return (len);
}

/**
 * print_S_hex - Prints a modified version of a string with non-printable ASCII
 *                characters replaced by their hexadecimal representations.
 * @args: A variable argument list containing the string to be processed.
 *
 * Return: The total number of characters processed or printed.
 */

int print_S_hex(va_list args)
{
	char *string = va_arg(args, char *);
	int i, len = 0;

	if (string == NULL)
	{
		string = "(null)";
		return (_puts(string));
	}

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] < 32 || (string[i] >= 127))
		{
			len += _putchar('\\');
			len += _putchar('x');
			len += print_He(string[i]);
		}
		else
			len += _putchar(string[i]);
	}

	return (len);
}
