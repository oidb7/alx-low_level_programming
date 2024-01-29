#include <stdio.h>

/**
 * main - the entry point
 *
 * Des: prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	int dig = '0';

	while (dig <= '9')
		putchar(dig++);

	dig = 'a';

	while (dig <= 'f')
		putchar(dig++);

	putchar('\n');

	return (0);
}
