#include <stdio.h>

/**
 * mian - the entry point
 *
 * Des: prints alphabets in reverse
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
