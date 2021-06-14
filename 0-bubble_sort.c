#include "sort.h"

/**
 * bubble_sort - performs a bubble sort on array
 * @array: array data
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, s, j;

	if (!array || size < 2)
		return;

	s = size;
	while (s > 0)
	{
		j = 0;
		for (i = 0; i + 1 < size; i++)
		{
			if (array[i + 1] < array[i])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				j = i + 1;
				print_array(array, size);
			}
		}
		s = j;
	}
}
