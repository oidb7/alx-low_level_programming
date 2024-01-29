#include <stdio.h>

/**
 * main - the entry point
 *
 * This program prints the lowercase alphabet in reverse
 *
 * Return: 0 (success)
 */

int main(void)
{
	int letter = 'z';

	while (letter >= 'a')
		putchar(letter--);

	putchar('\n');

	return (0);
}
