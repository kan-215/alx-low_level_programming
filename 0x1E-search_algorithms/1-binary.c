#include "search_algos.h"

/**
*binary_search - searches for a value in a sorted array of integers
 *@array: pointer to the first element in the array
 *@size: number of elements in the array
 *@value: value to search for
 *Return: return index of the element, else -1 if array is null
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		size_t mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(",");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
