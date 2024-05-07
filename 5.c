#include<stdio.h>

int main() {
	printf("enter your mark: ");
	float mark;
	scanf("%f", &mark);

	if (mark <0 || mark>100) {
		printf("invalid mark");
		return 1;
	}
	
	if(mark>90) printf("A");
	else if(mark>=80 && mark<90) printf("B");
	else if(mark>=70 && mark<80) printf("C");
	else if(mark>=60 && mark<70) printf("D");
	else if(mark>=50 && mark<60) printf("E");
	else printf("Failed");
	return 0;
}
