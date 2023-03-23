#include "3-calc.h"

/**
 * get_op_func - Gives the necessary operation.
 *
 * @s: Operation.
 *
 * Return: Returns the required function.
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

	int a = 0;

	while (ops[a].op != NULL)
	{
		/*checks if the characters of *s and ops[a] match*/
		if (*s == ops[a].op[0])
		{
			/*return a ponter corresponding function stored in the ops[i]*/
			return (ops[a].f);
		}

		++a;
	}

	return (NULL);


}
