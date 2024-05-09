#include<stdio.h>

int main() {
	printf("program to print a pattern. \n\nEnter a number: ");
	int num;
	scanf("%d", &num);

	int odd = 1, even = 1;
	for(int i = 1; i<num; i++) {
		if(i%2!=0) {
			for(int j = 1; j<=odd; j++){
				printf("* * ");		
			}
			odd++;
			printf("\n");
		} else {
			for(int j = 1; j<=even; j++) {
				printf("*\n*\n*\n");
			}
			even++;
		}
	}
	return 0;
}
