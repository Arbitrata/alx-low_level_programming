#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 * and then in uppercase
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main (void)
{

	char y = 'a';
	while (y <= 'z') {
	if((y != 'q' && y != 'e') && y <= 'z')
		putchar(y);
	y++;
	}
	putchar('\n');
	return (0);
}

