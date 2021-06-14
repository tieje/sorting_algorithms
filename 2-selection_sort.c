#include "sort.h"

/**
 * selection_sort - performs a selection sort on array
 * @array: array data
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t smallest, i, j;
	int tmp;

	if (!array || size < 2)
		return;

	for (i = 0; i + 1 < size; i++)
	{
		smallest = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[smallest])
				smallest = j;
		}
		if (i != smallest)
		{
			tmp = array[i];
			array[i] = array[smallest];
			array[smallest] = tmp;
			print_array(array, size);
		}
	}
}
