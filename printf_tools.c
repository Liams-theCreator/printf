#include "main.h"

/**
 * _strlen - count length of string
 *
 * @s: pointer to char
 *
 * Return: return the length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _putchar - prints the character c
 *
 * Return: if success 1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - print a string
 *
 * @str: pointer to char
 */

void _puts(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
