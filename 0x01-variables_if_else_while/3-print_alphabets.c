#include <stdio.h>
#include <ctype.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
/* we use the ASCII table where a=97 and z=122 */
	int lowercase = 'a';
	int uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase += 1;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase += 1;
	}
	putchar('\n');
	return (0);
}
