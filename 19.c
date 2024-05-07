#include<stdio.h>

int main() {
	printf("enter your annual income: ");
	float income;
	scanf("%f", &income);
	float tax = 0;
	if(income > 5000000) {
		income = 5000000;
	}
	if(income > 1000000) {
		tax += (income- 1000000)*.3;
		income = 1000000;
	}
	if(income > 500000) {
		tax += (income- 500000)*.2;
		income = 500000;
	}
	if(income > 250000){
		tax += (income - 250000)*.05;
	}
		income = 0;
	printf("taxable amount: %f", tax);
	return 0;
}

