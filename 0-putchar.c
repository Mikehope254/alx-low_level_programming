#include <unistd.h>

/*
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by a new line
 *
 * Return: (0) succes
 */
int main(void)
{
    char str[] = "_putchar\n";
    ssize_t len = sizeof(str) - 1;

    write(STDOUT_FILENO, str, len);
    return (0);
}
