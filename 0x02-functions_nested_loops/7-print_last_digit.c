#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @num: number checked
 *
 * Return: last digit of num
 */

int print_last_digit(int num)
{
	num = (num % 10);

	if (num < 0)
		num *= -1;

	_putchar(num + '0');

	return (num);
}
