#include "3-calc.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (strlen(argv[2]) != 1 || f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((b == 0) && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = (*f)(a, b);
	printf("%d\n", result);
	return (0);
}
