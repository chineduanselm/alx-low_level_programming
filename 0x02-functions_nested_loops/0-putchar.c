#include "main.h"

/**
 * main - prints _putchar
 * Return: 0
 */

int main(void)
{
	int n[9];
	int i;

	n[0] = '_';
	n[1] = 'p';
	n[2] = 'u';
	n[3] = 't';
	n[4] = 'c';
	n[5] = 'h';
	n[6] = 'a';
	n[7] = 'r';
	n[8] = '\n';
	for (i = 0; i <= 8; i++)
		_putchar(n[i]);
	return (0);
}
