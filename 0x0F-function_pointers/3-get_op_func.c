#include "3-cal.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - this function perform operation given from user
 * @s: the operator to be performed
 * Return: the pointer of that parametric funciton
 */
int (*get_op_func(char *s))(int, int)
{
		op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	    };
	int i = 0;
	while (ops[i] != NULL)
	{
		if (ops[i].op[0] == *s)
		{
			return (ops[i][0]);
		}
		i++;
	}
	return (NULL);
}
