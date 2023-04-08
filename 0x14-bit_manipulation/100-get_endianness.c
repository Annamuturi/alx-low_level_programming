#include "main.h"

/**
 * get_endianness - check the endianness
 *
 * Return: 0 if big endian 1 if little endian
 */
int get_endianness(void)
{
	int a = 1;
	char *p = (char *)&a;

	if (*p)
	{
		return ((*p) ? 1 : 0);
	}
	else
	{
		return (0);
	}
}
