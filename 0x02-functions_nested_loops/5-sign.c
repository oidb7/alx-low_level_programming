#include "main.h"

/**
 * print_sign - print the sign of a digit
 *
 * @n: digit to check
 *
 * Return: 1 if positive, -1 if nigative, 0 if digit is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}

	else
	{
		_putchar('0');

		return (0);
	}
}
