#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers from n to 98
 *
 * @n: the digit to start to print from
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
	}

	else
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
	}

	printf("%d\n", 98);
}
