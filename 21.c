#include<stdio.h>

int main()  {
	printf("enter the size of the array: ");
	int size;
	scanf("%d", &size);

	int arr[size];
	printf("enter the array: ");
	for(int i = 0; i<size; i++) {
		scanf("%d",&arr[i]);
	}

	int adjArr[size - 1];
	for(int i = 0; i< size - 1; i++) {
		adjArr[i] = arr[i] * arr[i+1];
	}

	printf("adjacent multiplied array: ");
	for(int i = 0; i<size - 1; i++) {
		printf("%d ",adjArr[i]);
	}
	return 0;
}
