#include <stdio.h>
/**
 * premain - Prints a specific message before the main function
 */
void __attribute__((constructor)) premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
