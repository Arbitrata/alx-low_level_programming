#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint-converts a binary number to an unsigned int
 *
 * @b: pointing to a string of binary chars
 *
 * Return: the unsigned int or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	/*Declaring variables*/

	int number = 0;
	unsigned int integer = 0;

	if (b == NULL)
		return (0);

	while (b[number])
	{
		if (b[number] != '0' && b[number] != '1')
		{

			return (0);

		}

	   integer = integer * 2 + (b[number++] - '0');
	}

	return (integer);

}
