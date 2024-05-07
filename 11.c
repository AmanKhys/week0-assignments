#include<stdio.h>

int main() {
	printf("enter the size of the array: ");
	int size;
	scanf("%i", &size);

	int arr[size];
	printf("enter the array (separated by space): ");
	for(int i = 0; i<size; i++) {
		scanf("%d", &arr[i]);
	}
	
	int evenCounter = 0;
	for(int i =0; i<size; i++) {
		if(arr[i]%2==0) evenCounter++;
	}
	printf("even numbers in the array: %d", evenCounter);

	return 0;
}
