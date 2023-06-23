#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime factor
 * )
 * Return: 0
 */
int main(void)
{
	long i, prime, number = 612852475143;
	double sqr = sqrt(number);

	for (i = 1; i <= sqr; i++)
	{
		if (number % i == 0)
			prime = number / i;
	}
	printf("%ld\n", prime);
	return (0);
}
