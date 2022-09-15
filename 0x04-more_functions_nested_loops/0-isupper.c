#include "main.h"

/**
 * _isupper - functions that check for uppercase character
 *  @c: the character
 *  Return: 1 if c is uppecase overwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
