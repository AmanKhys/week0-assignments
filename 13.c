#include<stdio.h>

int main() {
	printf("enter a palindorme: ");
	char arr[100];
	scanf("%s", arr);
	int size= 0;
	for(int i = 0; i<= 100; i++){
		if(arr[i] != '\0') size++;
	}
	printf("size: %d \n",size);

	for(int i = 0; i<size; i++) {
		if(arr[i] != arr[size - i -1]){
			printf("not palindorme. ");
			return 1;
		}
	}
	printf("it is a palindrome.");
	return 0;
}
