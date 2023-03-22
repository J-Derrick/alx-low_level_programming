#include "main.h"
/**
 * print alphabet - print alphabet in lowercase
 * and print new line
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
