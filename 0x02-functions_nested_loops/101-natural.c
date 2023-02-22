#include <stdio.h>

/**
 * Lists all the natural numbers below 1024 (excluded)
 * multiples of 3 and 5 
 *
 * Return: Always  0 (Success)
 *
 */
int main () 
{
	int sum = 0;
	int i;
	for(i = 1; i < 1024; i++)
	{
		if((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
