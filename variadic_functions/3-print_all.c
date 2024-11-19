#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j;
	char *separator = "";
	form array[] = {
		{"c", is_char},
		{"i", is_int},
		{"f", is_float},
		{"s", is_string},
		{NULL, NULL}
	};

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (array[j].fo != NULL)
		{
			if (format[i] == array[j].fo[0])
			{
				array[j].f(separator, list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
/**
 * is_char - print char
 * @separator: separator
 * @list: list of arguments
 */
void is_char(char *separator, va_list list)
{
	printf("%s%c", separator, (char)va_arg(list, int));
}
/**
 * is_int - print int
 * @separator: separator
 * @list: list of arguments
 */
void is_int(char *separator, va_list list)
{
	printf("%s%d", separator, va_arg(list, int));
}
/**
 * is_float - print float
 * @separator: separator
 * @list: list of arguments
 */
void is_float(char *separator, va_list list)
{
	printf("%s%f", separator, va_arg(list, double));
}
/**
 * is_string - print string
 * @separator: separator
 * @list: list of arguments
 */
void is_string(char *separator, va_list list)
{
	char *str = va_arg(list, char*);

	if (str == NULL)
		printf("%s(nil)", separator);
	else
		printf("%s%s", separator, str);
}
