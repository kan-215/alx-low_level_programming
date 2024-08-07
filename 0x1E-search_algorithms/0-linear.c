#include "search_algos.h"

/**
 * linear_search - searche for values in an array of integers in a linear search
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: teh values to be searched
 * Return: return first inddex where value is located, else -1 if null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
