#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: - a pointer to the bit set.
 * @index: - the index to set the value  from 0 of the bit.
 *
 * Return: 1 if it works -1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int set;
if (index >= (sizeof(unsigned long int) * 8 - 1))
return (-1);
set = 1 << index;
*n ^= set;
return (1);
}
