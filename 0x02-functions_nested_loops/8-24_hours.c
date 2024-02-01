#include "main.h"

void print_2digits(int num)
{
	_putchar('0' + num / 10);
	_putchar('0' + num % 10);
}

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

int main(void)
{
	jack_bauer();

	return (0);
}
