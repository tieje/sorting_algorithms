#include "sort.h"
/**
 * selection_sort - performs a selection sort on array
 * @array: array data
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int smallest;
	size_t index_switch = 0;
	size_t i;
	size_t j;
	int tmp;

	if (!array || size < 2)
		return;

	for (i = 0; i + 1 < size; i++)
	{
		smallest = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < smallest)
			{
				smallest = array[j];
				index_switch = j;
			}
		}
		if (index_switch > i)
		{
			tmp = array[i];
			array[i] = smallest;
			array[index_switch] = tmp;
			print_array(array, size);
		}
	}
}
