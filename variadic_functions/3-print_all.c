#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list list;
	char *str;
	int i = 0;
	char *separator = "";
	form array[] = {
		{"c", is_char},
		{"i", is_int},
		{"f", is_float},
		{"s", is_string},
		{NULL, NULL}
	};

	va_start(list, format);
	while (format[i])
	{
	if (format[i] == array[i].fo)
		array[i].f(separator, list);
	}
}
void is_char(char *separator, va_list list)
{
	printf("%s%c", separator, va_arg(list, char));
}
void is_int(char *separator, va_list list)
{
	printf("%s%d", separator, va_arg(list, int));
}
void is_float(char *separator, va_list list)
{
	printf("%s%f", separator, va_arg(list, float));
}
void is_string(char *separator, va_list list)
{
	printf("%s%s", separator, va_arg(list, char*));
}
