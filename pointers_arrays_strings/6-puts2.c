#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int num = 0;

	while (str[num] != '\0')
	{
		if (num % 2 == 0)
		{
			_putchar(str[num]);
		}
		num++;
	}
}
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}