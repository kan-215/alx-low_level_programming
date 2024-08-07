#include "search_algos.h"

/**
 * jump_search - searches a value in a sorted array of integer using jump search
 * @array: this is the array to search for
 * @size: number of elements
 * @value: value to search for
 * Return: return index of the element else -1 if the array is null
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = (size_t)sqrt(size);
	size_t prev = 0;
	size_t current = jump_step;
	size_t j;

	if (array == NULL)
		return (-1);

	while (array[current - 1] < value && current < size)
	{
		printf("Value checked array[%ld] = [%d]\n", current - 1, array[current - 1]);
		prev = current;
		current += jump_step;
		if (current > size)
			current = size;
	}

	for (j = prev; j < current; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
