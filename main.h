#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format - Struct for format
 * @specifiers: Struct format
 * @f: the function associated
 */

typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} specifiers_t;

/*prototypes*/

int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);
void free_array(char *arr);
int numlen(int num);
int print_str(char *str);
char *num_to_string(int num, char *str);
int _strlen(char *s);
char *itoa(int a);
/*Conversion specifiers*/
int print_char(va_list args);

#endif
