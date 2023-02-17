#include <stdio.h>
/* more headers goes there */
/**
 * main - is entry point
 * main -prints last digit of random number,showing >5,<6,=0
 *
 * Return: 1, if succesful
 * Return: 0, if succesful
 */
int main(void)
{
@@ -14,8 +14,6 @@ int main(void)
	/*code generates random number*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* x arithemetic function results last digits of n as x*/

	if (n % 10  > 5)
	{
