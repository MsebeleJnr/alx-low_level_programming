#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Finds the length of a string
 * @str: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int f;

	for(f = 0; str[f]; f++)
		;

	return (f);
}

/**
 * main - multiples two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	unsigned long int a, b, res;

	int len_a, len_b;

	len_a = _strlen(argv[1]);
	len_b = _strlen(argv[2]);

	for (f = 0; f < )

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	res = mul(a, b);
	printf("%d", res);
}
