#include <stdio.h>

/**
 * main -prints alphabet a to z
 *
 * Return: Always (0)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
