#include "search_algos.h"

/**
 *linear_search - searches for a value using linear search
 * @array: is a pointer to the first element of the array to search
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 *
 * Return:  the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
