#include "main.h"
 /**
 * print_last_digit - Prints last digit of a number
 * @n : the number to be created
 * Return: Value of the last digit of number
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-1);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
