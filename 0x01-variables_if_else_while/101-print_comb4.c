#include <stdio.h>

/**
 * main - the entry point
 *
 * Des: prints all possible different combinations of three digits
 *
 * Return: 0 on success
 */

int main(void)
{
	int num1 = '0', num2, num3;

	while (num1 < '8')
	{
		num2 = num1 + 1;
		while (num2 < '9')
		{
			num3 = num2 + 1;

			while (num3 <= '9')
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);

				if (num1 != '8' || num2 != '9')
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
