#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabe
 *
 * return: void
 */

void print_alphabet_x10(void)
{
	int index = 0;

	while (index < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);

			letter++;
		}
		index++;

		_putchar('\n');
	}
}
