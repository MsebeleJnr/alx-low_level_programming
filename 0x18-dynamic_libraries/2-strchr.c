#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 * Return: the pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;
	
	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
