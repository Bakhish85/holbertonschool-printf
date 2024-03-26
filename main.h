#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct format - Struct for format
 * @specifiers: Struct format
 * @f: The function associated
 */
typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} specifiers_t;
/*prototypes*/
int _printf(const char *format, ...);

#endif
