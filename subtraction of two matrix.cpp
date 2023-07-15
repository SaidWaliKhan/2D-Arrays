#include<stdio.h>

int main(){
	int a[2][3], b[2][3], sub[2][3], i, j;
	
	printf("Enter the first matrix: \n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter the second matrix: \n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	printf("The subtraction is:\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			sub[i][j] = a[i][j] - b[i][j];
			printf("%d ", sub[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
