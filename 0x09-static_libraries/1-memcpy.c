#include "main.h"

/**
 * _memcpy - Copies a memory area
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 *
 * Return: A pointer to the destination memory area (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;

	for (int r = 0; r < (int)n; r++)
	{
		dest[r] = src[r];
	}

	return (dest);
}

