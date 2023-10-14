#ifndef __PRINTF__
#define __PRINTF__
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct format - Struct format.
 *
 * @sp: The format.
 * @f: The function associated.
 */

typedef struct format
{
	char *sp;
	int (*f)(va_list arg);

} fr;

int _putchar(char c);
void _puts(char *str);

int _strlen(char *str);

int _printf(const char *format, ...);
int _printf_boddy(fr *list, va_list args, const char *format);
int print_c(va_list val);
int print_s(va_list val);
int print_perc(va_list args);
int print_binary(va_list args);
int print_octal(va_list args);
int print_int(va_list arg);
int print_HEX(va_list arg);
int print_hexx(va_list arg);
int is_space(const char *format, int i);
int print_S_hex(va_list args);
int print_H(unsigned int n);
#endif
