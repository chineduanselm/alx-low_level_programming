#include <stdio.h>

/**
  *main - prints fibonacci sequence
  *Return: 0 to end main
  */
int main(void)
{
	long a;
	long b;
	long sum;

	a = 1;
	b = 2;
	while (b <= 4000000)
	{
		if ((b % 2) == 0)
			sum = sum + b;
		if ((a % 2) == 0)
			sum = sum + a;
		a = a + b;
		b = a + b;
	}
	printf("%li\n", sum);
	return (0);
}
