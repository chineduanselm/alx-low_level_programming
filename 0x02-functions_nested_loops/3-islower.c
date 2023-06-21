#include "main.h"

/**
 * _islower - checks if lower alphabet
 * @c: alphabet
 * )
 * Return: ¹1 or 0
 */
int _islower(int c)
{
	int l;
	int v;

	v = 0;
	for (l = 'a'; l <= 'z'; ++l)
		if (c == l)
			v = 1;
	return (v);
}
