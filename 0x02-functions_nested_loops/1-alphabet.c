#include "main.h"

/**
 * print_alphabet - prints alphabets to the stdout
 *
 * return: void
 */

void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
