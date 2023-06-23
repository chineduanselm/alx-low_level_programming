#include "main.h"
#include <stdio.h>

/**
 * print_number - prints number
 * @n: number
 */
void print_number(int n)
{
	int number;

	if (number < 0)
	{
		_putchar('-');
		n = -1 * n;
		number = -1 * number;
	}
	else
	{
		number = n;
	}

	number /= 10;

	if (number != 0)
		print_number(number);
	_putchar((n % 10) + '0');
}
