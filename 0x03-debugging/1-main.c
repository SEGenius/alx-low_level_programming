#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: always 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	/*
	 * i = 0;  in this loop is the problem
	 *
	 * while (i < 10)
	 {
	 * putchar(i);
	 }
	*/
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
