#include<stdio.h>

int main() {
	printf("enter your mark: ");
	float mark;
	scanf("%f", &mark);

	if (mark <0 || mark>100) {
		printf("invalid mark");
		return 1;
	}
	if(mark<50) printf("Failed.");
	else printf("Passed.");
	return 0;
}
