#include "main.h"
#include <stdio.h>
/**
 * main - Entry of the program
 *
 * Description : prints the first 50 Fibonacci numbers
 * starting from 1 and 2 follower by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	float total_sum;
	unsigned long fib1 = 0, fib2 = 1, sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	return (0);
}
