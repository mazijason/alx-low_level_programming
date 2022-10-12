#include "3-calc.h"
#include "3-calc.h"

/**
 * get_op_func - selects function to perform operation
 * 		 the operation asked by the user.
 * @s: operator
 *
 * Return: pointer to func that correspond to operator
 * 	   to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
