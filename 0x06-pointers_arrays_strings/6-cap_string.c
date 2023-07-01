#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while(!(str[index] >= 'a' && str[index] <= 'Z'))
		index++;
	if(str[index - 1] == ' '||
