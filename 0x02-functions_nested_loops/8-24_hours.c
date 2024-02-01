#include "main.h"

/**
 * print_2digits - prints tow digits of a number
 *
 * @num: number to print
 *
 * return: void
 */

void print_2digits(int num)
{
	_putchar('0' + num / 10);
	_putchar('0' + num % 10);
}

/**
 * jack_bauer - prints all hours and minutes
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24;  hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			print_2digits(hour);

			_putchar(':');

			print_2digits(minute);

			_putchar('\n');
		}
	}
}
