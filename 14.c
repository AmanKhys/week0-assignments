#include<stdio.h>

void scanArray(int size, int arr[size][size] ) {
	for(int i = 0; i< size; i++){
		for(int j = 0; j<size; j++) {
		scanf("%d", &arr[i][j]);
		}
	}
}

int main() {
	printf("enter the size of the array: ");
	int size;
	scanf("%d", &size);

	int arr1[size][size];
	int arr2[size][size];
	
	printf("enter the first matrix of size %d \n", size);
	scanArray(size, arr1);
	
	printf("enter the second matrix of size %d \n", size);
	scanArray(size, arr2);


	printf("the sum matrix: \n\n");
	for(int i = 0; i< size; i++) {
		for(int j = 0; j< size; j++) {
			arr1[i][j] += arr2[i][j];
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	return 0;
}
