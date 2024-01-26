#include <stdio.h>

/**
 * main - the entry point of the program
 *
 * this program is printing a quote to the standard error
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char s[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(s, sizeof(s), 1, stderr);

	return (1);
}
