#include "../sort.h"

/**
* main - entry point - test selection_sort
*
*/

int main(void)
{
	int best_case[] = {1, 2, 3, 4, 5};
	int avg_case[] = {64, 25, 12, 22, 11};
	int worst_case[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	size_t n = sizeof(best_case) / sizeof(best_case[0]);
	size_t n1 = sizeof(avg_case) / sizeof(avg_case[0]);
	size_t n2 = sizeof(worst_case) / sizeof(worst_case[0]);

	printf("\n");
	print_array(best_case, n);
	printf("\n");
	selection_sort(best_case, n);
	printf("Selection sorted list - best case\n");
	print_array(best_case, n);
	
	printf("\n");
	print_array(avg_case, n1);
	printf("\n");
	selection_sort(avg_case, n1);
	printf("Selection sorted list - average case\n");
	print_array(avg_case, n1);

	printf("\n");
	print_array(worst_case, n2);
	printf("\n");
	selection_sort(worst_case, n2);
	printf("Selection sorted list - worst case\n");
	print_array(worst_case, n2);

	return (0);

}
