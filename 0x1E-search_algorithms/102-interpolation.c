#include <stdio.h>

/**
 * interpolation_search - searches for a value using interpolation 
 * @array: pointer to the first value
 * @size: number of elements
 * @value: the value to be searched
 * Return: return index of value else -1 if null
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

			if (array[pos] == value)
				return (pos);
			if (array[pos] < value)
				low = pos + 1;
			else
				high = pos - 1;
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
	}

	return (-1);
}
