#include<stdio.h>

int main() {
	printf("Enter a number: ");
	int num;
	scanf("%d", &num);
	for(int i = 0; i< num; i++) {
		printf("%d ",i);
		if((i+1)%2==0) i = i +2;
	}
	return 0;
}
