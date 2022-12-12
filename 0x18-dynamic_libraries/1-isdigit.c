#include "main.h"

/**
* _isdigit - Check if a character is a digit
* @c: c is the number to be checked
*
* Return: 1 for a character that will be a digit, otherwise 0.
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
return (0);
}
