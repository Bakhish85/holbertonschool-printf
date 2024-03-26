#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
int _printf(const char *format, ...);

/**
 * struct format - This is a typedef struct
 * @opt: Pointer type char
 * @call_fun: Pointer to call the function
 */
typedef struct format
{
	char *opt;
	int (*call_fun)();
} format_t;

/*prototypes*/
int _printf(const char *format, ...);

#endif
