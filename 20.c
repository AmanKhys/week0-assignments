#include<stdio.h>

int main() {
	int n = 10;
	int rowCount = 1;
	for(int i = 1; i<=n; ) {
		for(int count = rowCount; count>0; count--){
			printf("%d ",i);
			i++;
		}
		printf("\n");
		rowCount++;
	}
	return 0;
}
