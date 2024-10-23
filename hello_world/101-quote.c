#include <unistd.h>
/**
 * main - print the message
 * Return: Always 1
*/
int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, "
                    "2015-10-19\n";
    ssize_t len = 59;

    write(2, message, len);
    return (1);
}