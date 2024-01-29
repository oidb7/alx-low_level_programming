#include <stdio.h>

/**
 * main - the entry point of the program
 *
 * Des: printing the alphabets exept 'q' and 'e'
 *
 * Return: 0 (success)
 */

int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
