#include <stdio.h>

void SelectionSort(int a[], int size) {
	int i, j, k, min, temp;

	for (i = 0; i < size - 1; i++) {
		min = i;
		for (j = i + 1; j < size; j++) {
			if (a[j] < a[min])
				min = j;
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
		printf("\n%d´Ü°è : ", i + 1);
		for (k = 0; k < size; k++)
			printf("%3d ", a[k]);
	}
}