#include "main.h"
#include <stdio.h>
/**
 * main - Entry of the program
 *
 * Description : prints the sum of
 * even-valued Fibonacci number sequence
 * not exceeding 4 million
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	float count, initial0s;
	unsigned long f1 = 0, f2 = 1, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
			initial0s = numLength(mx) - 1 - numLength(f1);

		while (f1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
		}
		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");

	}
	return (0);
}
