#include "main.h"
#include <stdio.h>
/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
	{
		printf("%d", c);
		return (1);
	}
	else
	{
		return (0);
	}
}
