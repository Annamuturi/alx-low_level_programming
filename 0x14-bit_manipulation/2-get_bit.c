#include "main.h"

/**
 * get_bit - the function that return a bit at a given index
 * @n: - the bit
 * @index: - retrieve the value of any bit within the range of 0
 *
 * Return: return -1 if an error occurs else return its value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	return ((n & (1 << index)) ? 1 : 0);
}
