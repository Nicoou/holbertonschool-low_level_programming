/bin/bash: q: command not found

int
linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			break;
	}
	return ((i < size) ? (int)i : -1);
}
