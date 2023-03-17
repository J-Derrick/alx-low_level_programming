#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * /
int main(void)
{
    const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(msg) - 1;  // exclude the terminating null byte

    write(STDERR_FILENO, msg, len);

    return 1;
}

