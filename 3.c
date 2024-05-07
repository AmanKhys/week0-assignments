#include<stdio.h>

int main() {
	printf("enter the principal amount: ");
	int p;
	scanf("%i",&p);
	printf("\n\n");

	printf("enter the rate of interest: ");
	float r;
	scanf("%f",&r);
	printf("\n\n");

	printf("enter the number of years: ");
	float n;
	scanf("%f",&n);
	printf("\n\n");

	float si = p*r*n;
	printf("simple interest: %f",si);

	return 0;
}
