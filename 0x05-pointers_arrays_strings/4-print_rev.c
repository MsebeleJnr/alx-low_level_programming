#include "main.h"
/**
 * print_rev - imprime en reversa
 * @S: string
 * return: 0
 */
void print_rev(char *S)
{
	int longi = 0;
		int o;

	while (*S != '\0')
	{
		longi++;
		S++;
	}
	S--;
	for (o = longi, o > 0; o--)
	{
		_putchar(*S);
		S--;
	}
}
