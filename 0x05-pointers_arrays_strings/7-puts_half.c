#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line
 * If the number of characters is odd, the function should print the
 *  last n characters of the string, where n = (length_of_the_string - 1) / 2
 *  @str: input
 *  Return: half of input
 */
void puts_half(char *str)
{
	int a, n, longint;

	longint = 0;

	for (a = 0; str[a] != '\0'; a++)
		longint++;

	n = (longint / 2);

	if ((longint % 2) == 1)
	{
		n = ((longint + 1) / 2);
	}
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
