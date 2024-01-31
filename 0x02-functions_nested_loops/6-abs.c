#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @d: digit to compute
 *
 * Return: 0 on success
 */

int _abs(int d)
{
	if (d < 0)
		d *= -1;
	return (d);
}
