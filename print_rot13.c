#include "main.h"

/**
 *    print_rot13 - is a letter substitution cipher
 *
 *    @arg: argument
 *
 *    Return: returns a length.
 */

int print_rot13(va_list arg)
{
	char *str = va_arg(arg, char *), temp;
	int i = 0, j, len = 0;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
	{
		str = "(null)";
		return (len += _puts(str));
	}
	while (str[i])
	{
		temp = str[i];
		j = 0;
		while (arr1[j])
		{
			if (temp == arr1[j])
			{
				temp = arr2[j];
				break;
			}
			j++;
		}
		len += _putchar(temp);
		i++;
	}
	return (len);
}
