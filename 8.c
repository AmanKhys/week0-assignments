#include<stdio.h>

int main() {
	printf("enter the limit: ");
	int l;
	scanf("%i", &l);
	int sum;

	for(int i =0; i<=l; i++){
		if((i+1)%2==0){
			sum+=i;
		}
	}
	printf("the sum of all the odd numbers upto %i is %i",l,sum);
	return 0;
}
