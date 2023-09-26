#include "sort.h"

/**
* swap - swaps two integers
* @a: int 1
* @b: int 2
*/

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
* partition - Lomuto partition scheme
* @array: array
* @size: size
* 
* Return: pivot
*/

int partition(int *array, size_t size)
{
	int pivot = array[size - 1];
	int i = -1;
	size_t j;

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[size -1]);
	return (i + 1);
}

/**
* quick_sort - quick sort algorthm using the Lomuto partition scheme
* @array: list of integers
* @size: size of the array
*/

void quick_sort(int *array, size_t size)
{
	int pivot;

	if (size <= 1)
		return;

	pivot = partition(array, size);
	quick_sort(array, pivot);
	print_array(array, size);
	quick_sort(array + pivot + 1, size - pivot - 1);
}
