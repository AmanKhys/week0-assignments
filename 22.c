#include<stdio.h>
void getArray(int size,int arr[size][size] ){
	for(int i = 0; i< size; i++){
		for(int j=0; j< size; j++){
			scanf("%d", &arr[i][j]);
		}
	}	
}

void sumArray(int size,int arr1[size][size],int arr2[size][size], int sum[size][size] ){
	for(int i = 0; i< size; i++){
		for(int j=0; j< size; j++){
			sum[i][j] =  arr1[i][j]+arr2[i][j];
		}
	}	
}


void displayArray(int size,int arr[size][size] ){
	for(int i = 0; i< size; i++){
		for(int j=0; j< size; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}	
	printf("\n\n");
}
int main() {
	printf("enter the size of the matrix: ");
	int size;
	scanf("%d", &size);

	int arr1[size][size];
	int arr2[size][size];

	printf("array 1: \n\n");
	getArray(size, arr1);
	printf("array 2: \n\n");
	getArray(size, arr2);
	printf("\n\n");

	displayArray(size, arr1);
	displayArray(size, arr2);
	printf("the sum array : \n");
	int sum[size][size];
	sumArray(size, arr1, arr2, sum);
	displayArray(size, sum);
	return 0;
}
