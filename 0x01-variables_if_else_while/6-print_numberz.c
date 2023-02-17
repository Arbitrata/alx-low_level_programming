#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 * and then in uppercase
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main (void) {

	char y = 0;

	while (y < 10){
	
		putchar(y + '0');
		y++;
	}

	putchar('\n');
	return(0);

}

