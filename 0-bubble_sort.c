#include "sort.h"

/**
* bubble_sort - sort the array using bubble sort algorithm
*
* @array: array to be sorted
* @size: size of the array to be sorted
*/

void bubble_sort(int *array, size_t size)
{
	size_t i;
	bool swapped = true;
	int temp;

	if (size >= 2)
	{
		while (swapped)
		{
			swapped = false;
			for (i = 0; i < size - 1; i++)
			{
				if (array[i] > array[i + 1])
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					print_array(array, size);
					swapped = true;
				}
			}

		}
	}
}
