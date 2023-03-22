#include "main.h"
/**
 * print_alphabet - function that prints the alphabet,
 * in lowercase, followed by a new line
 *
 * return: void
 */
void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
