#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet,
 * in lowercase, followed by a new line
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	char j;
	int i;

	i = 0;
	while (i < 10)
	{
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	}
}
