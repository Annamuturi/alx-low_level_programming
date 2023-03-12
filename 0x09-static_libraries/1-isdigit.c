#include "main.h"

/**
 * _isdigit - checks fot digit 0 to 9.
 * @c: the digit to be checkedis c.
 *
 * Return: 1 if true, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
