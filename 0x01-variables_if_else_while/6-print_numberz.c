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
/* prints all single digit numbers of base 10 */
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
