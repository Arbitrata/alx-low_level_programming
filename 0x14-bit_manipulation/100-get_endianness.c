#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 *
 */

int get_endianness(void)

{
	/*code*/

	int abc;
	char *xyz;

	abc = 1;
	xyz = (char *)&abc;
	return (*xyz);
}
