#include <stdio.h>
void bubbleSort(int a[], int size) {
	int i, j, k, temp;

	for (i = size - 1; i > 0; i--) {
		printf("\n %d´Ü°è>>", size - i);
		for (j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		printf("\n\t");
		for (k = 0; k < size; k++)
			printf("%3d ", a[k]);
		}
	}
}