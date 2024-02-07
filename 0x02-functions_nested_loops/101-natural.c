#include <stdio.h>
#include "main.h"

/**
 * sum_of_multiplies - prints the sum of all the multiples of 3 or 5
 *
 * Return: the sum of multiplies
 */

int sum_of_multiplies()
{
	int i = 0, sum;

	while (i < 1024)
	{
		if ((i % 3) || (i % 5) == 0)
			sum += i;
		i++;
	}
	return (sum);
}

/**
 * main - entry point of the program
 *
 * Retrun: 0 (success)
 */

int main()
{
	printf("%d\n", sum_of_multiplies());

	return (0);
}
