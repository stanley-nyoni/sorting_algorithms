#include "sort.h"

/**
* selection_sort - sorts the given array of integers
* using the selection sort algorithm
* @array: list of ints
* @size: size of array
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			min = i;

			for (j = i + 1; j < size; j++)
				if (array[j] < array[min])
					min = j;
			if (min != i)
			{
				temp = array[min];
				array[min] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
}
