#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order using
 * the Shell sort algorithm (Knuth sequence)
 * @array: pointer to the head of the array
 * @size: the size of the array
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int ph;

	if (!array || size < 2)
		return;

	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			ph = array[i];
			for (j = i; j >= gap && array[j - gap] > ph; j -= gap)
				array[j] = array[j - gap];
			array[j] = ph;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
