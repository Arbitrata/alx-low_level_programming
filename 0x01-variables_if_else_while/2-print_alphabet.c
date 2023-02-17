#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 * Resulrt should be followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char lowerCase;
	lowerCase = 'a';
 	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}

	putchar('\n');
		return (0);

}
