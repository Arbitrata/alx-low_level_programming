#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would need
 *
 * flip to get from one number to another
 *
 * @n: starting point
 * @m: second number
 *
 * Return: 0
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	/*code*/

	unsigned int integer = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))

		{

		integer++;

		}

		m = m >> 1;
		n = n >> 1;
	}

	return (integer);

}
