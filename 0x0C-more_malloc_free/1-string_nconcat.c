#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int f;
	unsigned int g;
	unsigned int s1_len;
	unsigned int concat_len;
	char *concat;

	s1_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[f]; f++)
		s1_len++;

	concat_len = s1_len + n;

	concat = malloc(sizeof(char) * (concat_len + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; f < s1_len; f++)
	{
		concat[f] = s1[f];
	}

	for (g = 0; g < n; g++; f++)
	{
		concat[f] = s2[g];
	}

	concat[f] = '\0';

	return (concat);
}
