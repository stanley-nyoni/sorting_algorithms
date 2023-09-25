#include "../sort.h"

/**
* main - entry point - test bubble sort
*
*/
int main(void)
{
	int bestCase[] = {1, 2, 3, 4, 5, 6};
	int duplicateElements[] = {5, 2, 3, 5, 1, 2, 3};
	int worstCase[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	size_t n = sizeof(bestCase) / sizeof(bestCase[0]);
	size_t n1 = sizeof(duplicateElements) /sizeof(duplicateElements[0]);
	size_t n2 = sizeof(worstCase) / sizeof(worstCase[0]);

	print_array(bestCase, n);
	printf("\n");
	bubble_sort(bestCase, n);
	printf("Bubble sorted list - best case\n");
	print_array(bestCase, n);

	printf("\n");
	bubble_sort(duplicateElements, n1);
	printf("Bubble sorted list - duplicate elements\n");
	print_array(duplicateElements, n1);

	printf("\n");
	bubble_sort(worstCase, n2);
	printf("Bubble sorted list - worst case\n");
	print_array(worstCase, n2);
	return (0);

	/* Tests developed by - Stanley 25/09/23*/

}
