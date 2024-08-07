#include "search_algos.h"
/**
 * advanced_recursive_binary - searches for a value in a sorted array of integers
 * @array: pointer to the elements
 * @low: lowest index to begin searching
 * @high :highest index of the  array
 * @s_value: value to search
 * Return: index of s_value,else -1 if s_value not in array
 */
int advanced_recursive_binary(int *array, size_t low, size_t high, int s_value)
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
	{
		if (array[medium - 1] == s_value)
			return advanced_recursive_binary(array, low, medium, s_value);
		return (medium);
	}
	if (array[medium] < s_value)
		return advanced_recursive_binary(array, medium + 1, high, s_value);
	if (array[medium] > s_value)
		return advanced_recursive_binary(array, low, medium - 1, s_value);
	return (-1);
}
/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: pointer to the elements
 * @size: number of elements
 * @value: value to search
 * Return: index of value in array, else -1 if array is null
 */
int advanced_binary(int *array, size_t size, int value)
{
	int s_value;
	size_t low, high;

	if (size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	s_value = advanced_recursive_binary(array, low, high, value);
	if (s_value == -1)
		return (-1);
	return (s_value);
}
