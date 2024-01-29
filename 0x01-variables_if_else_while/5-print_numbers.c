#include <stdio.h>

/**
 * main - the entry point
 *
 * Des: prints digits from 0 to 10
 *
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	int n = 0;

	while (n != 10)
		printf("%d", n++);

	putchar('\n');

	return (0);
}
