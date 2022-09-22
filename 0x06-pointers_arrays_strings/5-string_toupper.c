#include "main.h"
/**
 * sring_toupper -> converting any string to uppercase
 * @x: string param
 * Return: string
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (c[i] >= 97 && x[i] <= 122)
			x[i] = x[1] - 32;
		i++;
	}
	return (x);
}
