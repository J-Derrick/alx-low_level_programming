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

	while (lowercase <= 'z')
	{
		if (lowercase == 'e' || lowercase == 'q')
		{
			lowercase += 1;
		}
		else
		{
			putchar(lowercase);
			lowercase += 1;
		}
	}
	putchar('\n');
	return (0);
}
