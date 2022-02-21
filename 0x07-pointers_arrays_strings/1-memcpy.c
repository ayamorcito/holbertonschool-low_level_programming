#include "main.h"

/**
 * _memcpy - copies memory area.
 * @src: bytes to copy from
 * @n: bytes to be copied
 * @dest: bytes to copy to
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
