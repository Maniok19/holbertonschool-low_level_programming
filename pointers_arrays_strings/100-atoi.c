#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: source string
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int digit;
    int max_div_10 = 214748364; // INT_MAX / 10
    int max_last_digit = 7;     // INT_MAX % 10

    while (*s)
    {
        if (*s == '-')
            sign *= -1;
        else if (*s >= '0' && *s <= '9')
        {
            digit = *s - '0';
            
            if (result > max_div_10 || (result == max_div_10 && digit > max_last_digit))
            {
                return (sign == 1) ? 2147483647 : -2147483648; // INT_MAX or INT_MIN
            }
            
            result = result * 10 + digit;
        }
        else if (result != 0)
            break;
        s++;
    }

    if (sign == -1 && result == 2147483648) // Special case for -2147483648
        return -2147483648;

    return result * sign;
}

int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
