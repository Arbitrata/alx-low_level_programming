#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: The number to start printing
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int y)
{
	if (y <= 98)
	{
		for (; y <= 98; y++)
		{
			if (y == 98)
			{
				printf("%d", y);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", y);
			}
		}
	}
	else
	{
		for (; y >= 98; y--)
		{
			if (y == 98)
			{
				printf("%d", y);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", y);
			}
		}
	}
}
