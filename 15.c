#include<stdio.h>
void printArray(int size,int arr[size]){
	for(int i =0; i<size; i++) {
		printf("%d ", arr[i]);
	}
}
void getArray(int size,int arr[size]){
	for(int i =0; i<size; i++) {
		scanf("%d", &arr[i]);
	}
}
int main() {
	printf("enter the size of the array:");
	int size;
	scanf("%d", &size);
	int arr[size];
	getArray(size,arr);
	printArray(size, arr);

	return 0;
}
