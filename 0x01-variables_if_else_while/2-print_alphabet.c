#include <stdio.h>

/**
 * main - the entry point
 *
 * this prgram prints the alphabets in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
		putchar(letter++);

	putchar('\n');


	return (0);
}
