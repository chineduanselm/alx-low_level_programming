#include "main.h"

/**
 * print_alphabet_x10 - prints lower case alphavets
 */
void print_alphabet_x10(void)
{
	int c;
	int n;
	int i;

	n = '\n';
	for (i = 0; i <= 9; ++i)
	{
		for (c = 'a'; c <= 'z'; ++c)
			_putchar(c);
		_putchar(n);
	}
}
