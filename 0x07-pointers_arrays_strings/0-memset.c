#include "main.h"

/**
 * *_memset - fills the first N bytes of the memory
 *            are pointed by the s with the constant byte  B
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: string @s, pointer to memory string s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);


}
