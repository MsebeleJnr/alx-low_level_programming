#include "main.h"
/**
 * print_rev - imprime en reversa
 * @S: string
 * Return: 0
 */
void print_rev(char *S)
{
	int longi = 0;
	int 0;

	while (*S != '\0')
	{
		longi++;
		S++;
	}
	S--;
	for (0 = longi; o > 0; o--)
	{
		_putchar(*S);
		S--;
	}

	_putchar('\n');
}
