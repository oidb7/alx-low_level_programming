#include <stdio.h>

/**
 * main - the entry point
 *
 * Des: prints numbers
 *
 * Return: always 0
 */

int main(void)
{
	int digit = '0';

	while (digit <= '9')
		putchar(digit++);

	putchar('\n');

	return (0);
}
