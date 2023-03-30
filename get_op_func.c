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

	size_t i;

	for (i = 0; i < sizeof(ops) / sizeof(op_t); i++)
	{
		if (ops[i].op == s)
			return (ops[i].f);
	}

return (NULL);
}
