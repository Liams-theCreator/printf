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

int _printf(const char *format, ...);
int _printf_boddy(fr *list, va_list args, const char *format);

int _strlen(char *str);

int print_c(va_list val);
int print_s(va_list val);
int print_perc(va_list args);
int _puts(char *str);
int _putchar(char c);

int print_binary(va_list args);
int print_octal(va_list args);
int print_HEX(va_list arg);
int print_hexx(va_list arg);
int print_S_hex(va_list args);
int print_H(unsigned int n);
int print_He(char n);

int print_int(va_list arg);
int integer(long num);
int print_u(va_list arg);
int print_uns(unsigned int num);

int print_r(va_list val);
int print_rot13(va_list arg);
int is_flag(const char *f, int *i, va_list vala, int *p, int *flag);
int is_space(const char *format, int *i);
int is_plus(const char *format, int *i, va_list vala, int *printed);
int is_hash(const char *format, int *i, va_list vala, int *printed);

int print_p(va_list args);
#endif
