#include "search_algos.h"

int linear_search(int *array, size_t size, int value) {
	size_t i;
	for (i = 0; i < size - 1; i++) {
		if (array[i] == value) {
			return i;
		}
		printf("Value checked at array[%ld] = [%d]\n",i, array[i]);
	}
	i = -1;
	return i;
}
