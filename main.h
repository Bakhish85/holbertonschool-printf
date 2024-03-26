#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
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
/**
 * _printf - function that prints based on format specifier
 * @format: takes in format specifier
 * Return: return pointer index
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int count;
	format_t get_opt[] = {
		{"c", set_char},
		{"s", set_string},
		{"i", set_decimal},
		{"d", set_decimal},
		{"%", print_percent},
		{NULL, NULL}
		};
	if (!format)
	{
		return (-1);
	}
	va_start(valist, format);
	count = parse_format(format, get_opt, valist);
	va_end(valist);
	return (count);
}
/*prototypes*/
int _printf(const char *format, ...);

#endif
