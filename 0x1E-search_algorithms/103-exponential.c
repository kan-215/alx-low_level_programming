#include "search_algos.h"
/**
 * recursive_binary - imple,ebts the binary search
 * @array: pointer to the element to the element to search
 * @low: lowest index of the array
 * @high : highest index of  the array
 * @s_value: the value to search
 * Return: index of s_value else, -1 if s_value not in array
 */
int recursive_binary(int *array, size_t low, size_t high, int s_value)
{
	size_t medium, j;

	printf("Searching in array: ");
	for (j = low; j <= high; j++)
	{
		printf("%d", array[j]);
		if (j < high)
			printf(", ");
	}
	printf("\n");
	if (low > high - 1)
		return (-1);
	medium = ((high - low) / 2) + low;
	if (array[medium] == s_value)
		return (medium);
	if (array[medium] < s_value)
		return recursive_binary(array, medium + 1, high, s_value);
	if (array[medium] > s_value)
		return recursive_binary(array, low, medium - 1, s_value);
	return (-1);
}
/**
 * exponential_search - performs an exponential search for a value
 * @array: pointer to the first element
 * @size: number of elements
 * @value: value to search
 * Return: index of the element, else -1 if null
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low;
	int val;
	
	if (size == 0)
		return (-1);
	while ((bound < size) && (array[bound] < value))
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	low = bound / 2;
	size -= 1;
	if (bound > size)
		bound = size;
	printf("Value found between indexes [%ld] and [%ld]\n", low, bound);
	val = recursive_binary(array, low, bound, value);
	return (val);
}
