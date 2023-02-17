#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 * Resulrt should be followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void) 
{

	char y,x;

	y = 'a';
	x = 'A';
	while (y <= 'z') 
	{
	putchar(y);
	y++;
	}
	while (x <= 'z') 
	{
	putchar(x);
	x++;
	}
	putchar('\n');
	return (0);
}

