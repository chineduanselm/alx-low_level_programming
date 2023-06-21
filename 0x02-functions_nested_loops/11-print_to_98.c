#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints number up to 98
 * @n: number to start
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
		printf("%d ,", i);
	printf("98\n");
}
