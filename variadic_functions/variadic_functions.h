#ifndef VAR_H
#define VAR_H
#include <stdarg.h>
/**
 * struct format - format for miniprintf
 * @fo: format character (c, i, f, s)
 * @f: function to use
 */
typedef struct format
{
	char *fo;
	void (*f)(char *separator, va_list ap);
} form;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void is_char(char *separator, va_list list);
void is_int(char *separator, va_list list);
void is_float(char *separator, va_list list);
void is_string(char *separator, va_list list);
#endif
