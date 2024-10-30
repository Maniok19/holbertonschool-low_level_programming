#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string to integer
 * @s: source string
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int started = 0;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;
        else if (*s >= '0' && *s <= '9')
        {
            started = 1;
            if (result > 214748364 || (result == 214748364 && *s > '7'))
            {
                return (sign == 1) ? 2147483647 : -2147483648;
            }
            result = result * 10 + (*s - '0');
        }
        else if (started)
            break;
        s++;
    }

    if (sign == -1 && result == 2147483648)
        return -2147483648;

    return result * sign;
}
