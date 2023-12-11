#include "search_algos.h"

int binary_search(int *array, size_t size, int value) {
	size_t i = 0;
	size_t j = size - 1;
	size_t l;
	size_t k;
	
	while(i < j) {
		printf("Searching in array: ");
		for (k = i; k <= j; k++) {
			if (k == j){
				printf("%d", array[k]);
			}
			else {
			printf("%d, ", array[k]);
			}
		}
		printf("\n");

		l = (i + j)/2;
		if (value < array[l])
		{
			j = l - 1;
		}
		else if (value > array[l])
		{
			i = l + 1;
		}
		else if (value == array[l]) {
			return(l);
		}
	}
	printf("Searching in array: ");
		for (k = i; k <= j; k++) {
			if (k == j){
				printf("%d", array[k]);
			}
			else {
			printf("%d, ", array[k]);
			}
		}
		printf("\n");



	l = -1;
	return (l);
}
