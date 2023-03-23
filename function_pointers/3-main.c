#include "3-calc.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);
	int result;
	char *save_argv;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	save_argv = argv[2];

	f = get_op_func(save_argv);

	if (f == NULL)
	{
		printf("Error\n");
		return(99);
	}
	if ((save_argv[0] == '/' || save_argv[0] == '%') && argv[1][3] == 0)
	{
		printf("Error\n");
		return(100);
	}
	result = f(a, b);
	printf("%d,n", result);
	return (0);
}
