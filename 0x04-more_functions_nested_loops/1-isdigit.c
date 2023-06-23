#include "main.h"

/**
  *_isdigit - checks for digit
  *@c: digit to be checked
  (*
  *Return: 1 if digit, 0 otherwise
  */
int _isdigit(int c)
{
	int num;
	int value;

	value = 0;
	num = '0';
	while (num <= '9')
	{
		if (c == num)
			value = 1;
		++num;
	}
	return (value);
}
