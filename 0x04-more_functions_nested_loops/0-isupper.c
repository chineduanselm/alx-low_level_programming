#include "main.h"

/**
  *_isupper - checks for upper case character
  *@c: alphabet to be checked
  (*
  *Return: 1 if upper, 0 otherwise
  */
int _isupper(int c)
{
	int letter;
	int value;

	value = 0;
	letter = 'A';
	while (letter <= 'Z')
	{
		if (c == letter)
			value = 1;
		++letter;
	}
	return (value);
}

