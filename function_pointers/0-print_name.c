#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - print the name of user
 * @name: name to print
 * @f: funtion
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
