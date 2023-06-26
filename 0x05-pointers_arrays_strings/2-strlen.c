#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @S: string
 * Return: lenght
 */int _strlen(char *S)
{
	int longi = 0;

	while (*S != '\0')
	{
		longi++;
		S++;

	}
	return (longi);

}
		
	
