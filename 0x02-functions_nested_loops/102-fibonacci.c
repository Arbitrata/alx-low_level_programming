#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2
 * separated by a comma followed by a space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int sum = 0;

        for (int i = 1; i < 1024; i++)
         {

	 	 if ((i % 3) == 0 || (i % 5) == 0)

	 	 {
         
		      	 sum += i;
                 }
         }

    printf("%d\n", sum);

    return 0;
}

