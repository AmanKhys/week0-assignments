#include<stdio.h>

int main() {
	printf("enter your marks:\n\n");
	int w,l,a;
	printf("written test: ");
	scanf("%d", &w);
	printf("\n\n");
	printf("lab test: ");
	scanf("%d", &l);
	printf("\n\n");
	printf("assignment test: ");
	scanf("%d", &a);
	printf("\n\n");

	printf("weighted average: %f",w*.7 + l*.2 + a*.1);
	return 0;
}
