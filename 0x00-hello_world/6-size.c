#include <stdio.h>

/**
 * main - main function
 * Return: 0 to end function
 */
int main(void)
{
	char c;
	int i;
	float f;
	long int l;
	long long int ll;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
