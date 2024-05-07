#include<stdio.h>

void scanArray(int arr[], int size ) {

	for(int i = 0; i<size; i++) {
		scanf("%i", &arr[i]);
	}
}
void printArray(int arr[], int size){
	for(int i =0; i<size; i++){
		printf("%i ", arr[i]);
	}
	printf("\n");
}

void swapArray(int arr1[], int arr2[], int len, int temp[]){
	for(int i = 0; i<len; i++) {
		temp[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp[i];
	}
	
}

int main() {
	printf("enter the length of the array: ");
	int len;
	scanf("%i",&len);
	int arr1[len], arr2[len], temp[len];
	printf("enter the values of two array.(values separated by comma in each array) \n\n");
	printf("array 1: ");
	scanArray(arr1, len);
	printf("array 2: ");
	scanArray(arr2, len);

	printArray(arr1, len);
	printArray(arr2, len);

	swapArray(arr1, arr2, len, temp);

	printf("reversed array 1: ");
	printArray(arr1, len);
	printf("reversed array 2: ");
	printArray(arr2, len);
	return 0;
}
