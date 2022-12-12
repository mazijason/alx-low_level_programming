#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: is the initial segment.
* @accept: is the accepted bytes.
*
* Return: the number of accepted bytes.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
char *accept_b;

for (i = 0; s[i]; ++i)
{
for (accept_b = accept; *accept_b; ++accept_b)
{
if (s[i]  == *accept_b)
break;
}
if (!*accept_b)
break;
}
return (i);
}
