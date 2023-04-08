#include "main.h"

/**
 * clear_bit - sets a bit to 0 at a given index
 * @n: - pointer to bit number.
 * @index: - index at which to set bit value - indices starts at 0
 *
 * Return: 1 if it worked or -1 if the error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8 - 1 ))
{
return (-1);
}
*n &= ~(1 << index);
return (1);
}
