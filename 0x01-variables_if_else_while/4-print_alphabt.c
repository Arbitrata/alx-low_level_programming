#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char y = 'a';

	while (y <= 'z')
	{
		if (y != 'e' && y != 'q')
		{
			putchar(y);
		}
		y++;
	}
	putchar('\n');
	return (0);
}
