#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		putchar(b);

	putchar('\n');
	return (0);
}
