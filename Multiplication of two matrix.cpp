#include <stdio.h>

int main() 
{
	
    int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2]={{4,5},{5,6},{7,8}};
	int res[2][2];
	
	int i,j,k;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
        	res[i][j] = 0;
            for (k=0; k<3; k++){
            	res[i][j] += a[i][k] * b[k][j];
			}
        }
    }

    printf("the res is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d  ", res[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
