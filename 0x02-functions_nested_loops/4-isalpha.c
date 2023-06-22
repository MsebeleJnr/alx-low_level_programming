#include "main.h"

/**
 * _isalpha - Checks for alphabetic charater
 * @c: The charater to be checked
 * Return: 1 for alphabeticcharater or 0 for anything else
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
