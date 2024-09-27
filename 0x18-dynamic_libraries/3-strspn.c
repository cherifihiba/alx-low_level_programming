#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring that consists of only specific bytes
 * @s: The string to search
 * @accept: The bytes to count in s
 *
 * Return: The number of bytes in s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}

	return (n);
}

