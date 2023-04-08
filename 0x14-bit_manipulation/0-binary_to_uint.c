#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - converts binary number and returns an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return:[0] if b is NULL or contain char not 0 and 1 else count
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int count;
count = 0;
if (b == NULL || *b == '\0')
return (0);

while (*b != '\0')
{

if (*b != '0' && *b != '1')
return (0);

count = count * 2;
if (*b == '1')
count += 1;
b++;

}

return (count);
}
