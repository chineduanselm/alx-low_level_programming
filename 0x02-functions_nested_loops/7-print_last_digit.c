#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: digit
 * ).Return: last digit
 */
int print_last_digit(int n)
{
	int val;

	val = n % 10;
	if (n < 0)
		val = -1 * (n  % 10);
	_putchar(val + '0');
	return (val);
}
