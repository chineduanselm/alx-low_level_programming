#include "main.h"

/**
 * _abs - get absolute value
 * @n: integer
 * )
 * Return: absolute value
 */
int _abs(int n)
{
	int val;

	if (n < 0)
	{
		val = -1 * n;
		return (val);
	}
	return (n);
}
