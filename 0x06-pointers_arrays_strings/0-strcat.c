#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */

char *_str(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
		for (i = 0; src[i] != 0; i++)
		{
			dest[dlen] = src[i];
			dlen++;
		}
		dest[dlen] = '\0';
		return (dest);
}
