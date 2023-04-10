#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the digit number to be checked
 * @index: the position of the character needed
 *
 * Return: value of the bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/*declaring variables */

	int pod;

	if (n == '\0')
	{

		return (-1);

	}

	pod  = (n >> index);

	return (pod & 1);

}
