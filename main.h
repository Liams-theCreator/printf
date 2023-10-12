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

#endif
