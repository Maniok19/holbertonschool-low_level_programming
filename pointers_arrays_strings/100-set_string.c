#include "main.h"
/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a pointer to char
 * @to: Pointer to char
 *
 * Description: This function sets the value of the pointer *s to the value
 * of the pointer to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
