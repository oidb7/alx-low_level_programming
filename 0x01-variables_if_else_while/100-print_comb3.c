#include <stdio.h>

/**
 * main - the entry point
 *
 * Des: prints all possible different combinations of two digits
 *
 * Return: always 0 on success
 */

int main(void)
{
	int digit1 = '0', digit2;

	while (digit1 < '9')
	{
		digit2 = digit1 + 1;

		while (digit2 <= '9')
		{
			putchar(digit1);
			putchar(digit2);

			if (digit1 != '8' || digit2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');

	return (0);
}
