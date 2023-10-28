#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value
 * @s: Pointer to the memory area to be filled
 * @b: The desired value to fill the memory area with
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}

	return (s);
}

