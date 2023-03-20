#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - function used to prinnt a combination of two numbers
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			/*The two digits must be different*/
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					/* numbers must be separated by "," followed by a space*/
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		i++;
	}
return (0);
}
