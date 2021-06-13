#include "sort.h"
/**
 * bubble_sort - performs a bubble sort on array
 * @array: array data
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i;

	for (i = 0; i + 1 < size; i++)
	{
		if (array[i + 1] < array[i])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			print_array(array, size);
			bubble_sort(array, size);
		}
	}
}
