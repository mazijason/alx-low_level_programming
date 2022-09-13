#include "main.h"


/**
 * main - Entry point
 *
 * Return: nothing, return void
 */

int main(void)
{
	char holberton[] = "_putchar";
	int msg;
	for (msg = 0; msg <= 8; msg++)
	{
		_putchar(_putchar[msg]);
	}
	_putchar('\n');
	return (0);
}

