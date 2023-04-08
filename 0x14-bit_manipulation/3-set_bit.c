#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: - the bits.
 * @index - the index satrs from 0 of the bit you want to set
 *
 * Return: i if it works -1 if an error occurs
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
