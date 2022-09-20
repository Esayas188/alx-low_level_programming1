#include "main.h"
/**
 * puts -> pus2 fuction
 * @str: strparameter
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');

}
