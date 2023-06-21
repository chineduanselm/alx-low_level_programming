#include "main.h"

/**
 * print_alphabet - prints lower case alphavets
 */
void print_alphabet(void)
{
	int c;
	int n;

	n = '\n';
	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);
	_putchar(n);

}
