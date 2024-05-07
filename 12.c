#include<stdio.h>

int main() {
	printf("enter the array size: ");
	int size;
	scanf("%d", &size);

	int arr[size];
	printf("enter the array: ");
	for(int i = 0; i< size; i++) {
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i< size; i++) {
		for(int j = i + 1; j< size; j++) {
			if (arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}

	}
		printf("sorted array: ");
		for(int i = 0; i<size; i++){
			printf("%d ", arr[i]);
		}
		printf("\n");
	return 0;
}
