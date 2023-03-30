#include "main.h"


/**
 * get_op_func - gets a function
 * @s: the operator
 * Return: Pointer to one of the functions
 */

int (*get_op_func(char s))(va_list)
{
	op_t ops[] = {
		{'c', printChar},
		{'s', printString},
		{'%', printSign},
		{'d', printNum},
		{'i', printNum}
	};


	int i = 0;

	while (i < 5)
	{
		if (ops[i].op == s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
