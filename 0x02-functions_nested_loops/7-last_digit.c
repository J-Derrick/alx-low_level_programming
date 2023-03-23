#include "main.h"
 /**
 * print_last_digit - Prints last digit of a number
 * @n : the number to be created
 * Return: Value of the last digit of number
 */
int prnt_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
