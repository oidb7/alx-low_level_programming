#include <stdio.h>

/**
 * main - the entry point
 *
 * printing alphabets in lower and upercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
		putchar(letter++);

	letter = 'A';

	while (letter <= 'Z')
		putchar(letter++);

	putchar('\n');

	return (0);
}
