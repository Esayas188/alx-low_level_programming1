#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char b;

<<<<<<< HEAD
	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);

=======
	for (b = 'a'; b <= 'z'; b++)
		putchar(b);
	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);

	putchar('\n');
>>>>>>> 101cee6f9307582a040b3ac36336316a6cc9acd2
	return (0);
}
