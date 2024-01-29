#include <stdio.h>

/**
 * main - the entry point
 *
 * Des: program that prints all possible combinations of single-digit numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int dig = '0';

	while (dig <= '9')
	{
		putchar(dig);

		if (dig++ != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
